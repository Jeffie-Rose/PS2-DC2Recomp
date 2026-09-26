#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_EVENT_INFO_SNDID__FP12RS_STACKDATAi
// Address: 0x279510 - 0x279554
void ps2__GET_EVENT_INFO_SNDID__FP12RS_STACKDATAi_0x279510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_EVENT_INFO_SNDID__FP12RS_STACKDATAi_0x279510");
#endif

    switch (ctx->pc) {
        case 0x279524u: goto label_279524;
        case 0x279540u: goto label_279540;
        default: break;
    }

    ctx->pc = 0x279510u;

    // 0x279510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27951c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27951Cu;
    SET_GPR_U32(ctx, 31, 0x279524u);
    ctx->pc = 0x279520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27951Cu;
            // 0x279520: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279524u; }
        if (ctx->pc != 0x279524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279524u; }
        if (ctx->pc != 0x279524u) { return; }
    }
    ctx->pc = 0x279524u;
label_279524:
    // 0x279524: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x279524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279528: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x279528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x27952c: 0x2442e524  addiu       $v0, $v0, -0x1ADC
    ctx->pc = 0x27952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960420));
    // 0x279530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279534: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x279534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279538: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x279538u;
    SET_GPR_U32(ctx, 31, 0x279540u);
    ctx->pc = 0x27953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279538u;
            // 0x27953c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279540u; }
        if (ctx->pc != 0x279540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279540u; }
        if (ctx->pc != 0x279540u) { return; }
    }
    ctx->pc = 0x279540u;
label_279540:
    // 0x279540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27954c: 0x3e00008  jr          $ra
    ctx->pc = 0x27954Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27954Cu;
            // 0x279550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279554u;
}
