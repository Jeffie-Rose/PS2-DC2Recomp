#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dpfle
// Address: 0x100110 - 0x100134
void _dpfle_0x100110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dpfle_0x100110");
#endif

    switch (ctx->pc) {
        case 0x100120u: goto label_100120;
        default: break;
    }

    ctx->pc = 0x100110u;

    // 0x100110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100118: 0xc0a2148  jal         func_288520
    ctx->pc = 0x100118u;
    SET_GPR_U32(ctx, 31, 0x100120u);
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100120u; }
        if (ctx->pc != 0x100120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100120u; }
        if (ctx->pc != 0x100120u) { return; }
    }
    ctx->pc = 0x100120u;
label_100120:
    // 0x100120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100124: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100128: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10012c: 0x3e00008  jr          $ra
    ctx->pc = 0x10012Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10012Cu;
            // 0x100130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100134u;
}
