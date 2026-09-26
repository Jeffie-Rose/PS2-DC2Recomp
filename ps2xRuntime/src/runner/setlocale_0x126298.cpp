#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: setlocale
// Address: 0x126298 - 0x1262c4
void setlocale_0x126298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setlocale_0x126298");
#endif

    switch (ctx->pc) {
        case 0x1262b8u: goto label_1262b8;
        default: break;
    }

    ctx->pc = 0x126298u;

    // 0x126298: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x126298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12629c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12629cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1262a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1262a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1262a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1262a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262a8: 0x8c643b84  lw          $a0, 0x3B84($v1)
    ctx->pc = 0x1262a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15236)));
    // 0x1262ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1262acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1262b0: 0xc049880  jal         func_126200
    ctx->pc = 0x1262B0u;
    SET_GPR_U32(ctx, 31, 0x1262B8u);
    ctx->pc = 0x1262B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1262B0u;
            // 0x1262b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126200u;
    if (runtime->hasFunction(0x126200u)) {
        auto targetFn = runtime->lookupFunction(0x126200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1262B8u; }
        if (ctx->pc != 0x1262B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setlocale_r_0x126200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1262B8u; }
        if (ctx->pc != 0x1262B8u) { return; }
    }
    ctx->pc = 0x1262B8u;
label_1262b8:
    // 0x1262b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1262b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1262bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1262BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1262C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1262BCu;
            // 0x1262c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1262C4u;
}
