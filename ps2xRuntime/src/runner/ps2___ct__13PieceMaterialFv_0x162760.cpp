#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13PieceMaterialFv
// Address: 0x162760 - 0x162788
void ps2___ct__13PieceMaterialFv_0x162760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13PieceMaterialFv_0x162760");
#endif

    switch (ctx->pc) {
        case 0x162774u: goto label_162774;
        default: break;
    }

    ctx->pc = 0x162760u;

    // 0x162760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16276c: 0xc0589e4  jal         func_162790
    ctx->pc = 0x16276Cu;
    SET_GPR_U32(ctx, 31, 0x162774u);
    ctx->pc = 0x162770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16276Cu;
            // 0x162770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162790u;
    if (runtime->hasFunction(0x162790u)) {
        auto targetFn = runtime->lookupFunction(0x162790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162774u; }
        if (ctx->pc != 0x162774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13PieceMaterialFv_0x162790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162774u; }
        if (ctx->pc != 0x162774u) { return; }
    }
    ctx->pc = 0x162774u;
label_162774:
    // 0x162774: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x162774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16277c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16277cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162780: 0x3e00008  jr          $ra
    ctx->pc = 0x162780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162780u;
            // 0x162784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162788u;
}
