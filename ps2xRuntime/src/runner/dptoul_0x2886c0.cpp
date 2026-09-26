#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dptoul
// Address: 0x2886c0 - 0x288760
void dptoul_0x2886c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoul_0x2886c0");
#endif

    switch (ctx->pc) {
        case 0x2886d8u: goto label_2886d8;
        case 0x2886f0u: goto label_2886f0;
        default: break;
    }

    ctx->pc = 0x2886c0u;

    // 0x2886c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2886c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2886c4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2886c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2886c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2886c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2886ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2886d0: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x2886D0u;
    SET_GPR_U32(ctx, 31, 0x2886D8u);
    ctx->pc = 0x2886D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2886D0u;
            // 0x2886d4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886D8u; }
        if (ctx->pc != 0x2886D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886D8u; }
        if (ctx->pc != 0x2886D8u) { return; }
    }
    ctx->pc = 0x2886D8u;
label_2886d8:
    // 0x2886d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2886d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2886dc: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2886dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2886e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2886E0u;
    {
        const bool branch_taken_0x2886e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2886E0u;
            // 0x2886e4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886e0) {
            ctx->pc = 0x2886F0u;
            goto label_2886f0;
        }
    }
    ctx->pc = 0x2886E8u;
    // 0x2886e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2886E8u;
    {
        const bool branch_taken_0x2886e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2886E8u;
            // 0x2886ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886e8) {
            ctx->pc = 0x2886F8u;
            goto label_2886f8;
        }
    }
    ctx->pc = 0x2886F0u;
label_2886f0:
    // 0x2886f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2886F0u;
    {
        const bool branch_taken_0x2886f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2886F0u;
            // 0x2886f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886f0) {
            ctx->pc = 0x288754u;
            goto label_288754;
        }
    }
    ctx->pc = 0x2886F8u;
label_2886f8:
    // 0x2886f8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2886F8u;
    {
        const bool branch_taken_0x2886f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2886FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2886F8u;
            // 0x2886fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886f8) {
            ctx->pc = 0x288754u;
            goto label_288754;
        }
    }
    ctx->pc = 0x288700u;
    // 0x288700: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x288700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x288704: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288704u;
    {
        const bool branch_taken_0x288704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288704u;
            // 0x288708: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288704) {
            ctx->pc = 0x28871Cu;
            goto label_28871c;
        }
    }
    ctx->pc = 0x28870Cu;
    // 0x28870c: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28870Cu;
    {
        const bool branch_taken_0x28870c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x288710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28870Cu;
            // 0x288710: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28870c) {
            ctx->pc = 0x2886F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2886f0;
        }
    }
    ctx->pc = 0x288714u;
    // 0x288714: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x288714u;
    {
        const bool branch_taken_0x288714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288714) {
            ctx->pc = 0x288718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288714u;
            // 0x288718: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x288728u;
            goto label_288728;
        }
    }
    ctx->pc = 0x28871Cu;
label_28871c:
    // 0x28871c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28871cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x288720: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x288720u;
    {
        const bool branch_taken_0x288720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288720u;
            // 0x288724: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288720) {
            ctx->pc = 0x288754u;
            goto label_288754;
        }
    }
    ctx->pc = 0x288728u;
label_288728:
    // 0x288728: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288728u;
    {
        const bool branch_taken_0x288728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288728u;
            // 0x28872c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288728) {
            ctx->pc = 0x288740u;
            goto label_288740;
        }
    }
    ctx->pc = 0x288730u;
    // 0x288730: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x288730u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288734: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x288734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x288738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x288738u;
    {
        const bool branch_taken_0x288738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288738u;
            // 0x28873c: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288738) {
            ctx->pc = 0x28874Cu;
            goto label_28874c;
        }
    }
    ctx->pc = 0x288740u;
label_288740:
    // 0x288740: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x288740u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288744: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x288744u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x288748: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x288748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_28874c:
    // 0x28874c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288750: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x288750u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_288754:
    // 0x288754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x288754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288758: 0x3e00008  jr          $ra
    ctx->pc = 0x288758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288758u;
            // 0x28875c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288760u;
}
