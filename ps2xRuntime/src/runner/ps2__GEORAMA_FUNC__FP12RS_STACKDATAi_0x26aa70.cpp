#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GEORAMA_FUNC__FP12RS_STACKDATAi
// Address: 0x26aa70 - 0x26aa9c
void ps2__GEORAMA_FUNC__FP12RS_STACKDATAi_0x26aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GEORAMA_FUNC__FP12RS_STACKDATAi_0x26aa70");
#endif

    switch (ctx->pc) {
        case 0x26aa90u: goto label_26aa90;
        default: break;
    }

    ctx->pc = 0x26aa70u;

    // 0x26aa70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26aa74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26aa74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26aa7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa80: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x26aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26aa84: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x26aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26aa88: 0xc0bc2d8  jal         func_2F0B60
    ctx->pc = 0x26AA88u;
    SET_GPR_U32(ctx, 31, 0x26AA90u);
    ctx->pc = 0x26AA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA88u;
            // 0x26aa8c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B60u;
    if (runtime->hasFunction(0x2F0B60u)) {
        auto targetFn = runtime->lookupFunction(0x2F0B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA90u; }
        if (ctx->pc != 0x26AA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GeoramaFunc__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA90u; }
        if (ctx->pc != 0x26AA90u) { return; }
    }
    ctx->pc = 0x26AA90u;
label_26aa90:
    // 0x26aa90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26aa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aa94: 0x3e00008  jr          $ra
    ctx->pc = 0x26AA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA94u;
            // 0x26aa98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AA9Cu;
}
