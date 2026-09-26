#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CChillAfterHitFv
// Address: 0x1be6f0 - 0x1be734
void Initialize__14CChillAfterHitFv_0x1be6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CChillAfterHitFv_0x1be6f0");
#endif

    switch (ctx->pc) {
        case 0x1be71cu: goto label_1be71c;
        case 0x1be724u: goto label_1be724;
        default: break;
    }

    ctx->pc = 0x1be6f0u;

    // 0x1be6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be6f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be6fc: 0x24060780  addiu       $a2, $zero, 0x780
    ctx->pc = 0x1be6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    // 0x1be700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be704: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1be708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be70c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1be70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1be710: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1be710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1be714: 0xc049c86  jal         func_127218
    ctx->pc = 0x1BE714u;
    SET_GPR_U32(ctx, 31, 0x1BE71Cu);
    ctx->pc = 0x1BE718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE714u;
            // 0x1be718: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE71Cu; }
        if (ctx->pc != 0x1BE71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE71Cu; }
        if (ctx->pc != 0x1BE71Cu) { return; }
    }
    ctx->pc = 0x1BE71Cu;
label_1be71c:
    // 0x1be71c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1BE71Cu;
    SET_GPR_U32(ctx, 31, 0x1BE724u);
    ctx->pc = 0x1BE720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE71Cu;
            // 0x1be720: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE724u; }
        if (ctx->pc != 0x1BE724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE724u; }
        if (ctx->pc != 0x1BE724u) { return; }
    }
    ctx->pc = 0x1BE724u;
label_1be724:
    // 0x1be724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be72c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE72Cu;
            // 0x1be730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE734u;
}
