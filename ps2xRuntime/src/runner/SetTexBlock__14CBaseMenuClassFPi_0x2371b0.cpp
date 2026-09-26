#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexBlock__14CBaseMenuClassFPi
// Address: 0x2371b0 - 0x237200
void SetTexBlock__14CBaseMenuClassFPi_0x2371b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexBlock__14CBaseMenuClassFPi_0x2371b0");
#endif

    switch (ctx->pc) {
        case 0x2371b8u: goto label_2371b8;
        default: break;
    }

    ctx->pc = 0x2371b0u;

    // 0x2371b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2371b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2371b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2371b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2371b8:
    // 0x2371b8: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2371b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2371bc: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2371bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2371c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2371c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2371c4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2371c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2371c8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2371c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2371cc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2371CCu;
    {
        const bool branch_taken_0x2371cc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2371D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2371CCu;
            // 0x2371d0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371cc) {
            ctx->pc = 0x2371E4u;
            goto label_2371e4;
        }
    }
    ctx->pc = 0x2371D4u;
    // 0x2371d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2371d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2371d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2371d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2371dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2371DCu;
    {
        const bool branch_taken_0x2371dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2371DCu;
            // 0x2371e0: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371dc) {
            ctx->pc = 0x2371F4u;
            goto label_2371f4;
        }
    }
    ctx->pc = 0x2371E4u;
label_2371e4:
    // 0x2371e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2371e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2371e8: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x2371e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2371ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2371ECu;
    {
        const bool branch_taken_0x2371ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2371F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2371ECu;
            // 0x2371f0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371ec) {
            ctx->pc = 0x2371B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2371b8;
        }
    }
    ctx->pc = 0x2371F4u;
label_2371f4:
    // 0x2371f4: 0x0  nop
    ctx->pc = 0x2371f4u;
    // NOP
    // 0x2371f8: 0x808dc80  j           func_237200
    ctx->pc = 0x2371F8u;
    ctx->pc = 0x237200u;
    if (runtime->hasFunction(0x237200u)) {
        auto targetFn = runtime->lookupFunction(0x237200u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DeleteTexBlock__14CBaseMenuClassFv_0x237200(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x237200u;
}
