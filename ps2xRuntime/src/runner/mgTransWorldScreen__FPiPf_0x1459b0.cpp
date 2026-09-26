#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgTransWorldScreen__FPiPf
// Address: 0x1459b0 - 0x1459fc
void mgTransWorldScreen__FPiPf_0x1459b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgTransWorldScreen__FPiPf_0x1459b0");
#endif

    switch (ctx->pc) {
        case 0x1459c4u: goto label_1459c4;
        default: break;
    }

    ctx->pc = 0x1459b0u;

    // 0x1459b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1459b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1459b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1459b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1459b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1459b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1459bc: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1459BCu;
    SET_GPR_U32(ctx, 31, 0x1459C4u);
    ctx->pc = 0x1459C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459BCu;
            // 0x1459c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459C4u; }
        if (ctx->pc != 0x1459C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459C4u; }
        if (ctx->pc != 0x1459C4u) { return; }
    }
    ctx->pc = 0x1459C4u;
label_1459c4:
    // 0x1459c4: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x1459c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x1459c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1459c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1459cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1459ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1459d0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1459d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1459d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1459d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1459d8: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x1459d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x1459dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1459dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1459e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1459e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1459e4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1459e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1459e8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1459e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1459ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1459ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1459f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1459f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1459f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1459F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1459F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1459F4u;
            // 0x1459f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1459FCu;
}
