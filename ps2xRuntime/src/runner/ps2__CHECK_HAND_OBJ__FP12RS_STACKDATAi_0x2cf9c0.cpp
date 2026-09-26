#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_HAND_OBJ__FP12RS_STACKDATAi
// Address: 0x2cf9c0 - 0x2cf9e8
void ps2__CHECK_HAND_OBJ__FP12RS_STACKDATAi_0x2cf9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_HAND_OBJ__FP12RS_STACKDATAi_0x2cf9c0");
#endif

    switch (ctx->pc) {
        case 0x2cf9d8u: goto label_2cf9d8;
        default: break;
    }

    ctx->pc = 0x2cf9c0u;

    // 0x2cf9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf9c4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf9cc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf9d0: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CF9D0u;
    SET_GPR_U32(ctx, 31, 0x2CF9D8u);
    ctx->pc = 0x2CF9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9D0u;
            // 0x2cf9d4: 0x8445071c  lh          $a1, 0x71C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF9D8u; }
        if (ctx->pc != 0x2CF9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF9D8u; }
        if (ctx->pc != 0x2CF9D8u) { return; }
    }
    ctx->pc = 0x2CF9D8u;
label_2cf9d8:
    // 0x2cf9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF9E0u;
            // 0x2cf9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF9E8u;
}
