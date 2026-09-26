#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13CGameDataUsedFv
// Address: 0x197090 - 0x1970b8
void ps2___ct__13CGameDataUsedFv_0x197090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13CGameDataUsedFv_0x197090");
#endif

    switch (ctx->pc) {
        case 0x1970a4u: goto label_1970a4;
        default: break;
    }

    ctx->pc = 0x197090u;

    // 0x197090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x197098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19709c: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19709Cu;
    SET_GPR_U32(ctx, 31, 0x1970A4u);
    ctx->pc = 0x1970A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19709Cu;
            // 0x1970a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970A4u; }
        if (ctx->pc != 0x1970A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970A4u; }
        if (ctx->pc != 0x1970A4u) { return; }
    }
    ctx->pc = 0x1970A4u;
label_1970a4:
    // 0x1970a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1970a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1970a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1970ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1970acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1970b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1970B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1970B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970B0u;
            // 0x1970b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1970B8u;
}
