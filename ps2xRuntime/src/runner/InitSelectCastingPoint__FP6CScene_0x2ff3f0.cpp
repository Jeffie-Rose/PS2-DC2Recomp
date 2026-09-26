#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSelectCastingPoint__FP6CScene
// Address: 0x2ff3f0 - 0x2ff4e4
void InitSelectCastingPoint__FP6CScene_0x2ff3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSelectCastingPoint__FP6CScene_0x2ff3f0");
#endif

    switch (ctx->pc) {
        case 0x2ff3f0u: goto label_2ff3f0;
        case 0x2ff3f4u: goto label_2ff3f4;
        case 0x2ff3f8u: goto label_2ff3f8;
        case 0x2ff3fcu: goto label_2ff3fc;
        case 0x2ff400u: goto label_2ff400;
        case 0x2ff404u: goto label_2ff404;
        case 0x2ff408u: goto label_2ff408;
        case 0x2ff40cu: goto label_2ff40c;
        case 0x2ff410u: goto label_2ff410;
        case 0x2ff414u: goto label_2ff414;
        case 0x2ff418u: goto label_2ff418;
        case 0x2ff41cu: goto label_2ff41c;
        case 0x2ff420u: goto label_2ff420;
        case 0x2ff424u: goto label_2ff424;
        case 0x2ff428u: goto label_2ff428;
        case 0x2ff42cu: goto label_2ff42c;
        case 0x2ff430u: goto label_2ff430;
        case 0x2ff434u: goto label_2ff434;
        case 0x2ff438u: goto label_2ff438;
        case 0x2ff43cu: goto label_2ff43c;
        case 0x2ff440u: goto label_2ff440;
        case 0x2ff444u: goto label_2ff444;
        case 0x2ff448u: goto label_2ff448;
        case 0x2ff44cu: goto label_2ff44c;
        case 0x2ff450u: goto label_2ff450;
        case 0x2ff454u: goto label_2ff454;
        case 0x2ff458u: goto label_2ff458;
        case 0x2ff45cu: goto label_2ff45c;
        case 0x2ff460u: goto label_2ff460;
        case 0x2ff464u: goto label_2ff464;
        case 0x2ff468u: goto label_2ff468;
        case 0x2ff46cu: goto label_2ff46c;
        case 0x2ff470u: goto label_2ff470;
        case 0x2ff474u: goto label_2ff474;
        case 0x2ff478u: goto label_2ff478;
        case 0x2ff47cu: goto label_2ff47c;
        case 0x2ff480u: goto label_2ff480;
        case 0x2ff484u: goto label_2ff484;
        case 0x2ff488u: goto label_2ff488;
        case 0x2ff48cu: goto label_2ff48c;
        case 0x2ff490u: goto label_2ff490;
        case 0x2ff494u: goto label_2ff494;
        case 0x2ff498u: goto label_2ff498;
        case 0x2ff49cu: goto label_2ff49c;
        case 0x2ff4a0u: goto label_2ff4a0;
        case 0x2ff4a4u: goto label_2ff4a4;
        case 0x2ff4a8u: goto label_2ff4a8;
        case 0x2ff4acu: goto label_2ff4ac;
        case 0x2ff4b0u: goto label_2ff4b0;
        case 0x2ff4b4u: goto label_2ff4b4;
        case 0x2ff4b8u: goto label_2ff4b8;
        case 0x2ff4bcu: goto label_2ff4bc;
        case 0x2ff4c0u: goto label_2ff4c0;
        case 0x2ff4c4u: goto label_2ff4c4;
        case 0x2ff4c8u: goto label_2ff4c8;
        case 0x2ff4ccu: goto label_2ff4cc;
        case 0x2ff4d0u: goto label_2ff4d0;
        case 0x2ff4d4u: goto label_2ff4d4;
        case 0x2ff4d8u: goto label_2ff4d8;
        case 0x2ff4dcu: goto label_2ff4dc;
        case 0x2ff4e0u: goto label_2ff4e0;
        default: break;
    }

    ctx->pc = 0x2ff3f0u;

label_2ff3f0:
    // 0x2ff3f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ff3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ff3f4:
    // 0x2ff3f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ff3f8:
    // 0x2ff3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff3fc:
    // 0x2ff3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff400:
    // 0x2ff400: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x2ff400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_2ff404:
    // 0x2ff404: 0xc0a0ed8  jal         func_283B60
label_2ff408:
    if (ctx->pc == 0x2FF408u) {
        ctx->pc = 0x2FF408u;
            // 0x2ff408: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF40Cu;
        goto label_2ff40c;
    }
    ctx->pc = 0x2FF404u;
    SET_GPR_U32(ctx, 31, 0x2FF40Cu);
    ctx->pc = 0x2FF408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF404u;
            // 0x2ff408: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF40Cu; }
        if (ctx->pc != 0x2FF40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF40Cu; }
        if (ctx->pc != 0x2FF40Cu) { return; }
    }
    ctx->pc = 0x2FF40Cu;
label_2ff40c:
    // 0x2ff40c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff410:
    // 0x2ff410: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2ff414:
    if (ctx->pc == 0x2FF414u) {
        ctx->pc = 0x2FF414u;
            // 0x2ff414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF418u;
        goto label_2ff418;
    }
    ctx->pc = 0x2FF410u;
    {
        const bool branch_taken_0x2ff410 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF410u;
            // 0x2ff414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff410) {
            ctx->pc = 0x2FF420u;
            goto label_2ff420;
        }
    }
    ctx->pc = 0x2FF418u;
label_2ff418:
    // 0x2ff418: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2ff41c:
    if (ctx->pc == 0x2FF41Cu) {
        ctx->pc = 0x2FF41Cu;
            // 0x2ff41c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2FF420u;
        goto label_2ff420;
    }
    ctx->pc = 0x2FF418u;
    {
        const bool branch_taken_0x2ff418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF418u;
            // 0x2ff41c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff418) {
            ctx->pc = 0x2FF4D4u;
            goto label_2ff4d4;
        }
    }
    ctx->pc = 0x2FF420u;
label_2ff420:
    // 0x2ff420: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x2ff420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_2ff424:
    // 0x2ff424: 0xc0a0e30  jal         func_2838C0
label_2ff428:
    if (ctx->pc == 0x2FF428u) {
        ctx->pc = 0x2FF428u;
            // 0x2ff428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF42Cu;
        goto label_2ff42c;
    }
    ctx->pc = 0x2FF424u;
    SET_GPR_U32(ctx, 31, 0x2FF42Cu);
    ctx->pc = 0x2FF428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF424u;
            // 0x2ff428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF42Cu; }
        if (ctx->pc != 0x2FF42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF42Cu; }
        if (ctx->pc != 0x2FF42Cu) { return; }
    }
    ctx->pc = 0x2FF42Cu;
label_2ff42c:
    // 0x2ff42c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ff42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff430:
    // 0x2ff430: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2ff434:
    if (ctx->pc == 0x2FF434u) {
        ctx->pc = 0x2FF434u;
            // 0x2ff434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF438u;
        goto label_2ff438;
    }
    ctx->pc = 0x2FF430u;
    {
        const bool branch_taken_0x2ff430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF430u;
            // 0x2ff434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff430) {
            ctx->pc = 0x2FF458u;
            goto label_2ff458;
        }
    }
    ctx->pc = 0x2FF438u;
label_2ff438:
    // 0x2ff438: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x2ff438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2ff43c:
    // 0x2ff43c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2ff43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2ff440:
    // 0x2ff440: 0x320f809  jalr        $t9
label_2ff444:
    if (ctx->pc == 0x2FF444u) {
        ctx->pc = 0x2FF444u;
            // 0x2ff444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF448u;
        goto label_2ff448;
    }
    ctx->pc = 0x2FF440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF448u);
        ctx->pc = 0x2FF444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF440u;
            // 0x2ff444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF448u; }
            if (ctx->pc != 0x2FF448u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF448u;
label_2ff448:
    // 0x2ff448: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2ff448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2ff44c:
    // 0x2ff44c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2ff450:
    if (ctx->pc == 0x2FF450u) {
        ctx->pc = 0x2FF454u;
        goto label_2ff454;
    }
    ctx->pc = 0x2FF44Cu;
    {
        const bool branch_taken_0x2ff44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ff44c) {
            ctx->pc = 0x2FF460u;
            goto label_2ff460;
        }
    }
    ctx->pc = 0x2FF454u;
label_2ff454:
    // 0x2ff454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ff454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff458:
    // 0x2ff458: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2ff45c:
    if (ctx->pc == 0x2FF45Cu) {
        ctx->pc = 0x2FF460u;
        goto label_2ff460;
    }
    ctx->pc = 0x2FF458u;
    {
        const bool branch_taken_0x2ff458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff458) {
            ctx->pc = 0x2FF4D0u;
            goto label_2ff4d0;
        }
    }
    ctx->pc = 0x2FF460u;
label_2ff460:
    // 0x2ff460: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ff460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ff464:
    // 0x2ff464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff468:
    // 0x2ff468: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ff468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ff46c:
    // 0x2ff46c: 0x320f809  jalr        $t9
label_2ff470:
    if (ctx->pc == 0x2FF470u) {
        ctx->pc = 0x2FF470u;
            // 0x2ff470: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FF474u;
        goto label_2ff474;
    }
    ctx->pc = 0x2FF46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF474u);
        ctx->pc = 0x2FF470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF46Cu;
            // 0x2ff470: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF474u; }
            if (ctx->pc != 0x2FF474u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF474u;
label_2ff474:
    // 0x2ff474: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2ff474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2ff478:
    // 0x2ff478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff47c:
    // 0x2ff47c: 0xc0bb4c8  jal         func_2ED320
label_2ff480:
    if (ctx->pc == 0x2FF480u) {
        ctx->pc = 0x2FF480u;
            // 0x2ff480: 0x24a598e0  addiu       $a1, $a1, -0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
        ctx->pc = 0x2FF484u;
        goto label_2ff484;
    }
    ctx->pc = 0x2FF47Cu;
    SET_GPR_U32(ctx, 31, 0x2FF484u);
    ctx->pc = 0x2FF480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF47Cu;
            // 0x2ff480: 0x24a598e0  addiu       $a1, $a1, -0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED320u;
    if (runtime->hasFunction(0x2ED320u)) {
        auto targetFn = runtime->lookupFunction(0x2ED320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF484u; }
        if (ctx->pc != 0x2FF484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyParam__14CCameraControlFR14CCameraControl_0x2ed320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF484u; }
        if (ctx->pc != 0x2FF484u) { return; }
    }
    ctx->pc = 0x2FF484u;
label_2ff484:
    // 0x2ff484: 0xc0bafe8  jal         func_2EBFA0
label_2ff488:
    if (ctx->pc == 0x2FF488u) {
        ctx->pc = 0x2FF488u;
            // 0x2ff488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF48Cu;
        goto label_2ff48c;
    }
    ctx->pc = 0x2FF484u;
    SET_GPR_U32(ctx, 31, 0x2FF48Cu);
    ctx->pc = 0x2FF488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF484u;
            // 0x2ff488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF48Cu; }
        if (ctx->pc != 0x2FF48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF48Cu; }
        if (ctx->pc != 0x2FF48Cu) { return; }
    }
    ctx->pc = 0x2FF48Cu;
label_2ff48c:
    // 0x2ff48c: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x2ff48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
label_2ff490:
    // 0x2ff490: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2ff490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
label_2ff494:
    // 0x2ff494: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2ff494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_2ff498:
    // 0x2ff498: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2ff498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2ff49c:
    // 0x2ff49c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2ff49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2ff4a0:
    // 0x2ff4a0: 0xc064214  jal         func_190850
label_2ff4a4:
    if (ctx->pc == 0x2FF4A4u) {
        ctx->pc = 0x2FF4A4u;
            // 0x2ff4a4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2FF4A8u;
        goto label_2ff4a8;
    }
    ctx->pc = 0x2FF4A0u;
    SET_GPR_U32(ctx, 31, 0x2FF4A8u);
    ctx->pc = 0x2FF4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4A0u;
            // 0x2ff4a4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190850u;
    if (runtime->hasFunction(0x190850u)) {
        auto targetFn = runtime->lookupFunction(0x190850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4A8u; }
        if (ctx->pc != 0x2FF4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCaptureMode__Fv_0x190850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4A8u; }
        if (ctx->pc != 0x2FF4A8u) { return; }
    }
    ctx->pc = 0x2FF4A8u;
label_2ff4a8:
    // 0x2ff4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ff4ac:
    if (ctx->pc == 0x2FF4ACu) {
        ctx->pc = 0x2FF4ACu;
            // 0x2ff4ac: 0x3c0200c3  lui         $v0, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)195 << 16));
        ctx->pc = 0x2FF4B0u;
        goto label_2ff4b0;
    }
    ctx->pc = 0x2FF4A8u;
    {
        const bool branch_taken_0x2ff4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4A8u;
            // 0x2ff4ac: 0x3c0200c3  lui         $v0, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)195 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4a8) {
            ctx->pc = 0x2FF4B8u;
            goto label_2ff4b8;
        }
    }
    ctx->pc = 0x2FF4B0u;
label_2ff4b0:
    // 0x2ff4b0: 0xc04a0e6  jal         func_128398
label_2ff4b4:
    if (ctx->pc == 0x2FF4B4u) {
        ctx->pc = 0x2FF4B4u;
            // 0x2ff4b4: 0x34441aff  ori         $a0, $v0, 0x1AFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6911);
        ctx->pc = 0x2FF4B8u;
        goto label_2ff4b8;
    }
    ctx->pc = 0x2FF4B0u;
    SET_GPR_U32(ctx, 31, 0x2FF4B8u);
    ctx->pc = 0x2FF4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4B0u;
            // 0x2ff4b4: 0x34441aff  ori         $a0, $v0, 0x1AFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6911);
        ctx->in_delay_slot = false;
    ctx->pc = 0x128398u;
    if (runtime->hasFunction(0x128398u)) {
        auto targetFn = runtime->lookupFunction(0x128398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4B8u; }
        if (ctx->pc != 0x2FF4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        srand_0x128398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4B8u; }
        if (ctx->pc != 0x2FF4B8u) { return; }
    }
    ctx->pc = 0x2FF4B8u;
label_2ff4b8:
    // 0x2ff4b8: 0xc0c0fd0  jal         func_303F40
label_2ff4bc:
    if (ctx->pc == 0x2FF4BCu) {
        ctx->pc = 0x2FF4C0u;
        goto label_2ff4c0;
    }
    ctx->pc = 0x2FF4B8u;
    SET_GPR_U32(ctx, 31, 0x2FF4C0u);
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4C0u; }
        if (ctx->pc != 0x2FF4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4C0u; }
        if (ctx->pc != 0x2FF4C0u) { return; }
    }
    ctx->pc = 0x2FF4C0u;
label_2ff4c0:
    // 0x2ff4c0: 0x8f85a01c  lw          $a1, -0x5FE4($gp)
    ctx->pc = 0x2ff4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
label_2ff4c4:
    // 0x2ff4c4: 0xc0bf184  jal         func_2FC610
label_2ff4c8:
    if (ctx->pc == 0x2FF4C8u) {
        ctx->pc = 0x2FF4C8u;
            // 0x2ff4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4CCu;
        goto label_2ff4cc;
    }
    ctx->pc = 0x2FF4C4u;
    SET_GPR_U32(ctx, 31, 0x2FF4CCu);
    ctx->pc = 0x2FF4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4C4u;
            // 0x2ff4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC610u;
    if (runtime->hasFunction(0x2FC610u)) {
        auto targetFn = runtime->lookupFunction(0x2FC610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4CCu; }
        if (ctx->pc != 0x2FF4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadExMotionBG__FP11SubGameInfoP1_0x2fc610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4CCu; }
        if (ctx->pc != 0x2FF4CCu) { return; }
    }
    ctx->pc = 0x2FF4CCu;
label_2ff4cc:
    // 0x2ff4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff4d0:
    // 0x2ff4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff4d4:
    // 0x2ff4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff4d8:
    // 0x2ff4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff4dc:
    // 0x2ff4dc: 0x3e00008  jr          $ra
label_2ff4e0:
    if (ctx->pc == 0x2FF4E0u) {
        ctx->pc = 0x2FF4E0u;
            // 0x2ff4e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2FF4E4u;
        goto label_fallthrough_0x2ff4dc;
    }
    ctx->pc = 0x2FF4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4DCu;
            // 0x2ff4e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ff4dc:
    ctx->pc = 0x2FF4E4u;
}
