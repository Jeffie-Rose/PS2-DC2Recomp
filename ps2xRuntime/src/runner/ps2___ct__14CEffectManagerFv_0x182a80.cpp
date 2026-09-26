#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14CEffectManagerFv
// Address: 0x182a80 - 0x182ac4
void ps2___ct__14CEffectManagerFv_0x182a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14CEffectManagerFv_0x182a80");
#endif

    switch (ctx->pc) {
        case 0x182aa4u: goto label_182aa4;
        case 0x182aacu: goto label_182aac;
        default: break;
    }

    ctx->pc = 0x182a80u;

    // 0x182a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x182a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a9c: 0xc060ae8  jal         func_182BA0
    ctx->pc = 0x182A9Cu;
    SET_GPR_U32(ctx, 31, 0x182AA4u);
    ctx->pc = 0x182AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A9Cu;
            // 0x182aa0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BA0u;
    if (runtime->hasFunction(0x182BA0u)) {
        auto targetFn = runtime->lookupFunction(0x182BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AA4u; }
        if (ctx->pc != 0x182AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryEffCtrls__14CEffectManagerFP7CEffectiP11CEffectCtrli_0x182ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AA4u; }
        if (ctx->pc != 0x182AA4u) { return; }
    }
    ctx->pc = 0x182AA4u;
label_182aa4:
    // 0x182aa4: 0xc060ab4  jal         func_182AD0
    ctx->pc = 0x182AA4u;
    SET_GPR_U32(ctx, 31, 0x182AACu);
    ctx->pc = 0x182AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182AA4u;
            // 0x182aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AD0u;
    if (runtime->hasFunction(0x182AD0u)) {
        auto targetFn = runtime->lookupFunction(0x182AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AACu; }
        if (ctx->pc != 0x182AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CEffectManagerFv_0x182ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AACu; }
        if (ctx->pc != 0x182AACu) { return; }
    }
    ctx->pc = 0x182AACu;
label_182aac:
    // 0x182aac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x182aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x182ab0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182abc: 0x3e00008  jr          $ra
    ctx->pc = 0x182ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182ABCu;
            // 0x182ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182AC4u;
}
