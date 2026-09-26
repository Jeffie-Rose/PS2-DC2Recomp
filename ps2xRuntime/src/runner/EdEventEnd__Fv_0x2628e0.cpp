#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventEnd__Fv
// Address: 0x2628e0 - 0x262904
void EdEventEnd__Fv_0x2628e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventEnd__Fv_0x2628e0");
#endif

    switch (ctx->pc) {
        case 0x2628f0u: goto label_2628f0;
        case 0x2628f8u: goto label_2628f8;
        default: break;
    }

    ctx->pc = 0x2628e0u;

    // 0x2628e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2628e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2628e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2628e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2628e8: 0xc098968  jal         func_2625A0
    ctx->pc = 0x2628E8u;
    SET_GPR_U32(ctx, 31, 0x2628F0u);
    ctx->pc = 0x2625A0u;
    if (runtime->hasFunction(0x2625A0u)) {
        auto targetFn = runtime->lookupFunction(0x2625A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628F0u; }
        if (ctx->pc != 0x2628F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMesFileBuffAll__Fv_0x2625a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628F0u; }
        if (ctx->pc != 0x2628F0u) { return; }
    }
    ctx->pc = 0x2628F0u;
label_2628f0:
    // 0x2628f0: 0xc0984c0  jal         func_261300
    ctx->pc = 0x2628F0u;
    SET_GPR_U32(ctx, 31, 0x2628F8u);
    ctx->pc = 0x261300u;
    if (runtime->hasFunction(0x261300u)) {
        auto targetFn = runtime->lookupFunction(0x261300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628F8u; }
        if (ctx->pc != 0x2628F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventSeqInit__Fv_0x261300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628F8u; }
        if (ctx->pc != 0x2628F8u) { return; }
    }
    ctx->pc = 0x2628F8u;
label_2628f8:
    // 0x2628f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2628f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2628fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2628FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2628FCu;
            // 0x262900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262904u;
}
