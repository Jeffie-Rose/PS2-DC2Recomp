#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACUMU_PAD__FP12RS_STACKDATAi
// Address: 0x2ce750 - 0x2ce778
void ps2__GET_ACUMU_PAD__FP12RS_STACKDATAi_0x2ce750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACUMU_PAD__FP12RS_STACKDATAi_0x2ce750");
#endif

    switch (ctx->pc) {
        case 0x2ce768u: goto label_2ce768;
        default: break;
    }

    ctx->pc = 0x2ce750u;

    // 0x2ce750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce754: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce75c: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2ce75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce760: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE760u;
    SET_GPR_U32(ctx, 31, 0x2CE768u);
    ctx->pc = 0x2CE764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE760u;
            // 0x2ce764: 0x8c4507d8  lw          $a1, 0x7D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE768u; }
        if (ctx->pc != 0x2CE768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE768u; }
        if (ctx->pc != 0x2CE768u) { return; }
    }
    ctx->pc = 0x2CE768u;
label_2ce768:
    // 0x2ce768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce770: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE770u;
            // 0x2ce774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE778u;
}
