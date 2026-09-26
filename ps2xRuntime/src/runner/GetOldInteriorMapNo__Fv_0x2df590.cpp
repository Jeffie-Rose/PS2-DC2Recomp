#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOldInteriorMapNo__Fv
// Address: 0x2df590 - 0x2df5c4
void GetOldInteriorMapNo__Fv_0x2df590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOldInteriorMapNo__Fv_0x2df590");
#endif

    switch (ctx->pc) {
        case 0x2df5a0u: goto label_2df5a0;
        default: break;
    }

    ctx->pc = 0x2df590u;

    // 0x2df590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df598: 0xc0b7d7c  jal         func_2DF5F0
    ctx->pc = 0x2DF598u;
    SET_GPR_U32(ctx, 31, 0x2DF5A0u);
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5A0u; }
        if (ctx->pc != 0x2DF5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF5A0u; }
        if (ctx->pc != 0x2DF5A0u) { return; }
    }
    ctx->pc = 0x2DF5A0u;
label_2df5a0:
    // 0x2df5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF5A0u;
    {
        const bool branch_taken_0x2df5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5A0u;
            // 0x2df5a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5a0) {
            ctx->pc = 0x2DF5B0u;
            goto label_2df5b0;
        }
    }
    ctx->pc = 0x2DF5A8u;
    // 0x2df5a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF5A8u;
    {
        const bool branch_taken_0x2df5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5A8u;
            // 0x2df5ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5a8) {
            ctx->pc = 0x2DF5BCu;
            goto label_2df5bc;
        }
    }
    ctx->pc = 0x2DF5B0u;
label_2df5b0:
    // 0x2df5b0: 0x8f829eb8  lw          $v0, -0x6148($gp)
    ctx->pc = 0x2df5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942392)));
    // 0x2df5b4: 0x0  nop
    ctx->pc = 0x2df5b4u;
    // NOP
    // 0x2df5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df5bc:
    // 0x2df5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5BCu;
            // 0x2df5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF5C4u;
}
