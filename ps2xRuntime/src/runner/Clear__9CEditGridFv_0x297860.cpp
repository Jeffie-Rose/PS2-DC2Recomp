#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__9CEditGridFv
// Address: 0x297860 - 0x297888
void Clear__9CEditGridFv_0x297860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9CEditGridFv_0x297860");
#endif

    ctx->pc = 0x297860u;

    // 0x297860: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x297860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x297864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297868: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x297868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29786c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x29786cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x297870: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x297870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297874: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x297874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297878: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x297878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29787c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297880: 0x8049c86  j           func_127218
    ctx->pc = 0x297880u;
    ctx->pc = 0x297884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297880u;
            // 0x297884: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memset_0x127218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x297888u;
}
