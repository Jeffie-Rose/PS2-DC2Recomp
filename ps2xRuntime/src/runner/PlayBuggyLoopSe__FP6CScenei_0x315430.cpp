#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlayBuggyLoopSe__FP6CScenei
// Address: 0x315430 - 0x315510
void PlayBuggyLoopSe__FP6CScenei_0x315430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayBuggyLoopSe__FP6CScenei_0x315430");
#endif

    switch (ctx->pc) {
        case 0x315430u: goto label_315430;
        case 0x315434u: goto label_315434;
        case 0x315438u: goto label_315438;
        case 0x31543cu: goto label_31543c;
        case 0x315440u: goto label_315440;
        case 0x315444u: goto label_315444;
        case 0x315448u: goto label_315448;
        case 0x31544cu: goto label_31544c;
        case 0x315450u: goto label_315450;
        case 0x315454u: goto label_315454;
        case 0x315458u: goto label_315458;
        case 0x31545cu: goto label_31545c;
        case 0x315460u: goto label_315460;
        case 0x315464u: goto label_315464;
        case 0x315468u: goto label_315468;
        case 0x31546cu: goto label_31546c;
        case 0x315470u: goto label_315470;
        case 0x315474u: goto label_315474;
        case 0x315478u: goto label_315478;
        case 0x31547cu: goto label_31547c;
        case 0x315480u: goto label_315480;
        case 0x315484u: goto label_315484;
        case 0x315488u: goto label_315488;
        case 0x31548cu: goto label_31548c;
        case 0x315490u: goto label_315490;
        case 0x315494u: goto label_315494;
        case 0x315498u: goto label_315498;
        case 0x31549cu: goto label_31549c;
        case 0x3154a0u: goto label_3154a0;
        case 0x3154a4u: goto label_3154a4;
        case 0x3154a8u: goto label_3154a8;
        case 0x3154acu: goto label_3154ac;
        case 0x3154b0u: goto label_3154b0;
        case 0x3154b4u: goto label_3154b4;
        case 0x3154b8u: goto label_3154b8;
        case 0x3154bcu: goto label_3154bc;
        case 0x3154c0u: goto label_3154c0;
        case 0x3154c4u: goto label_3154c4;
        case 0x3154c8u: goto label_3154c8;
        case 0x3154ccu: goto label_3154cc;
        case 0x3154d0u: goto label_3154d0;
        case 0x3154d4u: goto label_3154d4;
        case 0x3154d8u: goto label_3154d8;
        case 0x3154dcu: goto label_3154dc;
        case 0x3154e0u: goto label_3154e0;
        case 0x3154e4u: goto label_3154e4;
        case 0x3154e8u: goto label_3154e8;
        case 0x3154ecu: goto label_3154ec;
        case 0x3154f0u: goto label_3154f0;
        case 0x3154f4u: goto label_3154f4;
        case 0x3154f8u: goto label_3154f8;
        case 0x3154fcu: goto label_3154fc;
        case 0x315500u: goto label_315500;
        case 0x315504u: goto label_315504;
        case 0x315508u: goto label_315508;
        case 0x31550cu: goto label_31550c;
        default: break;
    }

    ctx->pc = 0x315430u;

label_315430:
    // 0x315430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x315430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_315434:
    // 0x315434: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x315434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_315438:
    // 0x315438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x315438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31543c:
    // 0x31543c: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x31543cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
label_315440:
    // 0x315440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_315444:
    // 0x315444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_315448:
    // 0x315448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x315448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31544c:
    // 0x31544c: 0x818021  addu        $s0, $a0, $at
    ctx->pc = 0x31544cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_315450:
    // 0x315450: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x315450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_315454:
    // 0x315454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x315454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315458:
    // 0x315458: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x315458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_31545c:
    // 0x31545c: 0x320f809  jalr        $t9
label_315460:
    if (ctx->pc == 0x315460u) {
        ctx->pc = 0x315460u;
            // 0x315460: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x315464u;
        goto label_315464;
    }
    ctx->pc = 0x31545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x315464u);
        ctx->pc = 0x315460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31545Cu;
            // 0x315460: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x315464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x315464u; }
            if (ctx->pc != 0x315464u) { return; }
        }
        }
    }
    ctx->pc = 0x315464u;
label_315464:
    // 0x315464: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x315464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_315468:
    // 0x315468: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x315468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
label_31546c:
    // 0x31546c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31546cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315470:
    // 0x315470: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x315470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_315474:
    // 0x315474: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x315474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_315478:
    // 0x315478: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x315478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_31547c:
    // 0x31547c: 0xc063bbc  jal         func_18EEF0
label_315480:
    if (ctx->pc == 0x315480u) {
        ctx->pc = 0x315480u;
            // 0x315480: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x315484u;
        goto label_315484;
    }
    ctx->pc = 0x31547Cu;
    SET_GPR_U32(ctx, 31, 0x315484u);
    ctx->pc = 0x315480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31547Cu;
            // 0x315480: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315484u; }
        if (ctx->pc != 0x315484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x315484u; }
        if (ctx->pc != 0x315484u) { return; }
    }
    ctx->pc = 0x315484u;
label_315484:
    // 0x315484: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x315484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_315488:
    // 0x315488: 0x16260008  bne         $s1, $a2, . + 4 + (0x8 << 2)
label_31548c:
    if (ctx->pc == 0x31548Cu) {
        ctx->pc = 0x315490u;
        goto label_315490;
    }
    ctx->pc = 0x315488u;
    {
        const bool branch_taken_0x315488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x315488) {
            ctx->pc = 0x3154ACu;
            goto label_3154ac;
        }
    }
    ctx->pc = 0x315490u;
label_315490:
    // 0x315490: 0x8f85a2d8  lw          $a1, -0x5D28($gp)
    ctx->pc = 0x315490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943448)));
label_315494:
    // 0x315494: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x315494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_315498:
    // 0x315498: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x315498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_31549c:
    // 0x31549c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3154a0:
    // 0x3154a0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3154a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3154a4:
    // 0x3154a4: 0xc0631b0  jal         func_18C6C0
label_3154a8:
    if (ctx->pc == 0x3154A8u) {
        ctx->pc = 0x3154A8u;
            // 0x3154a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3154ACu;
        goto label_3154ac;
    }
    ctx->pc = 0x3154A4u;
    SET_GPR_U32(ctx, 31, 0x3154ACu);
    ctx->pc = 0x3154A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3154A4u;
            // 0x3154a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6C0u;
    if (runtime->hasFunction(0x18C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3154ACu; }
        if (ctx->pc != 0x3154ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiiffi_0x18c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3154ACu; }
        if (ctx->pc != 0x3154ACu) { return; }
    }
    ctx->pc = 0x3154ACu;
label_3154ac:
    // 0x3154ac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3154acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3154b0:
    // 0x3154b0: 0x16260008  bne         $s1, $a2, . + 4 + (0x8 << 2)
label_3154b4:
    if (ctx->pc == 0x3154B4u) {
        ctx->pc = 0x3154B8u;
        goto label_3154b8;
    }
    ctx->pc = 0x3154B0u;
    {
        const bool branch_taken_0x3154b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x3154b0) {
            ctx->pc = 0x3154D4u;
            goto label_3154d4;
        }
    }
    ctx->pc = 0x3154B8u;
label_3154b8:
    // 0x3154b8: 0x8f85a2d8  lw          $a1, -0x5D28($gp)
    ctx->pc = 0x3154b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943448)));
label_3154bc:
    // 0x3154bc: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x3154bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3154c0:
    // 0x3154c0: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x3154c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3154c4:
    // 0x3154c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3154c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3154c8:
    // 0x3154c8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3154c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3154cc:
    // 0x3154cc: 0xc0631b0  jal         func_18C6C0
label_3154d0:
    if (ctx->pc == 0x3154D0u) {
        ctx->pc = 0x3154D0u;
            // 0x3154d0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3154D4u;
        goto label_3154d4;
    }
    ctx->pc = 0x3154CCu;
    SET_GPR_U32(ctx, 31, 0x3154D4u);
    ctx->pc = 0x3154D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3154CCu;
            // 0x3154d0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6C0u;
    if (runtime->hasFunction(0x18C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3154D4u; }
        if (ctx->pc != 0x3154D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiiffi_0x18c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3154D4u; }
        if (ctx->pc != 0x3154D4u) { return; }
    }
    ctx->pc = 0x3154D4u;
label_3154d4:
    // 0x3154d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3154d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3154d8:
    // 0x3154d8: 0x16260008  bne         $s1, $a2, . + 4 + (0x8 << 2)
label_3154dc:
    if (ctx->pc == 0x3154DCu) {
        ctx->pc = 0x3154E0u;
        goto label_3154e0;
    }
    ctx->pc = 0x3154D8u;
    {
        const bool branch_taken_0x3154d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x3154d8) {
            ctx->pc = 0x3154FCu;
            goto label_3154fc;
        }
    }
    ctx->pc = 0x3154E0u;
label_3154e0:
    // 0x3154e0: 0x8f85a2d8  lw          $a1, -0x5D28($gp)
    ctx->pc = 0x3154e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943448)));
label_3154e4:
    // 0x3154e4: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x3154e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3154e8:
    // 0x3154e8: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x3154e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3154ec:
    // 0x3154ec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3154ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3154f0:
    // 0x3154f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3154f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3154f4:
    // 0x3154f4: 0xc0631b0  jal         func_18C6C0
label_3154f8:
    if (ctx->pc == 0x3154F8u) {
        ctx->pc = 0x3154F8u;
            // 0x3154f8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3154FCu;
        goto label_3154fc;
    }
    ctx->pc = 0x3154F4u;
    SET_GPR_U32(ctx, 31, 0x3154FCu);
    ctx->pc = 0x3154F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3154F4u;
            // 0x3154f8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6C0u;
    if (runtime->hasFunction(0x18C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3154FCu; }
        if (ctx->pc != 0x3154FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiiffi_0x18c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3154FCu; }
        if (ctx->pc != 0x3154FCu) { return; }
    }
    ctx->pc = 0x3154FCu;
label_3154fc:
    // 0x3154fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3154fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_315500:
    // 0x315500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315504:
    // 0x315504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315508:
    // 0x315508: 0x3e00008  jr          $ra
label_31550c:
    if (ctx->pc == 0x31550Cu) {
        ctx->pc = 0x31550Cu;
            // 0x31550c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x315510u;
        goto label_fallthrough_0x315508;
    }
    ctx->pc = 0x315508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31550Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x315508u;
            // 0x31550c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x315508:
    ctx->pc = 0x315510u;
}
