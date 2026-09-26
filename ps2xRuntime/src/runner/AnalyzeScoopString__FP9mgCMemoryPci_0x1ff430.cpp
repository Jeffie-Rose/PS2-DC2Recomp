#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeScoopString__FP9mgCMemoryPci
// Address: 0x1ff430 - 0x1ff4a0
void AnalyzeScoopString__FP9mgCMemoryPci_0x1ff430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeScoopString__FP9mgCMemoryPci_0x1ff430");
#endif

    switch (ctx->pc) {
        case 0x1ff454u: goto label_1ff454;
        case 0x1ff460u: goto label_1ff460;
        case 0x1ff470u: goto label_1ff470;
        case 0x1ff480u: goto label_1ff480;
        case 0x1ff488u: goto label_1ff488;
        default: break;
    }

    ctx->pc = 0x1ff430u;

    // 0x1ff430: 0x27bdf0f0  addiu       $sp, $sp, -0xF10
    ctx->pc = 0x1ff430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963440));
    // 0x1ff434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ff434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ff438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ff438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ff43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ff440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff44c: 0xc07fcc0  jal         func_1FF300
    ctx->pc = 0x1FF44Cu;
    SET_GPR_U32(ctx, 31, 0x1FF454u);
    ctx->pc = 0x1FF450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF44Cu;
            // 0x1ff450: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF300u;
    if (runtime->hasFunction(0x1FF300u)) {
        auto targetFn = runtime->lookupFunction(0x1FF300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF454u; }
        if (ctx->pc != 0x1FF454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScoopString__Fv_0x1ff300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF454u; }
        if (ctx->pc != 0x1FF454u) { return; }
    }
    ctx->pc = 0x1FF454u;
label_1ff454:
    // 0x1ff454: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ff454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ff458: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x1FF458u;
    SET_GPR_U32(ctx, 31, 0x1FF460u);
    ctx->pc = 0x1FF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF458u;
            // 0x1ff45c: 0xaf9290e8  sw          $s2, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF460u; }
        if (ctx->pc != 0x1FF460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF460u; }
        if (ctx->pc != 0x1FF460u) { return; }
    }
    ctx->pc = 0x1FF460u;
label_1ff460:
    // 0x1ff460: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1ff460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x1ff464: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ff464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ff468: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x1FF468u;
    SET_GPR_U32(ctx, 31, 0x1FF470u);
    ctx->pc = 0x1FF46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF468u;
            // 0x1ff46c: 0x24a5edf0  addiu       $a1, $a1, -0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF470u; }
        if (ctx->pc != 0x1FF470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF470u; }
        if (ctx->pc != 0x1FF470u) { return; }
    }
    ctx->pc = 0x1FF470u;
label_1ff470:
    // 0x1ff470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ff470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff474: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ff474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff478: 0xc051a60  jal         func_146980
    ctx->pc = 0x1FF478u;
    SET_GPR_U32(ctx, 31, 0x1FF480u);
    ctx->pc = 0x1FF47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF478u;
            // 0x1ff47c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF480u; }
        if (ctx->pc != 0x1FF480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF480u; }
        if (ctx->pc != 0x1FF480u) { return; }
    }
    ctx->pc = 0x1FF480u;
label_1ff480:
    // 0x1ff480: 0xc0519c8  jal         func_146720
    ctx->pc = 0x1FF480u;
    SET_GPR_U32(ctx, 31, 0x1FF488u);
    ctx->pc = 0x1FF484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF480u;
            // 0x1ff484: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF488u; }
        if (ctx->pc != 0x1FF488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF488u; }
        if (ctx->pc != 0x1FF488u) { return; }
    }
    ctx->pc = 0x1FF488u;
label_1ff488:
    // 0x1ff488: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ff488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff48c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ff48cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff498: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF498u;
            // 0x1ff49c: 0x27bd0f10  addiu       $sp, $sp, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF4A0u;
}
