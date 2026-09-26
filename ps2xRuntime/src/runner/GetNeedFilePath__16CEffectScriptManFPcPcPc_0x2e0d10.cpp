#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNeedFilePath__16CEffectScriptManFPcPcPc
// Address: 0x2e0d10 - 0x2e0d60
void GetNeedFilePath__16CEffectScriptManFPcPcPc_0x2e0d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNeedFilePath__16CEffectScriptManFPcPcPc_0x2e0d10");
#endif

    switch (ctx->pc) {
        case 0x2e0d34u: goto label_2e0d34;
        case 0x2e0d48u: goto label_2e0d48;
        default: break;
    }

    ctx->pc = 0x2e0d10u;

    // 0x2e0d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0d14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e0d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e0d18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0d20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e0d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0d28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e0d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d2c: 0xc0b7fcc  jal         func_2DFF30
    ctx->pc = 0x2E0D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E0D34u);
    ctx->pc = 0x2E0D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D2Cu;
            // 0x2e0d30: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF30u;
    if (runtime->hasFunction(0x2DFF30u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0D34u; }
        if (ctx->pc != 0x2E0D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseNo__16CEffectScriptManFPc_0x2dff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0D34u; }
        if (ctx->pc != 0x2E0D34u) { return; }
    }
    ctx->pc = 0x2E0D34u;
label_2e0d34:
    // 0x2e0d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e0d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e0d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d40: 0xc0b8318  jal         func_2E0C60
    ctx->pc = 0x2E0D40u;
    SET_GPR_U32(ctx, 31, 0x2E0D48u);
    ctx->pc = 0x2E0D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D40u;
            // 0x2e0d44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C60u;
    if (runtime->hasFunction(0x2E0C60u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0D48u; }
        if (ctx->pc != 0x2E0D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNeedFilePath__16CEffectScriptManFiPcPc_0x2e0c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0D48u; }
        if (ctx->pc != 0x2E0D48u) { return; }
    }
    ctx->pc = 0x2E0D48u;
label_2e0d48:
    // 0x2e0d48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e0d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0D58u;
            // 0x2e0d5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0D60u;
}
