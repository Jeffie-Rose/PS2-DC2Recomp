#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInitLighting__Fv
// Address: 0x1436c0 - 0x1436e8
void mgInitLighting__Fv_0x1436c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInitLighting__Fv_0x1436c0");
#endif

    switch (ctx->pc) {
        case 0x1436d4u: goto label_1436d4;
        default: break;
    }

    ctx->pc = 0x1436c0u;

    // 0x1436c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1436c4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1436c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1436c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1436c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1436cc: 0xc04e4ac  jal         func_1392B0
    ctx->pc = 0x1436CCu;
    SET_GPR_U32(ctx, 31, 0x1436D4u);
    ctx->pc = 0x1436D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1436CCu;
            // 0x1436d0: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1392B0u;
    if (runtime->hasFunction(0x1392B0u)) {
        auto targetFn = runtime->lookupFunction(0x1392B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436D4u; }
        if (ctx->pc != 0x1436D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLighting__13mgRENDER_INFOFv_0x1392b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1436D4u; }
        if (ctx->pc != 0x1436D4u) { return; }
    }
    ctx->pc = 0x1436D4u;
label_1436d4:
    // 0x1436d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1436d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1436d8: 0xaf838820  sw          $v1, -0x77E0($gp)
    ctx->pc = 0x1436d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 3));
    // 0x1436dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1436dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1436e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1436E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1436E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1436E0u;
            // 0x1436e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1436E8u;
}
