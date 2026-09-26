#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ALPHA__FP12RS_STACKDATAi
// Address: 0x1e0c10 - 0x1e0c38
void ps2__SET_ALPHA__FP12RS_STACKDATAi_0x1e0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ALPHA__FP12RS_STACKDATAi_0x1e0c10");
#endif

    switch (ctx->pc) {
        case 0x1e0c20u: goto label_1e0c20;
        default: break;
    }

    ctx->pc = 0x1e0c10u;

    // 0x1e0c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0c18: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0C18u;
    SET_GPR_U32(ctx, 31, 0x1E0C20u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C20u; }
        if (ctx->pc != 0x1E0C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C20u; }
        if (ctx->pc != 0x1E0C20u) { return; }
    }
    ctx->pc = 0x1E0C20u;
label_1e0c20:
    // 0x1e0c20: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e0c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0c28: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1e0c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x1e0c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C30u;
            // 0x1e0c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0C38u;
}
