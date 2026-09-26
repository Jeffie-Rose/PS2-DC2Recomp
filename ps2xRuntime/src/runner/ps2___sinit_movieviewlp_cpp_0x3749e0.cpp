#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_movieviewlp.cpp
// Address: 0x3749e0 - 0x374a0c
void ps2___sinit_movieviewlp_cpp_0x3749e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_movieviewlp_cpp_0x3749e0");
#endif

    switch (ctx->pc) {
        case 0x3749f4u: goto label_3749f4;
        case 0x374a00u: goto label_374a00;
        default: break;
    }

    ctx->pc = 0x3749e0u;

    // 0x3749e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3749e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3749e4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x3749e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x3749e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3749e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3749ec: 0xc04e640  jal         func_139900
    ctx->pc = 0x3749ECu;
    SET_GPR_U32(ctx, 31, 0x3749F4u);
    ctx->pc = 0x3749F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3749ECu;
            // 0x3749f0: 0x2484d300  addiu       $a0, $a0, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749F4u; }
        if (ctx->pc != 0x3749F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749F4u; }
        if (ctx->pc != 0x3749F4u) { return; }
    }
    ctx->pc = 0x3749F4u;
label_3749f4:
    // 0x3749f4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x3749f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x3749f8: 0xc04e640  jal         func_139900
    ctx->pc = 0x3749F8u;
    SET_GPR_U32(ctx, 31, 0x374A00u);
    ctx->pc = 0x3749FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3749F8u;
            // 0x3749fc: 0x2484d330  addiu       $a0, $a0, -0x2CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A00u; }
        if (ctx->pc != 0x374A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A00u; }
        if (ctx->pc != 0x374A00u) { return; }
    }
    ctx->pc = 0x374A00u;
label_374a00:
    // 0x374a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374a04: 0x3e00008  jr          $ra
    ctx->pc = 0x374A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374A04u;
            // 0x374a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374A0Cu;
}
