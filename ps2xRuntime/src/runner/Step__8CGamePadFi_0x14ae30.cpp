#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__8CGamePadFi
// Address: 0x14ae30 - 0x14aef0
void Step__8CGamePadFi_0x14ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__8CGamePadFi_0x14ae30");
#endif

    switch (ctx->pc) {
        case 0x14ae5cu: goto label_14ae5c;
        case 0x14ae68u: goto label_14ae68;
        case 0x14aee4u: goto label_14aee4;
        default: break;
    }

    ctx->pc = 0x14ae30u;

    // 0x14ae30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ae34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ae38: 0x8c82046c  lw          $v0, 0x46C($a0)
    ctx->pc = 0x14ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x14ae3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14ae40: 0xac82046c  sw          $v0, 0x46C($a0)
    ctx->pc = 0x14ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 2));
    // 0x14ae44: 0x8c82046c  lw          $v0, 0x46C($a0)
    ctx->pc = 0x14ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x14ae48: 0x284103e9  slti        $at, $v0, 0x3E9
    ctx->pc = 0x14ae48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x14ae4c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AE4Cu;
    {
        const bool branch_taken_0x14ae4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE4Cu;
            // 0x14ae50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae4c) {
            ctx->pc = 0x14AE64u;
            goto label_14ae64;
        }
    }
    ctx->pc = 0x14AE54u;
    // 0x14ae54: 0xc052d68  jal         func_14B5A0
    ctx->pc = 0x14AE54u;
    SET_GPR_U32(ctx, 31, 0x14AE5Cu);
    ctx->pc = 0x14AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE54u;
            // 0x14ae58: 0xac80046c  sw          $zero, 0x46C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B5A0u;
    if (runtime->hasFunction(0x14B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x14B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE5Cu; }
        if (ctx->pc != 0x14AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVibration__8CGamePadFv_0x14b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE5Cu; }
        if (ctx->pc != 0x14AE5Cu) { return; }
    }
    ctx->pc = 0x14AE5Cu;
label_14ae5c:
    // 0x14ae5c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x14AE5Cu;
    {
        const bool branch_taken_0x14ae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE5Cu;
            // 0x14ae60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae5c) {
            ctx->pc = 0x14AEE8u;
            goto label_14aee8;
        }
    }
    ctx->pc = 0x14AE64u;
label_14ae64:
    // 0x14ae64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ae64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ae68:
    // 0x14ae68: 0x8c820468  lw          $v0, 0x468($a0)
    ctx->pc = 0x14ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1128)));
    // 0x14ae6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AE6Cu;
    {
        const bool branch_taken_0x14ae6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE6Cu;
            // 0x14ae70: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae6c) {
            ctx->pc = 0x14AE7Cu;
            goto label_14ae7c;
        }
    }
    ctx->pc = 0x14AE74u;
    // 0x14ae74: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x14ae74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ae78: 0xa040002d  sb          $zero, 0x2D($v0)
    ctx->pc = 0x14ae78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 0));
label_14ae7c:
    // 0x14ae7c: 0x0  nop
    ctx->pc = 0x14ae7cu;
    // NOP
    // 0x14ae80: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x14ae80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14ae84: 0x8d020038  lw          $v0, 0x38($t0)
    ctx->pc = 0x14ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x14ae88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AE88u;
    {
        const bool branch_taken_0x14ae88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14AE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE88u;
            // 0x14ae8c: 0x25070038  addiu       $a3, $t0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae88) {
            ctx->pc = 0x14AE9Cu;
            goto label_14ae9c;
        }
    }
    ctx->pc = 0x14AE90u;
    // 0x14ae90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x14ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14ae94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14AE94u;
    {
        const bool branch_taken_0x14ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE94u;
            // 0x14ae98: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae94) {
            ctx->pc = 0x14AEA8u;
            goto label_14aea8;
        }
    }
    ctx->pc = 0x14AE9Cu;
label_14ae9c:
    // 0x14ae9c: 0x0  nop
    ctx->pc = 0x14ae9cu;
    // NOP
    // 0x14aea0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x14aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x14aea4: 0xa100002c  sb          $zero, 0x2C($t0)
    ctx->pc = 0x14aea4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 44), (uint8_t)GPR_U32(ctx, 0));
label_14aea8:
    // 0x14aea8: 0x8d02003c  lw          $v0, 0x3C($t0)
    ctx->pc = 0x14aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x14aeac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AEACu;
    {
        const bool branch_taken_0x14aeac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14AEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEACu;
            // 0x14aeb0: 0x2507003c  addiu       $a3, $t0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aeac) {
            ctx->pc = 0x14AEC0u;
            goto label_14aec0;
        }
    }
    ctx->pc = 0x14AEB4u;
    // 0x14aeb4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x14aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14aeb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14AEB8u;
    {
        const bool branch_taken_0x14aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEB8u;
            // 0x14aebc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aeb8) {
            ctx->pc = 0x14AEC8u;
            goto label_14aec8;
        }
    }
    ctx->pc = 0x14AEC0u;
label_14aec0:
    // 0x14aec0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x14aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x14aec4: 0xa100002d  sb          $zero, 0x2D($t0)
    ctx->pc = 0x14aec4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 45), (uint8_t)GPR_U32(ctx, 0));
label_14aec8:
    // 0x14aec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14aecc: 0x1860ffe6  blez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14AECCu;
    {
        const bool branch_taken_0x14aecc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14AED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AECCu;
            // 0x14aed0: 0x24c6004c  addiu       $a2, $a2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aecc) {
            ctx->pc = 0x14AE68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ae68;
        }
    }
    ctx->pc = 0x14AED4u;
    // 0x14aed4: 0x2486002c  addiu       $a2, $a0, 0x2C
    ctx->pc = 0x14aed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x14aed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14aed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aedc: 0xc04874a  jal         func_121D28
    ctx->pc = 0x14AEDCu;
    SET_GPR_U32(ctx, 31, 0x14AEE4u);
    ctx->pc = 0x14AEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEDCu;
            // 0x14aee0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121D28u;
    if (runtime->hasFunction(0x121D28u)) {
        auto targetFn = runtime->lookupFunction(0x121D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEE4u; }
        if (ctx->pc != 0x14AEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadSetActDirect_0x121d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEE4u; }
        if (ctx->pc != 0x14AEE4u) { return; }
    }
    ctx->pc = 0x14AEE4u;
label_14aee4:
    // 0x14aee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14aee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14aee8:
    // 0x14aee8: 0x3e00008  jr          $ra
    ctx->pc = 0x14AEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEE8u;
            // 0x14aeec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AEF0u;
}
