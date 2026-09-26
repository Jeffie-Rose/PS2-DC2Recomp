#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NormalDrive__10CEohMotherFi
// Address: 0x25f610 - 0x25f680
void NormalDrive__10CEohMotherFi_0x25f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NormalDrive__10CEohMotherFi_0x25f610");
#endif

    switch (ctx->pc) {
        case 0x25f610u: goto label_25f610;
        case 0x25f614u: goto label_25f614;
        case 0x25f618u: goto label_25f618;
        case 0x25f61cu: goto label_25f61c;
        case 0x25f620u: goto label_25f620;
        case 0x25f624u: goto label_25f624;
        case 0x25f628u: goto label_25f628;
        case 0x25f62cu: goto label_25f62c;
        case 0x25f630u: goto label_25f630;
        case 0x25f634u: goto label_25f634;
        case 0x25f638u: goto label_25f638;
        case 0x25f63cu: goto label_25f63c;
        case 0x25f640u: goto label_25f640;
        case 0x25f644u: goto label_25f644;
        case 0x25f648u: goto label_25f648;
        case 0x25f64cu: goto label_25f64c;
        case 0x25f650u: goto label_25f650;
        case 0x25f654u: goto label_25f654;
        case 0x25f658u: goto label_25f658;
        case 0x25f65cu: goto label_25f65c;
        case 0x25f660u: goto label_25f660;
        case 0x25f664u: goto label_25f664;
        case 0x25f668u: goto label_25f668;
        case 0x25f66cu: goto label_25f66c;
        case 0x25f670u: goto label_25f670;
        case 0x25f674u: goto label_25f674;
        case 0x25f678u: goto label_25f678;
        case 0x25f67cu: goto label_25f67c;
        default: break;
    }

    ctx->pc = 0x25f610u;

label_25f610:
    // 0x25f610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25f614:
    // 0x25f614: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25f618:
    if (ctx->pc == 0x25F618u) {
        ctx->pc = 0x25F618u;
            // 0x25f618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25F61Cu;
        goto label_25f61c;
    }
    ctx->pc = 0x25F614u;
    {
        const bool branch_taken_0x25f614 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F614u;
            // 0x25f618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f614) {
            ctx->pc = 0x25F628u;
            goto label_25f628;
        }
    }
    ctx->pc = 0x25F61Cu;
label_25f61c:
    // 0x25f61c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25f620:
    // 0x25f620: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25f624:
    if (ctx->pc == 0x25F624u) {
        ctx->pc = 0x25F624u;
            // 0x25f624: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25F628u;
        goto label_25f628;
    }
    ctx->pc = 0x25F620u;
    {
        const bool branch_taken_0x25f620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F620u;
            // 0x25f624: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f620) {
            ctx->pc = 0x25F630u;
            goto label_25f630;
        }
    }
    ctx->pc = 0x25F628u;
label_25f628:
    // 0x25f628: 0x10000012  b           . + 4 + (0x12 << 2)
label_25f62c:
    if (ctx->pc == 0x25F62Cu) {
        ctx->pc = 0x25F62Cu;
            // 0x25f62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F630u;
        goto label_25f630;
    }
    ctx->pc = 0x25F628u;
    {
        const bool branch_taken_0x25f628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F628u;
            // 0x25f62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f628) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F630u;
label_25f630:
    // 0x25f630: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25f634:
    // 0x25f634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f638:
    // 0x25f638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25f63c:
    if (ctx->pc == 0x25F63Cu) {
        ctx->pc = 0x25F640u;
        goto label_25f640;
    }
    ctx->pc = 0x25F638u;
    {
        const bool branch_taken_0x25f638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f638) {
            ctx->pc = 0x25F648u;
            goto label_25f648;
        }
    }
    ctx->pc = 0x25F640u;
label_25f640:
    // 0x25f640: 0x1000000c  b           . + 4 + (0xC << 2)
label_25f644:
    if (ctx->pc == 0x25F644u) {
        ctx->pc = 0x25F644u;
            // 0x25f644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F648u;
        goto label_25f648;
    }
    ctx->pc = 0x25F640u;
    {
        const bool branch_taken_0x25f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F640u;
            // 0x25f644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f640) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F648u;
label_25f648:
    // 0x25f648: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25f648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25f64c:
    // 0x25f64c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25f650:
    if (ctx->pc == 0x25F650u) {
        ctx->pc = 0x25F650u;
            // 0x25f650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F654u;
        goto label_25f654;
    }
    ctx->pc = 0x25F64Cu;
    {
        const bool branch_taken_0x25f64c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F64Cu;
            // 0x25f650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f64c) {
            ctx->pc = 0x25F65Cu;
            goto label_25f65c;
        }
    }
    ctx->pc = 0x25F654u;
label_25f654:
    // 0x25f654: 0x10000008  b           . + 4 + (0x8 << 2)
label_25f658:
    if (ctx->pc == 0x25F658u) {
        ctx->pc = 0x25F658u;
            // 0x25f658: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x25F65Cu;
        goto label_25f65c;
    }
    ctx->pc = 0x25F654u;
    {
        const bool branch_taken_0x25f654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F654u;
            // 0x25f658: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f654) {
            ctx->pc = 0x25F678u;
            goto label_25f678;
        }
    }
    ctx->pc = 0x25F65Cu;
label_25f65c:
    // 0x25f65c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f660:
    // 0x25f660: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x25f660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_25f664:
    // 0x25f664: 0x320f809  jalr        $t9
label_25f668:
    if (ctx->pc == 0x25F668u) {
        ctx->pc = 0x25F66Cu;
        goto label_25f66c;
    }
    ctx->pc = 0x25F664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F66Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F66Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F66Cu; }
            if (ctx->pc != 0x25F66Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25F66Cu;
label_25f66c:
    // 0x25f66c: 0x10000001  b           . + 4 + (0x1 << 2)
label_25f670:
    if (ctx->pc == 0x25F670u) {
        ctx->pc = 0x25F670u;
            // 0x25f670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25F674u;
        goto label_25f674;
    }
    ctx->pc = 0x25F66Cu;
    {
        const bool branch_taken_0x25f66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F66Cu;
            // 0x25f670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f66c) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F674u;
label_25f674:
    // 0x25f674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f678:
    // 0x25f678: 0x3e00008  jr          $ra
label_25f67c:
    if (ctx->pc == 0x25F67Cu) {
        ctx->pc = 0x25F67Cu;
            // 0x25f67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x25F680u;
        goto label_fallthrough_0x25f678;
    }
    ctx->pc = 0x25F678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F678u;
            // 0x25f67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25f678:
    ctx->pc = 0x25F680u;
}
