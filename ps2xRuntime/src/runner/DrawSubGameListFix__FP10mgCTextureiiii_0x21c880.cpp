#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSubGameListFix__FP10mgCTextureiiii
// Address: 0x21c880 - 0x21ca9c
void DrawSubGameListFix__FP10mgCTextureiiii_0x21c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSubGameListFix__FP10mgCTextureiiii_0x21c880");
#endif

    switch (ctx->pc) {
        case 0x21c8bcu: goto label_21c8bc;
        case 0x21c8c8u: goto label_21c8c8;
        case 0x21c8d4u: goto label_21c8d4;
        case 0x21c8e0u: goto label_21c8e0;
        case 0x21c8f8u: goto label_21c8f8;
        case 0x21c91cu: goto label_21c91c;
        case 0x21c934u: goto label_21c934;
        case 0x21c954u: goto label_21c954;
        case 0x21c96cu: goto label_21c96c;
        case 0x21c994u: goto label_21c994;
        case 0x21c9acu: goto label_21c9ac;
        case 0x21c9c4u: goto label_21c9c4;
        case 0x21c9e0u: goto label_21c9e0;
        case 0x21c9f8u: goto label_21c9f8;
        case 0x21ca18u: goto label_21ca18;
        case 0x21ca30u: goto label_21ca30;
        case 0x21ca58u: goto label_21ca58;
        case 0x21ca70u: goto label_21ca70;
        case 0x21ca78u: goto label_21ca78;
        default: break;
    }

    ctx->pc = 0x21c880u;

    // 0x21c880: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x21c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x21c884: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21c888: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21c888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21c88c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21c890: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21c890u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c894: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21c894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21c898: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21c898u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c89c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21c8a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21c8a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21c8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c8ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8b0: 0x2510ffc8  addiu       $s0, $t0, -0x38
    ctx->pc = 0x21c8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967240));
    // 0x21c8b4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x21C8B4u;
    SET_GPR_U32(ctx, 31, 0x21C8BCu);
    ctx->pc = 0x21C8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8B4u;
            // 0x21c8b8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8BCu; }
        if (ctx->pc != 0x21C8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8BCu; }
        if (ctx->pc != 0x21C8BCu) { return; }
    }
    ctx->pc = 0x21C8BCu;
label_21c8bc:
    // 0x21c8bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c8c0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x21C8C0u;
    SET_GPR_U32(ctx, 31, 0x21C8C8u);
    ctx->pc = 0x21C8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8C0u;
            // 0x21c8c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8C8u; }
        if (ctx->pc != 0x21C8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8C8u; }
        if (ctx->pc != 0x21C8C8u) { return; }
    }
    ctx->pc = 0x21C8C8u;
label_21c8c8:
    // 0x21c8c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c8cc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x21C8CCu;
    SET_GPR_U32(ctx, 31, 0x21C8D4u);
    ctx->pc = 0x21C8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8CCu;
            // 0x21c8d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8D4u; }
        if (ctx->pc != 0x21C8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8D4u; }
        if (ctx->pc != 0x21C8D4u) { return; }
    }
    ctx->pc = 0x21C8D4u;
label_21c8d4:
    // 0x21c8d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8d8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x21C8D8u;
    SET_GPR_U32(ctx, 31, 0x21C8E0u);
    ctx->pc = 0x21C8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8D8u;
            // 0x21c8dc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8E0u; }
        if (ctx->pc != 0x21C8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8E0u; }
        if (ctx->pc != 0x21C8E0u) { return; }
    }
    ctx->pc = 0x21C8E0u;
label_21c8e0:
    // 0x21c8e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c8e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21c8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8f0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x21C8F0u;
    SET_GPR_U32(ctx, 31, 0x21C8F8u);
    ctx->pc = 0x21C8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8F0u;
            // 0x21c8f4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8F8u; }
        if (ctx->pc != 0x21C8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8F8u; }
        if (ctx->pc != 0x21C8F8u) { return; }
    }
    ctx->pc = 0x21C8F8u;
label_21c8f8:
    // 0x21c8f8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21c8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21c8fc: 0x26b10004  addiu       $s1, $s5, 0x4
    ctx->pc = 0x21c8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x21c900: 0x8428ff76  lh          $t0, -0x8A($at)
    ctx->pc = 0x21c900u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967158)));
    // 0x21c904: 0x26920004  addiu       $s2, $s4, 0x4
    ctx->pc = 0x21c904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x21c908: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x21c908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x21c90c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c910: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21c910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c914: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C914u;
    SET_GPR_U32(ctx, 31, 0x21C91Cu);
    ctx->pc = 0x21C918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C914u;
            // 0x21c918: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C91Cu; }
        if (ctx->pc != 0x21C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C91Cu; }
        if (ctx->pc != 0x21C91Cu) { return; }
    }
    ctx->pc = 0x21C91Cu;
label_21c91c:
    // 0x21c91c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21c91cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21c920: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21c920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c924: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x21c924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x21c928: 0x24c6ff70  addiu       $a2, $a2, -0x90
    ctx->pc = 0x21c928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967152));
    // 0x21c92c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21C92Cu;
    SET_GPR_U32(ctx, 31, 0x21C934u);
    ctx->pc = 0x21C930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C92Cu;
            // 0x21c930: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C934u; }
        if (ctx->pc != 0x21C934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C934u; }
        if (ctx->pc != 0x21C934u) { return; }
    }
    ctx->pc = 0x21C934u;
label_21c934:
    // 0x21c934: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21c934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21c938: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x21c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x21c93c: 0x8422ff76  lh          $v0, -0x8A($at)
    ctx->pc = 0x21c93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967158)));
    // 0x21c940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c944: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21c944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c948: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x21c948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c94c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C94Cu;
    SET_GPR_U32(ctx, 31, 0x21C954u);
    ctx->pc = 0x21C950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C94Cu;
            // 0x21c950: 0x2423021  addu        $a2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C954u; }
        if (ctx->pc != 0x21C954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C954u; }
        if (ctx->pc != 0x21C954u) { return; }
    }
    ctx->pc = 0x21C954u;
label_21c954:
    // 0x21c954: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21c954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21c958: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21c958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c95c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x21c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x21c960: 0x24c6ff88  addiu       $a2, $a2, -0x78
    ctx->pc = 0x21c960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967176));
    // 0x21c964: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21C964u;
    SET_GPR_U32(ctx, 31, 0x21C96Cu);
    ctx->pc = 0x21C968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C964u;
            // 0x21c968: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C96Cu; }
        if (ctx->pc != 0x21C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C96Cu; }
        if (ctx->pc != 0x21C96Cu) { return; }
    }
    ctx->pc = 0x21C96Cu;
label_21c96c:
    // 0x21c96c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21c96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21c970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c974: 0x8422ff76  lh          $v0, -0x8A($at)
    ctx->pc = 0x21c974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967158)));
    // 0x21c978: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x21c978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x21c97c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21c97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c980: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21c980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21c984: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21c988: 0x8428ffa6  lh          $t0, -0x5A($at)
    ctx->pc = 0x21c988u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967206)));
    // 0x21c98c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C98Cu;
    SET_GPR_U32(ctx, 31, 0x21C994u);
    ctx->pc = 0x21C990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C98Cu;
            // 0x21c990: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C994u; }
        if (ctx->pc != 0x21C994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C994u; }
        if (ctx->pc != 0x21C994u) { return; }
    }
    ctx->pc = 0x21C994u;
label_21c994:
    // 0x21c994: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21c994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21c998: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21c998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c99c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x21c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x21c9a0: 0x24c6ffa0  addiu       $a2, $a2, -0x60
    ctx->pc = 0x21c9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967200));
    // 0x21c9a4: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21C9A4u;
    SET_GPR_U32(ctx, 31, 0x21C9ACu);
    ctx->pc = 0x21C9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9A4u;
            // 0x21c9a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9ACu; }
        if (ctx->pc != 0x21C9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9ACu; }
        if (ctx->pc != 0x21C9ACu) { return; }
    }
    ctx->pc = 0x21C9ACu;
label_21c9ac:
    // 0x21c9ac: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21c9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21c9b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c9b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21c9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9b8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21c9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9bc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x21C9BCu;
    SET_GPR_U32(ctx, 31, 0x21C9C4u);
    ctx->pc = 0x21C9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9BCu;
            // 0x21c9c0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9C4u; }
        if (ctx->pc != 0x21C9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9C4u; }
        if (ctx->pc != 0x21C9C4u) { return; }
    }
    ctx->pc = 0x21C9C4u;
label_21c9c4:
    // 0x21c9c4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21c9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21c9c8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x21c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x21c9cc: 0x8428ff76  lh          $t0, -0x8A($at)
    ctx->pc = 0x21c9ccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967158)));
    // 0x21c9d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21c9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21c9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C9D8u;
    SET_GPR_U32(ctx, 31, 0x21C9E0u);
    ctx->pc = 0x21C9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9D8u;
            // 0x21c9dc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9E0u; }
        if (ctx->pc != 0x21C9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9E0u; }
        if (ctx->pc != 0x21C9E0u) { return; }
    }
    ctx->pc = 0x21C9E0u;
label_21c9e0:
    // 0x21c9e0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21c9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21c9e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21c9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21c9e8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x21c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x21c9ec: 0x24c6ff70  addiu       $a2, $a2, -0x90
    ctx->pc = 0x21c9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967152));
    // 0x21c9f0: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21C9F0u;
    SET_GPR_U32(ctx, 31, 0x21C9F8u);
    ctx->pc = 0x21C9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9F0u;
            // 0x21c9f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9F8u; }
        if (ctx->pc != 0x21C9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C9F8u; }
        if (ctx->pc != 0x21C9F8u) { return; }
    }
    ctx->pc = 0x21C9F8u;
label_21c9f8:
    // 0x21c9f8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21c9fc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x21c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x21ca00: 0x8422ff76  lh          $v0, -0x8A($at)
    ctx->pc = 0x21ca00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967158)));
    // 0x21ca04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21ca04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21ca08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca0c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x21ca0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca10: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CA10u;
    SET_GPR_U32(ctx, 31, 0x21CA18u);
    ctx->pc = 0x21CA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA10u;
            // 0x21ca14: 0x2823021  addu        $a2, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA18u; }
        if (ctx->pc != 0x21CA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA18u; }
        if (ctx->pc != 0x21CA18u) { return; }
    }
    ctx->pc = 0x21CA18u;
label_21ca18:
    // 0x21ca18: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21ca18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21ca1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21ca20: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x21ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x21ca24: 0x24c6ff88  addiu       $a2, $a2, -0x78
    ctx->pc = 0x21ca24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967176));
    // 0x21ca28: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CA28u;
    SET_GPR_U32(ctx, 31, 0x21CA30u);
    ctx->pc = 0x21CA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA28u;
            // 0x21ca2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA30u; }
        if (ctx->pc != 0x21CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA30u; }
        if (ctx->pc != 0x21CA30u) { return; }
    }
    ctx->pc = 0x21CA30u;
label_21ca30:
    // 0x21ca30: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21ca30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21ca34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21ca34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca38: 0x8422ff76  lh          $v0, -0x8A($at)
    ctx->pc = 0x21ca38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967158)));
    // 0x21ca3c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21ca3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca40: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x21ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x21ca44: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21ca44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21ca48: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x21ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x21ca4c: 0x8428ffa6  lh          $t0, -0x5A($at)
    ctx->pc = 0x21ca4cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967206)));
    // 0x21ca50: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21CA50u;
    SET_GPR_U32(ctx, 31, 0x21CA58u);
    ctx->pc = 0x21CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA50u;
            // 0x21ca54: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA58u; }
        if (ctx->pc != 0x21CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA58u; }
        if (ctx->pc != 0x21CA58u) { return; }
    }
    ctx->pc = 0x21CA58u;
label_21ca58:
    // 0x21ca58: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21ca58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x21ca5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21ca60: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x21ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x21ca64: 0x24c6ffa0  addiu       $a2, $a2, -0x60
    ctx->pc = 0x21ca64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967200));
    // 0x21ca68: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21CA68u;
    SET_GPR_U32(ctx, 31, 0x21CA70u);
    ctx->pc = 0x21CA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA68u;
            // 0x21ca6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA70u; }
        if (ctx->pc != 0x21CA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA70u; }
        if (ctx->pc != 0x21CA70u) { return; }
    }
    ctx->pc = 0x21CA70u;
label_21ca70:
    // 0x21ca70: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x21CA70u;
    SET_GPR_U32(ctx, 31, 0x21CA78u);
    ctx->pc = 0x21CA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA70u;
            // 0x21ca74: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA78u; }
        if (ctx->pc != 0x21CA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA78u; }
        if (ctx->pc != 0x21CA78u) { return; }
    }
    ctx->pc = 0x21CA78u;
label_21ca78:
    // 0x21ca78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21ca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ca7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21ca7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ca80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21ca80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ca84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21ca84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ca88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ca88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ca8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ca8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ca90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ca90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ca94: 0x3e00008  jr          $ra
    ctx->pc = 0x21CA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA94u;
            // 0x21ca98: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CA9Cu;
}
