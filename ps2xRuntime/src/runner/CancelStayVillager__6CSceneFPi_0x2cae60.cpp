#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelStayVillager__6CSceneFPi
// Address: 0x2cae60 - 0x2caee0
void CancelStayVillager__6CSceneFPi_0x2cae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelStayVillager__6CSceneFPi_0x2cae60");
#endif

    switch (ctx->pc) {
        case 0x2cae98u: goto label_2cae98;
        case 0x2caeb0u: goto label_2caeb0;
        default: break;
    }

    ctx->pc = 0x2cae60u;

    // 0x2cae60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cae64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2cae68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cae6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cae70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cae70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cae78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cae78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cae80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cae84: 0x8c913054  lw          $s1, 0x3054($a0)
    ctx->pc = 0x2cae84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12372)));
    // 0x2cae88: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2cae88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2cae8c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2CAE8Cu;
    {
        const bool branch_taken_0x2cae8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE8Cu;
            // 0x2cae90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae8c) {
            ctx->pc = 0x2CAEC0u;
            goto label_2caec0;
        }
    }
    ctx->pc = 0x2CAE94u;
    // 0x2cae94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cae94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cae98:
    // 0x2cae98: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x2cae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2cae9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2caea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAEA0u;
    {
        const bool branch_taken_0x2caea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEA0u;
            // 0x2caea4: 0x26843050  addiu       $a0, $s4, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caea0) {
            ctx->pc = 0x2CAEB0u;
            goto label_2caeb0;
        }
    }
    ctx->pc = 0x2CAEA8u;
    // 0x2caea8: 0xc0b34c0  jal         func_2CD300
    ctx->pc = 0x2CAEA8u;
    SET_GPR_U32(ctx, 31, 0x2CAEB0u);
    ctx->pc = 0x2CAEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEA8u;
            // 0x2caeac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD300u;
    if (runtime->hasFunction(0x2CD300u)) {
        auto targetFn = runtime->lookupFunction(0x2CD300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEB0u; }
        if (ctx->pc != 0x2CAEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelStay__13CVillagerMngrFi_0x2cd300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAEB0u; }
        if (ctx->pc != 0x2CAEB0u) { return; }
    }
    ctx->pc = 0x2CAEB0u;
label_2caeb0:
    // 0x2caeb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2caeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2caeb4: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x2caeb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2caeb8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CAEB8u;
    {
        const bool branch_taken_0x2caeb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAEB8u;
            // 0x2caebc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caeb8) {
            ctx->pc = 0x2CAE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cae98;
        }
    }
    ctx->pc = 0x2CAEC0u;
label_2caec0:
    // 0x2caec0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2caec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2caec4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2caec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2caec8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2caec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2caeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2caed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2caed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAED8u;
            // 0x2caedc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAEE0u;
}
