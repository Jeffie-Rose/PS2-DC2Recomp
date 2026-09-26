#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PARTS_ORIGIN__FP12RS_STACKDATAi
// Address: 0x277370 - 0x277548
void ps2__GET_PARTS_ORIGIN__FP12RS_STACKDATAi_0x277370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PARTS_ORIGIN__FP12RS_STACKDATAi_0x277370");
#endif

    switch (ctx->pc) {
        case 0x277370u: goto label_277370;
        case 0x277374u: goto label_277374;
        case 0x277378u: goto label_277378;
        case 0x27737cu: goto label_27737c;
        case 0x277380u: goto label_277380;
        case 0x277384u: goto label_277384;
        case 0x277388u: goto label_277388;
        case 0x27738cu: goto label_27738c;
        case 0x277390u: goto label_277390;
        case 0x277394u: goto label_277394;
        case 0x277398u: goto label_277398;
        case 0x27739cu: goto label_27739c;
        case 0x2773a0u: goto label_2773a0;
        case 0x2773a4u: goto label_2773a4;
        case 0x2773a8u: goto label_2773a8;
        case 0x2773acu: goto label_2773ac;
        case 0x2773b0u: goto label_2773b0;
        case 0x2773b4u: goto label_2773b4;
        case 0x2773b8u: goto label_2773b8;
        case 0x2773bcu: goto label_2773bc;
        case 0x2773c0u: goto label_2773c0;
        case 0x2773c4u: goto label_2773c4;
        case 0x2773c8u: goto label_2773c8;
        case 0x2773ccu: goto label_2773cc;
        case 0x2773d0u: goto label_2773d0;
        case 0x2773d4u: goto label_2773d4;
        case 0x2773d8u: goto label_2773d8;
        case 0x2773dcu: goto label_2773dc;
        case 0x2773e0u: goto label_2773e0;
        case 0x2773e4u: goto label_2773e4;
        case 0x2773e8u: goto label_2773e8;
        case 0x2773ecu: goto label_2773ec;
        case 0x2773f0u: goto label_2773f0;
        case 0x2773f4u: goto label_2773f4;
        case 0x2773f8u: goto label_2773f8;
        case 0x2773fcu: goto label_2773fc;
        case 0x277400u: goto label_277400;
        case 0x277404u: goto label_277404;
        case 0x277408u: goto label_277408;
        case 0x27740cu: goto label_27740c;
        case 0x277410u: goto label_277410;
        case 0x277414u: goto label_277414;
        case 0x277418u: goto label_277418;
        case 0x27741cu: goto label_27741c;
        case 0x277420u: goto label_277420;
        case 0x277424u: goto label_277424;
        case 0x277428u: goto label_277428;
        case 0x27742cu: goto label_27742c;
        case 0x277430u: goto label_277430;
        case 0x277434u: goto label_277434;
        case 0x277438u: goto label_277438;
        case 0x27743cu: goto label_27743c;
        case 0x277440u: goto label_277440;
        case 0x277444u: goto label_277444;
        case 0x277448u: goto label_277448;
        case 0x27744cu: goto label_27744c;
        case 0x277450u: goto label_277450;
        case 0x277454u: goto label_277454;
        case 0x277458u: goto label_277458;
        case 0x27745cu: goto label_27745c;
        case 0x277460u: goto label_277460;
        case 0x277464u: goto label_277464;
        case 0x277468u: goto label_277468;
        case 0x27746cu: goto label_27746c;
        case 0x277470u: goto label_277470;
        case 0x277474u: goto label_277474;
        case 0x277478u: goto label_277478;
        case 0x27747cu: goto label_27747c;
        case 0x277480u: goto label_277480;
        case 0x277484u: goto label_277484;
        case 0x277488u: goto label_277488;
        case 0x27748cu: goto label_27748c;
        case 0x277490u: goto label_277490;
        case 0x277494u: goto label_277494;
        case 0x277498u: goto label_277498;
        case 0x27749cu: goto label_27749c;
        case 0x2774a0u: goto label_2774a0;
        case 0x2774a4u: goto label_2774a4;
        case 0x2774a8u: goto label_2774a8;
        case 0x2774acu: goto label_2774ac;
        case 0x2774b0u: goto label_2774b0;
        case 0x2774b4u: goto label_2774b4;
        case 0x2774b8u: goto label_2774b8;
        case 0x2774bcu: goto label_2774bc;
        case 0x2774c0u: goto label_2774c0;
        case 0x2774c4u: goto label_2774c4;
        case 0x2774c8u: goto label_2774c8;
        case 0x2774ccu: goto label_2774cc;
        case 0x2774d0u: goto label_2774d0;
        case 0x2774d4u: goto label_2774d4;
        case 0x2774d8u: goto label_2774d8;
        case 0x2774dcu: goto label_2774dc;
        case 0x2774e0u: goto label_2774e0;
        case 0x2774e4u: goto label_2774e4;
        case 0x2774e8u: goto label_2774e8;
        case 0x2774ecu: goto label_2774ec;
        case 0x2774f0u: goto label_2774f0;
        case 0x2774f4u: goto label_2774f4;
        case 0x2774f8u: goto label_2774f8;
        case 0x2774fcu: goto label_2774fc;
        case 0x277500u: goto label_277500;
        case 0x277504u: goto label_277504;
        case 0x277508u: goto label_277508;
        case 0x27750cu: goto label_27750c;
        case 0x277510u: goto label_277510;
        case 0x277514u: goto label_277514;
        case 0x277518u: goto label_277518;
        case 0x27751cu: goto label_27751c;
        case 0x277520u: goto label_277520;
        case 0x277524u: goto label_277524;
        case 0x277528u: goto label_277528;
        case 0x27752cu: goto label_27752c;
        case 0x277530u: goto label_277530;
        case 0x277534u: goto label_277534;
        case 0x277538u: goto label_277538;
        case 0x27753cu: goto label_27753c;
        case 0x277540u: goto label_277540;
        case 0x277544u: goto label_277544;
        default: break;
    }

    ctx->pc = 0x277370u;

label_277370:
    // 0x277370: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x277370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_277374:
    // 0x277374: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x277374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_277378:
    // 0x277378: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x277378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_27737c:
    // 0x27737c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_277380:
    // 0x277380: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x277380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_277384:
    // 0x277384: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x277384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_277388:
    // 0x277388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x277388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27738c:
    // 0x27738c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_277390:
    // 0x277390: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x277390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_277394:
    // 0x277394: 0xc097e28  jal         func_25F8A0
label_277398:
    if (ctx->pc == 0x277398u) {
        ctx->pc = 0x277398u;
            // 0x277398: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27739Cu;
        goto label_27739c;
    }
    ctx->pc = 0x277394u;
    SET_GPR_U32(ctx, 31, 0x27739Cu);
    ctx->pc = 0x277398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277394u;
            // 0x277398: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27739Cu; }
        if (ctx->pc != 0x27739Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27739Cu; }
        if (ctx->pc != 0x27739Cu) { return; }
    }
    ctx->pc = 0x27739Cu;
label_27739c:
    // 0x27739c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2773a0:
    // 0x2773a0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2773a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2773a4:
    // 0x2773a4: 0xc097e28  jal         func_25F8A0
label_2773a8:
    if (ctx->pc == 0x2773A8u) {
        ctx->pc = 0x2773A8u;
            // 0x2773a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2773ACu;
        goto label_2773ac;
    }
    ctx->pc = 0x2773A4u;
    SET_GPR_U32(ctx, 31, 0x2773ACu);
    ctx->pc = 0x2773A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2773A4u;
            // 0x2773a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2773ACu; }
        if (ctx->pc != 0x2773ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2773ACu; }
        if (ctx->pc != 0x2773ACu) { return; }
    }
    ctx->pc = 0x2773ACu;
label_2773ac:
    // 0x2773ac: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x2773acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_2773b0:
    // 0x2773b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2773b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2773b4:
    // 0x2773b4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2773b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2773b8:
    // 0x2773b8: 0xc097e28  jal         func_25F8A0
label_2773bc:
    if (ctx->pc == 0x2773BCu) {
        ctx->pc = 0x2773BCu;
            // 0x2773bc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2773C0u;
        goto label_2773c0;
    }
    ctx->pc = 0x2773B8u;
    SET_GPR_U32(ctx, 31, 0x2773C0u);
    ctx->pc = 0x2773BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2773B8u;
            // 0x2773bc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2773C0u; }
        if (ctx->pc != 0x2773C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2773C0u; }
        if (ctx->pc != 0x2773C0u) { return; }
    }
    ctx->pc = 0x2773C0u;
label_2773c0:
    // 0x2773c0: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x2773c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_2773c4:
    // 0x2773c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2773c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2773c8:
    // 0x2773c8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2773c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2773cc:
    // 0x2773cc: 0xc097e28  jal         func_25F8A0
label_2773d0:
    if (ctx->pc == 0x2773D0u) {
        ctx->pc = 0x2773D0u;
            // 0x2773d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2773D4u;
        goto label_2773d4;
    }
    ctx->pc = 0x2773CCu;
    SET_GPR_U32(ctx, 31, 0x2773D4u);
    ctx->pc = 0x2773D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2773CCu;
            // 0x2773d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2773D4u; }
        if (ctx->pc != 0x2773D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2773D4u; }
        if (ctx->pc != 0x2773D4u) { return; }
    }
    ctx->pc = 0x2773D4u;
label_2773d4:
    // 0x2773d4: 0x27b1008c  addiu       $s1, $sp, 0x8C
    ctx->pc = 0x2773d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2773d8:
    // 0x2773d8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2773d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2773dc:
    // 0x2773dc: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2773dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2773e0:
    // 0x2773e0: 0xc0a0f58  jal         func_283D60
label_2773e4:
    if (ctx->pc == 0x2773E4u) {
        ctx->pc = 0x2773E4u;
            // 0x2773e4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x2773E8u;
        goto label_2773e8;
    }
    ctx->pc = 0x2773E0u;
    SET_GPR_U32(ctx, 31, 0x2773E8u);
    ctx->pc = 0x2773E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2773E0u;
            // 0x2773e4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2773E8u; }
        if (ctx->pc != 0x2773E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2773E8u; }
        if (ctx->pc != 0x2773E8u) { return; }
    }
    ctx->pc = 0x2773E8u;
label_2773e8:
    // 0x2773e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2773ec:
    if (ctx->pc == 0x2773ECu) {
        ctx->pc = 0x2773F0u;
        goto label_2773f0;
    }
    ctx->pc = 0x2773E8u;
    {
        const bool branch_taken_0x2773e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2773e8) {
            ctx->pc = 0x2773F8u;
            goto label_2773f8;
        }
    }
    ctx->pc = 0x2773F0u;
label_2773f0:
    // 0x2773f0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2773f4:
    if (ctx->pc == 0x2773F4u) {
        ctx->pc = 0x2773F4u;
            // 0x2773f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2773F8u;
        goto label_2773f8;
    }
    ctx->pc = 0x2773F0u;
    {
        const bool branch_taken_0x2773f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2773F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2773F0u;
            // 0x2773f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773f0) {
            ctx->pc = 0x277520u;
            goto label_277520;
        }
    }
    ctx->pc = 0x2773F8u;
label_2773f8:
    // 0x2773f8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2773f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2773fc:
    // 0x2773fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2773fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_277400:
    // 0x277400: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x277400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277404:
    // 0x277404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277408:
    // 0x277408: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x277408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27740c:
    // 0x27740c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x27740cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_277410:
    // 0x277410: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x277410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_277414:
    // 0x277414: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x277414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_277418:
    // 0x277418: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x277418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_27741c:
    // 0x27741c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x27741cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_277420:
    // 0x277420: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x277420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_277424:
    // 0x277424: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x277424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277428:
    // 0x277428: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x277428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_27742c:
    // 0x27742c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x27742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_277430:
    // 0x277430: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x277430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_277434:
    // 0x277434: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x277434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_277438:
    // 0x277438: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x277438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27743c:
    // 0x27743c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x27743cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_277440:
    // 0x277440: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x277440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_277444:
    // 0x277444: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x277444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_277448:
    // 0x277448: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x277448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_27744c:
    // 0x27744c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x27744cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_277450:
    // 0x277450: 0xc057554  jal         func_15D550
label_277454:
    if (ctx->pc == 0x277454u) {
        ctx->pc = 0x277454u;
            // 0x277454: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x277458u;
        goto label_277458;
    }
    ctx->pc = 0x277450u;
    SET_GPR_U32(ctx, 31, 0x277458u);
    ctx->pc = 0x277454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277450u;
            // 0x277454: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D550u;
    if (runtime->hasFunction(0x15D550u)) {
        auto targetFn = runtime->lookupFunction(0x15D550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277458u; }
        if (ctx->pc != 0x277458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFP9mgVu0FBOXPP9CMapPartsi_0x15d550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277458u; }
        if (ctx->pc != 0x277458u) { return; }
    }
    ctx->pc = 0x277458u;
label_277458:
    // 0x277458: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x277458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27745c:
    // 0x27745c: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
label_277460:
    if (ctx->pc == 0x277460u) {
        ctx->pc = 0x277460u;
            // 0x277460: 0x3c024974  lui         $v0, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
        ctx->pc = 0x277464u;
        goto label_277464;
    }
    ctx->pc = 0x27745Cu;
    {
        const bool branch_taken_0x27745c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x277460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27745Cu;
            // 0x277460: 0x3c024974  lui         $v0, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27745c) {
            ctx->pc = 0x27746Cu;
            goto label_27746c;
        }
    }
    ctx->pc = 0x277464u;
label_277464:
    // 0x277464: 0x1000002e  b           . + 4 + (0x2E << 2)
label_277468:
    if (ctx->pc == 0x277468u) {
        ctx->pc = 0x277468u;
            // 0x277468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27746Cu;
        goto label_27746c;
    }
    ctx->pc = 0x277464u;
    {
        const bool branch_taken_0x277464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277464u;
            // 0x277468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277464) {
            ctx->pc = 0x277520u;
            goto label_277520;
        }
    }
    ctx->pc = 0x27746Cu;
label_27746c:
    // 0x27746c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x27746cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_277470:
    // 0x277470: 0x27b400d4  addiu       $s4, $sp, 0xD4
    ctx->pc = 0x277470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_277474:
    // 0x277474: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x277474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_277478:
    // 0x277478: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x277478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_27747c:
    // 0x27747c: 0x27b500d8  addiu       $s5, $sp, 0xD8
    ctx->pc = 0x27747cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_277480:
    // 0x277480: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x277480u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_277484:
    // 0x277484: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x277484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_277488:
    // 0x277488: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x277488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_27748c:
    // 0x27748c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x27748cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_277490:
    // 0x277490: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_277494:
    if (ctx->pc == 0x277494u) {
        ctx->pc = 0x277494u;
            // 0x277494: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277498u;
        goto label_277498;
    }
    ctx->pc = 0x277490u;
    {
        const bool branch_taken_0x277490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x277494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277490u;
            // 0x277494: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277490) {
            ctx->pc = 0x2774F0u;
            goto label_2774f0;
        }
    }
    ctx->pc = 0x277498u;
label_277498:
    // 0x277498: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x277498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27749c:
    // 0x27749c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x27749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2774a0:
    // 0x2774a0: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2774a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2774a4:
    // 0x2774a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2774a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2774a8:
    // 0x2774a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2774a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2774ac:
    // 0x2774ac: 0x320f809  jalr        $t9
label_2774b0:
    if (ctx->pc == 0x2774B0u) {
        ctx->pc = 0x2774B0u;
            // 0x2774b0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2774B4u;
        goto label_2774b4;
    }
    ctx->pc = 0x2774ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2774B4u);
        ctx->pc = 0x2774B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2774ACu;
            // 0x2774b0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2774B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2774B4u; }
            if (ctx->pc != 0x2774B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2774B4u;
label_2774b4:
    // 0x2774b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2774b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2774b8:
    // 0x2774b8: 0xc04c018  jal         func_130060
label_2774bc:
    if (ctx->pc == 0x2774BCu) {
        ctx->pc = 0x2774BCu;
            // 0x2774bc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2774C0u;
        goto label_2774c0;
    }
    ctx->pc = 0x2774B8u;
    SET_GPR_U32(ctx, 31, 0x2774C0u);
    ctx->pc = 0x2774BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2774B8u;
            // 0x2774bc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2774C0u; }
        if (ctx->pc != 0x2774C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2774C0u; }
        if (ctx->pc != 0x2774C0u) { return; }
    }
    ctx->pc = 0x2774C0u;
label_2774c0:
    // 0x2774c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2774c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2774c4:
    // 0x2774c4: 0x0  nop
    ctx->pc = 0x2774c4u;
    // NOP
label_2774c8:
    // 0x2774c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2774cc:
    if (ctx->pc == 0x2774CCu) {
        ctx->pc = 0x2774CCu;
            // 0x2774cc: 0x27a200e0  addiu       $v0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2774D0u;
        goto label_2774d0;
    }
    ctx->pc = 0x2774C8u;
    {
        const bool branch_taken_0x2774c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2774CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2774C8u;
            // 0x2774cc: 0x27a200e0  addiu       $v0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774c8) {
            ctx->pc = 0x2774E0u;
            goto label_2774e0;
        }
    }
    ctx->pc = 0x2774D0u;
label_2774d0:
    // 0x2774d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2774d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2774d4:
    // 0x2774d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2774d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2774d8:
    // 0x2774d8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2774d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2774dc:
    // 0x2774dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2774dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2774e0:
    // 0x2774e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2774e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2774e4:
    // 0x2774e4: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2774e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2774e8:
    // 0x2774e8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2774ec:
    if (ctx->pc == 0x2774ECu) {
        ctx->pc = 0x2774ECu;
            // 0x2774ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2774F0u;
        goto label_2774f0;
    }
    ctx->pc = 0x2774E8u;
    {
        const bool branch_taken_0x2774e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2774ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2774E8u;
            // 0x2774ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774e8) {
            ctx->pc = 0x27749Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27749c;
        }
    }
    ctx->pc = 0x2774F0u;
label_2774f0:
    // 0x2774f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2774f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2774f4:
    // 0x2774f4: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x2774f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2774f8:
    // 0x2774f8: 0xc097e54  jal         func_25F950
label_2774fc:
    if (ctx->pc == 0x2774FCu) {
        ctx->pc = 0x2774FCu;
            // 0x2774fc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x277500u;
        goto label_277500;
    }
    ctx->pc = 0x2774F8u;
    SET_GPR_U32(ctx, 31, 0x277500u);
    ctx->pc = 0x2774FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2774F8u;
            // 0x2774fc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277500u; }
        if (ctx->pc != 0x277500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277500u; }
        if (ctx->pc != 0x277500u) { return; }
    }
    ctx->pc = 0x277500u;
label_277500:
    // 0x277500: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x277500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_277504:
    // 0x277504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277508:
    // 0x277508: 0xc097e54  jal         func_25F950
label_27750c:
    if (ctx->pc == 0x27750Cu) {
        ctx->pc = 0x27750Cu;
            // 0x27750c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x277510u;
        goto label_277510;
    }
    ctx->pc = 0x277508u;
    SET_GPR_U32(ctx, 31, 0x277510u);
    ctx->pc = 0x27750Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277508u;
            // 0x27750c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277510u; }
        if (ctx->pc != 0x277510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277510u; }
        if (ctx->pc != 0x277510u) { return; }
    }
    ctx->pc = 0x277510u;
label_277510:
    // 0x277510: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x277510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_277514:
    // 0x277514: 0xc097e54  jal         func_25F950
label_277518:
    if (ctx->pc == 0x277518u) {
        ctx->pc = 0x277518u;
            // 0x277518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27751Cu;
        goto label_27751c;
    }
    ctx->pc = 0x277514u;
    SET_GPR_U32(ctx, 31, 0x27751Cu);
    ctx->pc = 0x277518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277514u;
            // 0x277518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27751Cu; }
        if (ctx->pc != 0x27751Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27751Cu; }
        if (ctx->pc != 0x27751Cu) { return; }
    }
    ctx->pc = 0x27751Cu;
label_27751c:
    // 0x27751c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277520:
    // 0x277520: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x277520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_277524:
    // 0x277524: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x277524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_277528:
    // 0x277528: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x277528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27752c:
    // 0x27752c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27752cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_277530:
    // 0x277530: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x277530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_277534:
    // 0x277534: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x277534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_277538:
    // 0x277538: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x277538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27753c:
    // 0x27753c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27753cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_277540:
    // 0x277540: 0x3e00008  jr          $ra
label_277544:
    if (ctx->pc == 0x277544u) {
        ctx->pc = 0x277544u;
            // 0x277544: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x277548u;
        goto label_fallthrough_0x277540;
    }
    ctx->pc = 0x277540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277540u;
            // 0x277544: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x277540:
    ctx->pc = 0x277548u;
}
