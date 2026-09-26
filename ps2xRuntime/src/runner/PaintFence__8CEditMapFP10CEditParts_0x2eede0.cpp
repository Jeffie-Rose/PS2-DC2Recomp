#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PaintFence__8CEditMapFP10CEditParts
// Address: 0x2eede0 - 0x2eeec0
void PaintFence__8CEditMapFP10CEditParts_0x2eede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PaintFence__8CEditMapFP10CEditParts_0x2eede0");
#endif

    switch (ctx->pc) {
        case 0x2eee18u: goto label_2eee18;
        case 0x2eee20u: goto label_2eee20;
        case 0x2eee3cu: goto label_2eee3c;
        case 0x2eee60u: goto label_2eee60;
        case 0x2eee80u: goto label_2eee80;
        default: break;
    }

    ctx->pc = 0x2eede0u;

label_2eede0:
    // 0x2eede0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2eede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2eede4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2eede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2eede8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2eede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2eedec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eedecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2eedf0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2eedf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eedf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eedf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2eedf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2eedf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eedfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eedfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eee00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eee08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eee08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee0c: 0x26861010  addiu       $a2, $s4, 0x1010
    ctx->pc = 0x2eee0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4112));
    // 0x2eee10: 0xc0599d8  jal         func_166760
    ctx->pc = 0x2EEE10u;
    SET_GPR_U32(ctx, 31, 0x2EEE18u);
    ctx->pc = 0x2EEE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE10u;
            // 0x2eee14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE18u; }
        if (ctx->pc != 0x2EEE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__9CMapPartsFiPf_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE18u; }
        if (ctx->pc != 0x2EEE18u) { return; }
    }
    ctx->pc = 0x2EEE18u;
label_2eee18:
    // 0x2eee18: 0xc059a38  jal         func_1668E0
    ctx->pc = 0x2EEE18u;
    SET_GPR_U32(ctx, 31, 0x2EEE20u);
    ctx->pc = 0x2EEE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE18u;
            // 0x2eee1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1668E0u;
    if (runtime->hasFunction(0x1668E0u)) {
        auto targetFn = runtime->lookupFunction(0x1668E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE20u; }
        if (ctx->pc != 0x2EEE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateColor__9CMapPartsFv_0x1668e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE20u; }
        if (ctx->pc != 0x2EEE20u) { return; }
    }
    ctx->pc = 0x2EEE20u;
label_2eee20:
    // 0x2eee20: 0x8e821020  lw          $v0, 0x1020($s4)
    ctx->pc = 0x2eee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4128)));
    // 0x2eee24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2eee24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2eee28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2eee28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eee2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2eee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eee34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EEE34u;
    {
        const bool branch_taken_0x2eee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE34u;
            // 0x2eee38: 0xae821020  sw          $v0, 0x1020($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee34) {
            ctx->pc = 0x2EEE90u;
            goto label_2eee90;
        }
    }
    ctx->pc = 0x2EEE3Cu;
label_2eee3c:
    // 0x2eee3c: 0x8e821000  lw          $v0, 0x1000($s4)
    ctx->pc = 0x2eee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4096)));
    // 0x2eee40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2eee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2eee44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2eee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eee48: 0xae821004  sw          $v0, 0x1004($s4)
    ctx->pc = 0x2eee48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4100), GPR_U32(ctx, 2));
    // 0x2eee4c: 0x8e851004  lw          $a1, 0x1004($s4)
    ctx->pc = 0x2eee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4100)));
    // 0x2eee50: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EEE50u;
    {
        const bool branch_taken_0x2eee50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE50u;
            // 0x2eee54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee50) {
            ctx->pc = 0x2EEE84u;
            goto label_2eee84;
        }
    }
    ctx->pc = 0x2EEE58u;
    // 0x2eee58: 0xc0bbb18  jal         func_2EEC60
    ctx->pc = 0x2EEE58u;
    SET_GPR_U32(ctx, 31, 0x2EEE60u);
    ctx->pc = 0x2EEC60u;
    if (runtime->hasFunction(0x2EEC60u)) {
        auto targetFn = runtime->lookupFunction(0x2EEC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE60u; }
        if (ctx->pc != 0x2EEE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFenceChain__FP10CEditPartsP10CEditParts_0x2eec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE60u; }
        if (ctx->pc != 0x2EEE60u) { return; }
    }
    ctx->pc = 0x2EEE60u;
label_2eee60:
    // 0x2eee60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEE60u;
    {
        const bool branch_taken_0x2eee60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eee60) {
            ctx->pc = 0x2EEE84u;
            goto label_2eee84;
        }
    }
    ctx->pc = 0x2EEE68u;
    // 0x2eee68: 0x8e821000  lw          $v0, 0x1000($s4)
    ctx->pc = 0x2eee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4096)));
    // 0x2eee6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2eee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2eee70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2eee70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2eee74: 0x8e851004  lw          $a1, 0x1004($s4)
    ctx->pc = 0x2eee74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4100)));
    // 0x2eee78: 0xc0bbb78  jal         func_2EEDE0
    ctx->pc = 0x2EEE78u;
    SET_GPR_U32(ctx, 31, 0x2EEE80u);
    ctx->pc = 0x2EEE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE78u;
            // 0x2eee7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEDE0u;
    goto label_2eede0;
    ctx->pc = 0x2EEE80u;
label_2eee80:
    // 0x2eee80: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2eee80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2eee84:
    // 0x2eee84: 0x0  nop
    ctx->pc = 0x2eee84u;
    // NOP
    // 0x2eee88: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2eee88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2eee8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eee8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2eee90:
    // 0x2eee90: 0x8e820ffc  lw          $v0, 0xFFC($s4)
    ctx->pc = 0x2eee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4092)));
    // 0x2eee94: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2eee94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eee98: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2EEE98u;
    {
        const bool branch_taken_0x2eee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE98u;
            // 0x2eee9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee98) {
            ctx->pc = 0x2EEE3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eee3c;
        }
    }
    ctx->pc = 0x2EEEA0u;
    // 0x2eeea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2eeea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eeea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eeea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eeea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eeea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eeeac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eeeacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eeeb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eeeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eeeb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eeeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eeeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEEB8u;
            // 0x2eeebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EEEC0u;
}
