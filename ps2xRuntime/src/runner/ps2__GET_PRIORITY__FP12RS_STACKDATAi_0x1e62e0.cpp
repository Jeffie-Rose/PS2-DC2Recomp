#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PRIORITY__FP12RS_STACKDATAi
// Address: 0x1e62e0 - 0x1e6314
void ps2__GET_PRIORITY__FP12RS_STACKDATAi_0x1e62e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PRIORITY__FP12RS_STACKDATAi_0x1e62e0");
#endif

    switch (ctx->pc) {
        case 0x1e6304u: goto label_1e6304;
        default: break;
    }

    ctx->pc = 0x1e62e0u;

    // 0x1e62e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e62e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e62e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e62e8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E62E8u;
    {
        const bool branch_taken_0x1e62e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E62ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62E8u;
            // 0x1e62ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62e8) {
            ctx->pc = 0x1E62F8u;
            goto label_1e62f8;
        }
    }
    ctx->pc = 0x1E62F0u;
    // 0x1e62f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E62F0u;
    {
        const bool branch_taken_0x1e62f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62F0u;
            // 0x1e62f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62f0) {
            ctx->pc = 0x1E6308u;
            goto label_1e6308;
        }
    }
    ctx->pc = 0x1E62F8u;
label_1e62f8:
    // 0x1e62f8: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e62fc: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E62FCu;
    SET_GPR_U32(ctx, 31, 0x1E6304u);
    ctx->pc = 0x1E6300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62FCu;
            // 0x1e6300: 0x844512f0  lh          $a1, 0x12F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6304u; }
        if (ctx->pc != 0x1E6304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6304u; }
        if (ctx->pc != 0x1E6304u) { return; }
    }
    ctx->pc = 0x1E6304u;
label_1e6304:
    // 0x1e6304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6308:
    // 0x1e6308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e630c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E630Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E630Cu;
            // 0x1e6310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6314u;
}
