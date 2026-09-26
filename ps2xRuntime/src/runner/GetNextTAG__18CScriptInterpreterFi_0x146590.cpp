#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNextTAG__18CScriptInterpreterFi
// Address: 0x146590 - 0x1466f0
void GetNextTAG__18CScriptInterpreterFi_0x146590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextTAG__18CScriptInterpreterFi_0x146590");
#endif

    switch (ctx->pc) {
        case 0x146590u: goto label_146590;
        case 0x146594u: goto label_146594;
        case 0x146598u: goto label_146598;
        case 0x14659cu: goto label_14659c;
        case 0x1465a0u: goto label_1465a0;
        case 0x1465a4u: goto label_1465a4;
        case 0x1465a8u: goto label_1465a8;
        case 0x1465acu: goto label_1465ac;
        case 0x1465b0u: goto label_1465b0;
        case 0x1465b4u: goto label_1465b4;
        case 0x1465b8u: goto label_1465b8;
        case 0x1465bcu: goto label_1465bc;
        case 0x1465c0u: goto label_1465c0;
        case 0x1465c4u: goto label_1465c4;
        case 0x1465c8u: goto label_1465c8;
        case 0x1465ccu: goto label_1465cc;
        case 0x1465d0u: goto label_1465d0;
        case 0x1465d4u: goto label_1465d4;
        case 0x1465d8u: goto label_1465d8;
        case 0x1465dcu: goto label_1465dc;
        case 0x1465e0u: goto label_1465e0;
        case 0x1465e4u: goto label_1465e4;
        case 0x1465e8u: goto label_1465e8;
        case 0x1465ecu: goto label_1465ec;
        case 0x1465f0u: goto label_1465f0;
        case 0x1465f4u: goto label_1465f4;
        case 0x1465f8u: goto label_1465f8;
        case 0x1465fcu: goto label_1465fc;
        case 0x146600u: goto label_146600;
        case 0x146604u: goto label_146604;
        case 0x146608u: goto label_146608;
        case 0x14660cu: goto label_14660c;
        case 0x146610u: goto label_146610;
        case 0x146614u: goto label_146614;
        case 0x146618u: goto label_146618;
        case 0x14661cu: goto label_14661c;
        case 0x146620u: goto label_146620;
        case 0x146624u: goto label_146624;
        case 0x146628u: goto label_146628;
        case 0x14662cu: goto label_14662c;
        case 0x146630u: goto label_146630;
        case 0x146634u: goto label_146634;
        case 0x146638u: goto label_146638;
        case 0x14663cu: goto label_14663c;
        case 0x146640u: goto label_146640;
        case 0x146644u: goto label_146644;
        case 0x146648u: goto label_146648;
        case 0x14664cu: goto label_14664c;
        case 0x146650u: goto label_146650;
        case 0x146654u: goto label_146654;
        case 0x146658u: goto label_146658;
        case 0x14665cu: goto label_14665c;
        case 0x146660u: goto label_146660;
        case 0x146664u: goto label_146664;
        case 0x146668u: goto label_146668;
        case 0x14666cu: goto label_14666c;
        case 0x146670u: goto label_146670;
        case 0x146674u: goto label_146674;
        case 0x146678u: goto label_146678;
        case 0x14667cu: goto label_14667c;
        case 0x146680u: goto label_146680;
        case 0x146684u: goto label_146684;
        case 0x146688u: goto label_146688;
        case 0x14668cu: goto label_14668c;
        case 0x146690u: goto label_146690;
        case 0x146694u: goto label_146694;
        case 0x146698u: goto label_146698;
        case 0x14669cu: goto label_14669c;
        case 0x1466a0u: goto label_1466a0;
        case 0x1466a4u: goto label_1466a4;
        case 0x1466a8u: goto label_1466a8;
        case 0x1466acu: goto label_1466ac;
        case 0x1466b0u: goto label_1466b0;
        case 0x1466b4u: goto label_1466b4;
        case 0x1466b8u: goto label_1466b8;
        case 0x1466bcu: goto label_1466bc;
        case 0x1466c0u: goto label_1466c0;
        case 0x1466c4u: goto label_1466c4;
        case 0x1466c8u: goto label_1466c8;
        case 0x1466ccu: goto label_1466cc;
        case 0x1466d0u: goto label_1466d0;
        case 0x1466d4u: goto label_1466d4;
        case 0x1466d8u: goto label_1466d8;
        case 0x1466dcu: goto label_1466dc;
        case 0x1466e0u: goto label_1466e0;
        case 0x1466e4u: goto label_1466e4;
        case 0x1466e8u: goto label_1466e8;
        case 0x1466ecu: goto label_1466ec;
        default: break;
    }

    ctx->pc = 0x146590u;

label_146590:
    // 0x146590: 0x27bdd5c0  addiu       $sp, $sp, -0x2A40
    ctx->pc = 0x146590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956480));
label_146594:
    // 0x146594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x146594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_146598:
    // 0x146598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14659c:
    // 0x14659c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1465a0:
    // 0x1465a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1465a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1465a4:
    // 0x1465a4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1465a8:
    // 0x1465a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1465ac:
    if (ctx->pc == 0x1465ACu) {
        ctx->pc = 0x1465ACu;
            // 0x1465ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1465B0u;
        goto label_1465b0;
    }
    ctx->pc = 0x1465A8u;
    {
        const bool branch_taken_0x1465a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1465ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1465A8u;
            // 0x1465ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465a8) {
            ctx->pc = 0x1465B8u;
            goto label_1465b8;
        }
    }
    ctx->pc = 0x1465B0u;
label_1465b0:
    // 0x1465b0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1465b4:
    if (ctx->pc == 0x1465B4u) {
        ctx->pc = 0x1465B4u;
            // 0x1465b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1465B8u;
        goto label_1465b8;
    }
    ctx->pc = 0x1465B0u;
    {
        const bool branch_taken_0x1465b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1465B0u;
            // 0x1465b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465b0) {
            ctx->pc = 0x1466DCu;
            goto label_1466dc;
        }
    }
    ctx->pc = 0x1465B8u;
label_1465b8:
    // 0x1465b8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1465b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1465bc:
    // 0x1465bc: 0xc0519c0  jal         func_146700
label_1465c0:
    if (ctx->pc == 0x1465C0u) {
        ctx->pc = 0x1465C0u;
            // 0x1465c0: 0x24062800  addiu       $a2, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->pc = 0x1465C4u;
        goto label_1465c4;
    }
    ctx->pc = 0x1465BCu;
    SET_GPR_U32(ctx, 31, 0x1465C4u);
    ctx->pc = 0x1465C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1465BCu;
            // 0x1465c0: 0x24062800  addiu       $a2, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146700u;
    if (runtime->hasFunction(0x146700u)) {
        auto targetFn = runtime->lookupFunction(0x146700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465C4u; }
        if (ctx->pc != 0x1465C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStringBuff__18CScriptInterpreterFPci_0x146700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465C4u; }
        if (ctx->pc != 0x1465C4u) { return; }
    }
    ctx->pc = 0x1465C4u;
label_1465c4:
    // 0x1465c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1465c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1465c8:
    // 0x1465c8: 0x27a52830  addiu       $a1, $sp, 0x2830
    ctx->pc = 0x1465c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10288));
label_1465cc:
    // 0x1465cc: 0xc0519bc  jal         func_1466F0
label_1465d0:
    if (ctx->pc == 0x1465D0u) {
        ctx->pc = 0x1465D0u;
            // 0x1465d0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1465D4u;
        goto label_1465d4;
    }
    ctx->pc = 0x1465CCu;
    SET_GPR_U32(ctx, 31, 0x1465D4u);
    ctx->pc = 0x1465D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1465CCu;
            // 0x1465d0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1466F0u;
    if (runtime->hasFunction(0x1466F0u)) {
        auto targetFn = runtime->lookupFunction(0x1466F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465D4u; }
        if (ctx->pc != 0x1465D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__18CScriptInterpreterFP9SPI_STACKi_0x1466f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465D4u; }
        if (ctx->pc != 0x1465D4u) { return; }
    }
    ctx->pc = 0x1465D4u;
label_1465d4:
    // 0x1465d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1465d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1465d8:
    // 0x1465d8: 0xc051c20  jal         func_147080
label_1465dc:
    if (ctx->pc == 0x1465DCu) {
        ctx->pc = 0x1465DCu;
            // 0x1465dc: 0x27a52a38  addiu       $a1, $sp, 0x2A38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10808));
        ctx->pc = 0x1465E0u;
        goto label_1465e0;
    }
    ctx->pc = 0x1465D8u;
    SET_GPR_U32(ctx, 31, 0x1465E0u);
    ctx->pc = 0x1465DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1465D8u;
            // 0x1465dc: 0x27a52a38  addiu       $a1, $sp, 0x2A38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147080u;
    if (runtime->hasFunction(0x147080u)) {
        auto targetFn = runtime->lookupFunction(0x147080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465E0u; }
        if (ctx->pc != 0x1465E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCommand__18CScriptInterpreterFPi_0x147080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465E0u; }
        if (ctx->pc != 0x1465E0u) { return; }
    }
    ctx->pc = 0x1465E0u;
label_1465e0:
    // 0x1465e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1465e4:
    if (ctx->pc == 0x1465E4u) {
        ctx->pc = 0x1465E4u;
            // 0x1465e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1465E8u;
        goto label_1465e8;
    }
    ctx->pc = 0x1465E0u;
    {
        const bool branch_taken_0x1465e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1465E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1465E0u;
            // 0x1465e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465e0) {
            ctx->pc = 0x1465F0u;
            goto label_1465f0;
        }
    }
    ctx->pc = 0x1465E8u;
label_1465e8:
    // 0x1465e8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1465ec:
    if (ctx->pc == 0x1465ECu) {
        ctx->pc = 0x1465ECu;
            // 0x1465ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1465F0u;
        goto label_1465f0;
    }
    ctx->pc = 0x1465E8u;
    {
        const bool branch_taken_0x1465e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1465E8u;
            // 0x1465ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465e8) {
            ctx->pc = 0x1466E0u;
            goto label_1466e0;
        }
    }
    ctx->pc = 0x1465F0u;
label_1465f0:
    // 0x1465f0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1465f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1465f4:
    // 0x1465f4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_1465f8:
    if (ctx->pc == 0x1465F8u) {
        ctx->pc = 0x1465F8u;
            // 0x1465f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1465FCu;
        goto label_1465fc;
    }
    ctx->pc = 0x1465F4u;
    {
        const bool branch_taken_0x1465f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1465F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1465F4u;
            // 0x1465f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465f4) {
            ctx->pc = 0x146688u;
            goto label_146688;
        }
    }
    ctx->pc = 0x1465FCu;
label_1465fc:
    // 0x1465fc: 0x8fa32a38  lw          $v1, 0x2A38($sp)
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10808)));
label_146600:
    // 0x146600: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x146600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_146604:
    // 0x146604: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x146604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_146608:
    // 0x146608: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14660c:
    if (ctx->pc == 0x14660Cu) {
        ctx->pc = 0x146610u;
        goto label_146610;
    }
    ctx->pc = 0x146608u;
    {
        const bool branch_taken_0x146608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146608) {
            ctx->pc = 0x146618u;
            goto label_146618;
        }
    }
    ctx->pc = 0x146610u;
label_146610:
    // 0x146610: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
label_146614:
    if (ctx->pc == 0x146614u) {
        ctx->pc = 0x146618u;
        goto label_146618;
    }
    ctx->pc = 0x146610u;
    {
        const bool branch_taken_0x146610 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x146610) {
            ctx->pc = 0x146644u;
            goto label_146644;
        }
    }
    ctx->pc = 0x146618u;
label_146618:
    // 0x146618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14661c:
    // 0x14661c: 0xc0518e8  jal         func_1463A0
label_146620:
    if (ctx->pc == 0x146620u) {
        ctx->pc = 0x146620u;
            // 0x146620: 0x27a52a3c  addiu       $a1, $sp, 0x2A3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10812));
        ctx->pc = 0x146624u;
        goto label_146624;
    }
    ctx->pc = 0x14661Cu;
    SET_GPR_U32(ctx, 31, 0x146624u);
    ctx->pc = 0x146620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14661Cu;
            // 0x146620: 0x27a52a3c  addiu       $a1, $sp, 0x2A3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10812));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463A0u;
    if (runtime->hasFunction(0x1463A0u)) {
        auto targetFn = runtime->lookupFunction(0x1463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146624u; }
        if (ctx->pc != 0x146624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get__9input_strFPi_0x1463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146624u; }
        if (ctx->pc != 0x146624u) { return; }
    }
    ctx->pc = 0x146624u;
label_146624:
    // 0x146624: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
label_146628:
    if (ctx->pc == 0x146628u) {
        ctx->pc = 0x146628u;
            // 0x146628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14662Cu;
        goto label_14662c;
    }
    ctx->pc = 0x146624u;
    {
        const bool branch_taken_0x146624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146624u;
            // 0x146628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146624) {
            ctx->pc = 0x1465C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1465c8;
        }
    }
    ctx->pc = 0x14662Cu;
label_14662c:
    // 0x14662c: 0x8fa32a3c  lw          $v1, 0x2A3C($sp)
    ctx->pc = 0x14662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10812)));
label_146630:
    // 0x146630: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x146630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_146634:
    // 0x146634: 0x1062ffe3  beq         $v1, $v0, . + 4 + (-0x1D << 2)
label_146638:
    if (ctx->pc == 0x146638u) {
        ctx->pc = 0x14663Cu;
        goto label_14663c;
    }
    ctx->pc = 0x146634u;
    {
        const bool branch_taken_0x146634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x146634) {
            ctx->pc = 0x1465C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1465c4;
        }
    }
    ctx->pc = 0x14663Cu;
label_14663c:
    // 0x14663c: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_146640:
    if (ctx->pc == 0x146640u) {
        ctx->pc = 0x146644u;
        goto label_146644;
    }
    ctx->pc = 0x14663Cu;
    {
        const bool branch_taken_0x14663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14663c) {
            ctx->pc = 0x146618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146618;
        }
    }
    ctx->pc = 0x146644u;
label_146644:
    // 0x146644: 0x0  nop
    ctx->pc = 0x146644u;
    // NOP
label_146648:
    // 0x146648: 0xc051b1c  jal         func_146C70
label_14664c:
    if (ctx->pc == 0x14664Cu) {
        ctx->pc = 0x14664Cu;
            // 0x14664c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x146650u;
        goto label_146650;
    }
    ctx->pc = 0x146648u;
    SET_GPR_U32(ctx, 31, 0x146650u);
    ctx->pc = 0x14664Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146648u;
            // 0x14664c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146C70u;
    if (runtime->hasFunction(0x146C70u)) {
        auto targetFn = runtime->lookupFunction(0x146C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146650u; }
        if (ctx->pc != 0x146650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArg__18CScriptInterpreterFv_0x146c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146650u; }
        if (ctx->pc != 0x146650u) { return; }
    }
    ctx->pc = 0x146650u;
label_146650:
    // 0x146650: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_146654:
    if (ctx->pc == 0x146654u) {
        ctx->pc = 0x146658u;
        goto label_146658;
    }
    ctx->pc = 0x146650u;
    {
        const bool branch_taken_0x146650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x146650) {
            ctx->pc = 0x1466D4u;
            goto label_1466d4;
        }
    }
    ctx->pc = 0x146658u;
label_146658:
    // 0x146658: 0x8fa32a38  lw          $v1, 0x2A38($sp)
    ctx->pc = 0x146658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10808)));
label_14665c:
    // 0x14665c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x14665cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_146660:
    // 0x146660: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x146660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_146664:
    // 0x146664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x146664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_146668:
    // 0x146668: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x146668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14666c:
    // 0x14666c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_146670:
    if (ctx->pc == 0x146670u) {
        ctx->pc = 0x146674u;
        goto label_146674;
    }
    ctx->pc = 0x14666Cu;
    {
        const bool branch_taken_0x14666c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14666c) {
            ctx->pc = 0x1466D4u;
            goto label_1466d4;
        }
    }
    ctx->pc = 0x146674u;
label_146674:
    // 0x146674: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x146674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_146678:
    // 0x146678: 0x60f809  jalr        $v1
label_14667c:
    if (ctx->pc == 0x14667Cu) {
        ctx->pc = 0x14667Cu;
            // 0x14667c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x146680u;
        goto label_146680;
    }
    ctx->pc = 0x146678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x146680u);
        ctx->pc = 0x14667Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146678u;
            // 0x14667c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x146680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x146680u; }
            if (ctx->pc != 0x146680u) { return; }
        }
        }
    }
    ctx->pc = 0x146680u;
label_146680:
    // 0x146680: 0x10000015  b           . + 4 + (0x15 << 2)
label_146684:
    if (ctx->pc == 0x146684u) {
        ctx->pc = 0x146684u;
            // 0x146684: 0x8fa22a38  lw          $v0, 0x2A38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10808)));
        ctx->pc = 0x146688u;
        goto label_146688;
    }
    ctx->pc = 0x146680u;
    {
        const bool branch_taken_0x146680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146680u;
            // 0x146684: 0x8fa22a38  lw          $v0, 0x2A38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146680) {
            ctx->pc = 0x1466D8u;
            goto label_1466d8;
        }
    }
    ctx->pc = 0x146688u;
label_146688:
    // 0x146688: 0xc051a94  jal         func_146A50
label_14668c:
    if (ctx->pc == 0x14668Cu) {
        ctx->pc = 0x146690u;
        goto label_146690;
    }
    ctx->pc = 0x146688u;
    SET_GPR_U32(ctx, 31, 0x146690u);
    ctx->pc = 0x146A50u;
    if (runtime->hasFunction(0x146A50u)) {
        auto targetFn = runtime->lookupFunction(0x146A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146690u; }
        if (ctx->pc != 0x146690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgBin__18CScriptInterpreterFv_0x146a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146690u; }
        if (ctx->pc != 0x146690u) { return; }
    }
    ctx->pc = 0x146690u;
label_146690:
    // 0x146690: 0x8fa42a38  lw          $a0, 0x2A38($sp)
    ctx->pc = 0x146690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10808)));
label_146694:
    // 0x146694: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x146694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_146698:
    // 0x146698: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x146698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_14669c:
    // 0x14669c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1466a0:
    if (ctx->pc == 0x1466A0u) {
        ctx->pc = 0x1466A4u;
        goto label_1466a4;
    }
    ctx->pc = 0x14669Cu;
    {
        const bool branch_taken_0x14669c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14669c) {
            ctx->pc = 0x1466D4u;
            goto label_1466d4;
        }
    }
    ctx->pc = 0x1466A4u;
label_1466a4:
    // 0x1466a4: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
label_1466a8:
    if (ctx->pc == 0x1466A8u) {
        ctx->pc = 0x1466ACu;
        goto label_1466ac;
    }
    ctx->pc = 0x1466A4u;
    {
        const bool branch_taken_0x1466a4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1466a4) {
            ctx->pc = 0x1466D4u;
            goto label_1466d4;
        }
    }
    ctx->pc = 0x1466ACu;
label_1466ac:
    // 0x1466ac: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1466b0:
    if (ctx->pc == 0x1466B0u) {
        ctx->pc = 0x1466B0u;
            // 0x1466b0: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x1466B4u;
        goto label_1466b4;
    }
    ctx->pc = 0x1466ACu;
    {
        const bool branch_taken_0x1466ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1466ACu;
            // 0x1466b0: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466ac) {
            ctx->pc = 0x1466D4u;
            goto label_1466d4;
        }
    }
    ctx->pc = 0x1466B4u;
label_1466b4:
    // 0x1466b4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1466b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1466b8:
    // 0x1466b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1466b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1466bc:
    // 0x1466bc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1466bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1466c0:
    // 0x1466c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1466c4:
    if (ctx->pc == 0x1466C4u) {
        ctx->pc = 0x1466C8u;
        goto label_1466c8;
    }
    ctx->pc = 0x1466C0u;
    {
        const bool branch_taken_0x1466c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1466c0) {
            ctx->pc = 0x1466D4u;
            goto label_1466d4;
        }
    }
    ctx->pc = 0x1466C8u;
label_1466c8:
    // 0x1466c8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1466c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1466cc:
    // 0x1466cc: 0x60f809  jalr        $v1
label_1466d0:
    if (ctx->pc == 0x1466D0u) {
        ctx->pc = 0x1466D0u;
            // 0x1466d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1466D4u;
        goto label_1466d4;
    }
    ctx->pc = 0x1466CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1466D4u);
        ctx->pc = 0x1466D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1466CCu;
            // 0x1466d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1466D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1466D4u; }
            if (ctx->pc != 0x1466D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1466D4u;
label_1466d4:
    // 0x1466d4: 0x8fa22a38  lw          $v0, 0x2A38($sp)
    ctx->pc = 0x1466d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10808)));
label_1466d8:
    // 0x1466d8: 0x0  nop
    ctx->pc = 0x1466d8u;
    // NOP
label_1466dc:
    // 0x1466dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1466dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1466e0:
    // 0x1466e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1466e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1466e4:
    // 0x1466e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1466e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1466e8:
    // 0x1466e8: 0x3e00008  jr          $ra
label_1466ec:
    if (ctx->pc == 0x1466ECu) {
        ctx->pc = 0x1466ECu;
            // 0x1466ec: 0x27bd2a40  addiu       $sp, $sp, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10816));
        ctx->pc = 0x1466F0u;
        goto label_fallthrough_0x1466e8;
    }
    ctx->pc = 0x1466E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1466ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1466E8u;
            // 0x1466ec: 0x27bd2a40  addiu       $sp, $sp, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1466e8:
    ctx->pc = 0x1466F0u;
}
