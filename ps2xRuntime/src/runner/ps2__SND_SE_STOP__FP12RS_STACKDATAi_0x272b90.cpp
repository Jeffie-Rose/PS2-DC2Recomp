#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_SE_STOP__FP12RS_STACKDATAi
// Address: 0x272b90 - 0x272bd4
void ps2__SND_SE_STOP__FP12RS_STACKDATAi_0x272b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_SE_STOP__FP12RS_STACKDATAi_0x272b90");
#endif

    switch (ctx->pc) {
        case 0x272ba4u: goto label_272ba4;
        case 0x272bb0u: goto label_272bb0;
        case 0x272bc0u: goto label_272bc0;
        default: break;
    }

    ctx->pc = 0x272b90u;

    // 0x272b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272b9c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272B9Cu;
    SET_GPR_U32(ctx, 31, 0x272BA4u);
    ctx->pc = 0x272BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272B9Cu;
            // 0x272ba0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BA4u; }
        if (ctx->pc != 0x272BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BA4u; }
        if (ctx->pc != 0x272BA4u) { return; }
    }
    ctx->pc = 0x272BA4u;
label_272ba4:
    // 0x272ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ba8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272BA8u;
    SET_GPR_U32(ctx, 31, 0x272BB0u);
    ctx->pc = 0x272BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272BA8u;
            // 0x272bac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BB0u; }
        if (ctx->pc != 0x272BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BB0u; }
        if (ctx->pc != 0x272BB0u) { return; }
    }
    ctx->pc = 0x272BB0u;
label_272bb0:
    // 0x272bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bb8: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x272BB8u;
    SET_GPR_U32(ctx, 31, 0x272BC0u);
    ctx->pc = 0x272BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272BB8u;
            // 0x272bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BC0u; }
        if (ctx->pc != 0x272BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272BC0u; }
        if (ctx->pc != 0x272BC0u) { return; }
    }
    ctx->pc = 0x272BC0u;
label_272bc0:
    // 0x272bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x272BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272BCCu;
            // 0x272bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272BD4u;
}
