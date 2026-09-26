#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PAD_HISTORY__FP12RS_STACKDATAi
// Address: 0x2ce6f0 - 0x2ce724
void ps2__GET_PAD_HISTORY__FP12RS_STACKDATAi_0x2ce6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PAD_HISTORY__FP12RS_STACKDATAi_0x2ce6f0");
#endif

    switch (ctx->pc) {
        case 0x2ce714u: goto label_2ce714;
        default: break;
    }

    ctx->pc = 0x2ce6f0u;

    // 0x2ce6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce6f4: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE6F4u;
    {
        const bool branch_taken_0x2ce6f4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2CE6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6F4u;
            // 0x2ce6f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6f4) {
            ctx->pc = 0x2CE704u;
            goto label_2ce704;
        }
    }
    ctx->pc = 0x2CE6FCu;
    // 0x2ce6fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE6FCu;
    {
        const bool branch_taken_0x2ce6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6FCu;
            // 0x2ce700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6fc) {
            ctx->pc = 0x2CE718u;
            goto label_2ce718;
        }
    }
    ctx->pc = 0x2CE704u;
label_2ce704:
    // 0x2ce704: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce708: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2ce708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce70c: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE70Cu;
    SET_GPR_U32(ctx, 31, 0x2CE714u);
    ctx->pc = 0x2CE710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE70Cu;
            // 0x2ce710: 0x8c450714  lw          $a1, 0x714($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE714u; }
        if (ctx->pc != 0x2CE714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE714u; }
        if (ctx->pc != 0x2CE714u) { return; }
    }
    ctx->pc = 0x2CE714u;
label_2ce714:
    // 0x2ce714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce718:
    // 0x2ce718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE71Cu;
            // 0x2ce720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE724u;
}
