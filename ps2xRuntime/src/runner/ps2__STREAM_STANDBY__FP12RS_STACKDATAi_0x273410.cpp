#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_STANDBY__FP12RS_STACKDATAi
// Address: 0x273410 - 0x27343c
void ps2__STREAM_STANDBY__FP12RS_STACKDATAi_0x273410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_STANDBY__FP12RS_STACKDATAi_0x273410");
#endif

    switch (ctx->pc) {
        case 0x273420u: goto label_273420;
        case 0x27342cu: goto label_27342c;
        default: break;
    }

    ctx->pc = 0x273410u;

    // 0x273410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273418: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273418u;
    SET_GPR_U32(ctx, 31, 0x273420u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273420u; }
        if (ctx->pc != 0x273420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273420u; }
        if (ctx->pc != 0x273420u) { return; }
    }
    ctx->pc = 0x273420u;
label_273420:
    // 0x273420: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x273420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x273424: 0xc062c3c  jal         func_18B0F0
    ctx->pc = 0x273424u;
    SET_GPR_U32(ctx, 31, 0x27342Cu);
    ctx->pc = 0x273428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273424u;
            // 0x273428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0F0u;
    if (runtime->hasFunction(0x18B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27342Cu; }
        if (ctx->pc != 0x27342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamStandBy__6CSoundFi_0x18b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27342Cu; }
        if (ctx->pc != 0x27342Cu) { return; }
    }
    ctx->pc = 0x27342Cu;
label_27342c:
    // 0x27342c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27342cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273434: 0x3e00008  jr          $ra
    ctx->pc = 0x273434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273434u;
            // 0x273438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27343Cu;
}
