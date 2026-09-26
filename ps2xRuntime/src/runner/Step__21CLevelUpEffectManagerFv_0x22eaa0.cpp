#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__21CLevelUpEffectManagerFv
// Address: 0x22eaa0 - 0x22eaf8
void Step__21CLevelUpEffectManagerFv_0x22eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__21CLevelUpEffectManagerFv_0x22eaa0");
#endif

    switch (ctx->pc) {
        case 0x22eac0u: goto label_22eac0;
        case 0x22eaccu: goto label_22eacc;
        default: break;
    }

    ctx->pc = 0x22eaa0u;

    // 0x22eaa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22eaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22eaa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22eaa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22eaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22eaac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22eaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22eab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22eab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22eab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22eab8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22eab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eabc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22eabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22eac0:
    // 0x22eac0: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x22eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22eac4: 0xc08b90c  jal         func_22E430
    ctx->pc = 0x22EAC4u;
    SET_GPR_U32(ctx, 31, 0x22EACCu);
    ctx->pc = 0x22EAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EAC4u;
            // 0x22eac8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E430u;
    if (runtime->hasFunction(0x22E430u)) {
        auto targetFn = runtime->lookupFunction(0x22E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EACCu; }
        if (ctx->pc != 0x22EACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CLevelUpEffectFv_0x22e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EACCu; }
        if (ctx->pc != 0x22EACCu) { return; }
    }
    ctx->pc = 0x22EACCu;
label_22eacc:
    // 0x22eacc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22eaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22ead0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x22ead0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x22ead4: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x22ead4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22ead8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22EAD8u;
    {
        const bool branch_taken_0x22ead8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ead8) {
            ctx->pc = 0x22EAC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22eac0;
        }
    }
    ctx->pc = 0x22EAE0u;
    // 0x22eae0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22eae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22eae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22eae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eaec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22eaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x22EAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EAF0u;
            // 0x22eaf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22EAF8u;
}
