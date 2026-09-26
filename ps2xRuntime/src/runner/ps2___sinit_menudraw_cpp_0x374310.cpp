#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menudraw.cpp
// Address: 0x374310 - 0x37443c
void ps2___sinit_menudraw_cpp_0x374310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menudraw_cpp_0x374310");
#endif

    switch (ctx->pc) {
        case 0x374334u: goto label_374334;
        case 0x374350u: goto label_374350;
        case 0x37436cu: goto label_37436c;
        case 0x374388u: goto label_374388;
        case 0x3743a4u: goto label_3743a4;
        case 0x3743c0u: goto label_3743c0;
        case 0x3743dcu: goto label_3743dc;
        case 0x3743f8u: goto label_3743f8;
        case 0x374414u: goto label_374414;
        case 0x374430u: goto label_374430;
        default: break;
    }

    ctx->pc = 0x374310u;

    // 0x374310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374314: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37431c: 0x2484cdd0  addiu       $a0, $a0, -0x3230
    ctx->pc = 0x37431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954448));
    // 0x374320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x374328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37432c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x37432Cu;
    SET_GPR_U32(ctx, 31, 0x374334u);
    ctx->pc = 0x374330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37432Cu;
            // 0x374330: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374334u; }
        if (ctx->pc != 0x374334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374334u; }
        if (ctx->pc != 0x374334u) { return; }
    }
    ctx->pc = 0x374334u;
label_374334:
    // 0x374334: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374338: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x374338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x37433c: 0x2484ce50  addiu       $a0, $a0, -0x31B0
    ctx->pc = 0x37433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954576));
    // 0x374340: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x374340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374344: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x374344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x374348: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x374348u;
    SET_GPR_U32(ctx, 31, 0x374350u);
    ctx->pc = 0x37434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374348u;
            // 0x37434c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374350u; }
        if (ctx->pc != 0x374350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374350u; }
        if (ctx->pc != 0x374350u) { return; }
    }
    ctx->pc = 0x374350u;
label_374350:
    // 0x374350: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374358: 0x2484ce60  addiu       $a0, $a0, -0x31A0
    ctx->pc = 0x374358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954592));
    // 0x37435c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37435cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374360: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x374360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374364: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x374364u;
    SET_GPR_U32(ctx, 31, 0x37436Cu);
    ctx->pc = 0x374368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374364u;
            // 0x374368: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37436Cu; }
        if (ctx->pc != 0x37436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37436Cu; }
        if (ctx->pc != 0x37436Cu) { return; }
    }
    ctx->pc = 0x37436Cu;
label_37436c:
    // 0x37436c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x37436cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374374: 0x2484ce70  addiu       $a0, $a0, -0x3190
    ctx->pc = 0x374374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954608));
    // 0x374378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37437c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37437cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374380: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x374380u;
    SET_GPR_U32(ctx, 31, 0x374388u);
    ctx->pc = 0x374384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374380u;
            // 0x374384: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374388u; }
        if (ctx->pc != 0x374388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374388u; }
        if (ctx->pc != 0x374388u) { return; }
    }
    ctx->pc = 0x374388u;
label_374388:
    // 0x374388: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x37438c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x37438cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374390: 0x2484cec0  addiu       $a0, $a0, -0x3140
    ctx->pc = 0x374390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
    // 0x374394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374398: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x374398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x37439c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x37439Cu;
    SET_GPR_U32(ctx, 31, 0x3743A4u);
    ctx->pc = 0x3743A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37439Cu;
            // 0x3743a0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743A4u; }
        if (ctx->pc != 0x3743A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743A4u; }
        if (ctx->pc != 0x3743A4u) { return; }
    }
    ctx->pc = 0x3743A4u;
label_3743a4:
    // 0x3743a4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3743a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3743a8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3743a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3743ac: 0x2484ced0  addiu       $a0, $a0, -0x3130
    ctx->pc = 0x3743acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954704));
    // 0x3743b0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3743b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743b4: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x3743b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3743b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3743B8u;
    SET_GPR_U32(ctx, 31, 0x3743C0u);
    ctx->pc = 0x3743BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3743B8u;
            // 0x3743bc: 0x24080032  addiu       $t0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743C0u; }
        if (ctx->pc != 0x3743C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743C0u; }
        if (ctx->pc != 0x3743C0u) { return; }
    }
    ctx->pc = 0x3743C0u;
label_3743c0:
    // 0x3743c0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3743c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3743c4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3743c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3743c8: 0x2484cee0  addiu       $a0, $a0, -0x3120
    ctx->pc = 0x3743c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954720));
    // 0x3743cc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3743ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3743d0: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x3743d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3743d4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3743D4u;
    SET_GPR_U32(ctx, 31, 0x3743DCu);
    ctx->pc = 0x3743D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3743D4u;
            // 0x3743d8: 0x2408000b  addiu       $t0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743DCu; }
        if (ctx->pc != 0x3743DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743DCu; }
        if (ctx->pc != 0x3743DCu) { return; }
    }
    ctx->pc = 0x3743DCu;
label_3743dc:
    // 0x3743dc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3743dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3743e0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3743e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3743e4: 0x2484cef0  addiu       $a0, $a0, -0x3110
    ctx->pc = 0x3743e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954736));
    // 0x3743e8: 0x2406008a  addiu       $a2, $zero, 0x8A
    ctx->pc = 0x3743e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x3743ec: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x3743ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3743f0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3743F0u;
    SET_GPR_U32(ctx, 31, 0x3743F8u);
    ctx->pc = 0x3743F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3743F0u;
            // 0x3743f4: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743F8u; }
        if (ctx->pc != 0x3743F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743F8u; }
        if (ctx->pc != 0x3743F8u) { return; }
    }
    ctx->pc = 0x3743F8u;
label_3743f8:
    // 0x3743f8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3743f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3743fc: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3743fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x374400: 0x2484cf00  addiu       $a0, $a0, -0x3100
    ctx->pc = 0x374400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954752));
    // 0x374404: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x374404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x374408: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x374408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x37440c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x37440Cu;
    SET_GPR_U32(ctx, 31, 0x374414u);
    ctx->pc = 0x374410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37440Cu;
            // 0x374410: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374414u; }
        if (ctx->pc != 0x374414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374414u; }
        if (ctx->pc != 0x374414u) { return; }
    }
    ctx->pc = 0x374414u;
label_374414:
    // 0x374414: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374418: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x374418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x37441c: 0x2484cf10  addiu       $a0, $a0, -0x30F0
    ctx->pc = 0x37441cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954768));
    // 0x374420: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x374420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374424: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x374424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374428: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x374428u;
    SET_GPR_U32(ctx, 31, 0x374430u);
    ctx->pc = 0x37442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374428u;
            // 0x37442c: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374430u; }
        if (ctx->pc != 0x374430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374430u; }
        if (ctx->pc != 0x374430u) { return; }
    }
    ctx->pc = 0x374430u;
label_374430:
    // 0x374430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374434: 0x3e00008  jr          $ra
    ctx->pc = 0x374434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374434u;
            // 0x374438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37443Cu;
}
