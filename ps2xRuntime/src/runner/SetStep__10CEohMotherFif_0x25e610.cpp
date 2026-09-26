#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStep__10CEohMotherFif
// Address: 0x25e610 - 0x25e67c
void SetStep__10CEohMotherFif_0x25e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStep__10CEohMotherFif_0x25e610");
#endif

    switch (ctx->pc) {
        case 0x25e610u: goto label_25e610;
        case 0x25e614u: goto label_25e614;
        case 0x25e618u: goto label_25e618;
        case 0x25e61cu: goto label_25e61c;
        case 0x25e620u: goto label_25e620;
        case 0x25e624u: goto label_25e624;
        case 0x25e628u: goto label_25e628;
        case 0x25e62cu: goto label_25e62c;
        case 0x25e630u: goto label_25e630;
        case 0x25e634u: goto label_25e634;
        case 0x25e638u: goto label_25e638;
        case 0x25e63cu: goto label_25e63c;
        case 0x25e640u: goto label_25e640;
        case 0x25e644u: goto label_25e644;
        case 0x25e648u: goto label_25e648;
        case 0x25e64cu: goto label_25e64c;
        case 0x25e650u: goto label_25e650;
        case 0x25e654u: goto label_25e654;
        case 0x25e658u: goto label_25e658;
        case 0x25e65cu: goto label_25e65c;
        case 0x25e660u: goto label_25e660;
        case 0x25e664u: goto label_25e664;
        case 0x25e668u: goto label_25e668;
        case 0x25e66cu: goto label_25e66c;
        case 0x25e670u: goto label_25e670;
        case 0x25e674u: goto label_25e674;
        case 0x25e678u: goto label_25e678;
        default: break;
    }

    ctx->pc = 0x25e610u;

label_25e610:
    // 0x25e610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25e614:
    // 0x25e614: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25e618:
    if (ctx->pc == 0x25E618u) {
        ctx->pc = 0x25E618u;
            // 0x25e618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25E61Cu;
        goto label_25e61c;
    }
    ctx->pc = 0x25E614u;
    {
        const bool branch_taken_0x25e614 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E614u;
            // 0x25e618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e614) {
            ctx->pc = 0x25E628u;
            goto label_25e628;
        }
    }
    ctx->pc = 0x25E61Cu;
label_25e61c:
    // 0x25e61c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25e620:
    // 0x25e620: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e624:
    if (ctx->pc == 0x25E624u) {
        ctx->pc = 0x25E624u;
            // 0x25e624: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25E628u;
        goto label_25e628;
    }
    ctx->pc = 0x25E620u;
    {
        const bool branch_taken_0x25e620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E620u;
            // 0x25e624: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e620) {
            ctx->pc = 0x25E630u;
            goto label_25e630;
        }
    }
    ctx->pc = 0x25E628u;
label_25e628:
    // 0x25e628: 0x10000011  b           . + 4 + (0x11 << 2)
label_25e62c:
    if (ctx->pc == 0x25E62Cu) {
        ctx->pc = 0x25E62Cu;
            // 0x25e62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E630u;
        goto label_25e630;
    }
    ctx->pc = 0x25E628u;
    {
        const bool branch_taken_0x25e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E628u;
            // 0x25e62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e628) {
            ctx->pc = 0x25E670u;
            goto label_25e670;
        }
    }
    ctx->pc = 0x25E630u;
label_25e630:
    // 0x25e630: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25e634:
    // 0x25e634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e638:
    // 0x25e638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25e63c:
    if (ctx->pc == 0x25E63Cu) {
        ctx->pc = 0x25E640u;
        goto label_25e640;
    }
    ctx->pc = 0x25E638u;
    {
        const bool branch_taken_0x25e638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e638) {
            ctx->pc = 0x25E648u;
            goto label_25e648;
        }
    }
    ctx->pc = 0x25E640u;
label_25e640:
    // 0x25e640: 0x1000000b  b           . + 4 + (0xB << 2)
label_25e644:
    if (ctx->pc == 0x25E644u) {
        ctx->pc = 0x25E644u;
            // 0x25e644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E648u;
        goto label_25e648;
    }
    ctx->pc = 0x25E640u;
    {
        const bool branch_taken_0x25e640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E640u;
            // 0x25e644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e640) {
            ctx->pc = 0x25E670u;
            goto label_25e670;
        }
    }
    ctx->pc = 0x25E648u;
label_25e648:
    // 0x25e648: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25e648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25e64c:
    // 0x25e64c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e650:
    if (ctx->pc == 0x25E650u) {
        ctx->pc = 0x25E650u;
            // 0x25e650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E654u;
        goto label_25e654;
    }
    ctx->pc = 0x25E64Cu;
    {
        const bool branch_taken_0x25e64c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E64Cu;
            // 0x25e650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e64c) {
            ctx->pc = 0x25E65Cu;
            goto label_25e65c;
        }
    }
    ctx->pc = 0x25E654u;
label_25e654:
    // 0x25e654: 0x10000007  b           . + 4 + (0x7 << 2)
label_25e658:
    if (ctx->pc == 0x25E658u) {
        ctx->pc = 0x25E658u;
            // 0x25e658: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x25E65Cu;
        goto label_25e65c;
    }
    ctx->pc = 0x25E654u;
    {
        const bool branch_taken_0x25e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E654u;
            // 0x25e658: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e654) {
            ctx->pc = 0x25E674u;
            goto label_25e674;
        }
    }
    ctx->pc = 0x25E65Cu;
label_25e65c:
    // 0x25e65c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e660:
    // 0x25e660: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x25e660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_25e664:
    // 0x25e664: 0x320f809  jalr        $t9
label_25e668:
    if (ctx->pc == 0x25E668u) {
        ctx->pc = 0x25E66Cu;
        goto label_25e66c;
    }
    ctx->pc = 0x25E664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E66Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E66Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E66Cu; }
            if (ctx->pc != 0x25E66Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25E66Cu;
label_25e66c:
    // 0x25e66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e670:
    // 0x25e670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e674:
    // 0x25e674: 0x3e00008  jr          $ra
label_25e678:
    if (ctx->pc == 0x25E678u) {
        ctx->pc = 0x25E678u;
            // 0x25e678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x25E67Cu;
        goto label_fallthrough_0x25e674;
    }
    ctx->pc = 0x25E674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E674u;
            // 0x25e678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25e674:
    ctx->pc = 0x25E67Cu;
}
