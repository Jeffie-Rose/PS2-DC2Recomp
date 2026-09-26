#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNGMAP_MOVE_PIECE__FP12RS_STACKDATAi
// Address: 0x267ee0 - 0x267f10
void ps2__DNGMAP_MOVE_PIECE__FP12RS_STACKDATAi_0x267ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNGMAP_MOVE_PIECE__FP12RS_STACKDATAi_0x267ee0");
#endif

    switch (ctx->pc) {
        case 0x267ef0u: goto label_267ef0;
        case 0x267f00u: goto label_267f00;
        default: break;
    }

    ctx->pc = 0x267ee0u;

    // 0x267ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267ee8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267EE8u;
    SET_GPR_U32(ctx, 31, 0x267EF0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EF0u; }
        if (ctx->pc != 0x267EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EF0u; }
        if (ctx->pc != 0x267EF0u) { return; }
    }
    ctx->pc = 0x267EF0u;
label_267ef0:
    // 0x267ef0: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x267ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x267ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ef8: 0xc07ba10  jal         func_1EE840
    ctx->pc = 0x267EF8u;
    SET_GPR_U32(ctx, 31, 0x267F00u);
    ctx->pc = 0x267EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267EF8u;
            // 0x267efc: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE840u;
    if (runtime->hasFunction(0x1EE840u)) {
        auto targetFn = runtime->lookupFunction(0x1EE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F00u; }
        if (ctx->pc != 0x267F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetKomaMove__11CDngFreeMapFi_0x1ee840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F00u; }
        if (ctx->pc != 0x267F00u) { return; }
    }
    ctx->pc = 0x267F00u;
label_267f00:
    // 0x267f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267f08: 0x3e00008  jr          $ra
    ctx->pc = 0x267F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267F08u;
            // 0x267f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267F10u;
}
