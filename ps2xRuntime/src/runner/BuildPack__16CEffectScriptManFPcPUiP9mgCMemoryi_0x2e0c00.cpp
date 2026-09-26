#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi
// Address: 0x2e0c00 - 0x2e0c60
void BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00");
#endif

    switch (ctx->pc) {
        case 0x2e0c2cu: goto label_2e0c2c;
        case 0x2e0c44u: goto label_2e0c44;
        default: break;
    }

    ctx->pc = 0x2e0c00u;

    // 0x2e0c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e0c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e0c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e0c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0c10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e0c10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0c18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e0c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0c20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e0c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c24: 0xc0b7fcc  jal         func_2DFF30
    ctx->pc = 0x2E0C24u;
    SET_GPR_U32(ctx, 31, 0x2E0C2Cu);
    ctx->pc = 0x2E0C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C24u;
            // 0x2e0c28: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF30u;
    if (runtime->hasFunction(0x2DFF30u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C2Cu; }
        if (ctx->pc != 0x2E0C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseNo__16CEffectScriptManFPc_0x2dff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C2Cu; }
        if (ctx->pc != 0x2E0C2Cu) { return; }
    }
    ctx->pc = 0x2E0C2Cu;
label_2e0c2c:
    // 0x2e0c2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e0c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e0c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c38: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2e0c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c3c: 0xc0b82b8  jal         func_2E0AE0
    ctx->pc = 0x2E0C3Cu;
    SET_GPR_U32(ctx, 31, 0x2E0C44u);
    ctx->pc = 0x2E0C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C3Cu;
            // 0x2e0c40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0AE0u;
    if (runtime->hasFunction(0x2E0AE0u)) {
        auto targetFn = runtime->lookupFunction(0x2E0AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C44u; }
        if (ctx->pc != 0x2E0C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFiPUiP9mgCMemoryi_0x2e0ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0C44u; }
        if (ctx->pc != 0x2E0C44u) { return; }
    }
    ctx->pc = 0x2E0C44u;
label_2e0c44:
    // 0x2e0c44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e0c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0c48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0C58u;
            // 0x2e0c5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0C60u;
}
