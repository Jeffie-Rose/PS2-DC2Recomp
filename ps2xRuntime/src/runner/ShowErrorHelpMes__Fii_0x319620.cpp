#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShowErrorHelpMes__Fii
// Address: 0x319620 - 0x3196ac
void ShowErrorHelpMes__Fii_0x319620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShowErrorHelpMes__Fii_0x319620");
#endif

    switch (ctx->pc) {
        case 0x319630u: goto label_319630;
        case 0x319690u: goto label_319690;
        case 0x3196a0u: goto label_3196a0;
        default: break;
    }

    ctx->pc = 0x319620u;

    // 0x319620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319628: 0xc0c63e0  jal         func_318F80
    ctx->pc = 0x319628u;
    SET_GPR_U32(ctx, 31, 0x319630u);
    ctx->pc = 0x318F80u;
    if (runtime->hasFunction(0x318F80u)) {
        auto targetFn = runtime->lookupFunction(0x318F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319630u; }
        if (ctx->pc != 0x319630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHepMesInfo__Fv_0x318f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319630u; }
        if (ctx->pc != 0x319630u) { return; }
    }
    ctx->pc = 0x319630u;
label_319630:
    // 0x319630: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x319630u;
    {
        const bool branch_taken_0x319630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319630) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x319638u;
    // 0x319638: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x319638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x31963c: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x31963Cu;
    {
        const bool branch_taken_0x31963c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x319640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31963Cu;
            // 0x319640: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31963c) {
            ctx->pc = 0x319668u;
            goto label_319668;
        }
    }
    ctx->pc = 0x319644u;
    // 0x319644: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x319644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x319648: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x319648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31964c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x31964cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x319650: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x319650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x319654: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x319654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x319658: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x319658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x31965c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31965cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x319660: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x319660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x319664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x319664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319668:
    // 0x319668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x319668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x31966c: 0x18a00002  blez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31966Cu;
    {
        const bool branch_taken_0x31966c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x319670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31966Cu;
            // 0x319670: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31966c) {
            ctx->pc = 0x319678u;
            goto label_319678;
        }
    }
    ctx->pc = 0x319674u;
    // 0x319674: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x319674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_319678:
    // 0x319678: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x319678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x31967c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x31967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x319680: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x319680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x319684: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x319684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x319688: 0xc064218  jal         func_190860
    ctx->pc = 0x319688u;
    SET_GPR_U32(ctx, 31, 0x319690u);
    ctx->pc = 0x31968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319688u;
            // 0x31968c: 0xaf82a328  sw          $v0, -0x5CD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319690u; }
        if (ctx->pc != 0x319690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319690u; }
        if (ctx->pc != 0x319690u) { return; }
    }
    ctx->pc = 0x319690u;
label_319690:
    // 0x319690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319694: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x319694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x319698: 0xc063818  jal         func_18E060
    ctx->pc = 0x319698u;
    SET_GPR_U32(ctx, 31, 0x3196A0u);
    ctx->pc = 0x31969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319698u;
            // 0x31969c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3196A0u; }
        if (ctx->pc != 0x3196A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3196A0u; }
        if (ctx->pc != 0x3196A0u) { return; }
    }
    ctx->pc = 0x3196A0u;
label_3196a0:
    // 0x3196a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3196a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3196a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3196A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3196A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3196A4u;
            // 0x3196a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3196ACu;
}
