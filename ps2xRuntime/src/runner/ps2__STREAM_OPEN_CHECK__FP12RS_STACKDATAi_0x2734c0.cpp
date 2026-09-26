#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_OPEN_CHECK__FP12RS_STACKDATAi
// Address: 0x2734c0 - 0x2734f8
void ps2__STREAM_OPEN_CHECK__FP12RS_STACKDATAi_0x2734c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_OPEN_CHECK__FP12RS_STACKDATAi_0x2734c0");
#endif

    switch (ctx->pc) {
        case 0x2734d8u: goto label_2734d8;
        case 0x2734e4u: goto label_2734e4;
        default: break;
    }

    ctx->pc = 0x2734c0u;

    // 0x2734c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2734c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2734c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2734c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2734c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2734c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2734cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2734ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734d0: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x2734D0u;
    SET_GPR_U32(ctx, 31, 0x2734D8u);
    ctx->pc = 0x2734D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2734D0u;
            // 0x2734d4: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734D8u; }
        if (ctx->pc != 0x2734D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734D8u; }
        if (ctx->pc != 0x2734D8u) { return; }
    }
    ctx->pc = 0x2734D8u;
label_2734d8:
    // 0x2734d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2734d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734dc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2734DCu;
    SET_GPR_U32(ctx, 31, 0x2734E4u);
    ctx->pc = 0x2734E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2734DCu;
            // 0x2734e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734E4u; }
        if (ctx->pc != 0x2734E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2734E4u; }
        if (ctx->pc != 0x2734E4u) { return; }
    }
    ctx->pc = 0x2734E4u;
label_2734e4:
    // 0x2734e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2734e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2734e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2734e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2734ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2734ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2734f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2734F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2734F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2734F0u;
            // 0x2734f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2734F8u;
}
