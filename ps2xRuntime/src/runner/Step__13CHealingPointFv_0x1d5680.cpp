#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CHealingPointFv
// Address: 0x1d5680 - 0x1d56cc
void Step__13CHealingPointFv_0x1d5680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CHealingPointFv_0x1d5680");
#endif

    switch (ctx->pc) {
        case 0x1d56c0u: goto label_1d56c0;
        default: break;
    }

    ctx->pc = 0x1d5680u;

    // 0x1d5680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5688: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d5688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d568c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D568Cu;
    {
        const bool branch_taken_0x1d568c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d568c) {
            ctx->pc = 0x1D56C0u;
            goto label_1d56c0;
        }
    }
    ctx->pc = 0x1D5694u;
    // 0x1d5694: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d5698: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5698u;
    {
        const bool branch_taken_0x1d5698 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d5698) {
            ctx->pc = 0x1D56A8u;
            goto label_1d56a8;
        }
    }
    ctx->pc = 0x1D56A0u;
    // 0x1d56a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d56a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1d56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1d56a8:
    // 0x1d56a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d56ac: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D56ACu;
    {
        const bool branch_taken_0x1d56ac = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1D56B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56ACu;
            // 0x1d56b0: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56ac) {
            ctx->pc = 0x1D56C0u;
            goto label_1d56c0;
        }
    }
    ctx->pc = 0x1D56B4u;
    // 0x1d56b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d56b8: 0xc07063c  jal         func_1C18F0
    ctx->pc = 0x1D56B8u;
    SET_GPR_U32(ctx, 31, 0x1D56C0u);
    ctx->pc = 0x1D56BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56B8u;
            // 0x1d56bc: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C18F0u;
    if (runtime->hasFunction(0x1C18F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C18F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56C0u; }
        if (ctx->pc != 0x1D56C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMode__17CHealingEffectManFi_0x1c18f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56C0u; }
        if (ctx->pc != 0x1D56C0u) { return; }
    }
    ctx->pc = 0x1D56C0u;
label_1d56c0:
    // 0x1d56c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d56c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d56c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D56C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D56C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56C4u;
            // 0x1d56c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D56CCu;
}
