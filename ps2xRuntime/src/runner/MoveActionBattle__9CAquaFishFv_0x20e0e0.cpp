#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveActionBattle__9CAquaFishFv
// Address: 0x20e0e0 - 0x20e3f8
void MoveActionBattle__9CAquaFishFv_0x20e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveActionBattle__9CAquaFishFv_0x20e0e0");
#endif

    switch (ctx->pc) {
        case 0x20e0e0u: goto label_20e0e0;
        case 0x20e0e4u: goto label_20e0e4;
        case 0x20e0e8u: goto label_20e0e8;
        case 0x20e0ecu: goto label_20e0ec;
        case 0x20e0f0u: goto label_20e0f0;
        case 0x20e0f4u: goto label_20e0f4;
        case 0x20e0f8u: goto label_20e0f8;
        case 0x20e0fcu: goto label_20e0fc;
        case 0x20e100u: goto label_20e100;
        case 0x20e104u: goto label_20e104;
        case 0x20e108u: goto label_20e108;
        case 0x20e10cu: goto label_20e10c;
        case 0x20e110u: goto label_20e110;
        case 0x20e114u: goto label_20e114;
        case 0x20e118u: goto label_20e118;
        case 0x20e11cu: goto label_20e11c;
        case 0x20e120u: goto label_20e120;
        case 0x20e124u: goto label_20e124;
        case 0x20e128u: goto label_20e128;
        case 0x20e12cu: goto label_20e12c;
        case 0x20e130u: goto label_20e130;
        case 0x20e134u: goto label_20e134;
        case 0x20e138u: goto label_20e138;
        case 0x20e13cu: goto label_20e13c;
        case 0x20e140u: goto label_20e140;
        case 0x20e144u: goto label_20e144;
        case 0x20e148u: goto label_20e148;
        case 0x20e14cu: goto label_20e14c;
        case 0x20e150u: goto label_20e150;
        case 0x20e154u: goto label_20e154;
        case 0x20e158u: goto label_20e158;
        case 0x20e15cu: goto label_20e15c;
        case 0x20e160u: goto label_20e160;
        case 0x20e164u: goto label_20e164;
        case 0x20e168u: goto label_20e168;
        case 0x20e16cu: goto label_20e16c;
        case 0x20e170u: goto label_20e170;
        case 0x20e174u: goto label_20e174;
        case 0x20e178u: goto label_20e178;
        case 0x20e17cu: goto label_20e17c;
        case 0x20e180u: goto label_20e180;
        case 0x20e184u: goto label_20e184;
        case 0x20e188u: goto label_20e188;
        case 0x20e18cu: goto label_20e18c;
        case 0x20e190u: goto label_20e190;
        case 0x20e194u: goto label_20e194;
        case 0x20e198u: goto label_20e198;
        case 0x20e19cu: goto label_20e19c;
        case 0x20e1a0u: goto label_20e1a0;
        case 0x20e1a4u: goto label_20e1a4;
        case 0x20e1a8u: goto label_20e1a8;
        case 0x20e1acu: goto label_20e1ac;
        case 0x20e1b0u: goto label_20e1b0;
        case 0x20e1b4u: goto label_20e1b4;
        case 0x20e1b8u: goto label_20e1b8;
        case 0x20e1bcu: goto label_20e1bc;
        case 0x20e1c0u: goto label_20e1c0;
        case 0x20e1c4u: goto label_20e1c4;
        case 0x20e1c8u: goto label_20e1c8;
        case 0x20e1ccu: goto label_20e1cc;
        case 0x20e1d0u: goto label_20e1d0;
        case 0x20e1d4u: goto label_20e1d4;
        case 0x20e1d8u: goto label_20e1d8;
        case 0x20e1dcu: goto label_20e1dc;
        case 0x20e1e0u: goto label_20e1e0;
        case 0x20e1e4u: goto label_20e1e4;
        case 0x20e1e8u: goto label_20e1e8;
        case 0x20e1ecu: goto label_20e1ec;
        case 0x20e1f0u: goto label_20e1f0;
        case 0x20e1f4u: goto label_20e1f4;
        case 0x20e1f8u: goto label_20e1f8;
        case 0x20e1fcu: goto label_20e1fc;
        case 0x20e200u: goto label_20e200;
        case 0x20e204u: goto label_20e204;
        case 0x20e208u: goto label_20e208;
        case 0x20e20cu: goto label_20e20c;
        case 0x20e210u: goto label_20e210;
        case 0x20e214u: goto label_20e214;
        case 0x20e218u: goto label_20e218;
        case 0x20e21cu: goto label_20e21c;
        case 0x20e220u: goto label_20e220;
        case 0x20e224u: goto label_20e224;
        case 0x20e228u: goto label_20e228;
        case 0x20e22cu: goto label_20e22c;
        case 0x20e230u: goto label_20e230;
        case 0x20e234u: goto label_20e234;
        case 0x20e238u: goto label_20e238;
        case 0x20e23cu: goto label_20e23c;
        case 0x20e240u: goto label_20e240;
        case 0x20e244u: goto label_20e244;
        case 0x20e248u: goto label_20e248;
        case 0x20e24cu: goto label_20e24c;
        case 0x20e250u: goto label_20e250;
        case 0x20e254u: goto label_20e254;
        case 0x20e258u: goto label_20e258;
        case 0x20e25cu: goto label_20e25c;
        case 0x20e260u: goto label_20e260;
        case 0x20e264u: goto label_20e264;
        case 0x20e268u: goto label_20e268;
        case 0x20e26cu: goto label_20e26c;
        case 0x20e270u: goto label_20e270;
        case 0x20e274u: goto label_20e274;
        case 0x20e278u: goto label_20e278;
        case 0x20e27cu: goto label_20e27c;
        case 0x20e280u: goto label_20e280;
        case 0x20e284u: goto label_20e284;
        case 0x20e288u: goto label_20e288;
        case 0x20e28cu: goto label_20e28c;
        case 0x20e290u: goto label_20e290;
        case 0x20e294u: goto label_20e294;
        case 0x20e298u: goto label_20e298;
        case 0x20e29cu: goto label_20e29c;
        case 0x20e2a0u: goto label_20e2a0;
        case 0x20e2a4u: goto label_20e2a4;
        case 0x20e2a8u: goto label_20e2a8;
        case 0x20e2acu: goto label_20e2ac;
        case 0x20e2b0u: goto label_20e2b0;
        case 0x20e2b4u: goto label_20e2b4;
        case 0x20e2b8u: goto label_20e2b8;
        case 0x20e2bcu: goto label_20e2bc;
        case 0x20e2c0u: goto label_20e2c0;
        case 0x20e2c4u: goto label_20e2c4;
        case 0x20e2c8u: goto label_20e2c8;
        case 0x20e2ccu: goto label_20e2cc;
        case 0x20e2d0u: goto label_20e2d0;
        case 0x20e2d4u: goto label_20e2d4;
        case 0x20e2d8u: goto label_20e2d8;
        case 0x20e2dcu: goto label_20e2dc;
        case 0x20e2e0u: goto label_20e2e0;
        case 0x20e2e4u: goto label_20e2e4;
        case 0x20e2e8u: goto label_20e2e8;
        case 0x20e2ecu: goto label_20e2ec;
        case 0x20e2f0u: goto label_20e2f0;
        case 0x20e2f4u: goto label_20e2f4;
        case 0x20e2f8u: goto label_20e2f8;
        case 0x20e2fcu: goto label_20e2fc;
        case 0x20e300u: goto label_20e300;
        case 0x20e304u: goto label_20e304;
        case 0x20e308u: goto label_20e308;
        case 0x20e30cu: goto label_20e30c;
        case 0x20e310u: goto label_20e310;
        case 0x20e314u: goto label_20e314;
        case 0x20e318u: goto label_20e318;
        case 0x20e31cu: goto label_20e31c;
        case 0x20e320u: goto label_20e320;
        case 0x20e324u: goto label_20e324;
        case 0x20e328u: goto label_20e328;
        case 0x20e32cu: goto label_20e32c;
        case 0x20e330u: goto label_20e330;
        case 0x20e334u: goto label_20e334;
        case 0x20e338u: goto label_20e338;
        case 0x20e33cu: goto label_20e33c;
        case 0x20e340u: goto label_20e340;
        case 0x20e344u: goto label_20e344;
        case 0x20e348u: goto label_20e348;
        case 0x20e34cu: goto label_20e34c;
        case 0x20e350u: goto label_20e350;
        case 0x20e354u: goto label_20e354;
        case 0x20e358u: goto label_20e358;
        case 0x20e35cu: goto label_20e35c;
        case 0x20e360u: goto label_20e360;
        case 0x20e364u: goto label_20e364;
        case 0x20e368u: goto label_20e368;
        case 0x20e36cu: goto label_20e36c;
        case 0x20e370u: goto label_20e370;
        case 0x20e374u: goto label_20e374;
        case 0x20e378u: goto label_20e378;
        case 0x20e37cu: goto label_20e37c;
        case 0x20e380u: goto label_20e380;
        case 0x20e384u: goto label_20e384;
        case 0x20e388u: goto label_20e388;
        case 0x20e38cu: goto label_20e38c;
        case 0x20e390u: goto label_20e390;
        case 0x20e394u: goto label_20e394;
        case 0x20e398u: goto label_20e398;
        case 0x20e39cu: goto label_20e39c;
        case 0x20e3a0u: goto label_20e3a0;
        case 0x20e3a4u: goto label_20e3a4;
        case 0x20e3a8u: goto label_20e3a8;
        case 0x20e3acu: goto label_20e3ac;
        case 0x20e3b0u: goto label_20e3b0;
        case 0x20e3b4u: goto label_20e3b4;
        case 0x20e3b8u: goto label_20e3b8;
        case 0x20e3bcu: goto label_20e3bc;
        case 0x20e3c0u: goto label_20e3c0;
        case 0x20e3c4u: goto label_20e3c4;
        case 0x20e3c8u: goto label_20e3c8;
        case 0x20e3ccu: goto label_20e3cc;
        case 0x20e3d0u: goto label_20e3d0;
        case 0x20e3d4u: goto label_20e3d4;
        case 0x20e3d8u: goto label_20e3d8;
        case 0x20e3dcu: goto label_20e3dc;
        case 0x20e3e0u: goto label_20e3e0;
        case 0x20e3e4u: goto label_20e3e4;
        case 0x20e3e8u: goto label_20e3e8;
        case 0x20e3ecu: goto label_20e3ec;
        case 0x20e3f0u: goto label_20e3f0;
        case 0x20e3f4u: goto label_20e3f4;
        default: break;
    }

    ctx->pc = 0x20e0e0u;

label_20e0e0:
    // 0x20e0e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20e0e4:
    // 0x20e0e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20e0e8:
    // 0x20e0e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20e0ec:
    // 0x20e0ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20e0f0:
    // 0x20e0f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20e0f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20e0f4:
    // 0x20e0f4: 0x8c9006cc  lw          $s0, 0x6CC($a0)
    ctx->pc = 0x20e0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_20e0f8:
    // 0x20e0f8: 0x120000b4  beqz        $s0, . + 4 + (0xB4 << 2)
label_20e0fc:
    if (ctx->pc == 0x20E0FCu) {
        ctx->pc = 0x20E0FCu;
            // 0x20e0fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E100u;
        goto label_20e100;
    }
    ctx->pc = 0x20E0F8u;
    {
        const bool branch_taken_0x20e0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E0F8u;
            // 0x20e0fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0f8) {
            ctx->pc = 0x20E3CCu;
            goto label_20e3cc;
        }
    }
    ctx->pc = 0x20E100u;
label_20e100:
    // 0x20e100: 0x862306b0  lh          $v1, 0x6B0($s1)
    ctx->pc = 0x20e100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1712)));
label_20e104:
    // 0x20e104: 0x146000b1  bnez        $v1, . + 4 + (0xB1 << 2)
label_20e108:
    if (ctx->pc == 0x20E108u) {
        ctx->pc = 0x20E10Cu;
        goto label_20e10c;
    }
    ctx->pc = 0x20E104u;
    {
        const bool branch_taken_0x20e104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e104) {
            ctx->pc = 0x20E3CCu;
            goto label_20e3cc;
        }
    }
    ctx->pc = 0x20E10Cu;
label_20e10c:
    // 0x20e10c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20e10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20e110:
    // 0x20e110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e114:
    // 0x20e114: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20e114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20e118:
    // 0x20e118: 0x320f809  jalr        $t9
label_20e11c:
    if (ctx->pc == 0x20E11Cu) {
        ctx->pc = 0x20E11Cu;
            // 0x20e11c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20E120u;
        goto label_20e120;
    }
    ctx->pc = 0x20E118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E120u);
        ctx->pc = 0x20E11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E118u;
            // 0x20e11c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E120u; }
            if (ctx->pc != 0x20E120u) { return; }
        }
        }
    }
    ctx->pc = 0x20E120u;
label_20e120:
    // 0x20e120: 0x862306c0  lh          $v1, 0x6C0($s1)
    ctx->pc = 0x20e120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1728)));
label_20e124:
    // 0x20e124: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_20e128:
    if (ctx->pc == 0x20E128u) {
        ctx->pc = 0x20E128u;
            // 0x20e128: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20E12Cu;
        goto label_20e12c;
    }
    ctx->pc = 0x20E124u;
    {
        const bool branch_taken_0x20e124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E124u;
            // 0x20e128: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e124) {
            ctx->pc = 0x20E168u;
            goto label_20e168;
        }
    }
    ctx->pc = 0x20E12Cu;
label_20e12c:
    // 0x20e12c: 0x3c023e75  lui         $v0, 0x3E75
    ctx->pc = 0x20e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15989 << 16));
label_20e130:
    // 0x20e130: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20e130u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20e134:
    // 0x20e134: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x20e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_20e138:
    // 0x20e138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e13c:
    // 0x20e13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e140:
    // 0x20e140: 0xc083658  jal         func_20D960
label_20e144:
    if (ctx->pc == 0x20E144u) {
        ctx->pc = 0x20E144u;
            // 0x20e144: 0x7e230660  sq          $v1, 0x660($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 3));
        ctx->pc = 0x20E148u;
        goto label_20e148;
    }
    ctx->pc = 0x20E140u;
    SET_GPR_U32(ctx, 31, 0x20E148u);
    ctx->pc = 0x20E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E140u;
            // 0x20e144: 0x7e230660  sq          $v1, 0x660($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D960u;
    if (runtime->hasFunction(0x20D960u)) {
        auto targetFn = runtime->lookupFunction(0x20D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E148u; }
        if (ctx->pc != 0x20E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMoveSpeed__9CAquaFishFf_0x20d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E148u; }
        if (ctx->pc != 0x20E148u) { return; }
    }
    ctx->pc = 0x20E148u;
label_20e148:
    // 0x20e148: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x20e148u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_20e14c:
    // 0x20e14c: 0xc0835dc  jal         func_20D770
label_20e150:
    if (ctx->pc == 0x20E150u) {
        ctx->pc = 0x20E150u;
            // 0x20e150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E154u;
        goto label_20e154;
    }
    ctx->pc = 0x20E14Cu;
    SET_GPR_U32(ctx, 31, 0x20E154u);
    ctx->pc = 0x20E150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E14Cu;
            // 0x20e150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D770u;
    if (runtime->hasFunction(0x20D770u)) {
        auto targetFn = runtime->lookupFunction(0x20D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E154u; }
        if (ctx->pc != 0x20E154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextVelo__9CAquaFishFf_0x20d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E154u; }
        if (ctx->pc != 0x20E154u) { return; }
    }
    ctx->pc = 0x20E154u;
label_20e154:
    // 0x20e154: 0xc083618  jal         func_20D860
label_20e158:
    if (ctx->pc == 0x20E158u) {
        ctx->pc = 0x20E158u;
            // 0x20e158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E15Cu;
        goto label_20e15c;
    }
    ctx->pc = 0x20E154u;
    SET_GPR_U32(ctx, 31, 0x20E15Cu);
    ctx->pc = 0x20E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E154u;
            // 0x20e158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D860u;
    if (runtime->hasFunction(0x20D860u)) {
        auto targetFn = runtime->lookupFunction(0x20D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E15Cu; }
        if (ctx->pc != 0x20E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextRot__9CAquaFishFv_0x20d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E15Cu; }
        if (ctx->pc != 0x20E15Cu) { return; }
    }
    ctx->pc = 0x20E15Cu;
label_20e15c:
    // 0x20e15c: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x20e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_20e160:
    // 0x20e160: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20e160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20e164:
    // 0x20e164: 0xae2306a8  sw          $v1, 0x6A8($s1)
    ctx->pc = 0x20e164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 3));
label_20e168:
    // 0x20e168: 0x862406c0  lh          $a0, 0x6C0($s1)
    ctx->pc = 0x20e168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1728)));
label_20e16c:
    // 0x20e16c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e170:
    // 0x20e170: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_20e174:
    if (ctx->pc == 0x20E174u) {
        ctx->pc = 0x20E178u;
        goto label_20e178;
    }
    ctx->pc = 0x20E170u;
    {
        const bool branch_taken_0x20e170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e170) {
            ctx->pc = 0x20E1B8u;
            goto label_20e1b8;
        }
    }
    ctx->pc = 0x20E178u;
label_20e178:
    // 0x20e178: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x20e178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
label_20e17c:
    // 0x20e17c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20e180:
    // 0x20e180: 0xa62206c0  sh          $v0, 0x6C0($s1)
    ctx->pc = 0x20e180u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1728), (uint16_t)GPR_U32(ctx, 2));
label_20e184:
    // 0x20e184: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20e184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20e188:
    // 0x20e188: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x20e188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e18c:
    // 0x20e18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e190:
    // 0x20e190: 0x24a59dc0  addiu       $a1, $a1, -0x6240
    ctx->pc = 0x20e190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942144));
label_20e194:
    // 0x20e194: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x20e194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_20e198:
    // 0x20e198: 0x320f809  jalr        $t9
label_20e19c:
    if (ctx->pc == 0x20E19Cu) {
        ctx->pc = 0x20E19Cu;
            // 0x20e19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E1A0u;
        goto label_20e1a0;
    }
    ctx->pc = 0x20E198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E1A0u);
        ctx->pc = 0x20E19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E198u;
            // 0x20e19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E1A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E1A0u; }
            if (ctx->pc != 0x20E1A0u) { return; }
        }
        }
    }
    ctx->pc = 0x20E1A0u;
label_20e1a0:
    // 0x20e1a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x20e1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e1a4:
    // 0x20e1a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20e1a8:
    // 0x20e1a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e1ac:
    // 0x20e1ac: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x20e1acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_20e1b0:
    // 0x20e1b0: 0x320f809  jalr        $t9
label_20e1b4:
    if (ctx->pc == 0x20E1B4u) {
        ctx->pc = 0x20E1B4u;
            // 0x20e1b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E1B8u;
        goto label_20e1b8;
    }
    ctx->pc = 0x20E1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E1B8u);
        ctx->pc = 0x20E1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E1B0u;
            // 0x20e1b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E1B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E1B8u; }
            if (ctx->pc != 0x20E1B8u) { return; }
        }
        }
    }
    ctx->pc = 0x20E1B8u;
label_20e1b8:
    // 0x20e1b8: 0x862406c0  lh          $a0, 0x6C0($s1)
    ctx->pc = 0x20e1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1728)));
label_20e1bc:
    // 0x20e1bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20e1c0:
    // 0x20e1c0: 0x14830082  bne         $a0, $v1, . + 4 + (0x82 << 2)
label_20e1c4:
    if (ctx->pc == 0x20E1C4u) {
        ctx->pc = 0x20E1C8u;
        goto label_20e1c8;
    }
    ctx->pc = 0x20E1C0u;
    {
        const bool branch_taken_0x20e1c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e1c0) {
            ctx->pc = 0x20E3CCu;
            goto label_20e3cc;
        }
    }
    ctx->pc = 0x20E1C8u;
label_20e1c8:
    // 0x20e1c8: 0xc6200700  lwc1        $f0, 0x700($s1)
    ctx->pc = 0x20e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e1cc:
    // 0x20e1cc: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x20e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_20e1d0:
    // 0x20e1d0: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x20e1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_20e1d4:
    // 0x20e1d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20e1d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20e1d8:
    // 0x20e1d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_20e1dc:
    // 0x20e1dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e1e0:
    // 0x20e1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20e1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e1e4:
    // 0x20e1e4: 0x0  nop
    ctx->pc = 0x20e1e4u;
    // NOP
label_20e1e8:
    // 0x20e1e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20e1e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_20e1ec:
    // 0x20e1ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e1ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e1f0:
    // 0x20e1f0: 0x0  nop
    ctx->pc = 0x20e1f0u;
    // NOP
label_20e1f4:
    // 0x20e1f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_20e1f8:
    if (ctx->pc == 0x20E1F8u) {
        ctx->pc = 0x20E1F8u;
            // 0x20e1f8: 0xe6200700  swc1        $f0, 0x700($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1792), bits); }
        ctx->pc = 0x20E1FCu;
        goto label_20e1fc;
    }
    ctx->pc = 0x20E1F4u;
    {
        const bool branch_taken_0x20e1f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E1F4u;
            // 0x20e1f8: 0xe6200700  swc1        $f0, 0x700($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1792), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1f4) {
            ctx->pc = 0x20E20Cu;
            goto label_20e20c;
        }
    }
    ctx->pc = 0x20E1FCu;
label_20e1fc:
    // 0x20e1fc: 0xe6210700  swc1        $f1, 0x700($s1)
    ctx->pc = 0x20e1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1792), bits); }
label_20e200:
    // 0x20e200: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x20e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20e204:
    // 0x20e204: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20e204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e208:
    // 0x20e208: 0x7e220660  sq          $v0, 0x660($s1)
    ctx->pc = 0x20e208u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1632), GPR_VEC(ctx, 2));
label_20e20c:
    // 0x20e20c: 0xc6220700  lwc1        $f2, 0x700($s1)
    ctx->pc = 0x20e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20e210:
    // 0x20e210: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_20e214:
    // 0x20e214: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e218:
    // 0x20e218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e21c:
    // 0x20e21c: 0x0  nop
    ctx->pc = 0x20e21cu;
    // NOP
label_20e220:
    // 0x20e220: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20e220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e224:
    // 0x20e224: 0x0  nop
    ctx->pc = 0x20e224u;
    // NOP
label_20e228:
    // 0x20e228: 0x45000045  bc1f        . + 4 + (0x45 << 2)
label_20e22c:
    if (ctx->pc == 0x20E22Cu) {
        ctx->pc = 0x20E22Cu;
            // 0x20e22c: 0x3c033dd6  lui         $v1, 0x3DD6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
        ctx->pc = 0x20E230u;
        goto label_20e230;
    }
    ctx->pc = 0x20E228u;
    {
        const bool branch_taken_0x20e228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E228u;
            // 0x20e22c: 0x3c033dd6  lui         $v1, 0x3DD6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e228) {
            ctx->pc = 0x20E340u;
            goto label_20e340;
        }
    }
    ctx->pc = 0x20E230u;
label_20e230:
    // 0x20e230: 0x3c02403b  lui         $v0, 0x403B
    ctx->pc = 0x20e230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16443 << 16));
label_20e234:
    // 0x20e234: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x20e234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
label_20e238:
    // 0x20e238: 0x3442a866  ori         $v0, $v0, 0xA866
    ctx->pc = 0x20e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43110);
label_20e23c:
    // 0x20e23c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20e23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e240:
    // 0x20e240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e244:
    // 0x20e244: 0x0  nop
    ctx->pc = 0x20e244u;
    // NOP
label_20e248:
    // 0x20e248: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x20e248u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_20e24c:
    // 0x20e24c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x20e24cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20e250:
    // 0x20e250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e254:
    // 0x20e254: 0x0  nop
    ctx->pc = 0x20e254u;
    // NOP
label_20e258:
    // 0x20e258: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20e258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e25c:
    // 0x20e25c: 0x0  nop
    ctx->pc = 0x20e25cu;
    // NOP
label_20e260:
    // 0x20e260: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_20e264:
    if (ctx->pc == 0x20E264u) {
        ctx->pc = 0x20E264u;
            // 0x20e264: 0xe6210700  swc1        $f1, 0x700($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1792), bits); }
        ctx->pc = 0x20E268u;
        goto label_20e268;
    }
    ctx->pc = 0x20E260u;
    {
        const bool branch_taken_0x20e260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E260u;
            // 0x20e264: 0xe6210700  swc1        $f1, 0x700($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1792), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e260) {
            ctx->pc = 0x20E26Cu;
            goto label_20e26c;
        }
    }
    ctx->pc = 0x20E268u;
label_20e268:
    // 0x20e268: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x20e268u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_20e26c:
    // 0x20e26c: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x20e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_20e270:
    // 0x20e270: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x20e270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_20e274:
    // 0x20e274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e278:
    // 0x20e278: 0x0  nop
    ctx->pc = 0x20e278u;
    // NOP
label_20e27c:
    // 0x20e27c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x20e27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e280:
    // 0x20e280: 0x0  nop
    ctx->pc = 0x20e280u;
    // NOP
label_20e284:
    // 0x20e284: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_20e288:
    if (ctx->pc == 0x20E288u) {
        ctx->pc = 0x20E28Cu;
        goto label_20e28c;
    }
    ctx->pc = 0x20E284u;
    {
        const bool branch_taken_0x20e284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e284) {
            ctx->pc = 0x20E2B4u;
            goto label_20e2b4;
        }
    }
    ctx->pc = 0x20E28Cu;
label_20e28c:
    // 0x20e28c: 0x862506a0  lh          $a1, 0x6A0($s1)
    ctx->pc = 0x20e28cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1696)));
label_20e290:
    // 0x20e290: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x20e290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_20e294:
    // 0x20e294: 0x2484c480  addiu       $a0, $a0, -0x3B80
    ctx->pc = 0x20e294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
label_20e298:
    // 0x20e298: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20e29c:
    // 0x20e29c: 0x24020fa0  addiu       $v0, $zero, 0xFA0
    ctx->pc = 0x20e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_20e2a0:
    // 0x20e2a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x20e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20e2a4:
    // 0x20e2a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20e2a8:
    // 0x20e2a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20e2ac:
    // 0x20e2ac: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x20e2acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
label_20e2b0:
    // 0x20e2b0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x20e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_20e2b4:
    // 0x20e2b4: 0xc6210700  lwc1        $f1, 0x700($s1)
    ctx->pc = 0x20e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e2b8:
    // 0x20e2b8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x20e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_20e2bc:
    // 0x20e2bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e2c0:
    // 0x20e2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e2c4:
    // 0x20e2c4: 0xc04c374  jal         func_130DD0
label_20e2c8:
    if (ctx->pc == 0x20E2C8u) {
        ctx->pc = 0x20E2C8u;
            // 0x20e2c8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x20E2CCu;
        goto label_20e2cc;
    }
    ctx->pc = 0x20E2C4u;
    SET_GPR_U32(ctx, 31, 0x20E2CCu);
    ctx->pc = 0x20E2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E2C4u;
            // 0x20e2c8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2CCu; }
        if (ctx->pc != 0x20E2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2CCu; }
        if (ctx->pc != 0x20E2CCu) { return; }
    }
    ctx->pc = 0x20E2CCu;
label_20e2cc:
    // 0x20e2cc: 0xc047a42  jal         func_11E908
label_20e2d0:
    if (ctx->pc == 0x20E2D0u) {
        ctx->pc = 0x20E2D0u;
            // 0x20e2d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20E2D4u;
        goto label_20e2d4;
    }
    ctx->pc = 0x20E2CCu;
    SET_GPR_U32(ctx, 31, 0x20E2D4u);
    ctx->pc = 0x20E2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E2CCu;
            // 0x20e2d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2D4u; }
        if (ctx->pc != 0x20E2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E2D4u; }
        if (ctx->pc != 0x20E2D4u) { return; }
    }
    ctx->pc = 0x20E2D4u;
label_20e2d4:
    // 0x20e2d4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x20e2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e2d8:
    // 0x20e2d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20e2dc:
    // 0x20e2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20e2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e2e0:
    // 0x20e2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e2e4:
    // 0x20e2e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20e2e8:
    // 0x20e2e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20e2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20e2ec:
    // 0x20e2ec: 0x320f809  jalr        $t9
label_20e2f0:
    if (ctx->pc == 0x20E2F0u) {
        ctx->pc = 0x20E2F0u;
            // 0x20e2f0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x20E2F4u;
        goto label_20e2f4;
    }
    ctx->pc = 0x20E2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E2F4u);
        ctx->pc = 0x20E2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E2ECu;
            // 0x20e2f0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E2F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E2F4u; }
            if (ctx->pc != 0x20E2F4u) { return; }
        }
        }
    }
    ctx->pc = 0x20E2F4u;
label_20e2f4:
    // 0x20e2f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20e2f8:
    // 0x20e2f8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20e2fc:
    // 0x20e2fc: 0xc041c3e  jal         func_1070F8
label_20e300:
    if (ctx->pc == 0x20E300u) {
        ctx->pc = 0x20E300u;
            // 0x20e300: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20E304u;
        goto label_20e304;
    }
    ctx->pc = 0x20E2FCu;
    SET_GPR_U32(ctx, 31, 0x20E304u);
    ctx->pc = 0x20E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E2FCu;
            // 0x20e300: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E304u; }
        if (ctx->pc != 0x20E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E304u; }
        if (ctx->pc != 0x20E304u) { return; }
    }
    ctx->pc = 0x20E304u;
label_20e304:
    // 0x20e304: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20e308:
    // 0x20e308: 0xc041be0  jal         func_106F80
label_20e30c:
    if (ctx->pc == 0x20E30Cu) {
        ctx->pc = 0x20E30Cu;
            // 0x20e30c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E310u;
        goto label_20e310;
    }
    ctx->pc = 0x20E308u;
    SET_GPR_U32(ctx, 31, 0x20E310u);
    ctx->pc = 0x20E30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E308u;
            // 0x20e30c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E310u; }
        if (ctx->pc != 0x20E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E310u; }
        if (ctx->pc != 0x20E310u) { return; }
    }
    ctx->pc = 0x20E310u;
label_20e310:
    // 0x20e310: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20e310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20e314:
    // 0x20e314: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20e314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20e318:
    // 0x20e318: 0xc041e96  jal         func_107A58
label_20e31c:
    if (ctx->pc == 0x20E31Cu) {
        ctx->pc = 0x20E31Cu;
            // 0x20e31c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E320u;
        goto label_20e320;
    }
    ctx->pc = 0x20E318u;
    SET_GPR_U32(ctx, 31, 0x20E320u);
    ctx->pc = 0x20E31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E318u;
            // 0x20e31c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E320u; }
        if (ctx->pc != 0x20E320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E320u; }
        if (ctx->pc != 0x20E320u) { return; }
    }
    ctx->pc = 0x20E320u;
label_20e320:
    // 0x20e320: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20e324:
    // 0x20e324: 0x26240660  addiu       $a0, $s1, 0x660
    ctx->pc = 0x20e324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
label_20e328:
    // 0x20e328: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x20e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_20e32c:
    // 0x20e32c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20e32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20e330:
    // 0x20e330: 0xc041c38  jal         func_1070E0
label_20e334:
    if (ctx->pc == 0x20E334u) {
        ctx->pc = 0x20E334u;
            // 0x20e334: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x20E338u;
        goto label_20e338;
    }
    ctx->pc = 0x20E330u;
    SET_GPR_U32(ctx, 31, 0x20E338u);
    ctx->pc = 0x20E334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E330u;
            // 0x20e334: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E338u; }
        if (ctx->pc != 0x20E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E338u; }
        if (ctx->pc != 0x20E338u) { return; }
    }
    ctx->pc = 0x20E338u;
label_20e338:
    // 0x20e338: 0x10000024  b           . + 4 + (0x24 << 2)
label_20e33c:
    if (ctx->pc == 0x20E33Cu) {
        ctx->pc = 0x20E340u;
        goto label_20e340;
    }
    ctx->pc = 0x20E338u;
    {
        const bool branch_taken_0x20e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e338) {
            ctx->pc = 0x20E3CCu;
            goto label_20e3cc;
        }
    }
    ctx->pc = 0x20E340u;
label_20e340:
    // 0x20e340: 0x8e220924  lw          $v0, 0x924($s1)
    ctx->pc = 0x20e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2340)));
label_20e344:
    // 0x20e344: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x20e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_20e348:
    // 0x20e348: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_20e34c:
    if (ctx->pc == 0x20E34Cu) {
        ctx->pc = 0x20E34Cu;
            // 0x20e34c: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->pc = 0x20E350u;
        goto label_20e350;
    }
    ctx->pc = 0x20E348u;
    {
        const bool branch_taken_0x20e348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E348u;
            // 0x20e34c: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e348) {
            ctx->pc = 0x20E39Cu;
            goto label_20e39c;
        }
    }
    ctx->pc = 0x20E350u;
label_20e350:
    // 0x20e350: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x20e350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
label_20e354:
    // 0x20e354: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20e354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20e358:
    // 0x20e358: 0xa62006c0  sh          $zero, 0x6C0($s1)
    ctx->pc = 0x20e358u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1728), (uint16_t)GPR_U32(ctx, 0));
label_20e35c:
    // 0x20e35c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x20e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_20e360:
    // 0x20e360: 0x862606a0  lh          $a2, 0x6A0($s1)
    ctx->pc = 0x20e360u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1696)));
label_20e364:
    // 0x20e364: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e368:
    // 0x20e368: 0x24a5c480  addiu       $a1, $a1, -0x3B80
    ctx->pc = 0x20e368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
label_20e36c:
    // 0x20e36c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20e370:
    // 0x20e370: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20e370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20e374:
    // 0x20e374: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_20e378:
    // 0x20e378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e37c:
    // 0x20e37c: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x20e37cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
label_20e380:
    // 0x20e380: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x20e380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_20e384:
    // 0x20e384: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x20e384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e388:
    // 0x20e388: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x20e388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_20e38c:
    // 0x20e38c: 0x320f809  jalr        $t9
label_20e390:
    if (ctx->pc == 0x20E390u) {
        ctx->pc = 0x20E390u;
            // 0x20e390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E394u;
        goto label_20e394;
    }
    ctx->pc = 0x20E38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E394u);
        ctx->pc = 0x20E390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E38Cu;
            // 0x20e390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E394u; }
            if (ctx->pc != 0x20E394u) { return; }
        }
        }
    }
    ctx->pc = 0x20E394u;
label_20e394:
    // 0x20e394: 0x1000000d  b           . + 4 + (0xD << 2)
label_20e398:
    if (ctx->pc == 0x20E398u) {
        ctx->pc = 0x20E39Cu;
        goto label_20e39c;
    }
    ctx->pc = 0x20E394u;
    {
        const bool branch_taken_0x20e394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e394) {
            ctx->pc = 0x20E3CCu;
            goto label_20e3cc;
        }
    }
    ctx->pc = 0x20E39Cu;
label_20e39c:
    // 0x20e39c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x20e39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_20e3a0:
    // 0x20e3a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e3a4:
    // 0x20e3a4: 0xc083658  jal         func_20D960
label_20e3a8:
    if (ctx->pc == 0x20E3A8u) {
        ctx->pc = 0x20E3A8u;
            // 0x20e3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E3ACu;
        goto label_20e3ac;
    }
    ctx->pc = 0x20E3A4u;
    SET_GPR_U32(ctx, 31, 0x20E3ACu);
    ctx->pc = 0x20E3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3A4u;
            // 0x20e3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D960u;
    if (runtime->hasFunction(0x20D960u)) {
        auto targetFn = runtime->lookupFunction(0x20D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3ACu; }
        if (ctx->pc != 0x20E3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMoveSpeed__9CAquaFishFf_0x20d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3ACu; }
        if (ctx->pc != 0x20E3ACu) { return; }
    }
    ctx->pc = 0x20E3ACu;
label_20e3ac:
    // 0x20e3ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x20e3acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_20e3b0:
    // 0x20e3b0: 0xc0835dc  jal         func_20D770
label_20e3b4:
    if (ctx->pc == 0x20E3B4u) {
        ctx->pc = 0x20E3B4u;
            // 0x20e3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E3B8u;
        goto label_20e3b8;
    }
    ctx->pc = 0x20E3B0u;
    SET_GPR_U32(ctx, 31, 0x20E3B8u);
    ctx->pc = 0x20E3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3B0u;
            // 0x20e3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D770u;
    if (runtime->hasFunction(0x20D770u)) {
        auto targetFn = runtime->lookupFunction(0x20D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3B8u; }
        if (ctx->pc != 0x20E3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextVelo__9CAquaFishFf_0x20d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3B8u; }
        if (ctx->pc != 0x20E3B8u) { return; }
    }
    ctx->pc = 0x20E3B8u;
label_20e3b8:
    // 0x20e3b8: 0xc083618  jal         func_20D860
label_20e3bc:
    if (ctx->pc == 0x20E3BCu) {
        ctx->pc = 0x20E3BCu;
            // 0x20e3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E3C0u;
        goto label_20e3c0;
    }
    ctx->pc = 0x20E3B8u;
    SET_GPR_U32(ctx, 31, 0x20E3C0u);
    ctx->pc = 0x20E3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3B8u;
            // 0x20e3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D860u;
    if (runtime->hasFunction(0x20D860u)) {
        auto targetFn = runtime->lookupFunction(0x20D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3C0u; }
        if (ctx->pc != 0x20E3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextRot__9CAquaFishFv_0x20d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3C0u; }
        if (ctx->pc != 0x20E3C0u) { return; }
    }
    ctx->pc = 0x20E3C0u;
label_20e3c0:
    // 0x20e3c0: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x20e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_20e3c4:
    // 0x20e3c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20e3c8:
    // 0x20e3c8: 0xae2306a8  sw          $v1, 0x6A8($s1)
    ctx->pc = 0x20e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 3));
label_20e3cc:
    // 0x20e3cc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_20e3d0:
    if (ctx->pc == 0x20E3D0u) {
        ctx->pc = 0x20E3D0u;
            // 0x20e3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E3D4u;
        goto label_20e3d4;
    }
    ctx->pc = 0x20E3CCu;
    {
        const bool branch_taken_0x20e3cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3CCu;
            // 0x20e3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e3cc) {
            ctx->pc = 0x20E3E0u;
            goto label_20e3e0;
        }
    }
    ctx->pc = 0x20E3D4u;
label_20e3d4:
    // 0x20e3d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20e3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20e3d8:
    // 0x20e3d8: 0xc083900  jal         func_20E400
label_20e3dc:
    if (ctx->pc == 0x20E3DCu) {
        ctx->pc = 0x20E3DCu;
            // 0x20e3dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E3E0u;
        goto label_20e3e0;
    }
    ctx->pc = 0x20E3D8u;
    SET_GPR_U32(ctx, 31, 0x20E3E0u);
    ctx->pc = 0x20E3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3D8u;
            // 0x20e3dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E400u;
    if (runtime->hasFunction(0x20E400u)) {
        auto targetFn = runtime->lookupFunction(0x20E400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3E0u; }
        if (ctx->pc != 0x20E3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextThink__9CAquaFishFiP16NEXT_THINK_PARAM_0x20e400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E3E0u; }
        if (ctx->pc != 0x20E3E0u) { return; }
    }
    ctx->pc = 0x20E3E0u;
label_20e3e0:
    // 0x20e3e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20e3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20e3e4:
    // 0x20e3e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20e3e8:
    // 0x20e3e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20e3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e3ec:
    // 0x20e3ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20e3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20e3f0:
    // 0x20e3f0: 0x3e00008  jr          $ra
label_20e3f4:
    if (ctx->pc == 0x20E3F4u) {
        ctx->pc = 0x20E3F4u;
            // 0x20e3f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20E3F8u;
        goto label_fallthrough_0x20e3f0;
    }
    ctx->pc = 0x20E3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E3F0u;
            // 0x20e3f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20e3f0:
    ctx->pc = 0x20E3F8u;
}
