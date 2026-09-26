#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetChild__8mgCFrameFP8mgCFrame
// Address: 0x136b60 - 0x136bb4
void SetChild__8mgCFrameFP8mgCFrame_0x136b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetChild__8mgCFrameFP8mgCFrame_0x136b60");
#endif

    switch (ctx->pc) {
        case 0x136b90u: goto label_136b90;
        default: break;
    }

    ctx->pc = 0x136b60u;

    // 0x136b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136b70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x136b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b74: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x136B74u;
    {
        const bool branch_taken_0x136b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B74u;
            // 0x136b78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b74) {
            ctx->pc = 0x136BA0u;
            goto label_136ba0;
        }
    }
    ctx->pc = 0x136B7Cu;
    // 0x136b7c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x136b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x136b80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136B80u;
    {
        const bool branch_taken_0x136b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b80) {
            ctx->pc = 0x136B98u;
            goto label_136b98;
        }
    }
    ctx->pc = 0x136B88u;
    // 0x136b88: 0xc04dac8  jal         func_136B20
    ctx->pc = 0x136B88u;
    SET_GPR_U32(ctx, 31, 0x136B90u);
    ctx->pc = 0x136B20u;
    if (runtime->hasFunction(0x136B20u)) {
        auto targetFn = runtime->lookupFunction(0x136B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B90u; }
        if (ctx->pc != 0x136B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBrother__8mgCFrameFP8mgCFrame_0x136b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B90u; }
        if (ctx->pc != 0x136B90u) { return; }
    }
    ctx->pc = 0x136B90u;
label_136b90:
    // 0x136b90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136B90u;
    {
        const bool branch_taken_0x136b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B90u;
            // 0x136b94: 0xae110054  sw          $s1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b90) {
            ctx->pc = 0x136BA0u;
            goto label_136ba0;
        }
    }
    ctx->pc = 0x136B98u;
label_136b98:
    // 0x136b98: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x136b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
    // 0x136b9c: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x136b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_136ba0:
    // 0x136ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136bac: 0x3e00008  jr          $ra
    ctx->pc = 0x136BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136BACu;
            // 0x136bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136BB4u;
}
