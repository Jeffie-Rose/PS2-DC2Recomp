#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__12CSceneObjSeqFv
// Address: 0x25c1c0 - 0x25c1f4
void ps2___ct__12CSceneObjSeqFv_0x25c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__12CSceneObjSeqFv_0x25c1c0");
#endif

    switch (ctx->pc) {
        case 0x25c1d8u: goto label_25c1d8;
        case 0x25c1e0u: goto label_25c1e0;
        default: break;
    }

    ctx->pc = 0x25c1c0u;

    // 0x25c1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c1d0: 0xc095ac4  jal         func_256B10
    ctx->pc = 0x25C1D0u;
    SET_GPR_U32(ctx, 31, 0x25C1D8u);
    ctx->pc = 0x25C1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C1D0u;
            // 0x25c1d4: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256B10u;
    if (runtime->hasFunction(0x256B10u)) {
        auto targetFn = runtime->lookupFunction(0x256B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C1D8u; }
        if (ctx->pc != 0x25C1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CCharaPasFv_0x256b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C1D8u; }
        if (ctx->pc != 0x25C1D8u) { return; }
    }
    ctx->pc = 0x25C1D8u;
label_25c1d8:
    // 0x25c1d8: 0xc097080  jal         func_25C200
    ctx->pc = 0x25C1D8u;
    SET_GPR_U32(ctx, 31, 0x25C1E0u);
    ctx->pc = 0x25C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C1D8u;
            // 0x25c1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C200u;
    if (runtime->hasFunction(0x25C200u)) {
        auto targetFn = runtime->lookupFunction(0x25C200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C1E0u; }
        if (ctx->pc != 0x25C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZeroInitialize__12CSceneObjSeqFv_0x25c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C1E0u; }
        if (ctx->pc != 0x25C1E0u) { return; }
    }
    ctx->pc = 0x25C1E0u;
label_25c1e0:
    // 0x25c1e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x25C1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C1ECu;
            // 0x25c1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C1F4u;
}
