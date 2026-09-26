#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_DELETE_SPRITE__FP12RS_STACKDATAi
// Address: 0x2e5570 - 0x2e55b8
void ps2__SPT_DELETE_SPRITE__FP12RS_STACKDATAi_0x2e5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_DELETE_SPRITE__FP12RS_STACKDATAi_0x2e5570");
#endif

    switch (ctx->pc) {
        case 0x2e5598u: goto label_2e5598;
        default: break;
    }

    ctx->pc = 0x2e5570u;

    // 0x2e5570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5578: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e5578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e557c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2e557cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2e5580: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5580u;
    {
        const bool branch_taken_0x2e5580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5580u;
            // 0x2e5584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5580) {
            ctx->pc = 0x2E5590u;
            goto label_2e5590;
        }
    }
    ctx->pc = 0x2E5588u;
    // 0x2e5588: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5588u;
    {
        const bool branch_taken_0x2e5588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5588u;
            // 0x2e558c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5588) {
            ctx->pc = 0x2E55B0u;
            goto label_2e55b0;
        }
    }
    ctx->pc = 0x2E5590u;
label_2e5590:
    // 0x2e5590: 0xc0b87d8  jal         func_2E1F60
    ctx->pc = 0x2E5590u;
    SET_GPR_U32(ctx, 31, 0x2E5598u);
    ctx->pc = 0x2E5594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5590u;
            // 0x2e5594: 0x8f849ecc  lw          $a0, -0x6134($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F60u;
    if (runtime->hasFunction(0x2E1F60u)) {
        auto targetFn = runtime->lookupFunction(0x2E1F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5598u; }
        if (ctx->pc != 0x2E5598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSprite__16CEffectScriptManFP10_ES_SPRITE_0x2e1f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5598u; }
        if (ctx->pc != 0x2E5598u) { return; }
    }
    ctx->pc = 0x2E5598u;
label_2e5598:
    // 0x2e5598: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e5598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e559c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e55a0: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2e55a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x2e55a4: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e55a8: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x2e55a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x2e55ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e55acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e55b0:
    // 0x2e55b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E55B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E55B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55B0u;
            // 0x2e55b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E55B8u;
}
