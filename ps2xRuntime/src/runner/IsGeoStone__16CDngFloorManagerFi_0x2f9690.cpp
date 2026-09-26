#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsGeoStone__16CDngFloorManagerFi
// Address: 0x2f9690 - 0x2f96c0
void IsGeoStone__16CDngFloorManagerFi_0x2f9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsGeoStone__16CDngFloorManagerFi_0x2f9690");
#endif

    switch (ctx->pc) {
        case 0x2f96a0u: goto label_2f96a0;
        default: break;
    }

    ctx->pc = 0x2f9690u;

    // 0x2f9690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9698: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F9698u;
    SET_GPR_U32(ctx, 31, 0x2F96A0u);
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96A0u; }
        if (ctx->pc != 0x2F96A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96A0u; }
        if (ctx->pc != 0x2F96A0u) { return; }
    }
    ctx->pc = 0x2F96A0u;
label_2f96a0:
    // 0x2f96a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F96A0u;
    {
        const bool branch_taken_0x2f96a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f96a0) {
            ctx->pc = 0x2F96B0u;
            goto label_2f96b0;
        }
    }
    ctx->pc = 0x2F96A8u;
    // 0x2f96a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F96A8u;
    {
        const bool branch_taken_0x2f96a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96A8u;
            // 0x2f96ac: 0x80420016  lb          $v0, 0x16($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96a8) {
            ctx->pc = 0x2F96B4u;
            goto label_2f96b4;
        }
    }
    ctx->pc = 0x2F96B0u;
label_2f96b0:
    // 0x2f96b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f96b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f96b4:
    // 0x2f96b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f96b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f96b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F96B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F96BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96B8u;
            // 0x2f96bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F96C0u;
}
