#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_PAUSE__FP12RS_STACKDATAi
// Address: 0x1e72a0 - 0x1e72f8
void ps2__CHECK_PAUSE__FP12RS_STACKDATAi_0x1e72a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_PAUSE__FP12RS_STACKDATAi_0x1e72a0");
#endif

    switch (ctx->pc) {
        case 0x1e72d0u: goto label_1e72d0;
        case 0x1e72e0u: goto label_1e72e0;
        default: break;
    }

    ctx->pc = 0x1e72a0u;

    // 0x1e72a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e72a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e72a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e72a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e72a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e72ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e72b0: 0x8f828e6c  lw          $v0, -0x7194($gp)
    ctx->pc = 0x1e72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e72b4: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x1e72b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x1e72b8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E72B8u;
    {
        const bool branch_taken_0x1e72b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E72BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72B8u;
            // 0x1e72bc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72b8) {
            ctx->pc = 0x1E72C8u;
            goto label_1e72c8;
        }
    }
    ctx->pc = 0x1E72C0u;
    // 0x1e72c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E72C0u;
    {
        const bool branch_taken_0x1e72c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E72C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72C0u;
            // 0x1e72c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72c0) {
            ctx->pc = 0x1E72E4u;
            goto label_1e72e4;
        }
    }
    ctx->pc = 0x1E72C8u;
label_1e72c8:
    // 0x1e72c8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E72C8u;
    SET_GPR_U32(ctx, 31, 0x1E72D0u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E72D0u; }
        if (ctx->pc != 0x1E72D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E72D0u; }
        if (ctx->pc != 0x1E72D0u) { return; }
    }
    ctx->pc = 0x1E72D0u;
label_1e72d0:
    // 0x1e72d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e72d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e72d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72d8: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E72D8u;
    SET_GPR_U32(ctx, 31, 0x1E72E0u);
    ctx->pc = 0x1E72DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72D8u;
            // 0x1e72dc: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E72E0u; }
        if (ctx->pc != 0x1E72E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E72E0u; }
        if (ctx->pc != 0x1E72E0u) { return; }
    }
    ctx->pc = 0x1E72E0u;
label_1e72e0:
    // 0x1e72e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e72e4:
    // 0x1e72e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e72e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e72e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e72e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e72ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e72ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e72f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E72F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E72F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72F0u;
            // 0x1e72f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E72F8u;
}
