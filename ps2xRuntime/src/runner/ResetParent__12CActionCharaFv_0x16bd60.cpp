#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetParent__12CActionCharaFv
// Address: 0x16bd60 - 0x16bd8c
void ResetParent__12CActionCharaFv_0x16bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetParent__12CActionCharaFv_0x16bd60");
#endif

    switch (ctx->pc) {
        case 0x16bd80u: goto label_16bd80;
        default: break;
    }

    ctx->pc = 0x16bd60u;

    // 0x16bd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bd64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bd68: 0xac800678  sw          $zero, 0x678($a0)
    ctx->pc = 0x16bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 0));
    // 0x16bd6c: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x16bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x16bd70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BD70u;
    {
        const bool branch_taken_0x16bd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd70) {
            ctx->pc = 0x16BD80u;
            goto label_16bd80;
        }
    }
    ctx->pc = 0x16BD78u;
    // 0x16bd78: 0xc04db18  jal         func_136C60
    ctx->pc = 0x16BD78u;
    SET_GPR_U32(ctx, 31, 0x16BD80u);
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD80u; }
        if (ctx->pc != 0x16BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD80u; }
        if (ctx->pc != 0x16BD80u) { return; }
    }
    ctx->pc = 0x16BD80u;
label_16bd80:
    // 0x16bd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd84: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD84u;
            // 0x16bd88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BD8Cu;
}
