#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ES_SET_COLPRIM__FP12RS_STACKDATAi
// Address: 0x2e8b40 - 0x2e8b80
void ps2__ES_SET_COLPRIM__FP12RS_STACKDATAi_0x2e8b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ES_SET_COLPRIM__FP12RS_STACKDATAi_0x2e8b40");
#endif

    switch (ctx->pc) {
        case 0x2e8b70u: goto label_2e8b70;
        default: break;
    }

    ctx->pc = 0x2e8b40u;

    // 0x2e8b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e8b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8b48: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8b4c: 0x8c450134  lw          $a1, 0x134($v0)
    ctx->pc = 0x2e8b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8b50: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8B50u;
    {
        const bool branch_taken_0x2e8b50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b50) {
            ctx->pc = 0x2E8B60u;
            goto label_2e8b60;
        }
    }
    ctx->pc = 0x2E8B58u;
    // 0x2e8b58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8B58u;
    {
        const bool branch_taken_0x2e8b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B58u;
            // 0x2e8b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b58) {
            ctx->pc = 0x2E8B74u;
            goto label_2e8b74;
        }
    }
    ctx->pc = 0x2E8B60u;
label_2e8b60:
    // 0x2e8b60: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e8b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e8b64: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e8b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e8b68: 0xc0b89a4  jal         func_2E2690
    ctx->pc = 0x2E8B68u;
    SET_GPR_U32(ctx, 31, 0x2E8B70u);
    ctx->pc = 0x2E8B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B68u;
            // 0x2e8b6c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2690u;
    if (runtime->hasFunction(0x2E2690u)) {
        auto targetFn = runtime->lookupFunction(0x2E2690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B70u; }
        if (ctx->pc != 0x2E8B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColPrim__16CEffectScriptManFP8CColPrimii_0x2e2690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8B70u; }
        if (ctx->pc != 0x2E8B70u) { return; }
    }
    ctx->pc = 0x2E8B70u;
label_2e8b70:
    // 0x2e8b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8b74:
    // 0x2e8b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8b78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8B78u;
            // 0x2e8b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8B80u;
}
