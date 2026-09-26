#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15CCameraDrawInfoFv
// Address: 0x162f10 - 0x162f38
void ps2___ct__15CCameraDrawInfoFv_0x162f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15CCameraDrawInfoFv_0x162f10");
#endif

    switch (ctx->pc) {
        case 0x162f24u: goto label_162f24;
        default: break;
    }

    ctx->pc = 0x162f10u;

    // 0x162f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162f1c: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x162F1Cu;
    SET_GPR_U32(ctx, 31, 0x162F24u);
    ctx->pc = 0x162F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162F1Cu;
            // 0x162f20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162F40u;
    if (runtime->hasFunction(0x162F40u)) {
        auto targetFn = runtime->lookupFunction(0x162F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162F24u; }
        if (ctx->pc != 0x162F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CCameraDrawInfoFv_0x162f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162F24u; }
        if (ctx->pc != 0x162F24u) { return; }
    }
    ctx->pc = 0x162F24u;
label_162f24:
    // 0x162f24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x162f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162f30: 0x3e00008  jr          $ra
    ctx->pc = 0x162F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F30u;
            // 0x162f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162F38u;
}
