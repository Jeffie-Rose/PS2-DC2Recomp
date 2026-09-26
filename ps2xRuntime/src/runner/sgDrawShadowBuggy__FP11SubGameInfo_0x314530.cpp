#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgDrawShadowBuggy__FP11SubGameInfo
// Address: 0x314530 - 0x314584
void sgDrawShadowBuggy__FP11SubGameInfo_0x314530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgDrawShadowBuggy__FP11SubGameInfo_0x314530");
#endif

    switch (ctx->pc) {
        case 0x31454cu: goto label_31454c;
        case 0x314558u: goto label_314558;
        case 0x314564u: goto label_314564;
        case 0x314570u: goto label_314570;
        default: break;
    }

    ctx->pc = 0x314530u;

    // 0x314530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314534: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x314534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x314538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31453c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x314540: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x314540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x314544: 0xc0b24a0  jal         func_2C9280
    ctx->pc = 0x314544u;
    SET_GPR_U32(ctx, 31, 0x31454Cu);
    ctx->pc = 0x314548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314544u;
            // 0x314548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9280u;
    if (runtime->hasFunction(0x2C9280u)) {
        auto targetFn = runtime->lookupFunction(0x2C9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31454Cu; }
        if (ctx->pc != 0x31454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawCharaShadow__6CSceneFi_0x2c9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31454Cu; }
        if (ctx->pc != 0x31454Cu) { return; }
    }
    ctx->pc = 0x31454Cu;
label_31454c:
    // 0x31454c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314550: 0xc0b24a0  jal         func_2C9280
    ctx->pc = 0x314550u;
    SET_GPR_U32(ctx, 31, 0x314558u);
    ctx->pc = 0x314554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314550u;
            // 0x314554: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9280u;
    if (runtime->hasFunction(0x2C9280u)) {
        auto targetFn = runtime->lookupFunction(0x2C9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314558u; }
        if (ctx->pc != 0x314558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawCharaShadow__6CSceneFi_0x2c9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314558u; }
        if (ctx->pc != 0x314558u) { return; }
    }
    ctx->pc = 0x314558u;
label_314558:
    // 0x314558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31455c: 0xc0b24a0  jal         func_2C9280
    ctx->pc = 0x31455Cu;
    SET_GPR_U32(ctx, 31, 0x314564u);
    ctx->pc = 0x314560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31455Cu;
            // 0x314560: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9280u;
    if (runtime->hasFunction(0x2C9280u)) {
        auto targetFn = runtime->lookupFunction(0x2C9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314564u; }
        if (ctx->pc != 0x314564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawCharaShadow__6CSceneFi_0x2c9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314564u; }
        if (ctx->pc != 0x314564u) { return; }
    }
    ctx->pc = 0x314564u;
label_314564:
    // 0x314564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314568: 0xc0b24a0  jal         func_2C9280
    ctx->pc = 0x314568u;
    SET_GPR_U32(ctx, 31, 0x314570u);
    ctx->pc = 0x31456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314568u;
            // 0x31456c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9280u;
    if (runtime->hasFunction(0x2C9280u)) {
        auto targetFn = runtime->lookupFunction(0x2C9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314570u; }
        if (ctx->pc != 0x314570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawCharaShadow__6CSceneFi_0x2c9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314570u; }
        if (ctx->pc != 0x314570u) { return; }
    }
    ctx->pc = 0x314570u;
label_314570:
    // 0x314570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x314570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31457c: 0x3e00008  jr          $ra
    ctx->pc = 0x31457Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31457Cu;
            // 0x314580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314584u;
}
