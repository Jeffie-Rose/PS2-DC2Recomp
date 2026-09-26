#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSelectedWord__13CNameRegiMenuFv
// Address: 0x30e160 - 0x30e400
void DrawSelectedWord__13CNameRegiMenuFv_0x30e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSelectedWord__13CNameRegiMenuFv_0x30e160");
#endif

    switch (ctx->pc) {
        case 0x30e18cu: goto label_30e18c;
        case 0x30e1b4u: goto label_30e1b4;
        case 0x30e1c0u: goto label_30e1c0;
        case 0x30e1ccu: goto label_30e1cc;
        case 0x30e1d8u: goto label_30e1d8;
        case 0x30e1ecu: goto label_30e1ec;
        case 0x30e204u: goto label_30e204;
        case 0x30e220u: goto label_30e220;
        case 0x30e238u: goto label_30e238;
        case 0x30e250u: goto label_30e250;
        case 0x30e26cu: goto label_30e26c;
        case 0x30e284u: goto label_30e284;
        case 0x30e28cu: goto label_30e28c;
        case 0x30e29cu: goto label_30e29c;
        case 0x30e2a8u: goto label_30e2a8;
        case 0x30e2c0u: goto label_30e2c0;
        case 0x30e2c8u: goto label_30e2c8;
        case 0x30e2d8u: goto label_30e2d8;
        case 0x30e2ecu: goto label_30e2ec;
        case 0x30e310u: goto label_30e310;
        case 0x30e35cu: goto label_30e35c;
        case 0x30e374u: goto label_30e374;
        case 0x30e388u: goto label_30e388;
        case 0x30e39cu: goto label_30e39c;
        case 0x30e3a4u: goto label_30e3a4;
        case 0x30e3b4u: goto label_30e3b4;
        case 0x30e3c4u: goto label_30e3c4;
        case 0x30e3d0u: goto label_30e3d0;
        case 0x30e3e4u: goto label_30e3e4;
        default: break;
    }

    ctx->pc = 0x30e160u;

    // 0x30e160: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x30e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x30e164: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30e168: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30e16c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30e170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30e174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e178: 0x8f82a1e0  lw          $v0, -0x5E20($gp)
    ctx->pc = 0x30e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30e17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30e17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e180: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x30e180u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e184: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30E184u;
    SET_GPR_U32(ctx, 31, 0x30E18Cu);
    ctx->pc = 0x30E188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E184u;
            // 0x30e188: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E18Cu; }
        if (ctx->pc != 0x30E18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E18Cu; }
        if (ctx->pc != 0x30E18Cu) { return; }
    }
    ctx->pc = 0x30E18Cu;
label_30e18c:
    // 0x30e18c: 0x878585f8  lh          $a1, -0x7A08($gp)
    ctx->pc = 0x30e18cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30e190: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e194: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x30e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30e198: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x30e198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30e19c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30e1a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30e1a4: 0x2471003e  addiu       $s1, $v1, 0x3E
    ctx->pc = 0x30e1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x30e1a8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x30e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30e1ac: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x30E1ACu;
    SET_GPR_U32(ctx, 31, 0x30E1B4u);
    ctx->pc = 0x30E1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1ACu;
            // 0x30e1b0: 0x29043  sra         $s2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1B4u; }
        if (ctx->pc != 0x30E1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1B4u; }
        if (ctx->pc != 0x30E1B4u) { return; }
    }
    ctx->pc = 0x30E1B4u;
label_30e1b4:
    // 0x30e1b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e1b8: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x30E1B8u;
    SET_GPR_U32(ctx, 31, 0x30E1C0u);
    ctx->pc = 0x30E1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1B8u;
            // 0x30e1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1C0u; }
        if (ctx->pc != 0x30E1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1C0u; }
        if (ctx->pc != 0x30E1C0u) { return; }
    }
    ctx->pc = 0x30E1C0u;
label_30e1c0:
    // 0x30e1c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e1c4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30E1C4u;
    SET_GPR_U32(ctx, 31, 0x30E1CCu);
    ctx->pc = 0x30E1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1C4u;
            // 0x30e1c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1CCu; }
        if (ctx->pc != 0x30E1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1CCu; }
        if (ctx->pc != 0x30E1CCu) { return; }
    }
    ctx->pc = 0x30E1CCu;
label_30e1cc:
    // 0x30e1cc: 0x8f85a1e0  lw          $a1, -0x5E20($gp)
    ctx->pc = 0x30e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30e1d0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x30E1D0u;
    SET_GPR_U32(ctx, 31, 0x30E1D8u);
    ctx->pc = 0x30E1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1D0u;
            // 0x30e1d4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1D8u; }
        if (ctx->pc != 0x30E1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1D8u; }
        if (ctx->pc != 0x30E1D8u) { return; }
    }
    ctx->pc = 0x30E1D8u;
label_30e1d8:
    // 0x30e1d8: 0x3c02424c  lui         $v0, 0x424C
    ctx->pc = 0x30e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16972 << 16));
    // 0x30e1dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30e1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30e1e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30e1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e1e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30E1E4u;
    SET_GPR_U32(ctx, 31, 0x30E1ECu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1ECu; }
        if (ctx->pc != 0x30E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1ECu; }
        if (ctx->pc != 0x30E1ECu) { return; }
    }
    ctx->pc = 0x30E1ECu;
label_30e1ec:
    // 0x30e1ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x30e1ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30e1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30e1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1fc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30E1FCu;
    SET_GPR_U32(ctx, 31, 0x30E204u);
    ctx->pc = 0x30E200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1FCu;
            // 0x30e200: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E204u; }
        if (ctx->pc != 0x30E204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E204u; }
        if (ctx->pc != 0x30E204u) { return; }
    }
    ctx->pc = 0x30E204u;
label_30e204:
    // 0x30e204: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x30e204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x30e208: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x30e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x30e20c: 0x8428e686  lh          $t0, -0x197A($at)
    ctx->pc = 0x30e20cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960774)));
    // 0x30e210: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x30e210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x30e214: 0x24060059  addiu       $a2, $zero, 0x59
    ctx->pc = 0x30e214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x30e218: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30E218u;
    SET_GPR_U32(ctx, 31, 0x30E220u);
    ctx->pc = 0x30E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E218u;
            // 0x30e21c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E220u; }
        if (ctx->pc != 0x30E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E220u; }
        if (ctx->pc != 0x30E220u) { return; }
    }
    ctx->pc = 0x30E220u;
label_30e220:
    // 0x30e220: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x30e220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x30e224: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e228: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x30e228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x30e22c: 0x24c6e680  addiu       $a2, $a2, -0x1980
    ctx->pc = 0x30e22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960768));
    // 0x30e230: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x30E230u;
    SET_GPR_U32(ctx, 31, 0x30E238u);
    ctx->pc = 0x30E234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E230u;
            // 0x30e234: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E238u; }
        if (ctx->pc != 0x30E238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E238u; }
        if (ctx->pc != 0x30E238u) { return; }
    }
    ctx->pc = 0x30E238u;
label_30e238:
    // 0x30e238: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30e23c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e240: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30e240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e244: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30e244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e248: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30E248u;
    SET_GPR_U32(ctx, 31, 0x30E250u);
    ctx->pc = 0x30E24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E248u;
            // 0x30e24c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E250u; }
        if (ctx->pc != 0x30E250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E250u; }
        if (ctx->pc != 0x30E250u) { return; }
    }
    ctx->pc = 0x30E250u;
label_30e250:
    // 0x30e250: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x30e250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x30e254: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30e254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e258: 0x8428e686  lh          $t0, -0x197A($at)
    ctx->pc = 0x30e258u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960774)));
    // 0x30e25c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x30e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30e260: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30e260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e264: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30E264u;
    SET_GPR_U32(ctx, 31, 0x30E26Cu);
    ctx->pc = 0x30E268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E264u;
            // 0x30e268: 0x24060056  addiu       $a2, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E26Cu; }
        if (ctx->pc != 0x30E26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E26Cu; }
        if (ctx->pc != 0x30E26Cu) { return; }
    }
    ctx->pc = 0x30E26Cu;
label_30e26c:
    // 0x30e26c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x30e26cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x30e270: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e274: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x30e274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30e278: 0x24c6e680  addiu       $a2, $a2, -0x1980
    ctx->pc = 0x30e278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960768));
    // 0x30e27c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x30E27Cu;
    SET_GPR_U32(ctx, 31, 0x30E284u);
    ctx->pc = 0x30E280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E27Cu;
            // 0x30e280: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E284u; }
        if (ctx->pc != 0x30E284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E284u; }
        if (ctx->pc != 0x30E284u) { return; }
    }
    ctx->pc = 0x30E284u;
label_30e284:
    // 0x30e284: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30E284u;
    SET_GPR_U32(ctx, 31, 0x30E28Cu);
    ctx->pc = 0x30E288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E284u;
            // 0x30e288: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E28Cu; }
        if (ctx->pc != 0x30E28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E28Cu; }
        if (ctx->pc != 0x30E28Cu) { return; }
    }
    ctx->pc = 0x30E28Cu;
label_30e28c:
    // 0x30e28c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30e290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e294: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x30E294u;
    SET_GPR_U32(ctx, 31, 0x30E29Cu);
    ctx->pc = 0x30E298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E294u;
            // 0x30e298: 0x26510020  addiu       $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E29Cu; }
        if (ctx->pc != 0x30E29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E29Cu; }
        if (ctx->pc != 0x30E29Cu) { return; }
    }
    ctx->pc = 0x30E29Cu;
label_30e29c:
    // 0x30e29c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e2a0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30E2A0u;
    SET_GPR_U32(ctx, 31, 0x30E2A8u);
    ctx->pc = 0x30E2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E2A0u;
            // 0x30e2a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2A8u; }
        if (ctx->pc != 0x30E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2A8u; }
        if (ctx->pc != 0x30E2A8u) { return; }
    }
    ctx->pc = 0x30E2A8u;
label_30e2a8:
    // 0x30e2a8: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x30e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x30e2ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e2b0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30e2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30e2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2b8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30E2B8u;
    SET_GPR_U32(ctx, 31, 0x30E2C0u);
    ctx->pc = 0x30E2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E2B8u;
            // 0x30e2bc: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2C0u; }
        if (ctx->pc != 0x30E2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2C0u; }
        if (ctx->pc != 0x30E2C0u) { return; }
    }
    ctx->pc = 0x30E2C0u;
label_30e2c0:
    // 0x30e2c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30E2C0u;
    {
        const bool branch_taken_0x30e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E2C0u;
            // 0x30e2c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e2c0) {
            ctx->pc = 0x30E2F4u;
            goto label_30e2f4;
        }
    }
    ctx->pc = 0x30E2C8u;
label_30e2c8:
    // 0x30e2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30e2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2cc: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x30e2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x30e2d0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30E2D0u;
    SET_GPR_U32(ctx, 31, 0x30E2D8u);
    ctx->pc = 0x30E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E2D0u;
            // 0x30e2d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2D8u; }
        if (ctx->pc != 0x30E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2D8u; }
        if (ctx->pc != 0x30E2D8u) { return; }
    }
    ctx->pc = 0x30E2D8u;
label_30e2d8:
    // 0x30e2d8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x30e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30e2dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e2e0: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x30e2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x30e2e4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30E2E4u;
    SET_GPR_U32(ctx, 31, 0x30E2ECu);
    ctx->pc = 0x30E2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E2E4u;
            // 0x30e2e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2ECu; }
        if (ctx->pc != 0x30E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E2ECu; }
        if (ctx->pc != 0x30E2ECu) { return; }
    }
    ctx->pc = 0x30E2ECu;
label_30e2ec:
    // 0x30e2ec: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x30e2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x30e2f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30e2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30e2f4:
    // 0x30e2f4: 0x0  nop
    ctx->pc = 0x30e2f4u;
    // NOP
    // 0x30e2f8: 0x878285f8  lh          $v0, -0x7A08($gp)
    ctx->pc = 0x30e2f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x30e2fc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x30e2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e300: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x30E300u;
    {
        const bool branch_taken_0x30e300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E300u;
            // 0x30e304: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e300) {
            ctx->pc = 0x30E2C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e2c8;
        }
    }
    ctx->pc = 0x30E308u;
    // 0x30e308: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30E308u;
    SET_GPR_U32(ctx, 31, 0x30E310u);
    ctx->pc = 0x30E30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E308u;
            // 0x30e30c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E310u; }
        if (ctx->pc != 0x30E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E310u; }
        if (ctx->pc != 0x30E310u) { return; }
    }
    ctx->pc = 0x30E310u;
label_30e310:
    // 0x30e310: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x30e310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x30e314: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x30e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x30e318: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x30e318u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30e31c: 0x0  nop
    ctx->pc = 0x30e31cu;
    // NOP
    // 0x30e320: 0x0  nop
    ctx->pc = 0x30e320u;
    // NOP
    // 0x30e324: 0x1010  mfhi        $v0
    ctx->pc = 0x30e324u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30e328: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x30e328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x30e32c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E32Cu;
    {
        const bool branch_taken_0x30e32c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E32Cu;
            // 0x30e330: 0x24110060  addiu       $s1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e32c) {
            ctx->pc = 0x30E338u;
            goto label_30e338;
        }
    }
    ctx->pc = 0x30E334u;
    // 0x30e334: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30e334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e338:
    // 0x30e338: 0x8e0602fc  lw          $a2, 0x2FC($s0)
    ctx->pc = 0x30e338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x30e33c: 0x2642001e  addiu       $v0, $s2, 0x1E
    ctx->pc = 0x30e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 30));
    // 0x30e340: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e344: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x30e344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30e348: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x30e348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30e34c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30e350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30e350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30e354: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30E354u;
    SET_GPR_U32(ctx, 31, 0x30E35Cu);
    ctx->pc = 0x30E358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E354u;
            // 0x30e358: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E35Cu; }
        if (ctx->pc != 0x30E35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E35Cu; }
        if (ctx->pc != 0x30E35Cu) { return; }
    }
    ctx->pc = 0x30E35Cu;
label_30e35c:
    // 0x30e35c: 0x240500dc  addiu       $a1, $zero, 0xDC
    ctx->pc = 0x30e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x30e360: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x30e360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e364: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e368: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30e368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e36c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30E36Cu;
    SET_GPR_U32(ctx, 31, 0x30E374u);
    ctx->pc = 0x30E370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E36Cu;
            // 0x30e370: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E374u; }
        if (ctx->pc != 0x30E374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E374u; }
        if (ctx->pc != 0x30E374u) { return; }
    }
    ctx->pc = 0x30E374u;
label_30e374:
    // 0x30e374: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e378: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30e378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e37c: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x30e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x30e380: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30E380u;
    SET_GPR_U32(ctx, 31, 0x30E388u);
    ctx->pc = 0x30E384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E380u;
            // 0x30e384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E388u; }
        if (ctx->pc != 0x30E388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E388u; }
        if (ctx->pc != 0x30E388u) { return; }
    }
    ctx->pc = 0x30E388u;
label_30e388:
    // 0x30e388: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x30e388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x30e38c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30e390: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x30e390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x30e394: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30E394u;
    SET_GPR_U32(ctx, 31, 0x30E39Cu);
    ctx->pc = 0x30E398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E394u;
            // 0x30e398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E39Cu; }
        if (ctx->pc != 0x30E39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E39Cu; }
        if (ctx->pc != 0x30E39Cu) { return; }
    }
    ctx->pc = 0x30E39Cu;
label_30e39c:
    // 0x30e39c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30E39Cu;
    SET_GPR_U32(ctx, 31, 0x30E3A4u);
    ctx->pc = 0x30E3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E39Cu;
            // 0x30e3a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3A4u; }
        if (ctx->pc != 0x30E3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3A4u; }
        if (ctx->pc != 0x30E3A4u) { return; }
    }
    ctx->pc = 0x30E3A4u;
label_30e3a4:
    // 0x30e3a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30e3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30e3a8: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x30e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x30e3ac: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30E3ACu;
    SET_GPR_U32(ctx, 31, 0x30E3B4u);
    ctx->pc = 0x30E3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E3ACu;
            // 0x30e3b0: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3B4u; }
        if (ctx->pc != 0x30E3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3B4u; }
        if (ctx->pc != 0x30E3B4u) { return; }
    }
    ctx->pc = 0x30E3B4u;
label_30e3b4:
    // 0x30e3b4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x30e3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x30e3b8: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x30e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30e3bc: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30E3BCu;
    SET_GPR_U32(ctx, 31, 0x30E3C4u);
    ctx->pc = 0x30E3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E3BCu;
            // 0x30e3c0: 0x24060067  addiu       $a2, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3C4u; }
        if (ctx->pc != 0x30E3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3C4u; }
        if (ctx->pc != 0x30E3C4u) { return; }
    }
    ctx->pc = 0x30E3C4u;
label_30e3c4:
    // 0x30e3c4: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x30e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30e3c8: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30E3C8u;
    SET_GPR_U32(ctx, 31, 0x30E3D0u);
    ctx->pc = 0x30E3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E3C8u;
            // 0x30e3cc: 0x26050299  addiu       $a1, $s0, 0x299 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3D0u; }
        if (ctx->pc != 0x30E3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3D0u; }
        if (ctx->pc != 0x30E3D0u) { return; }
    }
    ctx->pc = 0x30E3D0u;
label_30e3d0:
    // 0x30e3d0: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x30e3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x30e3d4: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x30e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30e3d8: 0x8e070218  lw          $a3, 0x218($s0)
    ctx->pc = 0x30e3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x30e3dc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30E3DCu;
    SET_GPR_U32(ctx, 31, 0x30E3E4u);
    ctx->pc = 0x30E3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E3DCu;
            // 0x30e3e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3E4u; }
        if (ctx->pc != 0x30E3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E3E4u; }
        if (ctx->pc != 0x30E3E4u) { return; }
    }
    ctx->pc = 0x30E3E4u;
label_30e3e4:
    // 0x30e3e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30e3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30e3e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30e3e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e3ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30e3ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e3f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e3f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x30E3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E3F8u;
            // 0x30e3fc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E400u;
}
