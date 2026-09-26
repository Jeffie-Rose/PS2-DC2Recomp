#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi
// Address: 0x2e0100 - 0x2e0150
void LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100");
#endif

    switch (ctx->pc) {
        case 0x2e0124u: goto label_2e0124;
        case 0x2e0138u: goto label_2e0138;
        default: break;
    }

    ctx->pc = 0x2e0100u;

    // 0x2e0100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e0104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e0108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e010c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0110: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e0110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0114: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0118: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e0118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e011c: 0xc0b7fcc  jal         func_2DFF30
    ctx->pc = 0x2E011Cu;
    SET_GPR_U32(ctx, 31, 0x2E0124u);
    ctx->pc = 0x2E0120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E011Cu;
            // 0x2e0120: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF30u;
    if (runtime->hasFunction(0x2DFF30u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0124u; }
        if (ctx->pc != 0x2E0124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseNo__16CEffectScriptManFPc_0x2dff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0124u; }
        if (ctx->pc != 0x2E0124u) { return; }
    }
    ctx->pc = 0x2E0124u;
label_2e0124:
    // 0x2e0124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0128: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e0128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e012c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e012cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0130: 0xc0b7fe8  jal         func_2DFFA0
    ctx->pc = 0x2E0130u;
    SET_GPR_U32(ctx, 31, 0x2E0138u);
    ctx->pc = 0x2E0134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0130u;
            // 0x2e0134: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFFA0u;
    if (runtime->hasFunction(0x2DFFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0138u; }
        if (ctx->pc != 0x2E0138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFiP9mgCMemoryi_0x2dffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0138u; }
        if (ctx->pc != 0x2E0138u) { return; }
    }
    ctx->pc = 0x2E0138u;
label_2e0138:
    // 0x2e0138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e0138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e013c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e013cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0148: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E014Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0148u;
            // 0x2e014c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E0150u;
}
