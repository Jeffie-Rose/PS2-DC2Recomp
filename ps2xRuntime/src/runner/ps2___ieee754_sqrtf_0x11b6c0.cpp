#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ieee754_sqrtf
// Address: 0x11b6c0 - 0x11b7f8
void ps2___ieee754_sqrtf_0x11b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_sqrtf_0x11b6c0");
#endif

    switch (ctx->pc) {
        case 0x11b740u: goto label_11b740;
        case 0x11b7a8u: goto label_11b7a8;
        default: break;
    }

    ctx->pc = 0x11b6c0u;

    // 0x11b6c0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11b6c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11b6c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6c8: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x11b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x11b6cc: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x11b6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x11b6d0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B6D0u;
    {
        const bool branch_taken_0x11b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b6d0) {
            ctx->pc = 0x11B6E8u;
            goto label_11b6e8;
        }
    }
    ctx->pc = 0x11B6D8u;
    // 0x11b6d8: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x11b6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11b6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6DCu;
            // 0x11b6e0: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B6E4u;
    // 0x11b6e4: 0x0  nop
    ctx->pc = 0x11b6e4u;
    // NOP
label_11b6e8:
    // 0x11b6e8: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x11B6E8u;
    {
        const bool branch_taken_0x11b6e8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x11B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6E8u;
            // 0x11b6ec: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6e8) {
            ctx->pc = 0x11B724u;
            goto label_11b724;
        }
    }
    ctx->pc = 0x11B6F0u;
    // 0x11b6f0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11b6f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11b6f8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11b6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11b6fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B6FCu;
    {
        const bool branch_taken_0x11b6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6FCu;
            // 0x11b700: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6fc) {
            ctx->pc = 0x11B71Cu;
            goto label_11b71c;
        }
    }
    ctx->pc = 0x11B704u;
    // 0x11b704: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B704u;
    {
        const bool branch_taken_0x11b704 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11b704) {
            ctx->pc = 0x11B724u;
            goto label_11b724;
        }
    }
    ctx->pc = 0x11B70Cu;
    // 0x11b70c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11b70cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11b710: 0x0  nop
    ctx->pc = 0x11b710u;
    // NOP
    // 0x11b714: 0x0  nop
    ctx->pc = 0x11b714u;
    // NOP
    // 0x11b718: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11b718u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_11b71c:
    // 0x11b71c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B724u;
label_11b724:
    // 0x11b724: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B724u;
    {
        const bool branch_taken_0x11b724 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B724u;
            // 0x11b728: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b724) {
            ctx->pc = 0x11B770u;
            goto label_11b770;
        }
    }
    ctx->pc = 0x11B72Cu;
    // 0x11b72c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x11b730: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11b730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11b734: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B734u;
    {
        const bool branch_taken_0x11b734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B734u;
            // 0x11b738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b734) {
            ctx->pc = 0x11B764u;
            goto label_11b764;
        }
    }
    ctx->pc = 0x11B73Cu;
    // 0x11b73c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b740:
    // 0x11b740: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x11b740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11b744: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11b744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x11b748: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11b748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11b74c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b750: 0x0  nop
    ctx->pc = 0x11b750u;
    // NOP
    // 0x11b754: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B754u;
    {
        const bool branch_taken_0x11b754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b754) {
            ctx->pc = 0x11B740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b740;
        }
    }
    ctx->pc = 0x11B75Cu;
    // 0x11b75c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B75Cu;
    {
        const bool branch_taken_0x11b75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B75Cu;
            // 0x11b760: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b75c) {
            ctx->pc = 0x11B76Cu;
            goto label_11b76c;
        }
    }
    ctx->pc = 0x11B764u;
label_11b764:
    // 0x11b764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b768: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_11b76c:
    // 0x11b76c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x11b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_11b770:
    // 0x11b770: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x11b770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x11b774: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11b778: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x11b778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x11b77c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x11b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x11b780: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11b784: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x11b784u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x11b788: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x11b788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11b78c: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x11b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x11b790: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x11b790u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x11b794: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x11b794u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11b798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b79c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11b79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7a0: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x11b7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x11b7a4: 0x0  nop
    ctx->pc = 0x11b7a4u;
    // NOP
label_11b7a8:
    // 0x11b7a8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x11b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11b7ac: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x11b7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11b7b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B7B0u;
    {
        const bool branch_taken_0x11b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b7b0) {
            ctx->pc = 0x11B7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7B0u;
            // 0x11b7b4: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B7C8u;
            goto label_11b7c8;
        }
    }
    ctx->pc = 0x11B7B8u;
    // 0x11b7b8: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x11b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11b7bc: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x11b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11b7c0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11b7c4: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x11b7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_11b7c8:
    // 0x11b7c8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B7C8u;
    {
        const bool branch_taken_0x11b7c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7C8u;
            // 0x11b7cc: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7c8) {
            ctx->pc = 0x11B7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b7a8;
        }
    }
    ctx->pc = 0x11B7D0u;
    // 0x11b7d0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B7D0u;
    {
        const bool branch_taken_0x11b7d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7D0u;
            // 0x11b7d4: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7d0) {
            ctx->pc = 0x11B7DCu;
            goto label_11b7dc;
        }
    }
    ctx->pc = 0x11B7D8u;
    // 0x11b7d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11b7dc:
    // 0x11b7dc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x11b7dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x11b7e0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x11b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x11b7e4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x11b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11b7e8: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x11b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11b7ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11b7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B7F8u;
}
