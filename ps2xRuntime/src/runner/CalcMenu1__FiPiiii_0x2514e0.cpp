#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMenu1__FiPiiii
// Address: 0x2514e0 - 0x25155c
void CalcMenu1__FiPiiii_0x2514e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMenu1__FiPiiii_0x2514e0");
#endif

    switch (ctx->pc) {
        case 0x251534u: goto label_251534;
        default: break;
    }

    ctx->pc = 0x2514e0u;

    // 0x2514e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2514e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2514e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2514e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2514e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2514e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2514ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2514ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2514f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2514f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2514f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2514f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2514f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2514fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251500: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x251500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251504: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x251504u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x251508: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x251508u;
    {
        const bool branch_taken_0x251508 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251508u;
            // 0x25150c: 0x66001a  div         $zero, $v1, $a2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251508) {
            ctx->pc = 0x251514u;
            goto label_251514;
        }
    }
    ctx->pc = 0x251510u;
    // 0x251510: 0x1cd  break       0, 7
    ctx->pc = 0x251510u;
    runtime->handleBreak(rdram, ctx);
label_251514:
    // 0x251514: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x251514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x251518: 0x2012  mflo        $a0
    ctx->pc = 0x251518u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x25151c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x251520: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x251520u;
    {
        const bool branch_taken_0x251520 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x251524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251520u;
            // 0x251524: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251520) {
            ctx->pc = 0x251540u;
            goto label_251540;
        }
    }
    ctx->pc = 0x251528u;
    // 0x251528: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x251528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25152c: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x25152Cu;
    SET_GPR_U32(ctx, 31, 0x251534u);
    ctx->pc = 0x251530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25152Cu;
            // 0x251530: 0x2422023  subu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251534u; }
        if (ctx->pc != 0x251534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251534u; }
        if (ctx->pc != 0x251534u) { return; }
    }
    ctx->pc = 0x251534u;
label_251534:
    // 0x251534: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x251534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x251538: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x251538u;
    {
        const bool branch_taken_0x251538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x251538) {
            ctx->pc = 0x251544u;
            goto label_251544;
        }
    }
    ctx->pc = 0x251540u;
label_251540:
    // 0x251540: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x251540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_251544:
    // 0x251544: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x251544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25154c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25154cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251554: 0x3e00008  jr          $ra
    ctx->pc = 0x251554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251554u;
            // 0x251558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25155Cu;
}
