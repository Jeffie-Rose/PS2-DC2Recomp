#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveBeforeInterior__FP6CScene
// Address: 0x2df600 - 0x2df6e8
void SaveBeforeInterior__FP6CScene_0x2df600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveBeforeInterior__FP6CScene_0x2df600");
#endif

    switch (ctx->pc) {
        case 0x2df600u: goto label_2df600;
        case 0x2df604u: goto label_2df604;
        case 0x2df608u: goto label_2df608;
        case 0x2df60cu: goto label_2df60c;
        case 0x2df610u: goto label_2df610;
        case 0x2df614u: goto label_2df614;
        case 0x2df618u: goto label_2df618;
        case 0x2df61cu: goto label_2df61c;
        case 0x2df620u: goto label_2df620;
        case 0x2df624u: goto label_2df624;
        case 0x2df628u: goto label_2df628;
        case 0x2df62cu: goto label_2df62c;
        case 0x2df630u: goto label_2df630;
        case 0x2df634u: goto label_2df634;
        case 0x2df638u: goto label_2df638;
        case 0x2df63cu: goto label_2df63c;
        case 0x2df640u: goto label_2df640;
        case 0x2df644u: goto label_2df644;
        case 0x2df648u: goto label_2df648;
        case 0x2df64cu: goto label_2df64c;
        case 0x2df650u: goto label_2df650;
        case 0x2df654u: goto label_2df654;
        case 0x2df658u: goto label_2df658;
        case 0x2df65cu: goto label_2df65c;
        case 0x2df660u: goto label_2df660;
        case 0x2df664u: goto label_2df664;
        case 0x2df668u: goto label_2df668;
        case 0x2df66cu: goto label_2df66c;
        case 0x2df670u: goto label_2df670;
        case 0x2df674u: goto label_2df674;
        case 0x2df678u: goto label_2df678;
        case 0x2df67cu: goto label_2df67c;
        case 0x2df680u: goto label_2df680;
        case 0x2df684u: goto label_2df684;
        case 0x2df688u: goto label_2df688;
        case 0x2df68cu: goto label_2df68c;
        case 0x2df690u: goto label_2df690;
        case 0x2df694u: goto label_2df694;
        case 0x2df698u: goto label_2df698;
        case 0x2df69cu: goto label_2df69c;
        case 0x2df6a0u: goto label_2df6a0;
        case 0x2df6a4u: goto label_2df6a4;
        case 0x2df6a8u: goto label_2df6a8;
        case 0x2df6acu: goto label_2df6ac;
        case 0x2df6b0u: goto label_2df6b0;
        case 0x2df6b4u: goto label_2df6b4;
        case 0x2df6b8u: goto label_2df6b8;
        case 0x2df6bcu: goto label_2df6bc;
        case 0x2df6c0u: goto label_2df6c0;
        case 0x2df6c4u: goto label_2df6c4;
        case 0x2df6c8u: goto label_2df6c8;
        case 0x2df6ccu: goto label_2df6cc;
        case 0x2df6d0u: goto label_2df6d0;
        case 0x2df6d4u: goto label_2df6d4;
        case 0x2df6d8u: goto label_2df6d8;
        case 0x2df6dcu: goto label_2df6dc;
        case 0x2df6e0u: goto label_2df6e0;
        case 0x2df6e4u: goto label_2df6e4;
        default: break;
    }

    ctx->pc = 0x2df600u;

label_2df600:
    // 0x2df600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2df604:
    // 0x2df604: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2df608:
    // 0x2df608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2df608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2df60c:
    // 0x2df60c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2df610:
    // 0x2df610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2df614:
    // 0x2df614: 0x8c258d70  lw          $a1, -0x7290($at)
    ctx->pc = 0x2df614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
label_2df618:
    // 0x2df618: 0xc0a0f24  jal         func_283C90
label_2df61c:
    if (ctx->pc == 0x2DF61Cu) {
        ctx->pc = 0x2DF61Cu;
            // 0x2df61c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF620u;
        goto label_2df620;
    }
    ctx->pc = 0x2DF618u;
    SET_GPR_U32(ctx, 31, 0x2DF620u);
    ctx->pc = 0x2DF61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF618u;
            // 0x2df61c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF620u; }
        if (ctx->pc != 0x2DF620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF620u; }
        if (ctx->pc != 0x2DF620u) { return; }
    }
    ctx->pc = 0x2DF620u;
label_2df620:
    // 0x2df620: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2df624:
    if (ctx->pc == 0x2DF624u) {
        ctx->pc = 0x2DF624u;
            // 0x2df624: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DF628u;
        goto label_2df628;
    }
    ctx->pc = 0x2DF620u;
    {
        const bool branch_taken_0x2df620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF620u;
            // 0x2df624: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df620) {
            ctx->pc = 0x2DF634u;
            goto label_2df634;
        }
    }
    ctx->pc = 0x2DF628u;
label_2df628:
    // 0x2df628: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df62c:
    // 0x2df62c: 0xc04a3dc  jal         func_128F70
label_2df630:
    if (ctx->pc == 0x2DF630u) {
        ctx->pc = 0x2DF630u;
            // 0x2df630: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
        ctx->pc = 0x2DF634u;
        goto label_2df634;
    }
    ctx->pc = 0x2DF62Cu;
    SET_GPR_U32(ctx, 31, 0x2DF634u);
    ctx->pc = 0x2DF630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF62Cu;
            // 0x2df630: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF634u; }
        if (ctx->pc != 0x2DF634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF634u; }
        if (ctx->pc != 0x2DF634u) { return; }
    }
    ctx->pc = 0x2DF634u;
label_2df634:
    // 0x2df634: 0x8e252e50  lw          $a1, 0x2E50($s1)
    ctx->pc = 0x2df634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
label_2df638:
    // 0x2df638: 0xc0a0ed8  jal         func_283B60
label_2df63c:
    if (ctx->pc == 0x2DF63Cu) {
        ctx->pc = 0x2DF63Cu;
            // 0x2df63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF640u;
        goto label_2df640;
    }
    ctx->pc = 0x2DF638u;
    SET_GPR_U32(ctx, 31, 0x2DF640u);
    ctx->pc = 0x2DF63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF638u;
            // 0x2df63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF640u; }
        if (ctx->pc != 0x2DF640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF640u; }
        if (ctx->pc != 0x2DF640u) { return; }
    }
    ctx->pc = 0x2DF640u;
label_2df640:
    // 0x2df640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df644:
    // 0x2df644: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2df648:
    if (ctx->pc == 0x2DF648u) {
        ctx->pc = 0x2DF648u;
            // 0x2df648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF64Cu;
        goto label_2df64c;
    }
    ctx->pc = 0x2DF644u;
    {
        const bool branch_taken_0x2df644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF644u;
            // 0x2df648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df644) {
            ctx->pc = 0x2DF680u;
            goto label_2df680;
        }
    }
    ctx->pc = 0x2DF64Cu;
label_2df64c:
    // 0x2df64c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2df64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2df650:
    // 0x2df650: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2df650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2df654:
    // 0x2df654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df658:
    // 0x2df658: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2df658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2df65c:
    // 0x2df65c: 0x320f809  jalr        $t9
label_2df660:
    if (ctx->pc == 0x2DF660u) {
        ctx->pc = 0x2DF660u;
            // 0x2df660: 0x24a58e50  addiu       $a1, $a1, -0x71B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938192));
        ctx->pc = 0x2DF664u;
        goto label_2df664;
    }
    ctx->pc = 0x2DF65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DF664u);
        ctx->pc = 0x2DF660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF65Cu;
            // 0x2df660: 0x24a58e50  addiu       $a1, $a1, -0x71B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DF664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DF664u; }
            if (ctx->pc != 0x2DF664u) { return; }
        }
        }
    }
    ctx->pc = 0x2DF664u;
label_2df664:
    // 0x2df664: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2df664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2df668:
    // 0x2df668: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2df668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2df66c:
    // 0x2df66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df670:
    // 0x2df670: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2df670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2df674:
    // 0x2df674: 0x320f809  jalr        $t9
label_2df678:
    if (ctx->pc == 0x2DF678u) {
        ctx->pc = 0x2DF678u;
            // 0x2df678: 0x24a58e60  addiu       $a1, $a1, -0x71A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938208));
        ctx->pc = 0x2DF67Cu;
        goto label_2df67c;
    }
    ctx->pc = 0x2DF674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DF67Cu);
        ctx->pc = 0x2DF678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF674u;
            // 0x2df678: 0x24a58e60  addiu       $a1, $a1, -0x71A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DF67Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DF67Cu; }
            if (ctx->pc != 0x2DF67Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DF67Cu;
label_2df67c:
    // 0x2df67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df680:
    // 0x2df680: 0xc0a9838  jal         func_2A60E0
label_2df684:
    if (ctx->pc == 0x2DF684u) {
        ctx->pc = 0x2DF688u;
        goto label_2df688;
    }
    ctx->pc = 0x2DF680u;
    SET_GPR_U32(ctx, 31, 0x2DF688u);
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF688u; }
        if (ctx->pc != 0x2DF688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF688u; }
        if (ctx->pc != 0x2DF688u) { return; }
    }
    ctx->pc = 0x2DF688u;
label_2df688:
    // 0x2df688: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2df688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2df68c:
    // 0x2df68c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2df68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2df690:
    // 0x2df690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df694:
    // 0x2df694: 0x24a58f10  addiu       $a1, $a1, -0x70F0
    ctx->pc = 0x2df694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938384));
label_2df698:
    // 0x2df698: 0xc0a9944  jal         func_2A6510
label_2df69c:
    if (ctx->pc == 0x2DF69Cu) {
        ctx->pc = 0x2DF69Cu;
            // 0x2df69c: 0xaf829ec4  sw          $v0, -0x613C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942404), GPR_U32(ctx, 2));
        ctx->pc = 0x2DF6A0u;
        goto label_2df6a0;
    }
    ctx->pc = 0x2DF698u;
    SET_GPR_U32(ctx, 31, 0x2DF6A0u);
    ctx->pc = 0x2DF69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF698u;
            // 0x2df69c: 0xaf829ec4  sw          $v0, -0x613C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6A0u; }
        if (ctx->pc != 0x2DF6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6A0u; }
        if (ctx->pc != 0x2DF6A0u) { return; }
    }
    ctx->pc = 0x2DF6A0u;
label_2df6a0:
    // 0x2df6a0: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x2df6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_2df6a4:
    // 0x2df6a4: 0xc0a0e30  jal         func_2838C0
label_2df6a8:
    if (ctx->pc == 0x2DF6A8u) {
        ctx->pc = 0x2DF6A8u;
            // 0x2df6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF6ACu;
        goto label_2df6ac;
    }
    ctx->pc = 0x2DF6A4u;
    SET_GPR_U32(ctx, 31, 0x2DF6ACu);
    ctx->pc = 0x2DF6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6A4u;
            // 0x2df6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6ACu; }
        if (ctx->pc != 0x2DF6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6ACu; }
        if (ctx->pc != 0x2DF6ACu) { return; }
    }
    ctx->pc = 0x2DF6ACu;
label_2df6ac:
    // 0x2df6ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df6b0:
    // 0x2df6b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2df6b4:
    if (ctx->pc == 0x2DF6B4u) {
        ctx->pc = 0x2DF6B4u;
            // 0x2df6b4: 0x3c0501f6  lui         $a1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DF6B8u;
        goto label_2df6b8;
    }
    ctx->pc = 0x2DF6B0u;
    {
        const bool branch_taken_0x2df6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6B0u;
            // 0x2df6b4: 0x3c0501f6  lui         $a1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6b0) {
            ctx->pc = 0x2DF6D4u;
            goto label_2df6d4;
        }
    }
    ctx->pc = 0x2DF6B8u;
label_2df6b8:
    // 0x2df6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df6bc:
    // 0x2df6bc: 0xc04c574  jal         func_1315D0
label_2df6c0:
    if (ctx->pc == 0x2DF6C0u) {
        ctx->pc = 0x2DF6C0u;
            // 0x2df6c0: 0x24a58e70  addiu       $a1, $a1, -0x7190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938224));
        ctx->pc = 0x2DF6C4u;
        goto label_2df6c4;
    }
    ctx->pc = 0x2DF6BCu;
    SET_GPR_U32(ctx, 31, 0x2DF6C4u);
    ctx->pc = 0x2DF6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6BCu;
            // 0x2df6c0: 0x24a58e70  addiu       $a1, $a1, -0x7190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6C4u; }
        if (ctx->pc != 0x2DF6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6C4u; }
        if (ctx->pc != 0x2DF6C4u) { return; }
    }
    ctx->pc = 0x2DF6C4u;
label_2df6c4:
    // 0x2df6c4: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2df6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2df6c8:
    // 0x2df6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df6cc:
    // 0x2df6cc: 0xc04c578  jal         func_1315E0
label_2df6d0:
    if (ctx->pc == 0x2DF6D0u) {
        ctx->pc = 0x2DF6D0u;
            // 0x2df6d0: 0x24a58e80  addiu       $a1, $a1, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938240));
        ctx->pc = 0x2DF6D4u;
        goto label_2df6d4;
    }
    ctx->pc = 0x2DF6CCu;
    SET_GPR_U32(ctx, 31, 0x2DF6D4u);
    ctx->pc = 0x2DF6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6CCu;
            // 0x2df6d0: 0x24a58e80  addiu       $a1, $a1, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6D4u; }
        if (ctx->pc != 0x2DF6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF6D4u; }
        if (ctx->pc != 0x2DF6D4u) { return; }
    }
    ctx->pc = 0x2DF6D4u;
label_2df6d4:
    // 0x2df6d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2df6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2df6d8:
    // 0x2df6d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2df6dc:
    // 0x2df6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2df6e0:
    // 0x2df6e0: 0x3e00008  jr          $ra
label_2df6e4:
    if (ctx->pc == 0x2DF6E4u) {
        ctx->pc = 0x2DF6E4u;
            // 0x2df6e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2DF6E8u;
        goto label_fallthrough_0x2df6e0;
    }
    ctx->pc = 0x2DF6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF6E0u;
            // 0x2df6e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2df6e0:
    ctx->pc = 0x2DF6E8u;
}
