#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_LOCAL_FLAG__FP12RS_STACKDATAi
// Address: 0x264180 - 0x2641c0
void ps2__SET_LOCAL_FLAG__FP12RS_STACKDATAi_0x264180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_LOCAL_FLAG__FP12RS_STACKDATAi_0x264180");
#endif

    switch (ctx->pc) {
        case 0x264194u: goto label_264194;
        case 0x2641a0u: goto label_2641a0;
        case 0x2641acu: goto label_2641ac;
        default: break;
    }

    ctx->pc = 0x264180u;

    // 0x264180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26418c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26418Cu;
    SET_GPR_U32(ctx, 31, 0x264194u);
    ctx->pc = 0x264190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26418Cu;
            // 0x264190: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264194u; }
        if (ctx->pc != 0x264194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264194u; }
        if (ctx->pc != 0x264194u) { return; }
    }
    ctx->pc = 0x264194u;
label_264194:
    // 0x264194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264198: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264198u;
    SET_GPR_U32(ctx, 31, 0x2641A0u);
    ctx->pc = 0x26419Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264198u;
            // 0x26419c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641A0u; }
        if (ctx->pc != 0x2641A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641A0u; }
        if (ctx->pc != 0x2641A0u) { return; }
    }
    ctx->pc = 0x2641A0u;
label_2641a0:
    // 0x2641a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2641a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641a4: 0xc098410  jal         func_261040
    ctx->pc = 0x2641A4u;
    SET_GPR_U32(ctx, 31, 0x2641ACu);
    ctx->pc = 0x2641A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2641A4u;
            // 0x2641a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261040u;
    if (runtime->hasFunction(0x261040u)) {
        auto targetFn = runtime->lookupFunction(0x261040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641ACu; }
        if (ctx->pc != 0x2641ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetLocalFlag__Fii_0x261040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641ACu; }
        if (ctx->pc != 0x2641ACu) { return; }
    }
    ctx->pc = 0x2641ACu;
label_2641ac:
    // 0x2641ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2641acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2641b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2641b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2641b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2641b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2641B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2641BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2641B8u;
            // 0x2641bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2641C0u;
}
