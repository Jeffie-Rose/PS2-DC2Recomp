#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetArgString__FP8ARG_DATA
// Address: 0x25fe60 - 0x25fe94
void GetArgString__FP8ARG_DATA_0x25fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetArgString__FP8ARG_DATA_0x25fe60");
#endif

    switch (ctx->pc) {
        case 0x25fe78u: goto label_25fe78;
        default: break;
    }

    ctx->pc = 0x25fe60u;

    // 0x25fe60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fe64: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25FE64u;
    {
        const bool branch_taken_0x25fe64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE64u;
            // 0x25fe68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe64) {
            ctx->pc = 0x25FE80u;
            goto label_25fe80;
        }
    }
    ctx->pc = 0x25FE6Cu;
    // 0x25fe6c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x25fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x25fe70: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x25FE70u;
    SET_GPR_U32(ctx, 31, 0x25FE78u);
    ctx->pc = 0x25FE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE70u;
            // 0x25fe74: 0x2484c4e0  addiu       $a0, $a0, -0x3B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FE78u; }
        if (ctx->pc != 0x25FE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FE78u; }
        if (ctx->pc != 0x25FE78u) { return; }
    }
    ctx->pc = 0x25FE78u;
label_25fe78:
    // 0x25fe78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25FE78u;
    {
        const bool branch_taken_0x25fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE78u;
            // 0x25fe7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe78) {
            ctx->pc = 0x25FE88u;
            goto label_25fe88;
        }
    }
    ctx->pc = 0x25FE80u;
label_25fe80:
    // 0x25fe80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25fe84: 0x0  nop
    ctx->pc = 0x25fe84u;
    // NOP
label_25fe88:
    // 0x25fe88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE8Cu;
            // 0x25fe90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FE94u;
}
