#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_USE_ITEM2__FP12RS_STACKDATAi
// Address: 0x27cee0 - 0x27cfc8
void ps2__GOTO_USE_ITEM2__FP12RS_STACKDATAi_0x27cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_USE_ITEM2__FP12RS_STACKDATAi_0x27cee0");
#endif

    switch (ctx->pc) {
        case 0x27cf38u: goto label_27cf38;
        case 0x27cf54u: goto label_27cf54;
        case 0x27cf60u: goto label_27cf60;
        default: break;
    }

    ctx->pc = 0x27cee0u;

    // 0x27cee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27cee4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27cee8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27ceec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27cef0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27cef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27cef4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27cef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27cef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27cefc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27cefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27cf00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27cf04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CF04u;
    {
        const bool branch_taken_0x27cf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF04u;
            // 0x27cf08: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf04) {
            ctx->pc = 0x27CF14u;
            goto label_27cf14;
        }
    }
    ctx->pc = 0x27CF0Cu;
    // 0x27cf0c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x27CF0Cu;
    {
        const bool branch_taken_0x27cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF0Cu;
            // 0x27cf10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf0c) {
            ctx->pc = 0x27CFACu;
            goto label_27cfac;
        }
    }
    ctx->pc = 0x27CF14u;
label_27cf14:
    // 0x27cf14: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27cf18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27cf1c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27cf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x27cf20: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x27cf20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x27cf24: 0xaf8397f0  sw          $v1, -0x6810($gp)
    ctx->pc = 0x27cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940656), GPR_U32(ctx, 3));
    // 0x27cf28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27cf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf2c: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x27cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
    // 0x27cf30: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CF30u;
    SET_GPR_U32(ctx, 31, 0x27CF38u);
    ctx->pc = 0x27CF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF30u;
            // 0x27cf34: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF38u; }
        if (ctx->pc != 0x27CF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF38u; }
        if (ctx->pc != 0x27CF38u) { return; }
    }
    ctx->pc = 0x27CF38u;
label_27cf38:
    // 0x27cf38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27cf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x27cf3c: 0xac22d648  sw          $v0, -0x29B8($at)
    ctx->pc = 0x27cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956616), GPR_U32(ctx, 2));
    // 0x27cf40: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x27cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x27cf44: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x27cf44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27cf48: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x27CF48u;
    {
        const bool branch_taken_0x27cf48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF48u;
            // 0x27cf4c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf48) {
            ctx->pc = 0x27CF84u;
            goto label_27cf84;
        }
    }
    ctx->pc = 0x27CF50u;
    // 0x27cf50: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x27cf50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27cf54:
    // 0x27cf54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27cf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf58: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CF58u;
    SET_GPR_U32(ctx, 31, 0x27CF60u);
    ctx->pc = 0x27CF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF58u;
            // 0x27cf5c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF60u; }
        if (ctx->pc != 0x27CF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF60u; }
        if (ctx->pc != 0x27CF60u) { return; }
    }
    ctx->pc = 0x27CF60u;
label_27cf60:
    // 0x27cf60: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x27cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x27cf64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27cf64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27cf68: 0x2463d5f0  addiu       $v1, $v1, -0x2A10
    ctx->pc = 0x27cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956528));
    // 0x27cf6c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x27cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x27cf70: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x27cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x27cf74: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x27cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x27cf78: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x27cf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27cf7c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x27CF7Cu;
    {
        const bool branch_taken_0x27cf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF7Cu;
            // 0x27cf80: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf7c) {
            ctx->pc = 0x27CF54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27cf54;
        }
    }
    ctx->pc = 0x27CF84u;
label_27cf84:
    // 0x27cf84: 0x0  nop
    ctx->pc = 0x27cf84u;
    // NOP
    // 0x27cf88: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x27cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x27cf8c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x27cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27cf90: 0x2442d648  addiu       $v0, $v0, -0x29B8
    ctx->pc = 0x27cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956616));
    // 0x27cf94: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x27cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27cf98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27cf9c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x27cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x27cfa0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27cfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x27cfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27cfa8: 0xac23e500  sw          $v1, -0x1B00($at)
    ctx->pc = 0x27cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 3));
label_27cfac:
    // 0x27cfac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27cfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27cfb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27cfb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cfb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27cfb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cfb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27cfb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cfbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27cfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x27CFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CFC0u;
            // 0x27cfc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CFC8u;
}
