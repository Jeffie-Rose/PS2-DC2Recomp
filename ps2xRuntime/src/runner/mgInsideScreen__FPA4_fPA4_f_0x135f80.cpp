#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInsideScreen__FPA4_fPA4_f
// Address: 0x135f80 - 0x135fa0
void mgInsideScreen__FPA4_fPA4_f_0x135f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInsideScreen__FPA4_fPA4_f_0x135f80");
#endif

    switch (ctx->pc) {
        case 0x135f94u: goto label_135f94;
        default: break;
    }

    ctx->pc = 0x135f80u;

    // 0x135f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x135f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x135f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135f88: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x135f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x135f8c: 0xc04d7e8  jal         func_135FA0
    ctx->pc = 0x135F8Cu;
    SET_GPR_U32(ctx, 31, 0x135F94u);
    ctx->pc = 0x135F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F8Cu;
            // 0x135f90: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FA0u;
    if (runtime->hasFunction(0x135FA0u)) {
        auto targetFn = runtime->lookupFunction(0x135FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F94u; }
        if (ctx->pc != 0x135F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FPA4_fPA4_fPfPf_0x135fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F94u; }
        if (ctx->pc != 0x135F94u) { return; }
    }
    ctx->pc = 0x135F94u;
label_135f94:
    // 0x135f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135f98: 0x3e00008  jr          $ra
    ctx->pc = 0x135F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F98u;
            // 0x135f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135FA0u;
}
