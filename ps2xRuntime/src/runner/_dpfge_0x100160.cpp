#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dpfge
// Address: 0x100160 - 0x100184
void _dpfge_0x100160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dpfge_0x100160");
#endif

    switch (ctx->pc) {
        case 0x100170u: goto label_100170;
        default: break;
    }

    ctx->pc = 0x100160u;

    // 0x100160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100168: 0xc0a2148  jal         func_288520
    ctx->pc = 0x100168u;
    SET_GPR_U32(ctx, 31, 0x100170u);
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100170u; }
        if (ctx->pc != 0x100170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100170u; }
        if (ctx->pc != 0x100170u) { return; }
    }
    ctx->pc = 0x100170u;
label_100170:
    // 0x100170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100174: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x100174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x100178: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10017c: 0x3e00008  jr          $ra
    ctx->pc = 0x10017Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10017Cu;
            // 0x100180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100184u;
}
