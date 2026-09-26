#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventInit__Fv
// Address: 0x2614f0 - 0x2617a4
void EdEventInit__Fv_0x2614f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventInit__Fv_0x2614f0");
#endif

    switch (ctx->pc) {
        case 0x261518u: goto label_261518;
        case 0x261524u: goto label_261524;
        case 0x261544u: goto label_261544;
        case 0x26156cu: goto label_26156c;
        case 0x261578u: goto label_261578;
        case 0x261598u: goto label_261598;
        case 0x2615acu: goto label_2615ac;
        case 0x2615b8u: goto label_2615b8;
        case 0x2615c4u: goto label_2615c4;
        case 0x2615e8u: goto label_2615e8;
        case 0x2615fcu: goto label_2615fc;
        case 0x261618u: goto label_261618;
        case 0x261630u: goto label_261630;
        case 0x261638u: goto label_261638;
        case 0x261640u: goto label_261640;
        case 0x261648u: goto label_261648;
        case 0x261658u: goto label_261658;
        case 0x261790u: goto label_261790;
        default: break;
    }

    ctx->pc = 0x2614f0u;

    // 0x2614f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2614f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2614f4: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x2614f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x2614f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2614f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2614fc: 0x3c0501ee  lui         $a1, 0x1EE
    ctx->pc = 0x2614fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)494 << 16));
    // 0x261500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x261500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x261504: 0x248483a0  addiu       $a0, $a0, -0x7C60
    ctx->pc = 0x261504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935456));
    // 0x261508: 0x24a50390  addiu       $a1, $a1, 0x390
    ctx->pc = 0x261508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 912));
    // 0x26150c: 0x24060801  addiu       $a2, $zero, 0x801
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x261510: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x261510u;
    SET_GPR_U32(ctx, 31, 0x261518u);
    ctx->pc = 0x261514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261510u;
            // 0x261514: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261518u; }
        if (ctx->pc != 0x261518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261518u; }
        if (ctx->pc != 0x261518u) { return; }
    }
    ctx->pc = 0x261518u;
label_261518:
    // 0x261518: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x261518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x26151c: 0xc04a422  jal         func_129088
    ctx->pc = 0x26151Cu;
    SET_GPR_U32(ctx, 31, 0x261524u);
    ctx->pc = 0x261520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26151Cu;
            // 0x261520: 0x2484c500  addiu       $a0, $a0, -0x3B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261524u; }
        if (ctx->pc != 0x261524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261524u; }
        if (ctx->pc != 0x261524u) { return; }
    }
    ctx->pc = 0x261524u;
label_261524:
    // 0x261524: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x261524u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x261528: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x261528u;
    {
        const bool branch_taken_0x261528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x261528) {
            ctx->pc = 0x261544u;
            goto label_261544;
        }
    }
    ctx->pc = 0x261530u;
    // 0x261530: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x261534: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x261534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x261538: 0x248483a0  addiu       $a0, $a0, -0x7C60
    ctx->pc = 0x261538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935456));
    // 0x26153c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x26153Cu;
    SET_GPR_U32(ctx, 31, 0x261544u);
    ctx->pc = 0x261540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26153Cu;
            // 0x261540: 0x24a5c500  addiu       $a1, $a1, -0x3B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261544u; }
        if (ctx->pc != 0x261544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261544u; }
        if (ctx->pc != 0x261544u) { return; }
    }
    ctx->pc = 0x261544u;
label_261544:
    // 0x261544: 0x3c0101ef  lui         $at, 0x1EF
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)495 << 16));
    // 0x261548: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x261548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26154c: 0xac2083c4  sw          $zero, -0x7C3C($at)
    ctx->pc = 0x26154cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935492), GPR_U32(ctx, 0));
    // 0x261550: 0x3c0501ef  lui         $a1, 0x1EF
    ctx->pc = 0x261550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)495 << 16));
    // 0x261554: 0x3c0101ef  lui         $at, 0x1EF
    ctx->pc = 0x261554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)495 << 16));
    // 0x261558: 0x248497e0  addiu       $a0, $a0, -0x6820
    ctx->pc = 0x261558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940640));
    // 0x26155c: 0x24a583d0  addiu       $a1, $a1, -0x7C30
    ctx->pc = 0x26155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
    // 0x261560: 0x24060141  addiu       $a2, $zero, 0x141
    ctx->pc = 0x261560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x261564: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x261564u;
    SET_GPR_U32(ctx, 31, 0x26156Cu);
    ctx->pc = 0x261568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261564u;
            // 0x261568: 0xac2083bc  sw          $zero, -0x7C44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26156Cu; }
        if (ctx->pc != 0x26156Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26156Cu; }
        if (ctx->pc != 0x26156Cu) { return; }
    }
    ctx->pc = 0x26156Cu;
label_26156c:
    // 0x26156c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x26156cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x261570: 0xc04a422  jal         func_129088
    ctx->pc = 0x261570u;
    SET_GPR_U32(ctx, 31, 0x261578u);
    ctx->pc = 0x261574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261570u;
            // 0x261574: 0x2484c520  addiu       $a0, $a0, -0x3AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261578u; }
        if (ctx->pc != 0x261578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261578u; }
        if (ctx->pc != 0x261578u) { return; }
    }
    ctx->pc = 0x261578u;
label_261578:
    // 0x261578: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x261578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x26157c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x26157Cu;
    {
        const bool branch_taken_0x26157c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26157c) {
            ctx->pc = 0x261598u;
            goto label_261598;
        }
    }
    ctx->pc = 0x261584u;
    // 0x261584: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x261584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x261588: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x261588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26158c: 0x248497e0  addiu       $a0, $a0, -0x6820
    ctx->pc = 0x26158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940640));
    // 0x261590: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x261590u;
    SET_GPR_U32(ctx, 31, 0x261598u);
    ctx->pc = 0x261594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261590u;
            // 0x261594: 0x24a5c520  addiu       $a1, $a1, -0x3AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261598u; }
        if (ctx->pc != 0x261598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261598u; }
        if (ctx->pc != 0x261598u) { return; }
    }
    ctx->pc = 0x261598u;
label_261598:
    // 0x261598: 0x3c0101ef  lui         $at, 0x1EF
    ctx->pc = 0x261598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)495 << 16));
    // 0x26159c: 0xac209804  sw          $zero, -0x67FC($at)
    ctx->pc = 0x26159cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940676), GPR_U32(ctx, 0));
    // 0x2615a0: 0x3c0101ef  lui         $at, 0x1EF
    ctx->pc = 0x2615a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)495 << 16));
    // 0x2615a4: 0xc052234  jal         func_1488D0
    ctx->pc = 0x2615A4u;
    SET_GPR_U32(ctx, 31, 0x2615ACu);
    ctx->pc = 0x2615A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2615A4u;
            // 0x2615a8: 0xac2097fc  sw          $zero, -0x6804($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1488D0u;
    if (runtime->hasFunction(0x1488D0u)) {
        auto targetFn = runtime->lookupFunction(0x1488D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615ACu; }
        if (ctx->pc != 0x2615ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitReadBG__Fv_0x1488d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615ACu; }
        if (ctx->pc != 0x2615ACu) { return; }
    }
    ctx->pc = 0x2615ACu;
label_2615ac:
    // 0x2615ac: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x2615acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x2615b0: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x2615B0u;
    SET_GPR_U32(ctx, 31, 0x2615B8u);
    ctx->pc = 0x2615B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2615B0u;
            // 0x2615b4: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA760u;
    if (runtime->hasFunction(0x1EA760u)) {
        auto targetFn = runtime->lookupFunction(0x1EA760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615B8u; }
        if (ctx->pc != 0x2615B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CDngFreeMapFv_0x1ea760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615B8u; }
        if (ctx->pc != 0x2615B8u) { return; }
    }
    ctx->pc = 0x2615B8u;
label_2615b8:
    // 0x2615b8: 0xaf8097f0  sw          $zero, -0x6810($gp)
    ctx->pc = 0x2615b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940656), GPR_U32(ctx, 0));
    // 0x2615bc: 0xc0983dc  jal         func_260F70
    ctx->pc = 0x2615BCu;
    SET_GPR_U32(ctx, 31, 0x2615C4u);
    ctx->pc = 0x2615C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2615BCu;
            // 0x2615c0: 0xaf8097f4  sw          $zero, -0x680C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260F70u;
    if (runtime->hasFunction(0x260F70u)) {
        auto targetFn = runtime->lookupFunction(0x260F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615C4u; }
        if (ctx->pc != 0x2615C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitWorldCoord__Fv_0x260f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615C4u; }
        if (ctx->pc != 0x2615C4u) { return; }
    }
    ctx->pc = 0x2615C4u;
label_2615c4:
    // 0x2615c4: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x2615c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2615c8: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x2615c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x2615cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2615ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2615d0: 0x24840290  addiu       $a0, $a0, 0x290
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x2615d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2615d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2615d8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2615d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2615dc: 0xac602f60  sw          $zero, 0x2F60($v1)
    ctx->pc = 0x2615dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12128), GPR_U32(ctx, 0));
    // 0x2615e0: 0xc049c86  jal         func_127218
    ctx->pc = 0x2615E0u;
    SET_GPR_U32(ctx, 31, 0x2615E8u);
    ctx->pc = 0x2615E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2615E0u;
            // 0x2615e4: 0xaf8297f8  sw          $v0, -0x6808($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615E8u; }
        if (ctx->pc != 0x2615E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615E8u; }
        if (ctx->pc != 0x2615E8u) { return; }
    }
    ctx->pc = 0x2615E8u;
label_2615e8:
    // 0x2615e8: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x2615e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x2615ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2615ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2615f0: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x2615f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x2615f4: 0xc049c86  jal         func_127218
    ctx->pc = 0x2615F4u;
    SET_GPR_U32(ctx, 31, 0x2615FCu);
    ctx->pc = 0x2615F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2615F4u;
            // 0x2615f8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615FCu; }
        if (ctx->pc != 0x2615FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615FCu; }
        if (ctx->pc != 0x2615FCu) { return; }
    }
    ctx->pc = 0x2615FCu;
label_2615fc:
    // 0x2615fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2615fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x261600: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x261600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x261604: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x261604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x261608: 0xaf8297fc  sw          $v0, -0x6804($gp)
    ctx->pc = 0x261608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940668), GPR_U32(ctx, 2));
    // 0x26160c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26160cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261610: 0xc049c86  jal         func_127218
    ctx->pc = 0x261610u;
    SET_GPR_U32(ctx, 31, 0x261618u);
    ctx->pc = 0x261614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261610u;
            // 0x261614: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261618u; }
        if (ctx->pc != 0x261618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261618u; }
        if (ctx->pc != 0x261618u) { return; }
    }
    ctx->pc = 0x261618u;
label_261618:
    // 0x261618: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x261618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x26161c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261620: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x261620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x261624: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x261624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x261628: 0xc049c86  jal         func_127218
    ctx->pc = 0x261628u;
    SET_GPR_U32(ctx, 31, 0x261630u);
    ctx->pc = 0x26162Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261628u;
            // 0x26162c: 0xaf809800  sw          $zero, -0x6800($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261630u; }
        if (ctx->pc != 0x261630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261630u; }
        if (ctx->pc != 0x261630u) { return; }
    }
    ctx->pc = 0x261630u;
label_261630:
    // 0x261630: 0xc09847c  jal         func_2611F0
    ctx->pc = 0x261630u;
    SET_GPR_U32(ctx, 31, 0x261638u);
    ctx->pc = 0x261634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261630u;
            // 0x261634: 0xaf809804  sw          $zero, -0x67FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2611F0u;
    if (runtime->hasFunction(0x2611F0u)) {
        auto targetFn = runtime->lookupFunction(0x2611F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261638u; }
        if (ctx->pc != 0x261638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventInfoCommandInitialize__Fv_0x2611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261638u; }
        if (ctx->pc != 0x261638u) { return; }
    }
    ctx->pc = 0x261638u;
label_261638:
    // 0x261638: 0xc0984c0  jal         func_261300
    ctx->pc = 0x261638u;
    SET_GPR_U32(ctx, 31, 0x261640u);
    ctx->pc = 0x261300u;
    if (runtime->hasFunction(0x261300u)) {
        auto targetFn = runtime->lookupFunction(0x261300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261640u; }
        if (ctx->pc != 0x261640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventSeqInit__Fv_0x261300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261640u; }
        if (ctx->pc != 0x261640u) { return; }
    }
    ctx->pc = 0x261640u;
label_261640:
    // 0x261640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x261640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x261644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261648:
    // 0x261648: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x261648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x26164c: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x26164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
    // 0x261650: 0xc0a42a4  jal         func_290A90
    ctx->pc = 0x261650u;
    SET_GPR_U32(ctx, 31, 0x261658u);
    ctx->pc = 0x261654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261650u;
            // 0x261654: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290A90u;
    if (runtime->hasFunction(0x290A90u)) {
        auto targetFn = runtime->lookupFunction(0x290A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261658u; }
        if (ctx->pc != 0x261658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CEventSprite2Fv_0x290a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261658u; }
        if (ctx->pc != 0x261658u) { return; }
    }
    ctx->pc = 0x261658u;
label_261658:
    // 0x261658: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x261658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26165c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x26165cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x261660: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x261660u;
    {
        const bool branch_taken_0x261660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261660u;
            // 0x261664: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261660) {
            ctx->pc = 0x261648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261648;
        }
    }
    ctx->pc = 0x261668u;
    // 0x261668: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26166c: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x26166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x261670: 0xac2000d8  sw          $zero, 0xD8($at)
    ctx->pc = 0x261670u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 216), GPR_U32(ctx, 0));
    // 0x261674: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x261674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x261678: 0x24429cb0  addiu       $v0, $v0, -0x6350
    ctx->pc = 0x261678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
    // 0x26167c: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x26167cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261680: 0xac2200d0  sw          $v0, 0xD0($at)
    ctx->pc = 0x261680u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 208), GPR_U32(ctx, 2));
    // 0x261684: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x261684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x261688: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26168c: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x26168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x261690: 0xac2300dc  sw          $v1, 0xDC($at)
    ctx->pc = 0x261690u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 220), GPR_U32(ctx, 3));
    // 0x261694: 0x2442b0b0  addiu       $v0, $v0, -0x4F50
    ctx->pc = 0x261694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946992));
    // 0x261698: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26169c: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x26169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x2616a0: 0xac220130  sw          $v0, 0x130($at)
    ctx->pc = 0x2616a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 304), GPR_U32(ctx, 2));
    // 0x2616a4: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x2616a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x2616a8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2616a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2616ac: 0x2442c4b0  addiu       $v0, $v0, -0x3B50
    ctx->pc = 0x2616acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952112));
    // 0x2616b0: 0xaf8097e8  sw          $zero, -0x6818($gp)
    ctx->pc = 0x2616b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940648), GPR_U32(ctx, 0));
    // 0x2616b4: 0xac220190  sw          $v0, 0x190($at)
    ctx->pc = 0x2616b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 400), GPR_U32(ctx, 2));
    // 0x2616b8: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x2616b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x2616bc: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2616bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2616c0: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x2616c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x2616c4: 0xaf8097ec  sw          $zero, -0x6814($gp)
    ctx->pc = 0x2616c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940652), GPR_U32(ctx, 0));
    // 0x2616c8: 0xac2201f0  sw          $v0, 0x1F0($at)
    ctx->pc = 0x2616c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 496), GPR_U32(ctx, 2));
    // 0x2616cc: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x2616ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x2616d0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2616d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2616d4: 0x2442ecb0  addiu       $v0, $v0, -0x1350
    ctx->pc = 0x2616d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x2616d8: 0xac220250  sw          $v0, 0x250($at)
    ctx->pc = 0x2616d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 592), GPR_U32(ctx, 2));
    // 0x2616dc: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2616dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2616e0: 0xac2000d4  sw          $zero, 0xD4($at)
    ctx->pc = 0x2616e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 212), GPR_U32(ctx, 0));
    // 0x2616e4: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2616e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2616e8: 0xac2000f4  sw          $zero, 0xF4($at)
    ctx->pc = 0x2616e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 244), GPR_U32(ctx, 0));
    // 0x2616ec: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2616ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2616f0: 0xac23013c  sw          $v1, 0x13C($at)
    ctx->pc = 0x2616f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 316), GPR_U32(ctx, 3));
    // 0x2616f4: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2616f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2616f8: 0xac200138  sw          $zero, 0x138($at)
    ctx->pc = 0x2616f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 312), GPR_U32(ctx, 0));
    // 0x2616fc: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2616fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261700: 0xac200134  sw          $zero, 0x134($at)
    ctx->pc = 0x261700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 308), GPR_U32(ctx, 0));
    // 0x261704: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261708: 0xac200154  sw          $zero, 0x154($at)
    ctx->pc = 0x261708u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 340), GPR_U32(ctx, 0));
    // 0x26170c: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x26170cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261710: 0xac23019c  sw          $v1, 0x19C($at)
    ctx->pc = 0x261710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 412), GPR_U32(ctx, 3));
    // 0x261714: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261718: 0xac200198  sw          $zero, 0x198($at)
    ctx->pc = 0x261718u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 408), GPR_U32(ctx, 0));
    // 0x26171c: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x26171cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261720: 0xac200194  sw          $zero, 0x194($at)
    ctx->pc = 0x261720u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 404), GPR_U32(ctx, 0));
    // 0x261724: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261728: 0xac2001b4  sw          $zero, 0x1B4($at)
    ctx->pc = 0x261728u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 436), GPR_U32(ctx, 0));
    // 0x26172c: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x26172cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261730: 0xac2301fc  sw          $v1, 0x1FC($at)
    ctx->pc = 0x261730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 508), GPR_U32(ctx, 3));
    // 0x261734: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261738: 0xac23025c  sw          $v1, 0x25C($at)
    ctx->pc = 0x261738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 604), GPR_U32(ctx, 3));
    // 0x26173c: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x26173cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261740: 0xac2001f8  sw          $zero, 0x1F8($at)
    ctx->pc = 0x261740u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 504), GPR_U32(ctx, 0));
    // 0x261744: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261748: 0xac2001f4  sw          $zero, 0x1F4($at)
    ctx->pc = 0x261748u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 500), GPR_U32(ctx, 0));
    // 0x26174c: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x26174cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261750: 0xac200214  sw          $zero, 0x214($at)
    ctx->pc = 0x261750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 532), GPR_U32(ctx, 0));
    // 0x261754: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261758: 0xac200258  sw          $zero, 0x258($at)
    ctx->pc = 0x261758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 600), GPR_U32(ctx, 0));
    // 0x26175c: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x26175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261760: 0xac200254  sw          $zero, 0x254($at)
    ctx->pc = 0x261760u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 596), GPR_U32(ctx, 0));
    // 0x261764: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x261764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x261768: 0xac200274  sw          $zero, 0x274($at)
    ctx->pc = 0x261768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 628), GPR_U32(ctx, 0));
    // 0x26176c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x261770: 0xac202a30  sw          $zero, 0x2A30($at)
    ctx->pc = 0x261770u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10800), GPR_U32(ctx, 0));
    // 0x261774: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x261774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x261778: 0xac202a34  sw          $zero, 0x2A34($at)
    ctx->pc = 0x261778u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10804), GPR_U32(ctx, 0));
    // 0x26177c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26177cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x261780: 0xac202a38  sw          $zero, 0x2A38($at)
    ctx->pc = 0x261780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10808), GPR_U32(ctx, 0));
    // 0x261784: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x261784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x261788: 0xc098178  jal         func_2605E0
    ctx->pc = 0x261788u;
    SET_GPR_U32(ctx, 31, 0x261790u);
    ctx->pc = 0x26178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261788u;
            // 0x26178c: 0xac202a3c  sw          $zero, 0x2A3C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2605E0u;
    if (runtime->hasFunction(0x2605E0u)) {
        auto targetFn = runtime->lookupFunction(0x2605E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261790u; }
        if (ctx->pc != 0x261790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CScreenEffectFv_0x2605e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261790u; }
        if (ctx->pc != 0x261790u) { return; }
    }
    ctx->pc = 0x261790u;
label_261790:
    // 0x261790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x261790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x261794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x261798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26179c: 0x3e00008  jr          $ra
    ctx->pc = 0x26179Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2617A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26179Cu;
            // 0x2617a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2617A4u;
}
