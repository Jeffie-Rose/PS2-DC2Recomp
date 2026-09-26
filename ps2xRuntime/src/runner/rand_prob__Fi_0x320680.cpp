#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: rand_prob__Fi
// Address: 0x320680 - 0x3206b8
void rand_prob__Fi_0x320680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rand_prob__Fi_0x320680");
#endif

    switch (ctx->pc) {
        case 0x320690u: goto label_320690;
        default: break;
    }

    ctx->pc = 0x320680u;

    // 0x320680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320688: 0xc0c8158  jal         func_320560
    ctx->pc = 0x320688u;
    SET_GPR_U32(ctx, 31, 0x320690u);
    ctx->pc = 0x32068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320688u;
            // 0x32068c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320560u;
    if (runtime->hasFunction(0x320560u)) {
        auto targetFn = runtime->lookupFunction(0x320560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320690u; }
        if (ctx->pc != 0x320690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        irnd__Fv_0x320560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320690u; }
        if (ctx->pc != 0x320690u) { return; }
    }
    ctx->pc = 0x320690u;
label_320690:
    // 0x320690: 0x21b03  sra         $v1, $v0, 12
    ctx->pc = 0x320690u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 12));
    // 0x320694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320698: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x320698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x32069c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x32069cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3206a0: 0x0  nop
    ctx->pc = 0x3206a0u;
    // NOP
    // 0x3206a4: 0x0  nop
    ctx->pc = 0x3206a4u;
    // NOP
    // 0x3206a8: 0x1010  mfhi        $v0
    ctx->pc = 0x3206a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3206ac: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x3206acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3206b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3206B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3206B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3206B0u;
            // 0x3206b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3206B8u;
}
