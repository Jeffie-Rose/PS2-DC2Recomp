#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpadd
// Address: 0x288bf8 - 0x288c50
void fpadd_0x288bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpadd_0x288bf8");
#endif

    switch (ctx->pc) {
        case 0x288c18u: goto label_288c18;
        case 0x288c28u: goto label_288c28;
        case 0x288c38u: goto label_288c38;
        case 0x288c40u: goto label_288c40;
        default: break;
    }

    ctx->pc = 0x288bf8u;

    // 0x288bf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x288bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x288bfc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x288bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x288c00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x288c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x288c04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x288c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x288c08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c0c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x288c0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x288c10: 0xc0a224c  jal         func_288930
    ctx->pc = 0x288C10u;
    SET_GPR_U32(ctx, 31, 0x288C18u);
    ctx->pc = 0x288C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C10u;
            // 0x288c14: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C18u; }
        if (ctx->pc != 0x288C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C18u; }
        if (ctx->pc != 0x288C18u) { return; }
    }
    ctx->pc = 0x288C18u;
label_288c18:
    // 0x288c18: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x288c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x288c1c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x288c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x288c20: 0xc0a224c  jal         func_288930
    ctx->pc = 0x288C20u;
    SET_GPR_U32(ctx, 31, 0x288C28u);
    ctx->pc = 0x288C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C20u;
            // 0x288c24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C28u; }
        if (ctx->pc != 0x288C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C28u; }
        if (ctx->pc != 0x288C28u) { return; }
    }
    ctx->pc = 0x288C28u;
label_288c28:
    // 0x288c28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x288c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288c30: 0xc0a2270  jal         func_2889C0
    ctx->pc = 0x288C30u;
    SET_GPR_U32(ctx, 31, 0x288C38u);
    ctx->pc = 0x288C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C30u;
            // 0x288c34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2889C0u;
    if (runtime->hasFunction(0x2889C0u)) {
        auto targetFn = runtime->lookupFunction(0x2889C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C38u; }
        if (ctx->pc != 0x288C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x2889c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C38u; }
        if (ctx->pc != 0x288C38u) { return; }
    }
    ctx->pc = 0x288C38u;
label_288c38:
    // 0x288c38: 0xc0a2208  jal         func_288820
    ctx->pc = 0x288C38u;
    SET_GPR_U32(ctx, 31, 0x288C40u);
    ctx->pc = 0x288C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288C38u;
            // 0x288c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288820u;
    if (runtime->hasFunction(0x288820u)) {
        auto targetFn = runtime->lookupFunction(0x288820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C40u; }
        if (ctx->pc != 0x288C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x288820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288C40u; }
        if (ctx->pc != 0x288C40u) { return; }
    }
    ctx->pc = 0x288C40u;
label_288c40:
    // 0x288c40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x288c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288c44: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x288c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288c48: 0x3e00008  jr          $ra
    ctx->pc = 0x288C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288C48u;
            // 0x288c4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288C50u;
}
