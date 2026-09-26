#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RestartEditEvent__Fv
// Address: 0x1ae030 - 0x1ae084
void RestartEditEvent__Fv_0x1ae030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RestartEditEvent__Fv_0x1ae030");
#endif

    switch (ctx->pc) {
        case 0x1ae054u: goto label_1ae054;
        case 0x1ae068u: goto label_1ae068;
        case 0x1ae078u: goto label_1ae078;
        default: break;
    }

    ctx->pc = 0x1ae030u;

    // 0x1ae030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae034: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ae034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ae038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae040: 0x8c24ede4  lw          $a0, -0x121C($at)
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962660)));
    // 0x1ae044: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AE044u;
    {
        const bool branch_taken_0x1ae044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ae044) {
            ctx->pc = 0x1AE078u;
            goto label_1ae078;
        }
    }
    ctx->pc = 0x1AE04Cu;
    // 0x1ae04c: 0xc06b7fc  jal         func_1ADFF0
    ctx->pc = 0x1AE04Cu;
    SET_GPR_U32(ctx, 31, 0x1AE054u);
    ctx->pc = 0x1ADFF0u;
    if (runtime->hasFunction(0x1ADFF0u)) {
        auto targetFn = runtime->lookupFunction(0x1ADFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE054u; }
        if (ctx->pc != 0x1AE054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetEditEvent__Fv_0x1adff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE054u; }
        if (ctx->pc != 0x1AE054u) { return; }
    }
    ctx->pc = 0x1AE054u;
label_1ae054:
    // 0x1ae054: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ae054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1ae058: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ae058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ae05c: 0x2484ede0  addiu       $a0, $a0, -0x1220
    ctx->pc = 0x1ae05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
    // 0x1ae060: 0xc0bbe78  jal         func_2EF9E0
    ctx->pc = 0x1AE060u;
    SET_GPR_U32(ctx, 31, 0x1AE068u);
    ctx->pc = 0x1AE064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE060u;
            // 0x1ae064: 0x24452e90  addiu       $a1, $v0, 0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF9E0u;
    if (runtime->hasFunction(0x2EF9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE068u; }
        if (ctx->pc != 0x1AE068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEvent__10CEditEventFP15CSceneEventData_0x2ef9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE068u; }
        if (ctx->pc != 0x1AE068u) { return; }
    }
    ctx->pc = 0x1AE068u;
label_1ae068:
    // 0x1ae068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE068u;
    {
        const bool branch_taken_0x1ae068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae068) {
            ctx->pc = 0x1AE078u;
            goto label_1ae078;
        }
    }
    ctx->pc = 0x1AE070u;
    // 0x1ae070: 0xc06a6d8  jal         func_1A9B60
    ctx->pc = 0x1AE070u;
    SET_GPR_U32(ctx, 31, 0x1AE078u);
    ctx->pc = 0x1A9B60u;
    if (runtime->hasFunction(0x1A9B60u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE078u; }
        if (ctx->pc != 0x1AE078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LockCharaCtrl__Fv_0x1a9b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE078u; }
        if (ctx->pc != 0x1AE078u) { return; }
    }
    ctx->pc = 0x1AE078u;
label_1ae078:
    // 0x1ae078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae07c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE07Cu;
            // 0x1ae080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE084u;
}
