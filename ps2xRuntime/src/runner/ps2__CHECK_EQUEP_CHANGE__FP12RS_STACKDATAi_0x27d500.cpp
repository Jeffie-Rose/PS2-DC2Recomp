#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_EQUEP_CHANGE__FP12RS_STACKDATAi
// Address: 0x27d500 - 0x27d528
void ps2__CHECK_EQUEP_CHANGE__FP12RS_STACKDATAi_0x27d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_EQUEP_CHANGE__FP12RS_STACKDATAi_0x27d500");
#endif

    switch (ctx->pc) {
        case 0x27d510u: goto label_27d510;
        case 0x27d518u: goto label_27d518;
        default: break;
    }

    ctx->pc = 0x27d500u;

    // 0x27d500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d508: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D508u;
    SET_GPR_U32(ctx, 31, 0x27D510u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D510u; }
        if (ctx->pc != 0x27D510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D510u; }
        if (ctx->pc != 0x27D510u) { return; }
    }
    ctx->pc = 0x27D510u;
label_27d510:
    // 0x27d510: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x27D510u;
    SET_GPR_U32(ctx, 31, 0x27D518u);
    ctx->pc = 0x27D514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D510u;
            // 0x27d514: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (runtime->hasFunction(0x19EE70u)) {
        auto targetFn = runtime->lookupFunction(0x19EE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D518u; }
        if (ctx->pc != 0x27D518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEquipChange__Fi_0x19ee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D518u; }
        if (ctx->pc != 0x27D518u) { return; }
    }
    ctx->pc = 0x27D518u;
label_27d518:
    // 0x27d518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d520: 0x3e00008  jr          $ra
    ctx->pc = 0x27D520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D520u;
            // 0x27d524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D528u;
}
