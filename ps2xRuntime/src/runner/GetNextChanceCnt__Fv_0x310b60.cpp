#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNextChanceCnt__Fv
// Address: 0x310b60 - 0x310b94
void GetNextChanceCnt__Fv_0x310b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextChanceCnt__Fv_0x310b60");
#endif

    switch (ctx->pc) {
        case 0x310b70u: goto label_310b70;
        default: break;
    }

    ctx->pc = 0x310b60u;

    // 0x310b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x310b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x310b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x310b68: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x310B68u;
    SET_GPR_U32(ctx, 31, 0x310B70u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310B70u; }
        if (ctx->pc != 0x310B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310B70u; }
        if (ctx->pc != 0x310B70u) { return; }
    }
    ctx->pc = 0x310B70u;
label_310b70:
    // 0x310b70: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x310b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x310b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310b78: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x310b78u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x310b7c: 0x0  nop
    ctx->pc = 0x310b7cu;
    // NOP
    // 0x310b80: 0x0  nop
    ctx->pc = 0x310b80u;
    // NOP
    // 0x310b84: 0x1010  mfhi        $v0
    ctx->pc = 0x310b84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x310b88: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x310b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x310b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x310B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310B8Cu;
            // 0x310b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310B94u;
}
