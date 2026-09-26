#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ZeroInitialize__12CSceneObjSeqFv
// Address: 0x25c200 - 0x25c214
void ZeroInitialize__12CSceneObjSeqFv_0x25c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ZeroInitialize__12CSceneObjSeqFv_0x25c200");
#endif

    ctx->pc = 0x25c200u;

    // 0x25c200: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25c200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x25c204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25c204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c208: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x25c208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x25c20c: 0x8097088  j           func_25C220
    ctx->pc = 0x25C20Cu;
    ctx->pc = 0x25C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C20Cu;
            // 0x25c210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C220u;
    if (runtime->hasFunction(0x25C220u)) {
        auto targetFn = runtime->lookupFunction(0x25C220u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__12CSceneObjSeqFP12_SEN_OBJ_SEQi_0x25c220(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x25C214u;
}
