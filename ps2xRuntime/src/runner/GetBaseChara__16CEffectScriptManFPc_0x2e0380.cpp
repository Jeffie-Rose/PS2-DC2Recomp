#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBaseChara__16CEffectScriptManFPc
// Address: 0x2e0380 - 0x2e03b0
void GetBaseChara__16CEffectScriptManFPc_0x2e0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBaseChara__16CEffectScriptManFPc_0x2e0380");
#endif

    switch (ctx->pc) {
        case 0x2e0394u: goto label_2e0394;
        case 0x2e03a0u: goto label_2e03a0;
        default: break;
    }

    ctx->pc = 0x2e0380u;

    // 0x2e0380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e038c: 0xc0b7fcc  jal         func_2DFF30
    ctx->pc = 0x2E038Cu;
    SET_GPR_U32(ctx, 31, 0x2E0394u);
    ctx->pc = 0x2E0390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E038Cu;
            // 0x2e0390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF30u;
    if (runtime->hasFunction(0x2DFF30u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0394u; }
        if (ctx->pc != 0x2E0394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseNo__16CEffectScriptManFPc_0x2dff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0394u; }
        if (ctx->pc != 0x2E0394u) { return; }
    }
    ctx->pc = 0x2E0394u;
label_2e0394:
    // 0x2e0394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0398: 0xc0b80ac  jal         func_2E02B0
    ctx->pc = 0x2E0398u;
    SET_GPR_U32(ctx, 31, 0x2E03A0u);
    ctx->pc = 0x2E039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0398u;
            // 0x2e039c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E02B0u;
    if (runtime->hasFunction(0x2E02B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E03A0u; }
        if (ctx->pc != 0x2E03A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBaseChara__16CEffectScriptManFi_0x2e02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E03A0u; }
        if (ctx->pc != 0x2E03A0u) { return; }
    }
    ctx->pc = 0x2E03A0u;
label_2e03a0:
    // 0x2e03a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e03a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e03a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e03a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e03a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E03A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E03ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E03A8u;
            // 0x2e03ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E03B0u;
}
