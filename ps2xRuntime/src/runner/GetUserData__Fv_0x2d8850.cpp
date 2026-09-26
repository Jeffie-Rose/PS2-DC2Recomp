#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUserData__Fv
// Address: 0x2d8850 - 0x2d8884
void GetUserData__Fv_0x2d8850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUserData__Fv_0x2d8850");
#endif

    switch (ctx->pc) {
        case 0x2d8860u: goto label_2d8860;
        default: break;
    }

    ctx->pc = 0x2d8850u;

    // 0x2d8850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8858: 0xc064220  jal         func_190880
    ctx->pc = 0x2D8858u;
    SET_GPR_U32(ctx, 31, 0x2D8860u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8860u; }
        if (ctx->pc != 0x2D8860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8860u; }
        if (ctx->pc != 0x2D8860u) { return; }
    }
    ctx->pc = 0x2D8860u;
label_2d8860:
    // 0x2d8860: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8860u;
    {
        const bool branch_taken_0x2d8860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8860u;
            // 0x2d8864: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8860) {
            ctx->pc = 0x2D8874u;
            goto label_2d8874;
        }
    }
    ctx->pc = 0x2D8868u;
    // 0x2d8868: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2d8868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2d886c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D886Cu;
    {
        const bool branch_taken_0x2d886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D886Cu;
            // 0x2d8870: 0x411021  addu        $v0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d886c) {
            ctx->pc = 0x2D8878u;
            goto label_2d8878;
        }
    }
    ctx->pc = 0x2D8874u;
label_2d8874:
    // 0x2d8874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8878:
    // 0x2d8878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d887c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D887Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D887Cu;
            // 0x2d8880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8884u;
}
