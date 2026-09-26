#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mcDelayThread
// Address: 0x122da0 - 0x122de4
void mcDelayThread_0x122da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mcDelayThread_0x122da0");
#endif

    switch (ctx->pc) {
        case 0x122dc0u: goto label_122dc0;
        case 0x122dd0u: goto label_122dd0;
        default: break;
    }

    ctx->pc = 0x122da0u;

    // 0x122da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122da8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x122da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x122dac: 0x3c100012  lui         $s0, 0x12
    ctx->pc = 0x122dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)18 << 16));
    // 0x122db0: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x122db0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x122db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x122db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x122db8: 0xc043ff4  jal         func_10FFD0
    ctx->pc = 0x122DB8u;
    SET_GPR_U32(ctx, 31, 0x122DC0u);
    ctx->pc = 0x122DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DB8u;
            // 0x122dbc: 0x26102d78  addiu       $s0, $s0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FFD0u;
    if (runtime->hasFunction(0x10FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x10FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DC0u; }
        if (ctx->pc != 0x122DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x10ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DC0u; }
        if (ctx->pc != 0x122DC0u) { return; }
    }
    ctx->pc = 0x122DC0u;
label_122dc0:
    // 0x122dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dc8: 0xc043f98  jal         func_10FE60
    ctx->pc = 0x122DC8u;
    SET_GPR_U32(ctx, 31, 0x122DD0u);
    ctx->pc = 0x122DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DC8u;
            // 0x122dcc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FE60u;
    if (runtime->hasFunction(0x10FE60u)) {
        auto targetFn = runtime->lookupFunction(0x10FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DD0u; }
        if (ctx->pc != 0x122DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlarm_0x10fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DD0u; }
        if (ctx->pc != 0x122DD0u) { return; }
    }
    ctx->pc = 0x122DD0u;
label_122dd0:
    // 0x122dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x122dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122dd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x122dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122ddc: 0x8044000  j           func_110000
    ctx->pc = 0x122DDCu;
    ctx->pc = 0x122DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DDCu;
            // 0x122de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110000u;
    if (runtime->hasFunction(0x110000u)) {
        auto targetFn = runtime->lookupFunction(0x110000u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SleepThread_0x110000(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x122DE4u;
}
