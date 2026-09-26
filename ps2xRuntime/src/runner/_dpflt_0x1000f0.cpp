#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dpflt
// Address: 0x1000f0 - 0x100110
void _dpflt_0x1000f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dpflt_0x1000f0");
#endif

    switch (ctx->pc) {
        case 0x100100u: goto label_100100;
        default: break;
    }

    ctx->pc = 0x1000f0u;

    // 0x1000f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1000f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1000f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1000f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1000f8: 0xc0a2148  jal         func_288520
    ctx->pc = 0x1000F8u;
    SET_GPR_U32(ctx, 31, 0x100100u);
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100100u; }
        if (ctx->pc != 0x100100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100100u; }
        if (ctx->pc != 0x100100u) { return; }
    }
    ctx->pc = 0x100100u;
label_100100:
    // 0x100100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100104: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x100104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x100108: 0x3e00008  jr          $ra
    ctx->pc = 0x100108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100108u;
            // 0x10010c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100110u;
}
