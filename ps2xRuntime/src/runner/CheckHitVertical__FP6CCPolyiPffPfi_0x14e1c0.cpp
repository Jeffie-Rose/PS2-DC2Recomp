#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHitVertical__FP6CCPolyiPffPfi
// Address: 0x14e1c0 - 0x14e1f8
void CheckHitVertical__FP6CCPolyiPffPfi_0x14e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHitVertical__FP6CCPolyiPffPfi_0x14e1c0");
#endif

    switch (ctx->pc) {
        case 0x14e1ecu: goto label_14e1ec;
        default: break;
    }

    ctx->pc = 0x14e1c0u;

    // 0x14e1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e1c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14e1cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14e1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1d0: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x14e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x14e1d4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x14e1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e1dc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x14e1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x14e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x14e1e4: 0xc053880  jal         func_14E200
    ctx->pc = 0x14E1E4u;
    SET_GPR_U32(ctx, 31, 0x14E1ECu);
    ctx->pc = 0x14E1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1E4u;
            // 0x14e1e8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E200u;
    if (runtime->hasFunction(0x14E200u)) {
        auto targetFn = runtime->lookupFunction(0x14E200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1ECu; }
        if (ctx->pc != 0x14E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitVertical__FP13CollisionInfoPffPfi_0x14e200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E1ECu; }
        if (ctx->pc != 0x14E1ECu) { return; }
    }
    ctx->pc = 0x14E1ECu;
label_14e1ec:
    // 0x14e1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1F0u;
            // 0x14e1f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E1F8u;
}
