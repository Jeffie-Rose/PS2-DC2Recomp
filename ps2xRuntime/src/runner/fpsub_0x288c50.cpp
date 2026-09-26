#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpsub
// Address: 0x288c50 - 0x288cb4
void fpsub_0x288c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpsub_0x288c50");
#endif

    switch (ctx->pc) {
        case 0x288c70u: goto label_288c70;
        case 0x288c80u: goto label_288c80;
        case 0x288c9cu: goto label_288c9c;
        case 0x288ca4u: goto label_288ca4;
        default: break;
    }

    ctx->pc = 0x288c50u;

    // 0x288c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x288c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x288c54: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x288c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x288c58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x288c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x288c5c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x288c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x288c60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c64: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x288c64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x288c68: 0xc0a224c  jal         func_288930
    ctx->pc = 0x288C68u;
    SET_GPR_U32(ctx, 31, 0x288C70u);
    ctx->pc = 0x288C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C68u;
            // 0x288c6c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C70u; }
        if (ctx->pc != 0x288C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C70u; }
        if (ctx->pc != 0x288C70u) { return; }
    }
    ctx->pc = 0x288C70u;
label_288c70:
    // 0x288c70: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x288c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x288c74: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x288c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x288c78: 0xc0a224c  jal         func_288930
    ctx->pc = 0x288C78u;
    SET_GPR_U32(ctx, 31, 0x288C80u);
    ctx->pc = 0x288C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C78u;
            // 0x288c7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C80u; }
        if (ctx->pc != 0x288C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C80u; }
        if (ctx->pc != 0x288C80u) { return; }
    }
    ctx->pc = 0x288C80u;
label_288c80:
    // 0x288c80: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x288c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x288c84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c88: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x288c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288c8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x288c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x288c94: 0xc0a2270  jal         func_2889C0
    ctx->pc = 0x288C94u;
    SET_GPR_U32(ctx, 31, 0x288C9Cu);
    ctx->pc = 0x288C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C94u;
            // 0x288c98: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2889C0u;
    if (runtime->hasFunction(0x2889C0u)) {
        auto targetFn = runtime->lookupFunction(0x2889C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C9Cu; }
        if (ctx->pc != 0x288C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x2889c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C9Cu; }
        if (ctx->pc != 0x288C9Cu) { return; }
    }
    ctx->pc = 0x288C9Cu;
label_288c9c:
    // 0x288c9c: 0xc0a2208  jal         func_288820
    ctx->pc = 0x288C9Cu;
    SET_GPR_U32(ctx, 31, 0x288CA4u);
    ctx->pc = 0x288CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C9Cu;
            // 0x288ca0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288820u;
    if (runtime->hasFunction(0x288820u)) {
        auto targetFn = runtime->lookupFunction(0x288820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CA4u; }
        if (ctx->pc != 0x288CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x288820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CA4u; }
        if (ctx->pc != 0x288CA4u) { return; }
    }
    ctx->pc = 0x288CA4u;
label_288ca4:
    // 0x288ca4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x288ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288ca8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x288ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288cac: 0x3e00008  jr          $ra
    ctx->pc = 0x288CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288CACu;
            // 0x288cb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288CB4u;
}
