#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CEffectManagerFv
// Address: 0x182ad0 - 0x182b98
void Initialize__14CEffectManagerFv_0x182ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CEffectManagerFv_0x182ad0");
#endif

    switch (ctx->pc) {
        case 0x182b10u: goto label_182b10;
        case 0x182b2cu: goto label_182b2c;
        case 0x182b4cu: goto label_182b4c;
        case 0x182b58u: goto label_182b58;
        case 0x182b7cu: goto label_182b7c;
        default: break;
    }

    ctx->pc = 0x182ad0u;

    // 0x182ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182ad4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x182ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182ad8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x182ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x182adc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182ae4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x182ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182aec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x182aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182af4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x182af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182af8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x182af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x182afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b00: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x182b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x182b04: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x182b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x182b08: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x182b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x182b0c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x182b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_182b10:
    // 0x182b10: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x182b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x182b14: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x182b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x182b18: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x182b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x182b1c: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x182b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x182b20: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x182b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x182b24: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x182B24u;
    SET_GPR_U32(ctx, 31, 0x182B2Cu);
    ctx->pc = 0x182B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B24u;
            // 0x182b28: 0x24a53e90  addiu       $a1, $a1, 0x3E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B2Cu; }
        if (ctx->pc != 0x182B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B2Cu; }
        if (ctx->pc != 0x182B2Cu) { return; }
    }
    ctx->pc = 0x182B2Cu;
label_182b2c:
    // 0x182b2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x182b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x182b30: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x182b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x182b34: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x182b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x182b38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x182B38u;
    {
        const bool branch_taken_0x182b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B38u;
            // 0x182b3c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b38) {
            ctx->pc = 0x182B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182b10;
        }
    }
    ctx->pc = 0x182B40u;
    // 0x182b40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x182b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182B44u;
    {
        const bool branch_taken_0x182b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B44u;
            // 0x182b48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b44) {
            ctx->pc = 0x182B60u;
            goto label_182b60;
        }
    }
    ctx->pc = 0x182B4Cu;
label_182b4c:
    // 0x182b4c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x182b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x182b50: 0xc060398  jal         func_180E60
    ctx->pc = 0x182B50u;
    SET_GPR_U32(ctx, 31, 0x182B58u);
    ctx->pc = 0x182B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B50u;
            // 0x182b54: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E60u;
    if (runtime->hasFunction(0x180E60u)) {
        auto targetFn = runtime->lookupFunction(0x180E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B58u; }
        if (ctx->pc != 0x182B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CEffectCtrlFv_0x180e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B58u; }
        if (ctx->pc != 0x182B58u) { return; }
    }
    ctx->pc = 0x182B58u;
label_182b58:
    // 0x182b58: 0x26310310  addiu       $s1, $s1, 0x310
    ctx->pc = 0x182b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x182b5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x182b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_182b60:
    // 0x182b60: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x182b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x182b64: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x182b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x182b68: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x182B68u;
    {
        const bool branch_taken_0x182b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B68u;
            // 0x182b6c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b68) {
            ctx->pc = 0x182B4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182b4c;
        }
    }
    ctx->pc = 0x182B70u;
    // 0x182b70: 0x26040164  addiu       $a0, $s0, 0x164
    ctx->pc = 0x182b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x182b74: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x182B74u;
    SET_GPR_U32(ctx, 31, 0x182B7Cu);
    ctx->pc = 0x182B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182B74u;
            // 0x182b78: 0x24a53e90  addiu       $a1, $a1, 0x3E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B7Cu; }
        if (ctx->pc != 0x182B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182B7Cu; }
        if (ctx->pc != 0x182B7Cu) { return; }
    }
    ctx->pc = 0x182B7Cu;
label_182b7c:
    // 0x182b7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x182b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182b80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182b84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182b90: 0x3e00008  jr          $ra
    ctx->pc = 0x182B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B90u;
            // 0x182b94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182B98u;
}
