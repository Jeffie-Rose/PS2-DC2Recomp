#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: floorf
// Address: 0x11e698 - 0x11e77c
void floorf_0x11e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("floorf_0x11e698");
#endif

    switch (ctx->pc) {
        case 0x11e718u: goto label_11e718;
        default: break;
    }

    ctx->pc = 0x11e698u;

    // 0x11e698: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11e698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6a0: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x11e6a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x11e6a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11e6a8: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x11e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x11e6ac: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x11e6acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11e6b0: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x11E6B0u;
    {
        const bool branch_taken_0x11e6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e6b0) {
            ctx->pc = 0x11E6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6B0u;
            // 0x11e6b4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E760u;
            goto label_11e760;
        }
    }
    ctx->pc = 0x11E6B8u;
    // 0x11e6b8: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E6B8u;
    {
        const bool branch_taken_0x11e6b8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11e6b8) {
            ctx->pc = 0x11E6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6B8u;
            // 0x11e6bc: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E704u;
            goto label_11e704;
        }
    }
    ctx->pc = 0x11E6C0u;
    // 0x11e6c0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e6c4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11e6c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x11e6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e6cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11e6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e6d0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11e6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e6d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e6d8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x11E6D8u;
    {
        const bool branch_taken_0x11e6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e6d8) {
            ctx->pc = 0x11E770u;
            goto label_11e770;
        }
    }
    ctx->pc = 0x11E6E0u;
    // 0x11e6e0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E6E0u;
    {
        const bool branch_taken_0x11e6e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11E6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6E0u;
            // 0x11e6e4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6e0) {
            ctx->pc = 0x11E6F0u;
            goto label_11e6f0;
        }
    }
    ctx->pc = 0x11E6E8u;
    // 0x11e6e8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11E6E8u;
    {
        const bool branch_taken_0x11e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6E8u;
            // 0x11e6ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6e8) {
            ctx->pc = 0x11E770u;
            goto label_11e770;
        }
    }
    ctx->pc = 0x11E6F0u;
label_11e6f0:
    // 0x11e6f0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x11e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x11e6f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e6f8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11e6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11e6fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11E6FCu;
    {
        const bool branch_taken_0x11e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6FCu;
            // 0x11e700: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6fc) {
            ctx->pc = 0x11E770u;
            goto label_11e770;
        }
    }
    ctx->pc = 0x11E704u;
label_11e704:
    // 0x11e704: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e708: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x11e708u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e70c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x11e70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x11e710: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E710u;
    {
        const bool branch_taken_0x11e710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e710) {
            ctx->pc = 0x11E720u;
            goto label_11e720;
        }
    }
    ctx->pc = 0x11E718u;
label_11e718:
    // 0x11e718: 0x3e00008  jr          $ra
    ctx->pc = 0x11E718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E718u;
            // 0x11e71c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E720u;
label_11e720:
    // 0x11e720: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e724: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11e724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x11e728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e72c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11e72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e730: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11e730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e738: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x11E738u;
    {
        const bool branch_taken_0x11e738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e738) {
            ctx->pc = 0x11E770u;
            goto label_11e770;
        }
    }
    ctx->pc = 0x11E740u;
    // 0x11e740: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E740u;
    {
        const bool branch_taken_0x11e740 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11E744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E740u;
            // 0x11e744: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e740) {
            ctx->pc = 0x11E758u;
            goto label_11e758;
        }
    }
    ctx->pc = 0x11E748u;
    // 0x11e748: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x11e74c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x11e74cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e750: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e754: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x11e754u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_11e758:
    // 0x11e758: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11E758u;
    {
        const bool branch_taken_0x11e758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E758u;
            // 0x11e75c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e758) {
            ctx->pc = 0x11E770u;
            goto label_11e770;
        }
    }
    ctx->pc = 0x11E760u;
label_11e760:
    // 0x11e760: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11E760u;
    {
        const bool branch_taken_0x11e760 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e760) {
            ctx->pc = 0x11E718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e718;
        }
    }
    ctx->pc = 0x11E768u;
    // 0x11e768: 0x3e00008  jr          $ra
    ctx->pc = 0x11E768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E768u;
            // 0x11e76c: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E770u;
label_11e770:
    // 0x11e770: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11e770u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e774: 0x3e00008  jr          $ra
    ctx->pc = 0x11E774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E774u;
            // 0x11e778: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E77Cu;
}
