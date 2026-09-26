#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CVillagerDataFv
// Address: 0x2cd110 - 0x2cd184
void Initialize__13CVillagerDataFv_0x2cd110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CVillagerDataFv_0x2cd110");
#endif

    switch (ctx->pc) {
        case 0x2cd16cu: goto label_2cd16c;
        case 0x2cd174u: goto label_2cd174;
        default: break;
    }

    ctx->pc = 0x2cd110u;

    // 0x2cd110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd114: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cd114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cd11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd120: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cd120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cd124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd128: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2cd128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2cd12c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2cd12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2cd130: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2cd130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2cd134: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2cd134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2cd138: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2cd138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2cd13c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2cd13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2cd140: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2cd140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2cd144: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2cd144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2cd148: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2cd148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2cd14c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2cd14cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2cd150: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2cd150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2cd154: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2cd154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2cd158: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2cd158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2cd15c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cd15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2cd160: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2cd160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2cd164: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x2CD164u;
    SET_GPR_U32(ctx, 31, 0x2CD16Cu);
    ctx->pc = 0x2CD168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD164u;
            // 0x2cd168: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD16Cu; }
        if (ctx->pc != 0x2CD16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD16Cu; }
        if (ctx->pc != 0x2CD16Cu) { return; }
    }
    ctx->pc = 0x2CD16Cu;
label_2cd16c:
    // 0x2cd16c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2CD16Cu;
    SET_GPR_U32(ctx, 31, 0x2CD174u);
    ctx->pc = 0x2CD170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD16Cu;
            // 0x2cd170: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD174u; }
        if (ctx->pc != 0x2CD174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD174u; }
        if (ctx->pc != 0x2CD174u) { return; }
    }
    ctx->pc = 0x2CD174u;
label_2cd174:
    // 0x2cd174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd17c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD17Cu;
            // 0x2cd180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD184u;
}
