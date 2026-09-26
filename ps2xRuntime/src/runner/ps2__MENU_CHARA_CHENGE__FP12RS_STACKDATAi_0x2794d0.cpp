#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_CHARA_CHENGE__FP12RS_STACKDATAi
// Address: 0x2794d0 - 0x279508
void ps2__MENU_CHARA_CHENGE__FP12RS_STACKDATAi_0x2794d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_CHARA_CHENGE__FP12RS_STACKDATAi_0x2794d0");
#endif

    switch (ctx->pc) {
        case 0x2794e0u: goto label_2794e0;
        default: break;
    }

    ctx->pc = 0x2794d0u;

    // 0x2794d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2794d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2794d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2794d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2794d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2794D8u;
    SET_GPR_U32(ctx, 31, 0x2794E0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2794E0u; }
        if (ctx->pc != 0x2794E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2794E0u; }
        if (ctx->pc != 0x2794E0u) { return; }
    }
    ctx->pc = 0x2794E0u;
label_2794e0:
    // 0x2794e0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2794e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2794e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2794e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2794e8: 0xac22d618  sw          $v0, -0x29E8($at)
    ctx->pc = 0x2794e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
    // 0x2794ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2794ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2794f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2794f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2794f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2794f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2794f8: 0xac23e500  sw          $v1, -0x1B00($at)
    ctx->pc = 0x2794f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 3));
    // 0x2794fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2794fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279500: 0x3e00008  jr          $ra
    ctx->pc = 0x279500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279500u;
            // 0x279504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279508u;
}
