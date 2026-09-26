#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__14CSaveMenuClassFv
// Address: 0x2c30d0 - 0x2c495c
void KeyStep__14CSaveMenuClassFv_0x2c30d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__14CSaveMenuClassFv_0x2c30d0");
#endif

    switch (ctx->pc) {
        case 0x2c310cu: goto label_2c310c;
        case 0x2c3168u: goto label_2c3168;
        case 0x2c31b4u: goto label_2c31b4;
        case 0x2c31d4u: goto label_2c31d4;
        case 0x2c3208u: goto label_2c3208;
        case 0x2c3210u: goto label_2c3210;
        case 0x2c324cu: goto label_2c324c;
        case 0x2c3270u: goto label_2c3270;
        case 0x2c3288u: goto label_2c3288;
        case 0x2c32a4u: goto label_2c32a4;
        case 0x2c32b4u: goto label_2c32b4;
        case 0x2c32c8u: goto label_2c32c8;
        case 0x2c32d0u: goto label_2c32d0;
        case 0x2c32dcu: goto label_2c32dc;
        case 0x2c3300u: goto label_2c3300;
        case 0x2c330cu: goto label_2c330c;
        case 0x2c3314u: goto label_2c3314;
        case 0x2c333cu: goto label_2c333c;
        case 0x2c3348u: goto label_2c3348;
        case 0x2c3354u: goto label_2c3354;
        case 0x2c33ecu: goto label_2c33ec;
        case 0x2c3410u: goto label_2c3410;
        case 0x2c3418u: goto label_2c3418;
        case 0x2c3440u: goto label_2c3440;
        case 0x2c3448u: goto label_2c3448;
        case 0x2c3464u: goto label_2c3464;
        case 0x2c3490u: goto label_2c3490;
        case 0x2c34a8u: goto label_2c34a8;
        case 0x2c34c4u: goto label_2c34c4;
        case 0x2c34e4u: goto label_2c34e4;
        case 0x2c34f4u: goto label_2c34f4;
        case 0x2c3510u: goto label_2c3510;
        case 0x2c3554u: goto label_2c3554;
        case 0x2c3570u: goto label_2c3570;
        case 0x2c3580u: goto label_2c3580;
        case 0x2c3594u: goto label_2c3594;
        case 0x2c35d0u: goto label_2c35d0;
        case 0x2c35ecu: goto label_2c35ec;
        case 0x2c3624u: goto label_2c3624;
        case 0x2c3684u: goto label_2c3684;
        case 0x2c3770u: goto label_2c3770;
        case 0x2c3780u: goto label_2c3780;
        case 0x2c37b8u: goto label_2c37b8;
        case 0x2c37fcu: goto label_2c37fc;
        case 0x2c3808u: goto label_2c3808;
        case 0x2c3834u: goto label_2c3834;
        case 0x2c383cu: goto label_2c383c;
        case 0x2c3850u: goto label_2c3850;
        case 0x2c3884u: goto label_2c3884;
        case 0x2c38acu: goto label_2c38ac;
        case 0x2c38b8u: goto label_2c38b8;
        case 0x2c38c4u: goto label_2c38c4;
        case 0x2c38e0u: goto label_2c38e0;
        case 0x2c3918u: goto label_2c3918;
        case 0x2c3924u: goto label_2c3924;
        case 0x2c3930u: goto label_2c3930;
        case 0x2c3940u: goto label_2c3940;
        case 0x2c3988u: goto label_2c3988;
        case 0x2c3994u: goto label_2c3994;
        case 0x2c39c0u: goto label_2c39c0;
        case 0x2c39d0u: goto label_2c39d0;
        case 0x2c39dcu: goto label_2c39dc;
        case 0x2c39ecu: goto label_2c39ec;
        case 0x2c39f8u: goto label_2c39f8;
        case 0x2c3a04u: goto label_2c3a04;
        case 0x2c3a10u: goto label_2c3a10;
        case 0x2c3a28u: goto label_2c3a28;
        case 0x2c3a44u: goto label_2c3a44;
        case 0x2c3a54u: goto label_2c3a54;
        case 0x2c3a60u: goto label_2c3a60;
        case 0x2c3ac8u: goto label_2c3ac8;
        case 0x2c3ad0u: goto label_2c3ad0;
        case 0x2c3af8u: goto label_2c3af8;
        case 0x2c3b18u: goto label_2c3b18;
        case 0x2c3b34u: goto label_2c3b34;
        case 0x2c3b74u: goto label_2c3b74;
        case 0x2c3b88u: goto label_2c3b88;
        case 0x2c3ba4u: goto label_2c3ba4;
        case 0x2c3bc0u: goto label_2c3bc0;
        case 0x2c3bc8u: goto label_2c3bc8;
        case 0x2c3be0u: goto label_2c3be0;
        case 0x2c3bf4u: goto label_2c3bf4;
        case 0x2c3c14u: goto label_2c3c14;
        case 0x2c3c28u: goto label_2c3c28;
        case 0x2c3c64u: goto label_2c3c64;
        case 0x2c3c8cu: goto label_2c3c8c;
        case 0x2c3ca0u: goto label_2c3ca0;
        case 0x2c3cacu: goto label_2c3cac;
        case 0x2c3cb8u: goto label_2c3cb8;
        case 0x2c3cd4u: goto label_2c3cd4;
        case 0x2c3d50u: goto label_2c3d50;
        case 0x2c3d68u: goto label_2c3d68;
        case 0x2c3d78u: goto label_2c3d78;
        case 0x2c3d88u: goto label_2c3d88;
        case 0x2c3d94u: goto label_2c3d94;
        case 0x2c3da4u: goto label_2c3da4;
        case 0x2c3db8u: goto label_2c3db8;
        case 0x2c3dccu: goto label_2c3dcc;
        case 0x2c3e20u: goto label_2c3e20;
        case 0x2c3e40u: goto label_2c3e40;
        case 0x2c3e54u: goto label_2c3e54;
        case 0x2c3e6cu: goto label_2c3e6c;
        case 0x2c3e74u: goto label_2c3e74;
        case 0x2c3e98u: goto label_2c3e98;
        case 0x2c3f04u: goto label_2c3f04;
        case 0x2c3f40u: goto label_2c3f40;
        case 0x2c3f84u: goto label_2c3f84;
        case 0x2c3fa0u: goto label_2c3fa0;
        case 0x2c3facu: goto label_2c3fac;
        case 0x2c3fbcu: goto label_2c3fbc;
        case 0x2c3fc8u: goto label_2c3fc8;
        case 0x2c3fe0u: goto label_2c3fe0;
        case 0x2c3fe8u: goto label_2c3fe8;
        case 0x2c4004u: goto label_2c4004;
        case 0x2c4020u: goto label_2c4020;
        case 0x2c403cu: goto label_2c403c;
        case 0x2c4050u: goto label_2c4050;
        case 0x2c4074u: goto label_2c4074;
        case 0x2c4094u: goto label_2c4094;
        case 0x2c40acu: goto label_2c40ac;
        case 0x2c40f8u: goto label_2c40f8;
        case 0x2c4114u: goto label_2c4114;
        case 0x2c4138u: goto label_2c4138;
        case 0x2c415cu: goto label_2c415c;
        case 0x2c41a0u: goto label_2c41a0;
        case 0x2c41b8u: goto label_2c41b8;
        case 0x2c41f4u: goto label_2c41f4;
        case 0x2c4234u: goto label_2c4234;
        case 0x2c4248u: goto label_2c4248;
        case 0x2c4274u: goto label_2c4274;
        case 0x2c428cu: goto label_2c428c;
        case 0x2c42a4u: goto label_2c42a4;
        case 0x2c42fcu: goto label_2c42fc;
        case 0x2c4320u: goto label_2c4320;
        case 0x2c4334u: goto label_2c4334;
        case 0x2c4350u: goto label_2c4350;
        case 0x2c4374u: goto label_2c4374;
        case 0x2c4388u: goto label_2c4388;
        case 0x2c43b0u: goto label_2c43b0;
        case 0x2c43dcu: goto label_2c43dc;
        case 0x2c4418u: goto label_2c4418;
        case 0x2c442cu: goto label_2c442c;
        case 0x2c4478u: goto label_2c4478;
        case 0x2c4480u: goto label_2c4480;
        case 0x2c4494u: goto label_2c4494;
        case 0x2c44a8u: goto label_2c44a8;
        case 0x2c44c8u: goto label_2c44c8;
        case 0x2c44f4u: goto label_2c44f4;
        case 0x2c4514u: goto label_2c4514;
        case 0x2c453cu: goto label_2c453c;
        case 0x2c4548u: goto label_2c4548;
        case 0x2c4570u: goto label_2c4570;
        case 0x2c457cu: goto label_2c457c;
        case 0x2c45a8u: goto label_2c45a8;
        case 0x2c45b4u: goto label_2c45b4;
        case 0x2c45f8u: goto label_2c45f8;
        case 0x2c461cu: goto label_2c461c;
        case 0x2c46a0u: goto label_2c46a0;
        case 0x2c46fcu: goto label_2c46fc;
        case 0x2c470cu: goto label_2c470c;
        case 0x2c4738u: goto label_2c4738;
        case 0x2c4744u: goto label_2c4744;
        case 0x2c477cu: goto label_2c477c;
        case 0x2c4788u: goto label_2c4788;
        case 0x2c4790u: goto label_2c4790;
        case 0x2c47f4u: goto label_2c47f4;
        case 0x2c47fcu: goto label_2c47fc;
        case 0x2c4824u: goto label_2c4824;
        case 0x2c4840u: goto label_2c4840;
        case 0x2c4854u: goto label_2c4854;
        case 0x2c486cu: goto label_2c486c;
        case 0x2c4880u: goto label_2c4880;
        case 0x2c48a0u: goto label_2c48a0;
        case 0x2c48b4u: goto label_2c48b4;
        case 0x2c48d4u: goto label_2c48d4;
        case 0x2c48e8u: goto label_2c48e8;
        case 0x2c4918u: goto label_2c4918;
        default: break;
    }

    ctx->pc = 0x2c30d0u;

    // 0x2c30d0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2c30d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2c30d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c30d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c30d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c30d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c30dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c30dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c30e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c30e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c30e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c30e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c30e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c30e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c30ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c30ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c30f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c30f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c30f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c30f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c30f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c30fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c30fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3100: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c3100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3104: 0xc0bc7f0  jal         func_2F1FC0
    ctx->pc = 0x2C3104u;
    SET_GPR_U32(ctx, 31, 0x2C310Cu);
    ctx->pc = 0x2C3108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3104u;
            // 0x2c3108: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1FC0u;
    if (runtime->hasFunction(0x2F1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C310Cu; }
        if (ctx->pc != 0x2C310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CMemoryCardManagerFv_0x2f1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C310Cu; }
        if (ctx->pc != 0x2C310Cu) { return; }
    }
    ctx->pc = 0x2C310Cu;
label_2c310c:
    // 0x2c310c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3110: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c3110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3114: 0x8c30ca48  lw          $s0, -0x35B8($at)
    ctx->pc = 0x2c3114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2c3118: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c3118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c311c: 0x83839cd0  lb          $v1, -0x6330($gp)
    ctx->pc = 0x2c311cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941904)));
    // 0x2c3120: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c3120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3124: 0x8c22ca4c  lw          $v0, -0x35B4($at)
    ctx->pc = 0x2c3124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    // 0x2c3128: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2c3128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2c312c: 0x248204d0  addiu       $v0, $a0, 0x4D0
    ctx->pc = 0x2c312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
    // 0x2c3130: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3130u;
    {
        const bool branch_taken_0x2c3130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3130u;
            // 0x2c3134: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3130) {
            ctx->pc = 0x2C3144u;
            goto label_2c3144;
        }
    }
    ctx->pc = 0x2C3138u;
    // 0x2c3138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c313c: 0xaf809ccc  sw          $zero, -0x6334($gp)
    ctx->pc = 0x2c313cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941900), GPR_U32(ctx, 0));
    // 0x2c3140: 0xa3829cd0  sb          $v0, -0x6330($gp)
    ctx->pc = 0x2c3140u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941904), (uint8_t)GPR_U32(ctx, 2));
label_2c3144:
    // 0x2c3144: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x2c3144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x2c3148: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3148u;
    {
        const bool branch_taken_0x2c3148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3148) {
            ctx->pc = 0x2C3168u;
            goto label_2c3168;
        }
    }
    ctx->pc = 0x2C3150u;
    // 0x2c3150: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2c3150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2c3154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3154u;
    {
        const bool branch_taken_0x2c3154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3154u;
            // 0x2c3158: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3154) {
            ctx->pc = 0x2C3168u;
            goto label_2c3168;
        }
    }
    ctx->pc = 0x2C315Cu;
    // 0x2c315c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3160: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2C3160u;
    SET_GPR_U32(ctx, 31, 0x2C3168u);
    ctx->pc = 0x2C3164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3160u;
            // 0x2c3164: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3168u; }
        if (ctx->pc != 0x2C3168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3168u; }
        if (ctx->pc != 0x2C3168u) { return; }
    }
    ctx->pc = 0x2C3168u;
label_2c3168:
    // 0x2c3168: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x2c3168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c316c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3170: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c3170u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3174: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2C3174u;
    {
        const bool branch_taken_0x2c3174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3174u;
            // 0x2c3178: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3174) {
            ctx->pc = 0x2C329Cu;
            goto label_2c329c;
        }
    }
    ctx->pc = 0x2C317Cu;
    // 0x2c317c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3180: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3180u;
    {
        const bool branch_taken_0x2c3180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3180) {
            ctx->pc = 0x2C3190u;
            goto label_2c3190;
        }
    }
    ctx->pc = 0x2C3188u;
    // 0x2c3188: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2C3188u;
    {
        const bool branch_taken_0x2c3188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3188u;
            // 0x2c318c: 0x83829cd8  lb          $v0, -0x6328($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3188) {
            ctx->pc = 0x2C3320u;
            goto label_2c3320;
        }
    }
    ctx->pc = 0x2C3190u;
label_2c3190:
    // 0x2c3190: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2c3190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2c3194: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C3194u;
    {
        const bool branch_taken_0x2c3194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3194u;
            // 0x2c3198: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3194) {
            ctx->pc = 0x2C3260u;
            goto label_2c3260;
        }
    }
    ctx->pc = 0x2C319Cu;
    // 0x2c319c: 0x92820110  lbu         $v0, 0x110($s4)
    ctx->pc = 0x2c319cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2c31a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C31A0u;
    {
        const bool branch_taken_0x2c31a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C31A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31A0u;
            // 0x2c31a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31a0) {
            ctx->pc = 0x2C31ACu;
            goto label_2c31ac;
        }
    }
    ctx->pc = 0x2C31A8u;
    // 0x2c31a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c31a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c31ac:
    // 0x2c31ac: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2C31ACu;
    SET_GPR_U32(ctx, 31, 0x2C31B4u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31B4u; }
        if (ctx->pc != 0x2C31B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31B4u; }
        if (ctx->pc != 0x2C31B4u) { return; }
    }
    ctx->pc = 0x2C31B4u;
label_2c31b4:
    // 0x2c31b4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C31B4u;
    {
        const bool branch_taken_0x2c31b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c31b4) {
            ctx->pc = 0x2C3288u;
            goto label_2c3288;
        }
    }
    ctx->pc = 0x2C31BCu;
    // 0x2c31bc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2c31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c31c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c31c4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c31c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c31c8: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c31c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c31cc: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2C31CCu;
    SET_GPR_U32(ctx, 31, 0x2C31D4u);
    ctx->pc = 0x2C31D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31CCu;
            // 0x2c31d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31D4u; }
        if (ctx->pc != 0x2C31D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C31D4u; }
        if (ctx->pc != 0x2C31D4u) { return; }
    }
    ctx->pc = 0x2C31D4u;
label_2c31d4:
    // 0x2c31d4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C31D4u;
    {
        const bool branch_taken_0x2c31d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C31D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C31D4u;
            // 0x2c31d8: 0x21a83  sra         $v1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c31d4) {
            ctx->pc = 0x2C31E4u;
            goto label_2c31e4;
        }
    }
    ctx->pc = 0x2C31DCu;
    // 0x2c31dc: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2c31dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2c31e0: 0x21a83  sra         $v1, $v0, 10
    ctx->pc = 0x2c31e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 10));
label_2c31e4:
    // 0x2c31e4: 0xae83013c  sw          $v1, 0x13C($s4)
    ctx->pc = 0x2c31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 3));
    // 0x2c31e8: 0x8e82013c  lw          $v0, 0x13C($s4)
    ctx->pc = 0x2c31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 316)));
    // 0x2c31ec: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c31f0: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x2c31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
    // 0x2c31f4: 0x8e82013c  lw          $v0, 0x13C($s4)
    ctx->pc = 0x2c31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 316)));
    // 0x2c31f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c31fc: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x2c31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
    // 0x2c3200: 0xc064220  jal         func_190880
    ctx->pc = 0x2C3200u;
    SET_GPR_U32(ctx, 31, 0x2C3208u);
    ctx->pc = 0x2C3204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3200u;
            // 0x2c3204: 0xaf809ccc  sw          $zero, -0x6334($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3208u; }
        if (ctx->pc != 0x2C3208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3208u; }
        if (ctx->pc != 0x2C3208u) { return; }
    }
    ctx->pc = 0x2C3208u;
label_2c3208:
    // 0x2c3208: 0xc08cae8  jal         func_232BA0
    ctx->pc = 0x2C3208u;
    SET_GPR_U32(ctx, 31, 0x2C3210u);
    ctx->pc = 0x2C320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3208u;
            // 0x2c320c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232BA0u;
    if (runtime->hasFunction(0x232BA0u)) {
        auto targetFn = runtime->lookupFunction(0x232BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3210u; }
        if (ctx->pc != 0x2C3210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStartChapter8__FP9CSaveData_0x232ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3210u; }
        if (ctx->pc != 0x2C3210u) { return; }
    }
    ctx->pc = 0x2C3210u;
label_2c3210:
    // 0x2c3210: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x2c3210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
    // 0x2c3214: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x2c3214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2c3218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c321c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C321Cu;
    {
        const bool branch_taken_0x2c321c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C321Cu;
            // 0x2c3220: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c321c) {
            ctx->pc = 0x2C322Cu;
            goto label_2c322c;
        }
    }
    ctx->pc = 0x2C3224u;
    // 0x2c3224: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3224u;
    {
        const bool branch_taken_0x2c3224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3224) {
            ctx->pc = 0x2C3230u;
            goto label_2c3230;
        }
    }
    ctx->pc = 0x2C322Cu;
label_2c322c:
    // 0x2c322c: 0xae80014c  sw          $zero, 0x14C($s4)
    ctx->pc = 0x2c322cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 0));
label_2c3230:
    // 0x2c3230: 0x8e83014c  lw          $v1, 0x14C($s4)
    ctx->pc = 0x2c3230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 332)));
    // 0x2c3234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3238: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3238u;
    {
        const bool branch_taken_0x2c3238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3238u;
            // 0x2c323c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3238) {
            ctx->pc = 0x2C3258u;
            goto label_2c3258;
        }
    }
    ctx->pc = 0x2C3240u;
    // 0x2c3240: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3244: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3244u;
    SET_GPR_U32(ctx, 31, 0x2C324Cu);
    ctx->pc = 0x2C3248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3244u;
            // 0x2c3248: 0x24a5fb88  addiu       $a1, $a1, -0x478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C324Cu; }
        if (ctx->pc != 0x2C324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C324Cu; }
        if (ctx->pc != 0x2C324Cu) { return; }
    }
    ctx->pc = 0x2C324Cu;
label_2c324c:
    // 0x2c324c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3250: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C3250u;
    {
        const bool branch_taken_0x2c3250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3250u;
            // 0x2c3254: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3250) {
            ctx->pc = 0x2C3288u;
            goto label_2c3288;
        }
    }
    ctx->pc = 0x2C3258u;
label_2c3258:
    // 0x2c3258: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C3258u;
    {
        const bool branch_taken_0x2c3258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C325Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3258u;
            // 0x2c325c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3258) {
            ctx->pc = 0x2C3288u;
            goto label_2c3288;
        }
    }
    ctx->pc = 0x2C3260u;
label_2c3260:
    // 0x2c3260: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3260u;
    {
        const bool branch_taken_0x2c3260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3260) {
            ctx->pc = 0x2C3288u;
            goto label_2c3288;
        }
    }
    ctx->pc = 0x2C3268u;
    // 0x2c3268: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x2C3268u;
    SET_GPR_U32(ctx, 31, 0x2C3270u);
    ctx->pc = 0x2C326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3268u;
            // 0x2c326c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3270u; }
        if (ctx->pc != 0x2C3270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3270u; }
        if (ctx->pc != 0x2C3270u) { return; }
    }
    ctx->pc = 0x2C3270u;
label_2c3270:
    // 0x2c3270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3270u;
    {
        const bool branch_taken_0x2c3270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3270u;
            // 0x2c3274: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3270) {
            ctx->pc = 0x2C3288u;
            goto label_2c3288;
        }
    }
    ctx->pc = 0x2C3278u;
    // 0x2c3278: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c327c: 0x24a5fb98  addiu       $a1, $a1, -0x468
    ctx->pc = 0x2c327cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966168));
    // 0x2c3280: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3280u;
    SET_GPR_U32(ctx, 31, 0x2C3288u);
    ctx->pc = 0x2C3284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3280u;
            // 0x2c3284: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3288u; }
        if (ctx->pc != 0x2C3288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3288u; }
        if (ctx->pc != 0x2C3288u) { return; }
    }
    ctx->pc = 0x2C3288u;
label_2c3288:
    // 0x2c3288: 0x12400401  beqz        $s2, . + 4 + (0x401 << 2)
    ctx->pc = 0x2C3288u;
    {
        const bool branch_taken_0x2c3288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3288u;
            // 0x2c328c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3288) {
            ctx->pc = 0x2C4290u;
            goto label_2c4290;
        }
    }
    ctx->pc = 0x2C3290u;
    // 0x2c3290: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x2c3290u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c3294: 0x100003fd  b           . + 4 + (0x3FD << 2)
    ctx->pc = 0x2C3294u;
    {
        const bool branch_taken_0x2c3294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3294u;
            // 0x2c3298: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3294) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C329Cu;
label_2c329c:
    // 0x2c329c: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2C329Cu;
    SET_GPR_U32(ctx, 31, 0x2C32A4u);
    ctx->pc = 0x2C32A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C329Cu;
            // 0x2c32a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32A4u; }
        if (ctx->pc != 0x2C32A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32A4u; }
        if (ctx->pc != 0x2C32A4u) { return; }
    }
    ctx->pc = 0x2C32A4u;
label_2c32a4:
    // 0x2c32a4: 0x104003f9  beqz        $v0, . + 4 + (0x3F9 << 2)
    ctx->pc = 0x2C32A4u;
    {
        const bool branch_taken_0x2c32a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c32a4) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C32ACu;
    // 0x2c32ac: 0xc0bc668  jal         func_2F19A0
    ctx->pc = 0x2C32ACu;
    SET_GPR_U32(ctx, 31, 0x2C32B4u);
    ctx->pc = 0x2C32B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32ACu;
            // 0x2c32b0: 0x8f849cc4  lw          $a0, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F19A0u;
    if (runtime->hasFunction(0x2F19A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F19A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32B4u; }
        if (ctx->pc != 0x2C32B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FinishForMC__18CMemoryCardManagerFv_0x2f19a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32B4u; }
        if (ctx->pc != 0x2C32B4u) { return; }
    }
    ctx->pc = 0x2C32B4u;
label_2c32b4:
    // 0x2c32b4: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x2c32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2c32b8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C32B8u;
    {
        const bool branch_taken_0x2c32b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C32BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32B8u;
            // 0x2c32bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32b8) {
            ctx->pc = 0x2C3318u;
            goto label_2c3318;
        }
    }
    ctx->pc = 0x2C32C0u;
    // 0x2c32c0: 0xc0b1460  jal         func_2C5180
    ctx->pc = 0x2C32C0u;
    SET_GPR_U32(ctx, 31, 0x2C32C8u);
    ctx->pc = 0x2C5180u;
    if (runtime->hasFunction(0x2C5180u)) {
        auto targetFn = runtime->lookupFunction(0x2C5180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32C8u; }
        if (ctx->pc != 0x2C32C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMapInfo__Fv_0x2c5180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32C8u; }
        if (ctx->pc != 0x2C32C8u) { return; }
    }
    ctx->pc = 0x2C32C8u;
label_2c32c8:
    // 0x2c32c8: 0xc0942d4  jal         func_250B50
    ctx->pc = 0x2C32C8u;
    SET_GPR_U32(ctx, 31, 0x2C32D0u);
    ctx->pc = 0x250B50u;
    if (runtime->hasFunction(0x250B50u)) {
        auto targetFn = runtime->lookupFunction(0x250B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32D0u; }
        if (ctx->pc != 0x2C32D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReStartEnvSoundMenu__Fv_0x250b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32D0u; }
        if (ctx->pc != 0x2C32D0u) { return; }
    }
    ctx->pc = 0x2C32D0u;
label_2c32d0:
    // 0x2c32d0: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c32d4: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2C32D4u;
    SET_GPR_U32(ctx, 31, 0x2C32DCu);
    ctx->pc = 0x2C32D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32D4u;
            // 0x2c32d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32DCu; }
        if (ctx->pc != 0x2C32DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C32DCu; }
        if (ctx->pc != 0x2C32DCu) { return; }
    }
    ctx->pc = 0x2C32DCu;
label_2c32dc:
    // 0x2c32dc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c32dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c32e0: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c32e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c32e4: 0x8c23d284  lw          $v1, -0x2D7C($at)
    ctx->pc = 0x2c32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955652)));
    // 0x2c32e8: 0x8e85015c  lw          $a1, 0x15C($s4)
    ctx->pc = 0x2c32e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x2c32ec: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c32ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2c32f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2c32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c32f4: 0x8c22d280  lw          $v0, -0x2D80($at)
    ctx->pc = 0x2c32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955648)));
    // 0x2c32f8: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2C32F8u;
    SET_GPR_U32(ctx, 31, 0x2C3300u);
    ctx->pc = 0x2C32FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C32F8u;
            // 0x2c32fc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3300u; }
        if (ctx->pc != 0x2C3300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3300u; }
        if (ctx->pc != 0x2C3300u) { return; }
    }
    ctx->pc = 0x2C3300u;
label_2c3300:
    // 0x2c3300: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2c3300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2c3304: 0xc0a9960  jal         func_2A6580
    ctx->pc = 0x2C3304u;
    SET_GPR_U32(ctx, 31, 0x2C330Cu);
    ctx->pc = 0x2C3308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3304u;
            // 0x2c3308: 0x26850158  addiu       $a1, $s4, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C330Cu; }
        if (ctx->pc != 0x2C330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C330Cu; }
        if (ctx->pc != 0x2C330Cu) { return; }
    }
    ctx->pc = 0x2C330Cu;
label_2c330c:
    // 0x2c330c: 0xc0a9e50  jal         func_2A7940
    ctx->pc = 0x2C330Cu;
    SET_GPR_U32(ctx, 31, 0x2C3314u);
    ctx->pc = 0x2C3310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C330Cu;
            // 0x2c3310: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    if (runtime->hasFunction(0x2A7940u)) {
        auto targetFn = runtime->lookupFunction(0x2A7940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3314u; }
        if (ctx->pc != 0x2C3314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepSnd__6CSceneFv_0x2a7940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3314u; }
        if (ctx->pc != 0x2C3314u) { return; }
    }
    ctx->pc = 0x2C3314u;
label_2c3314:
    // 0x2c3314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3318:
    // 0x2c3318: 0x100003dc  b           . + 4 + (0x3DC << 2)
    ctx->pc = 0x2C3318u;
    {
        const bool branch_taken_0x2c3318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C331Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3318u;
            // 0x2c331c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3318) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3320u;
label_2c3320:
    // 0x2c3320: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3320u;
    {
        const bool branch_taken_0x2c3320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3320) {
            ctx->pc = 0x2C3330u;
            goto label_2c3330;
        }
    }
    ctx->pc = 0x2C3328u;
    // 0x2c3328: 0xa3839cd8  sb          $v1, -0x6328($gp)
    ctx->pc = 0x2c3328u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941912), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c332c: 0xaf809cd4  sw          $zero, -0x632C($gp)
    ctx->pc = 0x2c332cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941908), GPR_U32(ctx, 0));
label_2c3330:
    // 0x2c3330: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c3330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c3334: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x2C3334u;
    SET_GPR_U32(ctx, 31, 0x2C333Cu);
    ctx->pc = 0x2C3338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3334u;
            // 0x2c3338: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C333Cu; }
        if (ctx->pc != 0x2C333Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C333Cu; }
        if (ctx->pc != 0x2C333Cu) { return; }
    }
    ctx->pc = 0x2C333Cu;
label_2c333c:
    // 0x2c333c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c333cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c3340: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x2C3340u;
    SET_GPR_U32(ctx, 31, 0x2C3348u);
    ctx->pc = 0x2C3344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3340u;
            // 0x2c3344: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3348u; }
        if (ctx->pc != 0x2C3348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3348u; }
        if (ctx->pc != 0x2C3348u) { return; }
    }
    ctx->pc = 0x2C3348u;
label_2c3348:
    // 0x2c3348: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c3348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c334c: 0xc08f840  jal         func_23E100
    ctx->pc = 0x2C334Cu;
    SET_GPR_U32(ctx, 31, 0x2C3354u);
    ctx->pc = 0x2C3350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C334Cu;
            // 0x2c3350: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3354u; }
        if (ctx->pc != 0x2C3354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3354u; }
        if (ctx->pc != 0x2C3354u) { return; }
    }
    ctx->pc = 0x2C3354u;
label_2c3354:
    // 0x2c3354: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c3354u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3358: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2c3358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2c335c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C335Cu;
    {
        const bool branch_taken_0x2c335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C335Cu;
            // 0x2c3360: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c335c) {
            ctx->pc = 0x2C3368u;
            goto label_2c3368;
        }
    }
    ctx->pc = 0x2C3364u;
    // 0x2c3364: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2c3364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2c3368:
    // 0x2c3368: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3368u;
    {
        const bool branch_taken_0x2c3368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3368) {
            ctx->pc = 0x2C3374u;
            goto label_2c3374;
        }
    }
    ctx->pc = 0x2C3370u;
    // 0x2c3370: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c3370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2c3374:
    // 0x2c3374: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x2c3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x2c3378: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x2c3378u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c337c: 0x102003c3  beqz        $at, . + 4 + (0x3C3 << 2)
    ctx->pc = 0x2C337Cu;
    {
        const bool branch_taken_0x2c337c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C337Cu;
            // 0x2c3380: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c337c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3384u;
    // 0x2c3384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3388: 0x2463fc90  addiu       $v1, $v1, -0x370
    ctx->pc = 0x2c3388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966416));
    // 0x2c338c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3390: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3394: 0x400008  jr          $v0
    ctx->pc = 0x2C3394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C339Cu: goto label_2c339c;
            case 0x2C3518u: goto label_2c3518;
            case 0x2C3588u: goto label_2c3588;
            case 0x2C362Cu: goto label_2c362c;
            case 0x2C3F0Cu: goto label_2c3f0c;
            case 0x2C40B4u: goto label_2c40b4;
            case 0x2C4164u: goto label_2c4164;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C339Cu;
label_2c339c:
    // 0x2c339c: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2c339cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2c33a0: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C33A0u;
    {
        const bool branch_taken_0x2c33a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33A0u;
            // 0x2c33a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33a0) {
            ctx->pc = 0x2C34B4u;
            goto label_2c34b4;
        }
    }
    ctx->pc = 0x2C33A8u;
    // 0x2c33a8: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x2c33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c33ac: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x2c33acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2c33b0: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x2c33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x2c33b4: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c33b8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C33B8u;
    {
        const bool branch_taken_0x2c33b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c33b8) {
            ctx->pc = 0x2C33C4u;
            goto label_2c33c4;
        }
    }
    ctx->pc = 0x2C33C0u;
    // 0x2c33c0: 0xae800120  sw          $zero, 0x120($s4)
    ctx->pc = 0x2c33c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
label_2c33c4:
    // 0x2c33c4: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c33c8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2c33c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c33cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C33CCu;
    {
        const bool branch_taken_0x2c33cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C33D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33CCu;
            // 0x2c33d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33cc) {
            ctx->pc = 0x2C33D8u;
            goto label_2c33d8;
        }
    }
    ctx->pc = 0x2C33D4u;
    // 0x2c33d4: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x2c33d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
label_2c33d8:
    // 0x2c33d8: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c33dc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C33DCu;
    {
        const bool branch_taken_0x2c33dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C33E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C33DCu;
            // 0x2c33e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33dc) {
            ctx->pc = 0x2C33ECu;
            goto label_2c33ec;
        }
    }
    ctx->pc = 0x2C33E4u;
    // 0x2c33e4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C33E4u;
    SET_GPR_U32(ctx, 31, 0x2C33ECu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C33ECu; }
        if (ctx->pc != 0x2C33ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C33ECu; }
        if (ctx->pc != 0x2C33ECu) { return; }
    }
    ctx->pc = 0x2C33ECu;
label_2c33ec:
    // 0x2c33ec: 0x8e840184  lw          $a0, 0x184($s4)
    ctx->pc = 0x2c33ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 388)));
    // 0x2c33f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C33F0u;
    {
        const bool branch_taken_0x2c33f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c33f0) {
            ctx->pc = 0x2C3410u;
            goto label_2c3410;
        }
    }
    ctx->pc = 0x2C33F8u;
    // 0x2c33f8: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x2c33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c33fc: 0x27828518  addiu       $v0, $gp, -0x7AE8
    ctx->pc = 0x2c33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935832));
    // 0x2c3400: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3408: 0xc08a240  jal         func_228900
    ctx->pc = 0x2C3408u;
    SET_GPR_U32(ctx, 31, 0x2C3410u);
    ctx->pc = 0x2C340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3408u;
            // 0x2c340c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3410u; }
        if (ctx->pc != 0x2C3410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3410u; }
        if (ctx->pc != 0x2C3410u) { return; }
    }
    ctx->pc = 0x2C3410u;
label_2c3410:
    // 0x2c3410: 0xc08f8b8  jal         func_23E2E0
    ctx->pc = 0x2C3410u;
    SET_GPR_U32(ctx, 31, 0x2C3418u);
    ctx->pc = 0x2C3414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3410u;
            // 0x2c3414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E2E0u;
    if (runtime->hasFunction(0x23E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3418u; }
        if (ctx->pc != 0x2C3418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCheckPushButton__Fi_0x23e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3418u; }
        if (ctx->pc != 0x2C3418u) { return; }
    }
    ctx->pc = 0x2C3418u;
label_2c3418:
    // 0x2c3418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c341c: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C341Cu;
    {
        const bool branch_taken_0x2c341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C3420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C341Cu;
            // 0x2c3420: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c341c) {
            ctx->pc = 0x2C345Cu;
            goto label_2c345c;
        }
    }
    ctx->pc = 0x2C3424u;
    // 0x2c3424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3428: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3428u;
    {
        const bool branch_taken_0x2c3428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c3428) {
            ctx->pc = 0x2C3438u;
            goto label_2c3438;
        }
    }
    ctx->pc = 0x2C3430u;
    // 0x2c3430: 0x10000396  b           . + 4 + (0x396 << 2)
    ctx->pc = 0x2C3430u;
    {
        const bool branch_taken_0x2c3430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3430) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3438u;
label_2c3438:
    // 0x2c3438: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3438u;
    SET_GPR_U32(ctx, 31, 0x2C3440u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3440u; }
        if (ctx->pc != 0x2C3440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3440u; }
        if (ctx->pc != 0x2C3440u) { return; }
    }
    ctx->pc = 0x2C3440u;
label_2c3440:
    // 0x2c3440: 0xc0bc7b4  jal         func_2F1ED0
    ctx->pc = 0x2C3440u;
    SET_GPR_U32(ctx, 31, 0x2C3448u);
    ctx->pc = 0x2C3444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3440u;
            // 0x2c3444: 0x8f849cc4  lw          $a0, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1ED0u;
    if (runtime->hasFunction(0x2F1ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3448u; }
        if (ctx->pc != 0x2C3448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlayDataInfo__18CMemoryCardManagerFv_0x2f1ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3448u; }
        if (ctx->pc != 0x2C3448u) { return; }
    }
    ctx->pc = 0x2C3448u;
label_2c3448:
    // 0x2c3448: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x2c3448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c344c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2c344cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3450: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c3450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3454: 0x1000038d  b           . + 4 + (0x38D << 2)
    ctx->pc = 0x2C3454u;
    {
        const bool branch_taken_0x2c3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3454u;
            // 0x2c3458: 0xac4304c8  sw          $v1, 0x4C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3454) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C345Cu;
label_2c345c:
    // 0x2c345c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C345Cu;
    SET_GPR_U32(ctx, 31, 0x2C3464u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3464u; }
        if (ctx->pc != 0x2C3464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3464u; }
        if (ctx->pc != 0x2C3464u) { return; }
    }
    ctx->pc = 0x2C3464u;
label_2c3464:
    // 0x2c3464: 0x8e820150  lw          $v0, 0x150($s4)
    ctx->pc = 0x2c3464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x2c3468: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C3468u;
    {
        const bool branch_taken_0x2c3468 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2c3468) {
            ctx->pc = 0x2C3498u;
            goto label_2c3498;
        }
    }
    ctx->pc = 0x2C3470u;
    // 0x2c3470: 0x8e83014c  lw          $v1, 0x14C($s4)
    ctx->pc = 0x2c3470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 332)));
    // 0x2c3474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3478: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3478u;
    {
        const bool branch_taken_0x2c3478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3478u;
            // 0x2c347c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3478) {
            ctx->pc = 0x2C3498u;
            goto label_2c3498;
        }
    }
    ctx->pc = 0x2C3480u;
    // 0x2c3480: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2c3480u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3484: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3488: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3488u;
    SET_GPR_U32(ctx, 31, 0x2C3490u);
    ctx->pc = 0x2C348Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3488u;
            // 0x2c348c: 0x24a5fba8  addiu       $a1, $a1, -0x458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3490u; }
        if (ctx->pc != 0x2C3490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3490u; }
        if (ctx->pc != 0x2C3490u) { return; }
    }
    ctx->pc = 0x2C3490u;
label_2c3490:
    // 0x2c3490: 0x1000037e  b           . + 4 + (0x37E << 2)
    ctx->pc = 0x2C3490u;
    {
        const bool branch_taken_0x2c3490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3490) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3498u;
label_2c3498:
    // 0x2c3498: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c3498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c349c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34a0: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2C34A0u;
    SET_GPR_U32(ctx, 31, 0x2C34A8u);
    ctx->pc = 0x2C34A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34A0u;
            // 0x2c34a4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34A8u; }
        if (ctx->pc != 0x2C34A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34A8u; }
        if (ctx->pc != 0x2C34A8u) { return; }
    }
    ctx->pc = 0x2C34A8u;
label_2c34a8:
    // 0x2c34a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c34ac: 0x10000377  b           . + 4 + (0x377 << 2)
    ctx->pc = 0x2C34ACu;
    {
        const bool branch_taken_0x2c34ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34ACu;
            // 0x2c34b0: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34ac) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C34B4u;
label_2c34b4:
    // 0x2c34b4: 0x14620375  bne         $v1, $v0, . + 4 + (0x375 << 2)
    ctx->pc = 0x2C34B4u;
    {
        const bool branch_taken_0x2c34b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34B4u;
            // 0x2c34b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34b4) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C34BCu;
    // 0x2c34bc: 0xc087654  jal         func_21D950
    ctx->pc = 0x2C34BCu;
    SET_GPR_U32(ctx, 31, 0x2C34C4u);
    ctx->pc = 0x2C34C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34BCu;
            // 0x2c34c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34C4u; }
        if (ctx->pc != 0x2C34C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34C4u; }
        if (ctx->pc != 0x2C34C4u) { return; }
    }
    ctx->pc = 0x2C34C4u;
label_2c34c4:
    // 0x2c34c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c34c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c34cc: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C34CCu;
    {
        const bool branch_taken_0x2c34cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34CCu;
            // 0x2c34d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34cc) {
            ctx->pc = 0x2C34F8u;
            goto label_2c34f8;
        }
    }
    ctx->pc = 0x2C34D4u;
    // 0x2c34d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c34d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c34d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c34d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34dc: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2C34DCu;
    SET_GPR_U32(ctx, 31, 0x2C34E4u);
    ctx->pc = 0x2C34E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34DCu;
            // 0x2c34e0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34E4u; }
        if (ctx->pc != 0x2C34E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34E4u; }
        if (ctx->pc != 0x2C34E4u) { return; }
    }
    ctx->pc = 0x2C34E4u;
label_2c34e4:
    // 0x2c34e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c34e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c34ec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C34ECu;
    SET_GPR_U32(ctx, 31, 0x2C34F4u);
    ctx->pc = 0x2C34F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34ECu;
            // 0x2c34f0: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34F4u; }
        if (ctx->pc != 0x2C34F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C34F4u; }
        if (ctx->pc != 0x2C34F4u) { return; }
    }
    ctx->pc = 0x2C34F4u;
label_2c34f4:
    // 0x2c34f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c34f8:
    // 0x2c34f8: 0x16420364  bne         $s2, $v0, . + 4 + (0x364 << 2)
    ctx->pc = 0x2C34F8u;
    {
        const bool branch_taken_0x2c34f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C34FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34F8u;
            // 0x2c34fc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34f8) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3500u;
    // 0x2c3500: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3504: 0x24a5fbb8  addiu       $a1, $a1, -0x448
    ctx->pc = 0x2c3504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966200));
    // 0x2c3508: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3508u;
    SET_GPR_U32(ctx, 31, 0x2C3510u);
    ctx->pc = 0x2C350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3508u;
            // 0x2c350c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3510u; }
        if (ctx->pc != 0x2C3510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3510u; }
        if (ctx->pc != 0x2C3510u) { return; }
    }
    ctx->pc = 0x2C3510u;
label_2c3510:
    // 0x2c3510: 0x1000035e  b           . + 4 + (0x35E << 2)
    ctx->pc = 0x2C3510u;
    {
        const bool branch_taken_0x2c3510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3510) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3518u;
label_2c3518:
    // 0x2c3518: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2c3518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c351c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C351Cu;
    {
        const bool branch_taken_0x2c351c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C351Cu;
            // 0x2c3520: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c351c) {
            ctx->pc = 0x2C3530u;
            goto label_2c3530;
        }
    }
    ctx->pc = 0x2C3524u;
    // 0x2c3524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3528: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3528u;
    {
        const bool branch_taken_0x2c3528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3528) {
            ctx->pc = 0x2C3540u;
            goto label_2c3540;
        }
    }
    ctx->pc = 0x2C3530u;
label_2c3530:
    // 0x2c3530: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c3530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c3534: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c3534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3538: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3538u;
    {
        const bool branch_taken_0x2c3538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3538u;
            // 0x2c353c: 0x24440d5c  addiu       $a0, $v0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3538) {
            ctx->pc = 0x2C3544u;
            goto label_2c3544;
        }
    }
    ctx->pc = 0x2C3540u;
label_2c3540:
    // 0x2c3540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3544:
    // 0x2c3544: 0x12c00351  beqz        $s6, . + 4 + (0x351 << 2)
    ctx->pc = 0x2C3544u;
    {
        const bool branch_taken_0x2c3544 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3544) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C354Cu;
    // 0x2c354c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C354Cu;
    SET_GPR_U32(ctx, 31, 0x2C3554u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3554u; }
        if (ctx->pc != 0x2C3554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3554u; }
        if (ctx->pc != 0x2C3554u) { return; }
    }
    ctx->pc = 0x2C3554u;
label_2c3554:
    // 0x2c3554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3554u;
    {
        const bool branch_taken_0x2c3554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3554u;
            // 0x2c3558: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3554) {
            ctx->pc = 0x2C3564u;
            goto label_2c3564;
        }
    }
    ctx->pc = 0x2C355Cu;
    // 0x2c355c: 0x1000034b  b           . + 4 + (0x34B << 2)
    ctx->pc = 0x2C355Cu;
    {
        const bool branch_taken_0x2c355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c355c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3564u;
label_2c3564:
    // 0x2c3564: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c3564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3568: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C3568u;
    SET_GPR_U32(ctx, 31, 0x2C3570u);
    ctx->pc = 0x2C356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3568u;
            // 0x2c356c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3570u; }
        if (ctx->pc != 0x2C3570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3570u; }
        if (ctx->pc != 0x2C3570u) { return; }
    }
    ctx->pc = 0x2C3570u;
label_2c3570:
    // 0x2c3570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3578: 0xc08891c  jal         func_222470
    ctx->pc = 0x2C3578u;
    SET_GPR_U32(ctx, 31, 0x2C3580u);
    ctx->pc = 0x2C357Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3578u;
            // 0x2c357c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3580u; }
        if (ctx->pc != 0x2C3580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3580u; }
        if (ctx->pc != 0x2C3580u) { return; }
    }
    ctx->pc = 0x2C3580u;
label_2c3580:
    // 0x2c3580: 0x10000342  b           . + 4 + (0x342 << 2)
    ctx->pc = 0x2C3580u;
    {
        const bool branch_taken_0x2c3580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3580) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3588u;
label_2c3588:
    // 0x2c3588: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c3588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c358c: 0xc088930  jal         func_2224C0
    ctx->pc = 0x2C358Cu;
    SET_GPR_U32(ctx, 31, 0x2C3594u);
    ctx->pc = 0x2C3590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C358Cu;
            // 0x2c3590: 0x8c440914  lw          $a0, 0x914($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2224C0u;
    if (runtime->hasFunction(0x2224C0u)) {
        auto targetFn = runtime->lookupFunction(0x2224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3594u; }
        if (ctx->pc != 0x2C3594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl2__Fi_0x2224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3594u; }
        if (ctx->pc != 0x2C3594u) { return; }
    }
    ctx->pc = 0x2C3594u;
label_2c3594:
    // 0x2c3594: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2c3594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c3598: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3598u;
    {
        const bool branch_taken_0x2c3598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3598u;
            // 0x2c359c: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3598) {
            ctx->pc = 0x2C35ACu;
            goto label_2c35ac;
        }
    }
    ctx->pc = 0x2C35A0u;
    // 0x2c35a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c35a4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C35A4u;
    {
        const bool branch_taken_0x2c35a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c35a4) {
            ctx->pc = 0x2C35BCu;
            goto label_2c35bc;
        }
    }
    ctx->pc = 0x2C35ACu;
label_2c35ac:
    // 0x2c35ac: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c35acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c35b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c35b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C35B4u;
    {
        const bool branch_taken_0x2c35b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C35B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C35B4u;
            // 0x2c35b8: 0x24440d5c  addiu       $a0, $v0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c35b4) {
            ctx->pc = 0x2C35C0u;
            goto label_2c35c0;
        }
    }
    ctx->pc = 0x2C35BCu;
label_2c35bc:
    // 0x2c35bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c35bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c35c0:
    // 0x2c35c0: 0x12c00332  beqz        $s6, . + 4 + (0x332 << 2)
    ctx->pc = 0x2C35C0u;
    {
        const bool branch_taken_0x2c35c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35c0) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C35C8u;
    // 0x2c35c8: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C35C8u;
    SET_GPR_U32(ctx, 31, 0x2C35D0u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C35D0u; }
        if (ctx->pc != 0x2C35D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C35D0u; }
        if (ctx->pc != 0x2C35D0u) { return; }
    }
    ctx->pc = 0x2C35D0u;
label_2c35d0:
    // 0x2c35d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C35D0u;
    {
        const bool branch_taken_0x2c35d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C35D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C35D0u;
            // 0x2c35d4: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c35d0) {
            ctx->pc = 0x2C35E0u;
            goto label_2c35e0;
        }
    }
    ctx->pc = 0x2C35D8u;
    // 0x2c35d8: 0x1000032c  b           . + 4 + (0x32C << 2)
    ctx->pc = 0x2C35D8u;
    {
        const bool branch_taken_0x2c35d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35d8) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C35E0u;
label_2c35e0:
    // 0x2c35e0: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c35e4: 0xc0bc75c  jal         func_2F1D70
    ctx->pc = 0x2C35E4u;
    SET_GPR_U32(ctx, 31, 0x2C35ECu);
    ctx->pc = 0x2C35E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C35E4u;
            // 0x2c35e8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D70u;
    if (runtime->hasFunction(0x2F1D70u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C35ECu; }
        if (ctx->pc != 0x2C35ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUpdateFile__18CMemoryCardManagerFv_0x2f1d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C35ECu; }
        if (ctx->pc != 0x2C35ECu) { return; }
    }
    ctx->pc = 0x2C35ECu;
label_2c35ec:
    // 0x2c35ec: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C35ECu;
    {
        const bool branch_taken_0x2c35ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c35ec) {
            ctx->pc = 0x2C35F8u;
            goto label_2c35f8;
        }
    }
    ctx->pc = 0x2C35F4u;
    // 0x2c35f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c35f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c35f8:
    // 0x2c35f8: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x2c35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
    // 0x2c35fc: 0x8e820114  lw          $v0, 0x114($s4)
    ctx->pc = 0x2c35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2c3600: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x2c3600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
    // 0x2c3604: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x2c3604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x2c3608: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x2c3608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2c360c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C360Cu;
    {
        const bool branch_taken_0x2c360c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C360Cu;
            // 0x2c3610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c360c) {
            ctx->pc = 0x2C361Cu;
            goto label_2c361c;
        }
    }
    ctx->pc = 0x2C3614u;
    // 0x2c3614: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c3614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c3618: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x2c3618u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
label_2c361c:
    // 0x2c361c: 0xc08891c  jal         func_222470
    ctx->pc = 0x2C361Cu;
    SET_GPR_U32(ctx, 31, 0x2C3624u);
    ctx->pc = 0x2C3620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C361Cu;
            // 0x2c3620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3624u; }
        if (ctx->pc != 0x2C3624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3624u; }
        if (ctx->pc != 0x2C3624u) { return; }
    }
    ctx->pc = 0x2C3624u;
label_2c3624:
    // 0x2c3624: 0x10000319  b           . + 4 + (0x319 << 2)
    ctx->pc = 0x2C3624u;
    {
        const bool branch_taken_0x2c3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3624) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C362Cu;
label_2c362c:
    // 0x2c362c: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2c362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c3630: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3630u;
    {
        const bool branch_taken_0x2c3630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3630u;
            // 0x2c3634: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3630) {
            ctx->pc = 0x2C3644u;
            goto label_2c3644;
        }
    }
    ctx->pc = 0x2C3638u;
    // 0x2c3638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c363c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C363Cu;
    {
        const bool branch_taken_0x2c363c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C363Cu;
            // 0x2c3640: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c363c) {
            ctx->pc = 0x2C3650u;
            goto label_2c3650;
        }
    }
    ctx->pc = 0x2C3644u;
label_2c3644:
    // 0x2c3644: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c3644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c3648: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c364c: 0x24530d5c  addiu       $s3, $v0, 0xD5C
    ctx->pc = 0x2c364cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2c3650:
    // 0x2c3650: 0x8e83012c  lw          $v1, 0x12C($s4)
    ctx->pc = 0x2c3650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x2c3654: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3654u;
    {
        const bool branch_taken_0x2c3654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3654u;
            // 0x2c3658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3654) {
            ctx->pc = 0x2C366Cu;
            goto label_2c366c;
        }
    }
    ctx->pc = 0x2C365Cu;
    // 0x2c365c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C365Cu;
    {
        const bool branch_taken_0x2c365c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C365Cu;
            // 0x2c3660: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c365c) {
            ctx->pc = 0x2C366Cu;
            goto label_2c366c;
        }
    }
    ctx->pc = 0x2C3664u;
    // 0x2c3664: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C3664u;
    {
        const bool branch_taken_0x2c3664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3664) {
            ctx->pc = 0x2C36A0u;
            goto label_2c36a0;
        }
    }
    ctx->pc = 0x2C366Cu;
label_2c366c:
    // 0x2c366c: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2c366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
    // 0x2c3670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3674: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3674u;
    {
        const bool branch_taken_0x2c3674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C3678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3674u;
            // 0x2c3678: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3674) {
            ctx->pc = 0x2C36A0u;
            goto label_2c36a0;
        }
    }
    ctx->pc = 0x2C367Cu;
    // 0x2c367c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C367Cu;
    SET_GPR_U32(ctx, 31, 0x2C3684u);
    ctx->pc = 0x2C3680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C367Cu;
            // 0x2c3680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3684u; }
        if (ctx->pc != 0x2C3684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3684u; }
        if (ctx->pc != 0x2C3684u) { return; }
    }
    ctx->pc = 0x2C3684u;
label_2c3684:
    // 0x2c3684: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2c3684u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c3688: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3688u;
    {
        const bool branch_taken_0x2c3688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3688u;
            // 0x2c368c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3688) {
            ctx->pc = 0x2C36A0u;
            goto label_2c36a0;
        }
    }
    ctx->pc = 0x2C3690u;
    // 0x2c3690: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x2c3690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3694: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x2c3694u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
    // 0x2c3698: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x2C3698u;
    {
        const bool branch_taken_0x2c3698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3698u;
            // 0x2c369c: 0xae80012c  sw          $zero, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3698) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C36A0u;
label_2c36a0:
    // 0x2c36a0: 0x83829ce0  lb          $v0, -0x6320($gp)
    ctx->pc = 0x2c36a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941920)));
    // 0x2c36a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C36A4u;
    {
        const bool branch_taken_0x2c36a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C36A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36A4u;
            // 0x2c36a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36a4) {
            ctx->pc = 0x2C36B4u;
            goto label_2c36b4;
        }
    }
    ctx->pc = 0x2C36ACu;
    // 0x2c36ac: 0xa3809cdc  sb          $zero, -0x6324($gp)
    ctx->pc = 0x2c36acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c36b0: 0xa3829ce0  sb          $v0, -0x6320($gp)
    ctx->pc = 0x2c36b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941920), (uint8_t)GPR_U32(ctx, 2));
label_2c36b4:
    // 0x2c36b4: 0x8e83012c  lw          $v1, 0x12C($s4)
    ctx->pc = 0x2c36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x2c36b8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2c36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c36bc: 0x1062020c  beq         $v1, $v0, . + 4 + (0x20C << 2)
    ctx->pc = 0x2C36BCu;
    {
        const bool branch_taken_0x2c36bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C36C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36BCu;
            // 0x2c36c0: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36bc) {
            ctx->pc = 0x2C3EF0u;
            goto label_2c3ef0;
        }
    }
    ctx->pc = 0x2C36C4u;
    // 0x2c36c4: 0x106201ed  beq         $v1, $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x2C36C4u;
    {
        const bool branch_taken_0x2c36c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C36C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36C4u;
            // 0x2c36c8: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36c4) {
            ctx->pc = 0x2C3E7Cu;
            goto label_2c3e7c;
        }
    }
    ctx->pc = 0x2C36CCu;
    // 0x2c36cc: 0x106201bc  beq         $v1, $v0, . + 4 + (0x1BC << 2)
    ctx->pc = 0x2C36CCu;
    {
        const bool branch_taken_0x2c36cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C36D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36CCu;
            // 0x2c36d0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36cc) {
            ctx->pc = 0x2C3DC0u;
            goto label_2c3dc0;
        }
    }
    ctx->pc = 0x2C36D4u;
    // 0x2c36d4: 0x10620170  beq         $v1, $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x2C36D4u;
    {
        const bool branch_taken_0x2c36d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C36D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36D4u;
            // 0x2c36d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36d4) {
            ctx->pc = 0x2C3C98u;
            goto label_2c3c98;
        }
    }
    ctx->pc = 0x2C36DCu;
    // 0x2c36dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c36e0: 0x1062014e  beq         $v1, $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x2C36E0u;
    {
        const bool branch_taken_0x2c36e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C36E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36E0u;
            // 0x2c36e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36e0) {
            ctx->pc = 0x2C3C1Cu;
            goto label_2c3c1c;
        }
    }
    ctx->pc = 0x2C36E8u;
    // 0x2c36e8: 0x1062013b  beq         $v1, $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x2C36E8u;
    {
        const bool branch_taken_0x2c36e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C36ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36E8u;
            // 0x2c36ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36e8) {
            ctx->pc = 0x2C3BD8u;
            goto label_2c3bd8;
        }
    }
    ctx->pc = 0x2C36F0u;
    // 0x2c36f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c36f4: 0x1062010a  beq         $v1, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x2C36F4u;
    {
        const bool branch_taken_0x2c36f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C36F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36F4u;
            // 0x2c36f8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36f4) {
            ctx->pc = 0x2C3B20u;
            goto label_2c3b20;
        }
    }
    ctx->pc = 0x2C36FCu;
    // 0x2c36fc: 0x106202e3  beq         $v1, $v0, . + 4 + (0x2E3 << 2)
    ctx->pc = 0x2C36FCu;
    {
        const bool branch_taken_0x2c36fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36FCu;
            // 0x2c3700: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36fc) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3704u;
    // 0x2c3704: 0x106200fe  beq         $v1, $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x2C3704u;
    {
        const bool branch_taken_0x2c3704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3704u;
            // 0x2c3708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3704) {
            ctx->pc = 0x2C3B00u;
            goto label_2c3b00;
        }
    }
    ctx->pc = 0x2C370Cu;
    // 0x2c370c: 0x106200cf  beq         $v1, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2C370Cu;
    {
        const bool branch_taken_0x2c370c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C370Cu;
            // 0x2c3710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c370c) {
            ctx->pc = 0x2C3A4Cu;
            goto label_2c3a4c;
        }
    }
    ctx->pc = 0x2C3714u;
    // 0x2c3714: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3714u;
    {
        const bool branch_taken_0x2c3714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3714u;
            // 0x2c3718: 0x33c20010  andi        $v0, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3714) {
            ctx->pc = 0x2C3724u;
            goto label_2c3724;
        }
    }
    ctx->pc = 0x2C371Cu;
    // 0x2c371c: 0x100002db  b           . + 4 + (0x2DB << 2)
    ctx->pc = 0x2C371Cu;
    {
        const bool branch_taken_0x2c371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c371c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3724u;
label_2c3724:
    // 0x2c3724: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3724u;
    {
        const bool branch_taken_0x2c3724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3724u;
            // 0x2c3728: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3724) {
            ctx->pc = 0x2C3734u;
            goto label_2c3734;
        }
    }
    ctx->pc = 0x2C372Cu;
    // 0x2c372c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C372Cu;
    {
        const bool branch_taken_0x2c372c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C372Cu;
            // 0x2c3730: 0x33c20020  andi        $v0, $fp, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c372c) {
            ctx->pc = 0x2C373Cu;
            goto label_2c373c;
        }
    }
    ctx->pc = 0x2C3734u;
label_2c3734:
    // 0x2c3734: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x2c3734u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x2c3738: 0x33c20020  andi        $v0, $fp, 0x20
    ctx->pc = 0x2c3738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)32);
label_2c373c:
    // 0x2c373c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C373Cu;
    {
        const bool branch_taken_0x2c373c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C373Cu;
            // 0x2c3740: 0x33c20080  andi        $v0, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c373c) {
            ctx->pc = 0x2C374Cu;
            goto label_2c374c;
        }
    }
    ctx->pc = 0x2C3744u;
    // 0x2c3744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3744u;
    {
        const bool branch_taken_0x2c3744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3744u;
            // 0x2c3748: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3744) {
            ctx->pc = 0x2C3754u;
            goto label_2c3754;
        }
    }
    ctx->pc = 0x2C374Cu;
label_2c374c:
    // 0x2c374c: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x2c374cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2c3750: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c3754:
    // 0x2c3754: 0x26850114  addiu       $a1, $s4, 0x114
    ctx->pc = 0x2c3754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 276));
    // 0x2c3758: 0x26860118  addiu       $a2, $s4, 0x118
    ctx->pc = 0x2c3758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
    // 0x2c375c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c375cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3760: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2c3760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3764: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2c3764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3768: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x2C3768u;
    SET_GPR_U32(ctx, 31, 0x2C3770u);
    ctx->pc = 0x2C376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3768u;
            // 0x2c376c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3770u; }
        if (ctx->pc != 0x2C3770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3770u; }
        if (ctx->pc != 0x2C3770u) { return; }
    }
    ctx->pc = 0x2C3770u;
label_2c3770:
    // 0x2c3770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3770u;
    {
        const bool branch_taken_0x2c3770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3770u;
            // 0x2c3774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3770) {
            ctx->pc = 0x2C3788u;
            goto label_2c3788;
        }
    }
    ctx->pc = 0x2C3778u;
    // 0x2c3778: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3778u;
    SET_GPR_U32(ctx, 31, 0x2C3780u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3780u; }
        if (ctx->pc != 0x2C3780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3780u; }
        if (ctx->pc != 0x2C3780u) { return; }
    }
    ctx->pc = 0x2C3780u;
label_2c3780:
    // 0x2c3780: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3784: 0xa3829cdc  sb          $v0, -0x6324($gp)
    ctx->pc = 0x2c3784u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 2));
label_2c3788:
    // 0x2c3788: 0x8e840184  lw          $a0, 0x184($s4)
    ctx->pc = 0x2c3788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 388)));
    // 0x2c378c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C378Cu;
    {
        const bool branch_taken_0x2c378c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c378c) {
            ctx->pc = 0x2C37B8u;
            goto label_2c37b8;
        }
    }
    ctx->pc = 0x2C3794u;
    // 0x2c3794: 0x8e850114  lw          $a1, 0x114($s4)
    ctx->pc = 0x2c3794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2c3798: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c3798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c379c: 0x8e830118  lw          $v1, 0x118($s4)
    ctx->pc = 0x2c379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x2c37a0: 0x244251f8  addiu       $v0, $v0, 0x51F8
    ctx->pc = 0x2c37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20984));
    // 0x2c37a4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2c37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c37a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c37ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c37b0: 0xc08a240  jal         func_228900
    ctx->pc = 0x2C37B0u;
    SET_GPR_U32(ctx, 31, 0x2C37B8u);
    ctx->pc = 0x2C37B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C37B0u;
            // 0x2c37b4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C37B8u; }
        if (ctx->pc != 0x2C37B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C37B8u; }
        if (ctx->pc != 0x2C37B8u) { return; }
    }
    ctx->pc = 0x2C37B8u;
label_2c37b8:
    // 0x2c37b8: 0x83829cdc  lb          $v0, -0x6324($gp)
    ctx->pc = 0x2c37b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c37bc: 0x8e840114  lw          $a0, 0x114($s4)
    ctx->pc = 0x2c37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2c37c0: 0x8f839cc4  lw          $v1, -0x633C($gp)
    ctx->pc = 0x2c37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c37c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c37c8: 0xa3829cdc  sb          $v0, -0x6324($gp)
    ctx->pc = 0x2c37c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c37cc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2c37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2c37d0: 0x83829cdc  lb          $v0, -0x6324($gp)
    ctx->pc = 0x2c37d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c37d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c37d8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C37D8u;
    {
        const bool branch_taken_0x2c37d8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C37DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C37D8u;
            // 0x2c37dc: 0x24750da0  addiu       $s5, $v1, 0xDA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37d8) {
            ctx->pc = 0x2C37E4u;
            goto label_2c37e4;
        }
    }
    ctx->pc = 0x2C37E0u;
    // 0x2c37e0: 0xa3809cdc  sb          $zero, -0x6324($gp)
    ctx->pc = 0x2c37e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 0));
label_2c37e4:
    // 0x2c37e4: 0x83829cdc  lb          $v0, -0x6324($gp)
    ctx->pc = 0x2c37e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c37e8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2c37e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c37ec: 0x144002a7  bnez        $v0, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x2C37ECu;
    {
        const bool branch_taken_0x2c37ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C37F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C37ECu;
            // 0x2c37f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37ec) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C37F4u;
    // 0x2c37f4: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C37F4u;
    SET_GPR_U32(ctx, 31, 0x2C37FCu);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C37FCu; }
        if (ctx->pc != 0x2C37FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C37FCu; }
        if (ctx->pc != 0x2C37FCu) { return; }
    }
    ctx->pc = 0x2C37FCu;
label_2c37fc:
    // 0x2c37fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c37fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3800: 0xc08f8b8  jal         func_23E2E0
    ctx->pc = 0x2C3800u;
    SET_GPR_U32(ctx, 31, 0x2C3808u);
    ctx->pc = 0x2C3804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3800u;
            // 0x2c3804: 0xae820144  sw          $v0, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E2E0u;
    if (runtime->hasFunction(0x23E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3808u; }
        if (ctx->pc != 0x2C3808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCheckPushButton__Fi_0x23e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3808u; }
        if (ctx->pc != 0x2C3808u) { return; }
    }
    ctx->pc = 0x2C3808u;
label_2c3808:
    // 0x2c3808: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c380c: 0x10430088  beq         $v0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x2C380Cu;
    {
        const bool branch_taken_0x2c380c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C3810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C380Cu;
            // 0x2c3810: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c380c) {
            ctx->pc = 0x2C3A30u;
            goto label_2c3a30;
        }
    }
    ctx->pc = 0x2C3814u;
    // 0x2c3814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3818: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3818u;
    {
        const bool branch_taken_0x2c3818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3818u;
            // 0x2c381c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3818) {
            ctx->pc = 0x2C3828u;
            goto label_2c3828;
        }
    }
    ctx->pc = 0x2C3820u;
    // 0x2c3820: 0x1000029a  b           . + 4 + (0x29A << 2)
    ctx->pc = 0x2C3820u;
    {
        const bool branch_taken_0x2c3820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3820) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3828u;
label_2c3828:
    // 0x2c3828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c382c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C382Cu;
    SET_GPR_U32(ctx, 31, 0x2C3834u);
    ctx->pc = 0x2C3830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C382Cu;
            // 0x2c3830: 0x24a5fbc8  addiu       $a1, $a1, -0x438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3834u; }
        if (ctx->pc != 0x2C3834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3834u; }
        if (ctx->pc != 0x2C3834u) { return; }
    }
    ctx->pc = 0x2C3834u;
label_2c3834:
    // 0x2c3834: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C3834u;
    SET_GPR_U32(ctx, 31, 0x2C383Cu);
    ctx->pc = 0x2C3838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3834u;
            // 0x2c3838: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C383Cu; }
        if (ctx->pc != 0x2C383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C383Cu; }
        if (ctx->pc != 0x2C383Cu) { return; }
    }
    ctx->pc = 0x2C383Cu;
label_2c383c:
    // 0x2c383c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C383Cu;
    {
        const bool branch_taken_0x2c383c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C383Cu;
            // 0x2c3840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c383c) {
            ctx->pc = 0x2C3858u;
            goto label_2c3858;
        }
    }
    ctx->pc = 0x2C3844u;
    // 0x2c3844: 0xae80012c  sw          $zero, 0x12C($s4)
    ctx->pc = 0x2c3844u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
    // 0x2c3848: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3848u;
    SET_GPR_U32(ctx, 31, 0x2C3850u);
    ctx->pc = 0x2C384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3848u;
            // 0x2c384c: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3850u; }
        if (ctx->pc != 0x2C3850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3850u; }
        if (ctx->pc != 0x2C3850u) { return; }
    }
    ctx->pc = 0x2C3850u;
label_2c3850:
    // 0x2c3850: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x2C3850u;
    {
        const bool branch_taken_0x2c3850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3850) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3858u;
label_2c3858:
    // 0x2c3858: 0x8e830114  lw          $v1, 0x114($s4)
    ctx->pc = 0x2c3858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2c385c: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x2c385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2c3860: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C3860u;
    {
        const bool branch_taken_0x2c3860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3860u;
            // 0x2c3864: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3860) {
            ctx->pc = 0x2C3948u;
            goto label_2c3948;
        }
    }
    ctx->pc = 0x2C3868u;
    // 0x2c3868: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2c3868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c386c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C386Cu;
    {
        const bool branch_taken_0x2c386c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C386Cu;
            // 0x2c3870: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c386c) {
            ctx->pc = 0x2C388Cu;
            goto label_2c388c;
        }
    }
    ctx->pc = 0x2C3874u;
    // 0x2c3874: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x2c3874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3878: 0xaf849ccc  sw          $a0, -0x6334($gp)
    ctx->pc = 0x2c3878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941900), GPR_U32(ctx, 4));
    // 0x2c387c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C387Cu;
    SET_GPR_U32(ctx, 31, 0x2C3884u);
    ctx->pc = 0x2C3880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C387Cu;
            // 0x2c3880: 0xae80012c  sw          $zero, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3884u; }
        if (ctx->pc != 0x2C3884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3884u; }
        if (ctx->pc != 0x2C3884u) { return; }
    }
    ctx->pc = 0x2C3884u;
label_2c3884:
    // 0x2c3884: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x2C3884u;
    {
        const bool branch_taken_0x2c3884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3884) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C388Cu;
label_2c388c:
    // 0x2c388c: 0xa3809cdc  sb          $zero, -0x6324($gp)
    ctx->pc = 0x2c388cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3894: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2c3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c3898: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3898u;
    {
        const bool branch_taken_0x2c3898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3898u;
            // 0x2c389c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3898) {
            ctx->pc = 0x2C38ECu;
            goto label_2c38ec;
        }
    }
    ctx->pc = 0x2C38A0u;
    // 0x2c38a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38a4: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C38A4u;
    SET_GPR_U32(ctx, 31, 0x2C38ACu);
    ctx->pc = 0x2C38A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38A4u;
            // 0x2c38a8: 0xae800130  sw          $zero, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38ACu; }
        if (ctx->pc != 0x2C38ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38ACu; }
        if (ctx->pc != 0x2C38ACu) { return; }
    }
    ctx->pc = 0x2C38ACu;
label_2c38ac:
    // 0x2c38ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c38acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38b0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C38B0u;
    SET_GPR_U32(ctx, 31, 0x2C38B8u);
    ctx->pc = 0x2C38B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38B0u;
            // 0x2c38b4: 0x24050bc4  addiu       $a1, $zero, 0xBC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3012));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38B8u; }
        if (ctx->pc != 0x2C38B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38B8u; }
        if (ctx->pc != 0x2C38B8u) { return; }
    }
    ctx->pc = 0x2C38B8u;
label_2c38b8:
    // 0x2c38b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c38b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38bc: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2C38BCu;
    SET_GPR_U32(ctx, 31, 0x2C38C4u);
    ctx->pc = 0x2C38C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38BCu;
            // 0x2c38c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38C4u; }
        if (ctx->pc != 0x2C38C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38C4u; }
        if (ctx->pc != 0x2C38C4u) { return; }
    }
    ctx->pc = 0x2C38C4u;
label_2c38c4:
    // 0x2c38c4: 0x8e83014c  lw          $v1, 0x14C($s4)
    ctx->pc = 0x2c38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 332)));
    // 0x2c38c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c38cc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C38CCu;
    {
        const bool branch_taken_0x2c38cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C38D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38CCu;
            // 0x2c38d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38cc) {
            ctx->pc = 0x2C38E4u;
            goto label_2c38e4;
        }
    }
    ctx->pc = 0x2C38D4u;
    // 0x2c38d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c38d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38d8: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C38D8u;
    SET_GPR_U32(ctx, 31, 0x2C38E0u);
    ctx->pc = 0x2C38DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38D8u;
            // 0x2c38dc: 0x24050c44  addiu       $a1, $zero, 0xC44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38E0u; }
        if (ctx->pc != 0x2C38E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C38E0u; }
        if (ctx->pc != 0x2C38E0u) { return; }
    }
    ctx->pc = 0x2C38E0u;
label_2c38e0:
    // 0x2c38e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c38e4:
    // 0x2c38e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C38E4u;
    {
        const bool branch_taken_0x2c38e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C38E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C38E4u;
            // 0x2c38e8: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38e4) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C38ECu;
label_2c38ec:
    // 0x2c38ec: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x2c38ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
    // 0x2c38f0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2c38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2c38f4: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2c38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2c38f8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c38f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c38fc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C38FCu;
    {
        const bool branch_taken_0x2c38fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c38fc) {
            ctx->pc = 0x2C390Cu;
            goto label_2c390c;
        }
    }
    ctx->pc = 0x2C3904u;
    // 0x2c3904: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C3904u;
    {
        const bool branch_taken_0x2c3904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3904u;
            // 0x2c3908: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3904) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C390Cu;
label_2c390c:
    // 0x2c390c: 0x8e850138  lw          $a1, 0x138($s4)
    ctx->pc = 0x2c390cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
    // 0x2c3910: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C3910u;
    SET_GPR_U32(ctx, 31, 0x2C3918u);
    ctx->pc = 0x2C3914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3910u;
            // 0x2c3914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3918u; }
        if (ctx->pc != 0x2C3918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3918u; }
        if (ctx->pc != 0x2C3918u) { return; }
    }
    ctx->pc = 0x2C3918u;
label_2c3918:
    // 0x2c3918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c391c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C391Cu;
    SET_GPR_U32(ctx, 31, 0x2C3924u);
    ctx->pc = 0x2C3920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C391Cu;
            // 0x2c3920: 0x24050bc3  addiu       $a1, $zero, 0xBC3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3011));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3924u; }
        if (ctx->pc != 0x2C3924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3924u; }
        if (ctx->pc != 0x2C3924u) { return; }
    }
    ctx->pc = 0x2C3924u;
label_2c3924:
    // 0x2c3924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3928: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2C3928u;
    SET_GPR_U32(ctx, 31, 0x2C3930u);
    ctx->pc = 0x2C392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3928u;
            // 0x2c392c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3930u; }
        if (ctx->pc != 0x2C3930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3930u; }
        if (ctx->pc != 0x2C3930u) { return; }
    }
    ctx->pc = 0x2C3930u;
label_2c3930:
    // 0x2c3930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3934: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x2c3934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
label_2c3938:
    // 0x2c3938: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3938u;
    SET_GPR_U32(ctx, 31, 0x2C3940u);
    ctx->pc = 0x2C393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3938u;
            // 0x2c393c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3940u; }
        if (ctx->pc != 0x2C3940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3940u; }
        if (ctx->pc != 0x2C3940u) { return; }
    }
    ctx->pc = 0x2C3940u;
label_2c3940:
    // 0x2c3940: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x2C3940u;
    {
        const bool branch_taken_0x2c3940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3940) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3948u;
label_2c3948:
    // 0x2c3948: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c3948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c394c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c394cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3950: 0x14450031  bne         $v0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C3950u;
    {
        const bool branch_taken_0x2c3950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C3954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3950u;
            // 0x2c3954: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3950) {
            ctx->pc = 0x2C3A18u;
            goto label_2c3a18;
        }
    }
    ctx->pc = 0x2C3958u;
    // 0x2c3958: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c3958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c395c: 0xae83012c  sw          $v1, 0x12C($s4)
    ctx->pc = 0x2c395cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
    // 0x2c3960: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x2c3960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2c3964: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C3964u;
    {
        const bool branch_taken_0x2c3964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3964u;
            // 0x2c3968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3964) {
            ctx->pc = 0x2C39E4u;
            goto label_2c39e4;
        }
    }
    ctx->pc = 0x2C396Cu;
    // 0x2c396c: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2c396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2c3970: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C3970u;
    {
        const bool branch_taken_0x2c3970 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2c3970) {
            ctx->pc = 0x2C39A0u;
            goto label_2c39a0;
        }
    }
    ctx->pc = 0x2C3978u;
    // 0x2c3978: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c3978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c397c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3980: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3980u;
    SET_GPR_U32(ctx, 31, 0x2C3988u);
    ctx->pc = 0x2C3984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3980u;
            // 0x2c3984: 0x24a5fbd8  addiu       $a1, $a1, -0x428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3988u; }
        if (ctx->pc != 0x2C3988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3988u; }
        if (ctx->pc != 0x2C3988u) { return; }
    }
    ctx->pc = 0x2C3988u;
label_2c3988:
    // 0x2c3988: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c3988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c398c: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C398Cu;
    SET_GPR_U32(ctx, 31, 0x2C3994u);
    ctx->pc = 0x2C3990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C398Cu;
            // 0x2c3990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3994u; }
        if (ctx->pc != 0x2C3994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3994u; }
        if (ctx->pc != 0x2C3994u) { return; }
    }
    ctx->pc = 0x2C3994u;
label_2c3994:
    // 0x2c3994: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c3994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3998: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x2C3998u;
    {
        const bool branch_taken_0x2c3998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C399Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3998u;
            // 0x2c399c: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3998) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C39A0u;
label_2c39a0:
    // 0x2c39a0: 0xdf829ce8  ld          $v0, -0x6318($gp)
    ctx->pc = 0x2c39a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941928)));
    // 0x2c39a4: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x2c39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2c39a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39ac: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2c39acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2c39b0: 0xafb20168  sw          $s2, 0x168($sp)
    ctx->pc = 0x2c39b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 18));
    // 0x2c39b4: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2c39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2c39b8: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2C39B8u;
    SET_GPR_U32(ctx, 31, 0x2C39C0u);
    ctx->pc = 0x2C39BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39B8u;
            // 0x2c39bc: 0xafa2016c  sw          $v0, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39C0u; }
        if (ctx->pc != 0x2C39C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39C0u; }
        if (ctx->pc != 0x2C39C0u) { return; }
    }
    ctx->pc = 0x2C39C0u;
label_2c39c0:
    // 0x2c39c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c39c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39c4: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x2c39c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2c39c8: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x2C39C8u;
    SET_GPR_U32(ctx, 31, 0x2C39D0u);
    ctx->pc = 0x2C39CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39C8u;
            // 0x2c39cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39D0u; }
        if (ctx->pc != 0x2C39D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39D0u; }
        if (ctx->pc != 0x2C39D0u) { return; }
    }
    ctx->pc = 0x2C39D0u;
label_2c39d0:
    // 0x2c39d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c39d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39d4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C39D4u;
    SET_GPR_U32(ctx, 31, 0x2C39DCu);
    ctx->pc = 0x2C39D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39D4u;
            // 0x2c39d8: 0x240513a9  addiu       $a1, $zero, 0x13A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5033));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39DCu; }
        if (ctx->pc != 0x2C39DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39DCu; }
        if (ctx->pc != 0x2C39DCu) { return; }
    }
    ctx->pc = 0x2C39DCu;
label_2c39dc:
    // 0x2c39dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C39DCu;
    {
        const bool branch_taken_0x2c39dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39DCu;
            // 0x2c39e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39dc) {
            ctx->pc = 0x2C3A08u;
            goto label_2c3a08;
        }
    }
    ctx->pc = 0x2C39E4u;
label_2c39e4:
    // 0x2c39e4: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2C39E4u;
    SET_GPR_U32(ctx, 31, 0x2C39ECu);
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39ECu; }
        if (ctx->pc != 0x2C39ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39ECu; }
        if (ctx->pc != 0x2C39ECu) { return; }
    }
    ctx->pc = 0x2C39ECu;
label_2c39ec:
    // 0x2c39ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c39ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39f0: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C39F0u;
    SET_GPR_U32(ctx, 31, 0x2C39F8u);
    ctx->pc = 0x2C39F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39F0u;
            // 0x2c39f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39F8u; }
        if (ctx->pc != 0x2C39F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39F8u; }
        if (ctx->pc != 0x2C39F8u) { return; }
    }
    ctx->pc = 0x2C39F8u;
label_2c39f8:
    // 0x2c39f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c39f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39fc: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C39FCu;
    SET_GPR_U32(ctx, 31, 0x2C3A04u);
    ctx->pc = 0x2C3A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C39FCu;
            // 0x2c3a00: 0x24050be0  addiu       $a1, $zero, 0xBE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A04u; }
        if (ctx->pc != 0x2C3A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A04u; }
        if (ctx->pc != 0x2C3A04u) { return; }
    }
    ctx->pc = 0x2C3A04u;
label_2c3a04:
    // 0x2c3a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3a08:
    // 0x2c3a08: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3A08u;
    SET_GPR_U32(ctx, 31, 0x2C3A10u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A10u; }
        if (ctx->pc != 0x2C3A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A10u; }
        if (ctx->pc != 0x2C3A10u) { return; }
    }
    ctx->pc = 0x2C3A10u;
label_2c3a10:
    // 0x2c3a10: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x2C3A10u;
    {
        const bool branch_taken_0x2c3a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a10) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3A18u;
label_2c3a18:
    // 0x2c3a18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c3a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a20: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3A20u;
    SET_GPR_U32(ctx, 31, 0x2C3A28u);
    ctx->pc = 0x2C3A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A20u;
            // 0x2c3a24: 0x24a5fbb8  addiu       $a1, $a1, -0x448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A28u; }
        if (ctx->pc != 0x2C3A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A28u; }
        if (ctx->pc != 0x2C3A28u) { return; }
    }
    ctx->pc = 0x2C3A28u;
label_2c3a28:
    // 0x2c3a28: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x2C3A28u;
    {
        const bool branch_taken_0x2c3a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a28) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3A30u;
label_2c3a30:
    // 0x2c3a30: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c3a34: 0x8c22cb38  lw          $v0, -0x34C8($at)
    ctx->pc = 0x2c3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x2c3a38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c3a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a3c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3A3Cu;
    SET_GPR_U32(ctx, 31, 0x2C3A44u);
    ctx->pc = 0x2C3A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A3Cu;
            // 0x2c3a40: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A44u; }
        if (ctx->pc != 0x2C3A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A44u; }
        if (ctx->pc != 0x2C3A44u) { return; }
    }
    ctx->pc = 0x2C3A44u;
label_2c3a44:
    // 0x2c3a44: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x2C3A44u;
    {
        const bool branch_taken_0x2c3a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a44) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3A4Cu;
label_2c3a4c:
    // 0x2c3a4c: 0xc087690  jal         func_21DA40
    ctx->pc = 0x2C3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2C3A54u);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A54u; }
        if (ctx->pc != 0x2C3A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A54u; }
        if (ctx->pc != 0x2C3A54u) { return; }
    }
    ctx->pc = 0x2C3A54u;
label_2c3a54:
    // 0x2c3a54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c3a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a58: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x2C3A58u;
    SET_GPR_U32(ctx, 31, 0x2C3A60u);
    ctx->pc = 0x2C3A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A58u;
            // 0x2c3a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A60u; }
        if (ctx->pc != 0x2C3A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3A60u; }
        if (ctx->pc != 0x2C3A60u) { return; }
    }
    ctx->pc = 0x2C3A60u;
label_2c3a60:
    // 0x2c3a60: 0x10530002  beq         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3A60u;
    {
        const bool branch_taken_0x2c3a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2C3A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A60u;
            // 0x2c3a64: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a60) {
            ctx->pc = 0x2C3A6Cu;
            goto label_2c3a6c;
        }
    }
    ctx->pc = 0x2C3A68u;
    // 0x2c3a68: 0xa3839cdc  sb          $v1, -0x6324($gp)
    ctx->pc = 0x2c3a68u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 3));
label_2c3a6c:
    // 0x2c3a6c: 0x83839cdc  lb          $v1, -0x6324($gp)
    ctx->pc = 0x2c3a6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c3a70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c3a74: 0xa3839cdc  sb          $v1, -0x6324($gp)
    ctx->pc = 0x2c3a74u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3a78: 0x83839cdc  lb          $v1, -0x6324($gp)
    ctx->pc = 0x2c3a78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c3a7c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3A7Cu;
    {
        const bool branch_taken_0x2c3a7c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2c3a7c) {
            ctx->pc = 0x2C3A88u;
            goto label_2c3a88;
        }
    }
    ctx->pc = 0x2C3A84u;
    // 0x2c3a84: 0xa3809cdc  sb          $zero, -0x6324($gp)
    ctx->pc = 0x2c3a84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 0));
label_2c3a88:
    // 0x2c3a88: 0x83839cdc  lb          $v1, -0x6324($gp)
    ctx->pc = 0x2c3a88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c3a8c: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x2c3a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c3a90: 0x146001fe  bnez        $v1, . + 4 + (0x1FE << 2)
    ctx->pc = 0x2C3A90u;
    {
        const bool branch_taken_0x2c3a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3A90u;
            // 0x2c3a94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a90) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3A98u;
    // 0x2c3a98: 0x1243000f  beq         $s2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C3A98u;
    {
        const bool branch_taken_0x2c3a98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3a98) {
            ctx->pc = 0x2C3AD8u;
            goto label_2c3ad8;
        }
    }
    ctx->pc = 0x2C3AA0u;
    // 0x2c3aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3aa4: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3AA4u;
    {
        const bool branch_taken_0x2c3aa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3aa4) {
            ctx->pc = 0x2C3AB4u;
            goto label_2c3ab4;
        }
    }
    ctx->pc = 0x2C3AACu;
    // 0x2c3aac: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x2C3AACu;
    {
        const bool branch_taken_0x2c3aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3aac) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3AB4u;
label_2c3ab4:
    // 0x2c3ab4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3AB4u;
    {
        const bool branch_taken_0x2c3ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ab4) {
            ctx->pc = 0x2C3AD8u;
            goto label_2c3ad8;
        }
    }
    ctx->pc = 0x2C3ABCu;
    // 0x2c3abc: 0x8e850130  lw          $a1, 0x130($s4)
    ctx->pc = 0x2c3abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x2c3ac0: 0xc0b0bf4  jal         func_2C2FD0
    ctx->pc = 0x2C3AC0u;
    SET_GPR_U32(ctx, 31, 0x2C3AC8u);
    ctx->pc = 0x2C3AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3AC0u;
            // 0x2c3ac4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2FD0u;
    if (runtime->hasFunction(0x2C2FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2C2FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3AC8u; }
        if (ctx->pc != 0x2C3AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnvSetSave__14CSaveMenuClassFi_0x2c2fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3AC8u; }
        if (ctx->pc != 0x2C3AC8u) { return; }
    }
    ctx->pc = 0x2C3AC8u;
label_2c3ac8:
    // 0x2c3ac8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3AC8u;
    SET_GPR_U32(ctx, 31, 0x2C3AD0u);
    ctx->pc = 0x2C3ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3AC8u;
            // 0x2c3acc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3AD0u; }
        if (ctx->pc != 0x2C3AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3AD0u; }
        if (ctx->pc != 0x2C3AD0u) { return; }
    }
    ctx->pc = 0x2C3AD0u;
label_2c3ad0:
    // 0x2c3ad0: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x2C3AD0u;
    {
        const bool branch_taken_0x2c3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ad0) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3AD8u;
label_2c3ad8:
    // 0x2c3ad8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c3ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3adc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c3adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c3ae0: 0x8c22cb38  lw          $v0, -0x34C8($at)
    ctx->pc = 0x2c3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x2c3ae4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c3ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3ae8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c3ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3aec: 0x8e820184  lw          $v0, 0x184($s4)
    ctx->pc = 0x2c3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 388)));
    // 0x2c3af0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3AF0u;
    SET_GPR_U32(ctx, 31, 0x2C3AF8u);
    ctx->pc = 0x2C3AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3AF0u;
            // 0x2c3af4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3AF8u; }
        if (ctx->pc != 0x2C3AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3AF8u; }
        if (ctx->pc != 0x2C3AF8u) { return; }
    }
    ctx->pc = 0x2C3AF8u;
label_2c3af8:
    // 0x2c3af8: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x2C3AF8u;
    {
        const bool branch_taken_0x2c3af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3af8) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3B00u;
label_2c3b00:
    // 0x2c3b00: 0x124001e2  beqz        $s2, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x2C3B00u;
    {
        const bool branch_taken_0x2c3b00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3B00u;
            // 0x2c3b04: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b00) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3B08u;
    // 0x2c3b08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b0c: 0x24a5fbb8  addiu       $a1, $a1, -0x448
    ctx->pc = 0x2c3b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966200));
    // 0x2c3b10: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3B10u;
    SET_GPR_U32(ctx, 31, 0x2C3B18u);
    ctx->pc = 0x2C3B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3B10u;
            // 0x2c3b14: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3B18u; }
        if (ctx->pc != 0x2C3B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3B18u; }
        if (ctx->pc != 0x2C3B18u) { return; }
    }
    ctx->pc = 0x2C3B18u;
label_2c3b18:
    // 0x2c3b18: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x2C3B18u;
    {
        const bool branch_taken_0x2c3b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b18) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3B20u;
label_2c3b20:
    // 0x2c3b20: 0x8f839cc4  lw          $v1, -0x633C($gp)
    ctx->pc = 0x2c3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3b24: 0x8e820134  lw          $v0, 0x134($s4)
    ctx->pc = 0x2c3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
    // 0x2c3b28: 0x8c630914  lw          $v1, 0x914($v1)
    ctx->pc = 0x2c3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2324)));
    // 0x2c3b2c: 0xc088930  jal         func_2224C0
    ctx->pc = 0x2C3B2Cu;
    SET_GPR_U32(ctx, 31, 0x2C3B34u);
    ctx->pc = 0x2C3B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3B2Cu;
            // 0x2c3b30: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2224C0u;
    if (runtime->hasFunction(0x2224C0u)) {
        auto targetFn = runtime->lookupFunction(0x2224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3B34u; }
        if (ctx->pc != 0x2C3B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl2__Fi_0x2224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3B34u; }
        if (ctx->pc != 0x2C3B34u) { return; }
    }
    ctx->pc = 0x2C3B34u;
label_2c3b34:
    // 0x2c3b34: 0x12c001d5  beqz        $s6, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x2C3B34u;
    {
        const bool branch_taken_0x2c3b34 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b34) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3B3Cu;
    // 0x2c3b3c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2c3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c3b40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3b44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3B44u;
    {
        const bool branch_taken_0x2c3b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3b44) {
            ctx->pc = 0x2C3B54u;
            goto label_2c3b54;
        }
    }
    ctx->pc = 0x2C3B4Cu;
    // 0x2c3b4c: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x2C3B4Cu;
    {
        const bool branch_taken_0x2c3b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3B4Cu;
            // 0x2c3b50: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b4c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3B54u;
label_2c3b54:
    // 0x2c3b54: 0x8e830150  lw          $v1, 0x150($s4)
    ctx->pc = 0x2c3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x2c3b58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3b5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c3b68: 0xae830150  sw          $v1, 0x150($s4)
    ctx->pc = 0x2c3b68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 3));
    // 0x2c3b6c: 0xc08891c  jal         func_222470
    ctx->pc = 0x2C3B6Cu;
    SET_GPR_U32(ctx, 31, 0x2C3B74u);
    ctx->pc = 0x2C3B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3B6Cu;
            // 0x2c3b70: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3B74u; }
        if (ctx->pc != 0x2C3B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3B74u; }
        if (ctx->pc != 0x2C3B74u) { return; }
    }
    ctx->pc = 0x2C3B74u;
label_2c3b74:
    // 0x2c3b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b7c: 0xae0217f4  sw          $v0, 0x17F4($s0)
    ctx->pc = 0x2c3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 2));
    // 0x2c3b80: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C3B80u;
    SET_GPR_U32(ctx, 31, 0x2C3B88u);
    ctx->pc = 0x2C3B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3B80u;
            // 0x2c3b84: 0x24050bc0  addiu       $a1, $zero, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3B88u; }
        if (ctx->pc != 0x2C3B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3B88u; }
        if (ctx->pc != 0x2C3B88u) { return; }
    }
    ctx->pc = 0x2C3B88u;
label_2c3b88:
    // 0x2c3b88: 0x8e83014c  lw          $v1, 0x14C($s4)
    ctx->pc = 0x2c3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 332)));
    // 0x2c3b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3b90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3B90u;
    {
        const bool branch_taken_0x2c3b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3B90u;
            // 0x2c3b94: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b90) {
            ctx->pc = 0x2C3BA8u;
            goto label_2c3ba8;
        }
    }
    ctx->pc = 0x2C3B98u;
    // 0x2c3b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b9c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C3B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C3BA4u);
    ctx->pc = 0x2C3BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3B9Cu;
            // 0x2c3ba0: 0x24050c45  addiu       $a1, $zero, 0xC45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3141));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BA4u; }
        if (ctx->pc != 0x2C3BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BA4u; }
        if (ctx->pc != 0x2C3BA4u) { return; }
    }
    ctx->pc = 0x2C3BA4u;
label_2c3ba4:
    // 0x2c3ba4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c3ba8:
    // 0x2c3ba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3bac: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2c3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x2c3bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c3bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3bb8: 0xc0b0bcc  jal         func_2C2F30
    ctx->pc = 0x2C3BB8u;
    SET_GPR_U32(ctx, 31, 0x2C3BC0u);
    ctx->pc = 0x2C3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3BB8u;
            // 0x2c3bbc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F30u;
    if (runtime->hasFunction(0x2C2F30u)) {
        auto targetFn = runtime->lookupFunction(0x2C2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BC0u; }
        if (ctx->pc != 0x2C3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDlInfoMsg__14CSaveMenuClassFii_0x2c2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BC0u; }
        if (ctx->pc != 0x2C3BC0u) { return; }
    }
    ctx->pc = 0x2C3BC0u;
label_2c3bc0:
    // 0x2c3bc0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3BC0u;
    SET_GPR_U32(ctx, 31, 0x2C3BC8u);
    ctx->pc = 0x2C3BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3BC0u;
            // 0x2c3bc4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BC8u; }
        if (ctx->pc != 0x2C3BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BC8u; }
        if (ctx->pc != 0x2C3BC8u) { return; }
    }
    ctx->pc = 0x2C3BC8u;
label_2c3bc8:
    // 0x2c3bc8: 0x87828f0c  lh          $v0, -0x70F4($gp)
    ctx->pc = 0x2c3bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938380)));
    // 0x2c3bcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c3bd0: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x2C3BD0u;
    {
        const bool branch_taken_0x2c3bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3BD0u;
            // 0x2c3bd4: 0xa7828f0c  sh          $v0, -0x70F4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bd0) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3BD8u;
label_2c3bd8:
    // 0x2c3bd8: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C3BD8u;
    SET_GPR_U32(ctx, 31, 0x2C3BE0u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BE0u; }
        if (ctx->pc != 0x2C3BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BE0u; }
        if (ctx->pc != 0x2C3BE0u) { return; }
    }
    ctx->pc = 0x2C3BE0u;
label_2c3be0:
    // 0x2c3be0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3BE0u;
    {
        const bool branch_taken_0x2c3be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3BE0u;
            // 0x2c3be4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3be0) {
            ctx->pc = 0x2C3BFCu;
            goto label_2c3bfc;
        }
    }
    ctx->pc = 0x2C3BE8u;
    // 0x2c3be8: 0xae80012c  sw          $zero, 0x12C($s4)
    ctx->pc = 0x2c3be8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
    // 0x2c3bec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3BECu;
    SET_GPR_U32(ctx, 31, 0x2C3BF4u);
    ctx->pc = 0x2C3BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3BECu;
            // 0x2c3bf0: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BF4u; }
        if (ctx->pc != 0x2C3BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BF4u; }
        if (ctx->pc != 0x2C3BF4u) { return; }
    }
    ctx->pc = 0x2C3BF4u;
label_2c3bf4:
    // 0x2c3bf4: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x2C3BF4u;
    {
        const bool branch_taken_0x2c3bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3bf4) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3BFCu;
label_2c3bfc:
    // 0x2c3bfc: 0x124001a3  beqz        $s2, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x2C3BFCu;
    {
        const bool branch_taken_0x2c3bfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3BFCu;
            // 0x2c3c00: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bfc) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3C04u;
    // 0x2c3c04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c08: 0x24a5fbe8  addiu       $a1, $a1, -0x418
    ctx->pc = 0x2c3c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966248));
    // 0x2c3c0c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3C0Cu;
    SET_GPR_U32(ctx, 31, 0x2C3C14u);
    ctx->pc = 0x2C3C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C0Cu;
            // 0x2c3c10: 0xae80012c  sw          $zero, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C14u; }
        if (ctx->pc != 0x2C3C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C14u; }
        if (ctx->pc != 0x2C3C14u) { return; }
    }
    ctx->pc = 0x2C3C14u;
label_2c3c14:
    // 0x2c3c14: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x2C3C14u;
    {
        const bool branch_taken_0x2c3c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c14) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3C1Cu;
label_2c3c1c:
    // 0x2c3c1c: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3c20: 0xc088930  jal         func_2224C0
    ctx->pc = 0x2C3C20u;
    SET_GPR_U32(ctx, 31, 0x2C3C28u);
    ctx->pc = 0x2C3C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C20u;
            // 0x2c3c24: 0x8c440914  lw          $a0, 0x914($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2224C0u;
    if (runtime->hasFunction(0x2224C0u)) {
        auto targetFn = runtime->lookupFunction(0x2224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C28u; }
        if (ctx->pc != 0x2C3C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl2__Fi_0x2224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C28u; }
        if (ctx->pc != 0x2C3C28u) { return; }
    }
    ctx->pc = 0x2C3C28u;
label_2c3c28:
    // 0x2c3c28: 0x12c00198  beqz        $s6, . + 4 + (0x198 << 2)
    ctx->pc = 0x2C3C28u;
    {
        const bool branch_taken_0x2c3c28 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c28) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3C30u;
    // 0x2c3c30: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2c3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c3c34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3C34u;
    {
        const bool branch_taken_0x2c3c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C34u;
            // 0x2c3c38: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c34) {
            ctx->pc = 0x2C3C48u;
            goto label_2c3c48;
        }
    }
    ctx->pc = 0x2C3C3Cu;
    // 0x2c3c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3c40: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3C40u;
    {
        const bool branch_taken_0x2c3c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3c40) {
            ctx->pc = 0x2C3C58u;
            goto label_2c3c58;
        }
    }
    ctx->pc = 0x2C3C48u;
label_2c3c48:
    // 0x2c3c48: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c3c4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3c50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3C50u;
    {
        const bool branch_taken_0x2c3c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C50u;
            // 0x2c3c54: 0x24440d5c  addiu       $a0, $v0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c50) {
            ctx->pc = 0x2C3C5Cu;
            goto label_2c3c5c;
        }
    }
    ctx->pc = 0x2C3C58u;
label_2c3c58:
    // 0x2c3c58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3c5c:
    // 0x2c3c5c: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C3C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C3C64u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C64u; }
        if (ctx->pc != 0x2C3C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C64u; }
        if (ctx->pc != 0x2C3C64u) { return; }
    }
    ctx->pc = 0x2C3C64u;
label_2c3c64:
    // 0x2c3c64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3C64u;
    {
        const bool branch_taken_0x2c3c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c64) {
            ctx->pc = 0x2C3C74u;
            goto label_2c3c74;
        }
    }
    ctx->pc = 0x2C3C6Cu;
    // 0x2c3c6c: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x2C3C6Cu;
    {
        const bool branch_taken_0x2c3c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C6Cu;
            // 0x2c3c70: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c6c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3C74u;
label_2c3c74:
    // 0x2c3c74: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3c78: 0x8c420914  lw          $v0, 0x914($v0)
    ctx->pc = 0x2c3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2324)));
    // 0x2c3c7c: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x2c3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
    // 0x2c3c80: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3c84: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C3C84u;
    SET_GPR_U32(ctx, 31, 0x2C3C8Cu);
    ctx->pc = 0x2C3C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C84u;
            // 0x2c3c88: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C8Cu; }
        if (ctx->pc != 0x2C3C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3C8Cu; }
        if (ctx->pc != 0x2C3C8Cu) { return; }
    }
    ctx->pc = 0x2C3C8Cu;
label_2c3c8c:
    // 0x2c3c8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3c90: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x2C3C90u;
    {
        const bool branch_taken_0x2c3c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3C90u;
            // 0x2c3c94: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c90) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3C98u;
label_2c3c98:
    // 0x2c3c98: 0xc087690  jal         func_21DA40
    ctx->pc = 0x2C3C98u;
    SET_GPR_U32(ctx, 31, 0x2C3CA0u);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CA0u; }
        if (ctx->pc != 0x2C3CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CA0u; }
        if (ctx->pc != 0x2C3CA0u) { return; }
    }
    ctx->pc = 0x2C3CA0u;
label_2c3ca0:
    // 0x2c3ca0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c3ca0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ca4: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x2C3CA4u;
    SET_GPR_U32(ctx, 31, 0x2C3CACu);
    ctx->pc = 0x2C3CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3CA4u;
            // 0x2c3ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CACu; }
        if (ctx->pc != 0x2C3CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CACu; }
        if (ctx->pc != 0x2C3CACu) { return; }
    }
    ctx->pc = 0x2C3CACu;
label_2c3cac:
    // 0x2c3cac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c3cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cb0: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C3CB0u;
    SET_GPR_U32(ctx, 31, 0x2C3CB8u);
    ctx->pc = 0x2C3CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3CB0u;
            // 0x2c3cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CB8u; }
        if (ctx->pc != 0x2C3CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CB8u; }
        if (ctx->pc != 0x2C3CB8u) { return; }
    }
    ctx->pc = 0x2C3CB8u;
label_2c3cb8:
    // 0x2c3cb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3CB8u;
    {
        const bool branch_taken_0x2c3cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3CB8u;
            // 0x2c3cbc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3cb8) {
            ctx->pc = 0x2C3CCCu;
            goto label_2c3ccc;
        }
    }
    ctx->pc = 0x2C3CC0u;
    // 0x2c3cc0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2c3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c3cc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3CC4u;
    {
        const bool branch_taken_0x2c3cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3cc4) {
            ctx->pc = 0x2C3CDCu;
            goto label_2c3cdc;
        }
    }
    ctx->pc = 0x2C3CCCu;
label_2c3ccc:
    // 0x2c3ccc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3CCCu;
    SET_GPR_U32(ctx, 31, 0x2C3CD4u);
    ctx->pc = 0x2C3CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3CCCu;
            // 0x2c3cd0: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CD4u; }
        if (ctx->pc != 0x2C3CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3CD4u; }
        if (ctx->pc != 0x2C3CD4u) { return; }
    }
    ctx->pc = 0x2C3CD4u;
label_2c3cd4:
    // 0x2c3cd4: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x2C3CD4u;
    {
        const bool branch_taken_0x2c3cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3cd4) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3CDCu;
label_2c3cdc:
    // 0x2c3cdc: 0x12b60002  beq         $s5, $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3CDCu;
    {
        const bool branch_taken_0x2c3cdc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x2C3CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3CDCu;
            // 0x2c3ce0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3cdc) {
            ctx->pc = 0x2C3CE8u;
            goto label_2c3ce8;
        }
    }
    ctx->pc = 0x2C3CE4u;
    // 0x2c3ce4: 0xa3829cdc  sb          $v0, -0x6324($gp)
    ctx->pc = 0x2c3ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 2));
label_2c3ce8:
    // 0x2c3ce8: 0x83829cdc  lb          $v0, -0x6324($gp)
    ctx->pc = 0x2c3ce8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c3cec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c3cf0: 0xa3829cdc  sb          $v0, -0x6324($gp)
    ctx->pc = 0x2c3cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c3cf4: 0x83829cdc  lb          $v0, -0x6324($gp)
    ctx->pc = 0x2c3cf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c3cf8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3CF8u;
    {
        const bool branch_taken_0x2c3cf8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2c3cf8) {
            ctx->pc = 0x2C3D04u;
            goto label_2c3d04;
        }
    }
    ctx->pc = 0x2C3D00u;
    // 0x2c3d00: 0xa3809cdc  sb          $zero, -0x6324($gp)
    ctx->pc = 0x2c3d00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941916), (uint8_t)GPR_U32(ctx, 0));
label_2c3d04:
    // 0x2c3d04: 0x83829cdc  lb          $v0, -0x6324($gp)
    ctx->pc = 0x2c3d04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941916)));
    // 0x2c3d08: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2c3d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c3d0c: 0x1440015f  bnez        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x2C3D0Cu;
    {
        const bool branch_taken_0x2c3d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D0Cu;
            // 0x2c3d10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d0c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3D14u;
    // 0x2c3d14: 0x12420026  beq         $s2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C3D14u;
    {
        const bool branch_taken_0x2c3d14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D14u;
            // 0x2c3d18: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d14) {
            ctx->pc = 0x2C3DB0u;
            goto label_2c3db0;
        }
    }
    ctx->pc = 0x2C3D1Cu;
    // 0x2c3d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3d20: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3D20u;
    {
        const bool branch_taken_0x2c3d20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3d20) {
            ctx->pc = 0x2C3D30u;
            goto label_2c3d30;
        }
    }
    ctx->pc = 0x2C3D28u;
    // 0x2c3d28: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x2C3D28u;
    {
        const bool branch_taken_0x2c3d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d28) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3D30u;
label_2c3d30:
    // 0x2c3d30: 0x16a0001e  bnez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3D30u;
    {
        const bool branch_taken_0x2c3d30 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d30) {
            ctx->pc = 0x2C3DACu;
            goto label_2c3dac;
        }
    }
    ctx->pc = 0x2C3D38u;
    // 0x2c3d38: 0x8e830114  lw          $v1, 0x114($s4)
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2c3d3c: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3d40: 0xac4304cc  sw          $v1, 0x4CC($v0)
    ctx->pc = 0x2c3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1228), GPR_U32(ctx, 3));
    // 0x2c3d44: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3d48: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C3D48u;
    SET_GPR_U32(ctx, 31, 0x2C3D50u);
    ctx->pc = 0x2C3D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D48u;
            // 0x2c3d4c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D50u; }
        if (ctx->pc != 0x2C3D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D50u; }
        if (ctx->pc != 0x2C3D50u) { return; }
    }
    ctx->pc = 0x2C3D50u;
label_2c3d50:
    // 0x2c3d50: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x2c3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2c3d54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c3d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c3d58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d5c: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x2c3d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
    // 0x2c3d60: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3D60u;
    SET_GPR_U32(ctx, 31, 0x2C3D68u);
    ctx->pc = 0x2C3D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D60u;
            // 0x2c3d64: 0x24a5fbf0  addiu       $a1, $a1, -0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D68u; }
        if (ctx->pc != 0x2C3D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D68u; }
        if (ctx->pc != 0x2C3D68u) { return; }
    }
    ctx->pc = 0x2C3D68u;
label_2c3d68:
    // 0x2c3d68: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c3d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d70: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C3D70u;
    SET_GPR_U32(ctx, 31, 0x2C3D78u);
    ctx->pc = 0x2C3D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D70u;
            // 0x2c3d74: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D78u; }
        if (ctx->pc != 0x2C3D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D78u; }
        if (ctx->pc != 0x2C3D78u) { return; }
    }
    ctx->pc = 0x2C3D78u;
label_2c3d78:
    // 0x2c3d78: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x2c3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x2c3d7c: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c3d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3d80: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2C3D80u;
    SET_GPR_U32(ctx, 31, 0x2C3D88u);
    ctx->pc = 0x2C3D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D80u;
            // 0x2c3d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D88u; }
        if (ctx->pc != 0x2C3D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D88u; }
        if (ctx->pc != 0x2C3D88u) { return; }
    }
    ctx->pc = 0x2C3D88u;
label_2c3d88:
    // 0x2c3d88: 0x8e840174  lw          $a0, 0x174($s4)
    ctx->pc = 0x2c3d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x2c3d8c: 0xc08891c  jal         func_222470
    ctx->pc = 0x2C3D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C3D94u);
    ctx->pc = 0x2C3D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D8Cu;
            // 0x2c3d90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D94u; }
        if (ctx->pc != 0x2C3D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3D94u; }
        if (ctx->pc != 0x2C3D94u) { return; }
    }
    ctx->pc = 0x2C3D94u;
label_2c3d94:
    // 0x2c3d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3d98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d9c: 0xc0b0bcc  jal         func_2C2F30
    ctx->pc = 0x2C3D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C3DA4u);
    ctx->pc = 0x2C3DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3D9Cu;
            // 0x2c3da0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F30u;
    if (runtime->hasFunction(0x2C2F30u)) {
        auto targetFn = runtime->lookupFunction(0x2C2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3DA4u; }
        if (ctx->pc != 0x2C3DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDlInfoMsg__14CSaveMenuClassFii_0x2c2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3DA4u; }
        if (ctx->pc != 0x2C3DA4u) { return; }
    }
    ctx->pc = 0x2C3DA4u;
label_2c3da4:
    // 0x2c3da4: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x2C3DA4u;
    {
        const bool branch_taken_0x2c3da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3da4) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3DACu;
label_2c3dac:
    // 0x2c3dac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c3dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c3db0:
    // 0x2c3db0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3DB0u;
    SET_GPR_U32(ctx, 31, 0x2C3DB8u);
    ctx->pc = 0x2C3DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3DB0u;
            // 0x2c3db4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3DB8u; }
        if (ctx->pc != 0x2C3DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3DB8u; }
        if (ctx->pc != 0x2C3DB8u) { return; }
    }
    ctx->pc = 0x2C3DB8u;
label_2c3db8:
    // 0x2c3db8: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x2C3DB8u;
    {
        const bool branch_taken_0x2c3db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3db8) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3DC0u;
label_2c3dc0:
    // 0x2c3dc0: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3dc4: 0xc088930  jal         func_2224C0
    ctx->pc = 0x2C3DC4u;
    SET_GPR_U32(ctx, 31, 0x2C3DCCu);
    ctx->pc = 0x2C3DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3DC4u;
            // 0x2c3dc8: 0x8c440914  lw          $a0, 0x914($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2224C0u;
    if (runtime->hasFunction(0x2224C0u)) {
        auto targetFn = runtime->lookupFunction(0x2224C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3DCCu; }
        if (ctx->pc != 0x2C3DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl2__Fi_0x2224c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3DCCu; }
        if (ctx->pc != 0x2C3DCCu) { return; }
    }
    ctx->pc = 0x2C3DCCu;
label_2c3dcc:
    // 0x2c3dcc: 0x12c0012f  beqz        $s6, . + 4 + (0x12F << 2)
    ctx->pc = 0x2C3DCCu;
    {
        const bool branch_taken_0x2c3dcc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3dcc) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3DD4u;
    // 0x2c3dd4: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2c3dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c3dd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3DD8u;
    {
        const bool branch_taken_0x2c3dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3DD8u;
            // 0x2c3ddc: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dd8) {
            ctx->pc = 0x2C3DECu;
            goto label_2c3dec;
        }
    }
    ctx->pc = 0x2C3DE0u;
    // 0x2c3de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3de4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3DE4u;
    {
        const bool branch_taken_0x2c3de4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3de4) {
            ctx->pc = 0x2C3DFCu;
            goto label_2c3dfc;
        }
    }
    ctx->pc = 0x2C3DECu;
label_2c3dec:
    // 0x2c3dec: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c3decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c3df0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3df4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3DF4u;
    {
        const bool branch_taken_0x2c3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3DF4u;
            // 0x2c3df8: 0x24440d5c  addiu       $a0, $v0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3df4) {
            ctx->pc = 0x2C3E00u;
            goto label_2c3e00;
        }
    }
    ctx->pc = 0x2C3DFCu;
label_2c3dfc:
    // 0x2c3dfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e00:
    // 0x2c3e00: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2c3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c3e04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3e08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3E08u;
    {
        const bool branch_taken_0x2c3e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e08) {
            ctx->pc = 0x2C3E18u;
            goto label_2c3e18;
        }
    }
    ctx->pc = 0x2C3E10u;
    // 0x2c3e10: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2C3E10u;
    {
        const bool branch_taken_0x2c3e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E10u;
            // 0x2c3e14: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e10) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3E18u;
label_2c3e18:
    // 0x2c3e18: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C3E18u;
    SET_GPR_U32(ctx, 31, 0x2C3E20u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E20u; }
        if (ctx->pc != 0x2C3E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E20u; }
        if (ctx->pc != 0x2C3E20u) { return; }
    }
    ctx->pc = 0x2C3E20u;
label_2c3e20:
    // 0x2c3e20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3E20u;
    {
        const bool branch_taken_0x2c3e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E20u;
            // 0x2c3e24: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e20) {
            ctx->pc = 0x2C3E30u;
            goto label_2c3e30;
        }
    }
    ctx->pc = 0x2C3E28u;
    // 0x2c3e28: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x2C3E28u;
    {
        const bool branch_taken_0x2c3e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E28u;
            // 0x2c3e2c: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e28) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3E30u;
label_2c3e30:
    // 0x2c3e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e34: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x2c3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
    // 0x2c3e38: 0xc08891c  jal         func_222470
    ctx->pc = 0x2C3E38u;
    SET_GPR_U32(ctx, 31, 0x2C3E40u);
    ctx->pc = 0x2C3E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E38u;
            // 0x2c3e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E40u; }
        if (ctx->pc != 0x2C3E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E40u; }
        if (ctx->pc != 0x2C3E40u) { return; }
    }
    ctx->pc = 0x2C3E40u;
label_2c3e40:
    // 0x2c3e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e48: 0xae0217f4  sw          $v0, 0x17F4($s0)
    ctx->pc = 0x2c3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 2));
    // 0x2c3e4c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C3E4Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E54u);
    ctx->pc = 0x2C3E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E4Cu;
            // 0x2c3e50: 0x24050be2  addiu       $a1, $zero, 0xBE2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3042));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E54u; }
        if (ctx->pc != 0x2C3E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E54u; }
        if (ctx->pc != 0x2C3E54u) { return; }
    }
    ctx->pc = 0x2C3E54u;
label_2c3e54:
    // 0x2c3e54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c3e58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e5c: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2c3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x2c3e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3e64: 0xc0b0bcc  jal         func_2C2F30
    ctx->pc = 0x2C3E64u;
    SET_GPR_U32(ctx, 31, 0x2C3E6Cu);
    ctx->pc = 0x2C3E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E64u;
            // 0x2c3e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F30u;
    if (runtime->hasFunction(0x2C2F30u)) {
        auto targetFn = runtime->lookupFunction(0x2C2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E6Cu; }
        if (ctx->pc != 0x2C3E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDlInfoMsg__14CSaveMenuClassFii_0x2c2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E6Cu; }
        if (ctx->pc != 0x2C3E6Cu) { return; }
    }
    ctx->pc = 0x2C3E6Cu;
label_2c3e6c:
    // 0x2c3e6c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3E6Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E74u);
    ctx->pc = 0x2C3E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E6Cu;
            // 0x2c3e70: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E74u; }
        if (ctx->pc != 0x2C3E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E74u; }
        if (ctx->pc != 0x2C3E74u) { return; }
    }
    ctx->pc = 0x2C3E74u;
label_2c3e74:
    // 0x2c3e74: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x2C3E74u;
    {
        const bool branch_taken_0x2c3e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e74) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3E7Cu;
label_2c3e7c:
    // 0x2c3e7c: 0x12400103  beqz        $s2, . + 4 + (0x103 << 2)
    ctx->pc = 0x2C3E7Cu;
    {
        const bool branch_taken_0x2c3e7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E7Cu;
            // 0x2c3e80: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e7c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3E84u;
    // 0x2c3e84: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c3e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c3e88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e8c: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x2c3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
    // 0x2c3e90: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C3E90u;
    SET_GPR_U32(ctx, 31, 0x2C3E98u);
    ctx->pc = 0x2C3E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3E90u;
            // 0x2c3e94: 0x24a5fc00  addiu       $a1, $a1, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E98u; }
        if (ctx->pc != 0x2C3E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E98u; }
        if (ctx->pc != 0x2C3E98u) { return; }
    }
    ctx->pc = 0x2C3E98u;
label_2c3e98:
    // 0x2c3e98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3e9c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c3ea0: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x2c3ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c3ea4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c3ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3ea8: 0x8f839cc4  lw          $v1, -0x633C($gp)
    ctx->pc = 0x2c3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3eac: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x2c3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
    // 0x2c3eb0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c3eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3eb4: 0x8c6208fc  lw          $v0, 0x8FC($v1)
    ctx->pc = 0x2c3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2300)));
    // 0x2c3eb8: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x2c3eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
    // 0x2c3ebc: 0x8c6208f8  lw          $v0, 0x8F8($v1)
    ctx->pc = 0x2c3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2296)));
    // 0x2c3ec0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c3ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3ec4: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x2c3ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
    // 0x2c3ec8: 0x8c620900  lw          $v0, 0x900($v1)
    ctx->pc = 0x2c3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2304)));
    // 0x2c3ecc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c3eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3ed0: 0xac22d638  sw          $v0, -0x29C8($at)
    ctx->pc = 0x2c3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 2));
    // 0x2c3ed4: 0x8c620904  lw          $v0, 0x904($v1)
    ctx->pc = 0x2c3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2308)));
    // 0x2c3ed8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c3ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3edc: 0xac22d63c  sw          $v0, -0x29C4($at)
    ctx->pc = 0x2c3edcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956604), GPR_U32(ctx, 2));
    // 0x2c3ee0: 0x8c620908  lw          $v0, 0x908($v1)
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2312)));
    // 0x2c3ee4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c3ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c3ee8: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x2C3EE8u;
    {
        const bool branch_taken_0x2c3ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3EE8u;
            // 0x2c3eec: 0xac22d640  sw          $v0, -0x29C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ee8) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3EF0u;
label_2c3ef0:
    // 0x2c3ef0: 0x124000e6  beqz        $s2, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2C3EF0u;
    {
        const bool branch_taken_0x2c3ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3EF0u;
            // 0x2c3ef4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ef0) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3EF8u;
    // 0x2c3ef8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3efc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3EFCu;
    SET_GPR_U32(ctx, 31, 0x2C3F04u);
    ctx->pc = 0x2C3F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3EFCu;
            // 0x2c3f00: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3F04u; }
        if (ctx->pc != 0x2C3F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3F04u; }
        if (ctx->pc != 0x2C3F04u) { return; }
    }
    ctx->pc = 0x2C3F04u;
label_2c3f04:
    // 0x2c3f04: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2C3F04u;
    {
        const bool branch_taken_0x2c3f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f04) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3F0Cu;
label_2c3f0c:
    // 0x2c3f0c: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2c3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c3f10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3F10u;
    {
        const bool branch_taken_0x2c3f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F10u;
            // 0x2c3f14: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f10) {
            ctx->pc = 0x2C3F24u;
            goto label_2c3f24;
        }
    }
    ctx->pc = 0x2C3F18u;
    // 0x2c3f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f1c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3F1Cu;
    {
        const bool branch_taken_0x2c3f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F1Cu;
            // 0x2c3f20: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f1c) {
            ctx->pc = 0x2C3F30u;
            goto label_2c3f30;
        }
    }
    ctx->pc = 0x2C3F24u;
label_2c3f24:
    // 0x2c3f24: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c3f28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3f2c: 0x24530d5c  addiu       $s3, $v0, 0xD5C
    ctx->pc = 0x2c3f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2c3f30:
    // 0x2c3f30: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3F30u;
    {
        const bool branch_taken_0x2c3f30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F30u;
            // 0x2c3f34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f30) {
            ctx->pc = 0x2C3F54u;
            goto label_2c3f54;
        }
    }
    ctx->pc = 0x2C3F38u;
    // 0x2c3f38: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C3F38u;
    SET_GPR_U32(ctx, 31, 0x2C3F40u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3F40u; }
        if (ctx->pc != 0x2C3F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3F40u; }
        if (ctx->pc != 0x2C3F40u) { return; }
    }
    ctx->pc = 0x2C3F40u;
label_2c3f40:
    // 0x2c3f40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3F40u;
    {
        const bool branch_taken_0x2c3f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f40) {
            ctx->pc = 0x2C3F54u;
            goto label_2c3f54;
        }
    }
    ctx->pc = 0x2C3F48u;
    // 0x2c3f48: 0xae80012c  sw          $zero, 0x12C($s4)
    ctx->pc = 0x2c3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
    // 0x2c3f4c: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2C3F4Cu;
    {
        const bool branch_taken_0x2c3f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F4Cu;
            // 0x2c3f50: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f4c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3F54u;
label_2c3f54:
    // 0x2c3f54: 0x8e83012c  lw          $v1, 0x12C($s4)
    ctx->pc = 0x2c3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x2c3f58: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2c3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c3f5c: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C3F5Cu;
    {
        const bool branch_taken_0x2c3f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F5Cu;
            // 0x2c3f60: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f5c) {
            ctx->pc = 0x2C409Cu;
            goto label_2c409c;
        }
    }
    ctx->pc = 0x2C3F64u;
    // 0x2c3f64: 0x10650029  beq         $v1, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C3F64u;
    {
        const bool branch_taken_0x2c3f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c3f64) {
            ctx->pc = 0x2C400Cu;
            goto label_2c400c;
        }
    }
    ctx->pc = 0x2C3F6Cu;
    // 0x2c3f6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3F6Cu;
    {
        const bool branch_taken_0x2c3f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F6Cu;
            // 0x2c3f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f6c) {
            ctx->pc = 0x2C3F7Cu;
            goto label_2c3f7c;
        }
    }
    ctx->pc = 0x2C3F74u;
    // 0x2c3f74: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2C3F74u;
    {
        const bool branch_taken_0x2c3f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f74) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3F7Cu;
label_2c3f7c:
    // 0x2c3f7c: 0xc087654  jal         func_21D950
    ctx->pc = 0x2C3F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F84u);
    ctx->pc = 0x2C3F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F7Cu;
            // 0x2c3f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3F84u; }
        if (ctx->pc != 0x2C3F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3F84u; }
        if (ctx->pc != 0x2C3F84u) { return; }
    }
    ctx->pc = 0x2C3F84u;
label_2c3f84:
    // 0x2c3f84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c3f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f8c: 0x16420018  bne         $s2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C3F8Cu;
    {
        const bool branch_taken_0x2c3f8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3f8c) {
            ctx->pc = 0x2C3FF0u;
            goto label_2c3ff0;
        }
    }
    ctx->pc = 0x2C3F94u;
    // 0x2c3f94: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3f98: 0xc0bc7b4  jal         func_2F1ED0
    ctx->pc = 0x2C3F98u;
    SET_GPR_U32(ctx, 31, 0x2C3FA0u);
    ctx->pc = 0x2C3F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F98u;
            // 0x2c3f9c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1ED0u;
    if (runtime->hasFunction(0x2F1ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FA0u; }
        if (ctx->pc != 0x2C3FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlayDataInfo__18CMemoryCardManagerFv_0x2f1ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FA0u; }
        if (ctx->pc != 0x2C3FA0u) { return; }
    }
    ctx->pc = 0x2C3FA0u;
label_2c3fa0:
    // 0x2c3fa0: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c3fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c3fa4: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C3FA4u;
    SET_GPR_U32(ctx, 31, 0x2C3FACu);
    ctx->pc = 0x2C3FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FA4u;
            // 0x2c3fa8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FACu; }
        if (ctx->pc != 0x2C3FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FACu; }
        if (ctx->pc != 0x2C3FACu) { return; }
    }
    ctx->pc = 0x2C3FACu;
label_2c3fac:
    // 0x2c3fac: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c3facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c3fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fb4: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C3FB4u;
    SET_GPR_U32(ctx, 31, 0x2C3FBCu);
    ctx->pc = 0x2C3FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FB4u;
            // 0x2c3fb8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FBCu; }
        if (ctx->pc != 0x2C3FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FBCu; }
        if (ctx->pc != 0x2C3FBCu) { return; }
    }
    ctx->pc = 0x2C3FBCu;
label_2c3fbc:
    // 0x2c3fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fc0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C3FC0u;
    SET_GPR_U32(ctx, 31, 0x2C3FC8u);
    ctx->pc = 0x2C3FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FC0u;
            // 0x2c3fc4: 0x24050be8  addiu       $a1, $zero, 0xBE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FC8u; }
        if (ctx->pc != 0x2C3FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FC8u; }
        if (ctx->pc != 0x2C3FC8u) { return; }
    }
    ctx->pc = 0x2C3FC8u;
label_2c3fc8:
    // 0x2c3fc8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c3fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fd0: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2c3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x2c3fd4: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c3fd8: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x2C3FD8u;
    SET_GPR_U32(ctx, 31, 0x2C3FE0u);
    ctx->pc = 0x2C3FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FD8u;
            // 0x2c3fdc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FE0u; }
        if (ctx->pc != 0x2C3FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FE0u; }
        if (ctx->pc != 0x2C3FE0u) { return; }
    }
    ctx->pc = 0x2C3FE0u;
label_2c3fe0:
    // 0x2c3fe0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3FE0u;
    SET_GPR_U32(ctx, 31, 0x2C3FE8u);
    ctx->pc = 0x2C3FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FE0u;
            // 0x2c3fe4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FE8u; }
        if (ctx->pc != 0x2C3FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FE8u; }
        if (ctx->pc != 0x2C3FE8u) { return; }
    }
    ctx->pc = 0x2C3FE8u;
label_2c3fe8:
    // 0x2c3fe8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c3fec: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x2c3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
label_2c3ff0:
    // 0x2c3ff0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3ff4: 0x164200a5  bne         $s2, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2C3FF4u;
    {
        const bool branch_taken_0x2c3ff4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C3FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FF4u;
            // 0x2c3ff8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ff4) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C3FFCu;
    // 0x2c3ffc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C3FFCu;
    SET_GPR_U32(ctx, 31, 0x2C4004u);
    ctx->pc = 0x2C4000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3FFCu;
            // 0x2c4000: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4004u; }
        if (ctx->pc != 0x2C4004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4004u; }
        if (ctx->pc != 0x2C4004u) { return; }
    }
    ctx->pc = 0x2C4004u;
label_2c4004:
    // 0x2c4004: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2C4004u;
    {
        const bool branch_taken_0x2c4004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4004) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C400Cu;
label_2c400c:
    // 0x2c400c: 0x12c0009f  beqz        $s6, . + 4 + (0x9F << 2)
    ctx->pc = 0x2C400Cu;
    {
        const bool branch_taken_0x2c400c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c400c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4014u;
    // 0x2c4014: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c4014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c4018: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C4018u;
    SET_GPR_U32(ctx, 31, 0x2C4020u);
    ctx->pc = 0x2C401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4018u;
            // 0x2c401c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4020u; }
        if (ctx->pc != 0x2C4020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4020u; }
        if (ctx->pc != 0x2C4020u) { return; }
    }
    ctx->pc = 0x2C4020u;
label_2c4020:
    // 0x2c4020: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c4020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c4024: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2c4024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x2c4028: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2c4028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c402c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C402Cu;
    {
        const bool branch_taken_0x2c402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C402Cu;
            // 0x2c4030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c402c) {
            ctx->pc = 0x2C4048u;
            goto label_2c4048;
        }
    }
    ctx->pc = 0x2C4034u;
    // 0x2c4034: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C4034u;
    SET_GPR_U32(ctx, 31, 0x2C403Cu);
    ctx->pc = 0x2C4038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4034u;
            // 0x2c4038: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C403Cu; }
        if (ctx->pc != 0x2C403Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C403Cu; }
        if (ctx->pc != 0x2C403Cu) { return; }
    }
    ctx->pc = 0x2C403Cu;
label_2c403c:
    // 0x2c403c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C403Cu;
    {
        const bool branch_taken_0x2c403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c403c) {
            ctx->pc = 0x2C405Cu;
            goto label_2c405c;
        }
    }
    ctx->pc = 0x2C4044u;
    // 0x2c4044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4048:
    // 0x2c4048: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C4048u;
    SET_GPR_U32(ctx, 31, 0x2C4050u);
    ctx->pc = 0x2C404Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4048u;
            // 0x2c404c: 0x24050be5  addiu       $a1, $zero, 0xBE5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3045));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4050u; }
        if (ctx->pc != 0x2C4050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4050u; }
        if (ctx->pc != 0x2C4050u) { return; }
    }
    ctx->pc = 0x2C4050u;
label_2c4050:
    // 0x2c4050: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2c4050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c4054: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2C4054u;
    {
        const bool branch_taken_0x2c4054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4054u;
            // 0x2c4058: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4054) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C405Cu;
label_2c405c:
    // 0x2c405c: 0x8f829ccc  lw          $v0, -0x6334($gp)
    ctx->pc = 0x2c405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941900)));
    // 0x2c4060: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4060u;
    {
        const bool branch_taken_0x2c4060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4060u;
            // 0x2c4064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4060) {
            ctx->pc = 0x2C4080u;
            goto label_2c4080;
        }
    }
    ctx->pc = 0x2C4068u;
    // 0x2c4068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c406c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C406Cu;
    SET_GPR_U32(ctx, 31, 0x2C4074u);
    ctx->pc = 0x2C4070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C406Cu;
            // 0x2c4070: 0x24050be9  addiu       $a1, $zero, 0xBE9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3049));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4074u; }
        if (ctx->pc != 0x2C4074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4074u; }
        if (ctx->pc != 0x2C4074u) { return; }
    }
    ctx->pc = 0x2C4074u;
label_2c4074:
    // 0x2c4074: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2c4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c4078: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2C4078u;
    {
        const bool branch_taken_0x2c4078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4078u;
            // 0x2c407c: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4078) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4080u;
label_2c4080:
    // 0x2c4080: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c4080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c4084: 0xae850128  sw          $a1, 0x128($s4)
    ctx->pc = 0x2c4084u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 5));
    // 0x2c4088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c408c: 0xc0b0bf4  jal         func_2C2FD0
    ctx->pc = 0x2C408Cu;
    SET_GPR_U32(ctx, 31, 0x2C4094u);
    ctx->pc = 0x2C4090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C408Cu;
            // 0x2c4090: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2FD0u;
    if (runtime->hasFunction(0x2C2FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2C2FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4094u; }
        if (ctx->pc != 0x2C4094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnvSetSave__14CSaveMenuClassFi_0x2c2fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4094u; }
        if (ctx->pc != 0x2C4094u) { return; }
    }
    ctx->pc = 0x2C4094u;
label_2c4094:
    // 0x2c4094: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2C4094u;
    {
        const bool branch_taken_0x2c4094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4094) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C409Cu;
label_2c409c:
    // 0x2c409c: 0x1240007b  beqz        $s2, . + 4 + (0x7B << 2)
    ctx->pc = 0x2C409Cu;
    {
        const bool branch_taken_0x2c409c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C409Cu;
            // 0x2c40a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c409c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C40A4u;
    // 0x2c40a4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C40A4u;
    SET_GPR_U32(ctx, 31, 0x2C40ACu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40ACu; }
        if (ctx->pc != 0x2C40ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40ACu; }
        if (ctx->pc != 0x2C40ACu) { return; }
    }
    ctx->pc = 0x2C40ACu;
label_2c40ac:
    // 0x2c40ac: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2C40ACu;
    {
        const bool branch_taken_0x2c40ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40ACu;
            // 0x2c40b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40ac) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C40B4u;
label_2c40b4:
    // 0x2c40b4: 0x8e84012c  lw          $a0, 0x12C($s4)
    ctx->pc = 0x2c40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x2c40b8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c40bc: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C40BCu;
    {
        const bool branch_taken_0x2c40bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C40C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40BCu;
            // 0x2c40c0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40bc) {
            ctx->pc = 0x2C4140u;
            goto label_2c4140;
        }
    }
    ctx->pc = 0x2C40C4u;
    // 0x2c40c4: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C40C4u;
    {
        const bool branch_taken_0x2c40c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c40c4) {
            ctx->pc = 0x2C4120u;
            goto label_2c4120;
        }
    }
    ctx->pc = 0x2C40CCu;
    // 0x2c40cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C40CCu;
    {
        const bool branch_taken_0x2c40cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40CCu;
            // 0x2c40d0: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40cc) {
            ctx->pc = 0x2C40DCu;
            goto label_2c40dc;
        }
    }
    ctx->pc = 0x2C40D4u;
    // 0x2c40d4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2C40D4u;
    {
        const bool branch_taken_0x2c40d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c40d4) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C40DCu;
label_2c40dc:
    // 0x2c40dc: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2C40DCu;
    {
        const bool branch_taken_0x2c40dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c40dc) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C40E4u;
    // 0x2c40e4: 0x8f829cc4  lw          $v0, -0x633C($gp)
    ctx->pc = 0x2c40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c40e8: 0xac4004c8  sw          $zero, 0x4C8($v0)
    ctx->pc = 0x2c40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 0));
    // 0x2c40ec: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c40f0: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C40F0u;
    SET_GPR_U32(ctx, 31, 0x2C40F8u);
    ctx->pc = 0x2C40F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40F0u;
            // 0x2c40f4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40F8u; }
        if (ctx->pc != 0x2C40F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40F8u; }
        if (ctx->pc != 0x2C40F8u) { return; }
    }
    ctx->pc = 0x2C40F8u;
label_2c40f8:
    // 0x2c40f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c40f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c40fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4100: 0x8c22cb38  lw          $v0, -0x34C8($at)
    ctx->pc = 0x2c4100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x2c4104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4108: 0x24050bf5  addiu       $a1, $zero, 0xBF5
    ctx->pc = 0x2c4108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3061));
    // 0x2c410c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C410Cu;
    SET_GPR_U32(ctx, 31, 0x2C4114u);
    ctx->pc = 0x2C4110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C410Cu;
            // 0x2c4110: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4114u; }
        if (ctx->pc != 0x2C4114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4114u; }
        if (ctx->pc != 0x2C4114u) { return; }
    }
    ctx->pc = 0x2C4114u;
label_2c4114:
    // 0x2c4114: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c4118: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2C4118u;
    {
        const bool branch_taken_0x2c4118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4118u;
            // 0x2c411c: 0xae82012c  sw          $v0, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4118) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4120u;
label_2c4120:
    // 0x2c4120: 0x12c0005a  beqz        $s6, . + 4 + (0x5A << 2)
    ctx->pc = 0x2C4120u;
    {
        const bool branch_taken_0x2c4120 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4120) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4128u;
    // 0x2c4128: 0xae83012c  sw          $v1, 0x12C($s4)
    ctx->pc = 0x2c4128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
    // 0x2c412c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4130: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C4130u;
    SET_GPR_U32(ctx, 31, 0x2C4138u);
    ctx->pc = 0x2C4134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4130u;
            // 0x2c4134: 0x24050bf6  addiu       $a1, $zero, 0xBF6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3062));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4138u; }
        if (ctx->pc != 0x2C4138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4138u; }
        if (ctx->pc != 0x2C4138u) { return; }
    }
    ctx->pc = 0x2C4138u;
label_2c4138:
    // 0x2c4138: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2C4138u;
    {
        const bool branch_taken_0x2c4138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4138) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4140u;
label_2c4140:
    // 0x2c4140: 0x12400052  beqz        $s2, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C4140u;
    {
        const bool branch_taken_0x2c4140 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4140u;
            // 0x2c4144: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4140) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4148u;
    // 0x2c4148: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c4148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c414c: 0x8c22cb38  lw          $v0, -0x34C8($at)
    ctx->pc = 0x2c414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x2c4150: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4154: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C4154u;
    SET_GPR_U32(ctx, 31, 0x2C415Cu);
    ctx->pc = 0x2C4158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4154u;
            // 0x2c4158: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C415Cu; }
        if (ctx->pc != 0x2C415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C415Cu; }
        if (ctx->pc != 0x2C415Cu) { return; }
    }
    ctx->pc = 0x2C415Cu;
label_2c415c:
    // 0x2c415c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2C415Cu;
    {
        const bool branch_taken_0x2c415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c415c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4164u;
label_2c4164:
    // 0x2c4164: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2c4164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c4168: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4168u;
    {
        const bool branch_taken_0x2c4168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4168u;
            // 0x2c416c: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4168) {
            ctx->pc = 0x2C417Cu;
            goto label_2c417c;
        }
    }
    ctx->pc = 0x2C4170u;
    // 0x2c4170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4174: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4174u;
    {
        const bool branch_taken_0x2c4174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4174u;
            // 0x2c4178: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4174) {
            ctx->pc = 0x2C4188u;
            goto label_2c4188;
        }
    }
    ctx->pc = 0x2C417Cu;
label_2c417c:
    // 0x2c417c: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c4180: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4184: 0x24530d5c  addiu       $s3, $v0, 0xD5C
    ctx->pc = 0x2c4184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2c4188:
    // 0x2c4188: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4188u;
    {
        const bool branch_taken_0x2c4188 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4188u;
            // 0x2c418c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4188) {
            ctx->pc = 0x2C4198u;
            goto label_2c4198;
        }
    }
    ctx->pc = 0x2C4190u;
    // 0x2c4190: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2C4190u;
    {
        const bool branch_taken_0x2c4190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4190u;
            // 0x2c4194: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4190) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4198u;
label_2c4198:
    // 0x2c4198: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C4198u;
    SET_GPR_U32(ctx, 31, 0x2C41A0u);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41A0u; }
        if (ctx->pc != 0x2C41A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41A0u; }
        if (ctx->pc != 0x2C41A0u) { return; }
    }
    ctx->pc = 0x2C41A0u;
label_2c41a0:
    // 0x2c41a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C41A0u;
    {
        const bool branch_taken_0x2c41a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c41a0) {
            ctx->pc = 0x2C41C0u;
            goto label_2c41c0;
        }
    }
    ctx->pc = 0x2C41A8u;
    // 0x2c41a8: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C41A8u;
    {
        const bool branch_taken_0x2c41a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41A8u;
            // 0x2c41ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41a8) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C41B0u;
    // 0x2c41b0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C41B0u;
    SET_GPR_U32(ctx, 31, 0x2C41B8u);
    ctx->pc = 0x2C41B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41B0u;
            // 0x2c41b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41B8u; }
        if (ctx->pc != 0x2C41B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41B8u; }
        if (ctx->pc != 0x2C41B8u) { return; }
    }
    ctx->pc = 0x2C41B8u;
label_2c41b8:
    // 0x2c41b8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C41B8u;
    {
        const bool branch_taken_0x2c41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c41b8) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C41C0u;
label_2c41c0:
    // 0x2c41c0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2c41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c41c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c41c8: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C41C8u;
    {
        const bool branch_taken_0x2c41c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c41c8) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C41D0u;
    // 0x2c41d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2c41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c41d4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C41D4u;
    {
        const bool branch_taken_0x2c41d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c41d4) {
            ctx->pc = 0x2C4250u;
            goto label_2c4250;
        }
    }
    ctx->pc = 0x2C41DCu;
    // 0x2c41dc: 0x860421e6  lh          $a0, 0x21E6($s0)
    ctx->pc = 0x2c41dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8678)));
    // 0x2c41e0: 0x24030beb  addiu       $v1, $zero, 0xBEB
    ctx->pc = 0x2c41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3051));
    // 0x2c41e4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C41E4u;
    {
        const bool branch_taken_0x2c41e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C41E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41E4u;
            // 0x2c41e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41e4) {
            ctx->pc = 0x2C41F4u;
            goto label_2c41f4;
        }
    }
    ctx->pc = 0x2C41ECu;
    // 0x2c41ec: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x2C41ECu;
    SET_GPR_U32(ctx, 31, 0x2C41F4u);
    ctx->pc = 0x2C41F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41ECu;
            // 0x2c41f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41F4u; }
        if (ctx->pc != 0x2C41F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41F4u; }
        if (ctx->pc != 0x2C41F4u) { return; }
    }
    ctx->pc = 0x2C41F4u;
label_2c41f4:
    // 0x2c41f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c41f8: 0x12430011  beq         $s2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C41F8u;
    {
        const bool branch_taken_0x2c41f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C41FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41F8u;
            // 0x2c41fc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41f8) {
            ctx->pc = 0x2C4240u;
            goto label_2c4240;
        }
    }
    ctx->pc = 0x2C4200u;
    // 0x2c4200: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c4200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4204: 0x12440003  beq         $s2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4204u;
    {
        const bool branch_taken_0x2c4204 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c4204) {
            ctx->pc = 0x2C4214u;
            goto label_2c4214;
        }
    }
    ctx->pc = 0x2C420Cu;
    // 0x2c420c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C420Cu;
    {
        const bool branch_taken_0x2c420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c420c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4214u;
label_2c4214:
    // 0x2c4214: 0x860521e6  lh          $a1, 0x21E6($s0)
    ctx->pc = 0x2c4214u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8678)));
    // 0x2c4218: 0x24030beb  addiu       $v1, $zero, 0xBEB
    ctx->pc = 0x2c4218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3051));
    // 0x2c421c: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C421Cu;
    {
        const bool branch_taken_0x2c421c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c421c) {
            ctx->pc = 0x2C423Cu;
            goto label_2c423c;
        }
    }
    ctx->pc = 0x2C4224u;
    // 0x2c4224: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4224u;
    {
        const bool branch_taken_0x2c4224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4224u;
            // 0x2c4228: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4224) {
            ctx->pc = 0x2C423Cu;
            goto label_2c423c;
        }
    }
    ctx->pc = 0x2C422Cu;
    // 0x2c422c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C422Cu;
    SET_GPR_U32(ctx, 31, 0x2C4234u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4234u; }
        if (ctx->pc != 0x2C4234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4234u; }
        if (ctx->pc != 0x2C4234u) { return; }
    }
    ctx->pc = 0x2C4234u;
label_2c4234:
    // 0x2c4234: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C4234u;
    {
        const bool branch_taken_0x2c4234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4234) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C423Cu;
label_2c423c:
    // 0x2c423c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c423cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c4240:
    // 0x2c4240: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C4240u;
    SET_GPR_U32(ctx, 31, 0x2C4248u);
    ctx->pc = 0x2C4244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4240u;
            // 0x2c4244: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4248u; }
        if (ctx->pc != 0x2C4248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4248u; }
        if (ctx->pc != 0x2C4248u) { return; }
    }
    ctx->pc = 0x2C4248u;
label_2c4248:
    // 0x2c4248: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C4248u;
    {
        const bool branch_taken_0x2c4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4248) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4250u;
label_2c4250:
    // 0x2c4250: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2c4250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2c4254: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2c4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2c4258: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c4258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c425c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C425Cu;
    {
        const bool branch_taken_0x2c425c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c425c) {
            ctx->pc = 0x2C427Cu;
            goto label_2c427c;
        }
    }
    ctx->pc = 0x2C4264u;
    // 0x2c4264: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4264u;
    {
        const bool branch_taken_0x2c4264 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4264u;
            // 0x2c4268: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4264) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C426Cu;
    // 0x2c426c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C426Cu;
    SET_GPR_U32(ctx, 31, 0x2C4274u);
    ctx->pc = 0x2C4270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C426Cu;
            // 0x2c4270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4274u; }
        if (ctx->pc != 0x2C4274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4274u; }
        if (ctx->pc != 0x2C4274u) { return; }
    }
    ctx->pc = 0x2C4274u;
label_2c4274:
    // 0x2c4274: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4274u;
    {
        const bool branch_taken_0x2c4274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4274) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C427Cu;
label_2c427c:
    // 0x2c427c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C427Cu;
    {
        const bool branch_taken_0x2c427c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C427Cu;
            // 0x2c4280: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c427c) {
            ctx->pc = 0x2C428Cu;
            goto label_2c428c;
        }
    }
    ctx->pc = 0x2C4284u;
    // 0x2c4284: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2C4284u;
    SET_GPR_U32(ctx, 31, 0x2C428Cu);
    ctx->pc = 0x2C4288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4284u;
            // 0x2c4288: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C428Cu; }
        if (ctx->pc != 0x2C428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C428Cu; }
        if (ctx->pc != 0x2C428Cu) { return; }
    }
    ctx->pc = 0x2C428Cu;
label_2c428c:
    // 0x2c428c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c4290:
    // 0x2c4290: 0x16220067  bne         $s1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2C4290u;
    {
        const bool branch_taken_0x2c4290 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4290u;
            // 0x2c4294: 0x220082a  slt         $at, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4290) {
            ctx->pc = 0x2C4430u;
            goto label_2c4430;
        }
    }
    ctx->pc = 0x2C4298u;
    // 0x2c4298: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c4298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c429c: 0xc08891c  jal         func_222470
    ctx->pc = 0x2C429Cu;
    SET_GPR_U32(ctx, 31, 0x2C42A4u);
    ctx->pc = 0x2C42A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C429Cu;
            // 0x2c42a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42A4u; }
        if (ctx->pc != 0x2C42A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42A4u; }
        if (ctx->pc != 0x2C42A4u) { return; }
    }
    ctx->pc = 0x2C42A4u;
label_2c42a4:
    // 0x2c42a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c42a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c42a8: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x2c42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
    // 0x2c42ac: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c42acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c42b0: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x2c42b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c42b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C42B4u;
    {
        const bool branch_taken_0x2c42b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C42B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C42B4u;
            // 0x2c42b8: 0x8f839cc4  lw          $v1, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42b4) {
            ctx->pc = 0x2C42C8u;
            goto label_2c42c8;
        }
    }
    ctx->pc = 0x2C42BCu;
    // 0x2c42bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c42c0: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C42C0u;
    {
        const bool branch_taken_0x2c42c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C42C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C42C0u;
            // 0x2c42c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42c0) {
            ctx->pc = 0x2C42D4u;
            goto label_2c42d4;
        }
    }
    ctx->pc = 0x2C42C8u;
label_2c42c8:
    // 0x2c42c8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2c42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c42cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c42d0: 0x24520d5c  addiu       $s2, $v0, 0xD5C
    ctx->pc = 0x2c42d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2c42d4:
    // 0x2c42d4: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x2c42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x2c42d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c42dc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C42DCu;
    {
        const bool branch_taken_0x2c42dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C42E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C42DCu;
            // 0x2c42e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42dc) {
            ctx->pc = 0x2C42F4u;
            goto label_2c42f4;
        }
    }
    ctx->pc = 0x2C42E4u;
    // 0x2c42e4: 0xae80012c  sw          $zero, 0x12C($s4)
    ctx->pc = 0x2c42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
    // 0x2c42e8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2c42e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c42ec: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2C42ECu;
    {
        const bool branch_taken_0x2c42ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C42F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C42ECu;
            // 0x2c42f0: 0xae800148  sw          $zero, 0x148($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42ec) {
            ctx->pc = 0x2C442Cu;
            goto label_2c442c;
        }
    }
    ctx->pc = 0x2C42F4u;
label_2c42f4:
    // 0x2c42f4: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2C42F4u;
    SET_GPR_U32(ctx, 31, 0x2C42FCu);
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42FCu; }
        if (ctx->pc != 0x2C42FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42FCu; }
        if (ctx->pc != 0x2C42FCu) { return; }
    }
    ctx->pc = 0x2C42FCu;
label_2c42fc:
    // 0x2c42fc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C42FCu;
    {
        const bool branch_taken_0x2c42fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C42FCu;
            // 0x2c4300: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c42fc) {
            ctx->pc = 0x2C4358u;
            goto label_2c4358;
        }
    }
    ctx->pc = 0x2C4304u;
    // 0x2c4304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4308: 0x8c22cb38  lw          $v0, -0x34C8($at)
    ctx->pc = 0x2c4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x2c430c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c430cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4310: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c4310u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4314: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c4314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c4318: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C4318u;
    SET_GPR_U32(ctx, 31, 0x2C4320u);
    ctx->pc = 0x2C431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4318u;
            // 0x2c431c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4320u; }
        if (ctx->pc != 0x2C4320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4320u; }
        if (ctx->pc != 0x2C4320u) { return; }
    }
    ctx->pc = 0x2C4320u;
label_2c4320:
    // 0x2c4320: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c4324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4328: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2c4328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x2c432c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C432Cu;
    SET_GPR_U32(ctx, 31, 0x2C4334u);
    ctx->pc = 0x2C4330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C432Cu;
            // 0x2c4330: 0x24050be7  addiu       $a1, $zero, 0xBE7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3047));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4334u; }
        if (ctx->pc != 0x2C4334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4334u; }
        if (ctx->pc != 0x2C4334u) { return; }
    }
    ctx->pc = 0x2C4334u;
label_2c4334:
    // 0x2c4334: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2c4334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c4338: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c4338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c433c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4340: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C4340u;
    {
        const bool branch_taken_0x2c4340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4340u;
            // 0x2c4344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4340) {
            ctx->pc = 0x2C43DCu;
            goto label_2c43dc;
        }
    }
    ctx->pc = 0x2C4348u;
    // 0x2c4348: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C4348u;
    SET_GPR_U32(ctx, 31, 0x2C4350u);
    ctx->pc = 0x2C434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4348u;
            // 0x2c434c: 0x24050bc1  addiu       $a1, $zero, 0xBC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3009));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4350u; }
        if (ctx->pc != 0x2C4350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4350u; }
        if (ctx->pc != 0x2C4350u) { return; }
    }
    ctx->pc = 0x2C4350u;
label_2c4350:
    // 0x2c4350: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C4350u;
    {
        const bool branch_taken_0x2c4350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4350u;
            // 0x2c4354: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4350) {
            ctx->pc = 0x2C43E0u;
            goto label_2c43e0;
        }
    }
    ctx->pc = 0x2C4358u;
label_2c4358:
    // 0x2c4358: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2c4358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2c435c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C435Cu;
    {
        const bool branch_taken_0x2c435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c435c) {
            ctx->pc = 0x2C4390u;
            goto label_2c4390;
        }
    }
    ctx->pc = 0x2C4364u;
    // 0x2c4364: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c4364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c4368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c436c: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C436Cu;
    SET_GPR_U32(ctx, 31, 0x2C4374u);
    ctx->pc = 0x2C4370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C436Cu;
            // 0x2c4370: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4374u; }
        if (ctx->pc != 0x2C4374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4374u; }
        if (ctx->pc != 0x2C4374u) { return; }
    }
    ctx->pc = 0x2C4374u;
label_2c4374:
    // 0x2c4374: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c4374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c4378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c437c: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2c437cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x2c4380: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C4380u;
    SET_GPR_U32(ctx, 31, 0x2C4388u);
    ctx->pc = 0x2C4384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4380u;
            // 0x2c4384: 0x24050bea  addiu       $a1, $zero, 0xBEA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3050));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4388u; }
        if (ctx->pc != 0x2C4388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4388u; }
        if (ctx->pc != 0x2C4388u) { return; }
    }
    ctx->pc = 0x2C4388u;
label_2c4388:
    // 0x2c4388: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C4388u;
    {
        const bool branch_taken_0x2c4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4388) {
            ctx->pc = 0x2C43DCu;
            goto label_2c43dc;
        }
    }
    ctx->pc = 0x2C4390u;
label_2c4390:
    // 0x2c4390: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2c4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2c4394: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2c4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2c4398: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c4398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c439c: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2C439Cu;
    {
        const bool branch_taken_0x2c439c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C43A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C439Cu;
            // 0x2c43a0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c439c) {
            ctx->pc = 0x2C43DCu;
            goto label_2c43dc;
        }
    }
    ctx->pc = 0x2C43A4u;
    // 0x2c43a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c43a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43a8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C43A8u;
    SET_GPR_U32(ctx, 31, 0x2C43B0u);
    ctx->pc = 0x2C43ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43A8u;
            // 0x2c43ac: 0x24a5fc08  addiu       $a1, $a1, -0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C43B0u; }
        if (ctx->pc != 0x2C43B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C43B0u; }
        if (ctx->pc != 0x2C43B0u) { return; }
    }
    ctx->pc = 0x2C43B0u;
label_2c43b0:
    // 0x2c43b0: 0xdf829cf0  ld          $v0, -0x6310($gp)
    ctx->pc = 0x2c43b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941936)));
    // 0x2c43b4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2c43b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2c43b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c43b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c43bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c43c0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2c43c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2c43c4: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c43c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c43cc: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2c43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x2c43d0: 0x8e820138  lw          $v0, 0x138($s4)
    ctx->pc = 0x2c43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
    // 0x2c43d4: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x2C43D4u;
    SET_GPR_U32(ctx, 31, 0x2C43DCu);
    ctx->pc = 0x2C43D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43D4u;
            // 0x2c43d8: 0xafa20174  sw          $v0, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C43DCu; }
        if (ctx->pc != 0x2C43DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C43DCu; }
        if (ctx->pc != 0x2C43DCu) { return; }
    }
    ctx->pc = 0x2C43DCu;
label_2c43dc:
    // 0x2c43dc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2c43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2c43e0:
    // 0x2c43e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c43e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c43e8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C43E8u;
    {
        const bool branch_taken_0x2c43e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C43ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C43E8u;
            // 0x2c43ec: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43e8) {
            ctx->pc = 0x2C442Cu;
            goto label_2c442c;
        }
    }
    ctx->pc = 0x2C43F0u;
    // 0x2c43f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c43f4: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x2c43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
    // 0x2c43f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c43f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43fc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c43fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4400: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c4400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c4404: 0x8c22cb38  lw          $v0, -0x34C8($at)
    ctx->pc = 0x2c4404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x2c4408: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c4408u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c440c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c440cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c4410: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C4410u;
    SET_GPR_U32(ctx, 31, 0x2C4418u);
    ctx->pc = 0x2C4414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4410u;
            // 0x2c4414: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4418u; }
        if (ctx->pc != 0x2C4418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4418u; }
        if (ctx->pc != 0x2C4418u) { return; }
    }
    ctx->pc = 0x2C4418u;
label_2c4418:
    // 0x2c4418: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c4418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c441c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4420: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x2c4420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x2c4424: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C4424u;
    SET_GPR_U32(ctx, 31, 0x2C442Cu);
    ctx->pc = 0x2C4428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4424u;
            // 0x2c4428: 0x24050bc6  addiu       $a1, $zero, 0xBC6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3014));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C442Cu; }
        if (ctx->pc != 0x2C442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C442Cu; }
        if (ctx->pc != 0x2C442Cu) { return; }
    }
    ctx->pc = 0x2C442Cu;
label_2c442c:
    // 0x2c442c: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x2c442cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2c4430:
    // 0x2c4430: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4430u;
    {
        const bool branch_taken_0x2c4430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4430u;
            // 0x2c4434: 0x2e210007  sltiu       $at, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4430) {
            ctx->pc = 0x2C4444u;
            goto label_2c4444;
        }
    }
    ctx->pc = 0x2C4438u;
    // 0x2c4438: 0x92820110  lbu         $v0, 0x110($s4)
    ctx->pc = 0x2c4438u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2c443c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2C443Cu;
    {
        const bool branch_taken_0x2c443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c443c) {
            ctx->pc = 0x2C460Cu;
            goto label_2c460c;
        }
    }
    ctx->pc = 0x2C4444u;
label_2c4444:
    // 0x2c4444: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C4444u;
    {
        const bool branch_taken_0x2c4444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4444u;
            // 0x2c4448: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4444) {
            ctx->pc = 0x2C4604u;
            goto label_2c4604;
        }
    }
    ctx->pc = 0x2C444Cu;
    // 0x2c444c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2c444cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c4450: 0x2463fc70  addiu       $v1, $v1, -0x390
    ctx->pc = 0x2c4450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966384));
    // 0x2c4454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4458: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c445c: 0x400008  jr          $v0
    ctx->pc = 0x2C445Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4464u: goto label_2c4464;
            case 0x2C4488u: goto label_2c4488;
            case 0x2C4550u: goto label_2c4550;
            case 0x2C4558u: goto label_2c4558;
            case 0x2C45E4u: goto label_2c45e4;
            case 0x2C4600u: goto label_2c4600;
            case 0x2C4604u: goto label_2c4604;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C4464u;
label_2c4464:
    // 0x2c4464: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c4464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c4468: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c446c: 0x24a5fc18  addiu       $a1, $a1, -0x3E8
    ctx->pc = 0x2c446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966296));
    // 0x2c4470: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C4470u;
    SET_GPR_U32(ctx, 31, 0x2C4478u);
    ctx->pc = 0x2C4474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4470u;
            // 0x2c4474: 0xae80012c  sw          $zero, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4478u; }
        if (ctx->pc != 0x2C4478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4478u; }
        if (ctx->pc != 0x2C4478u) { return; }
    }
    ctx->pc = 0x2C4478u;
label_2c4478:
    // 0x2c4478: 0xc0aff4c  jal         func_2BFD30
    ctx->pc = 0x2C4478u;
    SET_GPR_U32(ctx, 31, 0x2C4480u);
    ctx->pc = 0x2C447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4478u;
            // 0x2c447c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFD30u;
    if (runtime->hasFunction(0x2BFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2BFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4480u; }
        if (ctx->pc != 0x2C4480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuReturnMsgCtrl__Fi_0x2bfd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4480u; }
        if (ctx->pc != 0x2C4480u) { return; }
    }
    ctx->pc = 0x2C4480u;
label_2c4480:
    // 0x2c4480: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2C4480u;
    {
        const bool branch_taken_0x2c4480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4480u;
            // 0x2c4484: 0xa2800110  sb          $zero, 0x110($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 272), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4480) {
            ctx->pc = 0x2C4608u;
            goto label_2c4608;
        }
    }
    ctx->pc = 0x2C4488u;
label_2c4488:
    // 0x2c4488: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c4488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c448c: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2C448Cu;
    SET_GPR_U32(ctx, 31, 0x2C4494u);
    ctx->pc = 0x2C4490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C448Cu;
            // 0x2c4490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4494u; }
        if (ctx->pc != 0x2C4494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4494u; }
        if (ctx->pc != 0x2C4494u) { return; }
    }
    ctx->pc = 0x2C4494u;
label_2c4494:
    // 0x2c4494: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c4494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c4498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c449c: 0x24a5fc28  addiu       $a1, $a1, -0x3D8
    ctx->pc = 0x2c449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966312));
    // 0x2c44a0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C44A0u;
    SET_GPR_U32(ctx, 31, 0x2C44A8u);
    ctx->pc = 0x2C44A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C44A0u;
            // 0x2c44a4: 0xae80012c  sw          $zero, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44A8u; }
        if (ctx->pc != 0x2C44A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44A8u; }
        if (ctx->pc != 0x2C44A8u) { return; }
    }
    ctx->pc = 0x2C44A8u;
label_2c44a8:
    // 0x2c44a8: 0xae0017f4  sw          $zero, 0x17F4($s0)
    ctx->pc = 0x2c44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 0));
    // 0x2c44ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c44acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c44b0: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c44b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c44b8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c44bc: 0x8c44017c  lw          $a0, 0x17C($v0)
    ctx->pc = 0x2c44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x2c44c0: 0xc08a240  jal         func_228900
    ctx->pc = 0x2C44C0u;
    SET_GPR_U32(ctx, 31, 0x2C44C8u);
    ctx->pc = 0x2C44C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C44C0u;
            // 0x2c44c4: 0x24a5fc38  addiu       $a1, $a1, -0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44C8u; }
        if (ctx->pc != 0x2C44C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44C8u; }
        if (ctx->pc != 0x2C44C8u) { return; }
    }
    ctx->pc = 0x2C44C8u;
label_2c44c8:
    // 0x2c44c8: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c44cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c44ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c44d0: 0x2406fff8  addiu       $a2, $zero, -0x8
    ctx->pc = 0x2c44d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2c44d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c44d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c44d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c44d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c44dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c44e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c44e4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c44e8: 0x8c44017c  lw          $a0, 0x17C($v0)
    ctx->pc = 0x2c44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x2c44ec: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x2C44ECu;
    SET_GPR_U32(ctx, 31, 0x2C44F4u);
    ctx->pc = 0x2C44F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C44ECu;
            // 0x2c44f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44F4u; }
        if (ctx->pc != 0x2C44F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44F4u; }
        if (ctx->pc != 0x2C44F4u) { return; }
    }
    ctx->pc = 0x2C44F4u;
label_2c44f4:
    // 0x2c44f4: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x2c44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c44f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C44F8u;
    {
        const bool branch_taken_0x2c44f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C44FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C44F8u;
            // 0x2c44fc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44f8) {
            ctx->pc = 0x2C4514u;
            goto label_2c4514;
        }
    }
    ctx->pc = 0x2C4500u;
    // 0x2c4500: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c4500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4504: 0x8c24cb44  lw          $a0, -0x34BC($at)
    ctx->pc = 0x2c4504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
    // 0x2c4508: 0x2406fff8  addiu       $a2, $zero, -0x8
    ctx->pc = 0x2c4508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2c450c: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x2C450Cu;
    SET_GPR_U32(ctx, 31, 0x2C4514u);
    ctx->pc = 0x2C4510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C450Cu;
            // 0x2c4510: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4514u; }
        if (ctx->pc != 0x2C4514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4514u; }
        if (ctx->pc != 0x2C4514u) { return; }
    }
    ctx->pc = 0x2C4514u;
label_2c4514:
    // 0x2c4514: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x2c4514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2c4518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c451c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C451Cu;
    {
        const bool branch_taken_0x2c451c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C451Cu;
            // 0x2c4520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c451c) {
            ctx->pc = 0x2C4540u;
            goto label_2c4540;
        }
    }
    ctx->pc = 0x2C4524u;
    // 0x2c4524: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c4524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c4528: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c4528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c452c: 0x8c24cb40  lw          $a0, -0x34C0($at)
    ctx->pc = 0x2c452cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953792)));
    // 0x2c4530: 0x2406fff8  addiu       $a2, $zero, -0x8
    ctx->pc = 0x2c4530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2c4534: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x2C4534u;
    SET_GPR_U32(ctx, 31, 0x2C453Cu);
    ctx->pc = 0x2C4538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4534u;
            // 0x2c4538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C453Cu; }
        if (ctx->pc != 0x2C453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C453Cu; }
        if (ctx->pc != 0x2C453Cu) { return; }
    }
    ctx->pc = 0x2C453Cu;
label_2c453c:
    // 0x2c453c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4540:
    // 0x2c4540: 0xc0aff4c  jal         func_2BFD30
    ctx->pc = 0x2C4540u;
    SET_GPR_U32(ctx, 31, 0x2C4548u);
    ctx->pc = 0x2BFD30u;
    if (runtime->hasFunction(0x2BFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2BFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4548u; }
        if (ctx->pc != 0x2C4548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuReturnMsgCtrl__Fi_0x2bfd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4548u; }
        if (ctx->pc != 0x2C4548u) { return; }
    }
    ctx->pc = 0x2C4548u;
label_2c4548:
    // 0x2c4548: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2C4548u;
    {
        const bool branch_taken_0x2c4548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4548) {
            ctx->pc = 0x2C4604u;
            goto label_2c4604;
        }
    }
    ctx->pc = 0x2C4550u;
label_2c4550:
    // 0x2c4550: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C4550u;
    {
        const bool branch_taken_0x2c4550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4550u;
            // 0x2c4554: 0xae80012c  sw          $zero, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4550) {
            ctx->pc = 0x2C4604u;
            goto label_2c4604;
        }
    }
    ctx->pc = 0x2C4558u;
label_2c4558:
    // 0x2c4558: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x2c4558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2c455c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C455Cu;
    {
        const bool branch_taken_0x2c455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C455Cu;
            // 0x2c4560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c455c) {
            ctx->pc = 0x2C457Cu;
            goto label_2c457c;
        }
    }
    ctx->pc = 0x2C4564u;
    // 0x2c4564: 0x24050bbe  addiu       $a1, $zero, 0xBBE
    ctx->pc = 0x2c4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3006));
    // 0x2c4568: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C4568u;
    SET_GPR_U32(ctx, 31, 0x2C4570u);
    ctx->pc = 0x2C456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4568u;
            // 0x2c456c: 0xae80012c  sw          $zero, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4570u; }
        if (ctx->pc != 0x2C4570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4570u; }
        if (ctx->pc != 0x2C4570u) { return; }
    }
    ctx->pc = 0x2C4570u;
label_2c4570:
    // 0x2c4570: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2c4570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c4574: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C4574u;
    SET_GPR_U32(ctx, 31, 0x2C457Cu);
    ctx->pc = 0x2C4578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4574u;
            // 0x2c4578: 0x24050c1d  addiu       $a1, $zero, 0xC1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3101));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C457Cu; }
        if (ctx->pc != 0x2C457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C457Cu; }
        if (ctx->pc != 0x2C457Cu) { return; }
    }
    ctx->pc = 0x2C457Cu;
label_2c457c:
    // 0x2c457c: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x2c457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2c4580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4584: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4584u;
    {
        const bool branch_taken_0x2c4584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4584u;
            // 0x2c4588: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4584) {
            ctx->pc = 0x2C4594u;
            goto label_2c4594;
        }
    }
    ctx->pc = 0x2C458Cu;
    // 0x2c458c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C458Cu;
    {
        const bool branch_taken_0x2c458c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C458Cu;
            // 0x2c4590: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c458c) {
            ctx->pc = 0x2C45B8u;
            goto label_2c45b8;
        }
    }
    ctx->pc = 0x2C4594u;
label_2c4594:
    // 0x2c4594: 0xae80012c  sw          $zero, 0x12C($s4)
    ctx->pc = 0x2c4594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
    // 0x2c4598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c459c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2c459cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2c45a0: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x2C45A0u;
    SET_GPR_U32(ctx, 31, 0x2C45A8u);
    ctx->pc = 0x2C45A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C45A0u;
            // 0x2c45a4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (runtime->hasFunction(0x21D680u)) {
        auto targetFn = runtime->lookupFunction(0x21D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C45A8u; }
        if (ctx->pc != 0x2C45A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFii_0x21d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C45A8u; }
        if (ctx->pc != 0x2C45A8u) { return; }
    }
    ctx->pc = 0x2C45A8u;
label_2c45a8:
    // 0x2c45a8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2c45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c45ac: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C45ACu;
    SET_GPR_U32(ctx, 31, 0x2C45B4u);
    ctx->pc = 0x2C45B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C45ACu;
            // 0x2c45b0: 0x24050c1e  addiu       $a1, $zero, 0xC1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C45B4u; }
        if (ctx->pc != 0x2C45B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C45B4u; }
        if (ctx->pc != 0x2C45B4u) { return; }
    }
    ctx->pc = 0x2C45B4u;
label_2c45b4:
    // 0x2c45b4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2c45b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c45b8:
    // 0x2c45b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c45b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c45bc: 0xa297011c  sb          $s7, 0x11C($s4)
    ctx->pc = 0x2c45bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 284), (uint8_t)GPR_U32(ctx, 23));
    // 0x2c45c0: 0x8c22cb38  lw          $v0, -0x34C8($at)
    ctx->pc = 0x2c45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
    // 0x2c45c4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c45c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c45c8: 0x8e820184  lw          $v0, 0x184($s4)
    ctx->pc = 0x2c45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 388)));
    // 0x2c45cc: 0xa0570001  sb          $s7, 0x1($v0)
    ctx->pc = 0x2c45ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 23));
    // 0x2c45d0: 0x8e820188  lw          $v0, 0x188($s4)
    ctx->pc = 0x2c45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x2c45d4: 0xa0570001  sb          $s7, 0x1($v0)
    ctx->pc = 0x2c45d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 23));
    // 0x2c45d8: 0x8e82018c  lw          $v0, 0x18C($s4)
    ctx->pc = 0x2c45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 396)));
    // 0x2c45dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C45DCu;
    {
        const bool branch_taken_0x2c45dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C45DCu;
            // 0x2c45e0: 0xa0570001  sb          $s7, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45dc) {
            ctx->pc = 0x2C4604u;
            goto label_2c4604;
        }
    }
    ctx->pc = 0x2C45E4u;
label_2c45e4:
    // 0x2c45e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c45e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c45e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c45e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45ec: 0x24a5fc40  addiu       $a1, $a1, -0x3C0
    ctx->pc = 0x2c45ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
    // 0x2c45f0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2C45F0u;
    SET_GPR_U32(ctx, 31, 0x2C45F8u);
    ctx->pc = 0x2C45F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C45F0u;
            // 0x2c45f4: 0xae80012c  sw          $zero, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C45F8u; }
        if (ctx->pc != 0x2C45F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C45F8u; }
        if (ctx->pc != 0x2C45F8u) { return; }
    }
    ctx->pc = 0x2C45F8u;
label_2c45f8:
    // 0x2c45f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C45F8u;
    {
        const bool branch_taken_0x2c45f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c45f8) {
            ctx->pc = 0x2C4604u;
            goto label_2c4604;
        }
    }
    ctx->pc = 0x2C4600u;
label_2c4600:
    // 0x2c4600: 0xae80012c  sw          $zero, 0x12C($s4)
    ctx->pc = 0x2c4600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
label_2c4604:
    // 0x2c4604: 0xa2800110  sb          $zero, 0x110($s4)
    ctx->pc = 0x2c4604u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 272), (uint8_t)GPR_U32(ctx, 0));
label_2c4608:
    // 0x2c4608: 0xae910128  sw          $s1, 0x128($s4)
    ctx->pc = 0x2c4608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 17));
label_2c460c:
    // 0x2c460c: 0x12e00065  beqz        $s7, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C460Cu;
    {
        const bool branch_taken_0x2c460c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C460Cu;
            // 0x2c4610: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c460c) {
            ctx->pc = 0x2C47A4u;
            goto label_2c47a4;
        }
    }
    ctx->pc = 0x2C4614u;
    // 0x2c4614: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c4614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4618: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c4618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c461c:
    // 0x2c461c: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2c461cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2c4620: 0x8f839cc4  lw          $v1, -0x633C($gp)
    ctx->pc = 0x2c4620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c4624: 0x2442d290  addiu       $v0, $v0, -0x2D70
    ctx->pc = 0x2c4624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955664));
    // 0x2c4628: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c462c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2c462cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4630: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2c4630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2c4634: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x2c4634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2c4638: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x2c4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2c463c: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x2c463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x2c4640: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c4640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c4644: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2c4644u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4648: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2c4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c464c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C464Cu;
    {
        const bool branch_taken_0x2c464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c464c) {
            ctx->pc = 0x2C474Cu;
            goto label_2c474c;
        }
    }
    ctx->pc = 0x2C4654u;
    // 0x2c4654: 0x86630012  lh          $v1, 0x12($s3)
    ctx->pc = 0x2c4654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x2c4658: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c465c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C465Cu;
    {
        const bool branch_taken_0x2c465c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C465Cu;
            // 0x2c4660: 0x86640008  lh          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c465c) {
            ctx->pc = 0x2C467Cu;
            goto label_2c467c;
        }
    }
    ctx->pc = 0x2C4664u;
    // 0x2c4664: 0x8663000a  lh          $v1, 0xA($s3)
    ctx->pc = 0x2c4664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x2c4668: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c4668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c466c: 0x24425208  addiu       $v0, $v0, 0x5208
    ctx->pc = 0x2c466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21000));
    // 0x2c4670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4674: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2c4674u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4678: 0x0  nop
    ctx->pc = 0x2c4678u;
    // NOP
label_2c467c:
    // 0x2c467c: 0x0  nop
    ctx->pc = 0x2c467cu;
    // NOP
    // 0x2c4680: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x2c4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2c4684: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4684u;
    {
        const bool branch_taken_0x2c4684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4684) {
            ctx->pc = 0x2C4690u;
            goto label_2c4690;
        }
    }
    ctx->pc = 0x2C468Cu;
    // 0x2c468c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c4690:
    // 0x2c4690: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x2c4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2c4694: 0xc7809cf8  lwc1        $f0, -0x6308($gp)
    ctx->pc = 0x2c4694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4698: 0xc0b4a20  jal         func_2D2880
    ctx->pc = 0x2C4698u;
    SET_GPR_U32(ctx, 31, 0x2C46A0u);
    ctx->pc = 0x2C469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4698u;
            // 0x2c469c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2880u;
    if (runtime->hasFunction(0x2D2880u)) {
        auto targetFn = runtime->lookupFunction(0x2D2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46A0u; }
        if (ctx->pc != 0x2C46A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapTitle__Fi_0x2d2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46A0u; }
        if (ctx->pc != 0x2C46A0u) { return; }
    }
    ctx->pc = 0x2C46A0u;
label_2c46a0:
    // 0x2c46a0: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x2c46a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x2c46a4: 0x8664000e  lh          $a0, 0xE($s3)
    ctx->pc = 0x2c46a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x2c46a8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2c46a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c46ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C46ACu;
    {
        const bool branch_taken_0x2c46ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C46B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46ACu;
            // 0x2c46b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46ac) {
            ctx->pc = 0x2C46B8u;
            goto label_2c46b8;
        }
    }
    ctx->pc = 0x2C46B4u;
    // 0x2c46b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c46b8:
    // 0x2c46b8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2c46b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c46bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C46BCu;
    {
        const bool branch_taken_0x2c46bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c46bc) {
            ctx->pc = 0x2C46C8u;
            goto label_2c46c8;
        }
    }
    ctx->pc = 0x2C46C4u;
    // 0x2c46c4: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x2c46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2c46c8:
    // 0x2c46c8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2c46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c46cc: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C46CCu;
    {
        const bool branch_taken_0x2c46cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c46cc) {
            ctx->pc = 0x2C46D8u;
            goto label_2c46d8;
        }
    }
    ctx->pc = 0x2C46D4u;
    // 0x2c46d4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2c46d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c46d8:
    // 0x2c46d8: 0x24620c7f  addiu       $v0, $v1, 0xC7F
    ctx->pc = 0x2c46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3199));
    // 0x2c46dc: 0xc7809cfc  lwc1        $f0, -0x6304($gp)
    ctx->pc = 0x2c46dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c46e0: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x2c46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x2c46e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c46e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46e8: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x2c46e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2c46ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c46ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c46f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c46f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c46f4: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2C46F4u;
    SET_GPR_U32(ctx, 31, 0x2C46FCu);
    ctx->pc = 0x2C46F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46F4u;
            // 0x2c46f8: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46FCu; }
        if (ctx->pc != 0x2C46FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46FCu; }
        if (ctx->pc != 0x2C46FCu) { return; }
    }
    ctx->pc = 0x2C46FCu;
label_2c46fc:
    // 0x2c46fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c46fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4700: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x2c4700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x2c4704: 0xc0876ec  jal         func_21DBB0
    ctx->pc = 0x2C4704u;
    SET_GPR_U32(ctx, 31, 0x2C470Cu);
    ctx->pc = 0x2C4708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4704u;
            // 0x2c4708: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C470Cu; }
        if (ctx->pc != 0x2C470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C470Cu; }
        if (ctx->pc != 0x2C470Cu) { return; }
    }
    ctx->pc = 0x2C470Cu;
label_2c470c:
    // 0x2c470c: 0xc7809d00  lwc1        $f0, -0x6300($gp)
    ctx->pc = 0x2c470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4710: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2c4710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c4714: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c4714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c4718: 0x27a60194  addiu       $a2, $sp, 0x194
    ctx->pc = 0x2c4718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2c471c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c471cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4720: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c4720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4724: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c4724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c4728: 0xc7809d04  lwc1        $f0, -0x62FC($gp)
    ctx->pc = 0x2c4728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c472c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2c472cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x2c4730: 0xc087798  jal         func_21DE60
    ctx->pc = 0x2C4730u;
    SET_GPR_U32(ctx, 31, 0x2C4738u);
    ctx->pc = 0x2C4734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4730u;
            // 0x2c4734: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DE60u;
    if (runtime->hasFunction(0x21DE60u)) {
        auto targetFn = runtime->lookupFunction(0x21DE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4738u; }
        if (ctx->pc != 0x2C4738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPiPii_0x21de60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4738u; }
        if (ctx->pc != 0x2C4738u) { return; }
    }
    ctx->pc = 0x2C4738u;
label_2c4738:
    // 0x2c4738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c473c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C473Cu;
    SET_GPR_U32(ctx, 31, 0x2C4744u);
    ctx->pc = 0x2C4740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C473Cu;
            // 0x2c4740: 0x24050c26  addiu       $a1, $zero, 0xC26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4744u; }
        if (ctx->pc != 0x2C4744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4744u; }
        if (ctx->pc != 0x2C4744u) { return; }
    }
    ctx->pc = 0x2C4744u;
label_2c4744:
    // 0x2c4744: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C4744u;
    {
        const bool branch_taken_0x2c4744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4744) {
            ctx->pc = 0x2C4788u;
            goto label_2c4788;
        }
    }
    ctx->pc = 0x2C474Cu;
label_2c474c:
    // 0x2c474c: 0x0  nop
    ctx->pc = 0x2c474cu;
    // NOP
    // 0x2c4750: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x2c4750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2c4754: 0xc7809d08  lwc1        $f0, -0x62F8($gp)
    ctx->pc = 0x2c4754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4758: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c4758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c475c: 0x27a6019c  addiu       $a2, $sp, 0x19C
    ctx->pc = 0x2c475cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x2c4760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4764: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c4764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4768: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c4768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c476c: 0xc7809d0c  lwc1        $f0, -0x62F4($gp)
    ctx->pc = 0x2c476cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4770: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x2c4770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x2c4774: 0xc087798  jal         func_21DE60
    ctx->pc = 0x2C4774u;
    SET_GPR_U32(ctx, 31, 0x2C477Cu);
    ctx->pc = 0x2C4778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4774u;
            // 0x2c4778: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DE60u;
    if (runtime->hasFunction(0x21DE60u)) {
        auto targetFn = runtime->lookupFunction(0x21DE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C477Cu; }
        if (ctx->pc != 0x2C477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPiPii_0x21de60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C477Cu; }
        if (ctx->pc != 0x2C477Cu) { return; }
    }
    ctx->pc = 0x2C477Cu;
label_2c477c:
    // 0x2c477c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4780: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2C4780u;
    SET_GPR_U32(ctx, 31, 0x2C4788u);
    ctx->pc = 0x2C4784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4780u;
            // 0x2c4784: 0x24050c27  addiu       $a1, $zero, 0xC27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3111));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4788u; }
        if (ctx->pc != 0x2C4788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4788u; }
        if (ctx->pc != 0x2C4788u) { return; }
    }
    ctx->pc = 0x2C4788u;
label_2c4788:
    // 0x2c4788: 0xc087898  jal         func_21E260
    ctx->pc = 0x2C4788u;
    SET_GPR_U32(ctx, 31, 0x2C4790u);
    ctx->pc = 0x2C478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4788u;
            // 0x2c478c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4790u; }
        if (ctx->pc != 0x2C4790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4790u; }
        if (ctx->pc != 0x2C4790u) { return; }
    }
    ctx->pc = 0x2C4790u;
label_2c4790:
    // 0x2c4790: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c4790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c4794: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2c4794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c4798: 0x2a02000d  slti        $v0, $s0, 0xD
    ctx->pc = 0x2c4798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2c479c: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2C479Cu;
    {
        const bool branch_taken_0x2c479c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C47A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C479Cu;
            // 0x2c47a0: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c479c) {
            ctx->pc = 0x2C461Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c461c;
        }
    }
    ctx->pc = 0x2C47A4u;
label_2c47a4:
    // 0x2c47a4: 0x0  nop
    ctx->pc = 0x2c47a4u;
    // NOP
    // 0x2c47a8: 0x8e820188  lw          $v0, 0x188($s4)
    ctx->pc = 0x2c47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x2c47ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C47ACu;
    {
        const bool branch_taken_0x2c47ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c47ac) {
            ctx->pc = 0x2C47F4u;
            goto label_2c47f4;
        }
    }
    ctx->pc = 0x2C47B4u;
    // 0x2c47b4: 0xdf838520  ld          $v1, -0x7AE0($gp)
    ctx->pc = 0x2c47b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935840)));
    // 0x2c47b8: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x2c47b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2c47bc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2c47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c47c0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2c47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2c47c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c47c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c47c8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2c47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2c47cc: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2c47ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2c47d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c47d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c47d4: 0xc6820118  lwc1        $f2, 0x118($s4)
    ctx->pc = 0x2c47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c47d8: 0x9285011c  lbu         $a1, 0x11C($s4)
    ctx->pc = 0x2c47d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2c47dc: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x2c47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c47e0: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x2c47e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x2c47e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c47e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c47e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c47e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c47ec: 0xc094514  jal         func_251450
    ctx->pc = 0x2C47ECu;
    SET_GPR_U32(ctx, 31, 0x2C47F4u);
    ctx->pc = 0x2C47F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C47ECu;
            // 0x2c47f0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C47F4u; }
        if (ctx->pc != 0x2C47F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C47F4u; }
        if (ctx->pc != 0x2C47F4u) { return; }
    }
    ctx->pc = 0x2C47F4u;
label_2c47f4:
    // 0x2c47f4: 0xc08acc8  jal         func_22B320
    ctx->pc = 0x2C47F4u;
    SET_GPR_U32(ctx, 31, 0x2C47FCu);
    ctx->pc = 0x2C47F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C47F4u;
            // 0x2c47f8: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C47FCu; }
        if (ctx->pc != 0x2C47FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C47FCu; }
        if (ctx->pc != 0x2C47FCu) { return; }
    }
    ctx->pc = 0x2C47FCu;
label_2c47fc:
    // 0x2c47fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c47fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c4800: 0x8e820178  lw          $v0, 0x178($s4)
    ctx->pc = 0x2c4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
    // 0x2c4804: 0x8c30ca50  lw          $s0, -0x35B0($at)
    ctx->pc = 0x2c4804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x2c4808: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c4808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c480c: 0x8c31ca54  lw          $s1, -0x35AC($at)
    ctx->pc = 0x2c480cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x2c4810: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2c4810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2c4814: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C4814u;
    {
        const bool branch_taken_0x2c4814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4814u;
            // 0x2c4818: 0x8c32ca58  lw          $s2, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4814) {
            ctx->pc = 0x2C4880u;
            goto label_2c4880;
        }
    }
    ctx->pc = 0x2C481Cu;
    // 0x2c481c: 0xc087898  jal         func_21E260
    ctx->pc = 0x2C481Cu;
    SET_GPR_U32(ctx, 31, 0x2C4824u);
    ctx->pc = 0x2C4820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C481Cu;
            // 0x2c4820: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4824u; }
        if (ctx->pc != 0x2C4824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4824u; }
        if (ctx->pc != 0x2C4824u) { return; }
    }
    ctx->pc = 0x2C4824u;
label_2c4824:
    // 0x2c4824: 0x8e840178  lw          $a0, 0x178($s4)
    ctx->pc = 0x2c4824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
    // 0x2c4828: 0x27b30124  addiu       $s3, $sp, 0x124
    ctx->pc = 0x2c4828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x2c482c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c482cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c4830: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2c4830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c4834: 0x24a5fc48  addiu       $a1, $a1, -0x3B8
    ctx->pc = 0x2c4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966344));
    // 0x2c4838: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C4838u;
    SET_GPR_U32(ctx, 31, 0x2C4840u);
    ctx->pc = 0x2C483Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4838u;
            // 0x2c483c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4840u; }
        if (ctx->pc != 0x2C4840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4840u; }
        if (ctx->pc != 0x2C4840u) { return; }
    }
    ctx->pc = 0x2C4840u;
label_2c4840:
    // 0x2c4840: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2c4840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c4844: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2c4844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c4848: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2c4848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c484c: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2C484Cu;
    SET_GPR_U32(ctx, 31, 0x2C4854u);
    ctx->pc = 0x2C4850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C484Cu;
            // 0x2c4850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4854u; }
        if (ctx->pc != 0x2C4854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4854u; }
        if (ctx->pc != 0x2C4854u) { return; }
    }
    ctx->pc = 0x2C4854u;
label_2c4854:
    // 0x2c4854: 0x8e840178  lw          $a0, 0x178($s4)
    ctx->pc = 0x2c4854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 376)));
    // 0x2c4858: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c4858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c485c: 0x24a5fc50  addiu       $a1, $a1, -0x3B0
    ctx->pc = 0x2c485cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966352));
    // 0x2c4860: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2c4860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c4864: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C4864u;
    SET_GPR_U32(ctx, 31, 0x2C486Cu);
    ctx->pc = 0x2C4868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4864u;
            // 0x2c4868: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C486Cu; }
        if (ctx->pc != 0x2C486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C486Cu; }
        if (ctx->pc != 0x2C486Cu) { return; }
    }
    ctx->pc = 0x2C486Cu;
label_2c486c:
    // 0x2c486c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2c486cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c4870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4874: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2c4874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c4878: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2C4878u;
    SET_GPR_U32(ctx, 31, 0x2C4880u);
    ctx->pc = 0x2C487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4878u;
            // 0x2c487c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4880u; }
        if (ctx->pc != 0x2C4880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4880u; }
        if (ctx->pc != 0x2C4880u) { return; }
    }
    ctx->pc = 0x2C4880u;
label_2c4880:
    // 0x2c4880: 0x8e84017c  lw          $a0, 0x17C($s4)
    ctx->pc = 0x2c4880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x2c4884: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C4884u;
    {
        const bool branch_taken_0x2c4884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4884u;
            // 0x2c4888: 0x27b20124  addiu       $s2, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4884) {
            ctx->pc = 0x2C48B4u;
            goto label_2c48b4;
        }
    }
    ctx->pc = 0x2C488Cu;
    // 0x2c488c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c488cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c4890: 0x24a5fc60  addiu       $a1, $a1, -0x3A0
    ctx->pc = 0x2c4890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966368));
    // 0x2c4894: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2c4894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c4898: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C4898u;
    SET_GPR_U32(ctx, 31, 0x2C48A0u);
    ctx->pc = 0x2C489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4898u;
            // 0x2c489c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48A0u; }
        if (ctx->pc != 0x2C48A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48A0u; }
        if (ctx->pc != 0x2C48A0u) { return; }
    }
    ctx->pc = 0x2C48A0u;
label_2c48a0:
    // 0x2c48a0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2c48a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c48a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c48a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48a8: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2c48a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c48ac: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2C48ACu;
    SET_GPR_U32(ctx, 31, 0x2C48B4u);
    ctx->pc = 0x2C48B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48ACu;
            // 0x2c48b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48B4u; }
        if (ctx->pc != 0x2C48B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48B4u; }
        if (ctx->pc != 0x2C48B4u) { return; }
    }
    ctx->pc = 0x2C48B4u;
label_2c48b4:
    // 0x2c48b4: 0x8e840180  lw          $a0, 0x180($s4)
    ctx->pc = 0x2c48b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 384)));
    // 0x2c48b8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C48B8u;
    {
        const bool branch_taken_0x2c48b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C48BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48B8u;
            // 0x2c48bc: 0x27b00124  addiu       $s0, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48b8) {
            ctx->pc = 0x2C48E8u;
            goto label_2c48e8;
        }
    }
    ctx->pc = 0x2C48C0u;
    // 0x2c48c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c48c4: 0x24a5fc60  addiu       $a1, $a1, -0x3A0
    ctx->pc = 0x2c48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966368));
    // 0x2c48c8: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2c48c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c48cc: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C48CCu;
    SET_GPR_U32(ctx, 31, 0x2C48D4u);
    ctx->pc = 0x2C48D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48CCu;
            // 0x2c48d0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48D4u; }
        if (ctx->pc != 0x2C48D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48D4u; }
        if (ctx->pc != 0x2C48D4u) { return; }
    }
    ctx->pc = 0x2C48D4u;
label_2c48d4:
    // 0x2c48d4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2c48d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c48d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c48d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48dc: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2c48dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c48e0: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2C48E0u;
    SET_GPR_U32(ctx, 31, 0x2C48E8u);
    ctx->pc = 0x2C48E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48E0u;
            // 0x2c48e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48E8u; }
        if (ctx->pc != 0x2C48E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C48E8u; }
        if (ctx->pc != 0x2C48E8u) { return; }
    }
    ctx->pc = 0x2C48E8u;
label_2c48e8:
    // 0x2c48e8: 0xdf878528  ld          $a3, -0x7AD8($gp)
    ctx->pc = 0x2c48e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x2c48ec: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2c48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2c48f0: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2c48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2c48f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c48f8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2c48f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c48fc: 0x26840190  addiu       $a0, $s4, 0x190
    ctx->pc = 0x2c48fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    // 0x2c4900: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c4900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c4904: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x2c4904u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x2c4908: 0x9288011c  lbu         $t0, 0x11C($s4)
    ctx->pc = 0x2c4908u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2c490c: 0x8e870118  lw          $a3, 0x118($s4)
    ctx->pc = 0x2c490cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x2c4910: 0xc0b0b74  jal         func_2C2DD0
    ctx->pc = 0x2C4910u;
    SET_GPR_U32(ctx, 31, 0x2C4918u);
    ctx->pc = 0x2C4914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4910u;
            // 0x2c4914: 0x2685019c  addiu       $a1, $s4, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2DD0u;
    if (runtime->hasFunction(0x2C2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2C2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4918u; }
        if (ctx->pc != 0x2C4918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LocalFunc_AdjustScrlBar__FPP18MENUFORMPARTS_TYPEPiPiiffi_0x2c2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4918u; }
        if (ctx->pc != 0x2C4918u) { return; }
    }
    ctx->pc = 0x2C4918u;
label_2c4918:
    // 0x2c4918: 0x9282011c  lbu         $v0, 0x11C($s4)
    ctx->pc = 0x2c4918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2c491c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C491Cu;
    {
        const bool branch_taken_0x2c491c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c491c) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C4924u;
    // 0x2c4924: 0xa280011c  sb          $zero, 0x11C($s4)
    ctx->pc = 0x2c4924u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 284), (uint8_t)GPR_U32(ctx, 0));
label_2c4928:
    // 0x2c4928: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c492c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4930: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c4930u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4934: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c4934u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4938: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c4938u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c493c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c493cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4940: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c4940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c494c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c494cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4954: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4954u;
            // 0x2c4958: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C495Cu;
}
