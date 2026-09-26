#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadCapture__8CGamePadFv
// Address: 0x14b720 - 0x14b760
void LoadCapture__8CGamePadFv_0x14b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadCapture__8CGamePadFv_0x14b720");
#endif

    switch (ctx->pc) {
        case 0x14b734u: goto label_14b734;
        case 0x14b74cu: goto label_14b74c;
        case 0x14b754u: goto label_14b754;
        default: break;
    }

    ctx->pc = 0x14b720u;

    // 0x14b720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b724: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14b724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14b728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b72c: 0xc0521d8  jal         func_148760
    ctx->pc = 0x14B72Cu;
    SET_GPR_U32(ctx, 31, 0x14B734u);
    ctx->pc = 0x14B730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B72Cu;
            // 0x14b730: 0x24842888  addiu       $a0, $a0, 0x2888 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B734u; }
        if (ctx->pc != 0x14B734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B734u; }
        if (ctx->pc != 0x14B734u) { return; }
    }
    ctx->pc = 0x14B734u;
label_14b734:
    // 0x14b734: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14b734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14b738: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x14b738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
    // 0x14b73c: 0x24842890  addiu       $a0, $a0, 0x2890
    ctx->pc = 0x14b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10384));
    // 0x14b740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b744: 0xc0524dc  jal         func_149370
    ctx->pc = 0x14B744u;
    SET_GPR_U32(ctx, 31, 0x14B74Cu);
    ctx->pc = 0x14B748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B744u;
            // 0x14b748: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B74Cu; }
        if (ctx->pc != 0x14B74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B74Cu; }
        if (ctx->pc != 0x14B74Cu) { return; }
    }
    ctx->pc = 0x14B74Cu;
label_14b74c:
    // 0x14b74c: 0xc0521d8  jal         func_148760
    ctx->pc = 0x14B74Cu;
    SET_GPR_U32(ctx, 31, 0x14B754u);
    ctx->pc = 0x14B750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B74Cu;
            // 0x14b750: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B754u; }
        if (ctx->pc != 0x14B754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B754u; }
        if (ctx->pc != 0x14B754u) { return; }
    }
    ctx->pc = 0x14B754u;
label_14b754:
    // 0x14b754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b758: 0x3e00008  jr          $ra
    ctx->pc = 0x14B758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B758u;
            // 0x14b75c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B760u;
}
