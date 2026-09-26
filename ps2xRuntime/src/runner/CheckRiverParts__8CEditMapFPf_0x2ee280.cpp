#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRiverParts__8CEditMapFPf
// Address: 0x2ee280 - 0x2ee5e8
void CheckRiverParts__8CEditMapFPf_0x2ee280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRiverParts__8CEditMapFPf_0x2ee280");
#endif

    switch (ctx->pc) {
        case 0x2ee280u: goto label_2ee280;
        case 0x2ee284u: goto label_2ee284;
        case 0x2ee288u: goto label_2ee288;
        case 0x2ee28cu: goto label_2ee28c;
        case 0x2ee290u: goto label_2ee290;
        case 0x2ee294u: goto label_2ee294;
        case 0x2ee298u: goto label_2ee298;
        case 0x2ee29cu: goto label_2ee29c;
        case 0x2ee2a0u: goto label_2ee2a0;
        case 0x2ee2a4u: goto label_2ee2a4;
        case 0x2ee2a8u: goto label_2ee2a8;
        case 0x2ee2acu: goto label_2ee2ac;
        case 0x2ee2b0u: goto label_2ee2b0;
        case 0x2ee2b4u: goto label_2ee2b4;
        case 0x2ee2b8u: goto label_2ee2b8;
        case 0x2ee2bcu: goto label_2ee2bc;
        case 0x2ee2c0u: goto label_2ee2c0;
        case 0x2ee2c4u: goto label_2ee2c4;
        case 0x2ee2c8u: goto label_2ee2c8;
        case 0x2ee2ccu: goto label_2ee2cc;
        case 0x2ee2d0u: goto label_2ee2d0;
        case 0x2ee2d4u: goto label_2ee2d4;
        case 0x2ee2d8u: goto label_2ee2d8;
        case 0x2ee2dcu: goto label_2ee2dc;
        case 0x2ee2e0u: goto label_2ee2e0;
        case 0x2ee2e4u: goto label_2ee2e4;
        case 0x2ee2e8u: goto label_2ee2e8;
        case 0x2ee2ecu: goto label_2ee2ec;
        case 0x2ee2f0u: goto label_2ee2f0;
        case 0x2ee2f4u: goto label_2ee2f4;
        case 0x2ee2f8u: goto label_2ee2f8;
        case 0x2ee2fcu: goto label_2ee2fc;
        case 0x2ee300u: goto label_2ee300;
        case 0x2ee304u: goto label_2ee304;
        case 0x2ee308u: goto label_2ee308;
        case 0x2ee30cu: goto label_2ee30c;
        case 0x2ee310u: goto label_2ee310;
        case 0x2ee314u: goto label_2ee314;
        case 0x2ee318u: goto label_2ee318;
        case 0x2ee31cu: goto label_2ee31c;
        case 0x2ee320u: goto label_2ee320;
        case 0x2ee324u: goto label_2ee324;
        case 0x2ee328u: goto label_2ee328;
        case 0x2ee32cu: goto label_2ee32c;
        case 0x2ee330u: goto label_2ee330;
        case 0x2ee334u: goto label_2ee334;
        case 0x2ee338u: goto label_2ee338;
        case 0x2ee33cu: goto label_2ee33c;
        case 0x2ee340u: goto label_2ee340;
        case 0x2ee344u: goto label_2ee344;
        case 0x2ee348u: goto label_2ee348;
        case 0x2ee34cu: goto label_2ee34c;
        case 0x2ee350u: goto label_2ee350;
        case 0x2ee354u: goto label_2ee354;
        case 0x2ee358u: goto label_2ee358;
        case 0x2ee35cu: goto label_2ee35c;
        case 0x2ee360u: goto label_2ee360;
        case 0x2ee364u: goto label_2ee364;
        case 0x2ee368u: goto label_2ee368;
        case 0x2ee36cu: goto label_2ee36c;
        case 0x2ee370u: goto label_2ee370;
        case 0x2ee374u: goto label_2ee374;
        case 0x2ee378u: goto label_2ee378;
        case 0x2ee37cu: goto label_2ee37c;
        case 0x2ee380u: goto label_2ee380;
        case 0x2ee384u: goto label_2ee384;
        case 0x2ee388u: goto label_2ee388;
        case 0x2ee38cu: goto label_2ee38c;
        case 0x2ee390u: goto label_2ee390;
        case 0x2ee394u: goto label_2ee394;
        case 0x2ee398u: goto label_2ee398;
        case 0x2ee39cu: goto label_2ee39c;
        case 0x2ee3a0u: goto label_2ee3a0;
        case 0x2ee3a4u: goto label_2ee3a4;
        case 0x2ee3a8u: goto label_2ee3a8;
        case 0x2ee3acu: goto label_2ee3ac;
        case 0x2ee3b0u: goto label_2ee3b0;
        case 0x2ee3b4u: goto label_2ee3b4;
        case 0x2ee3b8u: goto label_2ee3b8;
        case 0x2ee3bcu: goto label_2ee3bc;
        case 0x2ee3c0u: goto label_2ee3c0;
        case 0x2ee3c4u: goto label_2ee3c4;
        case 0x2ee3c8u: goto label_2ee3c8;
        case 0x2ee3ccu: goto label_2ee3cc;
        case 0x2ee3d0u: goto label_2ee3d0;
        case 0x2ee3d4u: goto label_2ee3d4;
        case 0x2ee3d8u: goto label_2ee3d8;
        case 0x2ee3dcu: goto label_2ee3dc;
        case 0x2ee3e0u: goto label_2ee3e0;
        case 0x2ee3e4u: goto label_2ee3e4;
        case 0x2ee3e8u: goto label_2ee3e8;
        case 0x2ee3ecu: goto label_2ee3ec;
        case 0x2ee3f0u: goto label_2ee3f0;
        case 0x2ee3f4u: goto label_2ee3f4;
        case 0x2ee3f8u: goto label_2ee3f8;
        case 0x2ee3fcu: goto label_2ee3fc;
        case 0x2ee400u: goto label_2ee400;
        case 0x2ee404u: goto label_2ee404;
        case 0x2ee408u: goto label_2ee408;
        case 0x2ee40cu: goto label_2ee40c;
        case 0x2ee410u: goto label_2ee410;
        case 0x2ee414u: goto label_2ee414;
        case 0x2ee418u: goto label_2ee418;
        case 0x2ee41cu: goto label_2ee41c;
        case 0x2ee420u: goto label_2ee420;
        case 0x2ee424u: goto label_2ee424;
        case 0x2ee428u: goto label_2ee428;
        case 0x2ee42cu: goto label_2ee42c;
        case 0x2ee430u: goto label_2ee430;
        case 0x2ee434u: goto label_2ee434;
        case 0x2ee438u: goto label_2ee438;
        case 0x2ee43cu: goto label_2ee43c;
        case 0x2ee440u: goto label_2ee440;
        case 0x2ee444u: goto label_2ee444;
        case 0x2ee448u: goto label_2ee448;
        case 0x2ee44cu: goto label_2ee44c;
        case 0x2ee450u: goto label_2ee450;
        case 0x2ee454u: goto label_2ee454;
        case 0x2ee458u: goto label_2ee458;
        case 0x2ee45cu: goto label_2ee45c;
        case 0x2ee460u: goto label_2ee460;
        case 0x2ee464u: goto label_2ee464;
        case 0x2ee468u: goto label_2ee468;
        case 0x2ee46cu: goto label_2ee46c;
        case 0x2ee470u: goto label_2ee470;
        case 0x2ee474u: goto label_2ee474;
        case 0x2ee478u: goto label_2ee478;
        case 0x2ee47cu: goto label_2ee47c;
        case 0x2ee480u: goto label_2ee480;
        case 0x2ee484u: goto label_2ee484;
        case 0x2ee488u: goto label_2ee488;
        case 0x2ee48cu: goto label_2ee48c;
        case 0x2ee490u: goto label_2ee490;
        case 0x2ee494u: goto label_2ee494;
        case 0x2ee498u: goto label_2ee498;
        case 0x2ee49cu: goto label_2ee49c;
        case 0x2ee4a0u: goto label_2ee4a0;
        case 0x2ee4a4u: goto label_2ee4a4;
        case 0x2ee4a8u: goto label_2ee4a8;
        case 0x2ee4acu: goto label_2ee4ac;
        case 0x2ee4b0u: goto label_2ee4b0;
        case 0x2ee4b4u: goto label_2ee4b4;
        case 0x2ee4b8u: goto label_2ee4b8;
        case 0x2ee4bcu: goto label_2ee4bc;
        case 0x2ee4c0u: goto label_2ee4c0;
        case 0x2ee4c4u: goto label_2ee4c4;
        case 0x2ee4c8u: goto label_2ee4c8;
        case 0x2ee4ccu: goto label_2ee4cc;
        case 0x2ee4d0u: goto label_2ee4d0;
        case 0x2ee4d4u: goto label_2ee4d4;
        case 0x2ee4d8u: goto label_2ee4d8;
        case 0x2ee4dcu: goto label_2ee4dc;
        case 0x2ee4e0u: goto label_2ee4e0;
        case 0x2ee4e4u: goto label_2ee4e4;
        case 0x2ee4e8u: goto label_2ee4e8;
        case 0x2ee4ecu: goto label_2ee4ec;
        case 0x2ee4f0u: goto label_2ee4f0;
        case 0x2ee4f4u: goto label_2ee4f4;
        case 0x2ee4f8u: goto label_2ee4f8;
        case 0x2ee4fcu: goto label_2ee4fc;
        case 0x2ee500u: goto label_2ee500;
        case 0x2ee504u: goto label_2ee504;
        case 0x2ee508u: goto label_2ee508;
        case 0x2ee50cu: goto label_2ee50c;
        case 0x2ee510u: goto label_2ee510;
        case 0x2ee514u: goto label_2ee514;
        case 0x2ee518u: goto label_2ee518;
        case 0x2ee51cu: goto label_2ee51c;
        case 0x2ee520u: goto label_2ee520;
        case 0x2ee524u: goto label_2ee524;
        case 0x2ee528u: goto label_2ee528;
        case 0x2ee52cu: goto label_2ee52c;
        case 0x2ee530u: goto label_2ee530;
        case 0x2ee534u: goto label_2ee534;
        case 0x2ee538u: goto label_2ee538;
        case 0x2ee53cu: goto label_2ee53c;
        case 0x2ee540u: goto label_2ee540;
        case 0x2ee544u: goto label_2ee544;
        case 0x2ee548u: goto label_2ee548;
        case 0x2ee54cu: goto label_2ee54c;
        case 0x2ee550u: goto label_2ee550;
        case 0x2ee554u: goto label_2ee554;
        case 0x2ee558u: goto label_2ee558;
        case 0x2ee55cu: goto label_2ee55c;
        case 0x2ee560u: goto label_2ee560;
        case 0x2ee564u: goto label_2ee564;
        case 0x2ee568u: goto label_2ee568;
        case 0x2ee56cu: goto label_2ee56c;
        case 0x2ee570u: goto label_2ee570;
        case 0x2ee574u: goto label_2ee574;
        case 0x2ee578u: goto label_2ee578;
        case 0x2ee57cu: goto label_2ee57c;
        case 0x2ee580u: goto label_2ee580;
        case 0x2ee584u: goto label_2ee584;
        case 0x2ee588u: goto label_2ee588;
        case 0x2ee58cu: goto label_2ee58c;
        case 0x2ee590u: goto label_2ee590;
        case 0x2ee594u: goto label_2ee594;
        case 0x2ee598u: goto label_2ee598;
        case 0x2ee59cu: goto label_2ee59c;
        case 0x2ee5a0u: goto label_2ee5a0;
        case 0x2ee5a4u: goto label_2ee5a4;
        case 0x2ee5a8u: goto label_2ee5a8;
        case 0x2ee5acu: goto label_2ee5ac;
        case 0x2ee5b0u: goto label_2ee5b0;
        case 0x2ee5b4u: goto label_2ee5b4;
        case 0x2ee5b8u: goto label_2ee5b8;
        case 0x2ee5bcu: goto label_2ee5bc;
        case 0x2ee5c0u: goto label_2ee5c0;
        case 0x2ee5c4u: goto label_2ee5c4;
        case 0x2ee5c8u: goto label_2ee5c8;
        case 0x2ee5ccu: goto label_2ee5cc;
        case 0x2ee5d0u: goto label_2ee5d0;
        case 0x2ee5d4u: goto label_2ee5d4;
        case 0x2ee5d8u: goto label_2ee5d8;
        case 0x2ee5dcu: goto label_2ee5dc;
        case 0x2ee5e0u: goto label_2ee5e0;
        case 0x2ee5e4u: goto label_2ee5e4;
        default: break;
    }

    ctx->pc = 0x2ee280u;

label_2ee280:
    // 0x2ee280: 0x27bdf900  addiu       $sp, $sp, -0x700
    ctx->pc = 0x2ee280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965504));
label_2ee284:
    // 0x2ee284: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ee284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2ee288:
    // 0x2ee288: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ee288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ee28c:
    // 0x2ee28c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ee28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ee290:
    // 0x2ee290: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ee290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ee294:
    // 0x2ee294: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ee298:
    // 0x2ee298: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ee298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee29c:
    // 0x2ee29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ee2a0:
    // 0x2ee2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ee2a4:
    // 0x2ee2a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ee2a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee2a8:
    // 0x2ee2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ee2ac:
    // 0x2ee2ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ee2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee2b0:
    // 0x2ee2b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ee2b4:
    // 0x2ee2b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ee2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee2b8:
    // 0x2ee2b8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2ee2bc:
    if (ctx->pc == 0x2EE2BCu) {
        ctx->pc = 0x2EE2BCu;
            // 0x2ee2bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2C0u;
        goto label_2ee2c0;
    }
    ctx->pc = 0x2EE2B8u;
    {
        const bool branch_taken_0x2ee2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE2B8u;
            // 0x2ee2bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2b8) {
            ctx->pc = 0x2EE310u;
            goto label_2ee310;
        }
    }
    ctx->pc = 0x2EE2C0u;
label_2ee2c0:
    // 0x2ee2c0: 0x8c510f54  lw          $s1, 0xF54($v0)
    ctx->pc = 0x2ee2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
label_2ee2c4:
    // 0x2ee2c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2ee2c8:
    if (ctx->pc == 0x2EE2C8u) {
        ctx->pc = 0x2EE2CCu;
        goto label_2ee2cc;
    }
    ctx->pc = 0x2EE2C4u;
    {
        const bool branch_taken_0x2ee2c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2c4) {
            ctx->pc = 0x2EE308u;
            goto label_2ee308;
        }
    }
    ctx->pc = 0x2EE2CCu;
label_2ee2cc:
    // 0x2ee2cc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2ee2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ee2d0:
    // 0x2ee2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee2d4:
    // 0x2ee2d4: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x2ee2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2ee2d8:
    // 0x2ee2d8: 0xc0a5e64  jal         func_297990
label_2ee2dc:
    if (ctx->pc == 0x2EE2DCu) {
        ctx->pc = 0x2EE2DCu;
            // 0x2ee2dc: 0x27a506f8  addiu       $a1, $sp, 0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1784));
        ctx->pc = 0x2EE2E0u;
        goto label_2ee2e0;
    }
    ctx->pc = 0x2EE2D8u;
    SET_GPR_U32(ctx, 31, 0x2EE2E0u);
    ctx->pc = 0x2EE2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE2D8u;
            // 0x2ee2dc: 0x27a506f8  addiu       $a1, $sp, 0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE2E0u; }
        if (ctx->pc != 0x2EE2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE2E0u; }
        if (ctx->pc != 0x2EE2E0u) { return; }
    }
    ctx->pc = 0x2EE2E0u;
label_2ee2e0:
    // 0x2ee2e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ee2e4:
    if (ctx->pc == 0x2EE2E4u) {
        ctx->pc = 0x2EE2E8u;
        goto label_2ee2e8;
    }
    ctx->pc = 0x2EE2E0u;
    {
        const bool branch_taken_0x2ee2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2e0) {
            ctx->pc = 0x2EE308u;
            goto label_2ee308;
        }
    }
    ctx->pc = 0x2EE2E8u;
label_2ee2e8:
    // 0x2ee2e8: 0x8fa506f8  lw          $a1, 0x6F8($sp)
    ctx->pc = 0x2ee2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1784)));
label_2ee2ec:
    // 0x2ee2ec: 0x8fa606fc  lw          $a2, 0x6FC($sp)
    ctx->pc = 0x2ee2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1788)));
label_2ee2f0:
    // 0x2ee2f0: 0xc0a6010  jal         func_298040
label_2ee2f4:
    if (ctx->pc == 0x2EE2F4u) {
        ctx->pc = 0x2EE2F4u;
            // 0x2ee2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2F8u;
        goto label_2ee2f8;
    }
    ctx->pc = 0x2EE2F0u;
    SET_GPR_U32(ctx, 31, 0x2EE2F8u);
    ctx->pc = 0x2EE2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE2F0u;
            // 0x2ee2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE2F8u; }
        if (ctx->pc != 0x2EE2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE2F8u; }
        if (ctx->pc != 0x2EE2F8u) { return; }
    }
    ctx->pc = 0x2EE2F8u;
label_2ee2f8:
    // 0x2ee2f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ee2fc:
    if (ctx->pc == 0x2EE2FCu) {
        ctx->pc = 0x2EE2FCu;
            // 0x2ee2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE300u;
        goto label_2ee300;
    }
    ctx->pc = 0x2EE2F8u;
    {
        const bool branch_taken_0x2ee2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE2F8u;
            // 0x2ee2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2f8) {
            ctx->pc = 0x2EE320u;
            goto label_2ee320;
        }
    }
    ctx->pc = 0x2EE300u;
label_2ee300:
    // 0x2ee300: 0x100000af  b           . + 4 + (0xAF << 2)
label_2ee304:
    if (ctx->pc == 0x2EE304u) {
        ctx->pc = 0x2EE304u;
            // 0x2ee304: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x2EE308u;
        goto label_2ee308;
    }
    ctx->pc = 0x2EE300u;
    {
        const bool branch_taken_0x2ee300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE300u;
            // 0x2ee304: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee300) {
            ctx->pc = 0x2EE5C0u;
            goto label_2ee5c0;
        }
    }
    ctx->pc = 0x2EE308u;
label_2ee308:
    // 0x2ee308: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2ee308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2ee30c:
    // 0x2ee30c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ee30cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ee310:
    // 0x2ee310: 0x8ea20f50  lw          $v0, 0xF50($s5)
    ctx->pc = 0x2ee310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3920)));
label_2ee314:
    // 0x2ee314: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ee314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ee318:
    // 0x2ee318: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_2ee31c:
    if (ctx->pc == 0x2EE31Cu) {
        ctx->pc = 0x2EE31Cu;
            // 0x2ee31c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->pc = 0x2EE320u;
        goto label_2ee320;
    }
    ctx->pc = 0x2EE318u;
    {
        const bool branch_taken_0x2ee318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE318u;
            // 0x2ee31c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee318) {
            ctx->pc = 0x2EE2C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee2c0;
        }
    }
    ctx->pc = 0x2EE320u;
label_2ee320:
    // 0x2ee320: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2ee324:
    if (ctx->pc == 0x2EE324u) {
        ctx->pc = 0x2EE324u;
            // 0x2ee324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE328u;
        goto label_2ee328;
    }
    ctx->pc = 0x2EE320u;
    {
        const bool branch_taken_0x2ee320 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE320u;
            // 0x2ee324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee320) {
            ctx->pc = 0x2EE330u;
            goto label_2ee330;
        }
    }
    ctx->pc = 0x2EE328u;
label_2ee328:
    // 0x2ee328: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2ee32c:
    if (ctx->pc == 0x2EE32Cu) {
        ctx->pc = 0x2EE330u;
        goto label_2ee330;
    }
    ctx->pc = 0x2EE328u;
    {
        const bool branch_taken_0x2ee328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee328) {
            ctx->pc = 0x2EE5BCu;
            goto label_2ee5bc;
        }
    }
    ctx->pc = 0x2EE330u;
label_2ee330:
    // 0x2ee330: 0x8fa506f8  lw          $a1, 0x6F8($sp)
    ctx->pc = 0x2ee330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1784)));
label_2ee334:
    // 0x2ee334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee338:
    // 0x2ee338: 0x8fb406fc  lw          $s4, 0x6FC($sp)
    ctx->pc = 0x2ee338u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1788)));
label_2ee33c:
    // 0x2ee33c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ee33cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ee340:
    // 0x2ee340: 0xc0a5ec8  jal         func_297B20
label_2ee344:
    if (ctx->pc == 0x2EE344u) {
        ctx->pc = 0x2EE344u;
            // 0x2ee344: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE348u;
        goto label_2ee348;
    }
    ctx->pc = 0x2EE340u;
    SET_GPR_U32(ctx, 31, 0x2EE348u);
    ctx->pc = 0x2EE344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE340u;
            // 0x2ee344: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297B20u;
    if (runtime->hasFunction(0x297B20u)) {
        auto targetFn = runtime->lookupFunction(0x297B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE348u; }
        if (ctx->pc != 0x2EE348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRiver__9CEditGridFii_0x297b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE348u; }
        if (ctx->pc != 0x2EE348u) { return; }
    }
    ctx->pc = 0x2EE348u;
label_2ee348:
    // 0x2ee348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee34c:
    // 0x2ee34c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ee34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee350:
    // 0x2ee350: 0xc0a5e40  jal         func_297900
label_2ee354:
    if (ctx->pc == 0x2EE354u) {
        ctx->pc = 0x2EE354u;
            // 0x2ee354: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE358u;
        goto label_2ee358;
    }
    ctx->pc = 0x2EE350u;
    SET_GPR_U32(ctx, 31, 0x2EE358u);
    ctx->pc = 0x2EE354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE350u;
            // 0x2ee354: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297900u;
    if (runtime->hasFunction(0x297900u)) {
        auto targetFn = runtime->lookupFunction(0x297900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE358u; }
        if (ctx->pc != 0x2EE358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__9CEditGridFii_0x297900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE358u; }
        if (ctx->pc != 0x2EE358u) { return; }
    }
    ctx->pc = 0x2EE358u;
label_2ee358:
    // 0x2ee358: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ee358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee35c:
    // 0x2ee35c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2ee360:
    if (ctx->pc == 0x2EE360u) {
        ctx->pc = 0x2EE360u;
            // 0x2ee360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE364u;
        goto label_2ee364;
    }
    ctx->pc = 0x2EE35Cu;
    {
        const bool branch_taken_0x2ee35c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE35Cu;
            // 0x2ee360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee35c) {
            ctx->pc = 0x2EE36Cu;
            goto label_2ee36c;
        }
    }
    ctx->pc = 0x2EE364u;
label_2ee364:
    // 0x2ee364: 0x10000095  b           . + 4 + (0x95 << 2)
label_2ee368:
    if (ctx->pc == 0x2EE368u) {
        ctx->pc = 0x2EE368u;
            // 0x2ee368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE36Cu;
        goto label_2ee36c;
    }
    ctx->pc = 0x2EE364u;
    {
        const bool branch_taken_0x2ee364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE364u;
            // 0x2ee368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee364) {
            ctx->pc = 0x2EE5BCu;
            goto label_2ee5bc;
        }
    }
    ctx->pc = 0x2EE36Cu;
label_2ee36c:
    // 0x2ee36c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ee36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee370:
    // 0x2ee370: 0xc0a5f04  jal         func_297C10
label_2ee374:
    if (ctx->pc == 0x2EE374u) {
        ctx->pc = 0x2EE374u;
            // 0x2ee374: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE378u;
        goto label_2ee378;
    }
    ctx->pc = 0x2EE370u;
    SET_GPR_U32(ctx, 31, 0x2EE378u);
    ctx->pc = 0x2EE374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE370u;
            // 0x2ee374: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297C10u;
    if (runtime->hasFunction(0x297C10u)) {
        auto targetFn = runtime->lookupFunction(0x297C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE378u; }
        if (ctx->pc != 0x2EE378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetRiver__9CEditGridFii_0x297c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE378u; }
        if (ctx->pc != 0x2EE378u) { return; }
    }
    ctx->pc = 0x2EE378u;
label_2ee378:
    // 0x2ee378: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ee378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee37c:
    // 0x2ee37c: 0x27ab0094  addiu       $t3, $sp, 0x94
    ctx->pc = 0x2ee37cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_2ee380:
    // 0x2ee380: 0x27aa009c  addiu       $t2, $sp, 0x9C
    ctx->pc = 0x2ee380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2ee384:
    // 0x2ee384: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ee384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee388:
    // 0x2ee388: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ee388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ee38c:
    // 0x2ee38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee390:
    // 0x2ee390: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2ee390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2ee394:
    // 0x2ee394: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2ee394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_2ee398:
    // 0x2ee398: 0x86490004  lh          $t1, 0x4($s2)
    ctx->pc = 0x2ee398u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_2ee39c:
    // 0x2ee39c: 0x86480006  lh          $t0, 0x6($s2)
    ctx->pc = 0x2ee39cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_2ee3a0:
    // 0x2ee3a0: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x2ee3a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_2ee3a4:
    // 0x2ee3a4: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x2ee3a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_2ee3a8:
    // 0x2ee3a8: 0xa5690000  sh          $t1, 0x0($t3)
    ctx->pc = 0x2ee3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 9));
label_2ee3ac:
    // 0x2ee3ac: 0xa5680002  sh          $t0, 0x2($t3)
    ctx->pc = 0x2ee3acu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 8));
label_2ee3b0:
    // 0x2ee3b0: 0xa5630004  sh          $v1, 0x4($t3)
    ctx->pc = 0x2ee3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 3));
label_2ee3b4:
    // 0x2ee3b4: 0xa5620006  sh          $v0, 0x6($t3)
    ctx->pc = 0x2ee3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 2));
label_2ee3b8:
    // 0x2ee3b8: 0x8649000c  lh          $t1, 0xC($s2)
    ctx->pc = 0x2ee3b8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_2ee3bc:
    // 0x2ee3bc: 0x8648000e  lh          $t0, 0xE($s2)
    ctx->pc = 0x2ee3bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_2ee3c0:
    // 0x2ee3c0: 0x86430010  lh          $v1, 0x10($s2)
    ctx->pc = 0x2ee3c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_2ee3c4:
    // 0x2ee3c4: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x2ee3c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_2ee3c8:
    // 0x2ee3c8: 0xa5490000  sh          $t1, 0x0($t2)
    ctx->pc = 0x2ee3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 9));
label_2ee3cc:
    // 0x2ee3cc: 0xa5480002  sh          $t0, 0x2($t2)
    ctx->pc = 0x2ee3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 8));
label_2ee3d0:
    // 0x2ee3d0: 0xa5430004  sh          $v1, 0x4($t2)
    ctx->pc = 0x2ee3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 3));
label_2ee3d4:
    // 0x2ee3d4: 0xc0a601c  jal         func_298070
label_2ee3d8:
    if (ctx->pc == 0x2EE3D8u) {
        ctx->pc = 0x2EE3D8u;
            // 0x2ee3d8: 0xa5420006  sh          $v0, 0x6($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2EE3DCu;
        goto label_2ee3dc;
    }
    ctx->pc = 0x2EE3D4u;
    SET_GPR_U32(ctx, 31, 0x2EE3DCu);
    ctx->pc = 0x2EE3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE3D4u;
            // 0x2ee3d8: 0xa5420006  sh          $v0, 0x6($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298070u;
    if (runtime->hasFunction(0x298070u)) {
        auto targetFn = runtime->lookupFunction(0x298070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE3DCu; }
        if (ctx->pc != 0x2EE3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverPos__9CEditGridFiiPA4_f_0x298070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE3DCu; }
        if (ctx->pc != 0x2EE3DCu) { return; }
    }
    ctx->pc = 0x2EE3DCu;
label_2ee3dc:
    // 0x2ee3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee3e0:
    // 0x2ee3e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ee3e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee3e4:
    // 0x2ee3e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee3e8:
    // 0x2ee3e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee3ec:
    // 0x2ee3ec: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x2ee3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2ee3f0:
    // 0x2ee3f0: 0x9d3821  addu        $a3, $a0, $sp
    ctx->pc = 0x2ee3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_2ee3f4:
    // 0x2ee3f4: 0x24c6009c  addiu       $a2, $a2, 0x9C
    ctx->pc = 0x2ee3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 156));
label_2ee3f8:
    // 0x2ee3f8: 0xbd4021  addu        $t0, $a1, $sp
    ctx->pc = 0x2ee3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_2ee3fc:
    // 0x2ee3fc: 0x84ca0000  lh          $t2, 0x0($a2)
    ctx->pc = 0x2ee3fcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2ee400:
    // 0x2ee400: 0x24e700f0  addiu       $a3, $a3, 0xF0
    ctx->pc = 0x2ee400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 240));
label_2ee404:
    // 0x2ee404: 0x250900b0  addiu       $t1, $t0, 0xB0
    ctx->pc = 0x2ee404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
label_2ee408:
    // 0x2ee408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ee408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ee40c:
    // 0x2ee40c: 0x28480004  slti        $t0, $v0, 0x4
    ctx->pc = 0x2ee40cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ee410:
    // 0x2ee410: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2ee410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2ee414:
    // 0x2ee414: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2ee414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2ee418:
    // 0x2ee418: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2ee418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2ee41c:
    // 0x2ee41c: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x2ee41cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_2ee420:
    // 0x2ee420: 0x22a5021  addu        $t2, $s1, $t2
    ctx->pc = 0x2ee420u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
label_2ee424:
    // 0x2ee424: 0x794a0030  lq          $t2, 0x30($t2)
    ctx->pc = 0x2ee424u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 10), 48)));
label_2ee428:
    // 0x2ee428: 0x7cea0000  sq          $t2, 0x0($a3)
    ctx->pc = 0x2ee428u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 10));
label_2ee42c:
    // 0x2ee42c: 0x84ca0000  lh          $t2, 0x0($a2)
    ctx->pc = 0x2ee42cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2ee430:
    // 0x2ee430: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x2ee430u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_2ee434:
    // 0x2ee434: 0x22a5021  addu        $t2, $s1, $t2
    ctx->pc = 0x2ee434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
label_2ee438:
    // 0x2ee438: 0x794a0040  lq          $t2, 0x40($t2)
    ctx->pc = 0x2ee438u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 10), 64)));
label_2ee43c:
    // 0x2ee43c: 0x7cea0010  sq          $t2, 0x10($a3)
    ctx->pc = 0x2ee43cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 10));
label_2ee440:
    // 0x2ee440: 0x84ca0000  lh          $t2, 0x0($a2)
    ctx->pc = 0x2ee440u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2ee444:
    // 0x2ee444: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x2ee444u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_2ee448:
    // 0x2ee448: 0x22a5021  addu        $t2, $s1, $t2
    ctx->pc = 0x2ee448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
label_2ee44c:
    // 0x2ee44c: 0x794a0050  lq          $t2, 0x50($t2)
    ctx->pc = 0x2ee44cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 10), 80)));
label_2ee450:
    // 0x2ee450: 0x7cea0020  sq          $t2, 0x20($a3)
    ctx->pc = 0x2ee450u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 10));
label_2ee454:
    // 0x2ee454: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x2ee454u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2ee458:
    // 0x2ee458: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2ee458u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_2ee45c:
    // 0x2ee45c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2ee45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2ee460:
    // 0x2ee460: 0x78c60060  lq          $a2, 0x60($a2)
    ctx->pc = 0x2ee460u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 96)));
label_2ee464:
    // 0x2ee464: 0x7ce60030  sq          $a2, 0x30($a3)
    ctx->pc = 0x2ee464u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 6));
label_2ee468:
    // 0x2ee468: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x2ee468u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2ee46c:
    // 0x2ee46c: 0x1500ffdf  bnez        $t0, . + 4 + (-0x21 << 2)
label_2ee470:
    if (ctx->pc == 0x2EE470u) {
        ctx->pc = 0x2EE470u;
            // 0x2ee470: 0x7ce60030  sq          $a2, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 6));
        ctx->pc = 0x2EE474u;
        goto label_2ee474;
    }
    ctx->pc = 0x2EE46Cu;
    {
        const bool branch_taken_0x2ee46c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE46Cu;
            // 0x2ee470: 0x7ce60030  sq          $a2, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee46c) {
            ctx->pc = 0x2EE3ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee3ec;
        }
    }
    ctx->pc = 0x2EE474u;
label_2ee474:
    // 0x2ee474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee478:
    // 0x2ee478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ee478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee47c:
    // 0x2ee47c: 0xc0a6170  jal         func_2985C0
label_2ee480:
    if (ctx->pc == 0x2EE480u) {
        ctx->pc = 0x2EE480u;
            // 0x2ee480: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x2EE484u;
        goto label_2ee484;
    }
    ctx->pc = 0x2EE47Cu;
    SET_GPR_U32(ctx, 31, 0x2EE484u);
    ctx->pc = 0x2EE480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE47Cu;
            // 0x2ee480: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2985C0u;
    if (runtime->hasFunction(0x2985C0u)) {
        auto targetFn = runtime->lookupFunction(0x2985C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE484u; }
        if (ctx->pc != 0x2EE484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGridBox__9CEditGridFP9mgVu0FBOXPf_0x2985c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE484u; }
        if (ctx->pc != 0x2EE484u) { return; }
    }
    ctx->pc = 0x2EE484u;
label_2ee484:
    // 0x2ee484: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ee484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ee488:
    // 0x2ee488: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x2ee488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2ee48c:
    // 0x2ee48c: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x2ee48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2ee490:
    // 0x2ee490: 0xc06c934  jal         func_1B24D0
label_2ee494:
    if (ctx->pc == 0x2EE494u) {
        ctx->pc = 0x2EE494u;
            // 0x2ee494: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x2EE498u;
        goto label_2ee498;
    }
    ctx->pc = 0x2EE490u;
    SET_GPR_U32(ctx, 31, 0x2EE498u);
    ctx->pc = 0x2EE494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE490u;
            // 0x2ee494: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B24D0u;
    if (runtime->hasFunction(0x1B24D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B24D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE498u; }
        if (ctx->pc != 0x2EE498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNearParts__8CEditMapFR9mgVu0FBOXPP10CEditPartsi_0x1b24d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE498u; }
        if (ctx->pc != 0x2EE498u) { return; }
    }
    ctx->pc = 0x2EE498u;
label_2ee498:
    // 0x2ee498: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ee498u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee49c:
    // 0x2ee49c: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x2ee49cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2ee4a0:
    // 0x2ee4a0: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
label_2ee4a4:
    if (ctx->pc == 0x2EE4A4u) {
        ctx->pc = 0x2EE4A4u;
            // 0x2ee4a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4A8u;
        goto label_2ee4a8;
    }
    ctx->pc = 0x2EE4A0u;
    {
        const bool branch_taken_0x2ee4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4A0u;
            // 0x2ee4a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4a0) {
            ctx->pc = 0x2EE5B8u;
            goto label_2ee5b8;
        }
    }
    ctx->pc = 0x2EE4A8u;
label_2ee4a8:
    // 0x2ee4a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ee4a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4ac:
    // 0x2ee4ac: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x2ee4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_2ee4b0:
    // 0x2ee4b0: 0x8c510290  lw          $s1, 0x290($v0)
    ctx->pc = 0x2ee4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
label_2ee4b4:
    // 0x2ee4b4: 0x8e360324  lw          $s6, 0x324($s1)
    ctx->pc = 0x2ee4b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_2ee4b8:
    // 0x2ee4b8: 0x12c0003b  beqz        $s6, . + 4 + (0x3B << 2)
label_2ee4bc:
    if (ctx->pc == 0x2EE4BCu) {
        ctx->pc = 0x2EE4C0u;
        goto label_2ee4c0;
    }
    ctx->pc = 0x2EE4B8u;
    {
        const bool branch_taken_0x2ee4b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee4b8) {
            ctx->pc = 0x2EE5A8u;
            goto label_2ee5a8;
        }
    }
    ctx->pc = 0x2EE4C0u;
label_2ee4c0:
    // 0x2ee4c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2ee4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee4c4:
    // 0x2ee4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4c8:
    // 0x2ee4c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ee4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ee4cc:
    // 0x2ee4cc: 0x320f809  jalr        $t9
label_2ee4d0:
    if (ctx->pc == 0x2EE4D0u) {
        ctx->pc = 0x2EE4D0u;
            // 0x2ee4d0: 0x27a50690  addiu       $a1, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->pc = 0x2EE4D4u;
        goto label_2ee4d4;
    }
    ctx->pc = 0x2EE4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EE4D4u);
        ctx->pc = 0x2EE4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4CCu;
            // 0x2ee4d0: 0x27a50690  addiu       $a1, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EE4D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EE4D4u; }
            if (ctx->pc != 0x2EE4D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2EE4D4u;
label_2ee4d4:
    // 0x2ee4d4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2ee4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee4d8:
    // 0x2ee4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4dc:
    // 0x2ee4dc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ee4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ee4e0:
    // 0x2ee4e0: 0x320f809  jalr        $t9
label_2ee4e4:
    if (ctx->pc == 0x2EE4E4u) {
        ctx->pc = 0x2EE4E4u;
            // 0x2ee4e4: 0x27a506a0  addiu       $a1, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->pc = 0x2EE4E8u;
        goto label_2ee4e8;
    }
    ctx->pc = 0x2EE4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EE4E8u);
        ctx->pc = 0x2EE4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4E0u;
            // 0x2ee4e4: 0x27a506a0  addiu       $a1, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EE4E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EE4E8u; }
            if (ctx->pc != 0x2EE4E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2EE4E8u;
label_2ee4e8:
    // 0x2ee4e8: 0xc7ac06a4  lwc1        $f12, 0x6A4($sp)
    ctx->pc = 0x2ee4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ee4ec:
    // 0x2ee4ec: 0xc06c3d4  jal         func_1B0F50
label_2ee4f0:
    if (ctx->pc == 0x2EE4F0u) {
        ctx->pc = 0x2EE4F0u;
            // 0x2ee4f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4F4u;
        goto label_2ee4f4;
    }
    ctx->pc = 0x2EE4ECu;
    SET_GPR_U32(ctx, 31, 0x2EE4F4u);
    ctx->pc = 0x2EE4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4ECu;
            // 0x2ee4f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE4F4u; }
        if (ctx->pc != 0x2EE4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE4F4u; }
        if (ctx->pc != 0x2EE4F4u) { return; }
    }
    ctx->pc = 0x2EE4F4u;
label_2ee4f4:
    // 0x2ee4f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ee4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4f8:
    // 0x2ee4f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ee4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4fc:
    // 0x2ee4fc: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2ee4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2ee500:
    // 0x2ee500: 0xc06c4d8  jal         func_1B1360
label_2ee504:
    if (ctx->pc == 0x2EE504u) {
        ctx->pc = 0x2EE504u;
            // 0x2ee504: 0x27a60690  addiu       $a2, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->pc = 0x2EE508u;
        goto label_2ee508;
    }
    ctx->pc = 0x2EE500u;
    SET_GPR_U32(ctx, 31, 0x2EE508u);
    ctx->pc = 0x2EE504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE500u;
            // 0x2ee504: 0x27a60690  addiu       $a2, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE508u; }
        if (ctx->pc != 0x2EE508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE508u; }
        if (ctx->pc != 0x2EE508u) { return; }
    }
    ctx->pc = 0x2EE508u;
label_2ee508:
    // 0x2ee508: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ee508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ee50c:
    // 0x2ee50c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2ee50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2ee510:
    // 0x2ee510: 0xc06c4ec  jal         func_1B13B0
label_2ee514:
    if (ctx->pc == 0x2EE514u) {
        ctx->pc = 0x2EE514u;
            // 0x2ee514: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2EE518u;
        goto label_2ee518;
    }
    ctx->pc = 0x2EE510u;
    SET_GPR_U32(ctx, 31, 0x2EE518u);
    ctx->pc = 0x2EE514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE510u;
            // 0x2ee514: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13B0u;
    if (runtime->hasFunction(0x1B13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE518u; }
        if (ctx->pc != 0x2EE518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInversMatrix__8CEditMapFPA4_fPA4_f_0x1b13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE518u; }
        if (ctx->pc != 0x2EE518u) { return; }
    }
    ctx->pc = 0x2EE518u;
label_2ee518:
    // 0x2ee518: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ee518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee51c:
    // 0x2ee51c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ee51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee520:
    // 0x2ee520: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ee520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee524:
    // 0x2ee524: 0x0  nop
    ctx->pc = 0x2ee524u;
    // NOP
label_2ee528:
    // 0x2ee528: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2ee528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2ee52c:
    // 0x2ee52c: 0x244600f0  addiu       $a2, $v0, 0xF0
    ctx->pc = 0x2ee52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_2ee530:
    // 0x2ee530: 0x27a406b0  addiu       $a0, $sp, 0x6B0
    ctx->pc = 0x2ee530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
label_2ee534:
    // 0x2ee534: 0xc04c094  jal         func_130250
label_2ee538:
    if (ctx->pc == 0x2EE538u) {
        ctx->pc = 0x2EE538u;
            // 0x2ee538: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2EE53Cu;
        goto label_2ee53c;
    }
    ctx->pc = 0x2EE534u;
    SET_GPR_U32(ctx, 31, 0x2EE53Cu);
    ctx->pc = 0x2EE538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE534u;
            // 0x2ee538: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE53Cu; }
        if (ctx->pc != 0x2EE53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE53Cu; }
        if (ctx->pc != 0x2EE53Cu) { return; }
    }
    ctx->pc = 0x2EE53Cu;
label_2ee53c:
    // 0x2ee53c: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x2ee53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2ee540:
    // 0x2ee540: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x2ee540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
label_2ee544:
    // 0x2ee544: 0x84650094  lh          $a1, 0x94($v1)
    ctx->pc = 0x2ee544u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
label_2ee548:
    // 0x2ee548: 0x26c400c0  addiu       $a0, $s6, 0xC0
    ctx->pc = 0x2ee548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
label_2ee54c:
    // 0x2ee54c: 0x27a606b0  addiu       $a2, $sp, 0x6B0
    ctx->pc = 0x2ee54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
label_2ee550:
    // 0x2ee550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee554:
    // 0x2ee554: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ee554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2ee558:
    // 0x2ee558: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ee558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ee55c:
    // 0x2ee55c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2ee55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_2ee560:
    // 0x2ee560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ee564:
    // 0x2ee564: 0xc068dc8  jal         func_1A3720
label_2ee568:
    if (ctx->pc == 0x2EE568u) {
        ctx->pc = 0x2EE568u;
            // 0x2ee568: 0x24450110  addiu       $a1, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->pc = 0x2EE56Cu;
        goto label_2ee56c;
    }
    ctx->pc = 0x2EE564u;
    SET_GPR_U32(ctx, 31, 0x2EE56Cu);
    ctx->pc = 0x2EE568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE564u;
            // 0x2ee568: 0x24450110  addiu       $a1, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3720u;
    if (runtime->hasFunction(0x1A3720u)) {
        auto targetFn = runtime->lookupFunction(0x1A3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE56Cu; }
        if (ctx->pc != 0x2EE56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE56Cu; }
        if (ctx->pc != 0x2EE56Cu) { return; }
    }
    ctx->pc = 0x2EE56Cu;
label_2ee56c:
    // 0x2ee56c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2ee56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2ee570:
    // 0x2ee570: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2ee570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2ee574:
    // 0x2ee574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ee574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ee578:
    // 0x2ee578: 0x0  nop
    ctx->pc = 0x2ee578u;
    // NOP
label_2ee57c:
    // 0x2ee57c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ee57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ee580:
    // 0x2ee580: 0x0  nop
    ctx->pc = 0x2ee580u;
    // NOP
label_2ee584:
    // 0x2ee584: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2ee588:
    if (ctx->pc == 0x2EE588u) {
        ctx->pc = 0x2EE588u;
            // 0x2ee588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE58Cu;
        goto label_2ee58c;
    }
    ctx->pc = 0x2EE584u;
    {
        const bool branch_taken_0x2ee584 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE584u;
            // 0x2ee588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee584) {
            ctx->pc = 0x2EE594u;
            goto label_2ee594;
        }
    }
    ctx->pc = 0x2EE58Cu;
label_2ee58c:
    // 0x2ee58c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ee590:
    if (ctx->pc == 0x2EE590u) {
        ctx->pc = 0x2EE594u;
        goto label_2ee594;
    }
    ctx->pc = 0x2EE58Cu;
    {
        const bool branch_taken_0x2ee58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee58c) {
            ctx->pc = 0x2EE5BCu;
            goto label_2ee5bc;
        }
    }
    ctx->pc = 0x2EE594u;
label_2ee594:
    // 0x2ee594: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ee594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ee598:
    // 0x2ee598: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x2ee598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_2ee59c:
    // 0x2ee59c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2ee59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ee5a0:
    // 0x2ee5a0: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_2ee5a4:
    if (ctx->pc == 0x2EE5A4u) {
        ctx->pc = 0x2EE5A4u;
            // 0x2ee5a4: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x2EE5A8u;
        goto label_2ee5a8;
    }
    ctx->pc = 0x2EE5A0u;
    {
        const bool branch_taken_0x2ee5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE5A0u;
            // 0x2ee5a4: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5a0) {
            ctx->pc = 0x2EE524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee524;
        }
    }
    ctx->pc = 0x2EE5A8u;
label_2ee5a8:
    // 0x2ee5a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ee5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ee5ac:
    // 0x2ee5ac: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x2ee5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2ee5b0:
    // 0x2ee5b0: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_2ee5b4:
    if (ctx->pc == 0x2EE5B4u) {
        ctx->pc = 0x2EE5B4u;
            // 0x2ee5b4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x2EE5B8u;
        goto label_2ee5b8;
    }
    ctx->pc = 0x2EE5B0u;
    {
        const bool branch_taken_0x2ee5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE5B0u;
            // 0x2ee5b4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5b0) {
            ctx->pc = 0x2EE4ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee4ac;
        }
    }
    ctx->pc = 0x2EE5B8u;
label_2ee5b8:
    // 0x2ee5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee5bc:
    // 0x2ee5bc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ee5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ee5c0:
    // 0x2ee5c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ee5c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ee5c4:
    // 0x2ee5c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ee5c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ee5c8:
    // 0x2ee5c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ee5c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ee5cc:
    // 0x2ee5cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ee5ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee5d0:
    // 0x2ee5d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ee5d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee5d4:
    // 0x2ee5d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee5d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ee5d8:
    // 0x2ee5d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee5dc:
    // 0x2ee5dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee5e0:
    // 0x2ee5e0: 0x3e00008  jr          $ra
label_2ee5e4:
    if (ctx->pc == 0x2EE5E4u) {
        ctx->pc = 0x2EE5E4u;
            // 0x2ee5e4: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->pc = 0x2EE5E8u;
        goto label_fallthrough_0x2ee5e0;
    }
    ctx->pc = 0x2EE5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE5E0u;
            // 0x2ee5e4: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ee5e0:
    ctx->pc = 0x2EE5E8u;
}
