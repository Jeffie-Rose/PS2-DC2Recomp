#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHit__FP6CCPolyiPfPfPfii
// Address: 0x14de50 - 0x14de90
void CheckHit__FP6CCPolyiPfPfPfii_0x14de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHit__FP6CCPolyiPfPfPfii_0x14de50");
#endif

    switch (ctx->pc) {
        case 0x14de84u: goto label_14de84;
        default: break;
    }

    ctx->pc = 0x14de50u;

    // 0x14de50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14de54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14de58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14de58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14de5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14de5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de60: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x14de60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x14de64: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x14de64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14de68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14de6c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x14de6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de70: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x14de70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x14de74: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x14de74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de78: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x14de78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x14de7c: 0xc0537a4  jal         func_14DE90
    ctx->pc = 0x14DE7Cu;
    SET_GPR_U32(ctx, 31, 0x14DE84u);
    ctx->pc = 0x14DE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE7Cu;
            // 0x14de80: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE90u;
    if (runtime->hasFunction(0x14DE90u)) {
        auto targetFn = runtime->lookupFunction(0x14DE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE84u; }
        if (ctx->pc != 0x14DE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP13CollisionInfoPfPfPfii_0x14de90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE84u; }
        if (ctx->pc != 0x14DE84u) { return; }
    }
    ctx->pc = 0x14DE84u;
label_14de84:
    // 0x14de84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14de84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14de88: 0x3e00008  jr          $ra
    ctx->pc = 0x14DE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE88u;
            // 0x14de8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DE90u;
}
