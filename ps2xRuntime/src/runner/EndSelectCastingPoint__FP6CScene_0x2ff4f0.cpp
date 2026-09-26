#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndSelectCastingPoint__FP6CScene
// Address: 0x2ff4f0 - 0x2ff5cc
void EndSelectCastingPoint__FP6CScene_0x2ff4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndSelectCastingPoint__FP6CScene_0x2ff4f0");
#endif

    switch (ctx->pc) {
        case 0x2ff4f0u: goto label_2ff4f0;
        case 0x2ff4f4u: goto label_2ff4f4;
        case 0x2ff4f8u: goto label_2ff4f8;
        case 0x2ff4fcu: goto label_2ff4fc;
        case 0x2ff500u: goto label_2ff500;
        case 0x2ff504u: goto label_2ff504;
        case 0x2ff508u: goto label_2ff508;
        case 0x2ff50cu: goto label_2ff50c;
        case 0x2ff510u: goto label_2ff510;
        case 0x2ff514u: goto label_2ff514;
        case 0x2ff518u: goto label_2ff518;
        case 0x2ff51cu: goto label_2ff51c;
        case 0x2ff520u: goto label_2ff520;
        case 0x2ff524u: goto label_2ff524;
        case 0x2ff528u: goto label_2ff528;
        case 0x2ff52cu: goto label_2ff52c;
        case 0x2ff530u: goto label_2ff530;
        case 0x2ff534u: goto label_2ff534;
        case 0x2ff538u: goto label_2ff538;
        case 0x2ff53cu: goto label_2ff53c;
        case 0x2ff540u: goto label_2ff540;
        case 0x2ff544u: goto label_2ff544;
        case 0x2ff548u: goto label_2ff548;
        case 0x2ff54cu: goto label_2ff54c;
        case 0x2ff550u: goto label_2ff550;
        case 0x2ff554u: goto label_2ff554;
        case 0x2ff558u: goto label_2ff558;
        case 0x2ff55cu: goto label_2ff55c;
        case 0x2ff560u: goto label_2ff560;
        case 0x2ff564u: goto label_2ff564;
        case 0x2ff568u: goto label_2ff568;
        case 0x2ff56cu: goto label_2ff56c;
        case 0x2ff570u: goto label_2ff570;
        case 0x2ff574u: goto label_2ff574;
        case 0x2ff578u: goto label_2ff578;
        case 0x2ff57cu: goto label_2ff57c;
        case 0x2ff580u: goto label_2ff580;
        case 0x2ff584u: goto label_2ff584;
        case 0x2ff588u: goto label_2ff588;
        case 0x2ff58cu: goto label_2ff58c;
        case 0x2ff590u: goto label_2ff590;
        case 0x2ff594u: goto label_2ff594;
        case 0x2ff598u: goto label_2ff598;
        case 0x2ff59cu: goto label_2ff59c;
        case 0x2ff5a0u: goto label_2ff5a0;
        case 0x2ff5a4u: goto label_2ff5a4;
        case 0x2ff5a8u: goto label_2ff5a8;
        case 0x2ff5acu: goto label_2ff5ac;
        case 0x2ff5b0u: goto label_2ff5b0;
        case 0x2ff5b4u: goto label_2ff5b4;
        case 0x2ff5b8u: goto label_2ff5b8;
        case 0x2ff5bcu: goto label_2ff5bc;
        case 0x2ff5c0u: goto label_2ff5c0;
        case 0x2ff5c4u: goto label_2ff5c4;
        case 0x2ff5c8u: goto label_2ff5c8;
        default: break;
    }

    ctx->pc = 0x2ff4f0u;

label_2ff4f0:
    // 0x2ff4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ff4f4:
    // 0x2ff4f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ff4f8:
    // 0x2ff4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff4fc:
    // 0x2ff4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff500:
    // 0x2ff500: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x2ff500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_2ff504:
    // 0x2ff504: 0xc0a0e30  jal         func_2838C0
label_2ff508:
    if (ctx->pc == 0x2FF508u) {
        ctx->pc = 0x2FF508u;
            // 0x2ff508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF50Cu;
        goto label_2ff50c;
    }
    ctx->pc = 0x2FF504u;
    SET_GPR_U32(ctx, 31, 0x2FF50Cu);
    ctx->pc = 0x2FF508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF504u;
            // 0x2ff508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF50Cu; }
        if (ctx->pc != 0x2FF50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF50Cu; }
        if (ctx->pc != 0x2FF50Cu) { return; }
    }
    ctx->pc = 0x2FF50Cu;
label_2ff50c:
    // 0x2ff50c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff510:
    // 0x2ff510: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2ff514:
    if (ctx->pc == 0x2FF514u) {
        ctx->pc = 0x2FF514u;
            // 0x2ff514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF518u;
        goto label_2ff518;
    }
    ctx->pc = 0x2FF510u;
    {
        const bool branch_taken_0x2ff510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF510u;
            // 0x2ff514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff510) {
            ctx->pc = 0x2FF538u;
            goto label_2ff538;
        }
    }
    ctx->pc = 0x2FF518u;
label_2ff518:
    // 0x2ff518: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x2ff518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2ff51c:
    // 0x2ff51c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2ff51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2ff520:
    // 0x2ff520: 0x320f809  jalr        $t9
label_2ff524:
    if (ctx->pc == 0x2FF524u) {
        ctx->pc = 0x2FF524u;
            // 0x2ff524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF528u;
        goto label_2ff528;
    }
    ctx->pc = 0x2FF520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF528u);
        ctx->pc = 0x2FF524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF520u;
            // 0x2ff524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF528u; }
            if (ctx->pc != 0x2FF528u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF528u;
label_2ff528:
    // 0x2ff528: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2ff528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2ff52c:
    // 0x2ff52c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2ff530:
    if (ctx->pc == 0x2FF530u) {
        ctx->pc = 0x2FF530u;
            // 0x2ff530: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2FF534u;
        goto label_2ff534;
    }
    ctx->pc = 0x2FF52Cu;
    {
        const bool branch_taken_0x2ff52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FF530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF52Cu;
            // 0x2ff530: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff52c) {
            ctx->pc = 0x2FF540u;
            goto label_2ff540;
        }
    }
    ctx->pc = 0x2FF534u;
label_2ff534:
    // 0x2ff534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff538:
    // 0x2ff538: 0x10000020  b           . + 4 + (0x20 << 2)
label_2ff53c:
    if (ctx->pc == 0x2FF53Cu) {
        ctx->pc = 0x2FF53Cu;
            // 0x2ff53c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2FF540u;
        goto label_2ff540;
    }
    ctx->pc = 0x2FF538u;
    {
        const bool branch_taken_0x2ff538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF538u;
            // 0x2ff53c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff538) {
            ctx->pc = 0x2FF5BCu;
            goto label_2ff5bc;
        }
    }
    ctx->pc = 0x2FF540u;
label_2ff540:
    // 0x2ff540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ff540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff544:
    // 0x2ff544: 0xc0bb4c8  jal         func_2ED320
label_2ff548:
    if (ctx->pc == 0x2FF548u) {
        ctx->pc = 0x2FF548u;
            // 0x2ff548: 0x248498e0  addiu       $a0, $a0, -0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
        ctx->pc = 0x2FF54Cu;
        goto label_2ff54c;
    }
    ctx->pc = 0x2FF544u;
    SET_GPR_U32(ctx, 31, 0x2FF54Cu);
    ctx->pc = 0x2FF548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF544u;
            // 0x2ff548: 0x248498e0  addiu       $a0, $a0, -0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED320u;
    if (runtime->hasFunction(0x2ED320u)) {
        auto targetFn = runtime->lookupFunction(0x2ED320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF54Cu; }
        if (ctx->pc != 0x2FF54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyParam__14CCameraControlFR14CCameraControl_0x2ed320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF54Cu; }
        if (ctx->pc != 0x2FF54Cu) { return; }
    }
    ctx->pc = 0x2FF54Cu;
label_2ff54c:
    // 0x2ff54c: 0xc0c0fd0  jal         func_303F40
label_2ff550:
    if (ctx->pc == 0x2FF550u) {
        ctx->pc = 0x2FF554u;
        goto label_2ff554;
    }
    ctx->pc = 0x2FF54Cu;
    SET_GPR_U32(ctx, 31, 0x2FF554u);
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF554u; }
        if (ctx->pc != 0x2FF554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF554u; }
        if (ctx->pc != 0x2FF554u) { return; }
    }
    ctx->pc = 0x2FF554u;
label_2ff554:
    // 0x2ff554: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2ff554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2ff558:
    // 0x2ff558: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2ff55c:
    if (ctx->pc == 0x2FF55Cu) {
        ctx->pc = 0x2FF55Cu;
            // 0x2ff55c: 0x3c02c7c3  lui         $v0, 0xC7C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
        ctx->pc = 0x2FF560u;
        goto label_2ff560;
    }
    ctx->pc = 0x2FF558u;
    {
        const bool branch_taken_0x2ff558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF558u;
            // 0x2ff55c: 0x3c02c7c3  lui         $v0, 0xC7C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff558) {
            ctx->pc = 0x2FF5A0u;
            goto label_2ff5a0;
        }
    }
    ctx->pc = 0x2FF560u;
label_2ff560:
    // 0x2ff560: 0x8e252e50  lw          $a1, 0x2E50($s1)
    ctx->pc = 0x2ff560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
label_2ff564:
    // 0x2ff564: 0xc0a0ed8  jal         func_283B60
label_2ff568:
    if (ctx->pc == 0x2FF568u) {
        ctx->pc = 0x2FF568u;
            // 0x2ff568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF56Cu;
        goto label_2ff56c;
    }
    ctx->pc = 0x2FF564u;
    SET_GPR_U32(ctx, 31, 0x2FF56Cu);
    ctx->pc = 0x2FF568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF564u;
            // 0x2ff568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF56Cu; }
        if (ctx->pc != 0x2FF56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF56Cu; }
        if (ctx->pc != 0x2FF56Cu) { return; }
    }
    ctx->pc = 0x2FF56Cu;
label_2ff56c:
    // 0x2ff56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff570:
    // 0x2ff570: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2ff574:
    if (ctx->pc == 0x2FF574u) {
        ctx->pc = 0x2FF574u;
            // 0x2ff574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF578u;
        goto label_2ff578;
    }
    ctx->pc = 0x2FF570u;
    {
        const bool branch_taken_0x2ff570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF570u;
            // 0x2ff574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff570) {
            ctx->pc = 0x2FF59Cu;
            goto label_2ff59c;
        }
    }
    ctx->pc = 0x2FF578u;
label_2ff578:
    // 0x2ff578: 0xc05d31c  jal         func_174C70
label_2ff57c:
    if (ctx->pc == 0x2FF57Cu) {
        ctx->pc = 0x2FF580u;
        goto label_2ff580;
    }
    ctx->pc = 0x2FF578u;
    SET_GPR_U32(ctx, 31, 0x2FF580u);
    ctx->pc = 0x174C70u;
    if (runtime->hasFunction(0x174C70u)) {
        auto targetFn = runtime->lookupFunction(0x174C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF580u; }
        if (ctx->pc != 0x2FF580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteExtMotion__11CCharacter2Fv_0x174c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF580u; }
        if (ctx->pc != 0x2FF580u) { return; }
    }
    ctx->pc = 0x2FF580u;
label_2ff580:
    // 0x2ff580: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ff580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ff584:
    // 0x2ff584: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ff584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ff588:
    // 0x2ff588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff58c:
    // 0x2ff58c: 0x24a51f28  addiu       $a1, $a1, 0x1F28
    ctx->pc = 0x2ff58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7976));
label_2ff590:
    // 0x2ff590: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ff590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ff594:
    // 0x2ff594: 0x320f809  jalr        $t9
label_2ff598:
    if (ctx->pc == 0x2FF598u) {
        ctx->pc = 0x2FF598u;
            // 0x2ff598: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FF59Cu;
        goto label_2ff59c;
    }
    ctx->pc = 0x2FF594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF59Cu);
        ctx->pc = 0x2FF598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF594u;
            // 0x2ff598: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF59Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF59Cu; }
            if (ctx->pc != 0x2FF59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FF59Cu;
label_2ff59c:
    // 0x2ff59c: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x2ff59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
label_2ff5a0:
    // 0x2ff5a0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x2ff5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_2ff5a4:
    // 0x2ff5a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ff5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff5a8:
    // 0x2ff5a8: 0xc0c3e74  jal         func_30F9D0
label_2ff5ac:
    if (ctx->pc == 0x2FF5ACu) {
        ctx->pc = 0x2FF5B0u;
        goto label_2ff5b0;
    }
    ctx->pc = 0x2FF5A8u;
    SET_GPR_U32(ctx, 31, 0x2FF5B0u);
    ctx->pc = 0x30F9D0u;
    if (runtime->hasFunction(0x30F9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF5B0u; }
        if (ctx->pc != 0x2FF5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWaterLevel__Ff_0x30f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF5B0u; }
        if (ctx->pc != 0x2FF5B0u) { return; }
    }
    ctx->pc = 0x2FF5B0u;
label_2ff5b0:
    // 0x2ff5b0: 0xaf809fd0  sw          $zero, -0x6030($gp)
    ctx->pc = 0x2ff5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942672), GPR_U32(ctx, 0));
label_2ff5b4:
    // 0x2ff5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff5b8:
    // 0x2ff5b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff5bc:
    // 0x2ff5bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff5c0:
    // 0x2ff5c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff5c4:
    // 0x2ff5c4: 0x3e00008  jr          $ra
label_2ff5c8:
    if (ctx->pc == 0x2FF5C8u) {
        ctx->pc = 0x2FF5C8u;
            // 0x2ff5c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FF5CCu;
        goto label_fallthrough_0x2ff5c4;
    }
    ctx->pc = 0x2FF5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF5C4u;
            // 0x2ff5c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ff5c4:
    ctx->pc = 0x2FF5CCu;
}
