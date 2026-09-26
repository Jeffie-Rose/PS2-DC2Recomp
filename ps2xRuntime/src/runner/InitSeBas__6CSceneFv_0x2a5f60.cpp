#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSeBas__6CSceneFv
// Address: 0x2a5f60 - 0x2a5fd4
void InitSeBas__6CSceneFv_0x2a5f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSeBas__6CSceneFv_0x2a5f60");
#endif

    switch (ctx->pc) {
        case 0x2a5f78u: goto label_2a5f78;
        case 0x2a5facu: goto label_2a5fac;
        case 0x2a5fb4u: goto label_2a5fb4;
        case 0x2a5fbcu: goto label_2a5fbc;
        case 0x2a5fc4u: goto label_2a5fc4;
        default: break;
    }

    ctx->pc = 0x2a5f60u;

    // 0x2a5f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f70: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x2A5F70u;
    SET_GPR_U32(ctx, 31, 0x2A5F78u);
    ctx->pc = 0x2A5F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F70u;
            // 0x2a5f74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F78u; }
        if (ctx->pc != 0x2A5F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F78u; }
        if (ctx->pc != 0x2A5F78u) { return; }
    }
    ctx->pc = 0x2A5F78u;
label_2a5f78:
    // 0x2a5f78: 0x3401c4a0  ori         $at, $zero, 0xC4A0
    ctx->pc = 0x2a5f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50336);
    // 0x2a5f7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5f80: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2a5f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5f84: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2a5f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a5f88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5f8c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5f90: 0xac22a498  sw          $v0, -0x5B68($at)
    ctx->pc = 0x2a5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943896), GPR_U32(ctx, 2));
    // 0x2a5f94: 0x3401a4a0  ori         $at, $zero, 0xA4A0
    ctx->pc = 0x2a5f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42144);
    // 0x2a5f98: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2a5f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5f9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5fa0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5fa4: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A5FA4u;
    SET_GPR_U32(ctx, 31, 0x2A5FACu);
    ctx->pc = 0x2A5FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FA4u;
            // 0x2a5fa8: 0xac22a49c  sw          $v0, -0x5B64($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FACu; }
        if (ctx->pc != 0x2A5FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FACu; }
        if (ctx->pc != 0x2A5FACu) { return; }
    }
    ctx->pc = 0x2A5FACu;
label_2a5fac:
    // 0x2a5fac: 0xc0637cc  jal         func_18DF30
    ctx->pc = 0x2A5FACu;
    SET_GPR_U32(ctx, 31, 0x2A5FB4u);
    ctx->pc = 0x2A5FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FACu;
            // 0x2a5fb0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DF30u;
    if (runtime->hasFunction(0x18DF30u)) {
        auto targetFn = runtime->lookupFunction(0x18DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FB4u; }
        if (ctx->pc != 0x2A5FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndDeletePort__Fi_0x18df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FB4u; }
        if (ctx->pc != 0x2A5FB4u) { return; }
    }
    ctx->pc = 0x2A5FB4u;
label_2a5fb4:
    // 0x2a5fb4: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2A5FB4u;
    SET_GPR_U32(ctx, 31, 0x2A5FBCu);
    ctx->pc = 0x2A5FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FB4u;
            // 0x2a5fb8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FBCu; }
        if (ctx->pc != 0x2A5FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FBCu; }
        if (ctx->pc != 0x2A5FBCu) { return; }
    }
    ctx->pc = 0x2A5FBCu;
label_2a5fbc:
    // 0x2a5fbc: 0xc0a97b8  jal         func_2A5EE0
    ctx->pc = 0x2A5FBCu;
    SET_GPR_U32(ctx, 31, 0x2A5FC4u);
    ctx->pc = 0x2A5FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FBCu;
            // 0x2a5fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5EE0u;
    if (runtime->hasFunction(0x2A5EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FC4u; }
        if (ctx->pc != 0x2A5FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeBattle__6CSceneFv_0x2a5ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FC4u; }
        if (ctx->pc != 0x2A5FC4u) { return; }
    }
    ctx->pc = 0x2A5FC4u;
label_2a5fc4:
    // 0x2a5fc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FCCu;
            // 0x2a5fd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5FD4u;
}
