#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menumain.cpp
// Address: 0x374440 - 0x374490
void ps2___sinit_menumain_cpp_0x374440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menumain_cpp_0x374440");
#endif

    switch (ctx->pc) {
        case 0x374454u: goto label_374454;
        case 0x374460u: goto label_374460;
        case 0x37446cu: goto label_37446c;
        case 0x374478u: goto label_374478;
        case 0x374484u: goto label_374484;
        default: break;
    }

    ctx->pc = 0x374440u;

    // 0x374440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374444: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37444c: 0xc04e640  jal         func_139900
    ctx->pc = 0x37444Cu;
    SET_GPR_U32(ctx, 31, 0x374454u);
    ctx->pc = 0x374450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37444Cu;
            // 0x374450: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374454u; }
        if (ctx->pc != 0x374454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374454u; }
        if (ctx->pc != 0x374454u) { return; }
    }
    ctx->pc = 0x374454u;
label_374454:
    // 0x374454: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374458: 0xc04e640  jal         func_139900
    ctx->pc = 0x374458u;
    SET_GPR_U32(ctx, 31, 0x374460u);
    ctx->pc = 0x37445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374458u;
            // 0x37445c: 0x2484d520  addiu       $a0, $a0, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374460u; }
        if (ctx->pc != 0x374460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374460u; }
        if (ctx->pc != 0x374460u) { return; }
    }
    ctx->pc = 0x374460u;
label_374460:
    // 0x374460: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374464: 0xc04e640  jal         func_139900
    ctx->pc = 0x374464u;
    SET_GPR_U32(ctx, 31, 0x37446Cu);
    ctx->pc = 0x374468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374464u;
            // 0x374468: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37446Cu; }
        if (ctx->pc != 0x37446Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37446Cu; }
        if (ctx->pc != 0x37446Cu) { return; }
    }
    ctx->pc = 0x37446Cu;
label_37446c:
    // 0x37446c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x37446cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374470: 0xc04e640  jal         func_139900
    ctx->pc = 0x374470u;
    SET_GPR_U32(ctx, 31, 0x374478u);
    ctx->pc = 0x374474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374470u;
            // 0x374474: 0x2484d5c0  addiu       $a0, $a0, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374478u; }
        if (ctx->pc != 0x374478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374478u; }
        if (ctx->pc != 0x374478u) { return; }
    }
    ctx->pc = 0x374478u;
label_374478:
    // 0x374478: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x37447c: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x37447Cu;
    SET_GPR_U32(ctx, 31, 0x374484u);
    ctx->pc = 0x374480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37447Cu;
            // 0x374480: 0x2484d730  addiu       $a0, $a0, -0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374484u; }
        if (ctx->pc != 0x374484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374484u; }
        if (ctx->pc != 0x374484u) { return; }
    }
    ctx->pc = 0x374484u;
label_374484:
    // 0x374484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374488: 0x3e00008  jr          $ra
    ctx->pc = 0x374488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37448Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374488u;
            // 0x37448c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374490u;
}
