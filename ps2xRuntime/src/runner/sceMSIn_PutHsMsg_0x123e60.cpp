#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceMSIn_PutHsMsg
// Address: 0x123e60 - 0x123ea8
void sceMSIn_PutHsMsg_0x123e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMSIn_PutHsMsg_0x123e60");
#endif

    switch (ctx->pc) {
        case 0x123e9cu: goto label_123e9c;
        default: break;
    }

    ctx->pc = 0x123e60u;

    // 0x123e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123e64: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x123e64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123e68: 0x240200f9  addiu       $v0, $zero, 0xF9
    ctx->pc = 0x123e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x123e6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123E6Cu;
    {
        const bool branch_taken_0x123e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E6Cu;
            // 0x123e70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e6c) {
            ctx->pc = 0x123E88u;
            goto label_123e88;
        }
    }
    ctx->pc = 0x123E74u;
    // 0x123e74: 0x240200fd  addiu       $v0, $zero, 0xFD
    ctx->pc = 0x123e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x123e78: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123E78u;
    {
        const bool branch_taken_0x123e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E78u;
            // 0x123e7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e78) {
            ctx->pc = 0x123E90u;
            goto label_123e90;
        }
    }
    ctx->pc = 0x123E80u;
    // 0x123e80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x123E80u;
    {
        const bool branch_taken_0x123e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E80u;
            // 0x123e84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e80) {
            ctx->pc = 0x123EA0u;
            goto label_123ea0;
        }
    }
    ctx->pc = 0x123E88u;
label_123e88:
    // 0x123e88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123E88u;
    {
        const bool branch_taken_0x123e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E88u;
            // 0x123e8c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e88) {
            ctx->pc = 0x123E94u;
            goto label_123e94;
        }
    }
    ctx->pc = 0x123E90u;
label_123e90:
    // 0x123e90: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x123e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_123e94:
    // 0x123e94: 0xc048f28  jal         func_123CA0
    ctx->pc = 0x123E94u;
    SET_GPR_U32(ctx, 31, 0x123E9Cu);
    ctx->pc = 0x123CA0u;
    if (runtime->hasFunction(0x123CA0u)) {
        auto targetFn = runtime->lookupFunction(0x123CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E9Cu; }
        if (ctx->pc != 0x123E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        put_message_0x123ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E9Cu; }
        if (ctx->pc != 0x123E9Cu) { return; }
    }
    ctx->pc = 0x123E9Cu;
label_123e9c:
    // 0x123e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123ea0:
    // 0x123ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x123EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123EA0u;
            // 0x123ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123EA8u;
}
