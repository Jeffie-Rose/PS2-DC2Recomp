#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_MC_LOAD__FP12RS_STACKDATAi
// Address: 0x27a100 - 0x27a148
void ps2__CHECK_MC_LOAD__FP12RS_STACKDATAi_0x27a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_MC_LOAD__FP12RS_STACKDATAi_0x27a100");
#endif

    switch (ctx->pc) {
        case 0x27a114u: goto label_27a114;
        case 0x27a130u: goto label_27a130;
        default: break;
    }

    ctx->pc = 0x27a100u;

    // 0x27a100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a10c: 0xc06426c  jal         func_1909B0
    ctx->pc = 0x27A10Cu;
    SET_GPR_U32(ctx, 31, 0x27A114u);
    ctx->pc = 0x27A110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A10Cu;
            // 0x27a110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909B0u;
    if (runtime->hasFunction(0x1909B0u)) {
        auto targetFn = runtime->lookupFunction(0x1909B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A114u; }
        if (ctx->pc != 0x27A114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowInitArg__Fv_0x1909b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A114u; }
        if (ctx->pc != 0x27A114u) { return; }
    }
    ctx->pc = 0x27A114u;
label_27a114:
    // 0x27a114: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A114u;
    {
        const bool branch_taken_0x27a114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a114) {
            ctx->pc = 0x27A124u;
            goto label_27a124;
        }
    }
    ctx->pc = 0x27A11Cu;
    // 0x27a11c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27A11Cu;
    {
        const bool branch_taken_0x27a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A11Cu;
            // 0x27a120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a11c) {
            ctx->pc = 0x27A138u;
            goto label_27a138;
        }
    }
    ctx->pc = 0x27A124u;
label_27a124:
    // 0x27a124: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x27a124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x27a128: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27A128u;
    SET_GPR_U32(ctx, 31, 0x27A130u);
    ctx->pc = 0x27A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A128u;
            // 0x27a12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A130u; }
        if (ctx->pc != 0x27A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A130u; }
        if (ctx->pc != 0x27A130u) { return; }
    }
    ctx->pc = 0x27A130u;
label_27a130:
    // 0x27a130: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x27a130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x27a134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a138:
    // 0x27a138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a13c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a140: 0x3e00008  jr          $ra
    ctx->pc = 0x27A140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A140u;
            // 0x27a144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A148u;
}
