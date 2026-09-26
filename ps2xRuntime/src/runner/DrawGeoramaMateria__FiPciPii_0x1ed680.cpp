#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawGeoramaMateria__FiPciPii
// Address: 0x1ed680 - 0x1eda80
void DrawGeoramaMateria__FiPciPii_0x1ed680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawGeoramaMateria__FiPciPii_0x1ed680");
#endif

    switch (ctx->pc) {
        case 0x1ed6f8u: goto label_1ed6f8;
        case 0x1ed700u: goto label_1ed700;
        case 0x1ed73cu: goto label_1ed73c;
        case 0x1ed744u: goto label_1ed744;
        case 0x1ed750u: goto label_1ed750;
        case 0x1ed75cu: goto label_1ed75c;
        case 0x1ed768u: goto label_1ed768;
        case 0x1ed780u: goto label_1ed780;
        case 0x1ed798u: goto label_1ed798;
        case 0x1ed7b0u: goto label_1ed7b0;
        case 0x1ed7d4u: goto label_1ed7d4;
        case 0x1ed7ecu: goto label_1ed7ec;
        case 0x1ed80cu: goto label_1ed80c;
        case 0x1ed824u: goto label_1ed824;
        case 0x1ed878u: goto label_1ed878;
        case 0x1ed880u: goto label_1ed880;
        case 0x1ed898u: goto label_1ed898;
        case 0x1ed8a4u: goto label_1ed8a4;
        case 0x1ed8acu: goto label_1ed8ac;
        case 0x1ed8d4u: goto label_1ed8d4;
        case 0x1ed8f0u: goto label_1ed8f0;
        case 0x1ed924u: goto label_1ed924;
        case 0x1ed930u: goto label_1ed930;
        case 0x1ed940u: goto label_1ed940;
        case 0x1ed948u: goto label_1ed948;
        case 0x1ed994u: goto label_1ed994;
        case 0x1ed9b0u: goto label_1ed9b0;
        case 0x1eda18u: goto label_1eda18;
        case 0x1eda24u: goto label_1eda24;
        case 0x1eda34u: goto label_1eda34;
        case 0x1eda50u: goto label_1eda50;
        default: break;
    }

    ctx->pc = 0x1ed680u;

    // 0x1ed680: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1ed680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1ed684: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1ed684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1ed688: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ed688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ed68c: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1ed68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1ed690: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ed690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ed694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ed694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed698: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ed698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ed69c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1ed69cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed6a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ed6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ed6a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ed6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ed6a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ed6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ed6ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ed6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ed6b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ed6b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed6b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed6b8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1ed6bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed6c0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1ed6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1ed6c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed6c8: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x1ed6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1ed6cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ed6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed6d0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1ed6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed6d4: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x1ed6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ed6d8: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1ed6dc: 0x24e2fe52  addiu       $v0, $a3, -0x1AE
    ctx->pc = 0x1ed6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966866));
    // 0x1ed6e0: 0x2a843  sra         $s5, $v0, 1
    ctx->pc = 0x1ed6e0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1ed6e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ed6e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ed6e8: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1ed6e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed6ec: 0xf71023  subu        $v0, $a3, $s7
    ctx->pc = 0x1ed6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x1ed6f0: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1ED6F0u;
    SET_GPR_U32(ctx, 31, 0x1ED6F8u);
    ctx->pc = 0x1ED6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6F0u;
            // 0x1ed6f4: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6F8u; }
        if (ctx->pc != 0x1ED6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED6F8u; }
        if (ctx->pc != 0x1ED6F8u) { return; }
    }
    ctx->pc = 0x1ED6F8u;
label_1ed6f8:
    // 0x1ed6f8: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x1ED6F8u;
    SET_GPR_U32(ctx, 31, 0x1ED700u);
    ctx->pc = 0x1ED6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6F8u;
            // 0x1ed6fc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED700u; }
        if (ctx->pc != 0x1ED700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED700u; }
        if (ctx->pc != 0x1ED700u) { return; }
    }
    ctx->pc = 0x1ED700u;
label_1ed700:
    // 0x1ed700: 0x26a30006  addiu       $v1, $s5, 0x6
    ctx->pc = 0x1ed700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x1ed704: 0x26820006  addiu       $v0, $s4, 0x6
    ctx->pc = 0x1ed704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x1ed708: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ed708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed70c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ed70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ed710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed714: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x1ed714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1ed718: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ed718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ed71c: 0x3c0343d3  lui         $v1, 0x43D3
    ctx->pc = 0x1ed71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17363 << 16));
    // 0x1ed720: 0x3c024388  lui         $v0, 0x4388
    ctx->pc = 0x1ed720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17288 << 16));
    // 0x1ed724: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ed724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed728: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ed728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed72c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1ed72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ed730: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1ed730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ed734: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x1ED734u;
    SET_GPR_U32(ctx, 31, 0x1ED73Cu);
    ctx->pc = 0x1ED738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED734u;
            // 0x1ed738: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED73Cu; }
        if (ctx->pc != 0x1ED73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED73Cu; }
        if (ctx->pc != 0x1ED73Cu) { return; }
    }
    ctx->pc = 0x1ED73Cu;
label_1ed73c:
    // 0x1ed73c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1ED73Cu;
    SET_GPR_U32(ctx, 31, 0x1ED744u);
    ctx->pc = 0x1ED740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED73Cu;
            // 0x1ed740: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED744u; }
        if (ctx->pc != 0x1ED744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED744u; }
        if (ctx->pc != 0x1ED744u) { return; }
    }
    ctx->pc = 0x1ED744u;
label_1ed744:
    // 0x1ed744: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1ed744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ed748: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1ED748u;
    SET_GPR_U32(ctx, 31, 0x1ED750u);
    ctx->pc = 0x1ED74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED748u;
            // 0x1ed74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED750u; }
        if (ctx->pc != 0x1ED750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED750u; }
        if (ctx->pc != 0x1ED750u) { return; }
    }
    ctx->pc = 0x1ED750u;
label_1ed750:
    // 0x1ed750: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1ed750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ed754: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1ED754u;
    SET_GPR_U32(ctx, 31, 0x1ED75Cu);
    ctx->pc = 0x1ED758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED754u;
            // 0x1ed758: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED75Cu; }
        if (ctx->pc != 0x1ED75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED75Cu; }
        if (ctx->pc != 0x1ED75Cu) { return; }
    }
    ctx->pc = 0x1ED75Cu;
label_1ed75c:
    // 0x1ed75c: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1ed75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
    // 0x1ed760: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1ED760u;
    SET_GPR_U32(ctx, 31, 0x1ED768u);
    ctx->pc = 0x1ED764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED760u;
            // 0x1ed764: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED768u; }
        if (ctx->pc != 0x1ED768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED768u; }
        if (ctx->pc != 0x1ED768u) { return; }
    }
    ctx->pc = 0x1ED768u;
label_1ed768:
    // 0x1ed768: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ed768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ed76c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1ed76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ed770: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ed770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed774: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ed774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed778: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1ED778u;
    SET_GPR_U32(ctx, 31, 0x1ED780u);
    ctx->pc = 0x1ED77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED778u;
            // 0x1ed77c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED780u; }
        if (ctx->pc != 0x1ED780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED780u; }
        if (ctx->pc != 0x1ED780u) { return; }
    }
    ctx->pc = 0x1ED780u;
label_1ed780:
    // 0x1ed780: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x1ed780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1ed784: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ed784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed788: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ed788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed78c: 0x240701ae  addiu       $a3, $zero, 0x1AE
    ctx->pc = 0x1ed78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x1ed790: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ED790u;
    SET_GPR_U32(ctx, 31, 0x1ED798u);
    ctx->pc = 0x1ED794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED790u;
            // 0x1ed794: 0x24080046  addiu       $t0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED798u; }
        if (ctx->pc != 0x1ED798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED798u; }
        if (ctx->pc != 0x1ED798u) { return; }
    }
    ctx->pc = 0x1ED798u;
label_1ed798:
    // 0x1ed798: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1ed798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1ed79c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1ed79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ed7a0: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x1ed7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1ed7a4: 0x24c6dc30  addiu       $a2, $a2, -0x23D0
    ctx->pc = 0x1ed7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958128));
    // 0x1ed7a8: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1ED7A8u;
    SET_GPR_U32(ctx, 31, 0x1ED7B0u);
    ctx->pc = 0x1ED7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7A8u;
            // 0x1ed7ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7B0u; }
        if (ctx->pc != 0x1ED7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7B0u; }
        if (ctx->pc != 0x1ED7B0u) { return; }
    }
    ctx->pc = 0x1ED7B0u;
label_1ed7b0:
    // 0x1ed7b0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x1ed7b4: 0x240300d2  addiu       $v1, $zero, 0xD2
    ctx->pc = 0x1ed7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1ed7b8: 0x8422dc4e  lh          $v0, -0x23B2($at)
    ctx->pc = 0x1ed7b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958158)));
    // 0x1ed7bc: 0x26860046  addiu       $a2, $s4, 0x46
    ctx->pc = 0x1ed7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 70));
    // 0x1ed7c0: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x1ed7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1ed7c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ed7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7c8: 0x240701ae  addiu       $a3, $zero, 0x1AE
    ctx->pc = 0x1ed7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x1ed7cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ED7CCu;
    SET_GPR_U32(ctx, 31, 0x1ED7D4u);
    ctx->pc = 0x1ED7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7CCu;
            // 0x1ed7d0: 0x624023  subu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7D4u; }
        if (ctx->pc != 0x1ED7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7D4u; }
        if (ctx->pc != 0x1ED7D4u) { return; }
    }
    ctx->pc = 0x1ED7D4u;
label_1ed7d4:
    // 0x1ed7d4: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1ed7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1ed7d8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1ed7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ed7dc: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x1ed7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1ed7e0: 0x24c6dc48  addiu       $a2, $a2, -0x23B8
    ctx->pc = 0x1ed7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958152));
    // 0x1ed7e4: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1ED7E4u;
    SET_GPR_U32(ctx, 31, 0x1ED7ECu);
    ctx->pc = 0x1ED7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7E4u;
            // 0x1ed7e8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7ECu; }
        if (ctx->pc != 0x1ED7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED7ECu; }
        if (ctx->pc != 0x1ED7ECu) { return; }
    }
    ctx->pc = 0x1ED7ECu;
label_1ed7ec:
    // 0x1ed7ec: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1ed7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x1ed7f0: 0x26820118  addiu       $v0, $s4, 0x118
    ctx->pc = 0x1ed7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
    // 0x1ed7f4: 0x8428dc86  lh          $t0, -0x237A($at)
    ctx->pc = 0x1ed7f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958214)));
    // 0x1ed7f8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1ed7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1ed7fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ed7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed800: 0x240701ae  addiu       $a3, $zero, 0x1AE
    ctx->pc = 0x1ed800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x1ed804: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1ED804u;
    SET_GPR_U32(ctx, 31, 0x1ED80Cu);
    ctx->pc = 0x1ED808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED804u;
            // 0x1ed808: 0x483023  subu        $a2, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED80Cu; }
        if (ctx->pc != 0x1ED80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED80Cu; }
        if (ctx->pc != 0x1ED80Cu) { return; }
    }
    ctx->pc = 0x1ED80Cu;
label_1ed80c:
    // 0x1ed80c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1ed80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1ed810: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1ed810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ed814: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1ed814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1ed818: 0x24c6dc80  addiu       $a2, $a2, -0x2380
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958208));
    // 0x1ed81c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1ED81Cu;
    SET_GPR_U32(ctx, 31, 0x1ED824u);
    ctx->pc = 0x1ED820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED81Cu;
            // 0x1ed820: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED824u; }
        if (ctx->pc != 0x1ED824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED824u; }
        if (ctx->pc != 0x1ED824u) { return; }
    }
    ctx->pc = 0x1ED824u;
label_1ed824:
    // 0x1ed824: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1ed824u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed828: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed82c: 0x8f868780  lw          $a2, -0x7880($gp)
    ctx->pc = 0x1ed82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1ed830: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ed830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ed834: 0x8c238df8  lw          $v1, -0x7208($at)
    ctx->pc = 0x1ed834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938104)));
    // 0x1ed838: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ed838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ed83c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1ed83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1ed840: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1ed840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ed844: 0x24a58df0  addiu       $a1, $a1, -0x7210
    ctx->pc = 0x1ed844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938096));
    // 0x1ed848: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1ed84c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ed84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ed850: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ed850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ed854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed858: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1ed858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1ed85c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1ed85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ed860: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x1ed860u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed864: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ed864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ed868: 0x0  nop
    ctx->pc = 0x1ed868u;
    // NOP
    // 0x1ed86c: 0x46801820  cvt.s.w     $f0, $f3
    ctx->pc = 0x1ed86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ed870: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1ED870u;
    SET_GPR_U32(ctx, 31, 0x1ED878u);
    ctx->pc = 0x1ED874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED870u;
            // 0x1ed874: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED878u; }
        if (ctx->pc != 0x1ED878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED878u; }
        if (ctx->pc != 0x1ED878u) { return; }
    }
    ctx->pc = 0x1ED878u;
label_1ed878:
    // 0x1ed878: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1ED878u;
    SET_GPR_U32(ctx, 31, 0x1ED880u);
    ctx->pc = 0x1ED87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED878u;
            // 0x1ed87c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED880u; }
        if (ctx->pc != 0x1ED880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED880u; }
        if (ctx->pc != 0x1ED880u) { return; }
    }
    ctx->pc = 0x1ED880u;
label_1ed880:
    // 0x1ed880: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ed880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ed884: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ed884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1ed888: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x1ed888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1ed88c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1ed88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1ed890: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1ED890u;
    SET_GPR_U32(ctx, 31, 0x1ED898u);
    ctx->pc = 0x1ED894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED890u;
            // 0x1ed894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED898u; }
        if (ctx->pc != 0x1ED898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED898u; }
        if (ctx->pc != 0x1ED898u) { return; }
    }
    ctx->pc = 0x1ED898u;
label_1ed898:
    // 0x1ed898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed89c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1ED89Cu;
    SET_GPR_U32(ctx, 31, 0x1ED8A4u);
    ctx->pc = 0x1ED8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED89Cu;
            // 0x1ed8a0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8A4u; }
        if (ctx->pc != 0x1ED8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8A4u; }
        if (ctx->pc != 0x1ED8A4u) { return; }
    }
    ctx->pc = 0x1ED8A4u;
label_1ed8a4:
    // 0x1ed8a4: 0xc04a422  jal         func_129088
    ctx->pc = 0x1ED8A4u;
    SET_GPR_U32(ctx, 31, 0x1ED8ACu);
    ctx->pc = 0x1ED8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8A4u;
            // 0x1ed8a8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8ACu; }
        if (ctx->pc != 0x1ED8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8ACu; }
        if (ctx->pc != 0x1ED8ACu) { return; }
    }
    ctx->pc = 0x1ED8ACu;
label_1ed8ac:
    // 0x1ed8ac: 0x27a30154  addiu       $v1, $sp, 0x154
    ctx->pc = 0x1ed8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x1ed8b0: 0x26860026  addiu       $a2, $s4, 0x26
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 38));
    // 0x1ed8b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ed8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed8b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ed8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ed8bc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1ed8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1ed8c0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1ed8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ed8c4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1ed8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ed8c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ed8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed8cc: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1ED8CCu;
    SET_GPR_U32(ctx, 31, 0x1ED8D4u);
    ctx->pc = 0x1ED8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8CCu;
            // 0x1ed8d0: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8D4u; }
        if (ctx->pc != 0x1ED8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8D4u; }
        if (ctx->pc != 0x1ED8D4u) { return; }
    }
    ctx->pc = 0x1ED8D4u;
label_1ed8d4:
    // 0x1ed8d4: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x1ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x1ed8d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ed8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ed8dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ed8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed8e0: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x1ed8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1ed8e4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ed8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed8e8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1ED8E8u;
    SET_GPR_U32(ctx, 31, 0x1ED8F0u);
    ctx->pc = 0x1ED8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8E8u;
            // 0x1ed8ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8F0u; }
        if (ctx->pc != 0x1ED8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8F0u; }
        if (ctx->pc != 0x1ED8F0u) { return; }
    }
    ctx->pc = 0x1ED8F0u;
label_1ed8f0:
    // 0x1ed8f0: 0x83848ef4  lb          $a0, -0x710C($gp)
    ctx->pc = 0x1ed8f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938356)));
    // 0x1ed8f4: 0x87828ef8  lh          $v0, -0x7108($gp)
    ctx->pc = 0x1ed8f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938360)));
    // 0x1ed8f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1ed8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ed8fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ed8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed900: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x1ed900u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ed904: 0x2616000e  addiu       $s6, $s0, 0xE
    ctx->pc = 0x1ed904u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1ed908: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x1ed908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1ed90c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED90Cu;
    {
        const bool branch_taken_0x1ed90c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED90Cu;
            // 0x1ed910: 0x26930047  addiu       $s3, $s4, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed90c) {
            ctx->pc = 0x1ED918u;
            goto label_1ed918;
        }
    }
    ctx->pc = 0x1ED914u;
    // 0x1ed914: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ed914u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed918:
    // 0x1ed918: 0x216082a  slt         $at, $s0, $s6
    ctx->pc = 0x1ed918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1ed91c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1ED91Cu;
    {
        const bool branch_taken_0x1ed91c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED91Cu;
            // 0x1ed920: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed91c) {
            ctx->pc = 0x1ED9D0u;
            goto label_1ed9d0;
        }
    }
    ctx->pc = 0x1ED924u;
label_1ed924:
    // 0x1ed924: 0x3d11021  addu        $v0, $fp, $s1
    ctx->pc = 0x1ed924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x1ed928: 0xc065810  jal         func_196040
    ctx->pc = 0x1ED928u;
    SET_GPR_U32(ctx, 31, 0x1ED930u);
    ctx->pc = 0x1ED92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED928u;
            // 0x1ed92c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED930u; }
        if (ctx->pc != 0x1ED930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED930u; }
        if (ctx->pc != 0x1ED930u) { return; }
    }
    ctx->pc = 0x1ED930u;
label_1ed930:
    // 0x1ed930: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1ED930u;
    {
        const bool branch_taken_0x1ed930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED930u;
            // 0x1ed934: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed930) {
            ctx->pc = 0x1ED9BCu;
            goto label_1ed9bc;
        }
    }
    ctx->pc = 0x1ED938u;
    // 0x1ed938: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1ED938u;
    SET_GPR_U32(ctx, 31, 0x1ED940u);
    ctx->pc = 0x1ED93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED938u;
            // 0x1ed93c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED940u; }
        if (ctx->pc != 0x1ED940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED940u; }
        if (ctx->pc != 0x1ED940u) { return; }
    }
    ctx->pc = 0x1ED940u;
label_1ed940:
    // 0x1ed940: 0xc04a422  jal         func_129088
    ctx->pc = 0x1ED940u;
    SET_GPR_U32(ctx, 31, 0x1ED948u);
    ctx->pc = 0x1ED944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED940u;
            // 0x1ed944: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED948u; }
        if (ctx->pc != 0x1ED948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED948u; }
        if (ctx->pc != 0x1ED948u) { return; }
    }
    ctx->pc = 0x1ED948u;
label_1ed948:
    // 0x1ed948: 0x27a30154  addiu       $v1, $sp, 0x154
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x1ed94c: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x1ed94cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1ed950: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ed950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed954: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1ed954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ed958: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED958u;
    {
        const bool branch_taken_0x1ed958 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1ED95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED958u;
            // 0x1ed95c: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed958) {
            ctx->pc = 0x1ED96Cu;
            goto label_1ed96c;
        }
    }
    ctx->pc = 0x1ED960u;
    // 0x1ed960: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED960u;
    {
        const bool branch_taken_0x1ed960 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed960) {
            ctx->pc = 0x1ED96Cu;
            goto label_1ed96c;
        }
    }
    ctx->pc = 0x1ED968u;
    // 0x1ed968: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x1ed968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_1ed96c:
    // 0x1ed96c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED96Cu;
    {
        const bool branch_taken_0x1ed96c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED96Cu;
            // 0x1ed970: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed96c) {
            ctx->pc = 0x1ED980u;
            goto label_1ed980;
        }
    }
    ctx->pc = 0x1ED974u;
    // 0x1ed974: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ed974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1ed978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED978u;
    {
        const bool branch_taken_0x1ed978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED978u;
            // 0x1ed97c: 0x2e22823  subu        $a1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed978) {
            ctx->pc = 0x1ED988u;
            goto label_1ed988;
        }
    }
    ctx->pc = 0x1ED980u;
label_1ed980:
    // 0x1ed980: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ed980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ed984: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x1ed984u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ed988:
    // 0x1ed988: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ed988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ed98c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1ED98Cu;
    SET_GPR_U32(ctx, 31, 0x1ED994u);
    ctx->pc = 0x1ED990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED98Cu;
            // 0x1ed990: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED994u; }
        if (ctx->pc != 0x1ED994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED994u; }
        if (ctx->pc != 0x1ED994u) { return; }
    }
    ctx->pc = 0x1ED994u;
label_1ed994:
    // 0x1ed994: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x1ed994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x1ed998: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ed998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ed99c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ed99cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed9a0: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x1ed9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1ed9a4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ed9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed9a8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1ED9A8u;
    SET_GPR_U32(ctx, 31, 0x1ED9B0u);
    ctx->pc = 0x1ED9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9A8u;
            // 0x1ed9ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9B0u; }
        if (ctx->pc != 0x1ED9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9B0u; }
        if (ctx->pc != 0x1ED9B0u) { return; }
    }
    ctx->pc = 0x1ED9B0u;
label_1ed9b0:
    // 0x1ed9b0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED9B0u;
    {
        const bool branch_taken_0x1ed9b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9b0) {
            ctx->pc = 0x1ED9BCu;
            goto label_1ed9bc;
        }
    }
    ctx->pc = 0x1ED9B8u;
    // 0x1ed9b8: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x1ed9b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1ed9bc:
    // 0x1ed9bc: 0x0  nop
    ctx->pc = 0x1ed9bcu;
    // NOP
    // 0x1ed9c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ed9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ed9c4: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1ed9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1ed9c8: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1ED9C8u;
    {
        const bool branch_taken_0x1ed9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9C8u;
            // 0x1ed9cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9c8) {
            ctx->pc = 0x1ED924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed924;
        }
    }
    ctx->pc = 0x1ED9D0u;
label_1ed9d0:
    // 0x1ed9d0: 0x87878ef8  lh          $a3, -0x7108($gp)
    ctx->pc = 0x1ed9d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938360)));
    // 0x1ed9d4: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x1ed9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
    // 0x1ed9d8: 0x83838ef4  lb          $v1, -0x710C($gp)
    ctx->pc = 0x1ed9d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938356)));
    // 0x1ed9dc: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x1ed9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x1ed9e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ed9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ed9e4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1ed9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1ed9e8: 0x24a58680  addiu       $a1, $a1, -0x7980
    ctx->pc = 0x1ed9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936192));
    // 0x1ed9ec: 0x26b00186  addiu       $s0, $s5, 0x186
    ctx->pc = 0x1ed9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 390));
    // 0x1ed9f0: 0x269100ef  addiu       $s1, $s4, 0xEF
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 239));
    // 0x1ed9f4: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x1ed9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ed9f8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1ed9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ed9fc: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x1ed9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1eda00: 0x1010  mfhi        $v0
    ctx->pc = 0x1eda00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1eda04: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1eda04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1eda08: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1eda08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1eda0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eda10: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EDA10u;
    SET_GPR_U32(ctx, 31, 0x1EDA18u);
    ctx->pc = 0x1EDA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA10u;
            // 0x1eda14: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA18u; }
        if (ctx->pc != 0x1EDA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA18u; }
        if (ctx->pc != 0x1EDA18u) { return; }
    }
    ctx->pc = 0x1EDA18u;
label_1eda18:
    // 0x1eda18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1eda18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1eda1c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1EDA1Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA24u);
    ctx->pc = 0x1EDA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA1Cu;
            // 0x1eda20: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA24u; }
        if (ctx->pc != 0x1EDA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA24u; }
        if (ctx->pc != 0x1EDA24u) { return; }
    }
    ctx->pc = 0x1EDA24u;
label_1eda24:
    // 0x1eda24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eda24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1eda28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda2c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1EDA2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA34u);
    ctx->pc = 0x1EDA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA2Cu;
            // 0x1eda30: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA34u; }
        if (ctx->pc != 0x1EDA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA34u; }
        if (ctx->pc != 0x1EDA34u) { return; }
    }
    ctx->pc = 0x1EDA34u;
label_1eda34:
    // 0x1eda34: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x1eda34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x1eda38: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1eda3c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1eda3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eda40: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x1eda40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1eda44: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1eda44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eda48: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1EDA48u;
    SET_GPR_U32(ctx, 31, 0x1EDA50u);
    ctx->pc = 0x1EDA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA48u;
            // 0x1eda4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA50u; }
        if (ctx->pc != 0x1EDA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA50u; }
        if (ctx->pc != 0x1EDA50u) { return; }
    }
    ctx->pc = 0x1EDA50u;
label_1eda50:
    // 0x1eda50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1eda50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eda54: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1eda54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eda58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1eda58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eda5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eda5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eda60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eda60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eda64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eda64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eda68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eda68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eda6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eda6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eda70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eda70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eda74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eda74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda78: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA78u;
            // 0x1eda7c: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDA80u;
}
