#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DMG__FP12RS_STACKDATAi
// Address: 0x1e32c0 - 0x1e32e4
void ps2__SET_DMG__FP12RS_STACKDATAi_0x1e32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DMG__FP12RS_STACKDATAi_0x1e32c0");
#endif

    switch (ctx->pc) {
        case 0x1e32d4u: goto label_1e32d4;
        default: break;
    }

    ctx->pc = 0x1e32c0u;

    // 0x1e32c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e32c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1e32c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e32c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e32cc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E32CCu;
    SET_GPR_U32(ctx, 31, 0x1E32D4u);
    ctx->pc = 0x1E32D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32CCu;
            // 0x1e32d0: 0x24848020  addiu       $a0, $a0, -0x7FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E32D4u; }
        if (ctx->pc != 0x1E32D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E32D4u; }
        if (ctx->pc != 0x1E32D4u) { return; }
    }
    ctx->pc = 0x1E32D4u;
label_1e32d4:
    // 0x1e32d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e32d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e32d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e32dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32DCu;
            // 0x1e32e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E32E4u;
}
