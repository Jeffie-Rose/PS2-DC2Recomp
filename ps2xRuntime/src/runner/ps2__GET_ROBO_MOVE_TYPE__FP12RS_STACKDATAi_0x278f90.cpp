#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ROBO_MOVE_TYPE__FP12RS_STACKDATAi
// Address: 0x278f90 - 0x278fc8
void ps2__GET_ROBO_MOVE_TYPE__FP12RS_STACKDATAi_0x278f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ROBO_MOVE_TYPE__FP12RS_STACKDATAi_0x278f90");
#endif

    switch (ctx->pc) {
        case 0x278fa8u: goto label_278fa8;
        case 0x278fb4u: goto label_278fb4;
        default: break;
    }

    ctx->pc = 0x278f90u;

    // 0x278f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278fa0: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x278FA0u;
    SET_GPR_U32(ctx, 31, 0x278FA8u);
    ctx->pc = 0x278FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278FA0u;
            // 0x278fa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278FA8u; }
        if (ctx->pc != 0x278FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278FA8u; }
        if (ctx->pc != 0x278FA8u) { return; }
    }
    ctx->pc = 0x278FA8u;
label_278fa8:
    // 0x278fa8: 0x8c4506a8  lw          $a1, 0x6A8($v0)
    ctx->pc = 0x278fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
    // 0x278fac: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278FACu;
    SET_GPR_U32(ctx, 31, 0x278FB4u);
    ctx->pc = 0x278FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278FACu;
            // 0x278fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278FB4u; }
        if (ctx->pc != 0x278FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278FB4u; }
        if (ctx->pc != 0x278FB4u) { return; }
    }
    ctx->pc = 0x278FB4u;
label_278fb4:
    // 0x278fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x278FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278FC0u;
            // 0x278fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278FC8u;
}
