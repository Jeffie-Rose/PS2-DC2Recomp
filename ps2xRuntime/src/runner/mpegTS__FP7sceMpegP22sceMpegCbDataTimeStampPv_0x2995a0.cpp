#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv
// Address: 0x2995a0 - 0x2995e4
void mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv_0x2995a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv_0x2995a0");
#endif

    switch (ctx->pc) {
        case 0x2995c0u: goto label_2995c0;
        default: break;
    }

    ctx->pc = 0x2995a0u;

    // 0x2995a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2995a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2995a4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2995a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2995a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2995a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2995ac: 0x24845398  addiu       $a0, $a0, 0x5398
    ctx->pc = 0x2995acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21400));
    // 0x2995b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2995b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2995b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2995b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995b8: 0xc0a6a54  jal         func_29A950
    ctx->pc = 0x2995B8u;
    SET_GPR_U32(ctx, 31, 0x2995C0u);
    ctx->pc = 0x2995BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2995B8u;
            // 0x2995bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A950u;
    if (runtime->hasFunction(0x29A950u)) {
        auto targetFn = runtime->lookupFunction(0x29A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2995C0u; }
        if (ctx->pc != 0x2995C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufGetTs__FP5ViBufP9TimeStamp_0x29a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2995C0u; }
        if (ctx->pc != 0x2995C0u) { return; }
    }
    ctx->pc = 0x2995C0u;
label_2995c0:
    // 0x2995c0: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x2995c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2995c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2995c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2995c8: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2995c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x2995cc: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x2995ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2995d0: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x2995d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2995d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2995d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2995d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2995d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2995dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2995DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2995E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2995DCu;
            // 0x2995e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2995E4u;
}
