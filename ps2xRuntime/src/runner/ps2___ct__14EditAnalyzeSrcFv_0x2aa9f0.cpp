#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14EditAnalyzeSrcFv
// Address: 0x2aa9f0 - 0x2aaa18
void ps2___ct__14EditAnalyzeSrcFv_0x2aa9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14EditAnalyzeSrcFv_0x2aa9f0");
#endif

    switch (ctx->pc) {
        case 0x2aaa04u: goto label_2aaa04;
        default: break;
    }

    ctx->pc = 0x2aa9f0u;

    // 0x2aa9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa9fc: 0xc0aa208  jal         func_2A8820
    ctx->pc = 0x2AA9FCu;
    SET_GPR_U32(ctx, 31, 0x2AAA04u);
    ctx->pc = 0x2AAA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9FCu;
            // 0x2aaa00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8820u;
    if (runtime->hasFunction(0x2A8820u)) {
        auto targetFn = runtime->lookupFunction(0x2A8820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA04u; }
        if (ctx->pc != 0x2AAA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__14EditAnalyzeSrcFv_0x2a8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA04u; }
        if (ctx->pc != 0x2AAA04u) { return; }
    }
    ctx->pc = 0x2AAA04u;
label_2aaa04:
    // 0x2aaa04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aaa04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aaa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aaa0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aaa0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aaa10: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA10u;
            // 0x2aaa14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAA18u;
}
