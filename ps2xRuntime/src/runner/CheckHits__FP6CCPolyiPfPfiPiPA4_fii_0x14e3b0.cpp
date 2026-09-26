#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHits__FP6CCPolyiPfPfiPiPA4_fii
// Address: 0x14e3b0 - 0x14e3f8
void CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0");
#endif

    switch (ctx->pc) {
        case 0x14e3ecu: goto label_14e3ec;
        default: break;
    }

    ctx->pc = 0x14e3b0u;

    // 0x14e3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e3b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14e3bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14e3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3c0: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x14e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x14e3c4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x14e3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e3cc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x14e3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3d0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x14e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x14e3d4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x14e3d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3d8: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x14e3d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3dc: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x14e3dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3e0: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x14e3e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e3e4: 0xc053900  jal         func_14E400
    ctx->pc = 0x14E3E4u;
    SET_GPR_U32(ctx, 31, 0x14E3ECu);
    ctx->pc = 0x14E3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3E4u;
            // 0x14e3e8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E400u;
    if (runtime->hasFunction(0x14E400u)) {
        auto targetFn = runtime->lookupFunction(0x14E400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E3ECu; }
        if (ctx->pc != 0x14E3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP13CollisionInfoPfPfiPiPA4_fii_0x14e400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E3ECu; }
        if (ctx->pc != 0x14E3ECu) { return; }
    }
    ctx->pc = 0x14E3ECu;
label_14e3ec:
    // 0x14e3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3F0u;
            // 0x14e3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E3F8u;
}
