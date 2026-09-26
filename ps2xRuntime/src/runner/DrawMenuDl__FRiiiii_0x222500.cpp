#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuDl__FRiiiii
// Address: 0x222500 - 0x2227e4
void DrawMenuDl__FRiiiii_0x222500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuDl__FRiiiii_0x222500");
#endif

    switch (ctx->pc) {
        case 0x222548u: goto label_222548;
        case 0x22255cu: goto label_22255c;
        case 0x222568u: goto label_222568;
        case 0x222574u: goto label_222574;
        case 0x222580u: goto label_222580;
        case 0x222598u: goto label_222598;
        case 0x2225b0u: goto label_2225b0;
        case 0x2225c8u: goto label_2225c8;
        case 0x2225e0u: goto label_2225e0;
        case 0x2225f0u: goto label_2225f0;
        case 0x2225f8u: goto label_2225f8;
        case 0x222604u: goto label_222604;
        case 0x222658u: goto label_222658;
        case 0x222690u: goto label_222690;
        case 0x2226acu: goto label_2226ac;
        case 0x2226c4u: goto label_2226c4;
        case 0x2226d4u: goto label_2226d4;
        case 0x2226dcu: goto label_2226dc;
        case 0x2226e8u: goto label_2226e8;
        case 0x2226f4u: goto label_2226f4;
        case 0x2226fcu: goto label_2226fc;
        case 0x222714u: goto label_222714;
        case 0x22273cu: goto label_22273c;
        case 0x222750u: goto label_222750;
        case 0x222768u: goto label_222768;
        case 0x222780u: goto label_222780;
        case 0x222794u: goto label_222794;
        case 0x2227b4u: goto label_2227b4;
        default: break;
    }

    ctx->pc = 0x222500u;

    // 0x222500: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x222500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x222504: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x222504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x222508: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x222508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x22250c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x22250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x222510: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x222510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x222514: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x222514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222518: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x222518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22251c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x222520: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x222520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x222524: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x222524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x222528: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22252c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22252cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222530: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x222530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x222534: 0x8f839394  lw          $v1, -0x6C6C($gp)
    ctx->pc = 0x222534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939540)));
    // 0x222538: 0x1060009e  beqz        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x222538u;
    {
        const bool branch_taken_0x222538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22253Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222538u;
            // 0x22253c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222538) {
            ctx->pc = 0x2227B4u;
            goto label_2227b4;
        }
    }
    ctx->pc = 0x222540u;
    // 0x222540: 0xc08878c  jal         func_221E30
    ctx->pc = 0x222540u;
    SET_GPR_U32(ctx, 31, 0x222548u);
    ctx->pc = 0x222544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222540u;
            // 0x222544: 0x84650000  lh          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222548u; }
        if (ctx->pc != 0x222548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222548u; }
        if (ctx->pc != 0x222548u) { return; }
    }
    ctx->pc = 0x222548u;
label_222548:
    // 0x222548: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x222548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x22254c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222550: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x222550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x222554: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x222554u;
    SET_GPR_U32(ctx, 31, 0x22255Cu);
    ctx->pc = 0x222558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222554u;
            // 0x222558: 0x2b843  sra         $s7, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22255Cu; }
        if (ctx->pc != 0x22255Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22255Cu; }
        if (ctx->pc != 0x22255Cu) { return; }
    }
    ctx->pc = 0x22255Cu;
label_22255c:
    // 0x22255c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222560: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x222560u;
    SET_GPR_U32(ctx, 31, 0x222568u);
    ctx->pc = 0x222564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222560u;
            // 0x222564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222568u; }
        if (ctx->pc != 0x222568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222568u; }
        if (ctx->pc != 0x222568u) { return; }
    }
    ctx->pc = 0x222568u;
label_222568:
    // 0x222568: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22256c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22256Cu;
    SET_GPR_U32(ctx, 31, 0x222574u);
    ctx->pc = 0x222570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22256Cu;
            // 0x222570: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222574u; }
        if (ctx->pc != 0x222574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222574u; }
        if (ctx->pc != 0x222574u) { return; }
    }
    ctx->pc = 0x222574u;
label_222574:
    // 0x222574: 0x8f859394  lw          $a1, -0x6C6C($gp)
    ctx->pc = 0x222574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939540)));
    // 0x222578: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x222578u;
    SET_GPR_U32(ctx, 31, 0x222580u);
    ctx->pc = 0x22257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222578u;
            // 0x22257c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222580u; }
        if (ctx->pc != 0x222580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222580u; }
        if (ctx->pc != 0x222580u) { return; }
    }
    ctx->pc = 0x222580u;
label_222580:
    // 0x222580: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x222580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x222584: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222588: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x222588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22258c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22258cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222590: 0xc04d320  jal         func_134C80
    ctx->pc = 0x222590u;
    SET_GPR_U32(ctx, 31, 0x222598u);
    ctx->pc = 0x222594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222590u;
            // 0x222594: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222598u; }
        if (ctx->pc != 0x222598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222598u; }
        if (ctx->pc != 0x222598u) { return; }
    }
    ctx->pc = 0x222598u;
label_222598:
    // 0x222598: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x222598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22259c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x22259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2225a0: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x2225a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2225a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2225a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2225A8u;
    SET_GPR_U32(ctx, 31, 0x2225B0u);
    ctx->pc = 0x2225ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2225A8u;
            // 0x2225ac: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225B0u; }
        if (ctx->pc != 0x2225B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225B0u; }
        if (ctx->pc != 0x2225B0u) { return; }
    }
    ctx->pc = 0x2225B0u;
label_2225b0:
    // 0x2225b0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2225b4: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2225b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2225b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2225b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2225bc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2225c0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2225C0u;
    SET_GPR_U32(ctx, 31, 0x2225C8u);
    ctx->pc = 0x2225C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2225C0u;
            // 0x2225c4: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225C8u; }
        if (ctx->pc != 0x2225C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225C8u; }
        if (ctx->pc != 0x2225C8u) { return; }
    }
    ctx->pc = 0x2225C8u;
label_2225c8:
    // 0x2225c8: 0x26e50004  addiu       $a1, $s7, 0x4
    ctx->pc = 0x2225c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x2225cc: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2225d0: 0x2607fff6  addiu       $a3, $s0, -0xA
    ctx->pc = 0x2225d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x2225d4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2225d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2225d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2225D8u;
    SET_GPR_U32(ctx, 31, 0x2225E0u);
    ctx->pc = 0x2225DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2225D8u;
            // 0x2225dc: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225E0u; }
        if (ctx->pc != 0x2225E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225E0u; }
        if (ctx->pc != 0x2225E0u) { return; }
    }
    ctx->pc = 0x2225E0u;
label_2225e0:
    // 0x2225e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2225e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2225e4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2225e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2225e8: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2225E8u;
    SET_GPR_U32(ctx, 31, 0x2225F0u);
    ctx->pc = 0x2225ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2225E8u;
            // 0x2225ec: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225F0u; }
        if (ctx->pc != 0x2225F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225F0u; }
        if (ctx->pc != 0x2225F0u) { return; }
    }
    ctx->pc = 0x2225F0u;
label_2225f0:
    // 0x2225f0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2225F0u;
    SET_GPR_U32(ctx, 31, 0x2225F8u);
    ctx->pc = 0x2225F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2225F0u;
            // 0x2225f4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225F8u; }
        if (ctx->pc != 0x2225F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225F8u; }
        if (ctx->pc != 0x2225F8u) { return; }
    }
    ctx->pc = 0x2225F8u;
label_2225f8:
    // 0x2225f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2225fc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2225FCu;
    SET_GPR_U32(ctx, 31, 0x222604u);
    ctx->pc = 0x222600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2225FCu;
            // 0x222600: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222604u; }
        if (ctx->pc != 0x222604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222604u; }
        if (ctx->pc != 0x222604u) { return; }
    }
    ctx->pc = 0x222604u;
label_222604:
    // 0x222604: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x222604u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222608: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x222608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x22260c: 0x84260414  lh          $a2, 0x414($at)
    ctx->pc = 0x22260cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1044)));
    // 0x222610: 0xc783939c  lwc1        $f3, -0x6C64($gp)
    ctx->pc = 0x222610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x222614: 0xc7829398  lwc1        $f2, -0x6C68($gp)
    ctx->pc = 0x222614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222618: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22261c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22261cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222620: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x222624: 0x24c6ffec  addiu       $a2, $a2, -0x14
    ctx->pc = 0x222624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x222628: 0x84230430  lh          $v1, 0x430($at)
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1072)));
    // 0x22262c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22262cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x222630: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x222630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x222634: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x222634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222638: 0x46001d03  div.s       $f20, $f3, $f0
    ctx->pc = 0x222638u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x22263c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22263cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222644: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x222644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x222648: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x222648u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x22264c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22264cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x222650: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222650u;
    SET_GPR_U32(ctx, 31, 0x222658u);
    ctx->pc = 0x222654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222650u;
            // 0x222654: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222658u; }
        if (ctx->pc != 0x222658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222658u; }
        if (ctx->pc != 0x222658u) { return; }
    }
    ctx->pc = 0x222658u;
label_222658:
    // 0x222658: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x222658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22265c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222664: 0x0  nop
    ctx->pc = 0x222664u;
    // NOP
    // 0x222668: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x222668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22266c: 0x0  nop
    ctx->pc = 0x22266cu;
    // NOP
    // 0x222670: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x222670u;
    {
        const bool branch_taken_0x222670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222670u;
            // 0x222674: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222670) {
            ctx->pc = 0x222698u;
            goto label_222698;
        }
    }
    ctx->pc = 0x222678u;
    // 0x222678: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x222678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22267c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222680: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x222680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222684: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x222684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222688: 0xc04d320  jal         func_134C80
    ctx->pc = 0x222688u;
    SET_GPR_U32(ctx, 31, 0x222690u);
    ctx->pc = 0x22268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222688u;
            // 0x22268c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222690u; }
        if (ctx->pc != 0x222690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222690u; }
        if (ctx->pc != 0x222690u) { return; }
    }
    ctx->pc = 0x222690u;
label_222690:
    // 0x222690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x222690u;
    {
        const bool branch_taken_0x222690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222690u;
            // 0x222694: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222690) {
            ctx->pc = 0x2226B0u;
            goto label_2226b0;
        }
    }
    ctx->pc = 0x222698u;
label_222698:
    // 0x222698: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22269c: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x22269cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2226a0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2226a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226a4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2226A4u;
    SET_GPR_U32(ctx, 31, 0x2226ACu);
    ctx->pc = 0x2226A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2226A4u;
            // 0x2226a8: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226ACu; }
        if (ctx->pc != 0x2226ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226ACu; }
        if (ctx->pc != 0x2226ACu) { return; }
    }
    ctx->pc = 0x2226ACu;
label_2226ac:
    // 0x2226ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2226acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2226b0:
    // 0x2226b0: 0x26e50017  addiu       $a1, $s7, 0x17
    ctx->pc = 0x2226b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 23));
    // 0x2226b4: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x2226b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x2226b8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2226b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2226bc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2226BCu;
    SET_GPR_U32(ctx, 31, 0x2226C4u);
    ctx->pc = 0x2226C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2226BCu;
            // 0x2226c0: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226C4u; }
        if (ctx->pc != 0x2226C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226C4u; }
        if (ctx->pc != 0x2226C4u) { return; }
    }
    ctx->pc = 0x2226C4u;
label_2226c4:
    // 0x2226c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2226c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2226c8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2226c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2226cc: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2226CCu;
    SET_GPR_U32(ctx, 31, 0x2226D4u);
    ctx->pc = 0x2226D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2226CCu;
            // 0x2226d0: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226D4u; }
        if (ctx->pc != 0x2226D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226D4u; }
        if (ctx->pc != 0x2226D4u) { return; }
    }
    ctx->pc = 0x2226D4u;
label_2226d4:
    // 0x2226d4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2226D4u;
    SET_GPR_U32(ctx, 31, 0x2226DCu);
    ctx->pc = 0x2226D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2226D4u;
            // 0x2226d8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226DCu; }
        if (ctx->pc != 0x2226DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226DCu; }
        if (ctx->pc != 0x2226DCu) { return; }
    }
    ctx->pc = 0x2226DCu;
label_2226dc:
    // 0x2226dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2226dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2226e0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2226E0u;
    SET_GPR_U32(ctx, 31, 0x2226E8u);
    ctx->pc = 0x2226E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2226E0u;
            // 0x2226e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226E8u; }
        if (ctx->pc != 0x2226E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226E8u; }
        if (ctx->pc != 0x2226E8u) { return; }
    }
    ctx->pc = 0x2226E8u;
label_2226e8:
    // 0x2226e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2226e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2226ec: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2226ECu;
    SET_GPR_U32(ctx, 31, 0x2226F4u);
    ctx->pc = 0x2226F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2226ECu;
            // 0x2226f0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226F4u; }
        if (ctx->pc != 0x2226F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226F4u; }
        if (ctx->pc != 0x2226F4u) { return; }
    }
    ctx->pc = 0x2226F4u;
label_2226f4:
    // 0x2226f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2226f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2226f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2226fc:
    // 0x2226fc: 0x164083  sra         $t0, $s6, 2
    ctx->pc = 0x2226fcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 22), 2));
    // 0x222700: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22270c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22270Cu;
    SET_GPR_U32(ctx, 31, 0x222714u);
    ctx->pc = 0x222710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22270Cu;
            // 0x222710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222714u; }
        if (ctx->pc != 0x222714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222714u; }
        if (ctx->pc != 0x222714u) { return; }
    }
    ctx->pc = 0x222714u;
label_222714:
    // 0x222714: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x222714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x222718: 0x26e50004  addiu       $a1, $s7, 0x4
    ctx->pc = 0x222718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x22271c: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x22271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
    // 0x222720: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x222720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x222724: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x222724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x222728: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x222728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x22272c: 0x86880006  lh          $t0, 0x6($s4)
    ctx->pc = 0x22272cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x222730: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x222730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222734: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x222734u;
    SET_GPR_U32(ctx, 31, 0x22273Cu);
    ctx->pc = 0x222738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222734u;
            // 0x222738: 0x26950006  addiu       $s5, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22273Cu; }
        if (ctx->pc != 0x22273Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22273Cu; }
        if (ctx->pc != 0x22273Cu) { return; }
    }
    ctx->pc = 0x22273Cu;
label_22273c:
    // 0x22273c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22273cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222740: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x222740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x222744: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x222744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222748: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x222748u;
    SET_GPR_U32(ctx, 31, 0x222750u);
    ctx->pc = 0x22274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222748u;
            // 0x22274c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222750u; }
        if (ctx->pc != 0x222750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222750u; }
        if (ctx->pc != 0x222750u) { return; }
    }
    ctx->pc = 0x222750u;
label_222750:
    // 0x222750: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x222750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x222754: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222758: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x222758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22275c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22275cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222760: 0xc04d320  jal         func_134C80
    ctx->pc = 0x222760u;
    SET_GPR_U32(ctx, 31, 0x222768u);
    ctx->pc = 0x222764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222760u;
            // 0x222764: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222768u; }
        if (ctx->pc != 0x222768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222768u; }
        if (ctx->pc != 0x222768u) { return; }
    }
    ctx->pc = 0x222768u;
label_222768:
    // 0x222768: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22276c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x22276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x222770: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x222770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222774: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x222774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222778: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x222778u;
    SET_GPR_U32(ctx, 31, 0x222780u);
    ctx->pc = 0x22277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222778u;
            // 0x22277c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222780u; }
        if (ctx->pc != 0x222780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222780u; }
        if (ctx->pc != 0x222780u) { return; }
    }
    ctx->pc = 0x222780u;
label_222780:
    // 0x222780: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x222780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222784: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x222784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x222788: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x222788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x22278c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x22278Cu;
    SET_GPR_U32(ctx, 31, 0x222794u);
    ctx->pc = 0x222790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22278Cu;
            // 0x222790: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222794u; }
        if (ctx->pc != 0x222794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222794u; }
        if (ctx->pc != 0x222794u) { return; }
    }
    ctx->pc = 0x222794u;
label_222794:
    // 0x222794: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x222794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x222798: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x222798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22279c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x22279cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2227a0: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2227a4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2227A4u;
    {
        const bool branch_taken_0x2227a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2227A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2227A4u;
            // 0x2227a8: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227a4) {
            ctx->pc = 0x2226FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2226fc;
        }
    }
    ctx->pc = 0x2227ACu;
    // 0x2227ac: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2227ACu;
    SET_GPR_U32(ctx, 31, 0x2227B4u);
    ctx->pc = 0x2227B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2227ACu;
            // 0x2227b0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2227B4u; }
        if (ctx->pc != 0x2227B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2227B4u; }
        if (ctx->pc != 0x2227B4u) { return; }
    }
    ctx->pc = 0x2227B4u;
label_2227b4:
    // 0x2227b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2227b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2227b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2227b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2227bc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2227bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2227c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2227c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2227c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2227c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2227c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2227c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2227cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2227ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2227d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2227d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2227d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2227d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2227d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2227d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2227dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2227DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2227E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2227DCu;
            // 0x2227e0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2227E4u;
}
