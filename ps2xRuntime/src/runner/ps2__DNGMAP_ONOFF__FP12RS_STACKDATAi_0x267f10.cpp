#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNGMAP_ONOFF__FP12RS_STACKDATAi
// Address: 0x267f10 - 0x267f3c
void ps2__DNGMAP_ONOFF__FP12RS_STACKDATAi_0x267f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNGMAP_ONOFF__FP12RS_STACKDATAi_0x267f10");
#endif

    switch (ctx->pc) {
        case 0x267f20u: goto label_267f20;
        default: break;
    }

    ctx->pc = 0x267f10u;

    // 0x267f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267f18: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267F18u;
    SET_GPR_U32(ctx, 31, 0x267F20u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F20u; }
        if (ctx->pc != 0x267F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F20u; }
        if (ctx->pc != 0x267F20u) { return; }
    }
    ctx->pc = 0x267F20u;
label_267f20:
    // 0x267f20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x267f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267f24: 0x3c0101ef  lui         $at, 0x1EF
    ctx->pc = 0x267f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)495 << 16));
    // 0x267f28: 0xa0229818  sb          $v0, -0x67E8($at)
    ctx->pc = 0x267f28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294940696), (uint8_t)GPR_U32(ctx, 2));
    // 0x267f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267f34: 0x3e00008  jr          $ra
    ctx->pc = 0x267F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267F34u;
            // 0x267f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267F3Cu;
}
