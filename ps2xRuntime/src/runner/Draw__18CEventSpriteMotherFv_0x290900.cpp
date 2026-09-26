#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__18CEventSpriteMotherFv
// Address: 0x290900 - 0x290958
void Draw__18CEventSpriteMotherFv_0x290900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__18CEventSpriteMotherFv_0x290900");
#endif

    switch (ctx->pc) {
        case 0x290920u: goto label_290920;
        case 0x290928u: goto label_290928;
        default: break;
    }

    ctx->pc = 0x290900u;

    // 0x290900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x290908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29090c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290910: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290918: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x290918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29091c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29091cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290920:
    // 0x290920: 0xc0a4114  jal         func_290450
    ctx->pc = 0x290920u;
    SET_GPR_U32(ctx, 31, 0x290928u);
    ctx->pc = 0x290924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290920u;
            // 0x290924: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290450u;
    if (runtime->hasFunction(0x290450u)) {
        auto targetFn = runtime->lookupFunction(0x290450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290928u; }
        if (ctx->pc != 0x290928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CEventSpriteFv_0x290450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290928u; }
        if (ctx->pc != 0x290928u) { return; }
    }
    ctx->pc = 0x290928u;
label_290928:
    // 0x290928: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x290928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29092c: 0x26310088  addiu       $s1, $s1, 0x88
    ctx->pc = 0x29092cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x290930: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x290930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290934: 0x0  nop
    ctx->pc = 0x290934u;
    // NOP
    // 0x290938: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x290938u;
    {
        const bool branch_taken_0x290938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290938) {
            ctx->pc = 0x290920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_290920;
        }
    }
    ctx->pc = 0x290940u;
    // 0x290940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x290940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29094c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29094cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290950: 0x3e00008  jr          $ra
    ctx->pc = 0x290950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290950u;
            // 0x290954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290958u;
}
