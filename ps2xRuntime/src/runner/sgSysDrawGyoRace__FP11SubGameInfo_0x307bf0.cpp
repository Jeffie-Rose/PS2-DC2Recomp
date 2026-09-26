#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgSysDrawGyoRace__FP11SubGameInfo
// Address: 0x307bf0 - 0x308e3c
void sgSysDrawGyoRace__FP11SubGameInfo_0x307bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgSysDrawGyoRace__FP11SubGameInfo_0x307bf0");
#endif

    switch (ctx->pc) {
        case 0x307c28u: goto label_307c28;
        case 0x307c38u: goto label_307c38;
        case 0x307c40u: goto label_307c40;
        case 0x307c48u: goto label_307c48;
        case 0x307c50u: goto label_307c50;
        case 0x307c88u: goto label_307c88;
        case 0x307c9cu: goto label_307c9c;
        case 0x307cb8u: goto label_307cb8;
        case 0x307cd0u: goto label_307cd0;
        case 0x307cf0u: goto label_307cf0;
        case 0x307cf8u: goto label_307cf8;
        case 0x307d10u: goto label_307d10;
        case 0x307db4u: goto label_307db4;
        case 0x307e10u: goto label_307e10;
        case 0x307e3cu: goto label_307e3c;
        case 0x307e58u: goto label_307e58;
        case 0x307e80u: goto label_307e80;
        case 0x307eacu: goto label_307eac;
        case 0x307edcu: goto label_307edc;
        case 0x307f08u: goto label_307f08;
        case 0x307f28u: goto label_307f28;
        case 0x307f58u: goto label_307f58;
        case 0x307f80u: goto label_307f80;
        case 0x307fb0u: goto label_307fb0;
        case 0x307fc8u: goto label_307fc8;
        case 0x307fe0u: goto label_307fe0;
        case 0x308000u: goto label_308000;
        case 0x308018u: goto label_308018;
        case 0x308030u: goto label_308030;
        case 0x308050u: goto label_308050;
        case 0x308068u: goto label_308068;
        case 0x308080u: goto label_308080;
        case 0x3080a0u: goto label_3080a0;
        case 0x3080b8u: goto label_3080b8;
        case 0x3080d0u: goto label_3080d0;
        case 0x3080f0u: goto label_3080f0;
        case 0x308108u: goto label_308108;
        case 0x308120u: goto label_308120;
        case 0x308140u: goto label_308140;
        case 0x30816cu: goto label_30816c;
        case 0x308184u: goto label_308184;
        case 0x3081a4u: goto label_3081a4;
        case 0x3081bcu: goto label_3081bc;
        case 0x3081d4u: goto label_3081d4;
        case 0x3081f4u: goto label_3081f4;
        case 0x30820cu: goto label_30820c;
        case 0x308224u: goto label_308224;
        case 0x308244u: goto label_308244;
        case 0x30825cu: goto label_30825c;
        case 0x308274u: goto label_308274;
        case 0x308294u: goto label_308294;
        case 0x3082acu: goto label_3082ac;
        case 0x3082c4u: goto label_3082c4;
        case 0x3082e4u: goto label_3082e4;
        case 0x3082fcu: goto label_3082fc;
        case 0x308314u: goto label_308314;
        case 0x308334u: goto label_308334;
        case 0x308398u: goto label_308398;
        case 0x3083d4u: goto label_3083d4;
        case 0x308414u: goto label_308414;
        case 0x308450u: goto label_308450;
        case 0x30849cu: goto label_30849c;
        case 0x3084dcu: goto label_3084dc;
        case 0x308524u: goto label_308524;
        case 0x30853cu: goto label_30853c;
        case 0x30855cu: goto label_30855c;
        case 0x308574u: goto label_308574;
        case 0x30858cu: goto label_30858c;
        case 0x3085acu: goto label_3085ac;
        case 0x3085c4u: goto label_3085c4;
        case 0x3085dcu: goto label_3085dc;
        case 0x3085fcu: goto label_3085fc;
        case 0x308614u: goto label_308614;
        case 0x30862cu: goto label_30862c;
        case 0x30864cu: goto label_30864c;
        case 0x308664u: goto label_308664;
        case 0x30867cu: goto label_30867c;
        case 0x30869cu: goto label_30869c;
        case 0x3086c0u: goto label_3086c0;
        case 0x3086f4u: goto label_3086f4;
        case 0x308714u: goto label_308714;
        case 0x30872cu: goto label_30872c;
        case 0x308754u: goto label_308754;
        case 0x308774u: goto label_308774;
        case 0x30878cu: goto label_30878c;
        case 0x3087b4u: goto label_3087b4;
        case 0x3087d4u: goto label_3087d4;
        case 0x3087ecu: goto label_3087ec;
        case 0x308814u: goto label_308814;
        case 0x308834u: goto label_308834;
        case 0x30884cu: goto label_30884c;
        case 0x308874u: goto label_308874;
        case 0x308894u: goto label_308894;
        case 0x3088f4u: goto label_3088f4;
        case 0x308930u: goto label_308930;
        case 0x308970u: goto label_308970;
        case 0x308998u: goto label_308998;
        case 0x3089d4u: goto label_3089d4;
        case 0x308a0cu: goto label_308a0c;
        case 0x308a30u: goto label_308a30;
        case 0x308a50u: goto label_308a50;
        case 0x308a68u: goto label_308a68;
        case 0x308a8cu: goto label_308a8c;
        case 0x308aacu: goto label_308aac;
        case 0x308ac4u: goto label_308ac4;
        case 0x308ae8u: goto label_308ae8;
        case 0x308b08u: goto label_308b08;
        case 0x308b20u: goto label_308b20;
        case 0x308b44u: goto label_308b44;
        case 0x308b64u: goto label_308b64;
        case 0x308b7cu: goto label_308b7c;
        case 0x308ba0u: goto label_308ba0;
        case 0x308bc0u: goto label_308bc0;
        case 0x308bd8u: goto label_308bd8;
        case 0x308c20u: goto label_308c20;
        case 0x308c40u: goto label_308c40;
        case 0x308c70u: goto label_308c70;
        case 0x308c88u: goto label_308c88;
        case 0x308cb0u: goto label_308cb0;
        case 0x308cc8u: goto label_308cc8;
        case 0x308ce8u: goto label_308ce8;
        case 0x308d00u: goto label_308d00;
        case 0x308d18u: goto label_308d18;
        case 0x308d38u: goto label_308d38;
        case 0x308d54u: goto label_308d54;
        case 0x308da0u: goto label_308da0;
        case 0x308dc0u: goto label_308dc0;
        case 0x308dd8u: goto label_308dd8;
        case 0x308df0u: goto label_308df0;
        case 0x308e10u: goto label_308e10;
        default: break;
    }

    ctx->pc = 0x307bf0u;

    // 0x307bf0: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x307bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
    // 0x307bf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x307bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x307bf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x307bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x307bfc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x307bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x307c00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x307c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x307c04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x307c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x307c08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x307c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x307c0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x307c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x307c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x307c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x307c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x307c18: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x307c18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x307c1c: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x307c1cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307c20: 0xc0659dc  jal         func_196770
    ctx->pc = 0x307C20u;
    SET_GPR_U32(ctx, 31, 0x307C28u);
    ctx->pc = 0x307C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C20u;
            // 0x307c24: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C28u; }
        if (ctx->pc != 0x307C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C28u; }
        if (ctx->pc != 0x307C28u) { return; }
    }
    ctx->pc = 0x307C28u;
label_307c28:
    // 0x307c28: 0x8c451b2c  lw          $a1, 0x1B2C($v0)
    ctx->pc = 0x307c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6956)));
    // 0x307c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c30: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x307C30u;
    SET_GPR_U32(ctx, 31, 0x307C38u);
    ctx->pc = 0x307C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C30u;
            // 0x307c34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C38u; }
        if (ctx->pc != 0x307C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C38u; }
        if (ctx->pc != 0x307C38u) { return; }
    }
    ctx->pc = 0x307C38u;
label_307c38:
    // 0x307c38: 0xc0c2390  jal         func_308E40
    ctx->pc = 0x307C38u;
    SET_GPR_U32(ctx, 31, 0x307C40u);
    ctx->pc = 0x307C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C38u;
            // 0x307c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308E40u;
    if (runtime->hasFunction(0x308E40u)) {
        auto targetFn = runtime->lookupFunction(0x308E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C40u; }
        if (ctx->pc != 0x307C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Jikkyou__FP11SubGameInfo_0x308e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C40u; }
        if (ctx->pc != 0x307C40u) { return; }
    }
    ctx->pc = 0x307C40u;
label_307c40:
    // 0x307c40: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x307C40u;
    SET_GPR_U32(ctx, 31, 0x307C48u);
    ctx->pc = 0x307C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C40u;
            // 0x307c44: 0x8f84a170  lw          $a0, -0x5E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C48u; }
        if (ctx->pc != 0x307C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C48u; }
        if (ctx->pc != 0x307C48u) { return; }
    }
    ctx->pc = 0x307C48u;
label_307c48:
    // 0x307c48: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x307C48u;
    SET_GPR_U32(ctx, 31, 0x307C50u);
    ctx->pc = 0x307C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C48u;
            // 0x307c4c: 0x8f84a170  lw          $a0, -0x5E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C50u; }
        if (ctx->pc != 0x307C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C50u; }
        if (ctx->pc != 0x307C50u) { return; }
    }
    ctx->pc = 0x307C50u;
label_307c50:
    // 0x307c50: 0xc781a140  lwc1        $f1, -0x5EC0($gp)
    ctx->pc = 0x307c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307c54: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x307c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x307c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x307c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307c5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x307c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307c60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x307c60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x307c64: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x307c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307c68: 0x0  nop
    ctx->pc = 0x307c68u;
    // NOP
    // 0x307c6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x307C6Cu;
    {
        const bool branch_taken_0x307c6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307C6Cu;
            // 0x307c70: 0xe780a140  swc1        $f0, -0x5EC0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c6c) {
            ctx->pc = 0x307C78u;
            goto label_307c78;
        }
    }
    ctx->pc = 0x307C74u;
    // 0x307c74: 0xe782a140  swc1        $f2, -0x5EC0($gp)
    ctx->pc = 0x307c74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943040), bits); }
label_307c78:
    // 0x307c78: 0x8f85a178  lw          $a1, -0x5E88($gp)
    ctx->pc = 0x307c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
    // 0x307c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c80: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x307C80u;
    SET_GPR_U32(ctx, 31, 0x307C88u);
    ctx->pc = 0x307C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C80u;
            // 0x307c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C88u; }
        if (ctx->pc != 0x307C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C88u; }
        if (ctx->pc != 0x307C88u) { return; }
    }
    ctx->pc = 0x307C88u;
label_307c88:
    // 0x307c88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x307c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x307c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c90: 0x24a523a0  addiu       $a1, $a1, 0x23A0
    ctx->pc = 0x307c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9120));
    // 0x307c94: 0xc04b414  jal         func_12D050
    ctx->pc = 0x307C94u;
    SET_GPR_U32(ctx, 31, 0x307C9Cu);
    ctx->pc = 0x307C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307C94u;
            // 0x307c98: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C9Cu; }
        if (ctx->pc != 0x307C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307C9Cu; }
        if (ctx->pc != 0x307C9Cu) { return; }
    }
    ctx->pc = 0x307C9Cu;
label_307c9c:
    // 0x307c9c: 0xaf82a130  sw          $v0, -0x5ED0($gp)
    ctx->pc = 0x307c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943024), GPR_U32(ctx, 2));
    // 0x307ca0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x307ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x307ca4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x307ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x307ca8: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x307ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x307cac: 0x240701d6  addiu       $a3, $zero, 0x1D6
    ctx->pc = 0x307cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
    // 0x307cb0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x307CB0u;
    SET_GPR_U32(ctx, 31, 0x307CB8u);
    ctx->pc = 0x307CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307CB0u;
            // 0x307cb4: 0x24080054  addiu       $t0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307CB8u; }
        if (ctx->pc != 0x307CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307CB8u; }
        if (ctx->pc != 0x307CB8u) { return; }
    }
    ctx->pc = 0x307CB8u;
label_307cb8:
    // 0x307cb8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x307cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cc4: 0x240701d6  addiu       $a3, $zero, 0x1D6
    ctx->pc = 0x307cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
    // 0x307cc8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x307CC8u;
    SET_GPR_U32(ctx, 31, 0x307CD0u);
    ctx->pc = 0x307CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307CC8u;
            // 0x307ccc: 0x24080054  addiu       $t0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307CD0u; }
        if (ctx->pc != 0x307CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307CD0u; }
        if (ctx->pc != 0x307CD0u) { return; }
    }
    ctx->pc = 0x307CD0u;
label_307cd0:
    // 0x307cd0: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x307cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x307cd4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x307cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307cd8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x307cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x307cdc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x307cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307ce0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x307ce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ce4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x307ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ce8: 0xc088004  jal         func_220010
    ctx->pc = 0x307CE8u;
    SET_GPR_U32(ctx, 31, 0x307CF0u);
    ctx->pc = 0x307CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307CE8u;
            // 0x307cec: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307CF0u; }
        if (ctx->pc != 0x307CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307CF0u; }
        if (ctx->pc != 0x307CF0u) { return; }
    }
    ctx->pc = 0x307CF0u;
label_307cf0:
    // 0x307cf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x307cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307cf8:
    // 0x307cf8: 0xc78ca114  lwc1        $f12, -0x5EEC($gp)
    ctx->pc = 0x307cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x307cfc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x307cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x307d00: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x307d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
    // 0x307d04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x307d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d08: 0xc0c768c  jal         func_31DA30
    ctx->pc = 0x307D08u;
    SET_GPR_U32(ctx, 31, 0x307D10u);
    ctx->pc = 0x307D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307D08u;
            // 0x307d0c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D10u; }
        if (ctx->pc != 0x307D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307D10u; }
        if (ctx->pc != 0x307D10u) { return; }
    }
    ctx->pc = 0x307D10u;
label_307d10:
    // 0x307d10: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x307d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307d14: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x307d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x307d18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x307d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307d1c: 0x0  nop
    ctx->pc = 0x307d1cu;
    // NOP
    // 0x307d20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x307d20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307d24: 0x0  nop
    ctx->pc = 0x307d24u;
    // NOP
    // 0x307d28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x307D28u;
    {
        const bool branch_taken_0x307d28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x307d28) {
            ctx->pc = 0x307D34u;
            goto label_307d34;
        }
    }
    ctx->pc = 0x307D30u;
    // 0x307d30: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x307d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_307d34:
    // 0x307d34: 0x0  nop
    ctx->pc = 0x307d34u;
    // NOP
    // 0x307d38: 0x3c0243a3  lui         $v0, 0x43A3
    ctx->pc = 0x307d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17315 << 16));
    // 0x307d3c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x307d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x307d40: 0x3c034224  lui         $v1, 0x4224
    ctx->pc = 0x307d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16932 << 16));
    // 0x307d44: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x307d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307d48: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x307d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x307d4c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x307d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x307d50: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x307d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x307d54: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x307d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x307d58: 0x240600d9  addiu       $a2, $zero, 0xD9
    ctx->pc = 0x307d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x307d5c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x307d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x307d60: 0x2407008b  addiu       $a3, $zero, 0x8B
    ctx->pc = 0x307d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x307d64: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x307d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x307d68: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x307d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
    // 0x307d6c: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x307d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x307d70: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x307d70u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x307d74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x307d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x307d78: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x307d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x307d7c: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x307d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307d80: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x307d80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x307d84: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x307d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x307d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x307d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307d8c: 0x0  nop
    ctx->pc = 0x307d8cu;
    // NOP
    // 0x307d90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x307d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x307d94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x307d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x307d98: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x307d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x307d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x307d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307da0: 0x46022b00  add.s       $f12, $f5, $f2
    ctx->pc = 0x307da0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x307da4: 0x46022381  sub.s       $f14, $f4, $f2
    ctx->pc = 0x307da4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x307da8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x307da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x307dac: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x307DACu;
    SET_GPR_U32(ctx, 31, 0x307DB4u);
    ctx->pc = 0x307DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307DACu;
            // 0x307db0: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DB4u; }
        if (ctx->pc != 0x307DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307DB4u; }
        if (ctx->pc != 0x307DB4u) { return; }
    }
    ctx->pc = 0x307DB4u;
label_307db4:
    // 0x307db4: 0x3c024224  lui         $v0, 0x4224
    ctx->pc = 0x307db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16932 << 16));
    // 0x307db8: 0x3c0343a3  lui         $v1, 0x43A3
    ctx->pc = 0x307db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17315 << 16));
    // 0x307dbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x307dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307dc0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x307dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x307dc4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x307dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307dc8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x307dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x307dcc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x307dd0: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x307dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x307dd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x307dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307dd8: 0x2406008b  addiu       $a2, $zero, 0x8B
    ctx->pc = 0x307dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x307ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x307ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307de0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x307de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x307de4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x307de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x307de8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x307de8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x307dec: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x307decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x307df0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x307df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x307df4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x307df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x307df8: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x307df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x307dfc: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x307dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x307e00: 0x46010382  mul.s       $f14, $f0, $f1
    ctx->pc = 0x307e00u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x307e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x307e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307e08: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x307E08u;
    SET_GPR_U32(ctx, 31, 0x307E10u);
    ctx->pc = 0x307E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E08u;
            // 0x307e0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E10u; }
        if (ctx->pc != 0x307E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E10u; }
        if (ctx->pc != 0x307E10u) { return; }
    }
    ctx->pc = 0x307E10u;
label_307e10:
    // 0x307e10: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x307e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307e14: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x307e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x307e18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x307e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307e1c: 0x3c0243a3  lui         $v0, 0x43A3
    ctx->pc = 0x307e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17315 << 16));
    // 0x307e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x307e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307e24: 0x0  nop
    ctx->pc = 0x307e24u;
    // NOP
    // 0x307e28: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x307e28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x307e2c: 0x0  nop
    ctx->pc = 0x307e2cu;
    // NOP
    // 0x307e30: 0x0  nop
    ctx->pc = 0x307e30u;
    // NOP
    // 0x307e34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x307E34u;
    SET_GPR_U32(ctx, 31, 0x307E3Cu);
    ctx->pc = 0x307E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E34u;
            // 0x307e38: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E3Cu; }
        if (ctx->pc != 0x307E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E3Cu; }
        if (ctx->pc != 0x307E3Cu) { return; }
    }
    ctx->pc = 0x307E3Cu;
label_307e3c:
    // 0x307e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x307e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307e40: 0x0  nop
    ctx->pc = 0x307e40u;
    // NOP
    // 0x307e44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x307e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x307e48: 0x3c0241f8  lui         $v0, 0x41F8
    ctx->pc = 0x307e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16888 << 16));
    // 0x307e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x307e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307e50: 0xc0a248c  jal         func_289230
    ctx->pc = 0x307E50u;
    SET_GPR_U32(ctx, 31, 0x307E58u);
    ctx->pc = 0x307E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E50u;
            // 0x307e54: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E58u; }
        if (ctx->pc != 0x307E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E58u; }
        if (ctx->pc != 0x307E58u) { return; }
    }
    ctx->pc = 0x307E58u;
label_307e58:
    // 0x307e58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x307e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x307e5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x307e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e60: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x307e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x307e64: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x307e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x307e68: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x307e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x307e6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x307e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x307e70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x307e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x307e74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x307e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x307e78: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x307E78u;
    SET_GPR_U32(ctx, 31, 0x307E80u);
    ctx->pc = 0x307E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307E78u;
            // 0x307e7c: 0x2446001c  addiu       $a2, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E80u; }
        if (ctx->pc != 0x307E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307E80u; }
        if (ctx->pc != 0x307E80u) { return; }
    }
    ctx->pc = 0x307E80u;
label_307e80:
    // 0x307e80: 0x8f82a134  lw          $v0, -0x5ECC($gp)
    ctx->pc = 0x307e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
    // 0x307e84: 0x16020022  bne         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x307E84u;
    {
        const bool branch_taken_0x307e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x307e84) {
            ctx->pc = 0x307F10u;
            goto label_307f10;
        }
    }
    ctx->pc = 0x307E8Cu;
    // 0x307e8c: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x307e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x307e90: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x307E90u;
    {
        const bool branch_taken_0x307e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307E90u;
            // 0x307e94: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e90) {
            ctx->pc = 0x307F10u;
            goto label_307f10;
        }
    }
    ctx->pc = 0x307E98u;
    // 0x307e98: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x307e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x307e9c: 0x240501ee  addiu       $a1, $zero, 0x1EE
    ctx->pc = 0x307e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
    // 0x307ea0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x307ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x307ea4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x307EA4u;
    SET_GPR_U32(ctx, 31, 0x307EACu);
    ctx->pc = 0x307EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307EA4u;
            // 0x307ea8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307EACu; }
        if (ctx->pc != 0x307EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307EACu; }
        if (ctx->pc != 0x307EACu) { return; }
    }
    ctx->pc = 0x307EACu;
label_307eac:
    // 0x307eac: 0x93a300ac  lbu         $v1, 0xAC($sp)
    ctx->pc = 0x307eacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x307eb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x307eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307eb4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x307EB4u;
    {
        const bool branch_taken_0x307eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x307eb4) {
            ctx->pc = 0x307EE4u;
            goto label_307ee4;
        }
    }
    ctx->pc = 0x307EBCu;
    // 0x307ebc: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x307ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x307ec0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x307ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307ec4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x307ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x307ec8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x307ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x307ecc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x307eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ed0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x307ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ed4: 0xc088004  jal         func_220010
    ctx->pc = 0x307ED4u;
    SET_GPR_U32(ctx, 31, 0x307EDCu);
    ctx->pc = 0x307ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307ED4u;
            // 0x307ed8: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307EDCu; }
        if (ctx->pc != 0x307EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307EDCu; }
        if (ctx->pc != 0x307EDCu) { return; }
    }
    ctx->pc = 0x307EDCu;
label_307edc:
    // 0x307edc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x307EDCu;
    {
        const bool branch_taken_0x307edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307edc) {
            ctx->pc = 0x307F80u;
            goto label_307f80;
        }
    }
    ctx->pc = 0x307EE4u;
label_307ee4:
    // 0x307ee4: 0x0  nop
    ctx->pc = 0x307ee4u;
    // NOP
    // 0x307ee8: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x307ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x307eec: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x307eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307ef0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x307ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x307ef4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x307ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x307ef8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x307ef8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307efc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x307efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f00: 0xc088004  jal         func_220010
    ctx->pc = 0x307F00u;
    SET_GPR_U32(ctx, 31, 0x307F08u);
    ctx->pc = 0x307F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307F00u;
            // 0x307f04: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F08u; }
        if (ctx->pc != 0x307F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F08u; }
        if (ctx->pc != 0x307F08u) { return; }
    }
    ctx->pc = 0x307F08u;
label_307f08:
    // 0x307f08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x307F08u;
    {
        const bool branch_taken_0x307f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f08) {
            ctx->pc = 0x307F80u;
            goto label_307f80;
        }
    }
    ctx->pc = 0x307F10u;
label_307f10:
    // 0x307f10: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x307f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x307f14: 0x240501ee  addiu       $a1, $zero, 0x1EE
    ctx->pc = 0x307f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
    // 0x307f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f1c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x307f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x307f20: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x307F20u;
    SET_GPR_U32(ctx, 31, 0x307F28u);
    ctx->pc = 0x307F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307F20u;
            // 0x307f24: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F28u; }
        if (ctx->pc != 0x307F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F28u; }
        if (ctx->pc != 0x307F28u) { return; }
    }
    ctx->pc = 0x307F28u;
label_307f28:
    // 0x307f28: 0x93a300ac  lbu         $v1, 0xAC($sp)
    ctx->pc = 0x307f28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x307f2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x307f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307f30: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x307F30u;
    {
        const bool branch_taken_0x307f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x307f30) {
            ctx->pc = 0x307F60u;
            goto label_307f60;
        }
    }
    ctx->pc = 0x307F38u;
    // 0x307f38: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x307f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x307f3c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x307f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307f40: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x307f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x307f44: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x307f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x307f48: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x307f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f4c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x307f4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f50: 0xc088004  jal         func_220010
    ctx->pc = 0x307F50u;
    SET_GPR_U32(ctx, 31, 0x307F58u);
    ctx->pc = 0x307F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307F50u;
            // 0x307f54: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F58u; }
        if (ctx->pc != 0x307F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F58u; }
        if (ctx->pc != 0x307F58u) { return; }
    }
    ctx->pc = 0x307F58u;
label_307f58:
    // 0x307f58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x307F58u;
    {
        const bool branch_taken_0x307f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f58) {
            ctx->pc = 0x307F80u;
            goto label_307f80;
        }
    }
    ctx->pc = 0x307F60u;
label_307f60:
    // 0x307f60: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x307f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x307f64: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307f68: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x307f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x307f6c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x307f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x307f70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x307f70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f74: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x307f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f78: 0xc088004  jal         func_220010
    ctx->pc = 0x307F78u;
    SET_GPR_U32(ctx, 31, 0x307F80u);
    ctx->pc = 0x307F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307F78u;
            // 0x307f7c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F80u; }
        if (ctx->pc != 0x307F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307F80u; }
        if (ctx->pc != 0x307F80u) { return; }
    }
    ctx->pc = 0x307F80u;
label_307f80:
    // 0x307f80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x307f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x307f84: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x307f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x307f88: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x307F88u;
    {
        const bool branch_taken_0x307f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307F88u;
            // 0x307f8c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f88) {
            ctx->pc = 0x307CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307cf8;
        }
    }
    ctx->pc = 0x307F90u;
    // 0x307f90: 0x8f83a11c  lw          $v1, -0x5EE4($gp)
    ctx->pc = 0x307f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943004)));
    // 0x307f94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x307F94u;
    {
        const bool branch_taken_0x307f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307F94u;
            // 0x307f98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f94) {
            ctx->pc = 0x307FA8u;
            goto label_307fa8;
        }
    }
    ctx->pc = 0x307F9Cu;
    // 0x307f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307fa0: 0x146200e6  bne         $v1, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x307FA0u;
    {
        const bool branch_taken_0x307fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307fa0) {
            ctx->pc = 0x30833Cu;
            goto label_30833c;
        }
    }
    ctx->pc = 0x307FA8u;
label_307fa8:
    // 0x307fa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307fac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307fb0:
    // 0x307fb0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x307fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x307fb4: 0x264501a2  addiu       $a1, $s2, 0x1A2
    ctx->pc = 0x307fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 418));
    // 0x307fb8: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x307fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x307fbc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x307fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x307fc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x307FC0u;
    SET_GPR_U32(ctx, 31, 0x307FC8u);
    ctx->pc = 0x307FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FC0u;
            // 0x307fc4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307FC8u; }
        if (ctx->pc != 0x307FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307FC8u; }
        if (ctx->pc != 0x307FC8u) { return; }
    }
    ctx->pc = 0x307FC8u;
label_307fc8:
    // 0x307fc8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x307fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x307fcc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x307fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x307fd0: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x307fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x307fd4: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x307fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x307fd8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x307FD8u;
    SET_GPR_U32(ctx, 31, 0x307FE0u);
    ctx->pc = 0x307FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FD8u;
            // 0x307fdc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307FE0u; }
        if (ctx->pc != 0x307FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307FE0u; }
        if (ctx->pc != 0x307FE0u) { return; }
    }
    ctx->pc = 0x307FE0u;
label_307fe0:
    // 0x307fe0: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x307fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x307fe4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x307fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307fe8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x307fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x307fec: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x307fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x307ff0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x307ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ff4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x307ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ff8: 0xc088004  jal         func_220010
    ctx->pc = 0x307FF8u;
    SET_GPR_U32(ctx, 31, 0x308000u);
    ctx->pc = 0x307FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307FF8u;
            // 0x307ffc: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308000u; }
        if (ctx->pc != 0x308000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308000u; }
        if (ctx->pc != 0x308000u) { return; }
    }
    ctx->pc = 0x308000u;
label_308000:
    // 0x308000: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308004: 0x264501b0  addiu       $a1, $s2, 0x1B0
    ctx->pc = 0x308004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x308008: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x308008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x30800c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x30800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x308010: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308010u;
    SET_GPR_U32(ctx, 31, 0x308018u);
    ctx->pc = 0x308014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308010u;
            // 0x308014: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308018u; }
        if (ctx->pc != 0x308018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308018u; }
        if (ctx->pc != 0x308018u) { return; }
    }
    ctx->pc = 0x308018u;
label_308018:
    // 0x308018: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30801c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x308020: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x308020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x308024: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308028: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308028u;
    SET_GPR_U32(ctx, 31, 0x308030u);
    ctx->pc = 0x30802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308028u;
            // 0x30802c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308030u; }
        if (ctx->pc != 0x308030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308030u; }
        if (ctx->pc != 0x308030u) { return; }
    }
    ctx->pc = 0x308030u;
label_308030:
    // 0x308030: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308034: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308038: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x308038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x30803c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x30803cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x308040: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308044: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308048: 0xc088004  jal         func_220010
    ctx->pc = 0x308048u;
    SET_GPR_U32(ctx, 31, 0x308050u);
    ctx->pc = 0x30804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308048u;
            // 0x30804c: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308050u; }
        if (ctx->pc != 0x308050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308050u; }
        if (ctx->pc != 0x308050u) { return; }
    }
    ctx->pc = 0x308050u;
label_308050:
    // 0x308050: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308054: 0x264501ba  addiu       $a1, $s2, 0x1BA
    ctx->pc = 0x308054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 442));
    // 0x308058: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x308058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x30805c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x30805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x308060: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308060u;
    SET_GPR_U32(ctx, 31, 0x308068u);
    ctx->pc = 0x308064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308060u;
            // 0x308064: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308068u; }
        if (ctx->pc != 0x308068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308068u; }
        if (ctx->pc != 0x308068u) { return; }
    }
    ctx->pc = 0x308068u;
label_308068:
    // 0x308068: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30806c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x30806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x308070: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x308070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x308074: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308078: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308078u;
    SET_GPR_U32(ctx, 31, 0x308080u);
    ctx->pc = 0x30807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308078u;
            // 0x30807c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308080u; }
        if (ctx->pc != 0x308080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308080u; }
        if (ctx->pc != 0x308080u) { return; }
    }
    ctx->pc = 0x308080u;
label_308080:
    // 0x308080: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308084: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308088: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x308088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30808c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x30808cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x308090: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308094: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308098: 0xc088004  jal         func_220010
    ctx->pc = 0x308098u;
    SET_GPR_U32(ctx, 31, 0x3080A0u);
    ctx->pc = 0x30809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308098u;
            // 0x30809c: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080A0u; }
        if (ctx->pc != 0x3080A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080A0u; }
        if (ctx->pc != 0x3080A0u) { return; }
    }
    ctx->pc = 0x3080A0u;
label_3080a0:
    // 0x3080a0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3080a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3080a4: 0x264501c9  addiu       $a1, $s2, 0x1C9
    ctx->pc = 0x3080a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 457));
    // 0x3080a8: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x3080a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x3080ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3080acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3080b0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3080B0u;
    SET_GPR_U32(ctx, 31, 0x3080B8u);
    ctx->pc = 0x3080B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3080B0u;
            // 0x3080b4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080B8u; }
        if (ctx->pc != 0x3080B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080B8u; }
        if (ctx->pc != 0x3080B8u) { return; }
    }
    ctx->pc = 0x3080B8u;
label_3080b8:
    // 0x3080b8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3080b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3080bc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3080bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3080c0: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x3080c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x3080c4: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x3080c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3080c8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3080C8u;
    SET_GPR_U32(ctx, 31, 0x3080D0u);
    ctx->pc = 0x3080CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3080C8u;
            // 0x3080cc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080D0u; }
        if (ctx->pc != 0x3080D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080D0u; }
        if (ctx->pc != 0x3080D0u) { return; }
    }
    ctx->pc = 0x3080D0u;
label_3080d0:
    // 0x3080d0: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x3080d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x3080d4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3080d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3080d8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x3080d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3080dc: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x3080dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3080e0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3080e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3080e4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3080e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3080e8: 0xc088004  jal         func_220010
    ctx->pc = 0x3080E8u;
    SET_GPR_U32(ctx, 31, 0x3080F0u);
    ctx->pc = 0x3080ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3080E8u;
            // 0x3080ec: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080F0u; }
        if (ctx->pc != 0x3080F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3080F0u; }
        if (ctx->pc != 0x3080F0u) { return; }
    }
    ctx->pc = 0x3080F0u;
label_3080f0:
    // 0x3080f0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3080f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3080f4: 0x264501d3  addiu       $a1, $s2, 0x1D3
    ctx->pc = 0x3080f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 467));
    // 0x3080f8: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x3080f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x3080fc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3080fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x308100: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308100u;
    SET_GPR_U32(ctx, 31, 0x308108u);
    ctx->pc = 0x308104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308100u;
            // 0x308104: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308108u; }
        if (ctx->pc != 0x308108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308108u; }
        if (ctx->pc != 0x308108u) { return; }
    }
    ctx->pc = 0x308108u;
label_308108:
    // 0x308108: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30810c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x30810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x308110: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x308110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x308114: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308118: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308118u;
    SET_GPR_U32(ctx, 31, 0x308120u);
    ctx->pc = 0x30811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308118u;
            // 0x30811c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308120u; }
        if (ctx->pc != 0x308120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308120u; }
        if (ctx->pc != 0x308120u) { return; }
    }
    ctx->pc = 0x308120u;
label_308120:
    // 0x308120: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308124: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308128: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x308128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30812c: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x30812cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x308130: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308134: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308138: 0xc088004  jal         func_220010
    ctx->pc = 0x308138u;
    SET_GPR_U32(ctx, 31, 0x308140u);
    ctx->pc = 0x30813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308138u;
            // 0x30813c: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308140u; }
        if (ctx->pc != 0x308140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308140u; }
        if (ctx->pc != 0x308140u) { return; }
    }
    ctx->pc = 0x308140u;
label_308140:
    // 0x308140: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x308140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x308144: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x308144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x308148: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x308148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30814c: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x30814Cu;
    {
        const bool branch_taken_0x30814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30814Cu;
            // 0x308150: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30814c) {
            ctx->pc = 0x307FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307fb0;
        }
    }
    ctx->pc = 0x308154u;
    // 0x308154: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x308154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x308158: 0x240501cb  addiu       $a1, $zero, 0x1CB
    ctx->pc = 0x308158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
    // 0x30815c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x30815cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x308160: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x308160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x308164: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308164u;
    SET_GPR_U32(ctx, 31, 0x30816Cu);
    ctx->pc = 0x308168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308164u;
            // 0x308168: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30816Cu; }
        if (ctx->pc != 0x30816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30816Cu; }
        if (ctx->pc != 0x30816Cu) { return; }
    }
    ctx->pc = 0x30816Cu;
label_30816c:
    // 0x30816c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x30816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x308170: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x308170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x308174: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308178: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x308178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30817c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30817Cu;
    SET_GPR_U32(ctx, 31, 0x308184u);
    ctx->pc = 0x308180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30817Cu;
            // 0x308180: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308184u; }
        if (ctx->pc != 0x308184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308184u; }
        if (ctx->pc != 0x308184u) { return; }
    }
    ctx->pc = 0x308184u;
label_308184:
    // 0x308184: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308188: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30818c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x30818cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x308190: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x308190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x308194: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308198: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308198u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30819c: 0xc088004  jal         func_220010
    ctx->pc = 0x30819Cu;
    SET_GPR_U32(ctx, 31, 0x3081A4u);
    ctx->pc = 0x3081A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30819Cu;
            // 0x3081a0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081A4u; }
        if (ctx->pc != 0x3081A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081A4u; }
        if (ctx->pc != 0x3081A4u) { return; }
    }
    ctx->pc = 0x3081A4u;
label_3081a4:
    // 0x3081a4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3081a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3081a8: 0x24050176  addiu       $a1, $zero, 0x176
    ctx->pc = 0x3081a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x3081ac: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3081acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3081b0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3081b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3081b4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3081B4u;
    SET_GPR_U32(ctx, 31, 0x3081BCu);
    ctx->pc = 0x3081B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081B4u;
            // 0x3081b8: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081BCu; }
        if (ctx->pc != 0x3081BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081BCu; }
        if (ctx->pc != 0x3081BCu) { return; }
    }
    ctx->pc = 0x3081BCu;
label_3081bc:
    // 0x3081bc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3081bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3081c0: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x3081c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x3081c4: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x3081c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3081c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3081c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3081cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3081CCu;
    SET_GPR_U32(ctx, 31, 0x3081D4u);
    ctx->pc = 0x3081D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081CCu;
            // 0x3081d0: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081D4u; }
        if (ctx->pc != 0x3081D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081D4u; }
        if (ctx->pc != 0x3081D4u) { return; }
    }
    ctx->pc = 0x3081D4u;
label_3081d4:
    // 0x3081d4: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x3081d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x3081d8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3081d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3081dc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x3081dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3081e0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x3081e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3081e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3081e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081e8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3081e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081ec: 0xc088004  jal         func_220010
    ctx->pc = 0x3081ECu;
    SET_GPR_U32(ctx, 31, 0x3081F4u);
    ctx->pc = 0x3081F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3081ECu;
            // 0x3081f0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081F4u; }
        if (ctx->pc != 0x3081F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3081F4u; }
        if (ctx->pc != 0x3081F4u) { return; }
    }
    ctx->pc = 0x3081F4u;
label_3081f4:
    // 0x3081f4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3081f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x3081f8: 0x24050189  addiu       $a1, $zero, 0x189
    ctx->pc = 0x3081f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
    // 0x3081fc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3081fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x308200: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308204: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308204u;
    SET_GPR_U32(ctx, 31, 0x30820Cu);
    ctx->pc = 0x308208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308204u;
            // 0x308208: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30820Cu; }
        if (ctx->pc != 0x30820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30820Cu; }
        if (ctx->pc != 0x30820Cu) { return; }
    }
    ctx->pc = 0x30820Cu;
label_30820c:
    // 0x30820c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x30820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x308210: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x308210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x308214: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308218: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30821c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30821Cu;
    SET_GPR_U32(ctx, 31, 0x308224u);
    ctx->pc = 0x308220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30821Cu;
            // 0x308220: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308224u; }
        if (ctx->pc != 0x308224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308224u; }
        if (ctx->pc != 0x308224u) { return; }
    }
    ctx->pc = 0x308224u;
label_308224:
    // 0x308224: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308228: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30822c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x30822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x308230: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x308230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x308234: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308238: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30823c: 0xc088004  jal         func_220010
    ctx->pc = 0x30823Cu;
    SET_GPR_U32(ctx, 31, 0x308244u);
    ctx->pc = 0x308240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30823Cu;
            // 0x308240: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308244u; }
        if (ctx->pc != 0x308244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308244u; }
        if (ctx->pc != 0x308244u) { return; }
    }
    ctx->pc = 0x308244u;
label_308244:
    // 0x308244: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x308244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x308248: 0x24050197  addiu       $a1, $zero, 0x197
    ctx->pc = 0x308248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x30824c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x30824cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x308250: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308254: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308254u;
    SET_GPR_U32(ctx, 31, 0x30825Cu);
    ctx->pc = 0x308258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308254u;
            // 0x308258: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30825Cu; }
        if (ctx->pc != 0x30825Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30825Cu; }
        if (ctx->pc != 0x30825Cu) { return; }
    }
    ctx->pc = 0x30825Cu;
label_30825c:
    // 0x30825c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x30825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x308260: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x308260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x308264: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308268: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30826c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30826Cu;
    SET_GPR_U32(ctx, 31, 0x308274u);
    ctx->pc = 0x308270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30826Cu;
            // 0x308270: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308274u; }
        if (ctx->pc != 0x308274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308274u; }
        if (ctx->pc != 0x308274u) { return; }
    }
    ctx->pc = 0x308274u;
label_308274:
    // 0x308274: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308278: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30827c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x30827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x308280: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x308280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x308284: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308288: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30828c: 0xc088004  jal         func_220010
    ctx->pc = 0x30828Cu;
    SET_GPR_U32(ctx, 31, 0x308294u);
    ctx->pc = 0x308290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30828Cu;
            // 0x308290: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308294u; }
        if (ctx->pc != 0x308294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308294u; }
        if (ctx->pc != 0x308294u) { return; }
    }
    ctx->pc = 0x308294u;
label_308294:
    // 0x308294: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x308294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x308298: 0x240501ab  addiu       $a1, $zero, 0x1AB
    ctx->pc = 0x308298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
    // 0x30829c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x30829cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3082a0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3082a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3082a4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3082A4u;
    SET_GPR_U32(ctx, 31, 0x3082ACu);
    ctx->pc = 0x3082A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3082A4u;
            // 0x3082a8: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3082ACu; }
        if (ctx->pc != 0x3082ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3082ACu; }
        if (ctx->pc != 0x3082ACu) { return; }
    }
    ctx->pc = 0x3082ACu;
label_3082ac:
    // 0x3082ac: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x3082acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x3082b0: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x3082b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x3082b4: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x3082b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3082b8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3082b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3082bc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3082BCu;
    SET_GPR_U32(ctx, 31, 0x3082C4u);
    ctx->pc = 0x3082C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3082BCu;
            // 0x3082c0: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3082C4u; }
        if (ctx->pc != 0x3082C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3082C4u; }
        if (ctx->pc != 0x3082C4u) { return; }
    }
    ctx->pc = 0x3082C4u;
label_3082c4:
    // 0x3082c4: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x3082c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x3082c8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3082c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3082cc: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x3082ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x3082d0: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x3082d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x3082d4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3082d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082d8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3082d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082dc: 0xc088004  jal         func_220010
    ctx->pc = 0x3082DCu;
    SET_GPR_U32(ctx, 31, 0x3082E4u);
    ctx->pc = 0x3082E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3082DCu;
            // 0x3082e0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3082E4u; }
        if (ctx->pc != 0x3082E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3082E4u; }
        if (ctx->pc != 0x3082E4u) { return; }
    }
    ctx->pc = 0x3082E4u;
label_3082e4:
    // 0x3082e4: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x3082e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x3082e8: 0x240501b9  addiu       $a1, $zero, 0x1B9
    ctx->pc = 0x3082e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
    // 0x3082ec: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3082ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3082f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3082f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3082f4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3082F4u;
    SET_GPR_U32(ctx, 31, 0x3082FCu);
    ctx->pc = 0x3082F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3082F4u;
            // 0x3082f8: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3082FCu; }
        if (ctx->pc != 0x3082FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3082FCu; }
        if (ctx->pc != 0x3082FCu) { return; }
    }
    ctx->pc = 0x3082FCu;
label_3082fc:
    // 0x3082fc: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x3082fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x308300: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x308300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x308304: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308308: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30830c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30830Cu;
    SET_GPR_U32(ctx, 31, 0x308314u);
    ctx->pc = 0x308310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30830Cu;
            // 0x308310: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308314u; }
        if (ctx->pc != 0x308314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308314u; }
        if (ctx->pc != 0x308314u) { return; }
    }
    ctx->pc = 0x308314u;
label_308314:
    // 0x308314: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308318: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30831c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x30831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x308320: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x308320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x308324: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308328: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30832c: 0xc088004  jal         func_220010
    ctx->pc = 0x30832Cu;
    SET_GPR_U32(ctx, 31, 0x308334u);
    ctx->pc = 0x308330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30832Cu;
            // 0x308330: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308334u; }
        if (ctx->pc != 0x308334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308334u; }
        if (ctx->pc != 0x308334u) { return; }
    }
    ctx->pc = 0x308334u;
label_308334:
    // 0x308334: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x308334u;
    {
        const bool branch_taken_0x308334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308334u;
            // 0x308338: 0x8f85a134  lw          $a1, -0x5ECC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308334) {
            ctx->pc = 0x308C44u;
            goto label_308c44;
        }
    }
    ctx->pc = 0x30833Cu;
label_30833c:
    // 0x30833c: 0x8f87a134  lw          $a3, -0x5ECC($gp)
    ctx->pc = 0x30833cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
    // 0x308340: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x308340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
    // 0x308344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308348: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x308348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x30834c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x30834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x308350: 0x24c6a300  addiu       $a2, $a2, -0x5D00
    ctx->pc = 0x308350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943488));
    // 0x308354: 0x2463a314  addiu       $v1, $v1, -0x5CEC
    ctx->pc = 0x308354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943508));
    // 0x308358: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x308358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x30835c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x30835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x308360: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x308360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x308364: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x308364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x308368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x308368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30836c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x30836cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x308370: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x308370u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308374: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x308374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x308378: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x308378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x30837c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x308380: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x308380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x308384: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x308384u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x308388: 0x0  nop
    ctx->pc = 0x308388u;
    // NOP
    // 0x30838c: 0x0  nop
    ctx->pc = 0x30838cu;
    // NOP
    // 0x308390: 0xc0a248c  jal         func_289230
    ctx->pc = 0x308390u;
    SET_GPR_U32(ctx, 31, 0x308398u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308398u; }
        if (ctx->pc != 0x308398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308398u; }
        if (ctx->pc != 0x308398u) { return; }
    }
    ctx->pc = 0x308398u;
label_308398:
    // 0x308398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30839c: 0x3c034561  lui         $v1, 0x4561
    ctx->pc = 0x30839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17761 << 16));
    // 0x3083a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3083a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3083a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3083a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3083a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3083ac: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3083acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3083b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3083b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3083b4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3083b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3083b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3083b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3083bc: 0x0  nop
    ctx->pc = 0x3083bcu;
    // NOP
    // 0x3083c0: 0x4602a303  div.s       $f12, $f20, $f2
    ctx->pc = 0x3083c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x3083c4: 0x0  nop
    ctx->pc = 0x3083c4u;
    // NOP
    // 0x3083c8: 0x0  nop
    ctx->pc = 0x3083c8u;
    // NOP
    // 0x3083cc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3083CCu;
    SET_GPR_U32(ctx, 31, 0x3083D4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3083D4u; }
        if (ctx->pc != 0x3083D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3083D4u; }
        if (ctx->pc != 0x3083D4u) { return; }
    }
    ctx->pc = 0x3083D4u;
label_3083d4:
    // 0x3083d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3083d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3083d8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3083d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3083dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3083dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3083e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3083e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3083e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3083e8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3083e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3083ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3083ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3083f0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3083f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3083f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3083f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3083f8: 0x0  nop
    ctx->pc = 0x3083f8u;
    // NOP
    // 0x3083fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3083fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x308400: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x308400u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x308404: 0x0  nop
    ctx->pc = 0x308404u;
    // NOP
    // 0x308408: 0x0  nop
    ctx->pc = 0x308408u;
    // NOP
    // 0x30840c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30840Cu;
    SET_GPR_U32(ctx, 31, 0x308414u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308414u; }
        if (ctx->pc != 0x308414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308414u; }
        if (ctx->pc != 0x308414u) { return; }
    }
    ctx->pc = 0x308414u;
label_308414:
    // 0x308414: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x308414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308418: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x308418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x30841c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x30841cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308420: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x308420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x308424: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x308424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x308428: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x308428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x30842c: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x30842cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x308430: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x308430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x308434: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x308434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x308438: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x308438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30843c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x30843cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x308440: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x308440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x308444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308448: 0xc0a248c  jal         func_289230
    ctx->pc = 0x308448u;
    SET_GPR_U32(ctx, 31, 0x308450u);
    ctx->pc = 0x30844Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308448u;
            // 0x30844c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308450u; }
        if (ctx->pc != 0x308450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308450u; }
        if (ctx->pc != 0x308450u) { return; }
    }
    ctx->pc = 0x308450u;
label_308450:
    // 0x308450: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x308450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x308454: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x308454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x308458: 0x24c6a434  addiu       $a2, $a2, -0x5BCC
    ctx->pc = 0x308458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943796));
    // 0x30845c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x308460: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x308460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x308464: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x308464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x308468: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x308468u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30846c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30846cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308470: 0x2223023  subu        $a2, $s1, $v0
    ctx->pc = 0x308470u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x308474: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x308474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x308478: 0x2442a438  addiu       $v0, $v0, -0x5BC8
    ctx->pc = 0x308478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943800));
    // 0x30847c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x30847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x308480: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x308480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x308484: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x308484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x308488: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x308488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30848c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30848cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x308490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308494: 0xc0a248c  jal         func_289230
    ctx->pc = 0x308494u;
    SET_GPR_U32(ctx, 31, 0x30849Cu);
    ctx->pc = 0x308498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308494u;
            // 0x308498: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30849Cu; }
        if (ctx->pc != 0x30849Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30849Cu; }
        if (ctx->pc != 0x30849Cu) { return; }
    }
    ctx->pc = 0x30849Cu;
label_30849c:
    // 0x30849c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30849cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3084a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3084a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3084a4: 0x2484a43c  addiu       $a0, $a0, -0x5BC4
    ctx->pc = 0x3084a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943804));
    // 0x3084a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3084a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3084ac: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3084acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3084b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3084b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3084b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3084b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3084b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3084b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3084bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3084bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3084c0: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x3084c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3084c4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3084c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3084c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3084c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3084cc: 0x2442a440  addiu       $v0, $v0, -0x5BC0
    ctx->pc = 0x3084ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943808));
    // 0x3084d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3084d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3084d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3084d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3084d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3084d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3084dc:
    // 0x3084dc: 0x8f84a134  lw          $a0, -0x5ECC($gp)
    ctx->pc = 0x3084dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
    // 0x3084e0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3084e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3084e4: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x3084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
    // 0x3084e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3084e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3084ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3084ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3084f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3084f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3084f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3084f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3084f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3084f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3084fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3084fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308500: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x308500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x308504: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x308504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x308508: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x308508u;
    {
        const bool branch_taken_0x308508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308508u;
            // 0x30850c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308508) {
            ctx->pc = 0x3086A4u;
            goto label_3086a4;
        }
    }
    ctx->pc = 0x308510u;
    // 0x308510: 0x264501a2  addiu       $a1, $s2, 0x1A2
    ctx->pc = 0x308510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 418));
    // 0x308514: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x308514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x308518: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x308518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30851c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30851Cu;
    SET_GPR_U32(ctx, 31, 0x308524u);
    ctx->pc = 0x308520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30851Cu;
            // 0x308520: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308524u; }
        if (ctx->pc != 0x308524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308524u; }
        if (ctx->pc != 0x308524u) { return; }
    }
    ctx->pc = 0x308524u;
label_308524:
    // 0x308524: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308528: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x308528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x30852c: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x30852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x308530: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308534: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308534u;
    SET_GPR_U32(ctx, 31, 0x30853Cu);
    ctx->pc = 0x308538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308534u;
            // 0x308538: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30853Cu; }
        if (ctx->pc != 0x30853Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30853Cu; }
        if (ctx->pc != 0x30853Cu) { return; }
    }
    ctx->pc = 0x30853Cu;
label_30853c:
    // 0x30853c: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x30853cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308540: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308544: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x308544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x308548: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x308548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x30854c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30854cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308550: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308554: 0xc088004  jal         func_220010
    ctx->pc = 0x308554u;
    SET_GPR_U32(ctx, 31, 0x30855Cu);
    ctx->pc = 0x308558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308554u;
            // 0x308558: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30855Cu; }
        if (ctx->pc != 0x30855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30855Cu; }
        if (ctx->pc != 0x30855Cu) { return; }
    }
    ctx->pc = 0x30855Cu;
label_30855c:
    // 0x30855c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30855cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308560: 0x264501b0  addiu       $a1, $s2, 0x1B0
    ctx->pc = 0x308560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x308564: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x308564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x308568: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x308568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x30856c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30856Cu;
    SET_GPR_U32(ctx, 31, 0x308574u);
    ctx->pc = 0x308570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30856Cu;
            // 0x308570: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308574u; }
        if (ctx->pc != 0x308574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308574u; }
        if (ctx->pc != 0x308574u) { return; }
    }
    ctx->pc = 0x308574u;
label_308574:
    // 0x308574: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308578: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x308578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x30857c: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x30857cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x308580: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308584: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308584u;
    SET_GPR_U32(ctx, 31, 0x30858Cu);
    ctx->pc = 0x308588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308584u;
            // 0x308588: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30858Cu; }
        if (ctx->pc != 0x30858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30858Cu; }
        if (ctx->pc != 0x30858Cu) { return; }
    }
    ctx->pc = 0x30858Cu;
label_30858c:
    // 0x30858c: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x30858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308590: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308594: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x308594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x308598: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x308598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x30859c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30859cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085a0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3085a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085a4: 0xc088004  jal         func_220010
    ctx->pc = 0x3085A4u;
    SET_GPR_U32(ctx, 31, 0x3085ACu);
    ctx->pc = 0x3085A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3085A4u;
            // 0x3085a8: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085ACu; }
        if (ctx->pc != 0x3085ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085ACu; }
        if (ctx->pc != 0x3085ACu) { return; }
    }
    ctx->pc = 0x3085ACu;
label_3085ac:
    // 0x3085ac: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3085acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3085b0: 0x264501ba  addiu       $a1, $s2, 0x1BA
    ctx->pc = 0x3085b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 442));
    // 0x3085b4: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x3085b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x3085b8: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x3085b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3085bc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3085BCu;
    SET_GPR_U32(ctx, 31, 0x3085C4u);
    ctx->pc = 0x3085C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3085BCu;
            // 0x3085c0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085C4u; }
        if (ctx->pc != 0x3085C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085C4u; }
        if (ctx->pc != 0x3085C4u) { return; }
    }
    ctx->pc = 0x3085C4u;
label_3085c4:
    // 0x3085c4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3085c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3085c8: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x3085c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x3085cc: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x3085ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x3085d0: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x3085d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3085d4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3085D4u;
    SET_GPR_U32(ctx, 31, 0x3085DCu);
    ctx->pc = 0x3085D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3085D4u;
            // 0x3085d8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085DCu; }
        if (ctx->pc != 0x3085DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085DCu; }
        if (ctx->pc != 0x3085DCu) { return; }
    }
    ctx->pc = 0x3085DCu;
label_3085dc:
    // 0x3085dc: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x3085dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x3085e0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3085e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3085e4: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3085e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3085e8: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x3085e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x3085ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3085ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085f0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3085f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085f4: 0xc088004  jal         func_220010
    ctx->pc = 0x3085F4u;
    SET_GPR_U32(ctx, 31, 0x3085FCu);
    ctx->pc = 0x3085F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3085F4u;
            // 0x3085f8: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085FCu; }
        if (ctx->pc != 0x3085FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085FCu; }
        if (ctx->pc != 0x3085FCu) { return; }
    }
    ctx->pc = 0x3085FCu;
label_3085fc:
    // 0x3085fc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3085fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308600: 0x264501c9  addiu       $a1, $s2, 0x1C9
    ctx->pc = 0x308600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 457));
    // 0x308604: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x308604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x308608: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x308608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x30860c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30860Cu;
    SET_GPR_U32(ctx, 31, 0x308614u);
    ctx->pc = 0x308610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30860Cu;
            // 0x308610: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308614u; }
        if (ctx->pc != 0x308614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308614u; }
        if (ctx->pc != 0x308614u) { return; }
    }
    ctx->pc = 0x308614u;
label_308614:
    // 0x308614: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308618: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x308618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x30861c: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x30861cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x308620: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308624: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308624u;
    SET_GPR_U32(ctx, 31, 0x30862Cu);
    ctx->pc = 0x308628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308624u;
            // 0x308628: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30862Cu; }
        if (ctx->pc != 0x30862Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30862Cu; }
        if (ctx->pc != 0x30862Cu) { return; }
    }
    ctx->pc = 0x30862Cu;
label_30862c:
    // 0x30862c: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x30862cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308630: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308634: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x308634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x308638: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x308638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x30863c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30863cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308640: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308640u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308644: 0xc088004  jal         func_220010
    ctx->pc = 0x308644u;
    SET_GPR_U32(ctx, 31, 0x30864Cu);
    ctx->pc = 0x308648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308644u;
            // 0x308648: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30864Cu; }
        if (ctx->pc != 0x30864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30864Cu; }
        if (ctx->pc != 0x30864Cu) { return; }
    }
    ctx->pc = 0x30864Cu;
label_30864c:
    // 0x30864c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30864cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308650: 0x264501d3  addiu       $a1, $s2, 0x1D3
    ctx->pc = 0x308650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 467));
    // 0x308654: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x308654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x308658: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x308658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x30865c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30865Cu;
    SET_GPR_U32(ctx, 31, 0x308664u);
    ctx->pc = 0x308660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30865Cu;
            // 0x308660: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308664u; }
        if (ctx->pc != 0x308664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308664u; }
        if (ctx->pc != 0x308664u) { return; }
    }
    ctx->pc = 0x308664u;
label_308664:
    // 0x308664: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308668: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x308668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x30866c: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x30866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x308670: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308674: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308674u;
    SET_GPR_U32(ctx, 31, 0x30867Cu);
    ctx->pc = 0x308678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308674u;
            // 0x308678: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30867Cu; }
        if (ctx->pc != 0x30867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30867Cu; }
        if (ctx->pc != 0x30867Cu) { return; }
    }
    ctx->pc = 0x30867Cu;
label_30867c:
    // 0x30867c: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x30867cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308680: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308684: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x308684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x308688: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x308688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x30868c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30868cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308690: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308694: 0xc088004  jal         func_220010
    ctx->pc = 0x308694u;
    SET_GPR_U32(ctx, 31, 0x30869Cu);
    ctx->pc = 0x308698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308694u;
            // 0x308698: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30869Cu; }
        if (ctx->pc != 0x30869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30869Cu; }
        if (ctx->pc != 0x30869Cu) { return; }
    }
    ctx->pc = 0x30869Cu;
label_30869c:
    // 0x30869c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x30869Cu;
    {
        const bool branch_taken_0x30869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30869c) {
            ctx->pc = 0x308894u;
            goto label_308894;
        }
    }
    ctx->pc = 0x3086A4u;
label_3086a4:
    // 0x3086a4: 0x0  nop
    ctx->pc = 0x3086a4u;
    // NOP
    // 0x3086a8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3086a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3086ac: 0x264501a2  addiu       $a1, $s2, 0x1A2
    ctx->pc = 0x3086acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 418));
    // 0x3086b0: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x3086b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x3086b4: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x3086b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x3086b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3086B8u;
    SET_GPR_U32(ctx, 31, 0x3086C0u);
    ctx->pc = 0x3086BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3086B8u;
            // 0x3086bc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086C0u; }
        if (ctx->pc != 0x3086C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086C0u; }
        if (ctx->pc != 0x3086C0u) { return; }
    }
    ctx->pc = 0x3086C0u;
label_3086c0:
    // 0x3086c0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3086c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3086c4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3086c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3086c8: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x3086c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x3086cc: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x3086ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3086d0: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x3086d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3086d4: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x3086d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3086d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3086d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3086dc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3086dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3086e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3086e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3086e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3086e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3086e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3086ec: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3086ECu;
    SET_GPR_U32(ctx, 31, 0x3086F4u);
    ctx->pc = 0x3086F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3086ECu;
            // 0x3086f0: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086F4u; }
        if (ctx->pc != 0x3086F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086F4u; }
        if (ctx->pc != 0x3086F4u) { return; }
    }
    ctx->pc = 0x3086F4u;
label_3086f4:
    // 0x3086f4: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x3086f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x3086f8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3086f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3086fc: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x3086fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x308700: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x308700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x308704: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308708: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308708u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30870c: 0xc088004  jal         func_220010
    ctx->pc = 0x30870Cu;
    SET_GPR_U32(ctx, 31, 0x308714u);
    ctx->pc = 0x308710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30870Cu;
            // 0x308710: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308714u; }
        if (ctx->pc != 0x308714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308714u; }
        if (ctx->pc != 0x308714u) { return; }
    }
    ctx->pc = 0x308714u;
label_308714:
    // 0x308714: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308718: 0x264501b0  addiu       $a1, $s2, 0x1B0
    ctx->pc = 0x308718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x30871c: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x30871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x308720: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x308720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x308724: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308724u;
    SET_GPR_U32(ctx, 31, 0x30872Cu);
    ctx->pc = 0x308728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308724u;
            // 0x308728: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30872Cu; }
        if (ctx->pc != 0x30872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30872Cu; }
        if (ctx->pc != 0x30872Cu) { return; }
    }
    ctx->pc = 0x30872Cu;
label_30872c:
    // 0x30872c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x30872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x308730: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308734: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x308734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x308738: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x30873c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30873cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308740: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x308740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x308748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30874c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30874Cu;
    SET_GPR_U32(ctx, 31, 0x308754u);
    ctx->pc = 0x308750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30874Cu;
            // 0x308750: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308754u; }
        if (ctx->pc != 0x308754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308754u; }
        if (ctx->pc != 0x308754u) { return; }
    }
    ctx->pc = 0x308754u;
label_308754:
    // 0x308754: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308758: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30875c: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x30875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x308760: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x308760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x308764: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308768: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308768u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30876c: 0xc088004  jal         func_220010
    ctx->pc = 0x30876Cu;
    SET_GPR_U32(ctx, 31, 0x308774u);
    ctx->pc = 0x308770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30876Cu;
            // 0x308770: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308774u; }
        if (ctx->pc != 0x308774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308774u; }
        if (ctx->pc != 0x308774u) { return; }
    }
    ctx->pc = 0x308774u;
label_308774:
    // 0x308774: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308778: 0x264501ba  addiu       $a1, $s2, 0x1BA
    ctx->pc = 0x308778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 442));
    // 0x30877c: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x30877cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x308780: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x308780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x308784: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308784u;
    SET_GPR_U32(ctx, 31, 0x30878Cu);
    ctx->pc = 0x308788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308784u;
            // 0x308788: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30878Cu; }
        if (ctx->pc != 0x30878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30878Cu; }
        if (ctx->pc != 0x30878Cu) { return; }
    }
    ctx->pc = 0x30878Cu;
label_30878c:
    // 0x30878c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x30878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x308790: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308794: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x308794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x308798: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x30879c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30879cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3087a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3087a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3087a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3087a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3087a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3087ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3087ACu;
    SET_GPR_U32(ctx, 31, 0x3087B4u);
    ctx->pc = 0x3087B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3087ACu;
            // 0x3087b0: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3087B4u; }
        if (ctx->pc != 0x3087B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3087B4u; }
        if (ctx->pc != 0x3087B4u) { return; }
    }
    ctx->pc = 0x3087B4u;
label_3087b4:
    // 0x3087b4: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x3087b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x3087b8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3087b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3087bc: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x3087bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x3087c0: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x3087c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x3087c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3087c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087c8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3087c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087cc: 0xc088004  jal         func_220010
    ctx->pc = 0x3087CCu;
    SET_GPR_U32(ctx, 31, 0x3087D4u);
    ctx->pc = 0x3087D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3087CCu;
            // 0x3087d0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3087D4u; }
        if (ctx->pc != 0x3087D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3087D4u; }
        if (ctx->pc != 0x3087D4u) { return; }
    }
    ctx->pc = 0x3087D4u;
label_3087d4:
    // 0x3087d4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3087d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3087d8: 0x264501c9  addiu       $a1, $s2, 0x1C9
    ctx->pc = 0x3087d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 457));
    // 0x3087dc: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x3087dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x3087e0: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x3087e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x3087e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3087E4u;
    SET_GPR_U32(ctx, 31, 0x3087ECu);
    ctx->pc = 0x3087E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3087E4u;
            // 0x3087e8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3087ECu; }
        if (ctx->pc != 0x3087ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3087ECu; }
        if (ctx->pc != 0x3087ECu) { return; }
    }
    ctx->pc = 0x3087ECu;
label_3087ec:
    // 0x3087ec: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x3087ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3087f0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3087f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3087f4: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x3087f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x3087f8: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x3087f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3087fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3087fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308800: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x308800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x308808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30880c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30880Cu;
    SET_GPR_U32(ctx, 31, 0x308814u);
    ctx->pc = 0x308810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30880Cu;
            // 0x308810: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308814u; }
        if (ctx->pc != 0x308814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308814u; }
        if (ctx->pc != 0x308814u) { return; }
    }
    ctx->pc = 0x308814u;
label_308814:
    // 0x308814: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308818: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30881c: 0x27a50350  addiu       $a1, $sp, 0x350
    ctx->pc = 0x30881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x308820: 0x27a60360  addiu       $a2, $sp, 0x360
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x308824: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308828: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308828u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30882c: 0xc088004  jal         func_220010
    ctx->pc = 0x30882Cu;
    SET_GPR_U32(ctx, 31, 0x308834u);
    ctx->pc = 0x308830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30882Cu;
            // 0x308830: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308834u; }
        if (ctx->pc != 0x308834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308834u; }
        if (ctx->pc != 0x308834u) { return; }
    }
    ctx->pc = 0x308834u;
label_308834:
    // 0x308834: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308838: 0x264501d3  addiu       $a1, $s2, 0x1D3
    ctx->pc = 0x308838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 467));
    // 0x30883c: 0x26260041  addiu       $a2, $s1, 0x41
    ctx->pc = 0x30883cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 65));
    // 0x308840: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x308840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x308844: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308844u;
    SET_GPR_U32(ctx, 31, 0x30884Cu);
    ctx->pc = 0x308848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308844u;
            // 0x308848: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30884Cu; }
        if (ctx->pc != 0x30884Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30884Cu; }
        if (ctx->pc != 0x30884Cu) { return; }
    }
    ctx->pc = 0x30884Cu;
label_30884c:
    // 0x30884c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x30884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x308850: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308854: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x308854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x308858: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x30885c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30885cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308860: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x308860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x308868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30886c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30886Cu;
    SET_GPR_U32(ctx, 31, 0x308874u);
    ctx->pc = 0x308870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30886Cu;
            // 0x308870: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308874u; }
        if (ctx->pc != 0x308874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308874u; }
        if (ctx->pc != 0x308874u) { return; }
    }
    ctx->pc = 0x308874u;
label_308874:
    // 0x308874: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308878: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30887c: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x30887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x308880: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x308880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x308884: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308888: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30888c: 0xc088004  jal         func_220010
    ctx->pc = 0x30888Cu;
    SET_GPR_U32(ctx, 31, 0x308894u);
    ctx->pc = 0x308890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30888Cu;
            // 0x308890: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308894u; }
        if (ctx->pc != 0x308894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308894u; }
        if (ctx->pc != 0x308894u) { return; }
    }
    ctx->pc = 0x308894u;
label_308894:
    // 0x308894: 0x0  nop
    ctx->pc = 0x308894u;
    // NOP
    // 0x308898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x308898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30889c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x30889cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3088a0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3088a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3088a4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3088a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3088a8: 0x1440ff0c  bnez        $v0, . + 4 + (-0xF4 << 2)
    ctx->pc = 0x3088A8u;
    {
        const bool branch_taken_0x3088a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3088ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3088A8u;
            // 0x3088ac: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088a8) {
            ctx->pc = 0x3084DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3084dc;
        }
    }
    ctx->pc = 0x3088B0u;
    // 0x3088b0: 0x8f86a134  lw          $a2, -0x5ECC($gp)
    ctx->pc = 0x3088b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
    // 0x3088b4: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x3088b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
    // 0x3088b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3088b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3088bc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3088bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x3088c0: 0x2463a310  addiu       $v1, $v1, -0x5CF0
    ctx->pc = 0x3088c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x3088c4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3088c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3088c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3088cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3088ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3088d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3088d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3088d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3088d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3088d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3088d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3088dc: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x3088dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3088e0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x3088e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3088e4: 0x0  nop
    ctx->pc = 0x3088e4u;
    // NOP
    // 0x3088e8: 0x0  nop
    ctx->pc = 0x3088e8u;
    // NOP
    // 0x3088ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3088ECu;
    SET_GPR_U32(ctx, 31, 0x3088F4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088F4u; }
        if (ctx->pc != 0x3088F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088F4u; }
        if (ctx->pc != 0x3088F4u) { return; }
    }
    ctx->pc = 0x3088F4u;
label_3088f4:
    // 0x3088f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3088f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3088f8: 0x3c034561  lui         $v1, 0x4561
    ctx->pc = 0x3088f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17761 << 16));
    // 0x3088fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3088fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x308900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308904: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x308904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x308908: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x308908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x30890c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30890cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x308910: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x308910u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x308914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x308914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308918: 0x0  nop
    ctx->pc = 0x308918u;
    // NOP
    // 0x30891c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x30891cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x308920: 0x0  nop
    ctx->pc = 0x308920u;
    // NOP
    // 0x308924: 0x0  nop
    ctx->pc = 0x308924u;
    // NOP
    // 0x308928: 0xc0a248c  jal         func_289230
    ctx->pc = 0x308928u;
    SET_GPR_U32(ctx, 31, 0x308930u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308930u; }
        if (ctx->pc != 0x308930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308930u; }
        if (ctx->pc != 0x308930u) { return; }
    }
    ctx->pc = 0x308930u;
label_308930:
    // 0x308930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308934: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x308934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x308938: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x308938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30893c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30893cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308940: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x308940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x308944: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x308944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x308948: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x308948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30894c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x30894cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x308950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x308950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308954: 0x0  nop
    ctx->pc = 0x308954u;
    // NOP
    // 0x308958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x308958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30895c: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x30895cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x308960: 0x0  nop
    ctx->pc = 0x308960u;
    // NOP
    // 0x308964: 0x0  nop
    ctx->pc = 0x308964u;
    // NOP
    // 0x308968: 0xc0a248c  jal         func_289230
    ctx->pc = 0x308968u;
    SET_GPR_U32(ctx, 31, 0x308970u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308970u; }
        if (ctx->pc != 0x308970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308970u; }
        if (ctx->pc != 0x308970u) { return; }
    }
    ctx->pc = 0x308970u;
label_308970:
    // 0x308970: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x308970u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308974: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x308974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x308978: 0xac30a460  sw          $s0, -0x5BA0($at)
    ctx->pc = 0x308978u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943840), GPR_U32(ctx, 16));
    // 0x30897c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30897cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x308980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308984: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x308984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x308988: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x308988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30898c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30898cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308990: 0xc0a248c  jal         func_289230
    ctx->pc = 0x308990u;
    SET_GPR_U32(ctx, 31, 0x308998u);
    ctx->pc = 0x308994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308990u;
            // 0x308994: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308998u; }
        if (ctx->pc != 0x308998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308998u; }
        if (ctx->pc != 0x308998u) { return; }
    }
    ctx->pc = 0x308998u;
label_308998:
    // 0x308998: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x308998u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30899c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3089a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3089a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3089a4: 0xac22a464  sw          $v0, -0x5B9C($at)
    ctx->pc = 0x3089a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943844), GPR_U32(ctx, 2));
    // 0x3089a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3089a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3089ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3089acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3089b0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3089b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3089b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3089b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3089b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3089b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3089bc: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x3089bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3089c0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3089c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3089c4: 0xac23a468  sw          $v1, -0x5B98($at)
    ctx->pc = 0x3089c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943848), GPR_U32(ctx, 3));
    // 0x3089c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3089c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3089cc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3089CCu;
    SET_GPR_U32(ctx, 31, 0x3089D4u);
    ctx->pc = 0x3089D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3089CCu;
            // 0x3089d0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3089D4u; }
        if (ctx->pc != 0x3089D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3089D4u; }
        if (ctx->pc != 0x3089D4u) { return; }
    }
    ctx->pc = 0x3089D4u;
label_3089d4:
    // 0x3089d4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3089d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3089d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3089d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3089dc: 0xac22a46c  sw          $v0, -0x5B94($at)
    ctx->pc = 0x3089dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943852), GPR_U32(ctx, 2));
    // 0x3089e0: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x3089e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x3089e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3089e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3089e8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3089e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3089ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3089ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3089f0: 0x24050176  addiu       $a1, $zero, 0x176
    ctx->pc = 0x3089f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x3089f4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3089f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3089f8: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3089fc: 0xac22a470  sw          $v0, -0x5B90($at)
    ctx->pc = 0x3089fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943856), GPR_U32(ctx, 2));
    // 0x308a00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308a04: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308A04u;
    SET_GPR_U32(ctx, 31, 0x308A0Cu);
    ctx->pc = 0x308A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A04u;
            // 0x308a08: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A0Cu; }
        if (ctx->pc != 0x308A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A0Cu; }
        if (ctx->pc != 0x308A0Cu) { return; }
    }
    ctx->pc = 0x308A0Cu;
label_308a0c:
    // 0x308a0c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x308a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x308a10: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x308a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x308a14: 0x8c22a460  lw          $v0, -0x5BA0($at)
    ctx->pc = 0x308a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943840)));
    // 0x308a18: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308a1c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308a20: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x308a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308a24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x308a28: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308A28u;
    SET_GPR_U32(ctx, 31, 0x308A30u);
    ctx->pc = 0x308A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A28u;
            // 0x308a2c: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A30u; }
        if (ctx->pc != 0x308A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A30u; }
        if (ctx->pc != 0x308A30u) { return; }
    }
    ctx->pc = 0x308A30u;
label_308a30:
    // 0x308a30: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308a34: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308a38: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x308a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x308a3c: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x308a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x308a40: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a44: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a48: 0xc088004  jal         func_220010
    ctx->pc = 0x308A48u;
    SET_GPR_U32(ctx, 31, 0x308A50u);
    ctx->pc = 0x308A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A48u;
            // 0x308a4c: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A50u; }
        if (ctx->pc != 0x308A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A50u; }
        if (ctx->pc != 0x308A50u) { return; }
    }
    ctx->pc = 0x308A50u;
label_308a50:
    // 0x308a50: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x308a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x308a54: 0x24050189  addiu       $a1, $zero, 0x189
    ctx->pc = 0x308a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
    // 0x308a58: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x308a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x308a5c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308a60: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308A60u;
    SET_GPR_U32(ctx, 31, 0x308A68u);
    ctx->pc = 0x308A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A60u;
            // 0x308a64: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A68u; }
        if (ctx->pc != 0x308A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A68u; }
        if (ctx->pc != 0x308A68u) { return; }
    }
    ctx->pc = 0x308A68u;
label_308a68:
    // 0x308a68: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x308a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x308a6c: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x308a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x308a70: 0x8c22a464  lw          $v0, -0x5B9C($at)
    ctx->pc = 0x308a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943844)));
    // 0x308a74: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308a78: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308a7c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x308a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308a80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x308a84: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308A84u;
    SET_GPR_U32(ctx, 31, 0x308A8Cu);
    ctx->pc = 0x308A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308A84u;
            // 0x308a88: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A8Cu; }
        if (ctx->pc != 0x308A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308A8Cu; }
        if (ctx->pc != 0x308A8Cu) { return; }
    }
    ctx->pc = 0x308A8Cu;
label_308a8c:
    // 0x308a8c: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308a90: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308a94: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x308a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x308a98: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x308a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x308a9c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308aa0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308aa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308aa4: 0xc088004  jal         func_220010
    ctx->pc = 0x308AA4u;
    SET_GPR_U32(ctx, 31, 0x308AACu);
    ctx->pc = 0x308AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308AA4u;
            // 0x308aa8: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AACu; }
        if (ctx->pc != 0x308AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AACu; }
        if (ctx->pc != 0x308AACu) { return; }
    }
    ctx->pc = 0x308AACu;
label_308aac:
    // 0x308aac: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x308aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x308ab0: 0x24050197  addiu       $a1, $zero, 0x197
    ctx->pc = 0x308ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
    // 0x308ab4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x308ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x308ab8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308abc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308ABCu;
    SET_GPR_U32(ctx, 31, 0x308AC4u);
    ctx->pc = 0x308AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308ABCu;
            // 0x308ac0: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AC4u; }
        if (ctx->pc != 0x308AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AC4u; }
        if (ctx->pc != 0x308AC4u) { return; }
    }
    ctx->pc = 0x308AC4u;
label_308ac4:
    // 0x308ac4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x308ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x308ac8: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x308ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x308acc: 0x8c22a468  lw          $v0, -0x5B98($at)
    ctx->pc = 0x308accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943848)));
    // 0x308ad0: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308ad4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308ad8: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x308ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308adc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x308ae0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308AE0u;
    SET_GPR_U32(ctx, 31, 0x308AE8u);
    ctx->pc = 0x308AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308AE0u;
            // 0x308ae4: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AE8u; }
        if (ctx->pc != 0x308AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AE8u; }
        if (ctx->pc != 0x308AE8u) { return; }
    }
    ctx->pc = 0x308AE8u;
label_308ae8:
    // 0x308ae8: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308aec: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308af0: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x308af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x308af4: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x308af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x308af8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308afc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308afcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b00: 0xc088004  jal         func_220010
    ctx->pc = 0x308B00u;
    SET_GPR_U32(ctx, 31, 0x308B08u);
    ctx->pc = 0x308B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308B00u;
            // 0x308b04: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B08u; }
        if (ctx->pc != 0x308B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B08u; }
        if (ctx->pc != 0x308B08u) { return; }
    }
    ctx->pc = 0x308B08u;
label_308b08:
    // 0x308b08: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x308b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x308b0c: 0x240501ab  addiu       $a1, $zero, 0x1AB
    ctx->pc = 0x308b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
    // 0x308b10: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x308b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x308b14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308b18: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308B18u;
    SET_GPR_U32(ctx, 31, 0x308B20u);
    ctx->pc = 0x308B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308B18u;
            // 0x308b1c: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B20u; }
        if (ctx->pc != 0x308B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B20u; }
        if (ctx->pc != 0x308B20u) { return; }
    }
    ctx->pc = 0x308B20u;
label_308b20:
    // 0x308b20: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x308b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x308b24: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x308b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x308b28: 0x8c22a46c  lw          $v0, -0x5B94($at)
    ctx->pc = 0x308b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943852)));
    // 0x308b2c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308b30: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308b34: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x308b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308b38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x308b3c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308B3Cu;
    SET_GPR_U32(ctx, 31, 0x308B44u);
    ctx->pc = 0x308B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308B3Cu;
            // 0x308b40: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B44u; }
        if (ctx->pc != 0x308B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B44u; }
        if (ctx->pc != 0x308B44u) { return; }
    }
    ctx->pc = 0x308B44u;
label_308b44:
    // 0x308b44: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308b48: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308b4c: 0x27a503f0  addiu       $a1, $sp, 0x3F0
    ctx->pc = 0x308b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x308b50: 0x27a60400  addiu       $a2, $sp, 0x400
    ctx->pc = 0x308b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x308b54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b58: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308b58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b5c: 0xc088004  jal         func_220010
    ctx->pc = 0x308B5Cu;
    SET_GPR_U32(ctx, 31, 0x308B64u);
    ctx->pc = 0x308B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308B5Cu;
            // 0x308b60: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B64u; }
        if (ctx->pc != 0x308B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B64u; }
        if (ctx->pc != 0x308B64u) { return; }
    }
    ctx->pc = 0x308B64u;
label_308b64:
    // 0x308b64: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x308b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x308b68: 0x240501b9  addiu       $a1, $zero, 0x1B9
    ctx->pc = 0x308b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
    // 0x308b6c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x308b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x308b70: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308b74: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308B74u;
    SET_GPR_U32(ctx, 31, 0x308B7Cu);
    ctx->pc = 0x308B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308B74u;
            // 0x308b78: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B7Cu; }
        if (ctx->pc != 0x308B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308B7Cu; }
        if (ctx->pc != 0x308B7Cu) { return; }
    }
    ctx->pc = 0x308B7Cu;
label_308b7c:
    // 0x308b7c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x308b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x308b80: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x308b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x308b84: 0x8c22a470  lw          $v0, -0x5B90($at)
    ctx->pc = 0x308b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943856)));
    // 0x308b88: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308b8c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x308b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308b90: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x308b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308b94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x308b98: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308B98u;
    SET_GPR_U32(ctx, 31, 0x308BA0u);
    ctx->pc = 0x308B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308B98u;
            // 0x308b9c: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308BA0u; }
        if (ctx->pc != 0x308BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308BA0u; }
        if (ctx->pc != 0x308BA0u) { return; }
    }
    ctx->pc = 0x308BA0u;
label_308ba0:
    // 0x308ba0: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308ba4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308ba8: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x308ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x308bac: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x308bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x308bb0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308bb4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308bb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308bb8: 0xc088004  jal         func_220010
    ctx->pc = 0x308BB8u;
    SET_GPR_U32(ctx, 31, 0x308BC0u);
    ctx->pc = 0x308BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308BB8u;
            // 0x308bbc: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308BC0u; }
        if (ctx->pc != 0x308BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308BC0u; }
        if (ctx->pc != 0x308BC0u) { return; }
    }
    ctx->pc = 0x308BC0u;
label_308bc0:
    // 0x308bc0: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x308bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x308bc4: 0x240501cb  addiu       $a1, $zero, 0x1CB
    ctx->pc = 0x308bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
    // 0x308bc8: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x308bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x308bcc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x308bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x308bd0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308BD0u;
    SET_GPR_U32(ctx, 31, 0x308BD8u);
    ctx->pc = 0x308BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308BD0u;
            // 0x308bd4: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308BD8u; }
        if (ctx->pc != 0x308BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308BD8u; }
        if (ctx->pc != 0x308BD8u) { return; }
    }
    ctx->pc = 0x308BD8u;
label_308bd8:
    // 0x308bd8: 0x8f85a134  lw          $a1, -0x5ECC($gp)
    ctx->pc = 0x308bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
    // 0x308bdc: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x308bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x308be0: 0x2442a2fc  addiu       $v0, $v0, -0x5D04
    ctx->pc = 0x308be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943484));
    // 0x308be4: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x308be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x308be8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x308be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x308bec: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x308becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x308bf0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x308bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x308bf4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x308bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x308bf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x308bfc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308c00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x308c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308c0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x308c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308c10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x308c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308c18: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308C18u;
    SET_GPR_U32(ctx, 31, 0x308C20u);
    ctx->pc = 0x308C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308C18u;
            // 0x308c1c: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C20u; }
        if (ctx->pc != 0x308C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C20u; }
        if (ctx->pc != 0x308C20u) { return; }
    }
    ctx->pc = 0x308C20u;
label_308c20:
    // 0x308c20: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308c24: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308c28: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x308c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x308c2c: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x308c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x308c30: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308c30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c34: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c38: 0xc088004  jal         func_220010
    ctx->pc = 0x308C38u;
    SET_GPR_U32(ctx, 31, 0x308C40u);
    ctx->pc = 0x308C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308C38u;
            // 0x308c3c: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C40u; }
        if (ctx->pc != 0x308C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C40u; }
        if (ctx->pc != 0x308C40u) { return; }
    }
    ctx->pc = 0x308C40u;
label_308c40:
    // 0x308c40: 0x8f85a134  lw          $a1, -0x5ECC($gp)
    ctx->pc = 0x308c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
label_308c44:
    // 0x308c44: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x308c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x308c48: 0x2442a2f4  addiu       $v0, $v0, -0x5D0C
    ctx->pc = 0x308c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943476));
    // 0x308c4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x308c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x308c50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x308c54: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308c58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x308c5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308c60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308c64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x308c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308c68: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x308C68u;
    SET_GPR_U32(ctx, 31, 0x308C70u);
    ctx->pc = 0x308C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308C68u;
            // 0x308c6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C70u; }
        if (ctx->pc != 0x308C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C70u; }
        if (ctx->pc != 0x308C70u) { return; }
    }
    ctx->pc = 0x308C70u;
label_308c70:
    // 0x308c70: 0x8f85a134  lw          $a1, -0x5ECC($gp)
    ctx->pc = 0x308c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
    // 0x308c74: 0xc78ca114  lwc1        $f12, -0x5EEC($gp)
    ctx->pc = 0x308c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308c78: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x308c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x308c7c: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x308c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    // 0x308c80: 0xc0c768c  jal         func_31DA30
    ctx->pc = 0x308C80u;
    SET_GPR_U32(ctx, 31, 0x308C88u);
    ctx->pc = 0x308C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308C80u;
            // 0x308c84: 0x24849f40  addiu       $a0, $a0, -0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C88u; }
        if (ctx->pc != 0x308C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308C88u; }
        if (ctx->pc != 0x308C88u) { return; }
    }
    ctx->pc = 0x308C88u;
label_308c88:
    // 0x308c88: 0x93a3045c  lbu         $v1, 0x45C($sp)
    ctx->pc = 0x308c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1116)));
    // 0x308c8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x308c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x308c90: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x308C90u;
    {
        const bool branch_taken_0x308c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x308C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308C90u;
            // 0x308c94: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c90) {
            ctx->pc = 0x308D40u;
            goto label_308d40;
        }
    }
    ctx->pc = 0x308C98u;
    // 0x308c98: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308c9c: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x308c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x308ca0: 0x24050178  addiu       $a1, $zero, 0x178
    ctx->pc = 0x308ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x308ca4: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x308ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x308ca8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308CA8u;
    SET_GPR_U32(ctx, 31, 0x308CB0u);
    ctx->pc = 0x308CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308CA8u;
            // 0x308cac: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308CB0u; }
        if (ctx->pc != 0x308CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308CB0u; }
        if (ctx->pc != 0x308CB0u) { return; }
    }
    ctx->pc = 0x308CB0u;
label_308cb0:
    // 0x308cb0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308cb4: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x308cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x308cb8: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x308cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x308cbc: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308cc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308CC0u;
    SET_GPR_U32(ctx, 31, 0x308CC8u);
    ctx->pc = 0x308CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308CC0u;
            // 0x308cc4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308CC8u; }
        if (ctx->pc != 0x308CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308CC8u; }
        if (ctx->pc != 0x308CC8u) { return; }
    }
    ctx->pc = 0x308CC8u;
label_308cc8:
    // 0x308cc8: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308ccc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308cd0: 0x27a50470  addiu       $a1, $sp, 0x470
    ctx->pc = 0x308cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x308cd4: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x308cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x308cd8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308cd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308cdc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ce0: 0xc088004  jal         func_220010
    ctx->pc = 0x308CE0u;
    SET_GPR_U32(ctx, 31, 0x308CE8u);
    ctx->pc = 0x308CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308CE0u;
            // 0x308ce4: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308CE8u; }
        if (ctx->pc != 0x308CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308CE8u; }
        if (ctx->pc != 0x308CE8u) { return; }
    }
    ctx->pc = 0x308CE8u;
label_308ce8:
    // 0x308ce8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308cec: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x308cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x308cf0: 0x24050187  addiu       $a1, $zero, 0x187
    ctx->pc = 0x308cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
    // 0x308cf4: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x308cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x308cf8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308CF8u;
    SET_GPR_U32(ctx, 31, 0x308D00u);
    ctx->pc = 0x308CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308CF8u;
            // 0x308cfc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D00u; }
        if (ctx->pc != 0x308D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D00u; }
        if (ctx->pc != 0x308D00u) { return; }
    }
    ctx->pc = 0x308D00u;
label_308d00:
    // 0x308d00: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308d04: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x308d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x308d08: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x308d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x308d0c: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308d10: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308D10u;
    SET_GPR_U32(ctx, 31, 0x308D18u);
    ctx->pc = 0x308D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308D10u;
            // 0x308d14: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D18u; }
        if (ctx->pc != 0x308D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D18u; }
        if (ctx->pc != 0x308D18u) { return; }
    }
    ctx->pc = 0x308D18u;
label_308d18:
    // 0x308d18: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308d1c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308d20: 0x27a50490  addiu       $a1, $sp, 0x490
    ctx->pc = 0x308d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x308d24: 0x27a604a0  addiu       $a2, $sp, 0x4A0
    ctx->pc = 0x308d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x308d28: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308d2c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308d2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308d30: 0xc088004  jal         func_220010
    ctx->pc = 0x308D30u;
    SET_GPR_U32(ctx, 31, 0x308D38u);
    ctx->pc = 0x308D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308D30u;
            // 0x308d34: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D38u; }
        if (ctx->pc != 0x308D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D38u; }
        if (ctx->pc != 0x308D38u) { return; }
    }
    ctx->pc = 0x308D38u;
label_308d38:
    // 0x308d38: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x308D38u;
    {
        const bool branch_taken_0x308d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308D38u;
            // 0x308d3c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d38) {
            ctx->pc = 0x308E14u;
            goto label_308e14;
        }
    }
    ctx->pc = 0x308D40u;
label_308d40:
    // 0x308d40: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x308d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x308d44: 0x24050178  addiu       $a1, $zero, 0x178
    ctx->pc = 0x308d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x308d48: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x308d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x308d4c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308D4Cu;
    SET_GPR_U32(ctx, 31, 0x308D54u);
    ctx->pc = 0x308D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308D4Cu;
            // 0x308d50: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D54u; }
        if (ctx->pc != 0x308D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308D54u; }
        if (ctx->pc != 0x308D54u) { return; }
    }
    ctx->pc = 0x308D54u;
label_308d54:
    // 0x308d54: 0x8f85a134  lw          $a1, -0x5ECC($gp)
    ctx->pc = 0x308d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
    // 0x308d58: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x308d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x308d5c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308d60: 0x2442a300  addiu       $v0, $v0, -0x5D00
    ctx->pc = 0x308d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943488));
    // 0x308d64: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x308d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x308d68: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308d6c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308d70: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x308d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x308d74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x308d78: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x308d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308d7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x308d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308d88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x308d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308d8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x308d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x308d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308d94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x308d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x308d98: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308D98u;
    SET_GPR_U32(ctx, 31, 0x308DA0u);
    ctx->pc = 0x308D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308D98u;
            // 0x308d9c: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DA0u; }
        if (ctx->pc != 0x308DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DA0u; }
        if (ctx->pc != 0x308DA0u) { return; }
    }
    ctx->pc = 0x308DA0u;
label_308da0:
    // 0x308da0: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308da4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308da8: 0x27a504b0  addiu       $a1, $sp, 0x4B0
    ctx->pc = 0x308da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x308dac: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x308dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x308db0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308db4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308db8: 0xc088004  jal         func_220010
    ctx->pc = 0x308DB8u;
    SET_GPR_U32(ctx, 31, 0x308DC0u);
    ctx->pc = 0x308DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308DB8u;
            // 0x308dbc: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DC0u; }
        if (ctx->pc != 0x308DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DC0u; }
        if (ctx->pc != 0x308DC0u) { return; }
    }
    ctx->pc = 0x308DC0u;
label_308dc0:
    // 0x308dc0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308dc4: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x308dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x308dc8: 0x24050187  addiu       $a1, $zero, 0x187
    ctx->pc = 0x308dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
    // 0x308dcc: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x308dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x308dd0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308DD0u;
    SET_GPR_U32(ctx, 31, 0x308DD8u);
    ctx->pc = 0x308DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308DD0u;
            // 0x308dd4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DD8u; }
        if (ctx->pc != 0x308DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DD8u; }
        if (ctx->pc != 0x308DD8u) { return; }
    }
    ctx->pc = 0x308DD8u;
label_308dd8:
    // 0x308dd8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x308dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308ddc: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x308ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x308de0: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x308de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x308de4: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x308de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x308de8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x308DE8u;
    SET_GPR_U32(ctx, 31, 0x308DF0u);
    ctx->pc = 0x308DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308DE8u;
            // 0x308dec: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DF0u; }
        if (ctx->pc != 0x308DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308DF0u; }
        if (ctx->pc != 0x308DF0u) { return; }
    }
    ctx->pc = 0x308DF0u;
label_308df0:
    // 0x308df0: 0x8f84a130  lw          $a0, -0x5ED0($gp)
    ctx->pc = 0x308df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943024)));
    // 0x308df4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x308df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308df8: 0x27a504d0  addiu       $a1, $sp, 0x4D0
    ctx->pc = 0x308df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x308dfc: 0x27a604e0  addiu       $a2, $sp, 0x4E0
    ctx->pc = 0x308dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x308e00: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x308e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e04: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x308e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e08: 0xc088004  jal         func_220010
    ctx->pc = 0x308E08u;
    SET_GPR_U32(ctx, 31, 0x308E10u);
    ctx->pc = 0x308E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E08u;
            // 0x308e0c: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E10u; }
        if (ctx->pc != 0x308E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E10u; }
        if (ctx->pc != 0x308E10u) { return; }
    }
    ctx->pc = 0x308E10u;
label_308e10:
    // 0x308e10: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x308e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_308e14:
    // 0x308e14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x308e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x308e18: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x308e18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x308e1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x308e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308e24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x308e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308e28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x308e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308e2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x308e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308e30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x308e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308e34: 0x3e00008  jr          $ra
    ctx->pc = 0x308E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308E34u;
            // 0x308e38: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308E3Cu;
}
