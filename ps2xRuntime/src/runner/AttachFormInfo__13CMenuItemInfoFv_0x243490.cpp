#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachFormInfo__13CMenuItemInfoFv
// Address: 0x243490 - 0x2438d4
void AttachFormInfo__13CMenuItemInfoFv_0x243490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachFormInfo__13CMenuItemInfoFv_0x243490");
#endif

    switch (ctx->pc) {
        case 0x2434c4u: goto label_2434c4;
        case 0x2434dcu: goto label_2434dc;
        case 0x243504u: goto label_243504;
        case 0x243518u: goto label_243518;
        case 0x243530u: goto label_243530;
        case 0x243548u: goto label_243548;
        case 0x243560u: goto label_243560;
        case 0x243574u: goto label_243574;
        case 0x243588u: goto label_243588;
        case 0x24359cu: goto label_24359c;
        case 0x2435b0u: goto label_2435b0;
        case 0x2435c4u: goto label_2435c4;
        case 0x2435d8u: goto label_2435d8;
        case 0x2435ecu: goto label_2435ec;
        case 0x243600u: goto label_243600;
        case 0x243614u: goto label_243614;
        case 0x243628u: goto label_243628;
        case 0x24363cu: goto label_24363c;
        case 0x243650u: goto label_243650;
        case 0x243668u: goto label_243668;
        case 0x24367cu: goto label_24367c;
        case 0x243690u: goto label_243690;
        case 0x2436a4u: goto label_2436a4;
        case 0x2436b8u: goto label_2436b8;
        case 0x2436dcu: goto label_2436dc;
        case 0x2436f4u: goto label_2436f4;
        case 0x243724u: goto label_243724;
        case 0x24373cu: goto label_24373c;
        case 0x24374cu: goto label_24374c;
        case 0x243764u: goto label_243764;
        case 0x243798u: goto label_243798;
        case 0x2437acu: goto label_2437ac;
        case 0x2437c0u: goto label_2437c0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437e8u: goto label_2437e8;
        case 0x2437fcu: goto label_2437fc;
        case 0x243810u: goto label_243810;
        case 0x243824u: goto label_243824;
        case 0x243840u: goto label_243840;
        case 0x243854u: goto label_243854;
        case 0x243868u: goto label_243868;
        case 0x24387cu: goto label_24387c;
        case 0x243890u: goto label_243890;
        case 0x2438a4u: goto label_2438a4;
        default: break;
    }

    ctx->pc = 0x243490u;

    // 0x243490: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x243490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x243494: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x243494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x243498: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x243498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x24349c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24349cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2434a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2434a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2434a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2434a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2434a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2434a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2434acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2434b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2434b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2434b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2434b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2434b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2434b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2434bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2434bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2434c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2434c4:
    // 0x2434c4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2434c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2434c8: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x2434c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x2434cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2434ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2434d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2434d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2434d4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2434D4u;
    SET_GPR_U32(ctx, 31, 0x2434DCu);
    ctx->pc = 0x2434D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2434D4u;
            // 0x2434d8: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2434DCu; }
        if (ctx->pc != 0x2434DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2434DCu; }
        if (ctx->pc != 0x2434DCu) { return; }
    }
    ctx->pc = 0x2434DCu;
label_2434dc:
    // 0x2434dc: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x2434dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x2434e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2434e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2434e4: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x2434e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x2434e8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x2434e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2434ec: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2434ECu;
    {
        const bool branch_taken_0x2434ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2434F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2434ECu;
            // 0x2434f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434ec) {
            ctx->pc = 0x2434C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2434c4;
        }
    }
    ctx->pc = 0x2434F4u;
    // 0x2434f4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2434f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2434f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2434f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2434fc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2434FCu;
    SET_GPR_U32(ctx, 31, 0x243504u);
    ctx->pc = 0x243500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2434FCu;
            // 0x243500: 0x24a5b0b8  addiu       $a1, $a1, -0x4F48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243504u; }
        if (ctx->pc != 0x243504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243504u; }
        if (ctx->pc != 0x243504u) { return; }
    }
    ctx->pc = 0x243504u;
label_243504:
    // 0x243504: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x243504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x243508: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24350c: 0xaf829598  sw          $v0, -0x6A68($gp)
    ctx->pc = 0x24350cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940056), GPR_U32(ctx, 2));
    // 0x243510: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x243510u;
    SET_GPR_U32(ctx, 31, 0x243518u);
    ctx->pc = 0x243514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243510u;
            // 0x243514: 0x24a5b0c8  addiu       $a1, $a1, -0x4F38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243518u; }
        if (ctx->pc != 0x243518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243518u; }
        if (ctx->pc != 0x243518u) { return; }
    }
    ctx->pc = 0x243518u;
label_243518:
    // 0x243518: 0xaf82959c  sw          $v0, -0x6A64($gp)
    ctx->pc = 0x243518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940060), GPR_U32(ctx, 2));
    // 0x24351c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24351cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243520: 0xa6a00198  sh          $zero, 0x198($s5)
    ctx->pc = 0x243520u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 408), (uint16_t)GPR_U32(ctx, 0));
    // 0x243524: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x243524u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243528: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24352c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24352cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243530:
    // 0x243530: 0x2b7b021  addu        $s6, $s5, $s7
    ctx->pc = 0x243530u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x243534: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243538: 0x8ed00180  lw          $s0, 0x180($s6)
    ctx->pc = 0x243538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 384)));
    // 0x24353c: 0x24a5b0d0  addiu       $a1, $a1, -0x4F30
    ctx->pc = 0x24353cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947024));
    // 0x243540: 0xc089664  jal         func_225990
    ctx->pc = 0x243540u;
    SET_GPR_U32(ctx, 31, 0x243548u);
    ctx->pc = 0x243544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243540u;
            // 0x243544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243548u; }
        if (ctx->pc != 0x243548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243548u; }
        if (ctx->pc != 0x243548u) { return; }
    }
    ctx->pc = 0x243548u;
label_243548:
    // 0x243548: 0x2b19821  addu        $s3, $s5, $s1
    ctx->pc = 0x243548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x24354c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24354cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243554: 0xae6201c8  sw          $v0, 0x1C8($s3)
    ctx->pc = 0x243554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 456), GPR_U32(ctx, 2));
    // 0x243558: 0xc089664  jal         func_225990
    ctx->pc = 0x243558u;
    SET_GPR_U32(ctx, 31, 0x243560u);
    ctx->pc = 0x24355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243558u;
            // 0x24355c: 0x24a5b0d8  addiu       $a1, $a1, -0x4F28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243560u; }
        if (ctx->pc != 0x243560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243560u; }
        if (ctx->pc != 0x243560u) { return; }
    }
    ctx->pc = 0x243560u;
label_243560:
    // 0x243560: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243564: 0xae6201cc  sw          $v0, 0x1CC($s3)
    ctx->pc = 0x243564u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 460), GPR_U32(ctx, 2));
    // 0x243568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24356c: 0xc089664  jal         func_225990
    ctx->pc = 0x24356Cu;
    SET_GPR_U32(ctx, 31, 0x243574u);
    ctx->pc = 0x243570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24356Cu;
            // 0x243570: 0x24a5b0e0  addiu       $a1, $a1, -0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243574u; }
        if (ctx->pc != 0x243574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243574u; }
        if (ctx->pc != 0x243574u) { return; }
    }
    ctx->pc = 0x243574u;
label_243574:
    // 0x243574: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243578: 0xae6201d0  sw          $v0, 0x1D0($s3)
    ctx->pc = 0x243578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 464), GPR_U32(ctx, 2));
    // 0x24357c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243580: 0xc089664  jal         func_225990
    ctx->pc = 0x243580u;
    SET_GPR_U32(ctx, 31, 0x243588u);
    ctx->pc = 0x243584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243580u;
            // 0x243584: 0x24a5b0e8  addiu       $a1, $a1, -0x4F18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243588u; }
        if (ctx->pc != 0x243588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243588u; }
        if (ctx->pc != 0x243588u) { return; }
    }
    ctx->pc = 0x243588u;
label_243588:
    // 0x243588: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24358c: 0xae6201d4  sw          $v0, 0x1D4($s3)
    ctx->pc = 0x24358cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 2));
    // 0x243590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243594: 0xc089664  jal         func_225990
    ctx->pc = 0x243594u;
    SET_GPR_U32(ctx, 31, 0x24359Cu);
    ctx->pc = 0x243598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243594u;
            // 0x243598: 0x24a5b0f0  addiu       $a1, $a1, -0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24359Cu; }
        if (ctx->pc != 0x24359Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24359Cu; }
        if (ctx->pc != 0x24359Cu) { return; }
    }
    ctx->pc = 0x24359Cu;
label_24359c:
    // 0x24359c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24359cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2435a0: 0xae6201d8  sw          $v0, 0x1D8($s3)
    ctx->pc = 0x2435a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 472), GPR_U32(ctx, 2));
    // 0x2435a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2435a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435a8: 0xc089664  jal         func_225990
    ctx->pc = 0x2435A8u;
    SET_GPR_U32(ctx, 31, 0x2435B0u);
    ctx->pc = 0x2435ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2435A8u;
            // 0x2435ac: 0x24a5b0f8  addiu       $a1, $a1, -0x4F08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435B0u; }
        if (ctx->pc != 0x2435B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435B0u; }
        if (ctx->pc != 0x2435B0u) { return; }
    }
    ctx->pc = 0x2435B0u;
label_2435b0:
    // 0x2435b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2435b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2435b4: 0xae6201dc  sw          $v0, 0x1DC($s3)
    ctx->pc = 0x2435b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 2));
    // 0x2435b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2435b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435bc: 0xc089664  jal         func_225990
    ctx->pc = 0x2435BCu;
    SET_GPR_U32(ctx, 31, 0x2435C4u);
    ctx->pc = 0x2435C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2435BCu;
            // 0x2435c0: 0x24a5b100  addiu       $a1, $a1, -0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435C4u; }
        if (ctx->pc != 0x2435C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435C4u; }
        if (ctx->pc != 0x2435C4u) { return; }
    }
    ctx->pc = 0x2435C4u;
label_2435c4:
    // 0x2435c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2435c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2435c8: 0xae6201e0  sw          $v0, 0x1E0($s3)
    ctx->pc = 0x2435c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 480), GPR_U32(ctx, 2));
    // 0x2435cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2435ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435d0: 0xc089664  jal         func_225990
    ctx->pc = 0x2435D0u;
    SET_GPR_U32(ctx, 31, 0x2435D8u);
    ctx->pc = 0x2435D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2435D0u;
            // 0x2435d4: 0x24a5b108  addiu       $a1, $a1, -0x4EF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435D8u; }
        if (ctx->pc != 0x2435D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435D8u; }
        if (ctx->pc != 0x2435D8u) { return; }
    }
    ctx->pc = 0x2435D8u;
label_2435d8:
    // 0x2435d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2435d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2435dc: 0xae6201e4  sw          $v0, 0x1E4($s3)
    ctx->pc = 0x2435dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 484), GPR_U32(ctx, 2));
    // 0x2435e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2435e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435e4: 0xc089664  jal         func_225990
    ctx->pc = 0x2435E4u;
    SET_GPR_U32(ctx, 31, 0x2435ECu);
    ctx->pc = 0x2435E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2435E4u;
            // 0x2435e8: 0x24a5b110  addiu       $a1, $a1, -0x4EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435ECu; }
        if (ctx->pc != 0x2435ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2435ECu; }
        if (ctx->pc != 0x2435ECu) { return; }
    }
    ctx->pc = 0x2435ECu;
label_2435ec:
    // 0x2435ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2435ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2435f0: 0xae6201e8  sw          $v0, 0x1E8($s3)
    ctx->pc = 0x2435f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 488), GPR_U32(ctx, 2));
    // 0x2435f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2435f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435f8: 0xc089664  jal         func_225990
    ctx->pc = 0x2435F8u;
    SET_GPR_U32(ctx, 31, 0x243600u);
    ctx->pc = 0x2435FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2435F8u;
            // 0x2435fc: 0x24a5b118  addiu       $a1, $a1, -0x4EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243600u; }
        if (ctx->pc != 0x243600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243600u; }
        if (ctx->pc != 0x243600u) { return; }
    }
    ctx->pc = 0x243600u;
label_243600:
    // 0x243600: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243604: 0xae6201ec  sw          $v0, 0x1EC($s3)
    ctx->pc = 0x243604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 2));
    // 0x243608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24360c: 0xc089664  jal         func_225990
    ctx->pc = 0x24360Cu;
    SET_GPR_U32(ctx, 31, 0x243614u);
    ctx->pc = 0x243610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24360Cu;
            // 0x243610: 0x24a5b120  addiu       $a1, $a1, -0x4EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243614u; }
        if (ctx->pc != 0x243614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243614u; }
        if (ctx->pc != 0x243614u) { return; }
    }
    ctx->pc = 0x243614u;
label_243614:
    // 0x243614: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243618: 0xae6201f0  sw          $v0, 0x1F0($s3)
    ctx->pc = 0x243618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 496), GPR_U32(ctx, 2));
    // 0x24361c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243620: 0xc089664  jal         func_225990
    ctx->pc = 0x243620u;
    SET_GPR_U32(ctx, 31, 0x243628u);
    ctx->pc = 0x243624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243620u;
            // 0x243624: 0x24a5b128  addiu       $a1, $a1, -0x4ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243628u; }
        if (ctx->pc != 0x243628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243628u; }
        if (ctx->pc != 0x243628u) { return; }
    }
    ctx->pc = 0x243628u;
label_243628:
    // 0x243628: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24362c: 0xae6201f4  sw          $v0, 0x1F4($s3)
    ctx->pc = 0x24362cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 500), GPR_U32(ctx, 2));
    // 0x243630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243634: 0xc089664  jal         func_225990
    ctx->pc = 0x243634u;
    SET_GPR_U32(ctx, 31, 0x24363Cu);
    ctx->pc = 0x243638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243634u;
            // 0x243638: 0x24a5acf0  addiu       $a1, $a1, -0x5310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24363Cu; }
        if (ctx->pc != 0x24363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24363Cu; }
        if (ctx->pc != 0x24363Cu) { return; }
    }
    ctx->pc = 0x24363Cu;
label_24363c:
    // 0x24363c: 0xaec202b8  sw          $v0, 0x2B8($s6)
    ctx->pc = 0x24363cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 696), GPR_U32(ctx, 2));
    // 0x243640: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x243640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x243644: 0x8c250fb8  lw          $a1, 0xFB8($at)
    ctx->pc = 0x243644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4024)));
    // 0x243648: 0xc089664  jal         func_225990
    ctx->pc = 0x243648u;
    SET_GPR_U32(ctx, 31, 0x243650u);
    ctx->pc = 0x24364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243648u;
            // 0x24364c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243650u; }
        if (ctx->pc != 0x243650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243650u; }
        if (ctx->pc != 0x243650u) { return; }
    }
    ctx->pc = 0x243650u;
label_243650:
    // 0x243650: 0x2b29821  addu        $s3, $s5, $s2
    ctx->pc = 0x243650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x243654: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x243654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x243658: 0xae6202c0  sw          $v0, 0x2C0($s3)
    ctx->pc = 0x243658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 2));
    // 0x24365c: 0x8c250fbc  lw          $a1, 0xFBC($at)
    ctx->pc = 0x24365cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
    // 0x243660: 0xc089664  jal         func_225990
    ctx->pc = 0x243660u;
    SET_GPR_U32(ctx, 31, 0x243668u);
    ctx->pc = 0x243664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243660u;
            // 0x243664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243668u; }
        if (ctx->pc != 0x243668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243668u; }
        if (ctx->pc != 0x243668u) { return; }
    }
    ctx->pc = 0x243668u;
label_243668:
    // 0x243668: 0xae6202c4  sw          $v0, 0x2C4($s3)
    ctx->pc = 0x243668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 2));
    // 0x24366c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x243670: 0x8c250fc0  lw          $a1, 0xFC0($at)
    ctx->pc = 0x243670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4032)));
    // 0x243674: 0xc089664  jal         func_225990
    ctx->pc = 0x243674u;
    SET_GPR_U32(ctx, 31, 0x24367Cu);
    ctx->pc = 0x243678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243674u;
            // 0x243678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24367Cu; }
        if (ctx->pc != 0x24367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24367Cu; }
        if (ctx->pc != 0x24367Cu) { return; }
    }
    ctx->pc = 0x24367Cu;
label_24367c:
    // 0x24367c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24367cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243680: 0xae6202c8  sw          $v0, 0x2C8($s3)
    ctx->pc = 0x243680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 2));
    // 0x243684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243688: 0xc089664  jal         func_225990
    ctx->pc = 0x243688u;
    SET_GPR_U32(ctx, 31, 0x243690u);
    ctx->pc = 0x24368Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243688u;
            // 0x24368c: 0x24a5ac08  addiu       $a1, $a1, -0x53F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243690u; }
        if (ctx->pc != 0x243690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243690u; }
        if (ctx->pc != 0x243690u) { return; }
    }
    ctx->pc = 0x243690u;
label_243690:
    // 0x243690: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243694: 0xae6202d8  sw          $v0, 0x2D8($s3)
    ctx->pc = 0x243694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 728), GPR_U32(ctx, 2));
    // 0x243698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24369c: 0xc089664  jal         func_225990
    ctx->pc = 0x24369Cu;
    SET_GPR_U32(ctx, 31, 0x2436A4u);
    ctx->pc = 0x2436A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24369Cu;
            // 0x2436a0: 0x24a5b130  addiu       $a1, $a1, -0x4ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436A4u; }
        if (ctx->pc != 0x2436A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436A4u; }
        if (ctx->pc != 0x2436A4u) { return; }
    }
    ctx->pc = 0x2436A4u;
label_2436a4:
    // 0x2436a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2436a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2436a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2436a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2436ac: 0xae6202dc  sw          $v0, 0x2DC($s3)
    ctx->pc = 0x2436acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 2));
    // 0x2436b0: 0xc089664  jal         func_225990
    ctx->pc = 0x2436B0u;
    SET_GPR_U32(ctx, 31, 0x2436B8u);
    ctx->pc = 0x2436B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2436B0u;
            // 0x2436b4: 0x24a5b140  addiu       $a1, $a1, -0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436B8u; }
        if (ctx->pc != 0x2436B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436B8u; }
        if (ctx->pc != 0x2436B8u) { return; }
    }
    ctx->pc = 0x2436B8u;
label_2436b8:
    // 0x2436b8: 0xae6202e0  sw          $v0, 0x2E0($s3)
    ctx->pc = 0x2436b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 2));
    // 0x2436bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2436bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2436c0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2436c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2436c4: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x2436c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x2436c8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2436c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2436cc: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x2436CCu;
    {
        const bool branch_taken_0x2436cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2436D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2436CCu;
            // 0x2436d0: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2436cc) {
            ctx->pc = 0x243530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243530;
        }
    }
    ctx->pc = 0x2436D4u;
    // 0x2436d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2436d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2436d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2436d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2436dc:
    // 0x2436dc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2436dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2436e0: 0x24420bc0  addiu       $v0, $v0, 0xBC0
    ctx->pc = 0x2436e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3008));
    // 0x2436e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2436e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2436e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2436e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2436ec: 0xc089664  jal         func_225990
    ctx->pc = 0x2436ECu;
    SET_GPR_U32(ctx, 31, 0x2436F4u);
    ctx->pc = 0x2436F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2436ECu;
            // 0x2436f0: 0x8ea40188  lw          $a0, 0x188($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436F4u; }
        if (ctx->pc != 0x2436F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2436F4u; }
        if (ctx->pc != 0x2436F4u) { return; }
    }
    ctx->pc = 0x2436F4u;
label_2436f4:
    // 0x2436f4: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2436f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2436f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2436f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2436fc: 0x2463dac0  addiu       $v1, $v1, -0x2540
    ctx->pc = 0x2436fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957760));
    // 0x243700: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x243700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x243704: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x243704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x243708: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x243708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x24370c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x24370Cu;
    {
        const bool branch_taken_0x24370c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x243710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24370Cu;
            // 0x243710: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24370c) {
            ctx->pc = 0x2436DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2436dc;
        }
    }
    ctx->pc = 0x243714u;
    // 0x243714: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x243714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x243718: 0x8c250bf0  lw          $a1, 0xBF0($at)
    ctx->pc = 0x243718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3056)));
    // 0x24371c: 0xc089664  jal         func_225990
    ctx->pc = 0x24371Cu;
    SET_GPR_U32(ctx, 31, 0x243724u);
    ctx->pc = 0x243720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24371Cu;
            // 0x243720: 0x8ea40188  lw          $a0, 0x188($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243724u; }
        if (ctx->pc != 0x243724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243724u; }
        if (ctx->pc != 0x243724u) { return; }
    }
    ctx->pc = 0x243724u;
label_243724:
    // 0x243724: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x243728: 0xac22daf0  sw          $v0, -0x2510($at)
    ctx->pc = 0x243728u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957808), GPR_U32(ctx, 2));
    // 0x24372c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x24372cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x243730: 0x8c250bf4  lw          $a1, 0xBF4($at)
    ctx->pc = 0x243730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3060)));
    // 0x243734: 0xc089664  jal         func_225990
    ctx->pc = 0x243734u;
    SET_GPR_U32(ctx, 31, 0x24373Cu);
    ctx->pc = 0x243738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243734u;
            // 0x243738: 0x8ea40188  lw          $a0, 0x188($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24373Cu; }
        if (ctx->pc != 0x24373Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24373Cu; }
        if (ctx->pc != 0x24373Cu) { return; }
    }
    ctx->pc = 0x24373Cu;
label_24373c:
    // 0x24373c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24373cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x243740: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243744: 0xac22daf4  sw          $v0, -0x250C($at)
    ctx->pc = 0x243744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957812), GPR_U32(ctx, 2));
    // 0x243748: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x243748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24374c:
    // 0x24374c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x243750: 0x24420bf0  addiu       $v0, $v0, 0xBF0
    ctx->pc = 0x243750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3056));
    // 0x243754: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x243754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x243758: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x243758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24375c: 0xc089664  jal         func_225990
    ctx->pc = 0x24375Cu;
    SET_GPR_U32(ctx, 31, 0x243764u);
    ctx->pc = 0x243760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24375Cu;
            // 0x243760: 0x8ea40188  lw          $a0, 0x188($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243764u; }
        if (ctx->pc != 0x243764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243764u; }
        if (ctx->pc != 0x243764u) { return; }
    }
    ctx->pc = 0x243764u;
label_243764:
    // 0x243764: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x243764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x243768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x243768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24376c: 0x2463daf0  addiu       $v1, $v1, -0x2510
    ctx->pc = 0x24376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957808));
    // 0x243770: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x243770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x243774: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x243774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x243778: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x243778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x24377c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x24377Cu;
    {
        const bool branch_taken_0x24377c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x243780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24377Cu;
            // 0x243780: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24377c) {
            ctx->pc = 0x24374Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24374c;
        }
    }
    ctx->pc = 0x243784u;
    // 0x243784: 0x8eb0018c  lw          $s0, 0x18C($s5)
    ctx->pc = 0x243784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 396)));
    // 0x243788: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24378c: 0x24a5b150  addiu       $a1, $a1, -0x4EB0
    ctx->pc = 0x24378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947152));
    // 0x243790: 0xc089664  jal         func_225990
    ctx->pc = 0x243790u;
    SET_GPR_U32(ctx, 31, 0x243798u);
    ctx->pc = 0x243794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243790u;
            // 0x243794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243798u; }
        if (ctx->pc != 0x243798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243798u; }
        if (ctx->pc != 0x243798u) { return; }
    }
    ctx->pc = 0x243798u;
label_243798:
    // 0x243798: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24379c: 0xaea202f0  sw          $v0, 0x2F0($s5)
    ctx->pc = 0x24379cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 752), GPR_U32(ctx, 2));
    // 0x2437a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2437a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437a4: 0xc089664  jal         func_225990
    ctx->pc = 0x2437A4u;
    SET_GPR_U32(ctx, 31, 0x2437ACu);
    ctx->pc = 0x2437A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2437A4u;
            // 0x2437a8: 0x24a5b158  addiu       $a1, $a1, -0x4EA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437ACu; }
        if (ctx->pc != 0x2437ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437ACu; }
        if (ctx->pc != 0x2437ACu) { return; }
    }
    ctx->pc = 0x2437ACu;
label_2437ac:
    // 0x2437ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2437acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2437b0: 0xaea202a0  sw          $v0, 0x2A0($s5)
    ctx->pc = 0x2437b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 672), GPR_U32(ctx, 2));
    // 0x2437b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2437b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437b8: 0xc089664  jal         func_225990
    ctx->pc = 0x2437B8u;
    SET_GPR_U32(ctx, 31, 0x2437C0u);
    ctx->pc = 0x2437BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2437B8u;
            // 0x2437bc: 0x24a5b0d8  addiu       $a1, $a1, -0x4F28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437C0u; }
        if (ctx->pc != 0x2437C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437C0u; }
        if (ctx->pc != 0x2437C0u) { return; }
    }
    ctx->pc = 0x2437C0u;
label_2437c0:
    // 0x2437c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2437c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2437c4: 0xaea202a4  sw          $v0, 0x2A4($s5)
    ctx->pc = 0x2437c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 676), GPR_U32(ctx, 2));
    // 0x2437c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2437c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437cc: 0xc089664  jal         func_225990
    ctx->pc = 0x2437CCu;
    SET_GPR_U32(ctx, 31, 0x2437D4u);
    ctx->pc = 0x2437D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2437CCu;
            // 0x2437d0: 0x24a5b0e0  addiu       $a1, $a1, -0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437D4u; }
        if (ctx->pc != 0x2437D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437D4u; }
        if (ctx->pc != 0x2437D4u) { return; }
    }
    ctx->pc = 0x2437D4u;
label_2437d4:
    // 0x2437d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2437d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2437d8: 0xaea202a8  sw          $v0, 0x2A8($s5)
    ctx->pc = 0x2437d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 680), GPR_U32(ctx, 2));
    // 0x2437dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2437dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437e0: 0xc089664  jal         func_225990
    ctx->pc = 0x2437E0u;
    SET_GPR_U32(ctx, 31, 0x2437E8u);
    ctx->pc = 0x2437E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2437E0u;
            // 0x2437e4: 0x24a5b0e8  addiu       $a1, $a1, -0x4F18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437E8u; }
        if (ctx->pc != 0x2437E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437E8u; }
        if (ctx->pc != 0x2437E8u) { return; }
    }
    ctx->pc = 0x2437E8u;
label_2437e8:
    // 0x2437e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2437ec: 0xaea202ac  sw          $v0, 0x2AC($s5)
    ctx->pc = 0x2437ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 684), GPR_U32(ctx, 2));
    // 0x2437f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2437f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437f4: 0xc089664  jal         func_225990
    ctx->pc = 0x2437F4u;
    SET_GPR_U32(ctx, 31, 0x2437FCu);
    ctx->pc = 0x2437F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2437F4u;
            // 0x2437f8: 0x24a5b0f0  addiu       $a1, $a1, -0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437FCu; }
        if (ctx->pc != 0x2437FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437FCu; }
        if (ctx->pc != 0x2437FCu) { return; }
    }
    ctx->pc = 0x2437FCu;
label_2437fc:
    // 0x2437fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243804: 0xaea202b0  sw          $v0, 0x2B0($s5)
    ctx->pc = 0x243804u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 688), GPR_U32(ctx, 2));
    // 0x243808: 0xc089664  jal         func_225990
    ctx->pc = 0x243808u;
    SET_GPR_U32(ctx, 31, 0x243810u);
    ctx->pc = 0x24380Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243808u;
            // 0x24380c: 0x24a5b0f8  addiu       $a1, $a1, -0x4F08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243810u; }
        if (ctx->pc != 0x243810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243810u; }
        if (ctx->pc != 0x243810u) { return; }
    }
    ctx->pc = 0x243810u;
label_243810:
    // 0x243810: 0xaea202b4  sw          $v0, 0x2B4($s5)
    ctx->pc = 0x243810u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 692), GPR_U32(ctx, 2));
    // 0x243814: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243818: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x243818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x24381c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x24381Cu;
    SET_GPR_U32(ctx, 31, 0x243824u);
    ctx->pc = 0x243820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24381Cu;
            // 0x243820: 0x24a5b160  addiu       $a1, $a1, -0x4EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243824u; }
        if (ctx->pc != 0x243824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243824u; }
        if (ctx->pc != 0x243824u) { return; }
    }
    ctx->pc = 0x243824u;
label_243824:
    // 0x243824: 0xaea2019c  sw          $v0, 0x19C($s5)
    ctx->pc = 0x243824u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 412), GPR_U32(ctx, 2));
    // 0x243828: 0xaea001b4  sw          $zero, 0x1B4($s5)
    ctx->pc = 0x243828u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 436), GPR_U32(ctx, 0));
    // 0x24382c: 0x8ea4019c  lw          $a0, 0x19C($s5)
    ctx->pc = 0x24382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 412)));
    // 0x243830: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243830u;
    {
        const bool branch_taken_0x243830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x243834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243830u;
            // 0x243834: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243830) {
            ctx->pc = 0x243844u;
            goto label_243844;
        }
    }
    ctx->pc = 0x243838u;
    // 0x243838: 0xc089664  jal         func_225990
    ctx->pc = 0x243838u;
    SET_GPR_U32(ctx, 31, 0x243840u);
    ctx->pc = 0x24383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243838u;
            // 0x24383c: 0x24a5b168  addiu       $a1, $a1, -0x4E98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243840u; }
        if (ctx->pc != 0x243840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243840u; }
        if (ctx->pc != 0x243840u) { return; }
    }
    ctx->pc = 0x243840u;
label_243840:
    // 0x243840: 0xaea201b4  sw          $v0, 0x1B4($s5)
    ctx->pc = 0x243840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 436), GPR_U32(ctx, 2));
label_243844:
    // 0x243844: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x243844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x243848: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24384c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x24384Cu;
    SET_GPR_U32(ctx, 31, 0x243854u);
    ctx->pc = 0x243850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24384Cu;
            // 0x243850: 0x24a5b170  addiu       $a1, $a1, -0x4E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243854u; }
        if (ctx->pc != 0x243854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243854u; }
        if (ctx->pc != 0x243854u) { return; }
    }
    ctx->pc = 0x243854u;
label_243854:
    // 0x243854: 0xaea201a4  sw          $v0, 0x1A4($s5)
    ctx->pc = 0x243854u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 420), GPR_U32(ctx, 2));
    // 0x243858: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24385c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24385cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x243860: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x243860u;
    SET_GPR_U32(ctx, 31, 0x243868u);
    ctx->pc = 0x243864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243860u;
            // 0x243864: 0x24a5b180  addiu       $a1, $a1, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243868u; }
        if (ctx->pc != 0x243868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243868u; }
        if (ctx->pc != 0x243868u) { return; }
    }
    ctx->pc = 0x243868u;
label_243868:
    // 0x243868: 0xaea201b0  sw          $v0, 0x1B0($s5)
    ctx->pc = 0x243868u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 432), GPR_U32(ctx, 2));
    // 0x24386c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24386cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243870: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x243870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x243874: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x243874u;
    SET_GPR_U32(ctx, 31, 0x24387Cu);
    ctx->pc = 0x243878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243874u;
            // 0x243878: 0x24a5b198  addiu       $a1, $a1, -0x4E68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24387Cu; }
        if (ctx->pc != 0x24387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24387Cu; }
        if (ctx->pc != 0x24387Cu) { return; }
    }
    ctx->pc = 0x24387Cu;
label_24387c:
    // 0x24387c: 0xaea201a8  sw          $v0, 0x1A8($s5)
    ctx->pc = 0x24387cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 424), GPR_U32(ctx, 2));
    // 0x243880: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243884: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x243884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x243888: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x243888u;
    SET_GPR_U32(ctx, 31, 0x243890u);
    ctx->pc = 0x24388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243888u;
            // 0x24388c: 0x24a5b1a8  addiu       $a1, $a1, -0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243890u; }
        if (ctx->pc != 0x243890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243890u; }
        if (ctx->pc != 0x243890u) { return; }
    }
    ctx->pc = 0x243890u;
label_243890:
    // 0x243890: 0xaea201ac  sw          $v0, 0x1AC($s5)
    ctx->pc = 0x243890u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 428), GPR_U32(ctx, 2));
    // 0x243894: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x243898: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x243898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x24389c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x24389Cu;
    SET_GPR_U32(ctx, 31, 0x2438A4u);
    ctx->pc = 0x2438A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24389Cu;
            // 0x2438a0: 0x24a5b1b8  addiu       $a1, $a1, -0x4E48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438A4u; }
        if (ctx->pc != 0x2438A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438A4u; }
        if (ctx->pc != 0x2438A4u) { return; }
    }
    ctx->pc = 0x2438A4u;
label_2438a4:
    // 0x2438a4: 0xaf829364  sw          $v0, -0x6C9C($gp)
    ctx->pc = 0x2438a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939492), GPR_U32(ctx, 2));
    // 0x2438a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2438a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2438ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2438acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2438b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2438b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2438b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2438b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2438b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2438b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2438bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2438bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2438c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2438c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2438c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2438c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2438c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2438c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2438cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2438CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2438D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438CCu;
            // 0x2438d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2438D4u;
}
