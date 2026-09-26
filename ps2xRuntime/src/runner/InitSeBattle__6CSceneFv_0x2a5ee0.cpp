#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSeBattle__6CSceneFv
// Address: 0x2a5ee0 - 0x2a5f54
void InitSeBattle__6CSceneFv_0x2a5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSeBattle__6CSceneFv_0x2a5ee0");
#endif

    switch (ctx->pc) {
        case 0x2a5ef8u: goto label_2a5ef8;
        case 0x2a5f00u: goto label_2a5f00;
        case 0x2a5f34u: goto label_2a5f34;
        case 0x2a5f3cu: goto label_2a5f3c;
        case 0x2a5f44u: goto label_2a5f44;
        default: break;
    }

    ctx->pc = 0x2a5ee0u;

    // 0x2a5ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ef0: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x2A5EF0u;
    SET_GPR_U32(ctx, 31, 0x2A5EF8u);
    ctx->pc = 0x2A5EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5EF0u;
            // 0x2a5ef4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5EF8u; }
        if (ctx->pc != 0x2A5EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5EF8u; }
        if (ctx->pc != 0x2A5EF8u) { return; }
    }
    ctx->pc = 0x2A5EF8u;
label_2a5ef8:
    // 0x2a5ef8: 0xc0637cc  jal         func_18DF30
    ctx->pc = 0x2A5EF8u;
    SET_GPR_U32(ctx, 31, 0x2A5F00u);
    ctx->pc = 0x2A5EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5EF8u;
            // 0x2a5efc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DF30u;
    if (runtime->hasFunction(0x18DF30u)) {
        auto targetFn = runtime->lookupFunction(0x18DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F00u; }
        if (ctx->pc != 0x2A5F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndDeletePort__Fi_0x18df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F00u; }
        if (ctx->pc != 0x2A5F00u) { return; }
    }
    ctx->pc = 0x2A5F00u;
label_2a5f00:
    // 0x2a5f00: 0x3401e4e0  ori         $at, $zero, 0xE4E0
    ctx->pc = 0x2a5f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58592);
    // 0x2a5f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5f08: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2a5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5f0c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2a5f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a5f10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5f14: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5f14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5f18: 0xac22c4d0  sw          $v0, -0x3B30($at)
    ctx->pc = 0x2a5f18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952144), GPR_U32(ctx, 2));
    // 0x2a5f1c: 0x3401c4e0  ori         $at, $zero, 0xC4E0
    ctx->pc = 0x2a5f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50400);
    // 0x2a5f20: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2a5f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5f24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5f28: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5f28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5f2c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A5F2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5F34u);
    ctx->pc = 0x2A5F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F2Cu;
            // 0x2a5f30: 0xac22c4d4  sw          $v0, -0x3B2C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294952148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F34u; }
        if (ctx->pc != 0x2A5F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F34u; }
        if (ctx->pc != 0x2A5F34u) { return; }
    }
    ctx->pc = 0x2A5F34u;
label_2a5f34:
    // 0x2a5f34: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2A5F34u;
    SET_GPR_U32(ctx, 31, 0x2A5F3Cu);
    ctx->pc = 0x2A5F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F34u;
            // 0x2a5f38: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F3Cu; }
        if (ctx->pc != 0x2A5F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F3Cu; }
        if (ctx->pc != 0x2A5F3Cu) { return; }
    }
    ctx->pc = 0x2A5F3Cu;
label_2a5f3c:
    // 0x2a5f3c: 0xc0a9784  jal         func_2A5E10
    ctx->pc = 0x2A5F3Cu;
    SET_GPR_U32(ctx, 31, 0x2A5F44u);
    ctx->pc = 0x2A5F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F3Cu;
            // 0x2a5f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5E10u;
    if (runtime->hasFunction(0x2A5E10u)) {
        auto targetFn = runtime->lookupFunction(0x2A5E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F44u; }
        if (ctx->pc != 0x2A5F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeEnv__6CSceneFv_0x2a5e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5F44u; }
        if (ctx->pc != 0x2A5F44u) { return; }
    }
    ctx->pc = 0x2A5F44u;
label_2a5f44:
    // 0x2a5f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5F4Cu;
            // 0x2a5f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5F54u;
}
