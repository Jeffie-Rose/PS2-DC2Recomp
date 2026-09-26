#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: voBufIncCount__FP5VoBuf
// Address: 0x299a40 - 0x299ab4
void voBufIncCount__FP5VoBuf_0x299a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufIncCount__FP5VoBuf_0x299a40");
#endif

    switch (ctx->pc) {
        case 0x299a54u: goto label_299a54;
        case 0x299aa4u: goto label_299aa4;
        default: break;
    }

    ctx->pc = 0x299a40u;

    // 0x299a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299a4c: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x299A4Cu;
    SET_GPR_U32(ctx, 31, 0x299A54u);
    ctx->pc = 0x299A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299A4Cu;
            // 0x299a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A54u; }
        if (ctx->pc != 0x299A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A54u; }
        if (ctx->pc != 0x299A54u) { return; }
    }
    ctx->pc = 0x299A54u;
label_299a54:
    // 0x299a54: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x299a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x299a58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x299a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299a5c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x299a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x299a60: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x299a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x299a64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x299a68: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x299a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x299a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x299a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299a70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x299a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x299a74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x299a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x299a78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x299a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x299a7c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x299a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x299a80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x299a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x299a84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x299a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x299a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x299a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x299a8c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x299A8Cu;
    {
        const bool branch_taken_0x299a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299A8Cu;
            // 0x299a90: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299a8c) {
            ctx->pc = 0x299A98u;
            goto label_299a98;
        }
    }
    ctx->pc = 0x299A94u;
    // 0x299a94: 0x1cd  break       0, 7
    ctx->pc = 0x299a94u;
    runtime->handleBreak(rdram, ctx);
label_299a98:
    // 0x299a98: 0x1010  mfhi        $v0
    ctx->pc = 0x299a98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x299a9c: 0xc04630a  jal         func_118C28
    ctx->pc = 0x299A9Cu;
    SET_GPR_U32(ctx, 31, 0x299AA4u);
    ctx->pc = 0x299AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299A9Cu;
            // 0x299aa0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299AA4u; }
        if (ctx->pc != 0x299AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299AA4u; }
        if (ctx->pc != 0x299AA4u) { return; }
    }
    ctx->pc = 0x299AA4u;
label_299aa4:
    // 0x299aa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299aac: 0x3e00008  jr          $ra
    ctx->pc = 0x299AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299AACu;
            // 0x299ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299AB4u;
}
