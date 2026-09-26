#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BOSS_FLAG__FP12RS_STACKDATAi
// Address: 0x1e2220 - 0x1e2258
void ps2__GET_BOSS_FLAG__FP12RS_STACKDATAi_0x1e2220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BOSS_FLAG__FP12RS_STACKDATAi_0x1e2220");
#endif

    switch (ctx->pc) {
        case 0x1e2248u: goto label_1e2248;
        default: break;
    }

    ctx->pc = 0x1e2220u;

    // 0x1e2220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2228: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2228u;
    {
        const bool branch_taken_0x1e2228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2228u;
            // 0x1e222c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2228) {
            ctx->pc = 0x1E2238u;
            goto label_1e2238;
        }
    }
    ctx->pc = 0x1E2230u;
    // 0x1e2230: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2230u;
    {
        const bool branch_taken_0x1e2230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2230u;
            // 0x1e2234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2230) {
            ctx->pc = 0x1E224Cu;
            goto label_1e224c;
        }
    }
    ctx->pc = 0x1E2238u;
label_1e2238:
    // 0x1e2238: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e223c: 0x8c42114c  lw          $v0, 0x114C($v0)
    ctx->pc = 0x1e223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4428)));
    // 0x1e2240: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E2240u;
    SET_GPR_U32(ctx, 31, 0x1E2248u);
    ctx->pc = 0x1E2244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2240u;
            // 0x1e2244: 0x8045006a  lb          $a1, 0x6A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 106)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2248u; }
        if (ctx->pc != 0x1E2248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2248u; }
        if (ctx->pc != 0x1E2248u) { return; }
    }
    ctx->pc = 0x1E2248u;
label_1e2248:
    // 0x1e2248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e224c:
    // 0x1e224c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e224cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2250: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2250u;
            // 0x1e2254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2258u;
}
