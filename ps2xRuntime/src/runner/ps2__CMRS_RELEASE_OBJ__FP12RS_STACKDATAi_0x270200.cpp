#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_RELEASE_OBJ__FP12RS_STACKDATAi
// Address: 0x270200 - 0x270224
void ps2__CMRS_RELEASE_OBJ__FP12RS_STACKDATAi_0x270200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_RELEASE_OBJ__FP12RS_STACKDATAi_0x270200");
#endif

    switch (ctx->pc) {
        case 0x270214u: goto label_270214;
        default: break;
    }

    ctx->pc = 0x270200u;

    // 0x270200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x270204: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x270204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x270208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27020c: 0xc096904  jal         func_25A410
    ctx->pc = 0x27020Cu;
    SET_GPR_U32(ctx, 31, 0x270214u);
    ctx->pc = 0x270210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27020Cu;
            // 0x270210: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A410u;
    if (runtime->hasFunction(0x25A410u)) {
        auto targetFn = runtime->lookupFunction(0x25A410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270214u; }
        if (ctx->pc != 0x270214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReleaseSyncObj__12CSceneCmrSeqFv_0x25a410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270214u; }
        if (ctx->pc != 0x270214u) { return; }
    }
    ctx->pc = 0x270214u;
label_270214:
    // 0x270214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27021c: 0x3e00008  jr          $ra
    ctx->pc = 0x27021Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27021Cu;
            // 0x270220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270224u;
}
