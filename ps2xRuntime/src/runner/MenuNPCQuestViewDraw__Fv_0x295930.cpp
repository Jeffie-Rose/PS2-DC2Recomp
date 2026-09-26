#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuNPCQuestViewDraw__Fv
// Address: 0x295930 - 0x2967b0
void MenuNPCQuestViewDraw__Fv_0x295930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuNPCQuestViewDraw__Fv_0x295930");
#endif

    switch (ctx->pc) {
        case 0x295984u: goto label_295984;
        case 0x29598cu: goto label_29598c;
        case 0x29599cu: goto label_29599c;
        case 0x2959b4u: goto label_2959b4;
        case 0x2959d4u: goto label_2959d4;
        case 0x2959e0u: goto label_2959e0;
        case 0x2959ecu: goto label_2959ec;
        case 0x2959f8u: goto label_2959f8;
        case 0x295a10u: goto label_295a10;
        case 0x295a28u: goto label_295a28;
        case 0x295a40u: goto label_295a40;
        case 0x295a5cu: goto label_295a5c;
        case 0x295a74u: goto label_295a74;
        case 0x295a90u: goto label_295a90;
        case 0x295a98u: goto label_295a98;
        case 0x295ab4u: goto label_295ab4;
        case 0x295abcu: goto label_295abc;
        case 0x295ac4u: goto label_295ac4;
        case 0x295accu: goto label_295acc;
        case 0x295aecu: goto label_295aec;
        case 0x295b04u: goto label_295b04;
        case 0x295b20u: goto label_295b20;
        case 0x295b2cu: goto label_295b2c;
        case 0x295b44u: goto label_295b44;
        case 0x295b64u: goto label_295b64;
        case 0x295b70u: goto label_295b70;
        case 0x295b80u: goto label_295b80;
        case 0x295b98u: goto label_295b98;
        case 0x295bd4u: goto label_295bd4;
        case 0x295bf4u: goto label_295bf4;
        case 0x295c1cu: goto label_295c1c;
        case 0x295c38u: goto label_295c38;
        case 0x295c40u: goto label_295c40;
        case 0x295c58u: goto label_295c58;
        case 0x295c64u: goto label_295c64;
        case 0x295c78u: goto label_295c78;
        case 0x295c8cu: goto label_295c8c;
        case 0x295ca0u: goto label_295ca0;
        case 0x295cb8u: goto label_295cb8;
        case 0x295ce0u: goto label_295ce0;
        case 0x295d08u: goto label_295d08;
        case 0x295d24u: goto label_295d24;
        case 0x295d30u: goto label_295d30;
        case 0x295d48u: goto label_295d48;
        case 0x295d68u: goto label_295d68;
        case 0x295d70u: goto label_295d70;
        case 0x295d84u: goto label_295d84;
        case 0x295d9cu: goto label_295d9c;
        case 0x295db0u: goto label_295db0;
        case 0x295decu: goto label_295dec;
        case 0x295e0cu: goto label_295e0c;
        case 0x295e2cu: goto label_295e2c;
        case 0x295e44u: goto label_295e44;
        case 0x295e70u: goto label_295e70;
        case 0x295e8cu: goto label_295e8c;
        case 0x295ec8u: goto label_295ec8;
        case 0x295ee8u: goto label_295ee8;
        case 0x295ef0u: goto label_295ef0;
        case 0x295f08u: goto label_295f08;
        case 0x295f14u: goto label_295f14;
        case 0x295f2cu: goto label_295f2c;
        case 0x295f38u: goto label_295f38;
        case 0x295f4cu: goto label_295f4c;
        case 0x295f60u: goto label_295f60;
        case 0x295f78u: goto label_295f78;
        case 0x295f9cu: goto label_295f9c;
        case 0x295facu: goto label_295fac;
        case 0x295fc4u: goto label_295fc4;
        case 0x295fe0u: goto label_295fe0;
        case 0x295ff4u: goto label_295ff4;
        case 0x296000u: goto label_296000;
        case 0x29600cu: goto label_29600c;
        case 0x296024u: goto label_296024;
        case 0x29603cu: goto label_29603c;
        case 0x296058u: goto label_296058;
        case 0x296060u: goto label_296060;
        case 0x296078u: goto label_296078;
        case 0x296090u: goto label_296090;
        case 0x2960a0u: goto label_2960a0;
        case 0x2960b4u: goto label_2960b4;
        case 0x2960e4u: goto label_2960e4;
        case 0x2960f4u: goto label_2960f4;
        case 0x296120u: goto label_296120;
        case 0x296130u: goto label_296130;
        case 0x296138u: goto label_296138;
        case 0x29614cu: goto label_29614c;
        case 0x296174u: goto label_296174;
        case 0x296188u: goto label_296188;
        case 0x2961a4u: goto label_2961a4;
        case 0x2961b8u: goto label_2961b8;
        case 0x2962a0u: goto label_2962a0;
        case 0x2962acu: goto label_2962ac;
        case 0x2962b8u: goto label_2962b8;
        case 0x2962c4u: goto label_2962c4;
        case 0x2962dcu: goto label_2962dc;
        case 0x2962e8u: goto label_2962e8;
        case 0x296308u: goto label_296308;
        case 0x296324u: goto label_296324;
        case 0x296348u: goto label_296348;
        case 0x29635cu: goto label_29635c;
        case 0x29638cu: goto label_29638c;
        case 0x296394u: goto label_296394;
        case 0x2963b0u: goto label_2963b0;
        case 0x2963c8u: goto label_2963c8;
        case 0x2963ecu: goto label_2963ec;
        case 0x2963f4u: goto label_2963f4;
        case 0x296408u: goto label_296408;
        case 0x296410u: goto label_296410;
        case 0x29643cu: goto label_29643c;
        case 0x29645cu: goto label_29645c;
        case 0x296464u: goto label_296464;
        case 0x29646cu: goto label_29646c;
        case 0x296480u: goto label_296480;
        case 0x296498u: goto label_296498;
        case 0x2964c4u: goto label_2964c4;
        case 0x2964d8u: goto label_2964d8;
        case 0x2964ecu: goto label_2964ec;
        case 0x296504u: goto label_296504;
        case 0x296514u: goto label_296514;
        case 0x296520u: goto label_296520;
        case 0x296524u: goto label_296524;
        case 0x296568u: goto label_296568;
        case 0x2965dcu: goto label_2965dc;
        case 0x2965ecu: goto label_2965ec;
        case 0x296600u: goto label_296600;
        case 0x296618u: goto label_296618;
        case 0x296640u: goto label_296640;
        case 0x296648u: goto label_296648;
        case 0x296660u: goto label_296660;
        case 0x296670u: goto label_296670;
        case 0x2966dcu: goto label_2966dc;
        case 0x2966e8u: goto label_2966e8;
        case 0x296734u: goto label_296734;
        case 0x296744u: goto label_296744;
        case 0x296758u: goto label_296758;
        default: break;
    }

    ctx->pc = 0x295930u;

    // 0x295930: 0x27bdf070  addiu       $sp, $sp, -0xF90
    ctx->pc = 0x295930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963312));
    // 0x295934: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x295934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x295938: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x295938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29593c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x295940: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x295940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x295944: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x295944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x295948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x295948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29594c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x295950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x295954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29595c: 0x8f83989c  lw          $v1, -0x6764($gp)
    ctx->pc = 0x29595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x295960: 0x10600387  beqz        $v1, . + 4 + (0x387 << 2)
    ctx->pc = 0x295960u;
    {
        const bool branch_taken_0x295960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295960) {
            ctx->pc = 0x296780u;
            goto label_296780;
        }
    }
    ctx->pc = 0x295968u;
    // 0x295968: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x295968u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29596c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x29596cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x295970: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x295970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x295974: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x295974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x295978: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x295978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29597c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x29597Cu;
    SET_GPR_U32(ctx, 31, 0x295984u);
    ctx->pc = 0x295980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29597Cu;
            // 0x295980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295984u; }
        if (ctx->pc != 0x295984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295984u; }
        if (ctx->pc != 0x295984u) { return; }
    }
    ctx->pc = 0x295984u;
label_295984:
    // 0x295984: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x295984u;
    SET_GPR_U32(ctx, 31, 0x29598Cu);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29598Cu; }
        if (ctx->pc != 0x29598Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29598Cu; }
        if (ctx->pc != 0x29598Cu) { return; }
    }
    ctx->pc = 0x29598Cu;
label_29598c:
    // 0x29598c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295994: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x295994u;
    SET_GPR_U32(ctx, 31, 0x29599Cu);
    ctx->pc = 0x295998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295994u;
            // 0x295998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29599Cu; }
        if (ctx->pc != 0x29599Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29599Cu; }
        if (ctx->pc != 0x29599Cu) { return; }
    }
    ctx->pc = 0x29599Cu;
label_29599c:
    // 0x29599c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x29599cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2959a0: 0x27a40ea0  addiu       $a0, $sp, 0xEA0
    ctx->pc = 0x2959a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3744));
    // 0x2959a4: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2959a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2959a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2959a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2959ACu;
    SET_GPR_U32(ctx, 31, 0x2959B4u);
    ctx->pc = 0x2959B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2959ACu;
            // 0x2959b0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959B4u; }
        if (ctx->pc != 0x2959B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959B4u; }
        if (ctx->pc != 0x2959B4u) { return; }
    }
    ctx->pc = 0x2959B4u;
label_2959b4:
    // 0x2959b4: 0xc78c98a8  lwc1        $f12, -0x6758($gp)
    ctx->pc = 0x2959b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2959b8: 0x8f85989c  lw          $a1, -0x6764($gp)
    ctx->pc = 0x2959b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x2959bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2959bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959c0: 0x27a60ea0  addiu       $a2, $sp, 0xEA0
    ctx->pc = 0x2959c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3744));
    // 0x2959c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2959c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2959c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959cc: 0xc088f58  jal         func_223D60
    ctx->pc = 0x2959CCu;
    SET_GPR_U32(ctx, 31, 0x2959D4u);
    ctx->pc = 0x2959D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2959CCu;
            // 0x2959d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D60u;
    if (runtime->hasFunction(0x223D60u)) {
        auto targetFn = runtime->lookupFunction(0x223D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959D4u; }
        if (ctx->pc != 0x2959D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959D4u; }
        if (ctx->pc != 0x2959D4u) { return; }
    }
    ctx->pc = 0x2959D4u;
label_2959d4:
    // 0x2959d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2959d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959d8: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2959D8u;
    SET_GPR_U32(ctx, 31, 0x2959E0u);
    ctx->pc = 0x2959DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2959D8u;
            // 0x2959dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959E0u; }
        if (ctx->pc != 0x2959E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959E0u; }
        if (ctx->pc != 0x2959E0u) { return; }
    }
    ctx->pc = 0x2959E0u;
label_2959e0:
    // 0x2959e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2959e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959e4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2959E4u;
    SET_GPR_U32(ctx, 31, 0x2959ECu);
    ctx->pc = 0x2959E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2959E4u;
            // 0x2959e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959ECu; }
        if (ctx->pc != 0x2959ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959ECu; }
        if (ctx->pc != 0x2959ECu) { return; }
    }
    ctx->pc = 0x2959ECu;
label_2959ec:
    // 0x2959ec: 0x8f85989c  lw          $a1, -0x6764($gp)
    ctx->pc = 0x2959ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x2959f0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2959F0u;
    SET_GPR_U32(ctx, 31, 0x2959F8u);
    ctx->pc = 0x2959F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2959F0u;
            // 0x2959f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959F8u; }
        if (ctx->pc != 0x2959F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959F8u; }
        if (ctx->pc != 0x2959F8u) { return; }
    }
    ctx->pc = 0x2959F8u;
label_2959f8:
    // 0x2959f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2959f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2959fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2959fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a00: 0x240600ba  addiu       $a2, $zero, 0xBA
    ctx->pc = 0x295a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x295a04: 0x24070184  addiu       $a3, $zero, 0x184
    ctx->pc = 0x295a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x295a08: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x295A08u;
    SET_GPR_U32(ctx, 31, 0x295A10u);
    ctx->pc = 0x295A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A08u;
            // 0x295a0c: 0x24080146  addiu       $t0, $zero, 0x146 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A10u; }
        if (ctx->pc != 0x295A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A10u; }
        if (ctx->pc != 0x295A10u) { return; }
    }
    ctx->pc = 0x295A10u;
label_295a10:
    // 0x295a10: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x295a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x295a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a18: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x295a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x295a1c: 0x24070138  addiu       $a3, $zero, 0x138
    ctx->pc = 0x295a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x295a20: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x295A20u;
    SET_GPR_U32(ctx, 31, 0x295A28u);
    ctx->pc = 0x295A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A20u;
            // 0x295a24: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A28u; }
        if (ctx->pc != 0x295A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A28u; }
        if (ctx->pc != 0x295A28u) { return; }
    }
    ctx->pc = 0x295A28u;
label_295a28:
    // 0x295a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x295a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a38: 0xc04d320  jal         func_134C80
    ctx->pc = 0x295A38u;
    SET_GPR_U32(ctx, 31, 0x295A40u);
    ctx->pc = 0x295A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A38u;
            // 0x295a3c: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A40u; }
        if (ctx->pc != 0x295A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A40u; }
        if (ctx->pc != 0x295A40u) { return; }
    }
    ctx->pc = 0x295A40u;
label_295a40:
    // 0x295a40: 0x3c034284  lui         $v1, 0x4284
    ctx->pc = 0x295a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17028 << 16));
    // 0x295a44: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x295a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x295a48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x295a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x295a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x295a54: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295A54u;
    SET_GPR_U32(ctx, 31, 0x295A5Cu);
    ctx->pc = 0x295A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A54u;
            // 0x295a58: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A5Cu; }
        if (ctx->pc != 0x295A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A5Cu; }
        if (ctx->pc != 0x295A5Cu) { return; }
    }
    ctx->pc = 0x295A5Cu;
label_295a5c:
    // 0x295a5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x295a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x295a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x295a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a68: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x295a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a6c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x295A6Cu;
    SET_GPR_U32(ctx, 31, 0x295A74u);
    ctx->pc = 0x295A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A6Cu;
            // 0x295a70: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A74u; }
        if (ctx->pc != 0x295A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A74u; }
        if (ctx->pc != 0x295A74u) { return; }
    }
    ctx->pc = 0x295A74u;
label_295a74:
    // 0x295a74: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x295a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x295a78: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x295a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x295a7c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x295a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x295a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x295a88: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295A88u;
    SET_GPR_U32(ctx, 31, 0x295A90u);
    ctx->pc = 0x295A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A88u;
            // 0x295a8c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A90u; }
        if (ctx->pc != 0x295A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A90u; }
        if (ctx->pc != 0x295A90u) { return; }
    }
    ctx->pc = 0x295A90u;
label_295a90:
    // 0x295a90: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x295A90u;
    SET_GPR_U32(ctx, 31, 0x295A98u);
    ctx->pc = 0x295A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A90u;
            // 0x295a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A98u; }
        if (ctx->pc != 0x295A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A98u; }
        if (ctx->pc != 0x295A98u) { return; }
    }
    ctx->pc = 0x295A98u;
label_295a98:
    // 0x295a98: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x295a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x295a9c: 0x27a40eb0  addiu       $a0, $sp, 0xEB0
    ctx->pc = 0x295a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3760));
    // 0x295aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295aa4: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x295aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x295aa8: 0x24080142  addiu       $t0, $zero, 0x142
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x295aac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x295AACu;
    SET_GPR_U32(ctx, 31, 0x295AB4u);
    ctx->pc = 0x295AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295AACu;
            // 0x295ab0: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AB4u; }
        if (ctx->pc != 0x295AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AB4u; }
        if (ctx->pc != 0x295AB4u) { return; }
    }
    ctx->pc = 0x295AB4u;
label_295ab4:
    // 0x295ab4: 0xc088050  jal         func_220140
    ctx->pc = 0x295AB4u;
    SET_GPR_U32(ctx, 31, 0x295ABCu);
    ctx->pc = 0x295AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295AB4u;
            // 0x295ab8: 0x27a40eb0  addiu       $a0, $sp, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295ABCu; }
        if (ctx->pc != 0x295ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295ABCu; }
        if (ctx->pc != 0x295ABCu) { return; }
    }
    ctx->pc = 0x295ABCu;
label_295abc:
    // 0x295abc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x295abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ac0: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x295ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_295ac4:
    // 0x295ac4: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x295AC4u;
    SET_GPR_U32(ctx, 31, 0x295ACCu);
    ctx->pc = 0x295AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295AC4u;
            // 0x295ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295ACCu; }
        if (ctx->pc != 0x295ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295ACCu; }
        if (ctx->pc != 0x295ACCu) { return; }
    }
    ctx->pc = 0x295ACCu;
label_295acc:
    // 0x295acc: 0x263100b0  addiu       $s1, $s1, 0xB0
    ctx->pc = 0x295accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x295ad0: 0x27a20be0  addiu       $v0, $sp, 0xBE0
    ctx->pc = 0x295ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x295ad4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x295ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x295ad8: 0x0  nop
    ctx->pc = 0x295ad8u;
    // NOP
    // 0x295adc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x295ADCu;
    {
        const bool branch_taken_0x295adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295adc) {
            ctx->pc = 0x295AC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295ac4;
        }
    }
    ctx->pc = 0x295AE4u;
    // 0x295ae4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x295AE4u;
    SET_GPR_U32(ctx, 31, 0x295AECu);
    ctx->pc = 0x295AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295AE4u;
            // 0x295ae8: 0xc78c98b8  lwc1        $f12, -0x6748($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AECu; }
        if (ctx->pc != 0x295AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AECu; }
        if (ctx->pc != 0x295AECu) { return; }
    }
    ctx->pc = 0x295AECu;
label_295aec:
    // 0x295aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x295aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295af0: 0x838298dc  lb          $v0, -0x6724($gp)
    ctx->pc = 0x295af0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x295af4: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x295AF4u;
    {
        const bool branch_taken_0x295af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295AF4u;
            // 0x295af8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295af4) {
            ctx->pc = 0x295CC8u;
            goto label_295cc8;
        }
    }
    ctx->pc = 0x295AFCu;
    // 0x295afc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x295AFCu;
    {
        const bool branch_taken_0x295afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295AFCu;
            // 0x295b00: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295afc) {
            ctx->pc = 0x295CB0u;
            goto label_295cb0;
        }
    }
    ctx->pc = 0x295B04u;
label_295b04:
    // 0x295b04: 0x28420052  slti        $v0, $v0, 0x52
    ctx->pc = 0x295b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)82) ? 1 : 0);
    // 0x295b08: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x295B08u;
    {
        const bool branch_taken_0x295b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B08u;
            // 0x295b0c: 0x2a210143  slti        $at, $s1, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)323) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b08) {
            ctx->pc = 0x295CA8u;
            goto label_295ca8;
        }
    }
    ctx->pc = 0x295B10u;
    // 0x295b10: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x295B10u;
    {
        const bool branch_taken_0x295b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B10u;
            // 0x295b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b10) {
            ctx->pc = 0x295CC8u;
            goto label_295cc8;
        }
    }
    ctx->pc = 0x295B18u;
    // 0x295b18: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x295B18u;
    SET_GPR_U32(ctx, 31, 0x295B20u);
    ctx->pc = 0x295B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295B18u;
            // 0x295b1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B20u; }
        if (ctx->pc != 0x295B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B20u; }
        if (ctx->pc != 0x295B20u) { return; }
    }
    ctx->pc = 0x295B20u;
label_295b20:
    // 0x295b20: 0x8f85989c  lw          $a1, -0x6764($gp)
    ctx->pc = 0x295b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x295b24: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x295B24u;
    SET_GPR_U32(ctx, 31, 0x295B2Cu);
    ctx->pc = 0x295B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295B24u;
            // 0x295b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B2Cu; }
        if (ctx->pc != 0x295B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B2Cu; }
        if (ctx->pc != 0x295B2Cu) { return; }
    }
    ctx->pc = 0x295B2Cu;
label_295b2c:
    // 0x295b2c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x295b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x295b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x295b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b38: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x295b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b3c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x295B3Cu;
    SET_GPR_U32(ctx, 31, 0x295B44u);
    ctx->pc = 0x295B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295B3Cu;
            // 0x295b40: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B44u; }
        if (ctx->pc != 0x295B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B44u; }
        if (ctx->pc != 0x295B44u) { return; }
    }
    ctx->pc = 0x295B44u;
label_295b44:
    // 0x295b44: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x295b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x295b48: 0x3c0242ec  lui         $v0, 0x42EC
    ctx->pc = 0x295b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17132 << 16));
    // 0x295b4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x295b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295b58: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x295b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x295b5c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295B5Cu;
    SET_GPR_U32(ctx, 31, 0x295B64u);
    ctx->pc = 0x295B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295B5Cu;
            // 0x295b60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B64u; }
        if (ctx->pc != 0x295B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B64u; }
        if (ctx->pc != 0x295B64u) { return; }
    }
    ctx->pc = 0x295B64u;
label_295b64:
    // 0x295b64: 0x8f849894  lw          $a0, -0x676C($gp)
    ctx->pc = 0x295b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940820)));
    // 0x295b68: 0xc0c6a00  jal         func_31A800
    ctx->pc = 0x295B68u;
    SET_GPR_U32(ctx, 31, 0x295B70u);
    ctx->pc = 0x295B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295B68u;
            // 0x295b6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A800u;
    if (runtime->hasFunction(0x31A800u)) {
        auto targetFn = runtime->lookupFunction(0x31A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B70u; }
        if (ctx->pc != 0x295B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetQuestInfo__13CQuestManagerFi_0x31a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B70u; }
        if (ctx->pc != 0x295B70u) { return; }
    }
    ctx->pc = 0x295B70u;
label_295b70:
    // 0x295b70: 0x8f849898  lw          $a0, -0x6768($gp)
    ctx->pc = 0x295b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940824)));
    // 0x295b74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x295b74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b78: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x295B78u;
    SET_GPR_U32(ctx, 31, 0x295B80u);
    ctx->pc = 0x295B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295B78u;
            // 0x295b7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AAB0u;
    if (runtime->hasFunction(0x31AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x31AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B80u; }
        if (ctx->pc != 0x295B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayQuestData__10CQuestDataFi_0x31aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B80u; }
        if (ctx->pc != 0x295B80u) { return; }
    }
    ctx->pc = 0x295B80u;
label_295b80:
    // 0x295b80: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x295B80u;
    {
        const bool branch_taken_0x295b80 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B80u;
            // 0x295b84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b80) {
            ctx->pc = 0x295B90u;
            goto label_295b90;
        }
    }
    ctx->pc = 0x295B88u;
    // 0x295b88: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x295B88u;
    {
        const bool branch_taken_0x295b88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x295b88) {
            ctx->pc = 0x295BA0u;
            goto label_295ba0;
        }
    }
    ctx->pc = 0x295B90u;
label_295b90:
    // 0x295b90: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x295B90u;
    SET_GPR_U32(ctx, 31, 0x295B98u);
    ctx->pc = 0x295B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295B90u;
            // 0x295b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B98u; }
        if (ctx->pc != 0x295B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B98u; }
        if (ctx->pc != 0x295B98u) { return; }
    }
    ctx->pc = 0x295B98u;
label_295b98:
    // 0x295b98: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x295B98u;
    {
        const bool branch_taken_0x295b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295b98) {
            ctx->pc = 0x295CC8u;
            goto label_295cc8;
        }
    }
    ctx->pc = 0x295BA0u;
label_295ba0:
    // 0x295ba0: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x295ba0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ba8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295BA8u;
    {
        const bool branch_taken_0x295ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x295BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BA8u;
            // 0x295bac: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ba8) {
            ctx->pc = 0x295BC0u;
            goto label_295bc0;
        }
    }
    ctx->pc = 0x295BB0u;
    // 0x295bb0: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x295bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x295bb4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x295BB4u;
    {
        const bool branch_taken_0x295bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295bb4) {
            ctx->pc = 0x295BC0u;
            goto label_295bc0;
        }
    }
    ctx->pc = 0x295BBCu;
    // 0x295bbc: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x295bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_295bc0:
    // 0x295bc0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x295bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x295bc4: 0x27a40ec0  addiu       $a0, $sp, 0xEC0
    ctx->pc = 0x295bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3776));
    // 0x295bc8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x295bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295bcc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x295BCCu;
    SET_GPR_U32(ctx, 31, 0x295BD4u);
    ctx->pc = 0x295BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295BCCu;
            // 0x295bd0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295BD4u; }
        if (ctx->pc != 0x295BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295BD4u; }
        if (ctx->pc != 0x295BD4u) { return; }
    }
    ctx->pc = 0x295BD4u;
label_295bd4:
    // 0x295bd4: 0x2623000b  addiu       $v1, $s1, 0xB
    ctx->pc = 0x295bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x295bd8: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x295bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x295bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295be4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x295be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295be8: 0x27a50ec0  addiu       $a1, $sp, 0xEC0
    ctx->pc = 0x295be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3776));
    // 0x295bec: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295BECu;
    SET_GPR_U32(ctx, 31, 0x295BF4u);
    ctx->pc = 0x295BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295BECu;
            // 0x295bf0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295BF4u; }
        if (ctx->pc != 0x295BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295BF4u; }
        if (ctx->pc != 0x295BF4u) { return; }
    }
    ctx->pc = 0x295BF4u;
label_295bf4:
    // 0x295bf4: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x295bf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x295bf8: 0x26340005  addiu       $s4, $s1, 0x5
    ctx->pc = 0x295bf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x295bfc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x295BFCu;
    {
        const bool branch_taken_0x295bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BFCu;
            // 0x295c00: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bfc) {
            ctx->pc = 0x295C08u;
            goto label_295c08;
        }
    }
    ctx->pc = 0x295C04u;
    // 0x295c04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295c08:
    // 0x295c08: 0x27a40ed0  addiu       $a0, $sp, 0xED0
    ctx->pc = 0x295c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3792));
    // 0x295c0c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x295c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x295c10: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x295c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x295c14: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x295C14u;
    SET_GPR_U32(ctx, 31, 0x295C1Cu);
    ctx->pc = 0x295C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295C14u;
            // 0x295c18: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C1Cu; }
        if (ctx->pc != 0x295C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C1Cu; }
        if (ctx->pc != 0x295C1Cu) { return; }
    }
    ctx->pc = 0x295C1Cu;
label_295c1c:
    // 0x295c1c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x295c1cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295c20: 0x3c0243bc  lui         $v0, 0x43BC
    ctx->pc = 0x295c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17340 << 16));
    // 0x295c24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x295c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c2c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x295c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x295c30: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295C30u;
    SET_GPR_U32(ctx, 31, 0x295C38u);
    ctx->pc = 0x295C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295C30u;
            // 0x295c34: 0x27a50ed0  addiu       $a1, $sp, 0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C38u; }
        if (ctx->pc != 0x295C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C38u; }
        if (ctx->pc != 0x295C38u) { return; }
    }
    ctx->pc = 0x295C38u;
label_295c38:
    // 0x295c38: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x295C38u;
    SET_GPR_U32(ctx, 31, 0x295C40u);
    ctx->pc = 0x295C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295C38u;
            // 0x295c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C40u; }
        if (ctx->pc != 0x295C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C40u; }
        if (ctx->pc != 0x295C40u) { return; }
    }
    ctx->pc = 0x295C40u;
label_295c40:
    // 0x295c40: 0x2bd1821  addu        $v1, $s5, $sp
    ctx->pc = 0x295c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x295c44: 0x3c028013  lui         $v0, 0x8013
    ctx->pc = 0x295c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32787 << 16));
    // 0x295c48: 0x247400e0  addiu       $s4, $v1, 0xE0
    ctx->pc = 0x295c48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x295c4c: 0x34452333  ori         $a1, $v0, 0x2333
    ctx->pc = 0x295c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9011);
    // 0x295c50: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x295C50u;
    SET_GPR_U32(ctx, 31, 0x295C58u);
    ctx->pc = 0x295C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295C50u;
            // 0x295c54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C58u; }
        if (ctx->pc != 0x295C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C58u; }
        if (ctx->pc != 0x295C58u) { return; }
    }
    ctx->pc = 0x295C58u;
label_295c58:
    // 0x295c58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c5c: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x295C5Cu;
    SET_GPR_U32(ctx, 31, 0x295C64u);
    ctx->pc = 0x295C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295C5Cu;
            // 0x295c60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C64u; }
        if (ctx->pc != 0x295C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C64u; }
        if (ctx->pc != 0x295C64u) { return; }
    }
    ctx->pc = 0x295C64u;
label_295c64:
    // 0x295c64: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x295c64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295C68u;
    {
        const bool branch_taken_0x295c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295C68u;
            // 0x295c6c: 0x26e50004  addiu       $a1, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c68) {
            ctx->pc = 0x295C80u;
            goto label_295c80;
        }
    }
    ctx->pc = 0x295C70u;
    // 0x295c70: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x295C70u;
    SET_GPR_U32(ctx, 31, 0x295C78u);
    ctx->pc = 0x295C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295C70u;
            // 0x295c74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C78u; }
        if (ctx->pc != 0x295C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C78u; }
        if (ctx->pc != 0x295C78u) { return; }
    }
    ctx->pc = 0x295C78u;
label_295c78:
    // 0x295c78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295C78u;
    {
        const bool branch_taken_0x295c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c78) {
            ctx->pc = 0x295C8Cu;
            goto label_295c8c;
        }
    }
    ctx->pc = 0x295C80u;
label_295c80:
    // 0x295c80: 0x8f8582a4  lw          $a1, -0x7D5C($gp)
    ctx->pc = 0x295c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x295c84: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x295C84u;
    SET_GPR_U32(ctx, 31, 0x295C8Cu);
    ctx->pc = 0x295C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295C84u;
            // 0x295c88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C8Cu; }
        if (ctx->pc != 0x295C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295C8Cu; }
        if (ctx->pc != 0x295C8Cu) { return; }
    }
    ctx->pc = 0x295C8Cu;
label_295c8c:
    // 0x295c8c: 0x0  nop
    ctx->pc = 0x295c8cu;
    // NOP
    // 0x295c90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c94: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x295c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x295c98: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x295C98u;
    SET_GPR_U32(ctx, 31, 0x295CA0u);
    ctx->pc = 0x295C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295C98u;
            // 0x295c9c: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CA0u; }
        if (ctx->pc != 0x295CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CA0u; }
        if (ctx->pc != 0x295CA0u) { return; }
    }
    ctx->pc = 0x295CA0u;
label_295ca0:
    // 0x295ca0: 0x26b500b0  addiu       $s5, $s5, 0xB0
    ctx->pc = 0x295ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
    // 0x295ca4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x295ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_295ca8:
    // 0x295ca8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x295ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x295cac: 0x26310022  addiu       $s1, $s1, 0x22
    ctx->pc = 0x295cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
label_295cb0:
    // 0x295cb0: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x295CB0u;
    SET_GPR_U32(ctx, 31, 0x295CB8u);
    ctx->pc = 0x295CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295CB0u;
            // 0x295cb4: 0x8f8498e0  lw          $a0, -0x6720($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294D40u;
    if (runtime->hasFunction(0x294D40u)) {
        auto targetFn = runtime->lookupFunction(0x294D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CB8u; }
        if (ctx->pc != 0x295CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMax__14CMenuQuestViewFv_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CB8u; }
        if (ctx->pc != 0x295CB8u) { return; }
    }
    ctx->pc = 0x295CB8u;
label_295cb8:
    // 0x295cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x295cbc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x295cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295cc0: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x295CC0u;
    {
        const bool branch_taken_0x295cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295CC0u;
            // 0x295cc4: 0x26220022  addiu       $v0, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cc0) {
            ctx->pc = 0x295B04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295b04;
        }
    }
    ctx->pc = 0x295CC8u;
label_295cc8:
    // 0x295cc8: 0x838398dc  lb          $v1, -0x6724($gp)
    ctx->pc = 0x295cc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x295ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295cd0: 0x146200ad  bne         $v1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x295CD0u;
    {
        const bool branch_taken_0x295cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x295cd0) {
            ctx->pc = 0x295F88u;
            goto label_295f88;
        }
    }
    ctx->pc = 0x295CD8u;
    // 0x295cd8: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x295CD8u;
    SET_GPR_U32(ctx, 31, 0x295CE0u);
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CE0u; }
        if (ctx->pc != 0x295CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CE0u; }
        if (ctx->pc != 0x295CE0u) { return; }
    }
    ctx->pc = 0x295CE0u;
label_295ce0:
    // 0x295ce0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x295ce0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ce4: 0x13c002a6  beqz        $fp, . + 4 + (0x2A6 << 2)
    ctx->pc = 0x295CE4u;
    {
        const bool branch_taken_0x295ce4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ce4) {
            ctx->pc = 0x296780u;
            goto label_296780;
        }
    }
    ctx->pc = 0x295CECu;
    // 0x295cec: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x295cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x295cf0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x295cf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295cf4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x295cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x295cf8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x295cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x295cfc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x295cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x295d00: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x295D00u;
    {
        const bool branch_taken_0x295d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D00u;
            // 0x295d04: 0x2b900  sll         $s7, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d00) {
            ctx->pc = 0x295F70u;
            goto label_295f70;
        }
    }
    ctx->pc = 0x295D08u;
label_295d08:
    // 0x295d08: 0x28420052  slti        $v0, $v0, 0x52
    ctx->pc = 0x295d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)82) ? 1 : 0);
    // 0x295d0c: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x295D0Cu;
    {
        const bool branch_taken_0x295d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D0Cu;
            // 0x295d10: 0x2a210143  slti        $at, $s1, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)323) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d0c) {
            ctx->pc = 0x295F68u;
            goto label_295f68;
        }
    }
    ctx->pc = 0x295D14u;
    // 0x295d14: 0x1020009c  beqz        $at, . + 4 + (0x9C << 2)
    ctx->pc = 0x295D14u;
    {
        const bool branch_taken_0x295d14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D14u;
            // 0x295d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d14) {
            ctx->pc = 0x295F88u;
            goto label_295f88;
        }
    }
    ctx->pc = 0x295D1Cu;
    // 0x295d1c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x295D1Cu;
    SET_GPR_U32(ctx, 31, 0x295D24u);
    ctx->pc = 0x295D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295D1Cu;
            // 0x295d20: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D24u; }
        if (ctx->pc != 0x295D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D24u; }
        if (ctx->pc != 0x295D24u) { return; }
    }
    ctx->pc = 0x295D24u;
label_295d24:
    // 0x295d24: 0x8f85989c  lw          $a1, -0x6764($gp)
    ctx->pc = 0x295d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x295d28: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x295D28u;
    SET_GPR_U32(ctx, 31, 0x295D30u);
    ctx->pc = 0x295D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295D28u;
            // 0x295d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D30u; }
        if (ctx->pc != 0x295D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D30u; }
        if (ctx->pc != 0x295D30u) { return; }
    }
    ctx->pc = 0x295D30u;
label_295d30:
    // 0x295d30: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x295d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x295d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x295d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d3c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x295d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d40: 0xc04d320  jal         func_134C80
    ctx->pc = 0x295D40u;
    SET_GPR_U32(ctx, 31, 0x295D48u);
    ctx->pc = 0x295D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295D40u;
            // 0x295d44: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D48u; }
        if (ctx->pc != 0x295D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D48u; }
        if (ctx->pc != 0x295D48u) { return; }
    }
    ctx->pc = 0x295D48u;
label_295d48:
    // 0x295d48: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x295d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x295d4c: 0x3c0242ec  lui         $v0, 0x42EC
    ctx->pc = 0x295d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17132 << 16));
    // 0x295d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x295d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295d5c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x295d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x295d60: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295D60u;
    SET_GPR_U32(ctx, 31, 0x295D68u);
    ctx->pc = 0x295D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295D60u;
            // 0x295d64: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D68u; }
        if (ctx->pc != 0x295D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D68u; }
        if (ctx->pc != 0x295D68u) { return; }
    }
    ctx->pc = 0x295D68u;
label_295d68:
    // 0x295d68: 0xc07fcb0  jal         func_1FF2C0
    ctx->pc = 0x295D68u;
    SET_GPR_U32(ctx, 31, 0x295D70u);
    ctx->pc = 0x295D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295D68u;
            // 0x295d6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF2C0u;
    if (runtime->hasFunction(0x1FF2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D70u; }
        if (ctx->pc != 0x295D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopDataTableIndex__Fi_0x1ff2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D70u; }
        if (ctx->pc != 0x295D70u) { return; }
    }
    ctx->pc = 0x295D70u;
label_295d70:
    // 0x295d70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x295d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d74: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x295D74u;
    {
        const bool branch_taken_0x295d74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x295D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D74u;
            // 0x295d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d74) {
            ctx->pc = 0x295D8Cu;
            goto label_295d8c;
        }
    }
    ctx->pc = 0x295D7Cu;
    // 0x295d7c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x295D7Cu;
    SET_GPR_U32(ctx, 31, 0x295D84u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D84u; }
        if (ctx->pc != 0x295D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D84u; }
        if (ctx->pc != 0x295D84u) { return; }
    }
    ctx->pc = 0x295D84u;
label_295d84:
    // 0x295d84: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x295D84u;
    {
        const bool branch_taken_0x295d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d84) {
            ctx->pc = 0x295F68u;
            goto label_295f68;
        }
    }
    ctx->pc = 0x295D8Cu;
label_295d8c:
    // 0x295d8c: 0x0  nop
    ctx->pc = 0x295d8cu;
    // NOP
    // 0x295d90: 0x8f8498d0  lw          $a0, -0x6730($gp)
    ctx->pc = 0x295d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940880)));
    // 0x295d94: 0xc07fd28  jal         func_1FF4A0
    ctx->pc = 0x295D94u;
    SET_GPR_U32(ctx, 31, 0x295D9Cu);
    ctx->pc = 0x295D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295D94u;
            // 0x295d98: 0x86450000  lh          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A0u;
    if (runtime->hasFunction(0x1FF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D9Cu; }
        if (ctx->pc != 0x295D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295D9Cu; }
        if (ctx->pc != 0x295D9Cu) { return; }
    }
    ctx->pc = 0x295D9Cu;
label_295d9c:
    // 0x295d9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x295d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295da0: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x295DA0u;
    {
        const bool branch_taken_0x295da0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x295DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295DA0u;
            // 0x295da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295da0) {
            ctx->pc = 0x295DB8u;
            goto label_295db8;
        }
    }
    ctx->pc = 0x295DA8u;
    // 0x295da8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x295DA8u;
    SET_GPR_U32(ctx, 31, 0x295DB0u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DB0u; }
        if (ctx->pc != 0x295DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DB0u; }
        if (ctx->pc != 0x295DB0u) { return; }
    }
    ctx->pc = 0x295DB0u;
label_295db0:
    // 0x295db0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x295DB0u;
    {
        const bool branch_taken_0x295db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295db0) {
            ctx->pc = 0x295F88u;
            goto label_295f88;
        }
    }
    ctx->pc = 0x295DB8u;
label_295db8:
    // 0x295db8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x295db8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295dc0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295DC0u;
    {
        const bool branch_taken_0x295dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x295DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295DC0u;
            // 0x295dc4: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295dc0) {
            ctx->pc = 0x295DD8u;
            goto label_295dd8;
        }
    }
    ctx->pc = 0x295DC8u;
    // 0x295dc8: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x295dc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x295dcc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x295DCCu;
    {
        const bool branch_taken_0x295dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295dcc) {
            ctx->pc = 0x295DD8u;
            goto label_295dd8;
        }
    }
    ctx->pc = 0x295DD4u;
    // 0x295dd4: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x295dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_295dd8:
    // 0x295dd8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x295dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x295ddc: 0x27a40ee0  addiu       $a0, $sp, 0xEE0
    ctx->pc = 0x295ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3808));
    // 0x295de0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x295de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295de4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x295DE4u;
    SET_GPR_U32(ctx, 31, 0x295DECu);
    ctx->pc = 0x295DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295DE4u;
            // 0x295de8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DECu; }
        if (ctx->pc != 0x295DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DECu; }
        if (ctx->pc != 0x295DECu) { return; }
    }
    ctx->pc = 0x295DECu;
label_295dec:
    // 0x295dec: 0x2623000b  addiu       $v1, $s1, 0xB
    ctx->pc = 0x295decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x295df0: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x295df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x295df4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295dfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x295dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295e00: 0x27a50ee0  addiu       $a1, $sp, 0xEE0
    ctx->pc = 0x295e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3808));
    // 0x295e04: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295E04u;
    SET_GPR_U32(ctx, 31, 0x295E0Cu);
    ctx->pc = 0x295E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E04u;
            // 0x295e08: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E0Cu; }
        if (ctx->pc != 0x295E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E0Cu; }
        if (ctx->pc != 0x295E0Cu) { return; }
    }
    ctx->pc = 0x295E0Cu;
label_295e0c:
    // 0x295e0c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x295e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x295e10: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x295e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x295e14: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x295e14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x295e18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x295E18u;
    {
        const bool branch_taken_0x295e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E18u;
            // 0x295e1c: 0x26340005  addiu       $s4, $s1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e18) {
            ctx->pc = 0x295E50u;
            goto label_295e50;
        }
    }
    ctx->pc = 0x295E20u;
    // 0x295e20: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x295e20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295e24: 0xc07faf0  jal         func_1FEBC0
    ctx->pc = 0x295E24u;
    SET_GPR_U32(ctx, 31, 0x295E2Cu);
    ctx->pc = 0x295E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E24u;
            // 0x295e28: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBC0u;
    if (runtime->hasFunction(0x1FEBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E2Cu; }
        if (ctx->pc != 0x295E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNetaFlag__15CInventUserDataFi_0x1febc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E2Cu; }
        if (ctx->pc != 0x295E2Cu) { return; }
    }
    ctx->pc = 0x295E2Cu;
label_295e2c:
    // 0x295e2c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x295e2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x295e30: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x295E30u;
    {
        const bool branch_taken_0x295e30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e30) {
            ctx->pc = 0x295E50u;
            goto label_295e50;
        }
    }
    ctx->pc = 0x295E38u;
    // 0x295e38: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x295e38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295e3c: 0xc07fb28  jal         func_1FECA0
    ctx->pc = 0x295E3Cu;
    SET_GPR_U32(ctx, 31, 0x295E44u);
    ctx->pc = 0x295E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E3Cu;
            // 0x295e40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECA0u;
    if (runtime->hasFunction(0x1FECA0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E44u; }
        if (ctx->pc != 0x295E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNetaFlagHavePhoto__15CInventUserDataFi_0x1feca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E44u; }
        if (ctx->pc != 0x295E44u) { return; }
    }
    ctx->pc = 0x295E44u;
label_295e44:
    // 0x295e44: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x295e44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x295e48: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x295E48u;
    {
        const bool branch_taken_0x295e48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x295e48) {
            ctx->pc = 0x295E54u;
            goto label_295e54;
        }
    }
    ctx->pc = 0x295E50u;
label_295e50:
    // 0x295e50: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x295e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_295e54:
    // 0x295e54: 0x0  nop
    ctx->pc = 0x295e54u;
    // NOP
    // 0x295e58: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x295e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x295e5c: 0x27a40ef0  addiu       $a0, $sp, 0xEF0
    ctx->pc = 0x295e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3824));
    // 0x295e60: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x295e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x295e64: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x295e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x295e68: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x295E68u;
    SET_GPR_U32(ctx, 31, 0x295E70u);
    ctx->pc = 0x295E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E68u;
            // 0x295e6c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E70u; }
        if (ctx->pc != 0x295E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E70u; }
        if (ctx->pc != 0x295E70u) { return; }
    }
    ctx->pc = 0x295E70u;
label_295e70:
    // 0x295e70: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x295e70u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295e74: 0x3c0243bc  lui         $v0, 0x43BC
    ctx->pc = 0x295e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17340 << 16));
    // 0x295e78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x295e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e80: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x295e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x295e84: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295E84u;
    SET_GPR_U32(ctx, 31, 0x295E8Cu);
    ctx->pc = 0x295E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E84u;
            // 0x295e88: 0x27a50ef0  addiu       $a1, $sp, 0xEF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E8Cu; }
        if (ctx->pc != 0x295E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E8Cu; }
        if (ctx->pc != 0x295E8Cu) { return; }
    }
    ctx->pc = 0x295E8Cu;
label_295e8c:
    // 0x295e8c: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x295e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x295e90: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x295E90u;
    {
        const bool branch_taken_0x295e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E90u;
            // 0x295e94: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e90) {
            ctx->pc = 0x295EE8u;
            goto label_295ee8;
        }
    }
    ctx->pc = 0x295E98u;
    // 0x295e98: 0x27a40f00  addiu       $a0, $sp, 0xF00
    ctx->pc = 0x295e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
    // 0x295e9c: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x295e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x295ea0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x295ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x295ea4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x295ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x295ea8: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x295eac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x295eacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295eb0: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x295eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x295eb4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x295eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x295eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x295eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295ebc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x295ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x295ec0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x295EC0u;
    SET_GPR_U32(ctx, 31, 0x295EC8u);
    ctx->pc = 0x295EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295EC0u;
            // 0x295ec4: 0x24450056  addiu       $a1, $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 86));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295EC8u; }
        if (ctx->pc != 0x295EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295EC8u; }
        if (ctx->pc != 0x295EC8u) { return; }
    }
    ctx->pc = 0x295EC8u;
label_295ec8:
    // 0x295ec8: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x295ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x295ecc: 0x3c0243b9  lui         $v0, 0x43B9
    ctx->pc = 0x295eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17337 << 16));
    // 0x295ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ed8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x295ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295edc: 0x27a50f00  addiu       $a1, $sp, 0xF00
    ctx->pc = 0x295edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
    // 0x295ee0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x295EE0u;
    SET_GPR_U32(ctx, 31, 0x295EE8u);
    ctx->pc = 0x295EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295EE0u;
            // 0x295ee4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295EE8u; }
        if (ctx->pc != 0x295EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295EE8u; }
        if (ctx->pc != 0x295EE8u) { return; }
    }
    ctx->pc = 0x295EE8u;
label_295ee8:
    // 0x295ee8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x295EE8u;
    SET_GPR_U32(ctx, 31, 0x295EF0u);
    ctx->pc = 0x295EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295EE8u;
            // 0x295eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295EF0u; }
        if (ctx->pc != 0x295EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295EF0u; }
        if (ctx->pc != 0x295EF0u) { return; }
    }
    ctx->pc = 0x295EF0u;
label_295ef0:
    // 0x295ef0: 0x2fd1821  addu        $v1, $s7, $sp
    ctx->pc = 0x295ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
    // 0x295ef4: 0x3c028013  lui         $v0, 0x8013
    ctx->pc = 0x295ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32787 << 16));
    // 0x295ef8: 0x247400e0  addiu       $s4, $v1, 0xE0
    ctx->pc = 0x295ef8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x295efc: 0x34452333  ori         $a1, $v0, 0x2333
    ctx->pc = 0x295efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9011);
    // 0x295f00: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x295F00u;
    SET_GPR_U32(ctx, 31, 0x295F08u);
    ctx->pc = 0x295F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F00u;
            // 0x295f04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F08u; }
        if (ctx->pc != 0x295F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F08u; }
        if (ctx->pc != 0x295F08u) { return; }
    }
    ctx->pc = 0x295F08u;
label_295f08:
    // 0x295f08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f0c: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x295F0Cu;
    SET_GPR_U32(ctx, 31, 0x295F14u);
    ctx->pc = 0x295F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F0Cu;
            // 0x295f10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F14u; }
        if (ctx->pc != 0x295F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F14u; }
        if (ctx->pc != 0x295F14u) { return; }
    }
    ctx->pc = 0x295F14u;
label_295f14:
    // 0x295f14: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x295f14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x295f18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295F18u;
    {
        const bool branch_taken_0x295f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f18) {
            ctx->pc = 0x295F40u;
            goto label_295f40;
        }
    }
    ctx->pc = 0x295F20u;
    // 0x295f20: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x295f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295f24: 0xc07fe84  jal         func_1FFA10
    ctx->pc = 0x295F24u;
    SET_GPR_U32(ctx, 31, 0x295F2Cu);
    ctx->pc = 0x295F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F24u;
            // 0x295f28: 0x27a50be0  addiu       $a1, $sp, 0xBE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA10u;
    if (runtime->hasFunction(0x1FFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F2Cu; }
        if (ctx->pc != 0x295F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoNameStr__FiPc_0x1ffa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F2Cu; }
        if (ctx->pc != 0x295F2Cu) { return; }
    }
    ctx->pc = 0x295F2Cu;
label_295f2c:
    // 0x295f2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f30: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x295F30u;
    SET_GPR_U32(ctx, 31, 0x295F38u);
    ctx->pc = 0x295F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F30u;
            // 0x295f34: 0x27a50be0  addiu       $a1, $sp, 0xBE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F38u; }
        if (ctx->pc != 0x295F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F38u; }
        if (ctx->pc != 0x295F38u) { return; }
    }
    ctx->pc = 0x295F38u;
label_295f38:
    // 0x295f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295F38u;
    {
        const bool branch_taken_0x295f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f38) {
            ctx->pc = 0x295F4Cu;
            goto label_295f4c;
        }
    }
    ctx->pc = 0x295F40u;
label_295f40:
    // 0x295f40: 0x8f8582a4  lw          $a1, -0x7D5C($gp)
    ctx->pc = 0x295f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x295f44: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x295F44u;
    SET_GPR_U32(ctx, 31, 0x295F4Cu);
    ctx->pc = 0x295F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F44u;
            // 0x295f48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F4Cu; }
        if (ctx->pc != 0x295F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F4Cu; }
        if (ctx->pc != 0x295F4Cu) { return; }
    }
    ctx->pc = 0x295F4Cu;
label_295f4c:
    // 0x295f4c: 0x0  nop
    ctx->pc = 0x295f4cu;
    // NOP
    // 0x295f50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f54: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x295f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x295f58: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x295F58u;
    SET_GPR_U32(ctx, 31, 0x295F60u);
    ctx->pc = 0x295F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F58u;
            // 0x295f5c: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F60u; }
        if (ctx->pc != 0x295F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F60u; }
        if (ctx->pc != 0x295F60u) { return; }
    }
    ctx->pc = 0x295F60u;
label_295f60:
    // 0x295f60: 0x26f700b0  addiu       $s7, $s7, 0xB0
    ctx->pc = 0x295f60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 176));
    // 0x295f64: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x295f64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_295f68:
    // 0x295f68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x295f68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x295f6c: 0x26310022  addiu       $s1, $s1, 0x22
    ctx->pc = 0x295f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
label_295f70:
    // 0x295f70: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x295F70u;
    SET_GPR_U32(ctx, 31, 0x295F78u);
    ctx->pc = 0x295F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F70u;
            // 0x295f74: 0x8f8498e0  lw          $a0, -0x6720($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294D40u;
    if (runtime->hasFunction(0x294D40u)) {
        auto targetFn = runtime->lookupFunction(0x294D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F78u; }
        if (ctx->pc != 0x295F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMax__14CMenuQuestViewFv_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F78u; }
        if (ctx->pc != 0x295F78u) { return; }
    }
    ctx->pc = 0x295F78u;
label_295f78:
    // 0x295f78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x295f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x295f7c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x295f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295f80: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x295F80u;
    {
        const bool branch_taken_0x295f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295F80u;
            // 0x295f84: 0x26220022  addiu       $v0, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f80) {
            ctx->pc = 0x295D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295d08;
        }
    }
    ctx->pc = 0x295F88u;
label_295f88:
    // 0x295f88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x295f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x295f8c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x295f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x295f90: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x295f94: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x295F94u;
    SET_GPR_U32(ctx, 31, 0x295F9Cu);
    ctx->pc = 0x295F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F94u;
            // 0x295f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F9Cu; }
        if (ctx->pc != 0x295F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F9Cu; }
        if (ctx->pc != 0x295F9Cu) { return; }
    }
    ctx->pc = 0x295F9Cu;
label_295f9c:
    // 0x295f9c: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x295f9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x295fa0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x295FA0u;
    {
        const bool branch_taken_0x295fa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x295FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295FA0u;
            // 0x295fa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fa0) {
            ctx->pc = 0x295FD4u;
            goto label_295fd4;
        }
    }
    ctx->pc = 0x295FA8u;
    // 0x295fa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x295fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295fac:
    // 0x295fac: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x295facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x295fb0: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x295fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x295fb4: 0x8c860094  lw          $a2, 0x94($a0)
    ctx->pc = 0x295fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x295fb8: 0x8c870098  lw          $a3, 0x98($a0)
    ctx->pc = 0x295fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x295fbc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x295FBCu;
    SET_GPR_U32(ctx, 31, 0x295FC4u);
    ctx->pc = 0x295FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295FBCu;
            // 0x295fc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295FC4u; }
        if (ctx->pc != 0x295FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295FC4u; }
        if (ctx->pc != 0x295FC4u) { return; }
    }
    ctx->pc = 0x295FC4u;
label_295fc4:
    // 0x295fc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x295fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x295fc8: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x295fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x295fcc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x295FCCu;
    {
        const bool branch_taken_0x295fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295FCCu;
            // 0x295fd0: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fcc) {
            ctx->pc = 0x295FACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295fac;
        }
    }
    ctx->pc = 0x295FD4u;
label_295fd4:
    // 0x295fd4: 0x0  nop
    ctx->pc = 0x295fd4u;
    // NOP
    // 0x295fd8: 0xc088070  jal         func_2201C0
    ctx->pc = 0x295FD8u;
    SET_GPR_U32(ctx, 31, 0x295FE0u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295FE0u; }
        if (ctx->pc != 0x295FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295FE0u; }
        if (ctx->pc != 0x295FE0u) { return; }
    }
    ctx->pc = 0x295FE0u;
label_295fe0:
    // 0x295fe0: 0x8f82989c  lw          $v0, -0x6764($gp)
    ctx->pc = 0x295fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x295fe4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x295fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x295fe8: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x295fe8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295fec: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x295FECu;
    SET_GPR_U32(ctx, 31, 0x295FF4u);
    ctx->pc = 0x295FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295FECu;
            // 0x295ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295FF4u; }
        if (ctx->pc != 0x295FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295FF4u; }
        if (ctx->pc != 0x295FF4u) { return; }
    }
    ctx->pc = 0x295FF4u;
label_295ff4:
    // 0x295ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ff8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x295FF8u;
    SET_GPR_U32(ctx, 31, 0x296000u);
    ctx->pc = 0x295FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295FF8u;
            // 0x295ffc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296000u; }
        if (ctx->pc != 0x296000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296000u; }
        if (ctx->pc != 0x296000u) { return; }
    }
    ctx->pc = 0x296000u;
label_296000:
    // 0x296000: 0x8f85989c  lw          $a1, -0x6764($gp)
    ctx->pc = 0x296000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x296004: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x296004u;
    SET_GPR_U32(ctx, 31, 0x29600Cu);
    ctx->pc = 0x296008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296004u;
            // 0x296008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29600Cu; }
        if (ctx->pc != 0x29600Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29600Cu; }
        if (ctx->pc != 0x29600Cu) { return; }
    }
    ctx->pc = 0x29600Cu;
label_29600c:
    // 0x29600c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x29600cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x296010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296014: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x296014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296018: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x296018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29601c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x29601Cu;
    SET_GPR_U32(ctx, 31, 0x296024u);
    ctx->pc = 0x296020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29601Cu;
            // 0x296020: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296024u; }
        if (ctx->pc != 0x296024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296024u; }
        if (ctx->pc != 0x296024u) { return; }
    }
    ctx->pc = 0x296024u;
label_296024:
    // 0x296024: 0x27a40f10  addiu       $a0, $sp, 0xF10
    ctx->pc = 0x296024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3856));
    // 0x296028: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x296028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x29602c: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x29602cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x296030: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x296030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296034: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x296034u;
    SET_GPR_U32(ctx, 31, 0x29603Cu);
    ctx->pc = 0x296038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296034u;
            // 0x296038: 0x240800fc  addiu       $t0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29603Cu; }
        if (ctx->pc != 0x29603Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29603Cu; }
        if (ctx->pc != 0x29603Cu) { return; }
    }
    ctx->pc = 0x29603Cu;
label_29603c:
    // 0x29603c: 0x3c0343ce  lui         $v1, 0x43CE
    ctx->pc = 0x29603cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17358 << 16));
    // 0x296040: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x296040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x296044: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x296044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x296048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29604c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29604cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x296050: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x296050u;
    SET_GPR_U32(ctx, 31, 0x296058u);
    ctx->pc = 0x296054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296050u;
            // 0x296054: 0x27a50f10  addiu       $a1, $sp, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296058u; }
        if (ctx->pc != 0x296058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296058u; }
        if (ctx->pc != 0x296058u) { return; }
    }
    ctx->pc = 0x296058u;
label_296058:
    // 0x296058: 0xc0a248c  jal         func_289230
    ctx->pc = 0x296058u;
    SET_GPR_U32(ctx, 31, 0x296060u);
    ctx->pc = 0x29605Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296058u;
            // 0x29605c: 0xc78c98c0  lwc1        $f12, -0x6740($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296060u; }
        if (ctx->pc != 0x296060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296060u; }
        if (ctx->pc != 0x296060u) { return; }
    }
    ctx->pc = 0x296060u;
label_296060:
    // 0x296060: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x296060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296064: 0x27a40c60  addiu       $a0, $sp, 0xC60
    ctx->pc = 0x296064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
    // 0x296068: 0x2405019e  addiu       $a1, $zero, 0x19E
    ctx->pc = 0x296068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 414));
    // 0x29606c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x29606cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x296070: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x296070u;
    SET_GPR_U32(ctx, 31, 0x296078u);
    ctx->pc = 0x296074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296070u;
            // 0x296074: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296078u; }
        if (ctx->pc != 0x296078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296078u; }
        if (ctx->pc != 0x296078u) { return; }
    }
    ctx->pc = 0x296078u;
label_296078:
    // 0x296078: 0x27a40f20  addiu       $a0, $sp, 0xF20
    ctx->pc = 0x296078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3872));
    // 0x29607c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x29607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x296080: 0x2406003e  addiu       $a2, $zero, 0x3E
    ctx->pc = 0x296080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x296084: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x296084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x296088: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x296088u;
    SET_GPR_U32(ctx, 31, 0x296090u);
    ctx->pc = 0x29608Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296088u;
            // 0x29608c: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296090u; }
        if (ctx->pc != 0x296090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296090u; }
        if (ctx->pc != 0x296090u) { return; }
    }
    ctx->pc = 0x296090u;
label_296090:
    // 0x296090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296094: 0x27a50c60  addiu       $a1, $sp, 0xC60
    ctx->pc = 0x296094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
    // 0x296098: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x296098u;
    SET_GPR_U32(ctx, 31, 0x2960A0u);
    ctx->pc = 0x29609Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296098u;
            // 0x29609c: 0x27a60f20  addiu       $a2, $sp, 0xF20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2960A0u; }
        if (ctx->pc != 0x2960A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2960A0u; }
        if (ctx->pc != 0x2960A0u) { return; }
    }
    ctx->pc = 0x2960A0u;
label_2960a0:
    // 0x2960a0: 0xc78198c4  lwc1        $f1, -0x673C($gp)
    ctx->pc = 0x2960a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2960a4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2960a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2960a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2960a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2960ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2960ACu;
    SET_GPR_U32(ctx, 31, 0x2960B4u);
    ctx->pc = 0x2960B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2960ACu;
            // 0x2960b0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2960B4u; }
        if (ctx->pc != 0x2960B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2960B4u; }
        if (ctx->pc != 0x2960B4u) { return; }
    }
    ctx->pc = 0x2960B4u;
label_2960b4:
    // 0x2960b4: 0x27b10c6c  addiu       $s1, $sp, 0xC6C
    ctx->pc = 0x2960b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 3180));
    // 0x2960b8: 0x27b20c64  addiu       $s2, $sp, 0xC64
    ctx->pc = 0x2960b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 3172));
    // 0x2960bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2960bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2960c0: 0x27a40f30  addiu       $a0, $sp, 0xF30
    ctx->pc = 0x2960c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3888));
    // 0x2960c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2960c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2960c8: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2960c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2960cc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x2960ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2960d0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2960d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2960d4: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2960d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2960d8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2960d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2960dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2960DCu;
    SET_GPR_U32(ctx, 31, 0x2960E4u);
    ctx->pc = 0x2960E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2960DCu;
            // 0x2960e0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2960E4u; }
        if (ctx->pc != 0x2960E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2960E4u; }
        if (ctx->pc != 0x2960E4u) { return; }
    }
    ctx->pc = 0x2960E4u;
label_2960e4:
    // 0x2960e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2960e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960e8: 0x27a50c60  addiu       $a1, $sp, 0xC60
    ctx->pc = 0x2960e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
    // 0x2960ec: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2960ECu;
    SET_GPR_U32(ctx, 31, 0x2960F4u);
    ctx->pc = 0x2960F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2960ECu;
            // 0x2960f0: 0x27a60f30  addiu       $a2, $sp, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2960F4u; }
        if (ctx->pc != 0x2960F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2960F4u; }
        if (ctx->pc != 0x2960F4u) { return; }
    }
    ctx->pc = 0x2960F4u;
label_2960f4:
    // 0x2960f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2960f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2960f8: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2960fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2960fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296100: 0x27a40f40  addiu       $a0, $sp, 0xF40
    ctx->pc = 0x296100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3904));
    // 0x296104: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x296104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x296108: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x296108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x29610c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x29610cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x296110: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x296110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296114: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x296114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x296118: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x296118u;
    SET_GPR_U32(ctx, 31, 0x296120u);
    ctx->pc = 0x29611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296118u;
            // 0x29611c: 0xae280000  sw          $t0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296120u; }
        if (ctx->pc != 0x296120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296120u; }
        if (ctx->pc != 0x296120u) { return; }
    }
    ctx->pc = 0x296120u;
label_296120:
    // 0x296120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296124: 0x27a50c60  addiu       $a1, $sp, 0xC60
    ctx->pc = 0x296124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
    // 0x296128: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x296128u;
    SET_GPR_U32(ctx, 31, 0x296130u);
    ctx->pc = 0x29612Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296128u;
            // 0x29612c: 0x27a60f40  addiu       $a2, $sp, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296130u; }
        if (ctx->pc != 0x296130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296130u; }
        if (ctx->pc != 0x296130u) { return; }
    }
    ctx->pc = 0x296130u;
label_296130:
    // 0x296130: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x296130u;
    SET_GPR_U32(ctx, 31, 0x296138u);
    ctx->pc = 0x296134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296130u;
            // 0x296134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296138u; }
        if (ctx->pc != 0x296138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296138u; }
        if (ctx->pc != 0x296138u) { return; }
    }
    ctx->pc = 0x296138u;
label_296138:
    // 0x296138: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x296138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29613c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29613cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x296140: 0x24a5dd70  addiu       $a1, $a1, -0x2290
    ctx->pc = 0x296140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958448));
    // 0x296144: 0xc04b414  jal         func_12D050
    ctx->pc = 0x296144u;
    SET_GPR_U32(ctx, 31, 0x29614Cu);
    ctx->pc = 0x296148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296144u;
            // 0x296148: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29614Cu; }
        if (ctx->pc != 0x29614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29614Cu; }
        if (ctx->pc != 0x29614Cu) { return; }
    }
    ctx->pc = 0x29614Cu;
label_29614c:
    // 0x29614c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29614cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296150: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x296150u;
    {
        const bool branch_taken_0x296150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x296150) {
            ctx->pc = 0x296188u;
            goto label_296188;
        }
    }
    ctx->pc = 0x296158u;
    // 0x296158: 0x938298c8  lbu         $v0, -0x6738($gp)
    ctx->pc = 0x296158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940872)));
    // 0x29615c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29615Cu;
    {
        const bool branch_taken_0x29615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29615c) {
            ctx->pc = 0x296188u;
            goto label_296188;
        }
    }
    ctx->pc = 0x296164u;
    // 0x296164: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x296164u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296168: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x296168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29616c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x29616Cu;
    SET_GPR_U32(ctx, 31, 0x296174u);
    ctx->pc = 0x296170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29616Cu;
            // 0x296170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296174u; }
        if (ctx->pc != 0x296174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296174u; }
        if (ctx->pc != 0x296174u) { return; }
    }
    ctx->pc = 0x296174u;
label_296174:
    // 0x296174: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x296174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x296178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29617c: 0x278598b0  addiu       $a1, $gp, -0x6750
    ctx->pc = 0x29617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940848));
    // 0x296180: 0xc088f50  jal         func_223D40
    ctx->pc = 0x296180u;
    SET_GPR_U32(ctx, 31, 0x296188u);
    ctx->pc = 0x296184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296180u;
            // 0x296184: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D40u;
    if (runtime->hasFunction(0x223D40u)) {
        auto targetFn = runtime->lookupFunction(0x223D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296188u; }
        if (ctx->pc != 0x296188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffi_0x223d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296188u; }
        if (ctx->pc != 0x296188u) { return; }
    }
    ctx->pc = 0x296188u;
label_296188:
    // 0x296188: 0x938298c8  lbu         $v0, -0x6738($gp)
    ctx->pc = 0x296188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940872)));
    // 0x29618c: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x29618Cu;
    {
        const bool branch_taken_0x29618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29618Cu;
            // 0x296190: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29618c) {
            ctx->pc = 0x296420u;
            goto label_296420;
        }
    }
    ctx->pc = 0x296194u;
    // 0x296194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29619c: 0xc0887b0  jal         func_221EC0
    ctx->pc = 0x29619Cu;
    SET_GPR_U32(ctx, 31, 0x2961A4u);
    ctx->pc = 0x2961A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29619Cu;
            // 0x2961a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2961A4u; }
        if (ctx->pc != 0x2961A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2961A4u; }
        if (ctx->pc != 0x2961A4u) { return; }
    }
    ctx->pc = 0x2961A4u;
label_2961a4:
    // 0x2961a4: 0x8f82989c  lw          $v0, -0x6764($gp)
    ctx->pc = 0x2961a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x2961a8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2961a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2961ac: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2961acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2961b0: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2961B0u;
    SET_GPR_U32(ctx, 31, 0x2961B8u);
    ctx->pc = 0x2961B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2961B0u;
            // 0x2961b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2961B8u; }
        if (ctx->pc != 0x2961B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2961B8u; }
        if (ctx->pc != 0x2961B8u) { return; }
    }
    ctx->pc = 0x2961B8u;
label_2961b8:
    // 0x2961b8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2961b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2961bc: 0x27a40f78  addiu       $a0, $sp, 0xF78
    ctx->pc = 0x2961bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3960));
    // 0x2961c0: 0x24424168  addiu       $v0, $v0, 0x4168
    ctx->pc = 0x2961c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16744));
    // 0x2961c4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2961c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2961c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2961c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2961cc: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x2961ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2961d0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2961d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2961d4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2961d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2961d8: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x2961d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2961dc: 0x878298cc  lh          $v0, -0x6734($gp)
    ctx->pc = 0x2961dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940876)));
    // 0x2961e0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2961e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2961e4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2961E4u;
    {
        const bool branch_taken_0x2961e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2961e4) {
            ctx->pc = 0x2961F8u;
            goto label_2961f8;
        }
    }
    ctx->pc = 0x2961ECu;
    // 0x2961ec: 0x87a20f82  lh          $v0, 0xF82($sp)
    ctx->pc = 0x2961ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3970)));
    // 0x2961f0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2961f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2961f4: 0xa7a20f82  sh          $v0, 0xF82($sp)
    ctx->pc = 0x2961f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 3970), (uint16_t)GPR_U32(ctx, 2));
label_2961f8:
    // 0x2961f8: 0x838398dc  lb          $v1, -0x6724($gp)
    ctx->pc = 0x2961f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x2961fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2961fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296200: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x296200u;
    {
        const bool branch_taken_0x296200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x296204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296200u;
            // 0x296204: 0x3c0242fa  lui         $v0, 0x42FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296200) {
            ctx->pc = 0x296220u;
            goto label_296220;
        }
    }
    ctx->pc = 0x296208u;
    // 0x296208: 0x87a20f7e  lh          $v0, 0xF7E($sp)
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3966)));
    // 0x29620c: 0xa7a00f80  sh          $zero, 0xF80($sp)
    ctx->pc = 0x29620cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 3968), (uint16_t)GPR_U32(ctx, 0));
    // 0x296210: 0xa7a00f82  sh          $zero, 0xF82($sp)
    ctx->pc = 0x296210u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 3970), (uint16_t)GPR_U32(ctx, 0));
    // 0x296214: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x296214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x296218: 0xa7a20f7e  sh          $v0, 0xF7E($sp)
    ctx->pc = 0x296218u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 3966), (uint16_t)GPR_U32(ctx, 2));
    // 0x29621c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_296220:
    // 0x296220: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x296220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x296224: 0x87a90f78  lh          $t1, 0xF78($sp)
    ctx->pc = 0x296224u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3960)));
    // 0x296228: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x296228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29622c: 0x87a30f7a  lh          $v1, 0xF7A($sp)
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3962)));
    // 0x296230: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x296230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x296234: 0x3c0243ba  lui         $v0, 0x43BA
    ctx->pc = 0x296234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17338 << 16));
    // 0x296238: 0x87a80f7c  lh          $t0, 0xF7C($sp)
    ctx->pc = 0x296238u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3964)));
    // 0x29623c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x29623cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x296240: 0x87a50f7e  lh          $a1, 0xF7E($sp)
    ctx->pc = 0x296240u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3966)));
    // 0x296244: 0x87a60f80  lh          $a2, 0xF80($sp)
    ctx->pc = 0x296244u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3968)));
    // 0x296248: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x296248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x29624c: 0x24e2fe80  addiu       $v0, $a3, -0x180
    ctx->pc = 0x29624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966912));
    // 0x296250: 0x2b043  sra         $s6, $v0, 1
    ctx->pc = 0x296250u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 1));
    // 0x296254: 0x94821  addu        $t1, $zero, $t1
    ctx->pc = 0x296254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x296258: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x296258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29625c: 0x26c20006  addiu       $v0, $s6, 0x6
    ctx->pc = 0x29625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
    // 0x296260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296264: 0x87a70f82  lh          $a3, 0xF82($sp)
    ctx->pc = 0x296264u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3970)));
    // 0x296268: 0x87a30f84  lh          $v1, 0xF84($sp)
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 3972)));
    // 0x29626c: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x29626cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x296270: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x296270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x296274: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x296274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x296278: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x296278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x29627c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29627cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296284: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x296288: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x296288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29628c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29628cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296290: 0x2522fff4  addiu       $v0, $t1, -0xC
    ctx->pc = 0x296290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967284));
    // 0x296294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296298: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x296298u;
    SET_GPR_U32(ctx, 31, 0x2962A0u);
    ctx->pc = 0x29629Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296298u;
            // 0x29629c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962A0u; }
        if (ctx->pc != 0x2962A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962A0u; }
        if (ctx->pc != 0x2962A0u) { return; }
    }
    ctx->pc = 0x2962A0u;
label_2962a0:
    // 0x2962a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2962a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962a4: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2962A4u;
    SET_GPR_U32(ctx, 31, 0x2962ACu);
    ctx->pc = 0x2962A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2962A4u;
            // 0x2962a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962ACu; }
        if (ctx->pc != 0x2962ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962ACu; }
        if (ctx->pc != 0x2962ACu) { return; }
    }
    ctx->pc = 0x2962ACu;
label_2962ac:
    // 0x2962ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2962acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962b0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2962B0u;
    SET_GPR_U32(ctx, 31, 0x2962B8u);
    ctx->pc = 0x2962B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2962B0u;
            // 0x2962b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962B8u; }
        if (ctx->pc != 0x2962B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962B8u; }
        if (ctx->pc != 0x2962B8u) { return; }
    }
    ctx->pc = 0x2962B8u;
label_2962b8:
    // 0x2962b8: 0x8f85989c  lw          $a1, -0x6764($gp)
    ctx->pc = 0x2962b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x2962bc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2962BCu;
    SET_GPR_U32(ctx, 31, 0x2962C4u);
    ctx->pc = 0x2962C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2962BCu;
            // 0x2962c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962C4u; }
        if (ctx->pc != 0x2962C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962C4u; }
        if (ctx->pc != 0x2962C4u) { return; }
    }
    ctx->pc = 0x2962C4u;
label_2962c4:
    // 0x2962c4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2962c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2962c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2962c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2962ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2962d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962d4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2962D4u;
    SET_GPR_U32(ctx, 31, 0x2962DCu);
    ctx->pc = 0x2962D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2962D4u;
            // 0x2962d8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962DCu; }
        if (ctx->pc != 0x2962DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962DCu; }
        if (ctx->pc != 0x2962DCu) { return; }
    }
    ctx->pc = 0x2962DCu;
label_2962dc:
    // 0x2962dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2962dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2962e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2962e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2962e8:
    // 0x2962e8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2962e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2962ec: 0x27a40f50  addiu       $a0, $sp, 0xF50
    ctx->pc = 0x2962ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3920));
    // 0x2962f0: 0x24550f78  addiu       $s5, $v0, 0xF78
    ctx->pc = 0x2962f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3960));
    // 0x2962f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2962f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962f8: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x2962f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2962fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2962fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296300: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x296300u;
    SET_GPR_U32(ctx, 31, 0x296308u);
    ctx->pc = 0x296304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296300u;
            // 0x296304: 0x24070180  addiu       $a3, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296308u; }
        if (ctx->pc != 0x296308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296308u; }
        if (ctx->pc != 0x296308u) { return; }
    }
    ctx->pc = 0x296308u;
label_296308:
    // 0x296308: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x296308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x29630c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296310: 0x244240c0  addiu       $v0, $v0, 0x40C0
    ctx->pc = 0x296310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16576));
    // 0x296314: 0x27a50f50  addiu       $a1, $sp, 0xF50
    ctx->pc = 0x296314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3920));
    // 0x296318: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x296318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29631c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x29631Cu;
    SET_GPR_U32(ctx, 31, 0x296324u);
    ctx->pc = 0x296320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29631Cu;
            // 0x296320: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296324u; }
        if (ctx->pc != 0x296324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296324u; }
        if (ctx->pc != 0x296324u) { return; }
    }
    ctx->pc = 0x296324u;
label_296324:
    // 0x296324: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x296324u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x296328: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x296328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29632c: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x29632cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x296330: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x296330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x296334: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x296334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x296338: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x296338u;
    {
        const bool branch_taken_0x296338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29633Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296338u;
            // 0x29633c: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296338) {
            ctx->pc = 0x2962E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2962e8;
        }
    }
    ctx->pc = 0x296340u;
    // 0x296340: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x296340u;
    SET_GPR_U32(ctx, 31, 0x296348u);
    ctx->pc = 0x296344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296340u;
            // 0x296344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296348u; }
        if (ctx->pc != 0x296348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296348u; }
        if (ctx->pc != 0x296348u) { return; }
    }
    ctx->pc = 0x296348u;
label_296348:
    // 0x296348: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x296348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x29634c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x29634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x296350: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x296350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x296354: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x296354u;
    SET_GPR_U32(ctx, 31, 0x29635Cu);
    ctx->pc = 0x296358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296354u;
            // 0x296358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29635Cu; }
        if (ctx->pc != 0x29635Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29635Cu; }
        if (ctx->pc != 0x29635Cu) { return; }
    }
    ctx->pc = 0x29635Cu;
label_29635c:
    // 0x29635c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29635cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x296360: 0x8c225328  lw          $v0, 0x5328($at)
    ctx->pc = 0x296360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21288)));
    // 0x296364: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x296364u;
    {
        const bool branch_taken_0x296364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296364) {
            ctx->pc = 0x296420u;
            goto label_296420;
        }
    }
    ctx->pc = 0x29636Cu;
    // 0x29636c: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x29636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x296370: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x296370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x296374: 0x8c245320  lw          $a0, 0x5320($at)
    ctx->pc = 0x296374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21280)));
    // 0x296378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29637c: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x29637cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x296380: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x296380u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    // 0x296384: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x296384u;
    SET_GPR_U32(ctx, 31, 0x29638Cu);
    ctx->pc = 0x296388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296384u;
            // 0x296388: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29638Cu; }
        if (ctx->pc != 0x29638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29638Cu; }
        if (ctx->pc != 0x29638Cu) { return; }
    }
    ctx->pc = 0x29638Cu;
label_29638c:
    // 0x29638c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x29638Cu;
    SET_GPR_U32(ctx, 31, 0x296394u);
    ctx->pc = 0x296390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29638Cu;
            // 0x296390: 0xc78c98bc  lwc1        $f12, -0x6744($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296394u; }
        if (ctx->pc != 0x296394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296394u; }
        if (ctx->pc != 0x296394u) { return; }
    }
    ctx->pc = 0x296394u;
label_296394:
    // 0x296394: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x296394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x296398: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x296398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29639c: 0x8c245324  lw          $a0, 0x5324($at)
    ctx->pc = 0x29639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21284)));
    // 0x2963a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2963a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963a4: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x2963a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2963a8: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x2963A8u;
    SET_GPR_U32(ctx, 31, 0x2963B0u);
    ctx->pc = 0x2963ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2963A8u;
            // 0x2963ac: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963B0u; }
        if (ctx->pc != 0x2963B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963B0u; }
        if (ctx->pc != 0x2963B0u) { return; }
    }
    ctx->pc = 0x2963B0u;
label_2963b0:
    // 0x2963b0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2963b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2963b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2963b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963b8: 0x8c245328  lw          $a0, 0x5328($at)
    ctx->pc = 0x2963b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21288)));
    // 0x2963bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2963bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963c0: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2963C0u;
    SET_GPR_U32(ctx, 31, 0x2963C8u);
    ctx->pc = 0x2963C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2963C0u;
            // 0x2963c4: 0x240700fe  addiu       $a3, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963C8u; }
        if (ctx->pc != 0x2963C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963C8u; }
        if (ctx->pc != 0x2963C8u) { return; }
    }
    ctx->pc = 0x2963C8u;
label_2963c8:
    // 0x2963c8: 0x878298cc  lh          $v0, -0x6734($gp)
    ctx->pc = 0x2963c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940876)));
    // 0x2963cc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2963ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2963d0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2963D0u;
    {
        const bool branch_taken_0x2963d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2963D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2963D0u;
            // 0x2963d4: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963d0) {
            ctx->pc = 0x2963ECu;
            goto label_2963ec;
        }
    }
    ctx->pc = 0x2963D8u;
    // 0x2963d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2963d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963dc: 0x8c245328  lw          $a0, 0x5328($at)
    ctx->pc = 0x2963dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21288)));
    // 0x2963e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2963e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2963e4: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2963E4u;
    SET_GPR_U32(ctx, 31, 0x2963ECu);
    ctx->pc = 0x2963E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2963E4u;
            // 0x2963e8: 0x24070116  addiu       $a3, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963ECu; }
        if (ctx->pc != 0x2963ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2963ECu; }
        if (ctx->pc != 0x2963ECu) { return; }
    }
    ctx->pc = 0x2963ECu;
label_2963ec:
    // 0x2963ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2963ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2963f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2963f4:
    // 0x2963f4: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2963f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x2963f8: 0x24425320  addiu       $v0, $v0, 0x5320
    ctx->pc = 0x2963f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
    // 0x2963fc: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x2963fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x296400: 0xc087898  jal         func_21E260
    ctx->pc = 0x296400u;
    SET_GPR_U32(ctx, 31, 0x296408u);
    ctx->pc = 0x296404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296400u;
            // 0x296404: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296408u; }
        if (ctx->pc != 0x296408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296408u; }
        if (ctx->pc != 0x296408u) { return; }
    }
    ctx->pc = 0x296408u;
label_296408:
    // 0x296408: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x296408u;
    SET_GPR_U32(ctx, 31, 0x296410u);
    ctx->pc = 0x29640Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296408u;
            // 0x29640c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296410u; }
        if (ctx->pc != 0x296410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296410u; }
        if (ctx->pc != 0x296410u) { return; }
    }
    ctx->pc = 0x296410u;
label_296410:
    // 0x296410: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x296410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x296414: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x296414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x296418: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x296418u;
    {
        const bool branch_taken_0x296418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296418u;
            // 0x29641c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296418) {
            ctx->pc = 0x2963F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2963f4;
        }
    }
    ctx->pc = 0x296420u;
label_296420:
    // 0x296420: 0x8f8298a0  lw          $v0, -0x6760($gp)
    ctx->pc = 0x296420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
    // 0x296424: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x296424u;
    {
        const bool branch_taken_0x296424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296424u;
            // 0x296428: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296424) {
            ctx->pc = 0x29646Cu;
            goto label_29646c;
        }
    }
    ctx->pc = 0x29642Cu;
    // 0x29642c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x29642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x296430: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x296430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x296434: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x296434u;
    SET_GPR_U32(ctx, 31, 0x29643Cu);
    ctx->pc = 0x296438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296434u;
            // 0x296438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29643Cu; }
        if (ctx->pc != 0x29643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29643Cu; }
        if (ctx->pc != 0x29643Cu) { return; }
    }
    ctx->pc = 0x29643Cu;
label_29643c:
    // 0x29643c: 0xdf828450  ld          $v0, -0x7BB0($gp)
    ctx->pc = 0x29643cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x296440: 0x27a60f88  addiu       $a2, $sp, 0xF88
    ctx->pc = 0x296440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3976));
    // 0x296444: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x296444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x296448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29644c: 0x24a55310  addiu       $a1, $a1, 0x5310
    ctx->pc = 0x29644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21264));
    // 0x296450: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x296450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x296454: 0xc0b5d0c  jal         func_2D7430
    ctx->pc = 0x296454u;
    SET_GPR_U32(ctx, 31, 0x29645Cu);
    ctx->pc = 0x296458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296454u;
            // 0x296458: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7430u;
    if (runtime->hasFunction(0x2D7430u)) {
        auto targetFn = runtime->lookupFunction(0x2D7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29645Cu; }
        if (ctx->pc != 0x29645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29645Cu; }
        if (ctx->pc != 0x29645Cu) { return; }
    }
    ctx->pc = 0x29645Cu;
label_29645c:
    // 0x29645c: 0xc087898  jal         func_21E260
    ctx->pc = 0x29645Cu;
    SET_GPR_U32(ctx, 31, 0x296464u);
    ctx->pc = 0x296460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29645Cu;
            // 0x296460: 0x8f8498a0  lw          $a0, -0x6760($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296464u; }
        if (ctx->pc != 0x296464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296464u; }
        if (ctx->pc != 0x296464u) { return; }
    }
    ctx->pc = 0x296464u;
label_296464:
    // 0x296464: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x296464u;
    SET_GPR_U32(ctx, 31, 0x29646Cu);
    ctx->pc = 0x296468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296464u;
            // 0x296468: 0x8f8498a0  lw          $a0, -0x6760($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29646Cu; }
        if (ctx->pc != 0x29646Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29646Cu; }
        if (ctx->pc != 0x29646Cu) { return; }
    }
    ctx->pc = 0x29646Cu;
label_29646c:
    // 0x29646c: 0x8f82989c  lw          $v0, -0x6764($gp)
    ctx->pc = 0x29646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x296470: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x296470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x296474: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x296474u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296478: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x296478u;
    SET_GPR_U32(ctx, 31, 0x296480u);
    ctx->pc = 0x29647Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296478u;
            // 0x29647c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296480u; }
        if (ctx->pc != 0x296480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296480u; }
        if (ctx->pc != 0x296480u) { return; }
    }
    ctx->pc = 0x296480u;
label_296480:
    // 0x296480: 0x27a40f60  addiu       $a0, $sp, 0xF60
    ctx->pc = 0x296480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3936));
    // 0x296484: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x296484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x296488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29648c: 0x24070092  addiu       $a3, $zero, 0x92
    ctx->pc = 0x29648cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x296490: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x296490u;
    SET_GPR_U32(ctx, 31, 0x296498u);
    ctx->pc = 0x296494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296490u;
            // 0x296494: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296498u; }
        if (ctx->pc != 0x296498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296498u; }
        if (ctx->pc != 0x296498u) { return; }
    }
    ctx->pc = 0x296498u;
label_296498:
    // 0x296498: 0x8f84989c  lw          $a0, -0x6764($gp)
    ctx->pc = 0x296498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940828)));
    // 0x29649c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x29649cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2964a0: 0x3c0341b0  lui         $v1, 0x41B0
    ctx->pc = 0x2964a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16816 << 16));
    // 0x2964a4: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x2964a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x2964a8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2964a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2964ac: 0x27a50f60  addiu       $a1, $sp, 0xF60
    ctx->pc = 0x2964acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3936));
    // 0x2964b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2964b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2964b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2964b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964b8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2964b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964bc: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2964BCu;
    SET_GPR_U32(ctx, 31, 0x2964C4u);
    ctx->pc = 0x2964C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2964BCu;
            // 0x2964c0: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2964C4u; }
        if (ctx->pc != 0x2964C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2964C4u; }
        if (ctx->pc != 0x2964C4u) { return; }
    }
    ctx->pc = 0x2964C4u;
label_2964c4:
    // 0x2964c4: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2964c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2964c8: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x2964C8u;
    {
        const bool branch_taken_0x2964c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2964C8u;
            // 0x2964cc: 0x27a40c70  addiu       $a0, $sp, 0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964c8) {
            ctx->pc = 0x29677Cu;
            goto label_29677c;
        }
    }
    ctx->pc = 0x2964D0u;
    // 0x2964d0: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2964D0u;
    SET_GPR_U32(ctx, 31, 0x2964D8u);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2964D8u; }
        if (ctx->pc != 0x2964D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2964D8u; }
        if (ctx->pc != 0x2964D8u) { return; }
    }
    ctx->pc = 0x2964D8u;
label_2964d8:
    // 0x2964d8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2964d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2964dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2964dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2964e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964e4: 0xc0887b0  jal         func_221EC0
    ctx->pc = 0x2964E4u;
    SET_GPR_U32(ctx, 31, 0x2964ECu);
    ctx->pc = 0x2964E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2964E4u;
            // 0x2964e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2964ECu; }
        if (ctx->pc != 0x2964ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2964ECu; }
        if (ctx->pc != 0x2964ECu) { return; }
    }
    ctx->pc = 0x2964ECu;
label_2964ec:
    // 0x2964ec: 0x838398dc  lb          $v1, -0x6724($gp)
    ctx->pc = 0x2964ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x2964f0: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2964F0u;
    {
        const bool branch_taken_0x2964f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2964F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2964F0u;
            // 0x2964f4: 0x24100064  addiu       $s0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964f0) {
            ctx->pc = 0x296624u;
            goto label_296624;
        }
    }
    ctx->pc = 0x2964F8u;
    // 0x2964f8: 0x8f8598d8  lw          $a1, -0x6728($gp)
    ctx->pc = 0x2964f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x2964fc: 0xc0c6a00  jal         func_31A800
    ctx->pc = 0x2964FCu;
    SET_GPR_U32(ctx, 31, 0x296504u);
    ctx->pc = 0x296500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2964FCu;
            // 0x296500: 0x8f849894  lw          $a0, -0x676C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A800u;
    if (runtime->hasFunction(0x31A800u)) {
        auto targetFn = runtime->lookupFunction(0x31A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296504u; }
        if (ctx->pc != 0x296504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetQuestInfo__13CQuestManagerFi_0x31a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296504u; }
        if (ctx->pc != 0x296504u) { return; }
    }
    ctx->pc = 0x296504u;
label_296504:
    // 0x296504: 0x8f849898  lw          $a0, -0x6768($gp)
    ctx->pc = 0x296504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940824)));
    // 0x296508: 0x8f8598d8  lw          $a1, -0x6728($gp)
    ctx->pc = 0x296508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x29650c: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x29650Cu;
    SET_GPR_U32(ctx, 31, 0x296514u);
    ctx->pc = 0x296510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29650Cu;
            // 0x296510: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AAB0u;
    if (runtime->hasFunction(0x31AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x31AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296514u; }
        if (ctx->pc != 0x296514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayQuestData__10CQuestDataFi_0x31aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296514u; }
        if (ctx->pc != 0x296514u) { return; }
    }
    ctx->pc = 0x296514u;
label_296514:
    // 0x296514: 0x8f9398d8  lw          $s3, -0x6728($gp)
    ctx->pc = 0x296514u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x296518: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x296518u;
    {
        const bool branch_taken_0x296518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296518u;
            // 0x29651c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296518) {
            ctx->pc = 0x296610u;
            goto label_296610;
        }
    }
    ctx->pc = 0x296520u;
label_296520:
    // 0x296520: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x296520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_296524:
    // 0x296524: 0x0  nop
    ctx->pc = 0x296524u;
    // NOP
    // 0x296528: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x296528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x29652c: 0x24450d20  addiu       $a1, $v0, 0xD20
    ctx->pc = 0x29652cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
    // 0x296530: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x296530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x296534: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x296534u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x296538: 0x28820018  slti        $v0, $a0, 0x18
    ctx->pc = 0x296538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x29653c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x29653cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x296540: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x296540u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x296544: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x296544u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x296548: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x296548u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x29654c: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x29654cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x296550: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x296550u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x296554: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x296554u;
    {
        const bool branch_taken_0x296554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296554u;
            // 0x296558: 0xa0a30007  sb          $v1, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296554) {
            ctx->pc = 0x296524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296524;
        }
    }
    ctx->pc = 0x29655Cu;
    // 0x29655c: 0x27a40d38  addiu       $a0, $sp, 0xD38
    ctx->pc = 0x29655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3384));
    // 0x296560: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x296560u;
    SET_GPR_U32(ctx, 31, 0x296568u);
    ctx->pc = 0x296564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296560u;
            // 0x296564: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296568u; }
        if (ctx->pc != 0x296568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296568u; }
        if (ctx->pc != 0x296568u) { return; }
    }
    ctx->pc = 0x296568u;
label_296568:
    // 0x296568: 0x8f8298d8  lw          $v0, -0x6728($gp)
    ctx->pc = 0x296568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x29656c: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29656Cu;
    {
        const bool branch_taken_0x29656c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x296570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29656Cu;
            // 0x296570: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29656c) {
            ctx->pc = 0x296578u;
            goto label_296578;
        }
    }
    ctx->pc = 0x296574u;
    // 0x296574: 0xa3a20d21  sb          $v0, 0xD21($sp)
    ctx->pc = 0x296574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3361), (uint8_t)GPR_U32(ctx, 2));
label_296578:
    // 0x296578: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x296578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x29657c: 0xa3a20d26  sb          $v0, 0xD26($sp)
    ctx->pc = 0x29657cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3366), (uint8_t)GPR_U32(ctx, 2));
    // 0x296580: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x296580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x296584: 0xa3a20d28  sb          $v0, 0xD28($sp)
    ctx->pc = 0x296584u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3368), (uint8_t)GPR_U32(ctx, 2));
    // 0x296588: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x296588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x29658c: 0xa3a20d2a  sb          $v0, 0xD2A($sp)
    ctx->pc = 0x29658cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3370), (uint8_t)GPR_U32(ctx, 2));
    // 0x296590: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x296590u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x296594: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296594u;
    {
        const bool branch_taken_0x296594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296594u;
            // 0x296598: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296594) {
            ctx->pc = 0x2965A4u;
            goto label_2965a4;
        }
    }
    ctx->pc = 0x29659Cu;
    // 0x29659c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29659Cu;
    {
        const bool branch_taken_0x29659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2965A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29659Cu;
            // 0x2965a0: 0xa3a20d27  sb          $v0, 0xD27($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3367), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29659c) {
            ctx->pc = 0x2965B0u;
            goto label_2965b0;
        }
    }
    ctx->pc = 0x2965A4u;
label_2965a4:
    // 0x2965a4: 0x0  nop
    ctx->pc = 0x2965a4u;
    // NOP
    // 0x2965a8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2965a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2965ac: 0xa3a20d27  sb          $v0, 0xD27($sp)
    ctx->pc = 0x2965acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3367), (uint8_t)GPR_U32(ctx, 2));
label_2965b0:
    // 0x2965b0: 0x82420001  lb          $v0, 0x1($s2)
    ctx->pc = 0x2965b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2965b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2965B4u;
    {
        const bool branch_taken_0x2965b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2965B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2965B4u;
            // 0x2965b8: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2965b4) {
            ctx->pc = 0x2965C4u;
            goto label_2965c4;
        }
    }
    ctx->pc = 0x2965BCu;
    // 0x2965bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2965BCu;
    {
        const bool branch_taken_0x2965bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2965C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2965BCu;
            // 0x2965c0: 0xa3a20d29  sb          $v0, 0xD29($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3369), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2965bc) {
            ctx->pc = 0x2965D0u;
            goto label_2965d0;
        }
    }
    ctx->pc = 0x2965C4u;
label_2965c4:
    // 0x2965c4: 0x0  nop
    ctx->pc = 0x2965c4u;
    // NOP
    // 0x2965c8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2965c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2965cc: 0xa3a20d29  sb          $v0, 0xD29($sp)
    ctx->pc = 0x2965ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3369), (uint8_t)GPR_U32(ctx, 2));
label_2965d0:
    // 0x2965d0: 0x27a40c70  addiu       $a0, $sp, 0xC70
    ctx->pc = 0x2965d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
    // 0x2965d4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2965D4u;
    SET_GPR_U32(ctx, 31, 0x2965DCu);
    ctx->pc = 0x2965D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2965D4u;
            // 0x2965d8: 0x27a50d20  addiu       $a1, $sp, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2965DCu; }
        if (ctx->pc != 0x2965DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2965DCu; }
        if (ctx->pc != 0x2965DCu) { return; }
    }
    ctx->pc = 0x2965DCu;
label_2965dc:
    // 0x2965dc: 0x27a40c70  addiu       $a0, $sp, 0xC70
    ctx->pc = 0x2965dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
    // 0x2965e0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x2965e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2965e4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2965E4u;
    SET_GPR_U32(ctx, 31, 0x2965ECu);
    ctx->pc = 0x2965E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2965E4u;
            // 0x2965e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2965ECu; }
        if (ctx->pc != 0x2965ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2965ECu; }
        if (ctx->pc != 0x2965ECu) { return; }
    }
    ctx->pc = 0x2965ECu;
label_2965ec:
    // 0x2965ec: 0x8fa60d04  lw          $a2, 0xD04($sp)
    ctx->pc = 0x2965ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3332)));
    // 0x2965f0: 0x27a40c70  addiu       $a0, $sp, 0xC70
    ctx->pc = 0x2965f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
    // 0x2965f4: 0x8fa70d08  lw          $a3, 0xD08($sp)
    ctx->pc = 0x2965f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3336)));
    // 0x2965f8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2965F8u;
    SET_GPR_U32(ctx, 31, 0x296600u);
    ctx->pc = 0x2965FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2965F8u;
            // 0x2965fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296600u; }
        if (ctx->pc != 0x296600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296600u; }
        if (ctx->pc != 0x296600u) { return; }
    }
    ctx->pc = 0x296600u;
label_296600:
    // 0x296600: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x296600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x296604: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x296604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x296608: 0x26310394  addiu       $s1, $s1, 0x394
    ctx->pc = 0x296608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 916));
    // 0x29660c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29660cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_296610:
    // 0x296610: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x296610u;
    SET_GPR_U32(ctx, 31, 0x296618u);
    ctx->pc = 0x296614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296610u;
            // 0x296614: 0x8f8498e0  lw          $a0, -0x6720($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294D40u;
    if (runtime->hasFunction(0x294D40u)) {
        auto targetFn = runtime->lookupFunction(0x294D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296618u; }
        if (ctx->pc != 0x296618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMax__14CMenuQuestViewFv_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296618u; }
        if (ctx->pc != 0x296618u) { return; }
    }
    ctx->pc = 0x296618u;
label_296618:
    // 0x296618: 0x262182a  slt         $v1, $s3, $v0
    ctx->pc = 0x296618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29661c: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x29661Cu;
    {
        const bool branch_taken_0x29661c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29661Cu;
            // 0x296620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29661c) {
            ctx->pc = 0x296520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296520;
        }
    }
    ctx->pc = 0x296624u;
label_296624:
    // 0x296624: 0x0  nop
    ctx->pc = 0x296624u;
    // NOP
    // 0x296628: 0x838498dc  lb          $a0, -0x6724($gp)
    ctx->pc = 0x296628u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x29662c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296630: 0x14830052  bne         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x296630u;
    {
        const bool branch_taken_0x296630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296630) {
            ctx->pc = 0x29677Cu;
            goto label_29677c;
        }
    }
    ctx->pc = 0x296638u;
    // 0x296638: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x296638u;
    {
        const bool branch_taken_0x296638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296638u;
            // 0x29663c: 0x8f9198d8  lw          $s1, -0x6728($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296638) {
            ctx->pc = 0x296760u;
            goto label_296760;
        }
    }
    ctx->pc = 0x296640u;
label_296640:
    // 0x296640: 0xc07fcb0  jal         func_1FF2C0
    ctx->pc = 0x296640u;
    SET_GPR_U32(ctx, 31, 0x296648u);
    ctx->pc = 0x296644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296640u;
            // 0x296644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF2C0u;
    if (runtime->hasFunction(0x1FF2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296648u; }
        if (ctx->pc != 0x296648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopDataTableIndex__Fi_0x1ff2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296648u; }
        if (ctx->pc != 0x296648u) { return; }
    }
    ctx->pc = 0x296648u;
label_296648:
    // 0x296648: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x296648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29664c: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x29664Cu;
    {
        const bool branch_taken_0x29664c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29664c) {
            ctx->pc = 0x29677Cu;
            goto label_29677c;
        }
    }
    ctx->pc = 0x296654u;
    // 0x296654: 0x8f8498d0  lw          $a0, -0x6730($gp)
    ctx->pc = 0x296654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940880)));
    // 0x296658: 0xc07fd28  jal         func_1FF4A0
    ctx->pc = 0x296658u;
    SET_GPR_U32(ctx, 31, 0x296660u);
    ctx->pc = 0x29665Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296658u;
            // 0x29665c: 0x86450000  lh          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A0u;
    if (runtime->hasFunction(0x1FF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296660u; }
        if (ctx->pc != 0x296660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296660u; }
        if (ctx->pc != 0x296660u) { return; }
    }
    ctx->pc = 0x296660u;
label_296660:
    // 0x296660: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x296660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296664: 0x12600045  beqz        $s3, . + 4 + (0x45 << 2)
    ctx->pc = 0x296664u;
    {
        const bool branch_taken_0x296664 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x296668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296664u;
            // 0x296668: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296664) {
            ctx->pc = 0x29677Cu;
            goto label_29677c;
        }
    }
    ctx->pc = 0x29666Cu;
    // 0x29666c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x29666cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_296670:
    // 0x296670: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x296670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x296674: 0x24450d20  addiu       $a1, $v0, 0xD20
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
    // 0x296678: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x296678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29667c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x29667cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x296680: 0x28820018  slti        $v0, $a0, 0x18
    ctx->pc = 0x296680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x296684: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x296684u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x296688: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x296688u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29668c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x29668cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x296690: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x296690u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x296694: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x296694u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x296698: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x296698u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x29669c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29669Cu;
    {
        const bool branch_taken_0x29669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2966A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29669Cu;
            // 0x2966a0: 0xa0a30007  sb          $v1, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29669c) {
            ctx->pc = 0x296670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296670;
        }
    }
    ctx->pc = 0x2966A4u;
    // 0x2966a4: 0x8f8298d8  lw          $v0, -0x6728($gp)
    ctx->pc = 0x2966a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x2966a8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2966A8u;
    {
        const bool branch_taken_0x2966a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2966ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2966A8u;
            // 0x2966ac: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966a8) {
            ctx->pc = 0x2966B4u;
            goto label_2966b4;
        }
    }
    ctx->pc = 0x2966B0u;
    // 0x2966b0: 0xa3a20d21  sb          $v0, 0xD21($sp)
    ctx->pc = 0x2966b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3361), (uint8_t)GPR_U32(ctx, 2));
label_2966b4:
    // 0x2966b4: 0x0  nop
    ctx->pc = 0x2966b4u;
    // NOP
    // 0x2966b8: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x2966b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2966bc: 0xa3a20d26  sb          $v0, 0xD26($sp)
    ctx->pc = 0x2966bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3366), (uint8_t)GPR_U32(ctx, 2));
    // 0x2966c0: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2966c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2966c4: 0xa3a20d28  sb          $v0, 0xD28($sp)
    ctx->pc = 0x2966c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3368), (uint8_t)GPR_U32(ctx, 2));
    // 0x2966c8: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2966cc: 0xa3a20d2a  sb          $v0, 0xD2A($sp)
    ctx->pc = 0x2966ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3370), (uint8_t)GPR_U32(ctx, 2));
    // 0x2966d0: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x2966d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2966d4: 0xc07fe84  jal         func_1FFA10
    ctx->pc = 0x2966D4u;
    SET_GPR_U32(ctx, 31, 0x2966DCu);
    ctx->pc = 0x2966D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2966D4u;
            // 0x2966d8: 0x27a50e20  addiu       $a1, $sp, 0xE20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA10u;
    if (runtime->hasFunction(0x1FFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966DCu; }
        if (ctx->pc != 0x2966DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoNameStr__FiPc_0x1ffa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966DCu; }
        if (ctx->pc != 0x2966DCu) { return; }
    }
    ctx->pc = 0x2966DCu;
label_2966dc:
    // 0x2966dc: 0x27a40d38  addiu       $a0, $sp, 0xD38
    ctx->pc = 0x2966dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3384));
    // 0x2966e0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2966E0u;
    SET_GPR_U32(ctx, 31, 0x2966E8u);
    ctx->pc = 0x2966E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2966E0u;
            // 0x2966e4: 0x27a50e20  addiu       $a1, $sp, 0xE20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966E8u; }
        if (ctx->pc != 0x2966E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966E8u; }
        if (ctx->pc != 0x2966E8u) { return; }
    }
    ctx->pc = 0x2966E8u;
label_2966e8:
    // 0x2966e8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2966e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2966ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2966ECu;
    {
        const bool branch_taken_0x2966ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2966F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2966ECu;
            // 0x2966f0: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966ec) {
            ctx->pc = 0x2966FCu;
            goto label_2966fc;
        }
    }
    ctx->pc = 0x2966F4u;
    // 0x2966f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2966F4u;
    {
        const bool branch_taken_0x2966f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2966F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2966F4u;
            // 0x2966f8: 0xa3a20d27  sb          $v0, 0xD27($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3367), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2966f4) {
            ctx->pc = 0x296708u;
            goto label_296708;
        }
    }
    ctx->pc = 0x2966FCu;
label_2966fc:
    // 0x2966fc: 0x0  nop
    ctx->pc = 0x2966fcu;
    // NOP
    // 0x296700: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x296700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x296704: 0xa3a20d27  sb          $v0, 0xD27($sp)
    ctx->pc = 0x296704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3367), (uint8_t)GPR_U32(ctx, 2));
label_296708:
    // 0x296708: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x296708u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x29670c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29670Cu;
    {
        const bool branch_taken_0x29670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29670Cu;
            // 0x296710: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29670c) {
            ctx->pc = 0x29671Cu;
            goto label_29671c;
        }
    }
    ctx->pc = 0x296714u;
    // 0x296714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x296714u;
    {
        const bool branch_taken_0x296714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296714u;
            // 0x296718: 0xa3a20d29  sb          $v0, 0xD29($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3369), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296714) {
            ctx->pc = 0x296728u;
            goto label_296728;
        }
    }
    ctx->pc = 0x29671Cu;
label_29671c:
    // 0x29671c: 0x0  nop
    ctx->pc = 0x29671cu;
    // NOP
    // 0x296720: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x296720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x296724: 0xa3a20d29  sb          $v0, 0xD29($sp)
    ctx->pc = 0x296724u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3369), (uint8_t)GPR_U32(ctx, 2));
label_296728:
    // 0x296728: 0x27a40c70  addiu       $a0, $sp, 0xC70
    ctx->pc = 0x296728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
    // 0x29672c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x29672Cu;
    SET_GPR_U32(ctx, 31, 0x296734u);
    ctx->pc = 0x296730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29672Cu;
            // 0x296730: 0x27a50d20  addiu       $a1, $sp, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296734u; }
        if (ctx->pc != 0x296734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296734u; }
        if (ctx->pc != 0x296734u) { return; }
    }
    ctx->pc = 0x296734u;
label_296734:
    // 0x296734: 0x27a40c70  addiu       $a0, $sp, 0xC70
    ctx->pc = 0x296734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
    // 0x296738: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x296738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29673c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x29673Cu;
    SET_GPR_U32(ctx, 31, 0x296744u);
    ctx->pc = 0x296740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29673Cu;
            // 0x296740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296744u; }
        if (ctx->pc != 0x296744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296744u; }
        if (ctx->pc != 0x296744u) { return; }
    }
    ctx->pc = 0x296744u;
label_296744:
    // 0x296744: 0x8fa60d04  lw          $a2, 0xD04($sp)
    ctx->pc = 0x296744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3332)));
    // 0x296748: 0x27a40c70  addiu       $a0, $sp, 0xC70
    ctx->pc = 0x296748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
    // 0x29674c: 0x8fa70d08  lw          $a3, 0xD08($sp)
    ctx->pc = 0x29674cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3336)));
    // 0x296750: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x296750u;
    SET_GPR_U32(ctx, 31, 0x296758u);
    ctx->pc = 0x296754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296750u;
            // 0x296754: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296758u; }
        if (ctx->pc != 0x296758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296758u; }
        if (ctx->pc != 0x296758u) { return; }
    }
    ctx->pc = 0x296758u;
label_296758:
    // 0x296758: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x296758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x29675c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29675cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_296760:
    // 0x296760: 0x8f8398d8  lw          $v1, -0x6728($gp)
    ctx->pc = 0x296760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x296764: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x296764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x296768: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x296768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29676c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x29676Cu;
    {
        const bool branch_taken_0x29676c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x296770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29676Cu;
            // 0x296770: 0x2a230035  slti        $v1, $s1, 0x35 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)53) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29676c) {
            ctx->pc = 0x29677Cu;
            goto label_29677c;
        }
    }
    ctx->pc = 0x296774u;
    // 0x296774: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x296774u;
    {
        const bool branch_taken_0x296774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296774) {
            ctx->pc = 0x296640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296640;
        }
    }
    ctx->pc = 0x29677Cu;
label_29677c:
    // 0x29677c: 0x0  nop
    ctx->pc = 0x29677cu;
    // NOP
label_296780:
    // 0x296780: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x296780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x296784: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x296784u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296788: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x296788u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29678c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29678cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296790: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x296790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296794: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x296794u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296798: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29679c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29679cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2967a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2967a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2967a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2967a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2967a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2967A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2967ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967A8u;
            // 0x2967ac: 0x27bd0f90  addiu       $sp, $sp, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2967B0u;
}
