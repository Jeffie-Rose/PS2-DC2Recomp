#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RANDOM_CIRCLE_OFF__FP12RS_STACKDATAi
// Address: 0x278df0 - 0x278e50
void ps2__RANDOM_CIRCLE_OFF__FP12RS_STACKDATAi_0x278df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RANDOM_CIRCLE_OFF__FP12RS_STACKDATAi_0x278df0");
#endif

    switch (ctx->pc) {
        case 0x278e00u: goto label_278e00;
        default: break;
    }

    ctx->pc = 0x278df0u;

    // 0x278df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278df8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278DF8u;
    SET_GPR_U32(ctx, 31, 0x278E00u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E00u; }
        if (ctx->pc != 0x278E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E00u; }
        if (ctx->pc != 0x278E00u) { return; }
    }
    ctx->pc = 0x278E00u;
label_278e00:
    // 0x278e00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x278e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x278e04: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x278E04u;
    {
        const bool branch_taken_0x278e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x278E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E04u;
            // 0x278e08: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e04) {
            ctx->pc = 0x278E2Cu;
            goto label_278e2c;
        }
    }
    ctx->pc = 0x278E0Cu;
    // 0x278e0c: 0x8c224b5c  lw          $v0, 0x4B5C($at)
    ctx->pc = 0x278e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19292)));
    // 0x278e10: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x278E10u;
    {
        const bool branch_taken_0x278e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x278E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E10u;
            // 0x278e14: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e10) {
            ctx->pc = 0x278E40u;
            goto label_278e40;
        }
    }
    ctx->pc = 0x278E18u;
    // 0x278e18: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x278e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x278e1c: 0x24424b50  addiu       $v0, $v0, 0x4B50
    ctx->pc = 0x278e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19280));
    // 0x278e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278e24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x278E24u;
    {
        const bool branch_taken_0x278e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E24u;
            // 0x278e28: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e24) {
            ctx->pc = 0x278E40u;
            goto label_278e40;
        }
    }
    ctx->pc = 0x278E2Cu;
label_278e2c:
    // 0x278e2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x278e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278e30: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x278e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x278e34: 0x24424b50  addiu       $v0, $v0, 0x4B50
    ctx->pc = 0x278e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19280));
    // 0x278e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278e3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x278e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_278e40:
    // 0x278e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278e48: 0x3e00008  jr          $ra
    ctx->pc = 0x278E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E48u;
            // 0x278e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278E50u;
}
