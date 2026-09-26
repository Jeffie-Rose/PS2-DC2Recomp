#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSystemParamInfo__Fv
// Address: 0x1bb550 - 0x1bb780
void DrawSystemParamInfo__Fv_0x1bb550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSystemParamInfo__Fv_0x1bb550");
#endif

    switch (ctx->pc) {
        case 0x1bb550u: goto label_1bb550;
        case 0x1bb554u: goto label_1bb554;
        case 0x1bb558u: goto label_1bb558;
        case 0x1bb55cu: goto label_1bb55c;
        case 0x1bb560u: goto label_1bb560;
        case 0x1bb564u: goto label_1bb564;
        case 0x1bb568u: goto label_1bb568;
        case 0x1bb56cu: goto label_1bb56c;
        case 0x1bb570u: goto label_1bb570;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb578u: goto label_1bb578;
        case 0x1bb57cu: goto label_1bb57c;
        case 0x1bb580u: goto label_1bb580;
        case 0x1bb584u: goto label_1bb584;
        case 0x1bb588u: goto label_1bb588;
        case 0x1bb58cu: goto label_1bb58c;
        case 0x1bb590u: goto label_1bb590;
        case 0x1bb594u: goto label_1bb594;
        case 0x1bb598u: goto label_1bb598;
        case 0x1bb59cu: goto label_1bb59c;
        case 0x1bb5a0u: goto label_1bb5a0;
        case 0x1bb5a4u: goto label_1bb5a4;
        case 0x1bb5a8u: goto label_1bb5a8;
        case 0x1bb5acu: goto label_1bb5ac;
        case 0x1bb5b0u: goto label_1bb5b0;
        case 0x1bb5b4u: goto label_1bb5b4;
        case 0x1bb5b8u: goto label_1bb5b8;
        case 0x1bb5bcu: goto label_1bb5bc;
        case 0x1bb5c0u: goto label_1bb5c0;
        case 0x1bb5c4u: goto label_1bb5c4;
        case 0x1bb5c8u: goto label_1bb5c8;
        case 0x1bb5ccu: goto label_1bb5cc;
        case 0x1bb5d0u: goto label_1bb5d0;
        case 0x1bb5d4u: goto label_1bb5d4;
        case 0x1bb5d8u: goto label_1bb5d8;
        case 0x1bb5dcu: goto label_1bb5dc;
        case 0x1bb5e0u: goto label_1bb5e0;
        case 0x1bb5e4u: goto label_1bb5e4;
        case 0x1bb5e8u: goto label_1bb5e8;
        case 0x1bb5ecu: goto label_1bb5ec;
        case 0x1bb5f0u: goto label_1bb5f0;
        case 0x1bb5f4u: goto label_1bb5f4;
        case 0x1bb5f8u: goto label_1bb5f8;
        case 0x1bb5fcu: goto label_1bb5fc;
        case 0x1bb600u: goto label_1bb600;
        case 0x1bb604u: goto label_1bb604;
        case 0x1bb608u: goto label_1bb608;
        case 0x1bb60cu: goto label_1bb60c;
        case 0x1bb610u: goto label_1bb610;
        case 0x1bb614u: goto label_1bb614;
        case 0x1bb618u: goto label_1bb618;
        case 0x1bb61cu: goto label_1bb61c;
        case 0x1bb620u: goto label_1bb620;
        case 0x1bb624u: goto label_1bb624;
        case 0x1bb628u: goto label_1bb628;
        case 0x1bb62cu: goto label_1bb62c;
        case 0x1bb630u: goto label_1bb630;
        case 0x1bb634u: goto label_1bb634;
        case 0x1bb638u: goto label_1bb638;
        case 0x1bb63cu: goto label_1bb63c;
        case 0x1bb640u: goto label_1bb640;
        case 0x1bb644u: goto label_1bb644;
        case 0x1bb648u: goto label_1bb648;
        case 0x1bb64cu: goto label_1bb64c;
        case 0x1bb650u: goto label_1bb650;
        case 0x1bb654u: goto label_1bb654;
        case 0x1bb658u: goto label_1bb658;
        case 0x1bb65cu: goto label_1bb65c;
        case 0x1bb660u: goto label_1bb660;
        case 0x1bb664u: goto label_1bb664;
        case 0x1bb668u: goto label_1bb668;
        case 0x1bb66cu: goto label_1bb66c;
        case 0x1bb670u: goto label_1bb670;
        case 0x1bb674u: goto label_1bb674;
        case 0x1bb678u: goto label_1bb678;
        case 0x1bb67cu: goto label_1bb67c;
        case 0x1bb680u: goto label_1bb680;
        case 0x1bb684u: goto label_1bb684;
        case 0x1bb688u: goto label_1bb688;
        case 0x1bb68cu: goto label_1bb68c;
        case 0x1bb690u: goto label_1bb690;
        case 0x1bb694u: goto label_1bb694;
        case 0x1bb698u: goto label_1bb698;
        case 0x1bb69cu: goto label_1bb69c;
        case 0x1bb6a0u: goto label_1bb6a0;
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6a8u: goto label_1bb6a8;
        case 0x1bb6acu: goto label_1bb6ac;
        case 0x1bb6b0u: goto label_1bb6b0;
        case 0x1bb6b4u: goto label_1bb6b4;
        case 0x1bb6b8u: goto label_1bb6b8;
        case 0x1bb6bcu: goto label_1bb6bc;
        case 0x1bb6c0u: goto label_1bb6c0;
        case 0x1bb6c4u: goto label_1bb6c4;
        case 0x1bb6c8u: goto label_1bb6c8;
        case 0x1bb6ccu: goto label_1bb6cc;
        case 0x1bb6d0u: goto label_1bb6d0;
        case 0x1bb6d4u: goto label_1bb6d4;
        case 0x1bb6d8u: goto label_1bb6d8;
        case 0x1bb6dcu: goto label_1bb6dc;
        case 0x1bb6e0u: goto label_1bb6e0;
        case 0x1bb6e4u: goto label_1bb6e4;
        case 0x1bb6e8u: goto label_1bb6e8;
        case 0x1bb6ecu: goto label_1bb6ec;
        case 0x1bb6f0u: goto label_1bb6f0;
        case 0x1bb6f4u: goto label_1bb6f4;
        case 0x1bb6f8u: goto label_1bb6f8;
        case 0x1bb6fcu: goto label_1bb6fc;
        case 0x1bb700u: goto label_1bb700;
        case 0x1bb704u: goto label_1bb704;
        case 0x1bb708u: goto label_1bb708;
        case 0x1bb70cu: goto label_1bb70c;
        case 0x1bb710u: goto label_1bb710;
        case 0x1bb714u: goto label_1bb714;
        case 0x1bb718u: goto label_1bb718;
        case 0x1bb71cu: goto label_1bb71c;
        case 0x1bb720u: goto label_1bb720;
        case 0x1bb724u: goto label_1bb724;
        case 0x1bb728u: goto label_1bb728;
        case 0x1bb72cu: goto label_1bb72c;
        case 0x1bb730u: goto label_1bb730;
        case 0x1bb734u: goto label_1bb734;
        case 0x1bb738u: goto label_1bb738;
        case 0x1bb73cu: goto label_1bb73c;
        case 0x1bb740u: goto label_1bb740;
        case 0x1bb744u: goto label_1bb744;
        case 0x1bb748u: goto label_1bb748;
        case 0x1bb74cu: goto label_1bb74c;
        case 0x1bb750u: goto label_1bb750;
        case 0x1bb754u: goto label_1bb754;
        case 0x1bb758u: goto label_1bb758;
        case 0x1bb75cu: goto label_1bb75c;
        case 0x1bb760u: goto label_1bb760;
        case 0x1bb764u: goto label_1bb764;
        case 0x1bb768u: goto label_1bb768;
        case 0x1bb76cu: goto label_1bb76c;
        case 0x1bb770u: goto label_1bb770;
        case 0x1bb774u: goto label_1bb774;
        case 0x1bb778u: goto label_1bb778;
        case 0x1bb77cu: goto label_1bb77c;
        default: break;
    }

    ctx->pc = 0x1bb550u;

label_1bb550:
    // 0x1bb550: 0x27bdf680  addiu       $sp, $sp, -0x980
    ctx->pc = 0x1bb550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964864));
label_1bb554:
    // 0x1bb554: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bb554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bb558:
    // 0x1bb558: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bb558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bb55c:
    // 0x1bb55c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bb560:
    // 0x1bb560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb564:
    // 0x1bb564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb568:
    // 0x1bb568: 0xc04d0e8  jal         func_1343A0
label_1bb56c:
    if (ctx->pc == 0x1BB56Cu) {
        ctx->pc = 0x1BB56Cu;
            // 0x1bb56c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1BB570u;
        goto label_1bb570;
    }
    ctx->pc = 0x1BB568u;
    SET_GPR_U32(ctx, 31, 0x1BB570u);
    ctx->pc = 0x1BB56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB568u;
            // 0x1bb56c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB570u; }
        if (ctx->pc != 0x1BB570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB570u; }
        if (ctx->pc != 0x1BB570u) { return; }
    }
    ctx->pc = 0x1BB570u;
label_1bb570:
    // 0x1bb570: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bb570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bb574:
    // 0x1bb574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb578:
    // 0x1bb578: 0xc04d104  jal         func_134410
label_1bb57c:
    if (ctx->pc == 0x1BB57Cu) {
        ctx->pc = 0x1BB57Cu;
            // 0x1bb57c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB580u;
        goto label_1bb580;
    }
    ctx->pc = 0x1BB578u;
    SET_GPR_U32(ctx, 31, 0x1BB580u);
    ctx->pc = 0x1BB57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB578u;
            // 0x1bb57c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB580u; }
        if (ctx->pc != 0x1BB580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB580u; }
        if (ctx->pc != 0x1BB580u) { return; }
    }
    ctx->pc = 0x1BB580u;
label_1bb580:
    // 0x1bb580: 0xc079f5c  jal         func_1E7D70
label_1bb584:
    if (ctx->pc == 0x1BB584u) {
        ctx->pc = 0x1BB584u;
            // 0x1bb584: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1BB588u;
        goto label_1bb588;
    }
    ctx->pc = 0x1BB580u;
    SET_GPR_U32(ctx, 31, 0x1BB588u);
    ctx->pc = 0x1BB584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB580u;
            // 0x1bb584: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB588u; }
        if (ctx->pc != 0x1BB588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB588u; }
        if (ctx->pc != 0x1BB588u) { return; }
    }
    ctx->pc = 0x1BB588u;
label_1bb588:
    // 0x1bb588: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bb588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bb58c:
    // 0x1bb58c: 0xc04d428  jal         func_1350A0
label_1bb590:
    if (ctx->pc == 0x1BB590u) {
        ctx->pc = 0x1BB590u;
            // 0x1bb590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB594u;
        goto label_1bb594;
    }
    ctx->pc = 0x1BB58Cu;
    SET_GPR_U32(ctx, 31, 0x1BB594u);
    ctx->pc = 0x1BB590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB58Cu;
            // 0x1bb590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB594u; }
        if (ctx->pc != 0x1BB594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB594u; }
        if (ctx->pc != 0x1BB594u) { return; }
    }
    ctx->pc = 0x1BB594u;
label_1bb594:
    // 0x1bb594: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bb594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bb598:
    // 0x1bb598: 0xc04d128  jal         func_1344A0
label_1bb59c:
    if (ctx->pc == 0x1BB59Cu) {
        ctx->pc = 0x1BB59Cu;
            // 0x1bb59c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1BB5A0u;
        goto label_1bb5a0;
    }
    ctx->pc = 0x1BB598u;
    SET_GPR_U32(ctx, 31, 0x1BB5A0u);
    ctx->pc = 0x1BB59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB598u;
            // 0x1bb59c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5A0u; }
        if (ctx->pc != 0x1BB5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5A0u; }
        if (ctx->pc != 0x1BB5A0u) { return; }
    }
    ctx->pc = 0x1BB5A0u;
label_1bb5a0:
    // 0x1bb5a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bb5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bb5a4:
    // 0x1bb5a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bb5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bb5a8:
    // 0x1bb5a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bb5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5ac:
    // 0x1bb5ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bb5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5b0:
    // 0x1bb5b0: 0xc04d320  jal         func_134C80
label_1bb5b4:
    if (ctx->pc == 0x1BB5B4u) {
        ctx->pc = 0x1BB5B4u;
            // 0x1bb5b4: 0x24080048  addiu       $t0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->pc = 0x1BB5B8u;
        goto label_1bb5b8;
    }
    ctx->pc = 0x1BB5B0u;
    SET_GPR_U32(ctx, 31, 0x1BB5B8u);
    ctx->pc = 0x1BB5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5B0u;
            // 0x1bb5b4: 0x24080048  addiu       $t0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5B8u; }
        if (ctx->pc != 0x1BB5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5B8u; }
        if (ctx->pc != 0x1BB5B8u) { return; }
    }
    ctx->pc = 0x1BB5B8u;
label_1bb5b8:
    // 0x1bb5b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bb5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bb5bc:
    // 0x1bb5bc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bb5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1bb5c0:
    // 0x1bb5c0: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x1bb5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_1bb5c4:
    // 0x1bb5c4: 0xc04d2c8  jal         func_134B20
label_1bb5c8:
    if (ctx->pc == 0x1BB5C8u) {
        ctx->pc = 0x1BB5C8u;
            // 0x1bb5c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5CCu;
        goto label_1bb5cc;
    }
    ctx->pc = 0x1BB5C4u;
    SET_GPR_U32(ctx, 31, 0x1BB5CCu);
    ctx->pc = 0x1BB5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5C4u;
            // 0x1bb5c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5CCu; }
        if (ctx->pc != 0x1BB5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5CCu; }
        if (ctx->pc != 0x1BB5CCu) { return; }
    }
    ctx->pc = 0x1BB5CCu;
label_1bb5cc:
    // 0x1bb5cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bb5d0:
    // 0x1bb5d0: 0x24050104  addiu       $a1, $zero, 0x104
    ctx->pc = 0x1bb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_1bb5d4:
    // 0x1bb5d4: 0x2406019c  addiu       $a2, $zero, 0x19C
    ctx->pc = 0x1bb5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
label_1bb5d8:
    // 0x1bb5d8: 0xc04d2c8  jal         func_134B20
label_1bb5dc:
    if (ctx->pc == 0x1BB5DCu) {
        ctx->pc = 0x1BB5DCu;
            // 0x1bb5dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5E0u;
        goto label_1bb5e0;
    }
    ctx->pc = 0x1BB5D8u;
    SET_GPR_U32(ctx, 31, 0x1BB5E0u);
    ctx->pc = 0x1BB5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5D8u;
            // 0x1bb5dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5E0u; }
        if (ctx->pc != 0x1BB5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5E0u; }
        if (ctx->pc != 0x1BB5E0u) { return; }
    }
    ctx->pc = 0x1BB5E0u;
label_1bb5e0:
    // 0x1bb5e0: 0xc04d1a4  jal         func_134690
label_1bb5e4:
    if (ctx->pc == 0x1BB5E4u) {
        ctx->pc = 0x1BB5E4u;
            // 0x1bb5e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1BB5E8u;
        goto label_1bb5e8;
    }
    ctx->pc = 0x1BB5E0u;
    SET_GPR_U32(ctx, 31, 0x1BB5E8u);
    ctx->pc = 0x1BB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5E0u;
            // 0x1bb5e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5E8u; }
        if (ctx->pc != 0x1BB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5E8u; }
        if (ctx->pc != 0x1BB5E8u) { return; }
    }
    ctx->pc = 0x1BB5E8u;
label_1bb5e8:
    // 0x1bb5e8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb5ec:
    // 0x1bb5ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5f0:
    // 0x1bb5f0: 0xc0a0ed8  jal         func_283B60
label_1bb5f4:
    if (ctx->pc == 0x1BB5F4u) {
        ctx->pc = 0x1BB5F4u;
            // 0x1bb5f4: 0x27b00170  addiu       $s0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x1BB5F8u;
        goto label_1bb5f8;
    }
    ctx->pc = 0x1BB5F0u;
    SET_GPR_U32(ctx, 31, 0x1BB5F8u);
    ctx->pc = 0x1BB5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5F0u;
            // 0x1bb5f4: 0x27b00170  addiu       $s0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5F8u; }
        if (ctx->pc != 0x1BB5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5F8u; }
        if (ctx->pc != 0x1BB5F8u) { return; }
    }
    ctx->pc = 0x1BB5F8u;
label_1bb5f8:
    // 0x1bb5f8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1bb5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bb5fc:
    // 0x1bb5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bb5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb600:
    // 0x1bb600: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1bb604:
    // 0x1bb604: 0x320f809  jalr        $t9
label_1bb608:
    if (ctx->pc == 0x1BB608u) {
        ctx->pc = 0x1BB608u;
            // 0x1bb608: 0x27a50970  addiu       $a1, $sp, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2416));
        ctx->pc = 0x1BB60Cu;
        goto label_1bb60c;
    }
    ctx->pc = 0x1BB604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1BB60Cu);
        ctx->pc = 0x1BB608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB604u;
            // 0x1bb608: 0x27a50970  addiu       $a1, $sp, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BB60Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BB60Cu; }
            if (ctx->pc != 0x1BB60Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BB60Cu;
label_1bb60c:
    // 0x1bb60c: 0xc0a24f0  jal         func_2893C0
label_1bb610:
    if (ctx->pc == 0x1BB610u) {
        ctx->pc = 0x1BB610u;
            // 0x1bb610: 0xc7ac0970  lwc1        $f12, 0x970($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1BB614u;
        goto label_1bb614;
    }
    ctx->pc = 0x1BB60Cu;
    SET_GPR_U32(ctx, 31, 0x1BB614u);
    ctx->pc = 0x1BB610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB60Cu;
            // 0x1bb610: 0xc7ac0970  lwc1        $f12, 0x970($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB614u; }
        if (ctx->pc != 0x1BB614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB614u; }
        if (ctx->pc != 0x1BB614u) { return; }
    }
    ctx->pc = 0x1BB614u;
label_1bb614:
    // 0x1bb614: 0xc7ac0974  lwc1        $f12, 0x974($sp)
    ctx->pc = 0x1bb614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb618:
    // 0x1bb618: 0xc0a24f0  jal         func_2893C0
label_1bb61c:
    if (ctx->pc == 0x1BB61Cu) {
        ctx->pc = 0x1BB61Cu;
            // 0x1bb61c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB620u;
        goto label_1bb620;
    }
    ctx->pc = 0x1BB618u;
    SET_GPR_U32(ctx, 31, 0x1BB620u);
    ctx->pc = 0x1BB61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB618u;
            // 0x1bb61c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB620u; }
        if (ctx->pc != 0x1BB620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB620u; }
        if (ctx->pc != 0x1BB620u) { return; }
    }
    ctx->pc = 0x1BB620u;
label_1bb620:
    // 0x1bb620: 0xc7ac0978  lwc1        $f12, 0x978($sp)
    ctx->pc = 0x1bb620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb624:
    // 0x1bb624: 0xc0a24f0  jal         func_2893C0
label_1bb628:
    if (ctx->pc == 0x1BB628u) {
        ctx->pc = 0x1BB628u;
            // 0x1bb628: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB62Cu;
        goto label_1bb62c;
    }
    ctx->pc = 0x1BB624u;
    SET_GPR_U32(ctx, 31, 0x1BB62Cu);
    ctx->pc = 0x1BB628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB624u;
            // 0x1bb628: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB62Cu; }
        if (ctx->pc != 0x1BB62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB62Cu; }
        if (ctx->pc != 0x1BB62Cu) { return; }
    }
    ctx->pc = 0x1BB62Cu;
label_1bb62c:
    // 0x1bb62c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb630:
    // 0x1bb630: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bb630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb634:
    // 0x1bb634: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1bb634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb638:
    // 0x1bb638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb63c:
    // 0x1bb63c: 0x24a56b80  addiu       $a1, $a1, 0x6B80
    ctx->pc = 0x1bb63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
label_1bb640:
    // 0x1bb640: 0xc04a234  jal         func_1288D0
label_1bb644:
    if (ctx->pc == 0x1BB644u) {
        ctx->pc = 0x1BB644u;
            // 0x1bb644: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB648u;
        goto label_1bb648;
    }
    ctx->pc = 0x1BB640u;
    SET_GPR_U32(ctx, 31, 0x1BB648u);
    ctx->pc = 0x1BB644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB640u;
            // 0x1bb644: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB648u; }
        if (ctx->pc != 0x1BB648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB648u; }
        if (ctx->pc != 0x1BB648u) { return; }
    }
    ctx->pc = 0x1BB648u;
label_1bb648:
    // 0x1bb648: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1bb648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1bb64c:
    // 0x1bb64c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bb64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb650:
    // 0x1bb650: 0xc06e9e4  jal         func_1BA790
label_1bb654:
    if (ctx->pc == 0x1BB654u) {
        ctx->pc = 0x1BB654u;
            // 0x1bb654: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1BB658u;
        goto label_1bb658;
    }
    ctx->pc = 0x1BB650u;
    SET_GPR_U32(ctx, 31, 0x1BB658u);
    ctx->pc = 0x1BB654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB650u;
            // 0x1bb654: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA790u;
    if (runtime->hasFunction(0x1BA790u)) {
        auto targetFn = runtime->lookupFunction(0x1BA790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB658u; }
        if (ctx->pc != 0x1BB658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ActivePrimNum__11CColPrimManFv_0x1ba790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB658u; }
        if (ctx->pc != 0x1BB658u) { return; }
    }
    ctx->pc = 0x1BB658u;
label_1bb658:
    // 0x1bb658: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb65c:
    // 0x1bb65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb660:
    // 0x1bb660: 0x24a56b98  addiu       $a1, $a1, 0x6B98
    ctx->pc = 0x1bb660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27544));
label_1bb664:
    // 0x1bb664: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bb664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb668:
    // 0x1bb668: 0xc04a234  jal         func_1288D0
label_1bb66c:
    if (ctx->pc == 0x1BB66Cu) {
        ctx->pc = 0x1BB66Cu;
            // 0x1bb66c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1BB670u;
        goto label_1bb670;
    }
    ctx->pc = 0x1BB668u;
    SET_GPR_U32(ctx, 31, 0x1BB670u);
    ctx->pc = 0x1BB66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB668u;
            // 0x1bb66c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB670u; }
        if (ctx->pc != 0x1BB670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB670u; }
        if (ctx->pc != 0x1BB670u) { return; }
    }
    ctx->pc = 0x1BB670u;
label_1bb670:
    // 0x1bb670: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb674:
    // 0x1bb674: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bb674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb678:
    // 0x1bb678: 0xc0a0c64  jal         func_283190
label_1bb67c:
    if (ctx->pc == 0x1BB67Cu) {
        ctx->pc = 0x1BB67Cu;
            // 0x1bb67c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB680u;
        goto label_1bb680;
    }
    ctx->pc = 0x1BB678u;
    SET_GPR_U32(ctx, 31, 0x1BB680u);
    ctx->pc = 0x1BB67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB678u;
            // 0x1bb67c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB680u; }
        if (ctx->pc != 0x1BB680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB680u; }
        if (ctx->pc != 0x1BB680u) { return; }
    }
    ctx->pc = 0x1BB680u;
label_1bb680:
    // 0x1bb680: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb684:
    // 0x1bb684: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bb684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb688:
    // 0x1bb688: 0xc0a0c64  jal         func_283190
label_1bb68c:
    if (ctx->pc == 0x1BB68Cu) {
        ctx->pc = 0x1BB68Cu;
            // 0x1bb68c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BB690u;
        goto label_1bb690;
    }
    ctx->pc = 0x1BB688u;
    SET_GPR_U32(ctx, 31, 0x1BB690u);
    ctx->pc = 0x1BB68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB688u;
            // 0x1bb68c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB690u; }
        if (ctx->pc != 0x1BB690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB690u; }
        if (ctx->pc != 0x1BB690u) { return; }
    }
    ctx->pc = 0x1BB690u;
label_1bb690:
    // 0x1bb690: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb694:
    // 0x1bb694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb698:
    // 0x1bb698: 0xc0a0c64  jal         func_283190
label_1bb69c:
    if (ctx->pc == 0x1BB69Cu) {
        ctx->pc = 0x1BB69Cu;
            // 0x1bb69c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1BB6A0u;
        goto label_1bb6a0;
    }
    ctx->pc = 0x1BB698u;
    SET_GPR_U32(ctx, 31, 0x1BB6A0u);
    ctx->pc = 0x1BB69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB698u;
            // 0x1bb69c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6A0u; }
        if (ctx->pc != 0x1BB6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6A0u; }
        if (ctx->pc != 0x1BB6A0u) { return; }
    }
    ctx->pc = 0x1BB6A0u;
label_1bb6a0:
    // 0x1bb6a0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb6a4:
    // 0x1bb6a4: 0xc0a0c64  jal         func_283190
label_1bb6a8:
    if (ctx->pc == 0x1BB6A8u) {
        ctx->pc = 0x1BB6A8u;
            // 0x1bb6a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1BB6ACu;
        goto label_1bb6ac;
    }
    ctx->pc = 0x1BB6A4u;
    SET_GPR_U32(ctx, 31, 0x1BB6ACu);
    ctx->pc = 0x1BB6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6A4u;
            // 0x1bb6a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6ACu; }
        if (ctx->pc != 0x1BB6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6ACu; }
        if (ctx->pc != 0x1BB6ACu) { return; }
    }
    ctx->pc = 0x1BB6ACu;
label_1bb6ac:
    // 0x1bb6ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bb6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb6b0:
    // 0x1bb6b0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1bb6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1bb6b4:
    // 0x1bb6b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb6b8:
    // 0x1bb6b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bb6bc:
    if (ctx->pc == 0x1BB6BCu) {
        ctx->pc = 0x1BB6BCu;
            // 0x1bb6bc: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1BB6C0u;
        goto label_1bb6c0;
    }
    ctx->pc = 0x1BB6B8u;
    {
        const bool branch_taken_0x1bb6b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6B8u;
            // 0x1bb6bc: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6b8) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB6C0u;
label_1bb6c0:
    // 0x1bb6c0: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1bb6c4:
    // 0x1bb6c4: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x1bb6c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_1bb6c8:
    // 0x1bb6c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb6cc:
    // 0x1bb6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb6d0:
    // 0x1bb6d0: 0xc04a234  jal         func_1288D0
label_1bb6d4:
    if (ctx->pc == 0x1BB6D4u) {
        ctx->pc = 0x1BB6D4u;
            // 0x1bb6d4: 0x24a56ba8  addiu       $a1, $a1, 0x6BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
        ctx->pc = 0x1BB6D8u;
        goto label_1bb6d8;
    }
    ctx->pc = 0x1BB6D0u;
    SET_GPR_U32(ctx, 31, 0x1BB6D8u);
    ctx->pc = 0x1BB6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6D0u;
            // 0x1bb6d4: 0x24a56ba8  addiu       $a1, $a1, 0x6BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6D8u; }
        if (ctx->pc != 0x1BB6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6D8u; }
        if (ctx->pc != 0x1BB6D8u) { return; }
    }
    ctx->pc = 0x1BB6D8u;
label_1bb6d8:
    // 0x1bb6d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bb6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb6dc:
    // 0x1bb6dc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1bb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1bb6e0:
    // 0x1bb6e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb6e4:
    // 0x1bb6e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bb6e8:
    if (ctx->pc == 0x1BB6E8u) {
        ctx->pc = 0x1BB6E8u;
            // 0x1bb6e8: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1BB6ECu;
        goto label_1bb6ec;
    }
    ctx->pc = 0x1BB6E4u;
    {
        const bool branch_taken_0x1bb6e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6E4u;
            // 0x1bb6e8: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6e4) {
            ctx->pc = 0x1BB6F4u;
            goto label_1bb6f4;
        }
    }
    ctx->pc = 0x1BB6ECu;
label_1bb6ec:
    // 0x1bb6ec: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1bb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1bb6f0:
    // 0x1bb6f0: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x1bb6f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_1bb6f4:
    // 0x1bb6f4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb6f8:
    // 0x1bb6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb6fc:
    // 0x1bb6fc: 0xc04a234  jal         func_1288D0
label_1bb700:
    if (ctx->pc == 0x1BB700u) {
        ctx->pc = 0x1BB700u;
            // 0x1bb700: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
        ctx->pc = 0x1BB704u;
        goto label_1bb704;
    }
    ctx->pc = 0x1BB6FCu;
    SET_GPR_U32(ctx, 31, 0x1BB704u);
    ctx->pc = 0x1BB700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6FCu;
            // 0x1bb700: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB704u; }
        if (ctx->pc != 0x1BB704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB704u; }
        if (ctx->pc != 0x1BB704u) { return; }
    }
    ctx->pc = 0x1BB704u;
label_1bb704:
    // 0x1bb704: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bb704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb708:
    // 0x1bb708: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1bb708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1bb70c:
    // 0x1bb70c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1bb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1bb710:
    // 0x1bb710: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bb710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bb714:
    // 0x1bb714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb718:
    // 0x1bb718: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bb71c:
    if (ctx->pc == 0x1BB71Cu) {
        ctx->pc = 0x1BB71Cu;
            // 0x1bb71c: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1BB720u;
        goto label_1bb720;
    }
    ctx->pc = 0x1BB718u;
    {
        const bool branch_taken_0x1bb718 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB718u;
            // 0x1bb71c: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb718) {
            ctx->pc = 0x1BB728u;
            goto label_1bb728;
        }
    }
    ctx->pc = 0x1BB720u;
label_1bb720:
    // 0x1bb720: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1bb720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1bb724:
    // 0x1bb724: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x1bb724u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_1bb728:
    // 0x1bb728: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bb728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bb72c:
    // 0x1bb72c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bb730:
    if (ctx->pc == 0x1BB730u) {
        ctx->pc = 0x1BB730u;
            // 0x1bb730: 0x23a83  sra         $a3, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1BB734u;
        goto label_1bb734;
    }
    ctx->pc = 0x1BB72Cu;
    {
        const bool branch_taken_0x1bb72c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB72Cu;
            // 0x1bb730: 0x23a83  sra         $a3, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb72c) {
            ctx->pc = 0x1BB73Cu;
            goto label_1bb73c;
        }
    }
    ctx->pc = 0x1BB734u;
label_1bb734:
    // 0x1bb734: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1bb734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1bb738:
    // 0x1bb738: 0x23a83  sra         $a3, $v0, 10
    ctx->pc = 0x1bb738u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 10));
label_1bb73c:
    // 0x1bb73c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb740:
    // 0x1bb740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb744:
    // 0x1bb744: 0xc04a234  jal         func_1288D0
label_1bb748:
    if (ctx->pc == 0x1BB748u) {
        ctx->pc = 0x1BB748u;
            // 0x1bb748: 0x24a56bd0  addiu       $a1, $a1, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27600));
        ctx->pc = 0x1BB74Cu;
        goto label_1bb74c;
    }
    ctx->pc = 0x1BB744u;
    SET_GPR_U32(ctx, 31, 0x1BB74Cu);
    ctx->pc = 0x1BB748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB744u;
            // 0x1bb748: 0x24a56bd0  addiu       $a1, $a1, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB74Cu; }
        if (ctx->pc != 0x1BB74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB74Cu; }
        if (ctx->pc != 0x1BB74Cu) { return; }
    }
    ctx->pc = 0x1BB74Cu;
label_1bb74c:
    // 0x1bb74c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1bb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1bb750:
    // 0x1bb750: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1bb750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1bb754:
    // 0x1bb754: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x1bb754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
label_1bb758:
    // 0x1bb758: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bb758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bb75c:
    // 0x1bb75c: 0xc0b5688  jal         func_2D5A20
label_1bb760:
    if (ctx->pc == 0x1BB760u) {
        ctx->pc = 0x1BB760u;
            // 0x1bb760: 0x24070118  addiu       $a3, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->pc = 0x1BB764u;
        goto label_1bb764;
    }
    ctx->pc = 0x1BB75Cu;
    SET_GPR_U32(ctx, 31, 0x1BB764u);
    ctx->pc = 0x1BB760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB75Cu;
            // 0x1bb760: 0x24070118  addiu       $a3, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB764u; }
        if (ctx->pc != 0x1BB764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB764u; }
        if (ctx->pc != 0x1BB764u) { return; }
    }
    ctx->pc = 0x1BB764u;
label_1bb764:
    // 0x1bb764: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bb764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bb768:
    // 0x1bb768: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb76c:
    // 0x1bb76c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb770:
    // 0x1bb770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb774:
    // 0x1bb774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb778:
    // 0x1bb778: 0x3e00008  jr          $ra
label_1bb77c:
    if (ctx->pc == 0x1BB77Cu) {
        ctx->pc = 0x1BB77Cu;
            // 0x1bb77c: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->pc = 0x1BB780u;
        goto label_fallthrough_0x1bb778;
    }
    ctx->pc = 0x1BB778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB778u;
            // 0x1bb77c: 0x27bd0980  addiu       $sp, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1bb778:
    ctx->pc = 0x1BB780u;
}
