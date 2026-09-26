#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEffectSpectolBreak__FP9mgCMemoryP11CMenuEffecti
// Address: 0x22f980 - 0x22fa54
void SetEffectSpectolBreak__FP9mgCMemoryP11CMenuEffecti_0x22f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffectSpectolBreak__FP9mgCMemoryP11CMenuEffecti_0x22f980");
#endif

    switch (ctx->pc) {
        case 0x22f9e4u: goto label_22f9e4;
        case 0x22f9f0u: goto label_22f9f0;
        case 0x22f9fcu: goto label_22f9fc;
        case 0x22fa2cu: goto label_22fa2c;
        case 0x22fa34u: goto label_22fa34;
        case 0x22fa3cu: goto label_22fa3c;
        default: break;
    }

    ctx->pc = 0x22f980u;

    // 0x22f980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22f984: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22f988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f98c: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x22f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x22f990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22f994: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x22f994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22f998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f99c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22f99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f9a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9a8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x22f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x22f9ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22f9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9b0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x22f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x22f9b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9b8: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x22f9b8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f9bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f9c0: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x22f9c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22f9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9d0: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x22f9d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x22f9d4: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x22f9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x22f9d8: 0x7d430010  sq          $v1, 0x10($t2)
    ctx->pc = 0x22f9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 3));
    // 0x22f9dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22F9DCu;
    SET_GPR_U32(ctx, 31, 0x22F9E4u);
    ctx->pc = 0x22F9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9DCu;
            // 0x22f9e0: 0xfd420020  sd          $v0, 0x20($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9E4u; }
        if (ctx->pc != 0x22F9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9E4u; }
        if (ctx->pc != 0x22F9E4u) { return; }
    }
    ctx->pc = 0x22F9E4u;
label_22f9e4:
    // 0x22f9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9e8: 0xc087d88  jal         func_21F620
    ctx->pc = 0x22F9E8u;
    SET_GPR_U32(ctx, 31, 0x22F9F0u);
    ctx->pc = 0x22F9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9E8u;
            // 0x22f9ec: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F620u;
    if (runtime->hasFunction(0x21F620u)) {
        auto targetFn = runtime->lookupFunction(0x21F620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9F0u; }
        if (ctx->pc != 0x22F9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuItemIconTexGetXY__FiR9mgRect_i__0x21f620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9F0u; }
        if (ctx->pc != 0x22F9F0u) { return; }
    }
    ctx->pc = 0x22F9F0u;
label_22f9f0:
    // 0x22f9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9f4: 0xc087db4  jal         func_21F6D0
    ctx->pc = 0x22F9F4u;
    SET_GPR_U32(ctx, 31, 0x22F9FCu);
    ctx->pc = 0x22F9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9F4u;
            // 0x22f9f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F6D0u;
    if (runtime->hasFunction(0x21F6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21F6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9FCu; }
        if (ctx->pc != 0x22F9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuItemIconTexInfo__Fii_0x21f6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9FCu; }
        if (ctx->pc != 0x22F9FCu) { return; }
    }
    ctx->pc = 0x22F9FCu;
label_22f9fc:
    // 0x22f9fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22f9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa00: 0x8fa90070  lw          $t1, 0x70($sp)
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22fa04: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x22fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x22fa08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22fa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa0c: 0x87829340  lh          $v0, -0x6CC0($gp)
    ctx->pc = 0x22fa0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939456)));
    // 0x22fa10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa14: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x22fa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22fa18: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x22fa18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22fa1c: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x22fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
    // 0x22fa20: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x22fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x22fa24: 0xc08bee4  jal         func_22FB90
    ctx->pc = 0x22FA24u;
    SET_GPR_U32(ctx, 31, 0x22FA2Cu);
    ctx->pc = 0x22FA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA24u;
            // 0x22fa28: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB90u;
    if (runtime->hasFunction(0x22FB90u)) {
        auto targetFn = runtime->lookupFunction(0x22FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA2Cu; }
        if (ctx->pc != 0x22FA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetEffect__11CMenuEffectFP9mgCMemoryP10mgCTextureiPi_0x22fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA2Cu; }
        if (ctx->pc != 0x22FA2Cu) { return; }
    }
    ctx->pc = 0x22FA2Cu;
label_22fa2c:
    // 0x22fa2c: 0xc08bfa4  jal         func_22FE90
    ctx->pc = 0x22FA2Cu;
    SET_GPR_U32(ctx, 31, 0x22FA34u);
    ctx->pc = 0x22FA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA2Cu;
            // 0x22fa30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FE90u;
    if (runtime->hasFunction(0x22FE90u)) {
        auto targetFn = runtime->lookupFunction(0x22FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA34u; }
        if (ctx->pc != 0x22FA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectStart__11CMenuEffectFv_0x22fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA34u; }
        if (ctx->pc != 0x22FA34u) { return; }
    }
    ctx->pc = 0x22FA34u;
label_22fa34:
    // 0x22fa34: 0xc094274  jal         func_2509D0
    ctx->pc = 0x22FA34u;
    SET_GPR_U32(ctx, 31, 0x22FA3Cu);
    ctx->pc = 0x22FA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA34u;
            // 0x22fa38: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA3Cu; }
        if (ctx->pc != 0x22FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA3Cu; }
        if (ctx->pc != 0x22FA3Cu) { return; }
    }
    ctx->pc = 0x22FA3Cu;
label_22fa3c:
    // 0x22fa3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22fa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fa40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22fa40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fa44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22fa44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fa48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fa48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x22FA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA4Cu;
            // 0x22fa50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FA54u;
}
