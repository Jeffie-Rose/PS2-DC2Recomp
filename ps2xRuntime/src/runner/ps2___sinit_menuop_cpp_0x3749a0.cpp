#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menuop.cpp
// Address: 0x3749a0 - 0x3749d8
void ps2___sinit_menuop_cpp_0x3749a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menuop_cpp_0x3749a0");
#endif

    switch (ctx->pc) {
        case 0x3749b4u: goto label_3749b4;
        case 0x3749c0u: goto label_3749c0;
        case 0x3749ccu: goto label_3749cc;
        default: break;
    }

    ctx->pc = 0x3749a0u;

    // 0x3749a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3749a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3749a4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x3749a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x3749a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3749a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3749ac: 0xc04e640  jal         func_139900
    ctx->pc = 0x3749ACu;
    SET_GPR_U32(ctx, 31, 0x3749B4u);
    ctx->pc = 0x3749B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3749ACu;
            // 0x3749b0: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749B4u; }
        if (ctx->pc != 0x3749B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749B4u; }
        if (ctx->pc != 0x3749B4u) { return; }
    }
    ctx->pc = 0x3749B4u;
label_3749b4:
    // 0x3749b4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x3749b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x3749b8: 0xc04e640  jal         func_139900
    ctx->pc = 0x3749B8u;
    SET_GPR_U32(ctx, 31, 0x3749C0u);
    ctx->pc = 0x3749BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3749B8u;
            // 0x3749bc: 0x2484d230  addiu       $a0, $a0, -0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749C0u; }
        if (ctx->pc != 0x3749C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749C0u; }
        if (ctx->pc != 0x3749C0u) { return; }
    }
    ctx->pc = 0x3749C0u;
label_3749c0:
    // 0x3749c0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x3749c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x3749c4: 0xc04e640  jal         func_139900
    ctx->pc = 0x3749C4u;
    SET_GPR_U32(ctx, 31, 0x3749CCu);
    ctx->pc = 0x3749C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3749C4u;
            // 0x3749c8: 0x2484d260  addiu       $a0, $a0, -0x2DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749CCu; }
        if (ctx->pc != 0x3749CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3749CCu; }
        if (ctx->pc != 0x3749CCu) { return; }
    }
    ctx->pc = 0x3749CCu;
label_3749cc:
    // 0x3749cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3749ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3749d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3749D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3749D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3749D0u;
            // 0x3749d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3749D8u;
}
