#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawShadowDirect__11CCharacter2Fv
// Address: 0x173610 - 0x1736f8
void DrawShadowDirect__11CCharacter2Fv_0x173610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawShadowDirect__11CCharacter2Fv_0x173610");
#endif

    switch (ctx->pc) {
        case 0x173610u: goto label_173610;
        case 0x173614u: goto label_173614;
        case 0x173618u: goto label_173618;
        case 0x17361cu: goto label_17361c;
        case 0x173620u: goto label_173620;
        case 0x173624u: goto label_173624;
        case 0x173628u: goto label_173628;
        case 0x17362cu: goto label_17362c;
        case 0x173630u: goto label_173630;
        case 0x173634u: goto label_173634;
        case 0x173638u: goto label_173638;
        case 0x17363cu: goto label_17363c;
        case 0x173640u: goto label_173640;
        case 0x173644u: goto label_173644;
        case 0x173648u: goto label_173648;
        case 0x17364cu: goto label_17364c;
        case 0x173650u: goto label_173650;
        case 0x173654u: goto label_173654;
        case 0x173658u: goto label_173658;
        case 0x17365cu: goto label_17365c;
        case 0x173660u: goto label_173660;
        case 0x173664u: goto label_173664;
        case 0x173668u: goto label_173668;
        case 0x17366cu: goto label_17366c;
        case 0x173670u: goto label_173670;
        case 0x173674u: goto label_173674;
        case 0x173678u: goto label_173678;
        case 0x17367cu: goto label_17367c;
        case 0x173680u: goto label_173680;
        case 0x173684u: goto label_173684;
        case 0x173688u: goto label_173688;
        case 0x17368cu: goto label_17368c;
        case 0x173690u: goto label_173690;
        case 0x173694u: goto label_173694;
        case 0x173698u: goto label_173698;
        case 0x17369cu: goto label_17369c;
        case 0x1736a0u: goto label_1736a0;
        case 0x1736a4u: goto label_1736a4;
        case 0x1736a8u: goto label_1736a8;
        case 0x1736acu: goto label_1736ac;
        case 0x1736b0u: goto label_1736b0;
        case 0x1736b4u: goto label_1736b4;
        case 0x1736b8u: goto label_1736b8;
        case 0x1736bcu: goto label_1736bc;
        case 0x1736c0u: goto label_1736c0;
        case 0x1736c4u: goto label_1736c4;
        case 0x1736c8u: goto label_1736c8;
        case 0x1736ccu: goto label_1736cc;
        case 0x1736d0u: goto label_1736d0;
        case 0x1736d4u: goto label_1736d4;
        case 0x1736d8u: goto label_1736d8;
        case 0x1736dcu: goto label_1736dc;
        case 0x1736e0u: goto label_1736e0;
        case 0x1736e4u: goto label_1736e4;
        case 0x1736e8u: goto label_1736e8;
        case 0x1736ecu: goto label_1736ec;
        case 0x1736f0u: goto label_1736f0;
        case 0x1736f4u: goto label_1736f4;
        default: break;
    }

    ctx->pc = 0x173610u;

label_173610:
    // 0x173610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_173614:
    // 0x173614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_173618:
    // 0x173618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17361c:
    // 0x17361c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x17361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_173620:
    // 0x173620: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_173624:
    if (ctx->pc == 0x173624u) {
        ctx->pc = 0x173624u;
            // 0x173624: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173628u;
        goto label_173628;
    }
    ctx->pc = 0x173620u;
    {
        const bool branch_taken_0x173620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173620u;
            // 0x173624: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173620) {
            ctx->pc = 0x173630u;
            goto label_173630;
        }
    }
    ctx->pc = 0x173628u;
label_173628:
    // 0x173628: 0x1000002f  b           . + 4 + (0x2F << 2)
label_17362c:
    if (ctx->pc == 0x17362Cu) {
        ctx->pc = 0x17362Cu;
            // 0x17362c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173630u;
        goto label_173630;
    }
    ctx->pc = 0x173628u;
    {
        const bool branch_taken_0x173628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173628u;
            // 0x17362c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173628) {
            ctx->pc = 0x1736E8u;
            goto label_1736e8;
        }
    }
    ctx->pc = 0x173630u;
label_173630:
    // 0x173630: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173634:
    // 0x173634: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_173638:
    // 0x173638: 0x320f809  jalr        $t9
label_17363c:
    if (ctx->pc == 0x17363Cu) {
        ctx->pc = 0x173640u;
        goto label_173640;
    }
    ctx->pc = 0x173638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173640u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x173640u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173640u; }
            if (ctx->pc != 0x173640u) { return; }
        }
        }
    }
    ctx->pc = 0x173640u;
label_173640:
    // 0x173640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_173644:
    if (ctx->pc == 0x173644u) {
        ctx->pc = 0x173644u;
            // 0x173644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173648u;
        goto label_173648;
    }
    ctx->pc = 0x173640u;
    {
        const bool branch_taken_0x173640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173640u;
            // 0x173644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173640) {
            ctx->pc = 0x173650u;
            goto label_173650;
        }
    }
    ctx->pc = 0x173648u;
label_173648:
    // 0x173648: 0x10000028  b           . + 4 + (0x28 << 2)
label_17364c:
    if (ctx->pc == 0x17364Cu) {
        ctx->pc = 0x17364Cu;
            // 0x17364c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x173650u;
        goto label_173650;
    }
    ctx->pc = 0x173648u;
    {
        const bool branch_taken_0x173648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17364Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173648u;
            // 0x17364c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173648) {
            ctx->pc = 0x1736ECu;
            goto label_1736ec;
        }
    }
    ctx->pc = 0x173650u;
label_173650:
    // 0x173650: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x173650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_173654:
    // 0x173654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_173658:
    if (ctx->pc == 0x173658u) {
        ctx->pc = 0x173658u;
            // 0x173658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17365Cu;
        goto label_17365c;
    }
    ctx->pc = 0x173654u;
    {
        const bool branch_taken_0x173654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173654u;
            // 0x173658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173654) {
            ctx->pc = 0x173664u;
            goto label_173664;
        }
    }
    ctx->pc = 0x17365Cu;
label_17365c:
    // 0x17365c: 0x10000022  b           . + 4 + (0x22 << 2)
label_173660:
    if (ctx->pc == 0x173660u) {
        ctx->pc = 0x173660u;
            // 0x173660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173664u;
        goto label_173664;
    }
    ctx->pc = 0x17365Cu;
    {
        const bool branch_taken_0x17365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17365Cu;
            // 0x173660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17365c) {
            ctx->pc = 0x1736E8u;
            goto label_1736e8;
        }
    }
    ctx->pc = 0x173664u;
label_173664:
    // 0x173664: 0xc05d244  jal         func_174910
label_173668:
    if (ctx->pc == 0x173668u) {
        ctx->pc = 0x17366Cu;
        goto label_17366c;
    }
    ctx->pc = 0x173664u;
    SET_GPR_U32(ctx, 31, 0x17366Cu);
    ctx->pc = 0x174910u;
    if (runtime->hasFunction(0x174910u)) {
        auto targetFn = runtime->lookupFunction(0x174910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17366Cu; }
        if (ctx->pc != 0x17366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShadowStep__11CCharacter2Fv_0x174910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17366Cu; }
        if (ctx->pc != 0x17366Cu) { return; }
    }
    ctx->pc = 0x17366Cu;
label_17366c:
    // 0x17366c: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x17366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_173670:
    // 0x173670: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173674:
    // 0x173674: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x173674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_173678:
    // 0x173678: 0x320f809  jalr        $t9
label_17367c:
    if (ctx->pc == 0x17367Cu) {
        ctx->pc = 0x17367Cu;
            // 0x17367c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x173680u;
        goto label_173680;
    }
    ctx->pc = 0x173678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173680u);
        ctx->pc = 0x17367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173678u;
            // 0x17367c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173680u; }
            if (ctx->pc != 0x173680u) { return; }
        }
        }
    }
    ctx->pc = 0x173680u;
label_173680:
    // 0x173680: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_173684:
    // 0x173684: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173688:
    // 0x173688: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x173688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_17368c:
    // 0x17368c: 0x320f809  jalr        $t9
label_173690:
    if (ctx->pc == 0x173690u) {
        ctx->pc = 0x173690u;
            // 0x173690: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x173694u;
        goto label_173694;
    }
    ctx->pc = 0x17368Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173694u);
        ctx->pc = 0x173690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17368Cu;
            // 0x173690: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173694u; }
            if (ctx->pc != 0x173694u) { return; }
        }
        }
    }
    ctx->pc = 0x173694u;
label_173694:
    // 0x173694: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_173698:
    // 0x173698: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17369c:
    // 0x17369c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x17369cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1736a0:
    // 0x1736a0: 0x320f809  jalr        $t9
label_1736a4:
    if (ctx->pc == 0x1736A4u) {
        ctx->pc = 0x1736A4u;
            // 0x1736a4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1736A8u;
        goto label_1736a8;
    }
    ctx->pc = 0x1736A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1736A8u);
        ctx->pc = 0x1736A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1736A0u;
            // 0x1736a4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1736A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1736A8u; }
            if (ctx->pc != 0x1736A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1736A8u;
label_1736a8:
    // 0x1736a8: 0x8e030380  lw          $v1, 0x380($s0)
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_1736ac:
    // 0x1736ac: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
label_1736b0:
    if (ctx->pc == 0x1736B0u) {
        ctx->pc = 0x1736B0u;
            // 0x1736b0: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->pc = 0x1736B4u;
        goto label_1736b4;
    }
    ctx->pc = 0x1736ACu;
    {
        const bool branch_taken_0x1736ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1736B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1736ACu;
            // 0x1736b0: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736ac) {
            ctx->pc = 0x1736E0u;
            goto label_1736e0;
        }
    }
    ctx->pc = 0x1736B4u;
label_1736b4:
    // 0x1736b4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1736b8:
    if (ctx->pc == 0x1736B8u) {
        ctx->pc = 0x1736BCu;
        goto label_1736bc;
    }
    ctx->pc = 0x1736B4u;
    {
        const bool branch_taken_0x1736b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1736b4) {
            ctx->pc = 0x1736E0u;
            goto label_1736e0;
        }
    }
    ctx->pc = 0x1736BCu;
label_1736bc:
    // 0x1736bc: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_1736c0:
    // 0x1736c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1736c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1736c4:
    // 0x1736c4: 0x8e060504  lw          $a2, 0x504($s0)
    ctx->pc = 0x1736c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_1736c8:
    // 0x1736c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1736cc:
    // 0x1736cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1736ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1736d0:
    // 0x1736d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1736d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1736d4:
    // 0x1736d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1736d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1736d8:
    // 0x1736d8: 0xc0534e4  jal         func_14D390
label_1736dc:
    if (ctx->pc == 0x1736DCu) {
        ctx->pc = 0x1736DCu;
            // 0x1736dc: 0x24450460  addiu       $a1, $v0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
        ctx->pc = 0x1736E0u;
        goto label_1736e0;
    }
    ctx->pc = 0x1736D8u;
    SET_GPR_U32(ctx, 31, 0x1736E0u);
    ctx->pc = 0x1736DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736D8u;
            // 0x1736dc: 0x24450460  addiu       $a1, $v0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D390u;
    if (runtime->hasFunction(0x14D390u)) {
        auto targetFn = runtime->lookupFunction(0x14D390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E0u; }
        if (ctx->pc != 0x1736E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeformMesh__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFb_0x14d390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E0u; }
        if (ctx->pc != 0x1736E0u) { return; }
    }
    ctx->pc = 0x1736E0u;
label_1736e0:
    // 0x1736e0: 0xc050bf4  jal         func_142FD0
label_1736e4:
    if (ctx->pc == 0x1736E4u) {
        ctx->pc = 0x1736E4u;
            // 0x1736e4: 0x8e0402c0  lw          $a0, 0x2C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->pc = 0x1736E8u;
        goto label_1736e8;
    }
    ctx->pc = 0x1736E0u;
    SET_GPR_U32(ctx, 31, 0x1736E8u);
    ctx->pc = 0x1736E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736E0u;
            // 0x1736e4: 0x8e0402c0  lw          $a0, 0x2C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E8u; }
        if (ctx->pc != 0x1736E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E8u; }
        if (ctx->pc != 0x1736E8u) { return; }
    }
    ctx->pc = 0x1736E8u;
label_1736e8:
    // 0x1736e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1736e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1736ec:
    // 0x1736ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1736ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1736f0:
    // 0x1736f0: 0x3e00008  jr          $ra
label_1736f4:
    if (ctx->pc == 0x1736F4u) {
        ctx->pc = 0x1736F4u;
            // 0x1736f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1736F8u;
        goto label_fallthrough_0x1736f0;
    }
    ctx->pc = 0x1736F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1736F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1736F0u;
            // 0x1736f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1736f0:
    ctx->pc = 0x1736F8u;
}
