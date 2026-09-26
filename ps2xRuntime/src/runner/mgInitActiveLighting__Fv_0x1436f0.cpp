#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInitActiveLighting__Fv
// Address: 0x1436f0 - 0x143718
void mgInitActiveLighting__Fv_0x1436f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInitActiveLighting__Fv_0x1436f0");
#endif

    switch (ctx->pc) {
        case 0x143704u: goto label_143704;
        default: break;
    }

    ctx->pc = 0x1436f0u;

    // 0x1436f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1436f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1436f4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1436f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1436f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1436f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1436fc: 0xc04e4a0  jal         func_139280
    ctx->pc = 0x1436FCu;
    SET_GPR_U32(ctx, 31, 0x143704u);
    ctx->pc = 0x143700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1436FCu;
            // 0x143700: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139280u;
    if (runtime->hasFunction(0x139280u)) {
        auto targetFn = runtime->lookupFunction(0x139280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143704u; }
        if (ctx->pc != 0x143704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitActiveLighting__13mgRENDER_INFOFv_0x139280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143704u; }
        if (ctx->pc != 0x143704u) { return; }
    }
    ctx->pc = 0x143704u;
label_143704:
    // 0x143704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143708: 0xaf838820  sw          $v1, -0x77E0($gp)
    ctx->pc = 0x143708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 3));
    // 0x14370c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14370cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143710: 0x3e00008  jr          $ra
    ctx->pc = 0x143710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143710u;
            // 0x143714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143718u;
}
