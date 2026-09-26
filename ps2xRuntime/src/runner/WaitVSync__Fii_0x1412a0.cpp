#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WaitVSync__Fii
// Address: 0x1412a0 - 0x141304
void WaitVSync__Fii_0x1412a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    Ps2EeWaitScope __g652EeWaitScope;
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WaitVSync__Fii_0x1412a0");
#endif

    switch (ctx->pc) {
        case 0x1412b8u: goto label_1412b8;
        case 0x1412c0u: goto label_1412c0;
        case 0x1412e4u: goto label_1412e4;
        default: break;
    }

    ctx->pc = 0x1412a0u;

    // 0x1412a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1412a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1412a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1412a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1412a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1412a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1412ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1412acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1412b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1412b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1412b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1412b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1412b8:
    // 0x1412b8: 0xc0504c4  jal         func_141310
    ctx->pc = 0x1412B8u;
    SET_GPR_U32(ctx, 31, 0x1412C0u);
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412C0u; }
        if (ctx->pc != 0x1412C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412C0u; }
        if (ctx->pc != 0x1412C0u) { return; }
    }
    ctx->pc = 0x1412C0u;
label_1412c0:
    // 0x1412c0: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1412c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1412c4: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x1412c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1412c8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1412C8u;
    {
        const bool branch_taken_0x1412c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1412c8) {
            ctx->pc = 0x1412ECu;
            goto label_1412ec;
        }
    }
    ctx->pc = 0x1412D0u;
    // 0x1412d0: 0x8f84801c  lw          $a0, -0x7FE4($gp)
    ctx->pc = 0x1412d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1412d4: 0x1880fff8  blez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1412D4u;
    {
        const bool branch_taken_0x1412d4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1412d4) {
            ctx->pc = 0x1412B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1412b8;
        }
    }
    ctx->pc = 0x1412DCu;
    // 0x1412dc: 0xc043fe4  jal         func_10FF90
    ctx->pc = 0x1412DCu;
    SET_GPR_U32(ctx, 31, 0x1412E4u);
    ctx->pc = 0x10FF90u;
    if (runtime->hasFunction(0x10FF90u)) {
        auto targetFn = runtime->lookupFunction(0x10FF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412E4u; }
        if (ctx->pc != 0x1412E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x10ff90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412E4u; }
        if (ctx->pc != 0x1412E4u) { return; }
    }
    ctx->pc = 0x1412E4u;
label_1412e4:
    // 0x1412e4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1412E4u;
    {
        const bool branch_taken_0x1412e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1412e4) {
            ctx->pc = 0x1412B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1412b8;
        }
    }
    ctx->pc = 0x1412ECu;
label_1412ec:
    // 0x1412ec: 0x0  nop
    ctx->pc = 0x1412ecu;
    // NOP
    // 0x1412f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1412f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1412f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1412f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1412f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1412f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1412fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1412FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1412FCu;
            // 0x141300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141304u;
}
