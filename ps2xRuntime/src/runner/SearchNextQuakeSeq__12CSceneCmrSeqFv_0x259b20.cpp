#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextQuakeSeq__12CSceneCmrSeqFv
// Address: 0x259b20 - 0x259b7c
void SearchNextQuakeSeq__12CSceneCmrSeqFv_0x259b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextQuakeSeq__12CSceneCmrSeqFv_0x259b20");
#endif

    switch (ctx->pc) {
        case 0x259b34u: goto label_259b34;
        default: break;
    }

    ctx->pc = 0x259b20u;

    // 0x259b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259b2c: 0xc09666c  jal         func_2599B0
    ctx->pc = 0x259B2Cu;
    SET_GPR_U32(ctx, 31, 0x259B34u);
    ctx->pc = 0x259B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259B2Cu;
            // 0x259b30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2599B0u;
    if (runtime->hasFunction(0x2599B0u)) {
        auto targetFn = runtime->lookupFunction(0x2599B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B34u; }
        if (ctx->pc != 0x259B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneCmrSeqFv_0x2599b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B34u; }
        if (ctx->pc != 0x259B34u) { return; }
    }
    ctx->pc = 0x259B34u;
label_259b34:
    // 0x259b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259B34u;
    {
        const bool branch_taken_0x259b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b34) {
            ctx->pc = 0x259B44u;
            goto label_259b44;
        }
    }
    ctx->pc = 0x259B3Cu;
    // 0x259b3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x259B3Cu;
    {
        const bool branch_taken_0x259b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B3Cu;
            // 0x259b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b3c) {
            ctx->pc = 0x259B6Cu;
            goto label_259b6c;
        }
    }
    ctx->pc = 0x259B44u;
label_259b44:
    // 0x259b44: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x259b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x259b48: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259B48u;
    {
        const bool branch_taken_0x259b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b48) {
            ctx->pc = 0x259B54u;
            goto label_259b54;
        }
    }
    ctx->pc = 0x259B50u;
    // 0x259b50: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x259b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_259b54:
    // 0x259b54: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x259b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x259b58: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x259b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x259b5c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x259b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x259b60: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259B60u;
    {
        const bool branch_taken_0x259b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b60) {
            ctx->pc = 0x259B6Cu;
            goto label_259b6c;
        }
    }
    ctx->pc = 0x259B68u;
    // 0x259b68: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x259b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_259b6c:
    // 0x259b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259b74: 0x3e00008  jr          $ra
    ctx->pc = 0x259B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B74u;
            // 0x259b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259B7Cu;
}
