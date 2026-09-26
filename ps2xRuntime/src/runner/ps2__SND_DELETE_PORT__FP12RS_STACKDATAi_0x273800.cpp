#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_DELETE_PORT__FP12RS_STACKDATAi
// Address: 0x273800 - 0x273828
void ps2__SND_DELETE_PORT__FP12RS_STACKDATAi_0x273800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_DELETE_PORT__FP12RS_STACKDATAi_0x273800");
#endif

    switch (ctx->pc) {
        case 0x273810u: goto label_273810;
        case 0x273818u: goto label_273818;
        default: break;
    }

    ctx->pc = 0x273800u;

    // 0x273800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273808: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273808u;
    SET_GPR_U32(ctx, 31, 0x273810u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273810u; }
        if (ctx->pc != 0x273810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273810u; }
        if (ctx->pc != 0x273810u) { return; }
    }
    ctx->pc = 0x273810u;
label_273810:
    // 0x273810: 0xc0637cc  jal         func_18DF30
    ctx->pc = 0x273810u;
    SET_GPR_U32(ctx, 31, 0x273818u);
    ctx->pc = 0x273814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273810u;
            // 0x273814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DF30u;
    if (runtime->hasFunction(0x18DF30u)) {
        auto targetFn = runtime->lookupFunction(0x18DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273818u; }
        if (ctx->pc != 0x273818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndDeletePort__Fi_0x18df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273818u; }
        if (ctx->pc != 0x273818u) { return; }
    }
    ctx->pc = 0x273818u;
label_273818:
    // 0x273818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27381c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273820: 0x3e00008  jr          $ra
    ctx->pc = 0x273820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273820u;
            // 0x273824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273828u;
}
