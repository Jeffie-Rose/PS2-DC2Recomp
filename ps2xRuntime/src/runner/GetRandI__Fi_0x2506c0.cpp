#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRandI__Fi
// Address: 0x2506c0 - 0x2506f4
void GetRandI__Fi_0x2506c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRandI__Fi_0x2506c0");
#endif

    switch (ctx->pc) {
        case 0x2506d4u: goto label_2506d4;
        default: break;
    }

    ctx->pc = 0x2506c0u;

    // 0x2506c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2506c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2506c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2506c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2506c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2506c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2506cc: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2506CCu;
    SET_GPR_U32(ctx, 31, 0x2506D4u);
    ctx->pc = 0x2506D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2506CCu;
            // 0x2506d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2506D4u; }
        if (ctx->pc != 0x2506D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2506D4u; }
        if (ctx->pc != 0x2506D4u) { return; }
    }
    ctx->pc = 0x2506D4u;
label_2506d4:
    // 0x2506d4: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2506D4u;
    {
        const bool branch_taken_0x2506d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2506D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2506D4u;
            // 0x2506d8: 0x50001a  div         $zero, $v0, $s0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506d4) {
            ctx->pc = 0x2506E0u;
            goto label_2506e0;
        }
    }
    ctx->pc = 0x2506DCu;
    // 0x2506dc: 0x1cd  break       0, 7
    ctx->pc = 0x2506dcu;
    runtime->handleBreak(rdram, ctx);
label_2506e0:
    // 0x2506e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2506e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2506e4: 0x1010  mfhi        $v0
    ctx->pc = 0x2506e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2506e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2506e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2506ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2506ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2506F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2506ECu;
            // 0x2506f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2506F4u;
}
