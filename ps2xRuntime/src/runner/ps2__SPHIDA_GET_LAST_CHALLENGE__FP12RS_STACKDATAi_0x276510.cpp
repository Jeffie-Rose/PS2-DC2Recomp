#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_LAST_CHALLENGE__FP12RS_STACKDATAi
// Address: 0x276510 - 0x276550
void ps2__SPHIDA_GET_LAST_CHALLENGE__FP12RS_STACKDATAi_0x276510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_LAST_CHALLENGE__FP12RS_STACKDATAi_0x276510");
#endif

    switch (ctx->pc) {
        case 0x276544u: goto label_276544;
        default: break;
    }

    ctx->pc = 0x276510u;

    // 0x276510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276518: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x276518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x27651c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27651Cu;
    {
        const bool branch_taken_0x27651c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x276520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27651Cu;
            // 0x276520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27651c) {
            ctx->pc = 0x276534u;
            goto label_276534;
        }
    }
    ctx->pc = 0x276524u;
    // 0x276524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276528: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276528u;
    {
        const bool branch_taken_0x276528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x276528) {
            ctx->pc = 0x27653Cu;
            goto label_27653c;
        }
    }
    ctx->pc = 0x276530u;
    // 0x276530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276534:
    // 0x276534: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x276534u;
    {
        const bool branch_taken_0x276534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276534u;
            // 0x276538: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276534) {
            ctx->pc = 0x276548u;
            goto label_276548;
        }
    }
    ctx->pc = 0x27653Cu;
label_27653c:
    // 0x27653c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27653Cu;
    SET_GPR_U32(ctx, 31, 0x276544u);
    ctx->pc = 0x276540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27653Cu;
            // 0x276540: 0x8c650204  lw          $a1, 0x204($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276544u; }
        if (ctx->pc != 0x276544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276544u; }
        if (ctx->pc != 0x276544u) { return; }
    }
    ctx->pc = 0x276544u;
label_276544:
    // 0x276544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276548:
    // 0x276548: 0x3e00008  jr          $ra
    ctx->pc = 0x276548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276548u;
            // 0x27654c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276550u;
}
