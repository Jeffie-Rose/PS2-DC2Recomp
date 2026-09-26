#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopVibration__8CGamePadFv
// Address: 0x14b5a0 - 0x14b5f0
void StopVibration__8CGamePadFv_0x14b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopVibration__8CGamePadFv_0x14b5a0");
#endif

    switch (ctx->pc) {
        case 0x14b5c0u: goto label_14b5c0;
        case 0x14b5d4u: goto label_14b5d4;
        case 0x14b5e0u: goto label_14b5e0;
        default: break;
    }

    ctx->pc = 0x14b5a0u;

    // 0x14b5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b5a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b5b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14b5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5b8: 0xc052d4c  jal         func_14B530
    ctx->pc = 0x14B5B8u;
    SET_GPR_U32(ctx, 31, 0x14B5C0u);
    ctx->pc = 0x14B5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5B8u;
            // 0x14b5bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5C0u; }
        if (ctx->pc != 0x14B5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5C0u; }
        if (ctx->pc != 0x14B5C0u) { return; }
    }
    ctx->pc = 0x14B5C0u;
label_14b5c0:
    // 0x14b5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b5c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5cc: 0xc052d4c  jal         func_14B530
    ctx->pc = 0x14B5CCu;
    SET_GPR_U32(ctx, 31, 0x14B5D4u);
    ctx->pc = 0x14B5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5CCu;
            // 0x14b5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5D4u; }
        if (ctx->pc != 0x14B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5D4u; }
        if (ctx->pc != 0x14B5D4u) { return; }
    }
    ctx->pc = 0x14B5D4u;
label_14b5d4:
    // 0x14b5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5d8: 0xc052b8c  jal         func_14AE30
    ctx->pc = 0x14B5D8u;
    SET_GPR_U32(ctx, 31, 0x14B5E0u);
    ctx->pc = 0x14B5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5D8u;
            // 0x14b5dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AE30u;
    if (runtime->hasFunction(0x14AE30u)) {
        auto targetFn = runtime->lookupFunction(0x14AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5E0u; }
        if (ctx->pc != 0x14B5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__8CGamePadFi_0x14ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5E0u; }
        if (ctx->pc != 0x14B5E0u) { return; }
    }
    ctx->pc = 0x14B5E0u;
label_14b5e0:
    // 0x14b5e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5E8u;
            // 0x14b5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B5F0u;
}
