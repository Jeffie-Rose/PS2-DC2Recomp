#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_DRAW_CHAPTER__FP12RS_STACKDATAi
// Address: 0x266730 - 0x266770
void ps2__GOTO_DRAW_CHAPTER__FP12RS_STACKDATAi_0x266730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_DRAW_CHAPTER__FP12RS_STACKDATAi_0x266730");
#endif

    switch (ctx->pc) {
        case 0x266748u: goto label_266748;
        default: break;
    }

    ctx->pc = 0x266730u;

    // 0x266730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266734: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x266734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x266738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26673c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26673cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x266740: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266740u;
    SET_GPR_U32(ctx, 31, 0x266748u);
    ctx->pc = 0x266744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266740u;
            // 0x266744: 0xac22d618  sw          $v0, -0x29E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266748u; }
        if (ctx->pc != 0x266748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266748u; }
        if (ctx->pc != 0x266748u) { return; }
    }
    ctx->pc = 0x266748u;
label_266748:
    // 0x266748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x266748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26674c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x266750: 0xac22d648  sw          $v0, -0x29B8($at)
    ctx->pc = 0x266750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956616), GPR_U32(ctx, 2));
    // 0x266754: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x266754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266758: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x266758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26675c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266760: 0xac23e500  sw          $v1, -0x1B00($at)
    ctx->pc = 0x266760u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 3));
    // 0x266764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266768: 0x3e00008  jr          $ra
    ctx->pc = 0x266768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266768u;
            // 0x26676c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266770u;
}
