#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_convviewlp.cpp
// Address: 0x374d50 - 0x374d7c
void ps2___sinit_convviewlp_cpp_0x374d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_convviewlp_cpp_0x374d50");
#endif

    switch (ctx->pc) {
        case 0x374d64u: goto label_374d64;
        case 0x374d70u: goto label_374d70;
        default: break;
    }

    ctx->pc = 0x374d50u;

    // 0x374d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374d54: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374d5c: 0xc04e640  jal         func_139900
    ctx->pc = 0x374D5Cu;
    SET_GPR_U32(ctx, 31, 0x374D64u);
    ctx->pc = 0x374D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374D5Cu;
            // 0x374d60: 0x24844aa0  addiu       $a0, $a0, 0x4AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D64u; }
        if (ctx->pc != 0x374D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D64u; }
        if (ctx->pc != 0x374D64u) { return; }
    }
    ctx->pc = 0x374D64u;
label_374d64:
    // 0x374d64: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374d68: 0xc04e640  jal         func_139900
    ctx->pc = 0x374D68u;
    SET_GPR_U32(ctx, 31, 0x374D70u);
    ctx->pc = 0x374D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374D68u;
            // 0x374d6c: 0x24844ad0  addiu       $a0, $a0, 0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D70u; }
        if (ctx->pc != 0x374D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D70u; }
        if (ctx->pc != 0x374D70u) { return; }
    }
    ctx->pc = 0x374D70u;
label_374d70:
    // 0x374d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374d74: 0x3e00008  jr          $ra
    ctx->pc = 0x374D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374D74u;
            // 0x374d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374D7Cu;
}
