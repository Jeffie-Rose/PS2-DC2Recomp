#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginPrim2__11mgCDrawPrimFi
// Address: 0x134860 - 0x134888
void BeginPrim2__11mgCDrawPrimFi_0x134860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginPrim2__11mgCDrawPrimFi_0x134860");
#endif

    ctx->pc = 0x134860u;

    // 0x134860: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x134860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x134864: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x134864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x134868: 0x90860050  lbu         $a2, 0x50($a0)
    ctx->pc = 0x134868u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13486c: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x13486cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x134870: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x134870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x134874: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x134874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x134878: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x134878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13487c: 0xa0830050  sb          $v1, 0x50($a0)
    ctx->pc = 0x13487cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x134880: 0x804d14c  j           func_134530
    ctx->pc = 0x134880u;
    ctx->pc = 0x134884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134880u;
            // 0x134884: 0xac8200f8  sw          $v0, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134530u;
    if (runtime->hasFunction(0x134530u)) {
        auto targetFn = runtime->lookupFunction(0x134530u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        BeginDma__11mgCDrawPrimFv_0x134530(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x134888u;
}
