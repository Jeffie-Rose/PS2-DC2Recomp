#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgEndPacket__FP14mgCDrawManager
// Address: 0x142f10 - 0x142f38
void mgEndPacket__FP14mgCDrawManager_0x142f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgEndPacket__FP14mgCDrawManager_0x142f10");
#endif

    switch (ctx->pc) {
        case 0x142f24u: goto label_142f24;
        case 0x142f2cu: goto label_142f2c;
        default: break;
    }

    ctx->pc = 0x142f10u;

    // 0x142f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142f18: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x142f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x142f1c: 0xc041b16  jal         func_106C58
    ctx->pc = 0x142F1Cu;
    SET_GPR_U32(ctx, 31, 0x142F24u);
    ctx->pc = 0x142F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142F1Cu;
            // 0x142f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106C58u;
    if (runtime->hasFunction(0x106C58u)) {
        auto targetFn = runtime->lookupFunction(0x106C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F24u; }
        if (ctx->pc != 0x142F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkEnd_0x106c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F24u; }
        if (ctx->pc != 0x142F24u) { return; }
    }
    ctx->pc = 0x142F24u;
label_142f24:
    // 0x142f24: 0xc041ace  jal         func_106B38
    ctx->pc = 0x142F24u;
    SET_GPR_U32(ctx, 31, 0x142F2Cu);
    ctx->pc = 0x142F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142F24u;
            // 0x142f28: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F2Cu; }
        if (ctx->pc != 0x142F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F2Cu; }
        if (ctx->pc != 0x142F2Cu) { return; }
    }
    ctx->pc = 0x142F2Cu;
label_142f2c:
    // 0x142f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142f30: 0x3e00008  jr          $ra
    ctx->pc = 0x142F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142F30u;
            // 0x142f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142F38u;
}
