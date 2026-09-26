#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CFuncPointFv
// Address: 0x15e1c0 - 0x15e1ec
void ps2___ct__10CFuncPointFv_0x15e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CFuncPointFv_0x15e1c0");
#endif

    switch (ctx->pc) {
        case 0x15e1d8u: goto label_15e1d8;
        default: break;
    }

    ctx->pc = 0x15e1c0u;

    // 0x15e1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15e1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1d0: 0xc04d924  jal         func_136490
    ctx->pc = 0x15E1D0u;
    SET_GPR_U32(ctx, 31, 0x15E1D8u);
    ctx->pc = 0x15E1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E1D0u;
            // 0x15e1d4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E1D8u; }
        if (ctx->pc != 0x15E1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E1D8u; }
        if (ctx->pc != 0x15E1D8u) { return; }
    }
    ctx->pc = 0x15E1D8u;
label_15e1d8:
    // 0x15e1d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15e1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15e1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e1e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x15E1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E1E4u;
            // 0x15e1e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E1ECu;
}
