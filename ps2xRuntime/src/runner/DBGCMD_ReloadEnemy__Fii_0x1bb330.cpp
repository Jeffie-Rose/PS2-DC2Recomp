#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DBGCMD_ReloadEnemy__Fii
// Address: 0x1bb330 - 0x1bb54c
void DBGCMD_ReloadEnemy__Fii_0x1bb330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DBGCMD_ReloadEnemy__Fii_0x1bb330");
#endif

    switch (ctx->pc) {
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb334u: goto label_1bb334;
        case 0x1bb338u: goto label_1bb338;
        case 0x1bb33cu: goto label_1bb33c;
        case 0x1bb340u: goto label_1bb340;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb348u: goto label_1bb348;
        case 0x1bb34cu: goto label_1bb34c;
        case 0x1bb350u: goto label_1bb350;
        case 0x1bb354u: goto label_1bb354;
        case 0x1bb358u: goto label_1bb358;
        case 0x1bb35cu: goto label_1bb35c;
        case 0x1bb360u: goto label_1bb360;
        case 0x1bb364u: goto label_1bb364;
        case 0x1bb368u: goto label_1bb368;
        case 0x1bb36cu: goto label_1bb36c;
        case 0x1bb370u: goto label_1bb370;
        case 0x1bb374u: goto label_1bb374;
        case 0x1bb378u: goto label_1bb378;
        case 0x1bb37cu: goto label_1bb37c;
        case 0x1bb380u: goto label_1bb380;
        case 0x1bb384u: goto label_1bb384;
        case 0x1bb388u: goto label_1bb388;
        case 0x1bb38cu: goto label_1bb38c;
        case 0x1bb390u: goto label_1bb390;
        case 0x1bb394u: goto label_1bb394;
        case 0x1bb398u: goto label_1bb398;
        case 0x1bb39cu: goto label_1bb39c;
        case 0x1bb3a0u: goto label_1bb3a0;
        case 0x1bb3a4u: goto label_1bb3a4;
        case 0x1bb3a8u: goto label_1bb3a8;
        case 0x1bb3acu: goto label_1bb3ac;
        case 0x1bb3b0u: goto label_1bb3b0;
        case 0x1bb3b4u: goto label_1bb3b4;
        case 0x1bb3b8u: goto label_1bb3b8;
        case 0x1bb3bcu: goto label_1bb3bc;
        case 0x1bb3c0u: goto label_1bb3c0;
        case 0x1bb3c4u: goto label_1bb3c4;
        case 0x1bb3c8u: goto label_1bb3c8;
        case 0x1bb3ccu: goto label_1bb3cc;
        case 0x1bb3d0u: goto label_1bb3d0;
        case 0x1bb3d4u: goto label_1bb3d4;
        case 0x1bb3d8u: goto label_1bb3d8;
        case 0x1bb3dcu: goto label_1bb3dc;
        case 0x1bb3e0u: goto label_1bb3e0;
        case 0x1bb3e4u: goto label_1bb3e4;
        case 0x1bb3e8u: goto label_1bb3e8;
        case 0x1bb3ecu: goto label_1bb3ec;
        case 0x1bb3f0u: goto label_1bb3f0;
        case 0x1bb3f4u: goto label_1bb3f4;
        case 0x1bb3f8u: goto label_1bb3f8;
        case 0x1bb3fcu: goto label_1bb3fc;
        case 0x1bb400u: goto label_1bb400;
        case 0x1bb404u: goto label_1bb404;
        case 0x1bb408u: goto label_1bb408;
        case 0x1bb40cu: goto label_1bb40c;
        case 0x1bb410u: goto label_1bb410;
        case 0x1bb414u: goto label_1bb414;
        case 0x1bb418u: goto label_1bb418;
        case 0x1bb41cu: goto label_1bb41c;
        case 0x1bb420u: goto label_1bb420;
        case 0x1bb424u: goto label_1bb424;
        case 0x1bb428u: goto label_1bb428;
        case 0x1bb42cu: goto label_1bb42c;
        case 0x1bb430u: goto label_1bb430;
        case 0x1bb434u: goto label_1bb434;
        case 0x1bb438u: goto label_1bb438;
        case 0x1bb43cu: goto label_1bb43c;
        case 0x1bb440u: goto label_1bb440;
        case 0x1bb444u: goto label_1bb444;
        case 0x1bb448u: goto label_1bb448;
        case 0x1bb44cu: goto label_1bb44c;
        case 0x1bb450u: goto label_1bb450;
        case 0x1bb454u: goto label_1bb454;
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb45cu: goto label_1bb45c;
        case 0x1bb460u: goto label_1bb460;
        case 0x1bb464u: goto label_1bb464;
        case 0x1bb468u: goto label_1bb468;
        case 0x1bb46cu: goto label_1bb46c;
        case 0x1bb470u: goto label_1bb470;
        case 0x1bb474u: goto label_1bb474;
        case 0x1bb478u: goto label_1bb478;
        case 0x1bb47cu: goto label_1bb47c;
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb484u: goto label_1bb484;
        case 0x1bb488u: goto label_1bb488;
        case 0x1bb48cu: goto label_1bb48c;
        case 0x1bb490u: goto label_1bb490;
        case 0x1bb494u: goto label_1bb494;
        case 0x1bb498u: goto label_1bb498;
        case 0x1bb49cu: goto label_1bb49c;
        case 0x1bb4a0u: goto label_1bb4a0;
        case 0x1bb4a4u: goto label_1bb4a4;
        case 0x1bb4a8u: goto label_1bb4a8;
        case 0x1bb4acu: goto label_1bb4ac;
        case 0x1bb4b0u: goto label_1bb4b0;
        case 0x1bb4b4u: goto label_1bb4b4;
        case 0x1bb4b8u: goto label_1bb4b8;
        case 0x1bb4bcu: goto label_1bb4bc;
        case 0x1bb4c0u: goto label_1bb4c0;
        case 0x1bb4c4u: goto label_1bb4c4;
        case 0x1bb4c8u: goto label_1bb4c8;
        case 0x1bb4ccu: goto label_1bb4cc;
        case 0x1bb4d0u: goto label_1bb4d0;
        case 0x1bb4d4u: goto label_1bb4d4;
        case 0x1bb4d8u: goto label_1bb4d8;
        case 0x1bb4dcu: goto label_1bb4dc;
        case 0x1bb4e0u: goto label_1bb4e0;
        case 0x1bb4e4u: goto label_1bb4e4;
        case 0x1bb4e8u: goto label_1bb4e8;
        case 0x1bb4ecu: goto label_1bb4ec;
        case 0x1bb4f0u: goto label_1bb4f0;
        case 0x1bb4f4u: goto label_1bb4f4;
        case 0x1bb4f8u: goto label_1bb4f8;
        case 0x1bb4fcu: goto label_1bb4fc;
        case 0x1bb500u: goto label_1bb500;
        case 0x1bb504u: goto label_1bb504;
        case 0x1bb508u: goto label_1bb508;
        case 0x1bb50cu: goto label_1bb50c;
        case 0x1bb510u: goto label_1bb510;
        case 0x1bb514u: goto label_1bb514;
        case 0x1bb518u: goto label_1bb518;
        case 0x1bb51cu: goto label_1bb51c;
        case 0x1bb520u: goto label_1bb520;
        case 0x1bb524u: goto label_1bb524;
        case 0x1bb528u: goto label_1bb528;
        case 0x1bb52cu: goto label_1bb52c;
        case 0x1bb530u: goto label_1bb530;
        case 0x1bb534u: goto label_1bb534;
        case 0x1bb538u: goto label_1bb538;
        case 0x1bb53cu: goto label_1bb53c;
        case 0x1bb540u: goto label_1bb540;
        case 0x1bb544u: goto label_1bb544;
        case 0x1bb548u: goto label_1bb548;
        default: break;
    }

    ctx->pc = 0x1bb330u;

label_1bb330:
    // 0x1bb330: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bb330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1bb334:
    // 0x1bb334: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bb334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1bb338:
    // 0x1bb338: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bb338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bb33c:
    // 0x1bb33c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bb33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1bb340:
    // 0x1bb340: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bb344:
    // 0x1bb344: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bb344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb348:
    // 0x1bb348: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bb34c:
    // 0x1bb34c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb350:
    // 0x1bb350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb354:
    // 0x1bb354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bb358:
    // 0x1bb358: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb35c:
    // 0x1bb35c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bb35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb360:
    // 0x1bb360: 0xc0a0ed8  jal         func_283B60
label_1bb364:
    if (ctx->pc == 0x1BB364u) {
        ctx->pc = 0x1BB364u;
            // 0x1bb364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB368u;
        goto label_1bb368;
    }
    ctx->pc = 0x1BB360u;
    SET_GPR_U32(ctx, 31, 0x1BB368u);
    ctx->pc = 0x1BB364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB360u;
            // 0x1bb364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB368u; }
        if (ctx->pc != 0x1BB368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB368u; }
        if (ctx->pc != 0x1BB368u) { return; }
    }
    ctx->pc = 0x1BB368u;
label_1bb368:
    // 0x1bb368: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1bb368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1bb36c:
    // 0x1bb36c: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_1bb370:
    if (ctx->pc == 0x1BB370u) {
        ctx->pc = 0x1BB370u;
            // 0x1bb370: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB374u;
        goto label_1bb374;
    }
    ctx->pc = 0x1BB36Cu;
    {
        const bool branch_taken_0x1bb36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB36Cu;
            // 0x1bb370: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb36c) {
            ctx->pc = 0x1BB524u;
            goto label_1bb524;
        }
    }
    ctx->pc = 0x1BB374u;
label_1bb374:
    // 0x1bb374: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_1bb378:
    if (ctx->pc == 0x1BB378u) {
        ctx->pc = 0x1BB37Cu;
        goto label_1bb37c;
    }
    ctx->pc = 0x1BB374u;
    {
        const bool branch_taken_0x1bb374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb374) {
            ctx->pc = 0x1BB41Cu;
            goto label_1bb41c;
        }
    }
    ctx->pc = 0x1BB37Cu;
label_1bb37c:
    // 0x1bb37c: 0xc0b8554  jal         func_2E1550
label_1bb380:
    if (ctx->pc == 0x1BB380u) {
        ctx->pc = 0x1BB380u;
            // 0x1bb380: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->pc = 0x1BB384u;
        goto label_1bb384;
    }
    ctx->pc = 0x1BB37Cu;
    SET_GPR_U32(ctx, 31, 0x1BB384u);
    ctx->pc = 0x1BB380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB37Cu;
            // 0x1bb380: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1550u;
    if (runtime->hasFunction(0x2E1550u)) {
        auto targetFn = runtime->lookupFunction(0x2E1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB384u; }
        if (ctx->pc != 0x1BB384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllClearEffSpt__16CEffectScriptManFv_0x2e1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB384u; }
        if (ctx->pc != 0x1BB384u) { return; }
    }
    ctx->pc = 0x1BB384u;
label_1bb384:
    // 0x1bb384: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1bb384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1bb388:
    // 0x1bb388: 0xc04e674  jal         func_1399D0
label_1bb38c:
    if (ctx->pc == 0x1BB38Cu) {
        ctx->pc = 0x1BB38Cu;
            // 0x1bb38c: 0x2484f590  addiu       $a0, $a0, -0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
        ctx->pc = 0x1BB390u;
        goto label_1bb390;
    }
    ctx->pc = 0x1BB388u;
    SET_GPR_U32(ctx, 31, 0x1BB390u);
    ctx->pc = 0x1BB38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB388u;
            // 0x1bb38c: 0x2484f590  addiu       $a0, $a0, -0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1399D0u;
    if (runtime->hasFunction(0x1399D0u)) {
        auto targetFn = runtime->lookupFunction(0x1399D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB390u; }
        if (ctx->pc != 0x1BB390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearHeapMem__9mgCMemoryFv_0x1399d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB390u; }
        if (ctx->pc != 0x1BB390u) { return; }
    }
    ctx->pc = 0x1BB390u;
label_1bb390:
    // 0x1bb390: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1bb390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb394:
    // 0x1bb394: 0xc076bb0  jal         func_1DAEC0
label_1bb398:
    if (ctx->pc == 0x1BB398u) {
        ctx->pc = 0x1BB398u;
            // 0x1bb398: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1BB39Cu;
        goto label_1bb39c;
    }
    ctx->pc = 0x1BB394u;
    SET_GPR_U32(ctx, 31, 0x1BB39Cu);
    ctx->pc = 0x1BB398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB394u;
            // 0x1bb398: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAEC0u;
    if (runtime->hasFunction(0x1DAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB39Cu; }
        if (ctx->pc != 0x1BB39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterManFP6CScene_0x1daec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB39Cu; }
        if (ctx->pc != 0x1BB39Cu) { return; }
    }
    ctx->pc = 0x1BB39Cu;
label_1bb39c:
    // 0x1bb39c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb3a0:
    // 0x1bb3a0: 0xc0a0c9c  jal         func_283270
label_1bb3a4:
    if (ctx->pc == 0x1BB3A4u) {
        ctx->pc = 0x1BB3A4u;
            // 0x1bb3a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BB3A8u;
        goto label_1bb3a8;
    }
    ctx->pc = 0x1BB3A0u;
    SET_GPR_U32(ctx, 31, 0x1BB3A8u);
    ctx->pc = 0x1BB3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3A0u;
            // 0x1bb3a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3A8u; }
        if (ctx->pc != 0x1BB3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3A8u; }
        if (ctx->pc != 0x1BB3A8u) { return; }
    }
    ctx->pc = 0x1BB3A8u;
label_1bb3a8:
    // 0x1bb3a8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb3ac:
    // 0x1bb3ac: 0xc0a0c74  jal         func_2831D0
label_1bb3b0:
    if (ctx->pc == 0x1BB3B0u) {
        ctx->pc = 0x1BB3B0u;
            // 0x1bb3b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BB3B4u;
        goto label_1bb3b4;
    }
    ctx->pc = 0x1BB3ACu;
    SET_GPR_U32(ctx, 31, 0x1BB3B4u);
    ctx->pc = 0x1BB3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3ACu;
            // 0x1bb3b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3B4u; }
        if (ctx->pc != 0x1BB3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3B4u; }
        if (ctx->pc != 0x1BB3B4u) { return; }
    }
    ctx->pc = 0x1BB3B4u;
label_1bb3b4:
    // 0x1bb3b4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb3b8:
    // 0x1bb3b8: 0xc0a0c64  jal         func_283190
label_1bb3bc:
    if (ctx->pc == 0x1BB3BCu) {
        ctx->pc = 0x1BB3BCu;
            // 0x1bb3bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BB3C0u;
        goto label_1bb3c0;
    }
    ctx->pc = 0x1BB3B8u;
    SET_GPR_U32(ctx, 31, 0x1BB3C0u);
    ctx->pc = 0x1BB3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3B8u;
            // 0x1bb3bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3C0u; }
        if (ctx->pc != 0x1BB3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3C0u; }
        if (ctx->pc != 0x1BB3C0u) { return; }
    }
    ctx->pc = 0x1BB3C0u;
label_1bb3c0:
    // 0x1bb3c0: 0x8f928db8  lw          $s2, -0x7248($gp)
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1bb3c4:
    // 0x1bb3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bb3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3c8:
    // 0x1bb3c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bb3c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3cc:
    // 0x1bb3cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3d0:
    // 0x1bb3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3d4:
    // 0x1bb3d4: 0xc04e704  jal         func_139C10
label_1bb3d8:
    if (ctx->pc == 0x1BB3D8u) {
        ctx->pc = 0x1BB3D8u;
            // 0x1bb3d8: 0x24050fa0  addiu       $a1, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->pc = 0x1BB3DCu;
        goto label_1bb3dc;
    }
    ctx->pc = 0x1BB3D4u;
    SET_GPR_U32(ctx, 31, 0x1BB3DCu);
    ctx->pc = 0x1BB3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3D4u;
            // 0x1bb3d8: 0x24050fa0  addiu       $a1, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3DCu; }
        if (ctx->pc != 0x1BB3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3DCu; }
        if (ctx->pc != 0x1BB3DCu) { return; }
    }
    ctx->pc = 0x1BB3DCu;
label_1bb3dc:
    // 0x1bb3dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bb3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb3e0:
    // 0x1bb3e0: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x1bb3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_1bb3e4:
    // 0x1bb3e4: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1bb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1bb3e8:
    // 0x1bb3e8: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x1bb3e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1bb3ec:
    // 0x1bb3ec: 0xc04e79c  jal         func_139E70
label_1bb3f0:
    if (ctx->pc == 0x1BB3F0u) {
        ctx->pc = 0x1BB3F0u;
            // 0x1bb3f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3F4u;
        goto label_1bb3f4;
    }
    ctx->pc = 0x1BB3ECu;
    SET_GPR_U32(ctx, 31, 0x1BB3F4u);
    ctx->pc = 0x1BB3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3ECu;
            // 0x1bb3f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3F4u; }
        if (ctx->pc != 0x1BB3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3F4u; }
        if (ctx->pc != 0x1BB3F4u) { return; }
    }
    ctx->pc = 0x1BB3F4u;
label_1bb3f4:
    // 0x1bb3f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bb3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bb3f8:
    // 0x1bb3f8: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x1bb3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_1bb3fc:
    // 0x1bb3fc: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x1bb3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
label_1bb400:
    // 0x1bb400: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x1bb400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1bb404:
    // 0x1bb404: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1bb408:
    if (ctx->pc == 0x1BB408u) {
        ctx->pc = 0x1BB408u;
            // 0x1bb408: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x1BB40Cu;
        goto label_1bb40c;
    }
    ctx->pc = 0x1BB404u;
    {
        const bool branch_taken_0x1bb404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB404u;
            // 0x1bb408: 0xae80001c  sw          $zero, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb404) {
            ctx->pc = 0x1BB3D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bb3d0;
        }
    }
    ctx->pc = 0x1BB40Cu;
label_1bb40c:
    // 0x1bb40c: 0xc06334c  jal         func_18CD30
label_1bb410:
    if (ctx->pc == 0x1BB410u) {
        ctx->pc = 0x1BB410u;
            // 0x1bb410: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1BB414u;
        goto label_1bb414;
    }
    ctx->pc = 0x1BB40Cu;
    SET_GPR_U32(ctx, 31, 0x1BB414u);
    ctx->pc = 0x1BB410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB40Cu;
            // 0x1bb410: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB414u; }
        if (ctx->pc != 0x1BB414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB414u; }
        if (ctx->pc != 0x1BB414u) { return; }
    }
    ctx->pc = 0x1BB414u;
label_1bb414:
    // 0x1bb414: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bb418:
    if (ctx->pc == 0x1BB418u) {
        ctx->pc = 0x1BB418u;
            // 0x1bb418: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1BB41Cu;
        goto label_1bb41c;
    }
    ctx->pc = 0x1BB414u;
    {
        const bool branch_taken_0x1bb414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB414u;
            // 0x1bb418: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb414) {
            ctx->pc = 0x1BB430u;
            goto label_1bb430;
        }
    }
    ctx->pc = 0x1BB41Cu;
label_1bb41c:
    // 0x1bb41c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb420:
    // 0x1bb420: 0xc0a0c64  jal         func_283190
label_1bb424:
    if (ctx->pc == 0x1BB424u) {
        ctx->pc = 0x1BB424u;
            // 0x1bb424: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BB428u;
        goto label_1bb428;
    }
    ctx->pc = 0x1BB420u;
    SET_GPR_U32(ctx, 31, 0x1BB428u);
    ctx->pc = 0x1BB424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB420u;
            // 0x1bb424: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB428u; }
        if (ctx->pc != 0x1BB428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB428u; }
        if (ctx->pc != 0x1BB428u) { return; }
    }
    ctx->pc = 0x1BB428u;
label_1bb428:
    // 0x1bb428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bb428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb42c:
    // 0x1bb42c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1bb42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1bb430:
    // 0x1bb430: 0xc076db0  jal         func_1DB6C0
label_1bb434:
    if (ctx->pc == 0x1BB434u) {
        ctx->pc = 0x1BB434u;
            // 0x1bb434: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB438u;
        goto label_1bb438;
    }
    ctx->pc = 0x1BB430u;
    SET_GPR_U32(ctx, 31, 0x1BB438u);
    ctx->pc = 0x1BB434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB430u;
            // 0x1bb434: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB6C0u;
    if (runtime->hasFunction(0x1DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB438u; }
        if (ctx->pc != 0x1BB438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseIndex__11CMonsterManFi_0x1db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB438u; }
        if (ctx->pc != 0x1BB438u) { return; }
    }
    ctx->pc = 0x1BB438u;
label_1bb438:
    // 0x1bb438: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1bb43c:
    if (ctx->pc == 0x1BB43Cu) {
        ctx->pc = 0x1BB440u;
        goto label_1bb440;
    }
    ctx->pc = 0x1BB438u;
    {
        const bool branch_taken_0x1bb438 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bb438) {
            ctx->pc = 0x1BB450u;
            goto label_1bb450;
        }
    }
    ctx->pc = 0x1BB440u;
label_1bb440:
    // 0x1bb440: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1bb440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1bb444:
    // 0x1bb444: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bb444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb448:
    // 0x1bb448: 0xc076e14  jal         func_1DB850
label_1bb44c:
    if (ctx->pc == 0x1BB44Cu) {
        ctx->pc = 0x1BB44Cu;
            // 0x1bb44c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB450u;
        goto label_1bb450;
    }
    ctx->pc = 0x1BB448u;
    SET_GPR_U32(ctx, 31, 0x1BB450u);
    ctx->pc = 0x1BB44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB448u;
            // 0x1bb44c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB850u;
    if (runtime->hasFunction(0x1DB850u)) {
        auto targetFn = runtime->lookupFunction(0x1DB850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB450u; }
        if (ctx->pc != 0x1BB450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryRefer__11CMonsterManFiP9mgCMemory_0x1db850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB450u; }
        if (ctx->pc != 0x1BB450u) { return; }
    }
    ctx->pc = 0x1BB450u;
label_1bb450:
    // 0x1bb450: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x1bb450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1bb454:
    // 0x1bb454: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bb454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1bb458:
    // 0x1bb458: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1bb458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1bb45c:
    // 0x1bb45c: 0x320f809  jalr        $t9
label_1bb460:
    if (ctx->pc == 0x1BB460u) {
        ctx->pc = 0x1BB460u;
            // 0x1bb460: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1BB464u;
        goto label_1bb464;
    }
    ctx->pc = 0x1BB45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1BB464u);
        ctx->pc = 0x1BB460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB45Cu;
            // 0x1bb460: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BB464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BB464u; }
            if (ctx->pc != 0x1BB464u) { return; }
        }
        }
    }
    ctx->pc = 0x1BB464u;
label_1bb464:
    // 0x1bb464: 0xc04a0ea  jal         func_1283A8
label_1bb468:
    if (ctx->pc == 0x1BB468u) {
        ctx->pc = 0x1BB46Cu;
        goto label_1bb46c;
    }
    ctx->pc = 0x1BB464u;
    SET_GPR_U32(ctx, 31, 0x1BB46Cu);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB46Cu; }
        if (ctx->pc != 0x1BB46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB46Cu; }
        if (ctx->pc != 0x1BB46Cu) { return; }
    }
    ctx->pc = 0x1BB46Cu;
label_1bb46c:
    // 0x1bb46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb470:
    // 0x1bb470: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1bb470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1bb474:
    // 0x1bb474: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bb478:
    // 0x1bb478: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1bb478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1bb47c:
    // 0x1bb47c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bb47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bb480:
    // 0x1bb480: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1bb480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb484:
    // 0x1bb484: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1bb484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1bb488:
    // 0x1bb488: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1bb48c:
    // 0x1bb48c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bb48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bb490:
    // 0x1bb490: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bb490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1bb494:
    // 0x1bb494: 0x0  nop
    ctx->pc = 0x1bb494u;
    // NOP
label_1bb498:
    // 0x1bb498: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1bb498u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_1bb49c:
    // 0x1bb49c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1bb49cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1bb4a0:
    // 0x1bb4a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bb4a4:
    // 0x1bb4a4: 0xc04a0ea  jal         func_1283A8
label_1bb4a8:
    if (ctx->pc == 0x1BB4A8u) {
        ctx->pc = 0x1BB4A8u;
            // 0x1bb4a8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->pc = 0x1BB4ACu;
        goto label_1bb4ac;
    }
    ctx->pc = 0x1BB4A4u;
    SET_GPR_U32(ctx, 31, 0x1BB4ACu);
    ctx->pc = 0x1BB4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4A4u;
            // 0x1bb4a8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4ACu; }
        if (ctx->pc != 0x1BB4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4ACu; }
        if (ctx->pc != 0x1BB4ACu) { return; }
    }
    ctx->pc = 0x1BB4ACu;
label_1bb4ac:
    // 0x1bb4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bb4b0:
    // 0x1bb4b0: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x1bb4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
label_1bb4b4:
    // 0x1bb4b4: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1bb4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_1bb4b8:
    // 0x1bb4b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1bb4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_1bb4bc:
    // 0x1bb4bc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1bb4bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1bb4c0:
    // 0x1bb4c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1bb4c4:
    // 0x1bb4c4: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1bb4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1bb4c8:
    // 0x1bb4c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bb4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bb4cc:
    // 0x1bb4cc: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1bb4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1bb4d0:
    // 0x1bb4d0: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1bb4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_1bb4d4:
    // 0x1bb4d4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1bb4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_1bb4d8:
    // 0x1bb4d8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1bb4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_1bb4dc:
    // 0x1bb4dc: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1bb4dcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bb4e0:
    // 0x1bb4e0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1bb4e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bb4e4:
    // 0x1bb4e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1bb4e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1bb4e8:
    // 0x1bb4e8: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1bb4e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1bb4ec:
    // 0x1bb4ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bb4ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bb4f0:
    // 0x1bb4f0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1bb4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb4f4:
    // 0x1bb4f4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1bb4f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1bb4f8:
    // 0x1bb4f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bb4fc:
    // 0x1bb4fc: 0xc076db0  jal         func_1DB6C0
label_1bb500:
    if (ctx->pc == 0x1BB500u) {
        ctx->pc = 0x1BB500u;
            // 0x1bb500: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1BB504u;
        goto label_1bb504;
    }
    ctx->pc = 0x1BB4FCu;
    SET_GPR_U32(ctx, 31, 0x1BB504u);
    ctx->pc = 0x1BB500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4FCu;
            // 0x1bb500: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB6C0u;
    if (runtime->hasFunction(0x1DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB504u; }
        if (ctx->pc != 0x1BB504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseIndex__11CMonsterManFi_0x1db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB504u; }
        if (ctx->pc != 0x1BB504u) { return; }
    }
    ctx->pc = 0x1BB504u;
label_1bb504:
    // 0x1bb504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bb504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb508:
    // 0x1bb508: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1bb508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bb50c:
    // 0x1bb50c: 0x10a80005  beq         $a1, $t0, . + 4 + (0x5 << 2)
label_1bb510:
    if (ctx->pc == 0x1BB510u) {
        ctx->pc = 0x1BB514u;
        goto label_1bb514;
    }
    ctx->pc = 0x1BB50Cu;
    {
        const bool branch_taken_0x1bb50c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x1bb50c) {
            ctx->pc = 0x1BB524u;
            goto label_1bb524;
        }
    }
    ctx->pc = 0x1BB514u;
label_1bb514:
    // 0x1bb514: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1bb514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1bb518:
    // 0x1bb518: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1bb518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1bb51c:
    // 0x1bb51c: 0xc076eec  jal         func_1DBBB0
label_1bb520:
    if (ctx->pc == 0x1BB520u) {
        ctx->pc = 0x1BB520u;
            // 0x1bb520: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1BB524u;
        goto label_1bb524;
    }
    ctx->pc = 0x1BB51Cu;
    SET_GPR_U32(ctx, 31, 0x1BB524u);
    ctx->pc = 0x1BB520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB51Cu;
            // 0x1bb520: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBB0u;
    if (runtime->hasFunction(0x1DBBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB524u; }
        if (ctx->pc != 0x1BB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveMonster__11CMonsterManFiPfPfi_0x1dbbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB524u; }
        if (ctx->pc != 0x1BB524u) { return; }
    }
    ctx->pc = 0x1BB524u;
label_1bb524:
    // 0x1bb524: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bb524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bb528:
    // 0x1bb528: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bb528u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bb52c:
    // 0x1bb52c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bb52cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bb530:
    // 0x1bb530: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bb530u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bb534:
    // 0x1bb534: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb538:
    // 0x1bb538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb53c:
    // 0x1bb53c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb540:
    // 0x1bb540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb544:
    // 0x1bb544: 0x3e00008  jr          $ra
label_1bb548:
    if (ctx->pc == 0x1BB548u) {
        ctx->pc = 0x1BB548u;
            // 0x1bb548: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1BB54Cu;
        goto label_fallthrough_0x1bb544;
    }
    ctx->pc = 0x1BB544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB544u;
            // 0x1bb548: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1bb544:
    ctx->pc = 0x1BB54Cu;
}
