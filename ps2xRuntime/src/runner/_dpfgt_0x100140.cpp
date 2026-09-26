#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dpfgt
// Address: 0x100140 - 0x100160
void _dpfgt_0x100140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dpfgt_0x100140");
#endif

    switch (ctx->pc) {
        case 0x100150u: goto label_100150;
        default: break;
    }

    ctx->pc = 0x100140u;

    // 0x100140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100148: 0xc0a2148  jal         func_288520
    ctx->pc = 0x100148u;
    SET_GPR_U32(ctx, 31, 0x100150u);
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100150u; }
        if (ctx->pc != 0x100150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100150u; }
        if (ctx->pc != 0x100150u) { return; }
    }
    ctx->pc = 0x100150u;
label_100150:
    // 0x100150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100154: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100158: 0x3e00008  jr          $ra
    ctx->pc = 0x100158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10015Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100158u;
            // 0x10015c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100160u;
}
