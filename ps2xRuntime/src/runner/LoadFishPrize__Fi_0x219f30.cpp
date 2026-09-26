#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFishPrize__Fi
// Address: 0x219f30 - 0x219f80
void LoadFishPrize__Fi_0x219f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFishPrize__Fi_0x219f30");
#endif

    switch (ctx->pc) {
        case 0x219f48u: goto label_219f48;
        case 0x219f58u: goto label_219f58;
        case 0x219f60u: goto label_219f60;
        case 0x219f6cu: goto label_219f6c;
        default: break;
    }

    ctx->pc = 0x219f30u;

    // 0x219f30: 0x27bdd7b0  addiu       $sp, $sp, -0x2850
    ctx->pc = 0x219f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956976));
    // 0x219f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f40: 0xc04e640  jal         func_139900
    ctx->pc = 0x219F40u;
    SET_GPR_U32(ctx, 31, 0x219F48u);
    ctx->pc = 0x219F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219F40u;
            // 0x219f44: 0x27a42820  addiu       $a0, $sp, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F48u; }
        if (ctx->pc != 0x219F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F48u; }
        if (ctx->pc != 0x219F48u) { return; }
    }
    ctx->pc = 0x219F48u;
label_219f48:
    // 0x219f48: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x219f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x219f4c: 0x27a42820  addiu       $a0, $sp, 0x2820
    ctx->pc = 0x219f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10272));
    // 0x219f50: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x219F50u;
    SET_GPR_U32(ctx, 31, 0x219F58u);
    ctx->pc = 0x219F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219F50u;
            // 0x219f54: 0x24060280  addiu       $a2, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F58u; }
        if (ctx->pc != 0x219F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F58u; }
        if (ctx->pc != 0x219F58u) { return; }
    }
    ctx->pc = 0x219F58u;
label_219f58:
    // 0x219f58: 0xc04e780  jal         func_139E00
    ctx->pc = 0x219F58u;
    SET_GPR_U32(ctx, 31, 0x219F60u);
    ctx->pc = 0x219F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219F58u;
            // 0x219f5c: 0x27a42820  addiu       $a0, $sp, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F60u; }
        if (ctx->pc != 0x219F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F60u; }
        if (ctx->pc != 0x219F60u) { return; }
    }
    ctx->pc = 0x219F60u;
label_219f60:
    // 0x219f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f64: 0xc0867e0  jal         func_219F80
    ctx->pc = 0x219F64u;
    SET_GPR_U32(ctx, 31, 0x219F6Cu);
    ctx->pc = 0x219F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219F64u;
            // 0x219f68: 0x27a52820  addiu       $a1, $sp, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219F80u;
    if (runtime->hasFunction(0x219F80u)) {
        auto targetFn = runtime->lookupFunction(0x219F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F6Cu; }
        if (ctx->pc != 0x219F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFishPrize__FiP9mgCMemory_0x219f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F6Cu; }
        if (ctx->pc != 0x219F6Cu) { return; }
    }
    ctx->pc = 0x219F6Cu;
label_219f6c:
    // 0x219f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219f70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219f78: 0x3e00008  jr          $ra
    ctx->pc = 0x219F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219F78u;
            // 0x219f7c: 0x27bd2850  addiu       $sp, $sp, 0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219F80u;
}
