#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__9CParticleFv
// Address: 0x281ce0 - 0x281d20
void Init__9CParticleFv_0x281ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9CParticleFv_0x281ce0");
#endif

    switch (ctx->pc) {
        case 0x281cfcu: goto label_281cfc;
        case 0x281d04u: goto label_281d04;
        case 0x281d0cu: goto label_281d0c;
        default: break;
    }

    ctx->pc = 0x281ce0u;

    // 0x281ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281cec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x281cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x281cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cf4: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x281CF4u;
    SET_GPR_U32(ctx, 31, 0x281CFCu);
    ctx->pc = 0x281CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281CF4u;
            // 0x281cf8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CFCu; }
        if (ctx->pc != 0x281CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CFCu; }
        if (ctx->pc != 0x281CFCu) { return; }
    }
    ctx->pc = 0x281CFCu;
label_281cfc:
    // 0x281cfc: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x281CFCu;
    SET_GPR_U32(ctx, 31, 0x281D04u);
    ctx->pc = 0x281D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281CFCu;
            // 0x281d00: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D04u; }
        if (ctx->pc != 0x281D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D04u; }
        if (ctx->pc != 0x281D04u) { return; }
    }
    ctx->pc = 0x281D04u;
label_281d04:
    // 0x281d04: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x281D04u;
    SET_GPR_U32(ctx, 31, 0x281D0Cu);
    ctx->pc = 0x281D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281D04u;
            // 0x281d08: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D0Cu; }
        if (ctx->pc != 0x281D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D0Cu; }
        if (ctx->pc != 0x281D0Cu) { return; }
    }
    ctx->pc = 0x281D0Cu;
label_281d0c:
    // 0x281d0c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x281d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x281d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281d18: 0x3e00008  jr          $ra
    ctx->pc = 0x281D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D18u;
            // 0x281d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281D20u;
}
