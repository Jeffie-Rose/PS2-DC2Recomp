#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecReset__FP8AudioDec
// Address: 0x29b2b0 - 0x29b2f4
void audioDecReset__FP8AudioDec_0x29b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecReset__FP8AudioDec_0x29b2b0");
#endif

    switch (ctx->pc) {
        case 0x29b2c4u: goto label_29b2c4;
        default: break;
    }

    ctx->pc = 0x29b2b0u;

    // 0x29b2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b2bc: 0xc0a6c6c  jal         func_29B1B0
    ctx->pc = 0x29B2BCu;
    SET_GPR_U32(ctx, 31, 0x29B2C4u);
    ctx->pc = 0x29B2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2BCu;
            // 0x29b2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B1B0u;
    if (runtime->hasFunction(0x29B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x29B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B2C4u; }
        if (ctx->pc != 0x29B2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecPause__FP8AudioDec_0x29b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B2C4u; }
        if (ctx->pc != 0x29B2C4u) { return; }
    }
    ctx->pc = 0x29B2C4u;
label_29b2c4:
    // 0x29b2c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29b2c8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x29b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x29b2cc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x29b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x29b2d0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x29b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x29b2d4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x29b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x29b2d8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x29b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x29b2dc: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x29b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x29b2e0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x29b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x29b2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b2e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x29B2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2ECu;
            // 0x29b2f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B2F4u;
}
