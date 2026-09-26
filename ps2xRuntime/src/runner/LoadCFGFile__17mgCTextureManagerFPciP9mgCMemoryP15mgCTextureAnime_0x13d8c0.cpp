#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadCFGFile__17mgCTextureManagerFPciP9mgCMemoryP15mgCTextureAnime
// Address: 0x13d8c0 - 0x13d958
void LoadCFGFile__17mgCTextureManagerFPciP9mgCMemoryP15mgCTextureAnime_0x13d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadCFGFile__17mgCTextureManagerFPciP9mgCMemoryP15mgCTextureAnime_0x13d8c0");
#endif

    switch (ctx->pc) {
        case 0x13d90cu: goto label_13d90c;
        case 0x13d920u: goto label_13d920;
        case 0x13d934u: goto label_13d934;
        case 0x13d940u: goto label_13d940;
        default: break;
    }

    ctx->pc = 0x13d8c0u;

    // 0x13d8c0: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x13d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x13d8c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d8d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13d8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13d8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8d8: 0xaf80872c  sw          $zero, -0x78D4($gp)
    ctx->pc = 0x13d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936364), GPR_U32(ctx, 0));
    // 0x13d8dc: 0xaf888730  sw          $t0, -0x78D0($gp)
    ctx->pc = 0x13d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U32(ctx, 8));
    // 0x13d8e0: 0xaf808740  sw          $zero, -0x78C0($gp)
    ctx->pc = 0x13d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936384), GPR_U32(ctx, 0));
    // 0x13d8e4: 0xaf808744  sw          $zero, -0x78BC($gp)
    ctx->pc = 0x13d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936388), GPR_U32(ctx, 0));
    // 0x13d8e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d8ec: 0xaf828748  sw          $v0, -0x78B8($gp)
    ctx->pc = 0x13d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 2));
    // 0x13d8f0: 0xaf828734  sw          $v0, -0x78CC($gp)
    ctx->pc = 0x13d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936372), GPR_U32(ctx, 2));
    // 0x13d8f4: 0xaf87873c  sw          $a3, -0x78C4($gp)
    ctx->pc = 0x13d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936380), GPR_U32(ctx, 7));
    // 0x13d8f8: 0xaf848738  sw          $a0, -0x78C8($gp)
    ctx->pc = 0x13d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936376), GPR_U32(ctx, 4));
    // 0x13d8fc: 0xaf80874c  sw          $zero, -0x78B4($gp)
    ctx->pc = 0x13d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936396), GPR_U32(ctx, 0));
    // 0x13d900: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d904: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x13D904u;
    SET_GPR_U32(ctx, 31, 0x13D90Cu);
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D90Cu; }
        if (ctx->pc != 0x13D90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D90Cu; }
        if (ctx->pc != 0x13D90Cu) { return; }
    }
    ctx->pc = 0x13D90Cu;
label_13d90c:
    // 0x13d90c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d910: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x13d910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x13d914: 0x24a540b0  addiu       $a1, $a1, 0x40B0
    ctx->pc = 0x13d914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16560));
    // 0x13d918: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x13D918u;
    SET_GPR_U32(ctx, 31, 0x13D920u);
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D920u; }
        if (ctx->pc != 0x13D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D920u; }
        if (ctx->pc != 0x13D920u) { return; }
    }
    ctx->pc = 0x13D920u;
label_13d920:
    // 0x13d920: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13d920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d928: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d92c: 0xc051a60  jal         func_146980
    ctx->pc = 0x13D92Cu;
    SET_GPR_U32(ctx, 31, 0x13D934u);
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D934u; }
        if (ctx->pc != 0x13D934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D934u; }
        if (ctx->pc != 0x13D934u) { return; }
    }
    ctx->pc = 0x13D934u;
label_13d934:
    // 0x13d934: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13d934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d938: 0xc0519c8  jal         func_146720
    ctx->pc = 0x13D938u;
    SET_GPR_U32(ctx, 31, 0x13D940u);
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D940u; }
        if (ctx->pc != 0x13D940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D940u; }
        if (ctx->pc != 0x13D940u) { return; }
    }
    ctx->pc = 0x13D940u;
label_13d940:
    // 0x13d940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d94c: 0x27bd0f00  addiu       $sp, $sp, 0xF00
    ctx->pc = 0x13d94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
    // 0x13d950: 0x3e00008  jr          $ra
    ctx->pc = 0x13D950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D958u;
}
