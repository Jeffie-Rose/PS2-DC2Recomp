#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecDelete__6CMovieFP8VideoDec
// Address: 0x299190 - 0x2991c4
void videoDecDelete__6CMovieFP8VideoDec_0x299190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecDelete__6CMovieFP8VideoDec_0x299190");
#endif

    switch (ctx->pc) {
        case 0x2991a8u: goto label_2991a8;
        case 0x2991b0u: goto label_2991b0;
        default: break;
    }

    ctx->pc = 0x299190u;

    // 0x299190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29919c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29919cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991a0: 0xc0a698c  jal         func_29A630
    ctx->pc = 0x2991A0u;
    SET_GPR_U32(ctx, 31, 0x2991A8u);
    ctx->pc = 0x2991A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2991A0u;
            // 0x2991a4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A630u;
    if (runtime->hasFunction(0x29A630u)) {
        auto targetFn = runtime->lookupFunction(0x29A630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991A8u; }
        if (ctx->pc != 0x2991A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufDelete__FP5ViBuf_0x29a630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991A8u; }
        if (ctx->pc != 0x2991A8u) { return; }
    }
    ctx->pc = 0x2991A8u;
label_2991a8:
    // 0x2991a8: 0xc0438bc  jal         func_10E2F0
    ctx->pc = 0x2991A8u;
    SET_GPR_U32(ctx, 31, 0x2991B0u);
    ctx->pc = 0x2991ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2991A8u;
            // 0x2991ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2F0u;
    if (runtime->hasFunction(0x10E2F0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991B0u; }
        if (ctx->pc != 0x2991B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDelete_0x10e2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991B0u; }
        if (ctx->pc != 0x2991B0u) { return; }
    }
    ctx->pc = 0x2991B0u;
label_2991b0:
    // 0x2991b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2991b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2991b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2991b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2991b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2991b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2991bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2991BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2991C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2991BCu;
            // 0x2991c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2991C4u;
}
