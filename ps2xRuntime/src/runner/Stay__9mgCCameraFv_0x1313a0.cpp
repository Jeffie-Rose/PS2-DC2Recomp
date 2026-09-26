#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Stay__9mgCCameraFv
// Address: 0x1313a0 - 0x1313d8
void Stay__9mgCCameraFv_0x1313a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stay__9mgCCameraFv_0x1313a0");
#endif

    switch (ctx->pc) {
        case 0x1313bcu: goto label_1313bc;
        case 0x1313c8u: goto label_1313c8;
        default: break;
    }

    ctx->pc = 0x1313a0u;

    // 0x1313a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1313a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1313a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1313a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1313a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1313a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1313ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1313acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313b0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1313b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1313b4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1313B4u;
    SET_GPR_U32(ctx, 31, 0x1313BCu);
    ctx->pc = 0x1313B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1313B4u;
            // 0x1313b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1313BCu; }
        if (ctx->pc != 0x1313BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1313BCu; }
        if (ctx->pc != 0x1313BCu) { return; }
    }
    ctx->pc = 0x1313BCu;
label_1313bc:
    // 0x1313bc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1313bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1313c0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1313C0u;
    SET_GPR_U32(ctx, 31, 0x1313C8u);
    ctx->pc = 0x1313C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1313C0u;
            // 0x1313c4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1313C8u; }
        if (ctx->pc != 0x1313C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1313C8u; }
        if (ctx->pc != 0x1313C8u) { return; }
    }
    ctx->pc = 0x1313C8u;
label_1313c8:
    // 0x1313c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1313c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1313cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1313ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1313d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1313D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1313D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1313D0u;
            // 0x1313d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1313D8u;
}
