#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CTRLC_STAY__FP12RS_STACKDATAi
// Address: 0x2790b0 - 0x2790e0
void ps2__CTRLC_STAY__FP12RS_STACKDATAi_0x2790b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CTRLC_STAY__FP12RS_STACKDATAi_0x2790b0");
#endif

    switch (ctx->pc) {
        case 0x2790b0u: goto label_2790b0;
        case 0x2790b4u: goto label_2790b4;
        case 0x2790b8u: goto label_2790b8;
        case 0x2790bcu: goto label_2790bc;
        case 0x2790c0u: goto label_2790c0;
        case 0x2790c4u: goto label_2790c4;
        case 0x2790c8u: goto label_2790c8;
        case 0x2790ccu: goto label_2790cc;
        case 0x2790d0u: goto label_2790d0;
        case 0x2790d4u: goto label_2790d4;
        case 0x2790d8u: goto label_2790d8;
        case 0x2790dcu: goto label_2790dc;
        default: break;
    }

    ctx->pc = 0x2790b0u;

label_2790b0:
    // 0x2790b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2790b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2790b4:
    // 0x2790b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2790b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2790b8:
    // 0x2790b8: 0xc09b8c8  jal         func_26E320
label_2790bc:
    if (ctx->pc == 0x2790BCu) {
        ctx->pc = 0x2790C0u;
        goto label_2790c0;
    }
    ctx->pc = 0x2790B8u;
    SET_GPR_U32(ctx, 31, 0x2790C0u);
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2790C0u; }
        if (ctx->pc != 0x2790C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2790C0u; }
        if (ctx->pc != 0x2790C0u) { return; }
    }
    ctx->pc = 0x2790C0u;
label_2790c0:
    // 0x2790c0: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x2790c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2790c4:
    // 0x2790c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2790c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2790c8:
    // 0x2790c8: 0x320f809  jalr        $t9
label_2790cc:
    if (ctx->pc == 0x2790CCu) {
        ctx->pc = 0x2790CCu;
            // 0x2790cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2790D0u;
        goto label_2790d0;
    }
    ctx->pc = 0x2790C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2790D0u);
        ctx->pc = 0x2790CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2790C8u;
            // 0x2790cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2790D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2790D0u; }
            if (ctx->pc != 0x2790D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2790D0u;
label_2790d0:
    // 0x2790d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2790d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2790d4:
    // 0x2790d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2790d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2790d8:
    // 0x2790d8: 0x3e00008  jr          $ra
label_2790dc:
    if (ctx->pc == 0x2790DCu) {
        ctx->pc = 0x2790DCu;
            // 0x2790dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2790E0u;
        goto label_fallthrough_0x2790d8;
    }
    ctx->pc = 0x2790D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2790DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2790D8u;
            // 0x2790dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2790d8:
    ctx->pc = 0x2790E0u;
}
