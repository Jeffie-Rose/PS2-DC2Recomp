#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CursorSaveOptionState__Fv
// Address: 0x234830 - 0x234874
void CursorSaveOptionState__Fv_0x234830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CursorSaveOptionState__Fv_0x234830");
#endif

    switch (ctx->pc) {
        case 0x234840u: goto label_234840;
        default: break;
    }

    ctx->pc = 0x234830u;

    // 0x234830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234838: 0xc064220  jal         func_190880
    ctx->pc = 0x234838u;
    SET_GPR_U32(ctx, 31, 0x234840u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234840u; }
        if (ctx->pc != 0x234840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234840u; }
        if (ctx->pc != 0x234840u) { return; }
    }
    ctx->pc = 0x234840u;
label_234840:
    // 0x234840: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234840u;
    {
        const bool branch_taken_0x234840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234840u;
            // 0x234844: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234840) {
            ctx->pc = 0x234864u;
            goto label_234864;
        }
    }
    ctx->pc = 0x234848u;
    // 0x234848: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x234848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23484c: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x23484cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x234850: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x234850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x234854: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x234854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234858: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x234858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23485c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x234860: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x234860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_234864:
    // 0x234864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234868: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x234868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23486c: 0x3e00008  jr          $ra
    ctx->pc = 0x23486Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23486Cu;
            // 0x234870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234874u;
}
