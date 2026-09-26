#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_GET_FRAME_STATUS__FP12RS_STACKDATAi
// Address: 0x2753f0 - 0x275444
void ps2__EOH_GET_FRAME_STATUS__FP12RS_STACKDATAi_0x2753f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_GET_FRAME_STATUS__FP12RS_STACKDATAi_0x2753f0");
#endif

    switch (ctx->pc) {
        case 0x275404u: goto label_275404;
        case 0x275414u: goto label_275414;
        case 0x275424u: goto label_275424;
        case 0x275430u: goto label_275430;
        default: break;
    }

    ctx->pc = 0x2753f0u;

    // 0x2753f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2753f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2753f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2753f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2753f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2753f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2753fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2753FCu;
    SET_GPR_U32(ctx, 31, 0x275404u);
    ctx->pc = 0x275400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2753FCu;
            // 0x275400: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275404u; }
        if (ctx->pc != 0x275404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275404u; }
        if (ctx->pc != 0x275404u) { return; }
    }
    ctx->pc = 0x275404u;
label_275404:
    // 0x275404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27540c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27540Cu;
    SET_GPR_U32(ctx, 31, 0x275414u);
    ctx->pc = 0x275410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27540Cu;
            // 0x275410: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275414u; }
        if (ctx->pc != 0x275414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275414u; }
        if (ctx->pc != 0x275414u) { return; }
    }
    ctx->pc = 0x275414u;
label_275414:
    // 0x275414: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275418: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27541c: 0xc097d14  jal         func_25F450
    ctx->pc = 0x27541Cu;
    SET_GPR_U32(ctx, 31, 0x275424u);
    ctx->pc = 0x275420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27541Cu;
            // 0x275420: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (runtime->hasFunction(0x25F450u)) {
        auto targetFn = runtime->lookupFunction(0x25F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275424u; }
        if (ctx->pc != 0x275424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrameShow__10CEohMotherFiPc_0x25f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275424u; }
        if (ctx->pc != 0x275424u) { return; }
    }
    ctx->pc = 0x275424u;
label_275424:
    // 0x275424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275428: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x275428u;
    SET_GPR_U32(ctx, 31, 0x275430u);
    ctx->pc = 0x27542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275428u;
            // 0x27542c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275430u; }
        if (ctx->pc != 0x275430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275430u; }
        if (ctx->pc != 0x275430u) { return; }
    }
    ctx->pc = 0x275430u;
label_275430:
    // 0x275430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27543c: 0x3e00008  jr          $ra
    ctx->pc = 0x27543Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27543Cu;
            // 0x275440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275444u;
}
