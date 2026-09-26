#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeShopList__5CShopFPci
// Address: 0x291da0 - 0x291e3c
void AnalyzeShopList__5CShopFPci_0x291da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeShopList__5CShopFPci_0x291da0");
#endif

    switch (ctx->pc) {
        case 0x291de4u: goto label_291de4;
        case 0x291df4u: goto label_291df4;
        case 0x291e04u: goto label_291e04;
        case 0x291e0cu: goto label_291e0c;
        case 0x291e1cu: goto label_291e1c;
        case 0x291e24u: goto label_291e24;
        default: break;
    }

    ctx->pc = 0x291da0u;

    // 0x291da0: 0x27bdf0f0  addiu       $sp, $sp, -0xF10
    ctx->pc = 0x291da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963440));
    // 0x291da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x291da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x291da8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x291dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291db0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x291db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291db4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291db8: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x291db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x291dbc: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x291dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291dc0: 0x2642020c  addiu       $v0, $s2, 0x20C
    ctx->pc = 0x291dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 524));
    // 0x291dc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x291dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dc8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x291dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dcc: 0xa7849854  sh          $a0, -0x67AC($gp)
    ctx->pc = 0x291dccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940756), (uint16_t)GPR_U32(ctx, 4));
    // 0x291dd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x291dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x291dd4: 0xaf839850  sw          $v1, -0x67B0($gp)
    ctx->pc = 0x291dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940752), GPR_U32(ctx, 3));
    // 0x291dd8: 0xaf829858  sw          $v0, -0x67A8($gp)
    ctx->pc = 0x291dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940760), GPR_U32(ctx, 2));
    // 0x291ddc: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x291DDCu;
    SET_GPR_U32(ctx, 31, 0x291DE4u);
    ctx->pc = 0x291DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291DDCu;
            // 0x291de0: 0xa780983c  sh          $zero, -0x67C4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940732), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DE4u; }
        if (ctx->pc != 0x291DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DE4u; }
        if (ctx->pc != 0x291DE4u) { return; }
    }
    ctx->pc = 0x291DE4u;
label_291de4:
    // 0x291de4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x291de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x291de8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x291de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x291dec: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x291DECu;
    SET_GPR_U32(ctx, 31, 0x291DF4u);
    ctx->pc = 0x291DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291DECu;
            // 0x291df0: 0x24a54010  addiu       $a1, $a1, 0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DF4u; }
        if (ctx->pc != 0x291DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DF4u; }
        if (ctx->pc != 0x291DF4u) { return; }
    }
    ctx->pc = 0x291DF4u;
label_291df4:
    // 0x291df4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291df8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x291df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291dfc: 0xc051a60  jal         func_146980
    ctx->pc = 0x291DFCu;
    SET_GPR_U32(ctx, 31, 0x291E04u);
    ctx->pc = 0x291E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291DFCu;
            // 0x291e00: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E04u; }
        if (ctx->pc != 0x291E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E04u; }
        if (ctx->pc != 0x291E04u) { return; }
    }
    ctx->pc = 0x291E04u;
label_291e04:
    // 0x291e04: 0xc0519c8  jal         func_146720
    ctx->pc = 0x291E04u;
    SET_GPR_U32(ctx, 31, 0x291E0Cu);
    ctx->pc = 0x291E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E04u;
            // 0x291e08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E0Cu; }
        if (ctx->pc != 0x291E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E0Cu; }
        if (ctx->pc != 0x291E0Cu) { return; }
    }
    ctx->pc = 0x291E0Cu;
label_291e0c:
    // 0x291e0c: 0x8782984c  lh          $v0, -0x67B4($gp)
    ctx->pc = 0x291e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940748)));
    // 0x291e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e14: 0xc0a4540  jal         func_291500
    ctx->pc = 0x291E14u;
    SET_GPR_U32(ctx, 31, 0x291E1Cu);
    ctx->pc = 0x291E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E14u;
            // 0x291e18: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291500u;
    if (runtime->hasFunction(0x291500u)) {
        auto targetFn = runtime->lookupFunction(0x291500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E1Cu; }
        if (ctx->pc != 0x291E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEventItem__5CShopFv_0x291500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E1Cu; }
        if (ctx->pc != 0x291E1Cu) { return; }
    }
    ctx->pc = 0x291E1Cu;
label_291e1c:
    // 0x291e1c: 0xc0a4510  jal         func_291440
    ctx->pc = 0x291E1Cu;
    SET_GPR_U32(ctx, 31, 0x291E24u);
    ctx->pc = 0x291E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E1Cu;
            // 0x291e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291440u;
    if (runtime->hasFunction(0x291440u)) {
        auto targetFn = runtime->lookupFunction(0x291440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E24u; }
        if (ctx->pc != 0x291E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSyojiHin__5CShopFv_0x291440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E24u; }
        if (ctx->pc != 0x291E24u) { return; }
    }
    ctx->pc = 0x291E24u;
label_291e24:
    // 0x291e24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x291e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291e34: 0x3e00008  jr          $ra
    ctx->pc = 0x291E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291E34u;
            // 0x291e38: 0x27bd0f10  addiu       $sp, $sp, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291E3Cu;
}
