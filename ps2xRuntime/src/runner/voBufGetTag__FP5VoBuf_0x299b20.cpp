#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: voBufGetTag__FP5VoBuf
// Address: 0x299b20 - 0x299b84
void voBufGetTag__FP5VoBuf_0x299b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufGetTag__FP5VoBuf_0x299b20");
#endif

    switch (ctx->pc) {
        case 0x299b30u: goto label_299b30;
        default: break;
    }

    ctx->pc = 0x299b20u;

    // 0x299b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299b28: 0xc0a66c4  jal         func_299B10
    ctx->pc = 0x299B28u;
    SET_GPR_U32(ctx, 31, 0x299B30u);
    ctx->pc = 0x299B10u;
    if (runtime->hasFunction(0x299B10u)) {
        auto targetFn = runtime->lookupFunction(0x299B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299B30u; }
        if (ctx->pc != 0x299B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsEmpty__FP5VoBuf_0x299b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299B30u; }
        if (ctx->pc != 0x299B30u) { return; }
    }
    ctx->pc = 0x299B30u;
label_299b30:
    // 0x299b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299B30u;
    {
        const bool branch_taken_0x299b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B30u;
            // 0x299b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b30) {
            ctx->pc = 0x299B40u;
            goto label_299b40;
        }
    }
    ctx->pc = 0x299B38u;
    // 0x299b38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x299B38u;
    {
        const bool branch_taken_0x299b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B38u;
            // 0x299b3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b38) {
            ctx->pc = 0x299B7Cu;
            goto label_299b7c;
        }
    }
    ctx->pc = 0x299B40u;
label_299b40:
    // 0x299b40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x299b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x299b44: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x299b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x299b48: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x299b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x299b4c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x299b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299b50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x299b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x299b54: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x299B54u;
    {
        const bool branch_taken_0x299b54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x299B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B54u;
            // 0x299b58: 0x45001a  div         $zero, $v0, $a1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b54) {
            ctx->pc = 0x299B60u;
            goto label_299b60;
        }
    }
    ctx->pc = 0x299B5Cu;
    // 0x299b5c: 0x1cd  break       0, 7
    ctx->pc = 0x299b5cu;
    runtime->handleBreak(rdram, ctx);
label_299b60:
    // 0x299b60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x299b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299b64: 0x2010  mfhi        $a0
    ctx->pc = 0x299b64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x299b68: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x299b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x299b6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x299b70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x299b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x299b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x299b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299b7c:
    // 0x299b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x299B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B7Cu;
            // 0x299b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299B84u;
}
