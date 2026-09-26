#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgDrawBuggy__FP11SubGameInfo
// Address: 0x314420 - 0x314494
void sgDrawBuggy__FP11SubGameInfo_0x314420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgDrawBuggy__FP11SubGameInfo_0x314420");
#endif

    switch (ctx->pc) {
        case 0x314440u: goto label_314440;
        case 0x314450u: goto label_314450;
        case 0x314460u: goto label_314460;
        case 0x314470u: goto label_314470;
        case 0x314480u: goto label_314480;
        default: break;
    }

    ctx->pc = 0x314420u;

    // 0x314420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314424: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x314424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x314428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31442c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x314434: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x314434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x314438: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x314438u;
    SET_GPR_U32(ctx, 31, 0x314440u);
    ctx->pc = 0x31443Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314438u;
            // 0x31443c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314440u; }
        if (ctx->pc != 0x314440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314440u; }
        if (ctx->pc != 0x314440u) { return; }
    }
    ctx->pc = 0x314440u;
label_314440:
    // 0x314440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314444: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x314444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x314448: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x314448u;
    SET_GPR_U32(ctx, 31, 0x314450u);
    ctx->pc = 0x31444Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314448u;
            // 0x31444c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314450u; }
        if (ctx->pc != 0x314450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314450u; }
        if (ctx->pc != 0x314450u) { return; }
    }
    ctx->pc = 0x314450u;
label_314450:
    // 0x314450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314454: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x314454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x314458: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x314458u;
    SET_GPR_U32(ctx, 31, 0x314460u);
    ctx->pc = 0x31445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314458u;
            // 0x31445c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314460u; }
        if (ctx->pc != 0x314460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314460u; }
        if (ctx->pc != 0x314460u) { return; }
    }
    ctx->pc = 0x314460u;
label_314460:
    // 0x314460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314464: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x314464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x314468: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x314468u;
    SET_GPR_U32(ctx, 31, 0x314470u);
    ctx->pc = 0x31446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314468u;
            // 0x31446c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314470u; }
        if (ctx->pc != 0x314470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314470u; }
        if (ctx->pc != 0x314470u) { return; }
    }
    ctx->pc = 0x314470u;
label_314470:
    // 0x314470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314474: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x314474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x314478: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x314478u;
    SET_GPR_U32(ctx, 31, 0x314480u);
    ctx->pc = 0x31447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314478u;
            // 0x31447c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314480u; }
        if (ctx->pc != 0x314480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314480u; }
        if (ctx->pc != 0x314480u) { return; }
    }
    ctx->pc = 0x314480u;
label_314480:
    // 0x314480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x314480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31448c: 0x3e00008  jr          $ra
    ctx->pc = 0x31448Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31448Cu;
            // 0x314490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314494u;
}
