#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GamePadStep__Fv
// Address: 0x14b770 - 0x14b7d0
void GamePadStep__Fv_0x14b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GamePadStep__Fv_0x14b770");
#endif

    switch (ctx->pc) {
        case 0x14b77cu: goto label_14b77c;
        case 0x14b784u: goto label_14b784;
        case 0x14b7bcu: goto label_14b7bc;
        case 0x14b7c8u: goto label_14b7c8;
        default: break;
    }

    ctx->pc = 0x14b770u;

    // 0x14b770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14b77c:
    // 0x14b77c: 0xc0504c4  jal         func_141310
    ctx->pc = 0x14B77Cu;
    SET_GPR_U32(ctx, 31, 0x14B784u);
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B784u; }
        if (ctx->pc != 0x14B784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B784u; }
        if (ctx->pc != 0x14B784u) { return; }
    }
    ctx->pc = 0x14B784u;
label_14b784:
    // 0x14b784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b788: 0x8f8288d8  lw          $v0, -0x7728($gp)
    ctx->pc = 0x14b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
    // 0x14b78c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x14b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14b790: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B790u;
    {
        const bool branch_taken_0x14b790 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x14b790) {
            ctx->pc = 0x14B79Cu;
            goto label_14b79c;
        }
    }
    ctx->pc = 0x14B798u;
    // 0x14b798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b79c:
    // 0x14b79c: 0x0  nop
    ctx->pc = 0x14b79cu;
    // NOP
    // 0x14b7a0: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B7A0u;
    {
        const bool branch_taken_0x14b7a0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x14b7a0) {
            ctx->pc = 0x14B7BCu;
            goto label_14b7bc;
        }
    }
    ctx->pc = 0x14B7A8u;
    // 0x14b7a8: 0x8f8488d4  lw          $a0, -0x772C($gp)
    ctx->pc = 0x14b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936788)));
    // 0x14b7ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B7ACu;
    {
        const bool branch_taken_0x14b7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b7ac) {
            ctx->pc = 0x14B7BCu;
            goto label_14b7bc;
        }
    }
    ctx->pc = 0x14B7B4u;
    // 0x14b7b4: 0xc052b8c  jal         func_14AE30
    ctx->pc = 0x14B7B4u;
    SET_GPR_U32(ctx, 31, 0x14B7BCu);
    ctx->pc = 0x14AE30u;
    if (runtime->hasFunction(0x14AE30u)) {
        auto targetFn = runtime->lookupFunction(0x14AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7BCu; }
        if (ctx->pc != 0x14B7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__8CGamePadFi_0x14ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7BCu; }
        if (ctx->pc != 0x14B7BCu) { return; }
    }
    ctx->pc = 0x14B7BCu;
label_14b7bc:
    // 0x14b7bc: 0x0  nop
    ctx->pc = 0x14b7bcu;
    // NOP
    // 0x14b7c0: 0xc052dd8  jal         func_14B760
    ctx->pc = 0x14B7C0u;
    SET_GPR_U32(ctx, 31, 0x14B7C8u);
    ctx->pc = 0x14B760u;
    if (runtime->hasFunction(0x14B760u)) {
        auto targetFn = runtime->lookupFunction(0x14B760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7C8u; }
        if (ctx->pc != 0x14B7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchGamePadThread__Fv_0x14b760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7C8u; }
        if (ctx->pc != 0x14B7C8u) { return; }
    }
    ctx->pc = 0x14B7C8u;
label_14b7c8:
    // 0x14b7c8: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x14B7C8u;
    {
        const bool branch_taken_0x14b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7C8u;
            // 0x14b7cc: 0xaf9088d8  sw          $s0, -0x7728($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936792), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7c8) {
            ctx->pc = 0x14B77Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14b77c;
        }
    }
    ctx->pc = 0x14B7D0u;
}
