#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitHDDMenu__FP1
// Address: 0x31b0c0 - 0x31b110
void InitHDDMenu__FP1_0x31b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitHDDMenu__FP1_0x31b0c0");
#endif

    switch (ctx->pc) {
        case 0x31b0d8u: goto label_31b0d8;
        case 0x31b0e0u: goto label_31b0e0;
        case 0x31b0e8u: goto label_31b0e8;
        default: break;
    }

    ctx->pc = 0x31b0c0u;

    // 0x31b0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b0c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b0d0: 0xc0c6e90  jal         func_31BA40
    ctx->pc = 0x31B0D0u;
    SET_GPR_U32(ctx, 31, 0x31B0D8u);
    ctx->pc = 0x31B0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B0D0u;
            // 0x31b0d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BA40u;
    if (runtime->hasFunction(0x31BA40u)) {
        auto targetFn = runtime->lookupFunction(0x31BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B0D8u; }
        if (ctx->pc != 0x31B0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HddConectCheck__FPi_0x31ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B0D8u; }
        if (ctx->pc != 0x31B0D8u) { return; }
    }
    ctx->pc = 0x31B0D8u;
label_31b0d8:
    // 0x31b0d8: 0xc0c6ef0  jal         func_31BBC0
    ctx->pc = 0x31B0D8u;
    SET_GPR_U32(ctx, 31, 0x31B0E0u);
    ctx->pc = 0x31B0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B0D8u;
            // 0x31b0dc: 0xaf82a39c  sw          $v0, -0x5C64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BBC0u;
    if (runtime->hasFunction(0x31BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x31BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B0E0u; }
        if (ctx->pc != 0x31B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstall__Fv_0x31bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B0E0u; }
        if (ctx->pc != 0x31B0E0u) { return; }
    }
    ctx->pc = 0x31B0E0u;
label_31b0e0:
    // 0x31b0e0: 0xc0c6f98  jal         func_31BE60
    ctx->pc = 0x31B0E0u;
    SET_GPR_U32(ctx, 31, 0x31B0E8u);
    ctx->pc = 0x31B0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B0E0u;
            // 0x31b0e4: 0xaf82a3a0  sw          $v0, -0x5C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BE60u;
    if (runtime->hasFunction(0x31BE60u)) {
        auto targetFn = runtime->lookupFunction(0x31BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B0E8u; }
        if (ctx->pc != 0x31B0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInstallSpace__Fv_0x31be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B0E8u; }
        if (ctx->pc != 0x31B0E8u) { return; }
    }
    ctx->pc = 0x31B0E8u;
label_31b0e8:
    // 0x31b0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b0ec: 0xaf90a3b4  sw          $s0, -0x5C4C($gp)
    ctx->pc = 0x31b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943668), GPR_U32(ctx, 16));
    // 0x31b0f0: 0xaf83a3a8  sw          $v1, -0x5C58($gp)
    ctx->pc = 0x31b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943656), GPR_U32(ctx, 3));
    // 0x31b0f4: 0xaf82a3a4  sw          $v0, -0x5C5C($gp)
    ctx->pc = 0x31b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943652), GPR_U32(ctx, 2));
    // 0x31b0f8: 0xaf80a3ac  sw          $zero, -0x5C54($gp)
    ctx->pc = 0x31b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943660), GPR_U32(ctx, 0));
    // 0x31b0fc: 0xaf80a3b0  sw          $zero, -0x5C50($gp)
    ctx->pc = 0x31b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943664), GPR_U32(ctx, 0));
    // 0x31b100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31b100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b108: 0x3e00008  jr          $ra
    ctx->pc = 0x31B108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B108u;
            // 0x31b10c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B110u;
}
