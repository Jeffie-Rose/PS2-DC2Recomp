#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSeEnv__6CSceneFv
// Address: 0x2a5e10 - 0x2a5ee0
void InitSeEnv__6CSceneFv_0x2a5e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSeEnv__6CSceneFv_0x2a5e10");
#endif

    switch (ctx->pc) {
        case 0x2a5e24u: goto label_2a5e24;
        case 0x2a5e2cu: goto label_2a5e2c;
        case 0x2a5e34u: goto label_2a5e34;
        case 0x2a5e3cu: goto label_2a5e3c;
        case 0x2a5e70u: goto label_2a5e70;
        case 0x2a5e78u: goto label_2a5e78;
        case 0x2a5ed0u: goto label_2a5ed0;
        default: break;
    }

    ctx->pc = 0x2a5e10u;

    // 0x2a5e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5e1c: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x2A5E1Cu;
    SET_GPR_U32(ctx, 31, 0x2A5E24u);
    ctx->pc = 0x2A5E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E1Cu;
            // 0x2a5e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E24u; }
        if (ctx->pc != 0x2A5E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E24u; }
        if (ctx->pc != 0x2A5E24u) { return; }
    }
    ctx->pc = 0x2A5E24u;
label_2a5e24:
    // 0x2a5e24: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x2A5E24u;
    SET_GPR_U32(ctx, 31, 0x2A5E2Cu);
    ctx->pc = 0x2A5E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E24u;
            // 0x2a5e28: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E2Cu; }
        if (ctx->pc != 0x2A5E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E2Cu; }
        if (ctx->pc != 0x2A5E2Cu) { return; }
    }
    ctx->pc = 0x2A5E2Cu;
label_2a5e2c:
    // 0x2a5e2c: 0xc0637cc  jal         func_18DF30
    ctx->pc = 0x2A5E2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5E34u);
    ctx->pc = 0x2A5E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E2Cu;
            // 0x2a5e30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DF30u;
    if (runtime->hasFunction(0x18DF30u)) {
        auto targetFn = runtime->lookupFunction(0x18DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E34u; }
        if (ctx->pc != 0x2A5E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndDeletePort__Fi_0x18df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E34u; }
        if (ctx->pc != 0x2A5E34u) { return; }
    }
    ctx->pc = 0x2A5E34u;
label_2a5e34:
    // 0x2a5e34: 0xc0a9714  jal         func_2A5C50
    ctx->pc = 0x2A5E34u;
    SET_GPR_U32(ctx, 31, 0x2A5E3Cu);
    ctx->pc = 0x2A5E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E34u;
            // 0x2a5e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C50u;
    if (runtime->hasFunction(0x2A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E3Cu; }
        if (ctx->pc != 0x2A5E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeSrc__6CSceneFv_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E3Cu; }
        if (ctx->pc != 0x2A5E3Cu) { return; }
    }
    ctx->pc = 0x2A5E3Cu;
label_2a5e3c:
    // 0x2a5e3c: 0x3401a450  ori         $at, $zero, 0xA450
    ctx->pc = 0x2a5e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42064);
    // 0x2a5e40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5e44: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2a5e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5e48: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2a5e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a5e4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5e50: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5e50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5e54: 0xac22a040  sw          $v0, -0x5FC0($at)
    ctx->pc = 0x2a5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942784), GPR_U32(ctx, 2));
    // 0x2a5e58: 0x3401a050  ori         $at, $zero, 0xA050
    ctx->pc = 0x2a5e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41040);
    // 0x2a5e5c: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2a5e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5e60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5e64: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5e64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5e68: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A5E68u;
    SET_GPR_U32(ctx, 31, 0x2A5E70u);
    ctx->pc = 0x2A5E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E68u;
            // 0x2a5e6c: 0xac22a044  sw          $v0, -0x5FBC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E70u; }
        if (ctx->pc != 0x2A5E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E70u; }
        if (ctx->pc != 0x2A5E70u) { return; }
    }
    ctx->pc = 0x2A5E70u;
label_2a5e70:
    // 0x2a5e70: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2A5E70u;
    SET_GPR_U32(ctx, 31, 0x2A5E78u);
    ctx->pc = 0x2A5E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E70u;
            // 0x2a5e74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E78u; }
        if (ctx->pc != 0x2A5E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E78u; }
        if (ctx->pc != 0x2A5E78u) { return; }
    }
    ctx->pc = 0x2A5E78u;
label_2a5e78:
    // 0x2a5e78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5e7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5e80: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5e80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5e84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a5e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5e88: 0xac20a488  sw          $zero, -0x5B78($at)
    ctx->pc = 0x2a5e88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943880), GPR_U32(ctx, 0));
    // 0x2a5e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5e94: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5e94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5e98: 0xac20a480  sw          $zero, -0x5B80($at)
    ctx->pc = 0x2a5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943872), GPR_U32(ctx, 0));
    // 0x2a5e9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5ea0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5ea4: 0xac23a48c  sw          $v1, -0x5B74($at)
    ctx->pc = 0x2a5ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943884), GPR_U32(ctx, 3));
    // 0x2a5ea8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5eac: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5eacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5eb0: 0xac22a484  sw          $v0, -0x5B7C($at)
    ctx->pc = 0x2a5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943876), GPR_U32(ctx, 2));
    // 0x2a5eb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5eb8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5ebc: 0xac20a490  sw          $zero, -0x5B70($at)
    ctx->pc = 0x2a5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943888), GPR_U32(ctx, 0));
    // 0x2a5ec0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5ec4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5ec8: 0xc0a9714  jal         func_2A5C50
    ctx->pc = 0x2A5EC8u;
    SET_GPR_U32(ctx, 31, 0x2A5ED0u);
    ctx->pc = 0x2A5ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5EC8u;
            // 0x2a5ecc: 0xac20a494  sw          $zero, -0x5B6C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C50u;
    if (runtime->hasFunction(0x2A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5ED0u; }
        if (ctx->pc != 0x2A5ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeSrc__6CSceneFv_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5ED0u; }
        if (ctx->pc != 0x2A5ED0u) { return; }
    }
    ctx->pc = 0x2A5ED0u;
label_2a5ed0:
    // 0x2a5ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5ED8u;
            // 0x2a5edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5EE0u;
}
