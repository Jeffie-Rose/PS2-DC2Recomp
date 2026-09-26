#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11CEffectCtrlFv
// Address: 0x180130 - 0x180158
void ps2___ct__11CEffectCtrlFv_0x180130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11CEffectCtrlFv_0x180130");
#endif

    switch (ctx->pc) {
        case 0x180144u: goto label_180144;
        default: break;
    }

    ctx->pc = 0x180130u;

    // 0x180130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18013c: 0xc060398  jal         func_180E60
    ctx->pc = 0x18013Cu;
    SET_GPR_U32(ctx, 31, 0x180144u);
    ctx->pc = 0x180140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18013Cu;
            // 0x180140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E60u;
    if (runtime->hasFunction(0x180E60u)) {
        auto targetFn = runtime->lookupFunction(0x180E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180144u; }
        if (ctx->pc != 0x180144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CEffectCtrlFv_0x180e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180144u; }
        if (ctx->pc != 0x180144u) { return; }
    }
    ctx->pc = 0x180144u;
label_180144:
    // 0x180144: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18014c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18014cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180150: 0x3e00008  jr          $ra
    ctx->pc = 0x180150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180150u;
            // 0x180154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180158u;
}
