#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufFlush__FP5ViBuf
// Address: 0x29a680 - 0x29a6d0
void viBufFlush__FP5ViBuf_0x29a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufFlush__FP5ViBuf_0x29a680");
#endif

    switch (ctx->pc) {
        case 0x29a698u: goto label_29a698;
        case 0x29a6c0u: goto label_29a6c0;
        default: break;
    }

    ctx->pc = 0x29a680u;

    // 0x29a680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a690: 0xc044048  jal         func_110120
    ctx->pc = 0x29A690u;
    SET_GPR_U32(ctx, 31, 0x29A698u);
    ctx->pc = 0x29A694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A690u;
            // 0x29a694: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A698u; }
        if (ctx->pc != 0x29A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A698u; }
        if (ctx->pc != 0x29A698u) { return; }
    }
    ctx->pc = 0x29A698u;
label_29a698:
    // 0x29a698: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x29a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29a69c: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x29a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x29a6a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A6A0u;
    {
        const bool branch_taken_0x29a6a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29A6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A6A0u;
            // 0x29a6a4: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6a0) {
            ctx->pc = 0x29A6B0u;
            goto label_29a6b0;
        }
    }
    ctx->pc = 0x29A6A8u;
    // 0x29a6a8: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x29a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x29a6ac: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x29a6acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_29a6b0:
    // 0x29a6b0: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x29a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x29a6b4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x29a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x29a6b8: 0xc044040  jal         func_110100
    ctx->pc = 0x29A6B8u;
    SET_GPR_U32(ctx, 31, 0x29A6C0u);
    ctx->pc = 0x29A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A6B8u;
            // 0x29a6bc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A6C0u; }
        if (ctx->pc != 0x29A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A6C0u; }
        if (ctx->pc != 0x29A6C0u) { return; }
    }
    ctx->pc = 0x29A6C0u;
label_29a6c0:
    // 0x29a6c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A6C8u;
            // 0x29a6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A6D0u;
}
