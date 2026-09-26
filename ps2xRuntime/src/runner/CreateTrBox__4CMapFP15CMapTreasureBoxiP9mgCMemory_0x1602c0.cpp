#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateTrBox__4CMapFP15CMapTreasureBoxiP9mgCMemory
// Address: 0x1602c0 - 0x160560
void CreateTrBox__4CMapFP15CMapTreasureBoxiP9mgCMemory_0x1602c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateTrBox__4CMapFP15CMapTreasureBoxiP9mgCMemory_0x1602c0");
#endif

    switch (ctx->pc) {
        case 0x1602c0u: goto label_1602c0;
        case 0x1602c4u: goto label_1602c4;
        case 0x1602c8u: goto label_1602c8;
        case 0x1602ccu: goto label_1602cc;
        case 0x1602d0u: goto label_1602d0;
        case 0x1602d4u: goto label_1602d4;
        case 0x1602d8u: goto label_1602d8;
        case 0x1602dcu: goto label_1602dc;
        case 0x1602e0u: goto label_1602e0;
        case 0x1602e4u: goto label_1602e4;
        case 0x1602e8u: goto label_1602e8;
        case 0x1602ecu: goto label_1602ec;
        case 0x1602f0u: goto label_1602f0;
        case 0x1602f4u: goto label_1602f4;
        case 0x1602f8u: goto label_1602f8;
        case 0x1602fcu: goto label_1602fc;
        case 0x160300u: goto label_160300;
        case 0x160304u: goto label_160304;
        case 0x160308u: goto label_160308;
        case 0x16030cu: goto label_16030c;
        case 0x160310u: goto label_160310;
        case 0x160314u: goto label_160314;
        case 0x160318u: goto label_160318;
        case 0x16031cu: goto label_16031c;
        case 0x160320u: goto label_160320;
        case 0x160324u: goto label_160324;
        case 0x160328u: goto label_160328;
        case 0x16032cu: goto label_16032c;
        case 0x160330u: goto label_160330;
        case 0x160334u: goto label_160334;
        case 0x160338u: goto label_160338;
        case 0x16033cu: goto label_16033c;
        case 0x160340u: goto label_160340;
        case 0x160344u: goto label_160344;
        case 0x160348u: goto label_160348;
        case 0x16034cu: goto label_16034c;
        case 0x160350u: goto label_160350;
        case 0x160354u: goto label_160354;
        case 0x160358u: goto label_160358;
        case 0x16035cu: goto label_16035c;
        case 0x160360u: goto label_160360;
        case 0x160364u: goto label_160364;
        case 0x160368u: goto label_160368;
        case 0x16036cu: goto label_16036c;
        case 0x160370u: goto label_160370;
        case 0x160374u: goto label_160374;
        case 0x160378u: goto label_160378;
        case 0x16037cu: goto label_16037c;
        case 0x160380u: goto label_160380;
        case 0x160384u: goto label_160384;
        case 0x160388u: goto label_160388;
        case 0x16038cu: goto label_16038c;
        case 0x160390u: goto label_160390;
        case 0x160394u: goto label_160394;
        case 0x160398u: goto label_160398;
        case 0x16039cu: goto label_16039c;
        case 0x1603a0u: goto label_1603a0;
        case 0x1603a4u: goto label_1603a4;
        case 0x1603a8u: goto label_1603a8;
        case 0x1603acu: goto label_1603ac;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603b4u: goto label_1603b4;
        case 0x1603b8u: goto label_1603b8;
        case 0x1603bcu: goto label_1603bc;
        case 0x1603c0u: goto label_1603c0;
        case 0x1603c4u: goto label_1603c4;
        case 0x1603c8u: goto label_1603c8;
        case 0x1603ccu: goto label_1603cc;
        case 0x1603d0u: goto label_1603d0;
        case 0x1603d4u: goto label_1603d4;
        case 0x1603d8u: goto label_1603d8;
        case 0x1603dcu: goto label_1603dc;
        case 0x1603e0u: goto label_1603e0;
        case 0x1603e4u: goto label_1603e4;
        case 0x1603e8u: goto label_1603e8;
        case 0x1603ecu: goto label_1603ec;
        case 0x1603f0u: goto label_1603f0;
        case 0x1603f4u: goto label_1603f4;
        case 0x1603f8u: goto label_1603f8;
        case 0x1603fcu: goto label_1603fc;
        case 0x160400u: goto label_160400;
        case 0x160404u: goto label_160404;
        case 0x160408u: goto label_160408;
        case 0x16040cu: goto label_16040c;
        case 0x160410u: goto label_160410;
        case 0x160414u: goto label_160414;
        case 0x160418u: goto label_160418;
        case 0x16041cu: goto label_16041c;
        case 0x160420u: goto label_160420;
        case 0x160424u: goto label_160424;
        case 0x160428u: goto label_160428;
        case 0x16042cu: goto label_16042c;
        case 0x160430u: goto label_160430;
        case 0x160434u: goto label_160434;
        case 0x160438u: goto label_160438;
        case 0x16043cu: goto label_16043c;
        case 0x160440u: goto label_160440;
        case 0x160444u: goto label_160444;
        case 0x160448u: goto label_160448;
        case 0x16044cu: goto label_16044c;
        case 0x160450u: goto label_160450;
        case 0x160454u: goto label_160454;
        case 0x160458u: goto label_160458;
        case 0x16045cu: goto label_16045c;
        case 0x160460u: goto label_160460;
        case 0x160464u: goto label_160464;
        case 0x160468u: goto label_160468;
        case 0x16046cu: goto label_16046c;
        case 0x160470u: goto label_160470;
        case 0x160474u: goto label_160474;
        case 0x160478u: goto label_160478;
        case 0x16047cu: goto label_16047c;
        case 0x160480u: goto label_160480;
        case 0x160484u: goto label_160484;
        case 0x160488u: goto label_160488;
        case 0x16048cu: goto label_16048c;
        case 0x160490u: goto label_160490;
        case 0x160494u: goto label_160494;
        case 0x160498u: goto label_160498;
        case 0x16049cu: goto label_16049c;
        case 0x1604a0u: goto label_1604a0;
        case 0x1604a4u: goto label_1604a4;
        case 0x1604a8u: goto label_1604a8;
        case 0x1604acu: goto label_1604ac;
        case 0x1604b0u: goto label_1604b0;
        case 0x1604b4u: goto label_1604b4;
        case 0x1604b8u: goto label_1604b8;
        case 0x1604bcu: goto label_1604bc;
        case 0x1604c0u: goto label_1604c0;
        case 0x1604c4u: goto label_1604c4;
        case 0x1604c8u: goto label_1604c8;
        case 0x1604ccu: goto label_1604cc;
        case 0x1604d0u: goto label_1604d0;
        case 0x1604d4u: goto label_1604d4;
        case 0x1604d8u: goto label_1604d8;
        case 0x1604dcu: goto label_1604dc;
        case 0x1604e0u: goto label_1604e0;
        case 0x1604e4u: goto label_1604e4;
        case 0x1604e8u: goto label_1604e8;
        case 0x1604ecu: goto label_1604ec;
        case 0x1604f0u: goto label_1604f0;
        case 0x1604f4u: goto label_1604f4;
        case 0x1604f8u: goto label_1604f8;
        case 0x1604fcu: goto label_1604fc;
        case 0x160500u: goto label_160500;
        case 0x160504u: goto label_160504;
        case 0x160508u: goto label_160508;
        case 0x16050cu: goto label_16050c;
        case 0x160510u: goto label_160510;
        case 0x160514u: goto label_160514;
        case 0x160518u: goto label_160518;
        case 0x16051cu: goto label_16051c;
        case 0x160520u: goto label_160520;
        case 0x160524u: goto label_160524;
        case 0x160528u: goto label_160528;
        case 0x16052cu: goto label_16052c;
        case 0x160530u: goto label_160530;
        case 0x160534u: goto label_160534;
        case 0x160538u: goto label_160538;
        case 0x16053cu: goto label_16053c;
        case 0x160540u: goto label_160540;
        case 0x160544u: goto label_160544;
        case 0x160548u: goto label_160548;
        case 0x16054cu: goto label_16054c;
        case 0x160550u: goto label_160550;
        case 0x160554u: goto label_160554;
        case 0x160558u: goto label_160558;
        case 0x16055cu: goto label_16055c;
        default: break;
    }

    ctx->pc = 0x1602c0u;

label_1602c0:
    // 0x1602c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1602c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1602c4:
    // 0x1602c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1602c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1602c8:
    // 0x1602c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1602c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1602cc:
    // 0x1602cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1602ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1602d0:
    // 0x1602d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1602d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1602d4:
    // 0x1602d4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1602d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1602d8:
    // 0x1602d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1602d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1602dc:
    // 0x1602dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1602dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1602e0:
    // 0x1602e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1602e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1602e4:
    // 0x1602e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1602e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1602e8:
    // 0x1602e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1602e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1602ec:
    // 0x1602ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1602ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1602f0:
    // 0x1602f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1602f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1602f4:
    // 0x1602f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1602f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1602f8:
    // 0x1602f8: 0x1220008d  beqz        $s1, . + 4 + (0x8D << 2)
label_1602fc:
    if (ctx->pc == 0x1602FCu) {
        ctx->pc = 0x1602FCu;
            // 0x1602fc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160300u;
        goto label_160300;
    }
    ctx->pc = 0x1602F8u;
    {
        const bool branch_taken_0x1602f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1602F8u;
            // 0x1602fc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602f8) {
            ctx->pc = 0x160530u;
            goto label_160530;
        }
    }
    ctx->pc = 0x160300u;
label_160300:
    // 0x160300: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x160300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_160304:
    // 0x160304: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_160308:
    if (ctx->pc == 0x160308u) {
        ctx->pc = 0x16030Cu;
        goto label_16030c;
    }
    ctx->pc = 0x160304u;
    {
        const bool branch_taken_0x160304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x160304) {
            ctx->pc = 0x160314u;
            goto label_160314;
        }
    }
    ctx->pc = 0x16030Cu;
label_16030c:
    // 0x16030c: 0x10000089  b           . + 4 + (0x89 << 2)
label_160310:
    if (ctx->pc == 0x160310u) {
        ctx->pc = 0x160310u;
            // 0x160310: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x160314u;
        goto label_160314;
    }
    ctx->pc = 0x16030Cu;
    {
        const bool branch_taken_0x16030c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16030Cu;
            // 0x160310: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16030c) {
            ctx->pc = 0x160534u;
            goto label_160534;
        }
    }
    ctx->pc = 0x160314u;
label_160314:
    // 0x160314: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_160318:
    // 0x160318: 0xc04ddb4  jal         func_1376D0
label_16031c:
    if (ctx->pc == 0x16031Cu) {
        ctx->pc = 0x16031Cu;
            // 0x16031c: 0x24a52d20  addiu       $a1, $a1, 0x2D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11552));
        ctx->pc = 0x160320u;
        goto label_160320;
    }
    ctx->pc = 0x160318u;
    SET_GPR_U32(ctx, 31, 0x160320u);
    ctx->pc = 0x16031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160318u;
            // 0x16031c: 0x24a52d20  addiu       $a1, $a1, 0x2D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160320u; }
        if (ctx->pc != 0x160320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160320u; }
        if (ctx->pc != 0x160320u) { return; }
    }
    ctx->pc = 0x160320u;
label_160320:
    // 0x160320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_160324:
    if (ctx->pc == 0x160324u) {
        ctx->pc = 0x160328u;
        goto label_160328;
    }
    ctx->pc = 0x160320u;
    {
        const bool branch_taken_0x160320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160320) {
            ctx->pc = 0x160334u;
            goto label_160334;
        }
    }
    ctx->pc = 0x160328u;
label_160328:
    // 0x160328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16032c:
    // 0x16032c: 0xc04de4c  jal         func_137930
label_160330:
    if (ctx->pc == 0x160330u) {
        ctx->pc = 0x160330u;
            // 0x160330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x160334u;
        goto label_160334;
    }
    ctx->pc = 0x16032Cu;
    SET_GPR_U32(ctx, 31, 0x160334u);
    ctx->pc = 0x160330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16032Cu;
            // 0x160330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160334u; }
        if (ctx->pc != 0x160334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160334u; }
        if (ctx->pc != 0x160334u) { return; }
    }
    ctx->pc = 0x160334u;
label_160334:
    // 0x160334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160338:
    // 0x160338: 0x26a40cb0  addiu       $a0, $s5, 0xCB0
    ctx->pc = 0x160338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3248));
label_16033c:
    // 0x16033c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x16033cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_160340:
    // 0x160340: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x160340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_160344:
    // 0x160344: 0xaeb00c94  sw          $s0, 0xC94($s5)
    ctx->pc = 0x160344u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3220), GPR_U32(ctx, 16));
label_160348:
    // 0x160348: 0xc0a75e0  jal         func_29D780
label_16034c:
    if (ctx->pc == 0x16034Cu) {
        ctx->pc = 0x16034Cu;
            // 0x16034c: 0xaeb10ca0  sw          $s1, 0xCA0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3232), GPR_U32(ctx, 17));
        ctx->pc = 0x160350u;
        goto label_160350;
    }
    ctx->pc = 0x160348u;
    SET_GPR_U32(ctx, 31, 0x160350u);
    ctx->pc = 0x16034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160348u;
            // 0x16034c: 0xaeb10ca0  sw          $s1, 0xCA0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3232), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D780u;
    if (runtime->hasFunction(0x29D780u)) {
        auto targetFn = runtime->lookupFunction(0x29D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160350u; }
        if (ctx->pc != 0x160350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventNum__14CFuncPointMngrFi_0x29d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160350u; }
        if (ctx->pc != 0x160350u) { return; }
    }
    ctx->pc = 0x160350u;
label_160350:
    // 0x160350: 0xaea20c98  sw          $v0, 0xC98($s5)
    ctx->pc = 0x160350u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3224), GPR_U32(ctx, 2));
label_160354:
    // 0x160354: 0x8eb0032c  lw          $s0, 0x32C($s5)
    ctx->pc = 0x160354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 812)));
label_160358:
    // 0x160358: 0x1000000f  b           . + 4 + (0xF << 2)
label_16035c:
    if (ctx->pc == 0x16035Cu) {
        ctx->pc = 0x16035Cu;
            // 0x16035c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160360u;
        goto label_160360;
    }
    ctx->pc = 0x160358u;
    {
        const bool branch_taken_0x160358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160358u;
            // 0x16035c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160358) {
            ctx->pc = 0x160398u;
            goto label_160398;
        }
    }
    ctx->pc = 0x160360u;
label_160360:
    // 0x160360: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x160360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_160364:
    // 0x160364: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x160364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_160368:
    // 0x160368: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x160368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16036c:
    // 0x16036c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_160370:
    if (ctx->pc == 0x160370u) {
        ctx->pc = 0x160374u;
        goto label_160374;
    }
    ctx->pc = 0x16036Cu;
    {
        const bool branch_taken_0x16036c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16036c) {
            ctx->pc = 0x16038Cu;
            goto label_16038c;
        }
    }
    ctx->pc = 0x160374u;
label_160374:
    // 0x160374: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x160374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_160378:
    // 0x160378: 0xc0a75e0  jal         func_29D780
label_16037c:
    if (ctx->pc == 0x16037Cu) {
        ctx->pc = 0x16037Cu;
            // 0x16037c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x160380u;
        goto label_160380;
    }
    ctx->pc = 0x160378u;
    SET_GPR_U32(ctx, 31, 0x160380u);
    ctx->pc = 0x16037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160378u;
            // 0x16037c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D780u;
    if (runtime->hasFunction(0x29D780u)) {
        auto targetFn = runtime->lookupFunction(0x29D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160380u; }
        if (ctx->pc != 0x160380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventNum__14CFuncPointMngrFi_0x29d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160380u; }
        if (ctx->pc != 0x160380u) { return; }
    }
    ctx->pc = 0x160380u;
label_160380:
    // 0x160380: 0x8ea30c98  lw          $v1, 0xC98($s5)
    ctx->pc = 0x160380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3224)));
label_160384:
    // 0x160384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_160388:
    // 0x160388: 0xaea20c98  sw          $v0, 0xC98($s5)
    ctx->pc = 0x160388u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3224), GPR_U32(ctx, 2));
label_16038c:
    // 0x16038c: 0x0  nop
    ctx->pc = 0x16038cu;
    // NOP
label_160390:
    // 0x160390: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_160394:
    // 0x160394: 0x26100310  addiu       $s0, $s0, 0x310
    ctx->pc = 0x160394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_160398:
    // 0x160398: 0x8ea20328  lw          $v0, 0x328($s5)
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_16039c:
    // 0x16039c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x16039cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1603a0:
    // 0x1603a0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1603a4:
    if (ctx->pc == 0x1603A4u) {
        ctx->pc = 0x1603A8u;
        goto label_1603a8;
    }
    ctx->pc = 0x1603A0u;
    {
        const bool branch_taken_0x1603a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1603a0) {
            ctx->pc = 0x160360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_160360;
        }
    }
    ctx->pc = 0x1603A8u;
label_1603a8:
    // 0x1603a8: 0x8eb00c98  lw          $s0, 0xC98($s5)
    ctx->pc = 0x1603a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3224)));
label_1603ac:
    // 0x1603ac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1603acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1603b0:
    // 0x1603b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1603b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1603b4:
    // 0x1603b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1603b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1603b8:
    // 0x1603b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1603b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1603bc:
    // 0x1603bc: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1603c0:
    // 0x1603c0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1603c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1603c4:
    // 0x1603c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1603c8:
    if (ctx->pc == 0x1603C8u) {
        ctx->pc = 0x1603C8u;
            // 0x1603c8: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1603CCu;
        goto label_1603cc;
    }
    ctx->pc = 0x1603C4u;
    {
        const bool branch_taken_0x1603c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1603C4u;
            // 0x1603c8: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603c4) {
            ctx->pc = 0x1603DCu;
            goto label_1603dc;
        }
    }
    ctx->pc = 0x1603CCu;
label_1603cc:
    // 0x1603cc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1603ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1603d0:
    // 0x1603d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1603d4:
    if (ctx->pc == 0x1603D4u) {
        ctx->pc = 0x1603D4u;
            // 0x1603d4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1603D8u;
        goto label_1603d8;
    }
    ctx->pc = 0x1603D0u;
    {
        const bool branch_taken_0x1603d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1603D0u;
            // 0x1603d4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603d0) {
            ctx->pc = 0x1603DCu;
            goto label_1603dc;
        }
    }
    ctx->pc = 0x1603D8u;
label_1603d8:
    // 0x1603d8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1603d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1603dc:
    // 0x1603dc: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1603dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1603e0:
    // 0x1603e0: 0xc04e748  jal         func_139D20
label_1603e4:
    if (ctx->pc == 0x1603E4u) {
        ctx->pc = 0x1603E4u;
            // 0x1603e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1603E8u;
        goto label_1603e8;
    }
    ctx->pc = 0x1603E0u;
    SET_GPR_U32(ctx, 31, 0x1603E8u);
    ctx->pc = 0x1603E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603E0u;
            // 0x1603e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603E8u; }
        if (ctx->pc != 0x1603E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603E8u; }
        if (ctx->pc != 0x1603E8u) { return; }
    }
    ctx->pc = 0x1603E8u;
label_1603e8:
    // 0x1603e8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1603ec:
    // 0x1603ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1603ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1603f0:
    // 0x1603f0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1603f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1603f4:
    // 0x1603f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1603f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1603f8:
    // 0x1603f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1603f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1603fc:
    // 0x1603fc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1603fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_160400:
    // 0x160400: 0xc04e63c  jal         func_1398F0
label_160404:
    if (ctx->pc == 0x160404u) {
        ctx->pc = 0x160404u;
            // 0x160404: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x160408u;
        goto label_160408;
    }
    ctx->pc = 0x160400u;
    SET_GPR_U32(ctx, 31, 0x160408u);
    ctx->pc = 0x160404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160400u;
            // 0x160404: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160408u; }
        if (ctx->pc != 0x160408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160408u; }
        if (ctx->pc != 0x160408u) { return; }
    }
    ctx->pc = 0x160408u;
label_160408:
    // 0x160408: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
label_16040c:
    // 0x16040c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x16040cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160410:
    // 0x160410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160414:
    // 0x160414: 0x24a50560  addiu       $a1, $a1, 0x560
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1376));
label_160418:
    // 0x160418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16041c:
    // 0x16041c: 0xc0400bc  jal         func_1002F0
label_160420:
    if (ctx->pc == 0x160420u) {
        ctx->pc = 0x160420u;
            // 0x160420: 0x24070680  addiu       $a3, $zero, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
        ctx->pc = 0x160424u;
        goto label_160424;
    }
    ctx->pc = 0x16041Cu;
    SET_GPR_U32(ctx, 31, 0x160424u);
    ctx->pc = 0x160420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16041Cu;
            // 0x160420: 0x24070680  addiu       $a3, $zero, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160424u; }
        if (ctx->pc != 0x160424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160424u; }
        if (ctx->pc != 0x160424u) { return; }
    }
    ctx->pc = 0x160424u;
label_160424:
    // 0x160424: 0xaea20c9c  sw          $v0, 0xC9C($s5)
    ctx->pc = 0x160424u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3228), GPR_U32(ctx, 2));
label_160428:
    // 0x160428: 0x8ea30c9c  lw          $v1, 0xC9C($s5)
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3228)));
label_16042c:
    // 0x16042c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_160430:
    if (ctx->pc == 0x160430u) {
        ctx->pc = 0x160434u;
        goto label_160434;
    }
    ctx->pc = 0x16042Cu;
    {
        const bool branch_taken_0x16042c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16042c) {
            ctx->pc = 0x160438u;
            goto label_160438;
        }
    }
    ctx->pc = 0x160434u;
label_160434:
    // 0x160434: 0xaea00c98  sw          $zero, 0xC98($s5)
    ctx->pc = 0x160434u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3224), GPR_U32(ctx, 0));
label_160438:
    // 0x160438: 0x8ebe032c  lw          $fp, 0x32C($s5)
    ctx->pc = 0x160438u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 812)));
label_16043c:
    // 0x16043c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_160440:
    // 0x160440: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x160440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160444:
    // 0x160444: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x160444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160448:
    // 0x160448: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x160448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_16044c:
    // 0x16044c: 0x10000032  b           . + 4 + (0x32 << 2)
label_160450:
    if (ctx->pc == 0x160450u) {
        ctx->pc = 0x160450u;
            // 0x160450: 0x27defcf0  addiu       $fp, $fp, -0x310 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966512));
        ctx->pc = 0x160454u;
        goto label_160454;
    }
    ctx->pc = 0x16044Cu;
    {
        const bool branch_taken_0x16044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16044Cu;
            // 0x160450: 0x27defcf0  addiu       $fp, $fp, -0x310 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16044c) {
            ctx->pc = 0x160518u;
            goto label_160518;
        }
    }
    ctx->pc = 0x160454u;
label_160454:
    // 0x160454: 0x8ea30c98  lw          $v1, 0xC98($s5)
    ctx->pc = 0x160454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3224)));
label_160458:
    // 0x160458: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x160458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16045c:
    // 0x16045c: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_160460:
    if (ctx->pc == 0x160460u) {
        ctx->pc = 0x160464u;
        goto label_160464;
    }
    ctx->pc = 0x16045Cu;
    {
        const bool branch_taken_0x16045c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16045c) {
            ctx->pc = 0x16052Cu;
            goto label_16052c;
        }
    }
    ctx->pc = 0x160464u;
label_160464:
    // 0x160464: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x160464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_160468:
    // 0x160468: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_16046c:
    if (ctx->pc == 0x16046Cu) {
        ctx->pc = 0x16046Cu;
            // 0x16046c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160470u;
        goto label_160470;
    }
    ctx->pc = 0x160468u;
    {
        const bool branch_taken_0x160468 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160468u;
            // 0x16046c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160468) {
            ctx->pc = 0x160478u;
            goto label_160478;
        }
    }
    ctx->pc = 0x160470u;
label_160470:
    // 0x160470: 0x10000003  b           . + 4 + (0x3 << 2)
label_160474:
    if (ctx->pc == 0x160474u) {
        ctx->pc = 0x160474u;
            // 0x160474: 0x26b10cb0  addiu       $s1, $s5, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3248));
        ctx->pc = 0x160478u;
        goto label_160478;
    }
    ctx->pc = 0x160470u;
    {
        const bool branch_taken_0x160470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160470u;
            // 0x160474: 0x26b10cb0  addiu       $s1, $s5, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160470) {
            ctx->pc = 0x160480u;
            goto label_160480;
        }
    }
    ctx->pc = 0x160478u;
label_160478:
    // 0x160478: 0x27d102b0  addiu       $s1, $fp, 0x2B0
    ctx->pc = 0x160478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 688));
label_16047c:
    // 0x16047c: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x16047cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_160480:
    // 0x160480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160484:
    // 0x160484: 0xc0a761c  jal         func_29D870
label_160488:
    if (ctx->pc == 0x160488u) {
        ctx->pc = 0x160488u;
            // 0x160488: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x16048Cu;
        goto label_16048c;
    }
    ctx->pc = 0x160484u;
    SET_GPR_U32(ctx, 31, 0x16048Cu);
    ctx->pc = 0x160488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160484u;
            // 0x160488: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16048Cu; }
        if (ctx->pc != 0x16048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16048Cu; }
        if (ctx->pc != 0x16048Cu) { return; }
    }
    ctx->pc = 0x16048Cu;
label_16048c:
    // 0x16048c: 0xc0a762c  jal         func_29D8B0
label_160490:
    if (ctx->pc == 0x160490u) {
        ctx->pc = 0x160490u;
            // 0x160490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160494u;
        goto label_160494;
    }
    ctx->pc = 0x16048Cu;
    SET_GPR_U32(ctx, 31, 0x160494u);
    ctx->pc = 0x160490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16048Cu;
            // 0x160490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160494u; }
        if (ctx->pc != 0x160494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160494u; }
        if (ctx->pc != 0x160494u) { return; }
    }
    ctx->pc = 0x160494u;
label_160494:
    // 0x160494: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_160498:
    if (ctx->pc == 0x160498u) {
        ctx->pc = 0x160498u;
            // 0x160498: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16049Cu;
        goto label_16049c;
    }
    ctx->pc = 0x160494u;
    {
        const bool branch_taken_0x160494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160494u;
            // 0x160498: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160494) {
            ctx->pc = 0x160500u;
            goto label_160500;
        }
    }
    ctx->pc = 0x16049Cu;
label_16049c:
    // 0x16049c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x16049cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1604a0:
    // 0x1604a0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1604a4:
    // 0x1604a4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1604a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1604a8:
    // 0x1604a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1604ac:
    if (ctx->pc == 0x1604ACu) {
        ctx->pc = 0x1604B0u;
        goto label_1604b0;
    }
    ctx->pc = 0x1604A8u;
    {
        const bool branch_taken_0x1604a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604a8) {
            ctx->pc = 0x1604F0u;
            goto label_1604f0;
        }
    }
    ctx->pc = 0x1604B0u;
label_1604b0:
    // 0x1604b0: 0x8ea40ca0  lw          $a0, 0xCA0($s5)
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3232)));
label_1604b4:
    // 0x1604b4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1604b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1604b8:
    // 0x1604b8: 0x8ea20c9c  lw          $v0, 0xC9C($s5)
    ctx->pc = 0x1604b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3228)));
label_1604bc:
    // 0x1604bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1604bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1604c0:
    // 0x1604c0: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x1604c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_1604c4:
    // 0x1604c4: 0x320f809  jalr        $t9
label_1604c8:
    if (ctx->pc == 0x1604C8u) {
        ctx->pc = 0x1604C8u;
            // 0x1604c8: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1604CCu;
        goto label_1604cc;
    }
    ctx->pc = 0x1604C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1604CCu);
        ctx->pc = 0x1604C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1604C4u;
            // 0x1604c8: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1604CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1604CCu; }
            if (ctx->pc != 0x1604CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1604CCu;
label_1604cc:
    // 0x1604cc: 0x8ea20c9c  lw          $v0, 0xC9C($s5)
    ctx->pc = 0x1604ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3228)));
label_1604d0:
    // 0x1604d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1604d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1604d4:
    // 0x1604d4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1604d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1604d8:
    // 0x1604d8: 0xc05a0bc  jal         func_1682F0
label_1604dc:
    if (ctx->pc == 0x1604DCu) {
        ctx->pc = 0x1604DCu;
            // 0x1604dc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1604E0u;
        goto label_1604e0;
    }
    ctx->pc = 0x1604D8u;
    SET_GPR_U32(ctx, 31, 0x1604E0u);
    ctx->pc = 0x1604DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1604D8u;
            // 0x1604dc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1682F0u;
    if (runtime->hasFunction(0x1682F0u)) {
        auto targetFn = runtime->lookupFunction(0x1682F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604E0u; }
        if (ctx->pc != 0x1604E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignFuncPoint__15CMapTreasureBoxFP10CFuncPointP9CMapParts_0x1682f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604E0u; }
        if (ctx->pc != 0x1604E0u) { return; }
    }
    ctx->pc = 0x1604E0u;
label_1604e0:
    // 0x1604e0: 0xae500028  sw          $s0, 0x28($s2)
    ctx->pc = 0x1604e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 16));
label_1604e4:
    // 0x1604e4: 0x26730680  addiu       $s3, $s3, 0x680
    ctx->pc = 0x1604e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1664));
label_1604e8:
    // 0x1604e8: 0x26940680  addiu       $s4, $s4, 0x680
    ctx->pc = 0x1604e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1664));
label_1604ec:
    // 0x1604ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1604ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1604f0:
    // 0x1604f0: 0xc0a762c  jal         func_29D8B0
label_1604f4:
    if (ctx->pc == 0x1604F4u) {
        ctx->pc = 0x1604F4u;
            // 0x1604f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1604F8u;
        goto label_1604f8;
    }
    ctx->pc = 0x1604F0u;
    SET_GPR_U32(ctx, 31, 0x1604F8u);
    ctx->pc = 0x1604F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1604F0u;
            // 0x1604f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604F8u; }
        if (ctx->pc != 0x1604F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604F8u; }
        if (ctx->pc != 0x1604F8u) { return; }
    }
    ctx->pc = 0x1604F8u;
label_1604f8:
    // 0x1604f8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1604fc:
    if (ctx->pc == 0x1604FCu) {
        ctx->pc = 0x1604FCu;
            // 0x1604fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160500u;
        goto label_160500;
    }
    ctx->pc = 0x1604F8u;
    {
        const bool branch_taken_0x1604f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1604FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1604F8u;
            // 0x1604fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604f8) {
            ctx->pc = 0x1604A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1604a0;
        }
    }
    ctx->pc = 0x160500u;
label_160500:
    // 0x160500: 0xc0a7638  jal         func_29D8E0
label_160504:
    if (ctx->pc == 0x160504u) {
        ctx->pc = 0x160504u;
            // 0x160504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x160508u;
        goto label_160508;
    }
    ctx->pc = 0x160500u;
    SET_GPR_U32(ctx, 31, 0x160508u);
    ctx->pc = 0x160504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160500u;
            // 0x160504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160508u; }
        if (ctx->pc != 0x160508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160508u; }
        if (ctx->pc != 0x160508u) { return; }
    }
    ctx->pc = 0x160508u;
label_160508:
    // 0x160508: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x160508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_16050c:
    // 0x16050c: 0x27de0310  addiu       $fp, $fp, 0x310
    ctx->pc = 0x16050cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 784));
label_160510:
    // 0x160510: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_160514:
    // 0x160514: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x160514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_160518:
    // 0x160518: 0x8ea40328  lw          $a0, 0x328($s5)
    ctx->pc = 0x160518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_16051c:
    // 0x16051c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_160520:
    // 0x160520: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x160520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_160524:
    // 0x160524: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_160528:
    if (ctx->pc == 0x160528u) {
        ctx->pc = 0x16052Cu;
        goto label_16052c;
    }
    ctx->pc = 0x160524u;
    {
        const bool branch_taken_0x160524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160524) {
            ctx->pc = 0x160454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_160454;
        }
    }
    ctx->pc = 0x16052Cu;
label_16052c:
    // 0x16052c: 0x0  nop
    ctx->pc = 0x16052cu;
    // NOP
label_160530:
    // 0x160530: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x160530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_160534:
    // 0x160534: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x160534u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_160538:
    // 0x160538: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x160538u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16053c:
    // 0x16053c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16053cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_160540:
    // 0x160540: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_160544:
    // 0x160544: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_160548:
    // 0x160548: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16054c:
    // 0x16054c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16054cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_160550:
    // 0x160550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160554:
    // 0x160554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_160558:
    // 0x160558: 0x3e00008  jr          $ra
label_16055c:
    if (ctx->pc == 0x16055Cu) {
        ctx->pc = 0x16055Cu;
            // 0x16055c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x160560u;
        goto label_fallthrough_0x160558;
    }
    ctx->pc = 0x160558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16055Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160558u;
            // 0x16055c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x160558:
    ctx->pc = 0x160560u;
}
