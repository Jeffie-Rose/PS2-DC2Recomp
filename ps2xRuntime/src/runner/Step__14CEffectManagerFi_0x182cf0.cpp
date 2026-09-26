#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CEffectManagerFi
// Address: 0x182cf0 - 0x182db8
void Step__14CEffectManagerFi_0x182cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CEffectManagerFi_0x182cf0");
#endif

    switch (ctx->pc) {
        case 0x182d30u: goto label_182d30;
        case 0x182d50u: goto label_182d50;
        case 0x182d74u: goto label_182d74;
        case 0x182d84u: goto label_182d84;
        default: break;
    }

    ctx->pc = 0x182cf0u;

    // 0x182cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182cf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x182cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x182cf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182d00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182d04: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x182d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x182d08: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x182D08u;
    {
        const bool branch_taken_0x182d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D08u;
            // 0x182d0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d08) {
            ctx->pc = 0x182DA0u;
            goto label_182da0;
        }
    }
    ctx->pc = 0x182D10u;
    // 0x182d10: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x182d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x182d14: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182D14u;
    {
        const bool branch_taken_0x182d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D14u;
            // 0x182d18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d14) {
            ctx->pc = 0x182D28u;
            goto label_182d28;
        }
    }
    ctx->pc = 0x182D1Cu;
    // 0x182d1c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x182D1Cu;
    {
        const bool branch_taken_0x182d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D1Cu;
            // 0x182d20: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d1c) {
            ctx->pc = 0x182DA4u;
            goto label_182da4;
        }
    }
    ctx->pc = 0x182D24u;
    // 0x182d24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x182d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182d28:
    // 0x182d28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x182D28u;
    {
        const bool branch_taken_0x182d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D28u;
            // 0x182d2c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d28) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x182D30u;
label_182d30:
    // 0x182d30: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x182d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x182d34: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x182d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x182d38: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x182d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x182d3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182D3Cu;
    {
        const bool branch_taken_0x182d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d3c) {
            ctx->pc = 0x182D50u;
            goto label_182d50;
        }
    }
    ctx->pc = 0x182D44u;
    // 0x182d44: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x182d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x182d48: 0xc06006c  jal         func_1801B0
    ctx->pc = 0x182D48u;
    SET_GPR_U32(ctx, 31, 0x182D50u);
    ctx->pc = 0x182D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182D48u;
            // 0x182d4c: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1801B0u;
    if (runtime->hasFunction(0x1801B0u)) {
        auto targetFn = runtime->lookupFunction(0x1801B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182D50u; }
        if (ctx->pc != 0x182D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Ctrl__11CEffectCtrlFP7CEffecti_0x1801b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182D50u; }
        if (ctx->pc != 0x182D50u) { return; }
    }
    ctx->pc = 0x182D50u;
label_182d50:
    // 0x182d50: 0x26520310  addiu       $s2, $s2, 0x310
    ctx->pc = 0x182d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
    // 0x182d54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x182d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_182d58:
    // 0x182d58: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x182d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x182d5c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x182d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182d60: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x182D60u;
    {
        const bool branch_taken_0x182d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182d60) {
            ctx->pc = 0x182D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182d30;
        }
    }
    ctx->pc = 0x182D68u;
    // 0x182d68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x182d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182D6Cu;
    {
        const bool branch_taken_0x182d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D6Cu;
            // 0x182d70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d6c) {
            ctx->pc = 0x182D8Cu;
            goto label_182d8c;
        }
    }
    ctx->pc = 0x182D74u;
label_182d74:
    // 0x182d74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x182d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x182d78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182d7c: 0xc05fdf0  jal         func_17F7C0
    ctx->pc = 0x182D7Cu;
    SET_GPR_U32(ctx, 31, 0x182D84u);
    ctx->pc = 0x182D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182D7Cu;
            // 0x182d80: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F7C0u;
    if (runtime->hasFunction(0x17F7C0u)) {
        auto targetFn = runtime->lookupFunction(0x17F7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182D84u; }
        if (ctx->pc != 0x182D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__7CEffectFi_0x17f7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182D84u; }
        if (ctx->pc != 0x182D84u) { return; }
    }
    ctx->pc = 0x182D84u;
label_182d84:
    // 0x182d84: 0x26310200  addiu       $s1, $s1, 0x200
    ctx->pc = 0x182d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x182d88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x182d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_182d8c:
    // 0x182d8c: 0x0  nop
    ctx->pc = 0x182d8cu;
    // NOP
    // 0x182d90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x182d94: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x182d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182d98: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x182D98u;
    {
        const bool branch_taken_0x182d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182d98) {
            ctx->pc = 0x182D74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182d74;
        }
    }
    ctx->pc = 0x182DA0u;
label_182da0:
    // 0x182da0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x182da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_182da4:
    // 0x182da4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182db0: 0x3e00008  jr          $ra
    ctx->pc = 0x182DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DB0u;
            // 0x182db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182DB8u;
}
