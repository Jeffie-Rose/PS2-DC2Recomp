#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menumap.cpp
// Address: 0x3748d0 - 0x3748fc
void ps2___sinit_menumap_cpp_0x3748d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menumap_cpp_0x3748d0");
#endif

    switch (ctx->pc) {
        case 0x3748e4u: goto label_3748e4;
        case 0x3748f0u: goto label_3748f0;
        default: break;
    }

    ctx->pc = 0x3748d0u;

    // 0x3748d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3748d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3748d4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x3748d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x3748d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3748d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3748dc: 0xc04e640  jal         func_139900
    ctx->pc = 0x3748DCu;
    SET_GPR_U32(ctx, 31, 0x3748E4u);
    ctx->pc = 0x3748E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3748DCu;
            // 0x3748e0: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748E4u; }
        if (ctx->pc != 0x3748E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748E4u; }
        if (ctx->pc != 0x3748E4u) { return; }
    }
    ctx->pc = 0x3748E4u;
label_3748e4:
    // 0x3748e4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x3748e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x3748e8: 0xc04e640  jal         func_139900
    ctx->pc = 0x3748E8u;
    SET_GPR_U32(ctx, 31, 0x3748F0u);
    ctx->pc = 0x3748ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3748E8u;
            // 0x3748ec: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748F0u; }
        if (ctx->pc != 0x3748F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3748F0u; }
        if (ctx->pc != 0x3748F0u) { return; }
    }
    ctx->pc = 0x3748F0u;
label_3748f0:
    // 0x3748f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3748f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3748f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3748F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3748F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3748F4u;
            // 0x3748f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3748FCu;
}
