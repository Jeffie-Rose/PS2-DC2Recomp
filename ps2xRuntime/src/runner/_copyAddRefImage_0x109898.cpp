#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _copyAddRefImage
// Address: 0x109898 - 0x1098f4
void _copyAddRefImage_0x109898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyAddRefImage_0x109898");
#endif

    switch (ctx->pc) {
        case 0x1098a8u: goto label_1098a8;
        default: break;
    }

    ctx->pc = 0x109898u;

    // 0x109898: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x109898u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10989c: 0x3c0a0011  lui         $t2, 0x11
    ctx->pc = 0x10989cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17 << 16));
    // 0x1098a0: 0x254a9940  addiu       $t2, $t2, -0x66C0
    ctx->pc = 0x1098a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294940992));
    // 0x1098a4: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x1098a4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_1098a8:
    // 0x1098a8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1098a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1098ac: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x1098acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1098b0: 0x78cd0000  lq          $t5, 0x0($a2)
    ctx->pc = 0x1098b0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1098b4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1098b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1098b8: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1098b8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1098bc: 0x710d4108  paddh       $t0, $t0, $t5
    ctx->pc = 0x1098bcu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x1098c0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x1098c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1098c4: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x1098c4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x1098c8: 0x71224908  paddh       $t1, $t1, $v0
    ctx->pc = 0x1098c8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1098cc: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x1098ccu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1098d0: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x1098d0u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x1098d4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1098d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1098d8: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x1098d8u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1098dc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1098dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1098e0: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x1098e0u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1098e4: 0x1580fff0  bnez        $t4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1098E4u;
    {
        const bool branch_taken_0x1098e4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1098E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1098E4u;
            // 0x1098e8: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098e4) {
            ctx->pc = 0x1098A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1098a8;
        }
    }
    ctx->pc = 0x1098ECu;
    // 0x1098ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1098ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1098F4u;
}
