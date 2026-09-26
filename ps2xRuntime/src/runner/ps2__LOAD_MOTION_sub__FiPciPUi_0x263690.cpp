#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_MOTION_sub__FiPciPUi
// Address: 0x263690 - 0x2637a4
void ps2__LOAD_MOTION_sub__FiPciPUi_0x263690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_MOTION_sub__FiPciPUi_0x263690");
#endif

    switch (ctx->pc) {
        case 0x263690u: goto label_263690;
        case 0x263694u: goto label_263694;
        case 0x263698u: goto label_263698;
        case 0x26369cu: goto label_26369c;
        case 0x2636a0u: goto label_2636a0;
        case 0x2636a4u: goto label_2636a4;
        case 0x2636a8u: goto label_2636a8;
        case 0x2636acu: goto label_2636ac;
        case 0x2636b0u: goto label_2636b0;
        case 0x2636b4u: goto label_2636b4;
        case 0x2636b8u: goto label_2636b8;
        case 0x2636bcu: goto label_2636bc;
        case 0x2636c0u: goto label_2636c0;
        case 0x2636c4u: goto label_2636c4;
        case 0x2636c8u: goto label_2636c8;
        case 0x2636ccu: goto label_2636cc;
        case 0x2636d0u: goto label_2636d0;
        case 0x2636d4u: goto label_2636d4;
        case 0x2636d8u: goto label_2636d8;
        case 0x2636dcu: goto label_2636dc;
        case 0x2636e0u: goto label_2636e0;
        case 0x2636e4u: goto label_2636e4;
        case 0x2636e8u: goto label_2636e8;
        case 0x2636ecu: goto label_2636ec;
        case 0x2636f0u: goto label_2636f0;
        case 0x2636f4u: goto label_2636f4;
        case 0x2636f8u: goto label_2636f8;
        case 0x2636fcu: goto label_2636fc;
        case 0x263700u: goto label_263700;
        case 0x263704u: goto label_263704;
        case 0x263708u: goto label_263708;
        case 0x26370cu: goto label_26370c;
        case 0x263710u: goto label_263710;
        case 0x263714u: goto label_263714;
        case 0x263718u: goto label_263718;
        case 0x26371cu: goto label_26371c;
        case 0x263720u: goto label_263720;
        case 0x263724u: goto label_263724;
        case 0x263728u: goto label_263728;
        case 0x26372cu: goto label_26372c;
        case 0x263730u: goto label_263730;
        case 0x263734u: goto label_263734;
        case 0x263738u: goto label_263738;
        case 0x26373cu: goto label_26373c;
        case 0x263740u: goto label_263740;
        case 0x263744u: goto label_263744;
        case 0x263748u: goto label_263748;
        case 0x26374cu: goto label_26374c;
        case 0x263750u: goto label_263750;
        case 0x263754u: goto label_263754;
        case 0x263758u: goto label_263758;
        case 0x26375cu: goto label_26375c;
        case 0x263760u: goto label_263760;
        case 0x263764u: goto label_263764;
        case 0x263768u: goto label_263768;
        case 0x26376cu: goto label_26376c;
        case 0x263770u: goto label_263770;
        case 0x263774u: goto label_263774;
        case 0x263778u: goto label_263778;
        case 0x26377cu: goto label_26377c;
        case 0x263780u: goto label_263780;
        case 0x263784u: goto label_263784;
        case 0x263788u: goto label_263788;
        case 0x26378cu: goto label_26378c;
        case 0x263790u: goto label_263790;
        case 0x263794u: goto label_263794;
        case 0x263798u: goto label_263798;
        case 0x26379cu: goto label_26379c;
        case 0x2637a0u: goto label_2637a0;
        default: break;
    }

    ctx->pc = 0x263690u;

label_263690:
    // 0x263690: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x263690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_263694:
    // 0x263694: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x263694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_263698:
    // 0x263698: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x263698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_26369c:
    // 0x26369c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2636a0:
    // 0x2636a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2636a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2636a4:
    // 0x2636a4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2636a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2636a8:
    // 0x2636a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2636a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2636ac:
    // 0x2636ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2636acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2636b0:
    // 0x2636b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2636b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2636b4:
    // 0x2636b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2636b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2636b8:
    // 0x2636b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2636b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2636bc:
    // 0x2636bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2636bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2636c0:
    // 0x2636c0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2636c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2636c4:
    // 0x2636c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2636c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2636c8:
    // 0x2636c8: 0xc0a0c64  jal         func_283190
label_2636cc:
    if (ctx->pc == 0x2636CCu) {
        ctx->pc = 0x2636CCu;
            // 0x2636cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2636D0u;
        goto label_2636d0;
    }
    ctx->pc = 0x2636C8u;
    SET_GPR_U32(ctx, 31, 0x2636D0u);
    ctx->pc = 0x2636CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2636C8u;
            // 0x2636cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636D0u; }
        if (ctx->pc != 0x2636D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636D0u; }
        if (ctx->pc != 0x2636D0u) { return; }
    }
    ctx->pc = 0x2636D0u;
label_2636d0:
    // 0x2636d0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2636d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2636d4:
    // 0x2636d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2636d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2636d8:
    // 0x2636d8: 0xc0a0ed8  jal         func_283B60
label_2636dc:
    if (ctx->pc == 0x2636DCu) {
        ctx->pc = 0x2636DCu;
            // 0x2636dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2636E0u;
        goto label_2636e0;
    }
    ctx->pc = 0x2636D8u;
    SET_GPR_U32(ctx, 31, 0x2636E0u);
    ctx->pc = 0x2636DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2636D8u;
            // 0x2636dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636E0u; }
        if (ctx->pc != 0x2636E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636E0u; }
        if (ctx->pc != 0x2636E0u) { return; }
    }
    ctx->pc = 0x2636E0u;
label_2636e0:
    // 0x2636e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2636e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2636e4:
    // 0x2636e4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_2636e8:
    if (ctx->pc == 0x2636E8u) {
        ctx->pc = 0x2636E8u;
            // 0x2636e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2636ECu;
        goto label_2636ec;
    }
    ctx->pc = 0x2636E4u;
    {
        const bool branch_taken_0x2636e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2636E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2636E4u;
            // 0x2636e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636e4) {
            ctx->pc = 0x2636F4u;
            goto label_2636f4;
        }
    }
    ctx->pc = 0x2636ECu;
label_2636ec:
    // 0x2636ec: 0x10000024  b           . + 4 + (0x24 << 2)
label_2636f0:
    if (ctx->pc == 0x2636F0u) {
        ctx->pc = 0x2636F0u;
            // 0x2636f0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2636F4u;
        goto label_2636f4;
    }
    ctx->pc = 0x2636ECu;
    {
        const bool branch_taken_0x2636ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2636F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2636ECu;
            // 0x2636f0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636ec) {
            ctx->pc = 0x263780u;
            goto label_263780;
        }
    }
    ctx->pc = 0x2636F4u;
label_2636f4:
    // 0x2636f4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2636f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2636f8:
    // 0x2636f8: 0xc0a1240  jal         func_284900
label_2636fc:
    if (ctx->pc == 0x2636FCu) {
        ctx->pc = 0x2636FCu;
            // 0x2636fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263700u;
        goto label_263700;
    }
    ctx->pc = 0x2636F8u;
    SET_GPR_U32(ctx, 31, 0x263700u);
    ctx->pc = 0x2636FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2636F8u;
            // 0x2636fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263700u; }
        if (ctx->pc != 0x263700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263700u; }
        if (ctx->pc != 0x263700u) { return; }
    }
    ctx->pc = 0x263700u;
label_263700:
    // 0x263700: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x263700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263704:
    // 0x263704: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_263708:
    if (ctx->pc == 0x263708u) {
        ctx->pc = 0x263708u;
            // 0x263708: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x26370Cu;
        goto label_26370c;
    }
    ctx->pc = 0x263704u;
    {
        const bool branch_taken_0x263704 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x263708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263704u;
            // 0x263708: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263704) {
            ctx->pc = 0x263714u;
            goto label_263714;
        }
    }
    ctx->pc = 0x26370Cu;
label_26370c:
    // 0x26370c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_263710:
    if (ctx->pc == 0x263710u) {
        ctx->pc = 0x263710u;
            // 0x263710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263714u;
        goto label_263714;
    }
    ctx->pc = 0x26370Cu;
    {
        const bool branch_taken_0x26370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26370Cu;
            // 0x263710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26370c) {
            ctx->pc = 0x26377Cu;
            goto label_26377c;
        }
    }
    ctx->pc = 0x263714u;
label_263714:
    // 0x263714: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x263714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_263718:
    // 0x263718: 0x24a5c6d8  addiu       $a1, $a1, -0x3928
    ctx->pc = 0x263718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952664));
label_26371c:
    // 0x26371c: 0xc04a234  jal         func_1288D0
label_263720:
    if (ctx->pc == 0x263720u) {
        ctx->pc = 0x263720u;
            // 0x263720: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263724u;
        goto label_263724;
    }
    ctx->pc = 0x26371Cu;
    SET_GPR_U32(ctx, 31, 0x263724u);
    ctx->pc = 0x263720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26371Cu;
            // 0x263720: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263724u; }
        if (ctx->pc != 0x263724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263724u; }
        if (ctx->pc != 0x263724u) { return; }
    }
    ctx->pc = 0x263724u;
label_263724:
    // 0x263724: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x263724u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_263728:
    // 0x263728: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x263728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_26372c:
    // 0x26372c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_263730:
    if (ctx->pc == 0x263730u) {
        ctx->pc = 0x263730u;
            // 0x263730: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->pc = 0x263734u;
        goto label_263734;
    }
    ctx->pc = 0x26372Cu;
    {
        const bool branch_taken_0x26372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26372Cu;
            // 0x263730: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26372c) {
            ctx->pc = 0x263740u;
            goto label_263740;
        }
    }
    ctx->pc = 0x263734u;
label_263734:
    // 0x263734: 0x26a401d8  addiu       $a0, $s5, 0x1D8
    ctx->pc = 0x263734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 472));
label_263738:
    // 0x263738: 0xc04a3dc  jal         func_128F70
label_26373c:
    if (ctx->pc == 0x26373Cu) {
        ctx->pc = 0x26373Cu;
            // 0x26373c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x263740u;
        goto label_263740;
    }
    ctx->pc = 0x263738u;
    SET_GPR_U32(ctx, 31, 0x263740u);
    ctx->pc = 0x26373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263738u;
            // 0x26373c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263740u; }
        if (ctx->pc != 0x263740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263740u; }
        if (ctx->pc != 0x263740u) { return; }
    }
    ctx->pc = 0x263740u;
label_263740:
    // 0x263740: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x263740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_263744:
    // 0x263744: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x263744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_263748:
    // 0x263748: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x263748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26374c:
    // 0x26374c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x26374cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263750:
    // 0x263750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x263750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263754:
    // 0x263754: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x263754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263758:
    // 0x263758: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x263758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26375c:
    // 0x26375c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x26375cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263760:
    // 0x263760: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x263760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_263764:
    // 0x263764: 0x320f809  jalr        $t9
label_263768:
    if (ctx->pc == 0x263768u) {
        ctx->pc = 0x263768u;
            // 0x263768: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26376Cu;
        goto label_26376c;
    }
    ctx->pc = 0x263764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26376Cu);
        ctx->pc = 0x263768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263764u;
            // 0x263768: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26376Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26376Cu; }
            if (ctx->pc != 0x26376Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26376Cu;
label_26376c:
    // 0x26376c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x26376cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_263770:
    // 0x263770: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_263774:
    if (ctx->pc == 0x263774u) {
        ctx->pc = 0x263774u;
            // 0x263774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263778u;
        goto label_263778;
    }
    ctx->pc = 0x263770u;
    {
        const bool branch_taken_0x263770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263770u;
            // 0x263774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263770) {
            ctx->pc = 0x26377Cu;
            goto label_26377c;
        }
    }
    ctx->pc = 0x263778u;
label_263778:
    // 0x263778: 0xa2a001d8  sb          $zero, 0x1D8($s5)
    ctx->pc = 0x263778u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 472), (uint8_t)GPR_U32(ctx, 0));
label_26377c:
    // 0x26377c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26377cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_263780:
    // 0x263780: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x263780u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_263784:
    // 0x263784: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x263784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_263788:
    // 0x263788: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x263788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26378c:
    // 0x26378c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26378cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_263790:
    // 0x263790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_263794:
    // 0x263794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_263798:
    // 0x263798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26379c:
    // 0x26379c: 0x3e00008  jr          $ra
label_2637a0:
    if (ctx->pc == 0x2637A0u) {
        ctx->pc = 0x2637A0u;
            // 0x2637a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2637A4u;
        goto label_fallthrough_0x26379c;
    }
    ctx->pc = 0x26379Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2637A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26379Cu;
            // 0x2637a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26379c:
    ctx->pc = 0x2637A4u;
}
