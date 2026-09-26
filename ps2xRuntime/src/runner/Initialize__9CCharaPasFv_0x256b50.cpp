#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CCharaPasFv
// Address: 0x256b50 - 0x256bc0
void Initialize__9CCharaPasFv_0x256b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CCharaPasFv_0x256b50");
#endif

    switch (ctx->pc) {
        case 0x256b70u: goto label_256b70;
        case 0x256b78u: goto label_256b78;
        case 0x256ba0u: goto label_256ba0;
        default: break;
    }

    ctx->pc = 0x256b50u;

    // 0x256b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x256b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x256b54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x256b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x256b58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x256b5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256b60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x256b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256b68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x256b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x256b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256b70:
    // 0x256b70: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x256B70u;
    SET_GPR_U32(ctx, 31, 0x256B78u);
    ctx->pc = 0x256B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256B70u;
            // 0x256b74: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256B78u; }
        if (ctx->pc != 0x256B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256B78u; }
        if (ctx->pc != 0x256B78u) { return; }
    }
    ctx->pc = 0x256B78u;
label_256b78:
    // 0x256b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x256b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x256b7c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x256b80: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x256b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x256b84: 0x0  nop
    ctx->pc = 0x256b84u;
    // NOP
    // 0x256b88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x256B88u;
    {
        const bool branch_taken_0x256b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256b88) {
            ctx->pc = 0x256B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256b70;
        }
    }
    ctx->pc = 0x256B90u;
    // 0x256b90: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x256b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
    // 0x256b94: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x256b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x256b98: 0xc0956fc  jal         func_255BF0
    ctx->pc = 0x256B98u;
    SET_GPR_U32(ctx, 31, 0x256BA0u);
    ctx->pc = 0x256B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256B98u;
            // 0x256b9c: 0xae400104  sw          $zero, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255BF0u;
    if (runtime->hasFunction(0x255BF0u)) {
        auto targetFn = runtime->lookupFunction(0x255BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256BA0u; }
        if (ctx->pc != 0x256BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9C3DSplineFv_0x255bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256BA0u; }
        if (ctx->pc != 0x256BA0u) { return; }
    }
    ctx->pc = 0x256BA0u;
label_256ba0:
    // 0x256ba0: 0xae4004a4  sw          $zero, 0x4A4($s2)
    ctx->pc = 0x256ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 0));
    // 0x256ba4: 0xae4004a8  sw          $zero, 0x4A8($s2)
    ctx->pc = 0x256ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1192), GPR_U32(ctx, 0));
    // 0x256ba8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x256ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256bac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x256BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256BB8u;
            // 0x256bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256BC0u;
}
