#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__21CLevelUpEffectManagerFv
// Address: 0x22e870 - 0x22e8cc
void Initialize__21CLevelUpEffectManagerFv_0x22e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__21CLevelUpEffectManagerFv_0x22e870");
#endif

    switch (ctx->pc) {
        case 0x22e890u: goto label_22e890;
        case 0x22e89cu: goto label_22e89c;
        default: break;
    }

    ctx->pc = 0x22e870u;

    // 0x22e870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e874: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22e878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22e87c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e880: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e888: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e88c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e890:
    // 0x22e890: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x22e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22e894: 0xc08b88c  jal         func_22E230
    ctx->pc = 0x22E894u;
    SET_GPR_U32(ctx, 31, 0x22E89Cu);
    ctx->pc = 0x22E898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E894u;
            // 0x22e898: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E230u;
    if (runtime->hasFunction(0x22E230u)) {
        auto targetFn = runtime->lookupFunction(0x22E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E89Cu; }
        if (ctx->pc != 0x22E89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CLevelUpEffectFv_0x22e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E89Cu; }
        if (ctx->pc != 0x22E89Cu) { return; }
    }
    ctx->pc = 0x22E89Cu;
label_22e89c:
    // 0x22e89c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22e8a0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x22e8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x22e8a4: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x22e8a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22e8a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22E8A8u;
    {
        const bool branch_taken_0x22e8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e8a8) {
            ctx->pc = 0x22E890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e890;
        }
    }
    ctx->pc = 0x22E8B0u;
    // 0x22e8b0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x22e8b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e8b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e8b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e8bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e8bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e8c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22E8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E8C4u;
            // 0x22e8c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E8CCu;
}
