#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw_Fire__14CWeaponElementFv
// Address: 0x1c7d50 - 0x1c7f68
void Draw_Fire__14CWeaponElementFv_0x1c7d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Fire__14CWeaponElementFv_0x1c7d50");
#endif

    switch (ctx->pc) {
        case 0x1c7d90u: goto label_1c7d90;
        case 0x1c7da0u: goto label_1c7da0;
        case 0x1c7db0u: goto label_1c7db0;
        case 0x1c7dc0u: goto label_1c7dc0;
        case 0x1c7dc8u: goto label_1c7dc8;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7de0u: goto label_1c7de0;
        case 0x1c7decu: goto label_1c7dec;
        case 0x1c7df8u: goto label_1c7df8;
        case 0x1c7e04u: goto label_1c7e04;
        case 0x1c7e10u: goto label_1c7e10;
        case 0x1c7e1cu: goto label_1c7e1c;
        case 0x1c7e28u: goto label_1c7e28;
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7ec0u: goto label_1c7ec0;
        case 0x1c7ed0u: goto label_1c7ed0;
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f14u: goto label_1c7f14;
        case 0x1c7f20u: goto label_1c7f20;
        case 0x1c7f40u: goto label_1c7f40;
        default: break;
    }

    ctx->pc = 0x1c7d50u;

    // 0x1c7d50: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1c7d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1c7d54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1c7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1c7d58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c7d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c7d5c: 0x24a56c60  addiu       $a1, $a1, 0x6C60
    ctx->pc = 0x1c7d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27744));
    // 0x1c7d60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c7d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c7d64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c7d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7d68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c7d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c7d6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c7d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c7d70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c7d70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c7d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c7d78: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c7d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c7d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c7d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c7d80: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1c7d84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7d88: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1C7D88u;
    SET_GPR_U32(ctx, 31, 0x1C7D90u);
    ctx->pc = 0x1C7D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D88u;
            // 0x1c7d8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7D90u; }
        if (ctx->pc != 0x1C7D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7D90u; }
        if (ctx->pc != 0x1C7D90u) { return; }
    }
    ctx->pc = 0x1C7D90u;
label_1c7d90:
    // 0x1c7d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c7d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c7d98: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C7D98u;
    SET_GPR_U32(ctx, 31, 0x1C7DA0u);
    ctx->pc = 0x1C7D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D98u;
            // 0x1c7d9c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DA0u; }
        if (ctx->pc != 0x1C7DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DA0u; }
        if (ctx->pc != 0x1C7DA0u) { return; }
    }
    ctx->pc = 0x1C7DA0u;
label_1c7da0:
    // 0x1c7da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7da4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7da8: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C7DA8u;
    SET_GPR_U32(ctx, 31, 0x1C7DB0u);
    ctx->pc = 0x1C7DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DA8u;
            // 0x1c7dac: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DB0u; }
        if (ctx->pc != 0x1C7DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DB0u; }
        if (ctx->pc != 0x1C7DB0u) { return; }
    }
    ctx->pc = 0x1C7DB0u;
label_1c7db0:
    // 0x1c7db0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7db8: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C7DB8u;
    SET_GPR_U32(ctx, 31, 0x1C7DC0u);
    ctx->pc = 0x1C7DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DB8u;
            // 0x1c7dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DC0u; }
        if (ctx->pc != 0x1C7DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DC0u; }
        if (ctx->pc != 0x1C7DC0u) { return; }
    }
    ctx->pc = 0x1C7DC0u;
label_1c7dc0:
    // 0x1c7dc0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C7DC0u;
    SET_GPR_U32(ctx, 31, 0x1C7DC8u);
    ctx->pc = 0x1C7DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DC0u;
            // 0x1c7dc4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DC8u; }
        if (ctx->pc != 0x1C7DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DC8u; }
        if (ctx->pc != 0x1C7DC8u) { return; }
    }
    ctx->pc = 0x1C7DC8u;
label_1c7dc8:
    // 0x1c7dc8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7dcc: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C7DCCu;
    SET_GPR_U32(ctx, 31, 0x1C7DD4u);
    ctx->pc = 0x1C7DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DCCu;
            // 0x1c7dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DD4u; }
        if (ctx->pc != 0x1C7DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DD4u; }
        if (ctx->pc != 0x1C7DD4u) { return; }
    }
    ctx->pc = 0x1C7DD4u;
label_1c7dd4:
    // 0x1c7dd4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7dd8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C7DD8u;
    SET_GPR_U32(ctx, 31, 0x1C7DE0u);
    ctx->pc = 0x1C7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DD8u;
            // 0x1c7ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DE0u; }
        if (ctx->pc != 0x1C7DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DE0u; }
        if (ctx->pc != 0x1C7DE0u) { return; }
    }
    ctx->pc = 0x1C7DE0u;
label_1c7de0:
    // 0x1c7de0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7de4: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C7DE4u;
    SET_GPR_U32(ctx, 31, 0x1C7DECu);
    ctx->pc = 0x1C7DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DE4u;
            // 0x1c7de8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DECu; }
        if (ctx->pc != 0x1C7DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DECu; }
        if (ctx->pc != 0x1C7DECu) { return; }
    }
    ctx->pc = 0x1C7DECu;
label_1c7dec:
    // 0x1c7dec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7df0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C7DF0u;
    SET_GPR_U32(ctx, 31, 0x1C7DF8u);
    ctx->pc = 0x1C7DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DF0u;
            // 0x1c7df4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DF8u; }
        if (ctx->pc != 0x1C7DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DF8u; }
        if (ctx->pc != 0x1C7DF8u) { return; }
    }
    ctx->pc = 0x1C7DF8u;
label_1c7df8:
    // 0x1c7df8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7dfc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C7DFCu;
    SET_GPR_U32(ctx, 31, 0x1C7E04u);
    ctx->pc = 0x1C7E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DFCu;
            // 0x1c7e00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E04u; }
        if (ctx->pc != 0x1C7E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E04u; }
        if (ctx->pc != 0x1C7E04u) { return; }
    }
    ctx->pc = 0x1C7E04u;
label_1c7e04:
    // 0x1c7e04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7e08: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C7E08u;
    SET_GPR_U32(ctx, 31, 0x1C7E10u);
    ctx->pc = 0x1C7E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E08u;
            // 0x1c7e0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E10u; }
        if (ctx->pc != 0x1C7E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E10u; }
        if (ctx->pc != 0x1C7E10u) { return; }
    }
    ctx->pc = 0x1C7E10u;
label_1c7e10:
    // 0x1c7e10: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7e14: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C7E14u;
    SET_GPR_U32(ctx, 31, 0x1C7E1Cu);
    ctx->pc = 0x1C7E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E14u;
            // 0x1c7e18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E1Cu; }
        if (ctx->pc != 0x1C7E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E1Cu; }
        if (ctx->pc != 0x1C7E1Cu) { return; }
    }
    ctx->pc = 0x1C7E1Cu;
label_1c7e1c:
    // 0x1c7e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e20: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C7E20u;
    SET_GPR_U32(ctx, 31, 0x1C7E28u);
    ctx->pc = 0x1C7E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E20u;
            // 0x1c7e24: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E28u; }
        if (ctx->pc != 0x1C7E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E28u; }
        if (ctx->pc != 0x1C7E28u) { return; }
    }
    ctx->pc = 0x1C7E28u;
label_1c7e28:
    // 0x1c7e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c7e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e38:
    // 0x1c7e38: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x1c7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1c7e3c: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x1c7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1c7e40: 0xc4610520  lwc1        $f1, 0x520($v1)
    ctx->pc = 0x1c7e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7e44: 0x845106fa  lh          $s1, 0x6FA($v0)
    ctx->pc = 0x1c7e44u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1786)));
    // 0x1c7e48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7e4c: 0x0  nop
    ctx->pc = 0x1c7e4cu;
    // NOP
    // 0x1c7e50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7e50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7e54: 0x0  nop
    ctx->pc = 0x1c7e54u;
    // NOP
    // 0x1c7e58: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x1C7E58u;
    {
        const bool branch_taken_0x1c7e58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E58u;
            // 0x1c7e5c: 0x24760520  addiu       $s6, $v1, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e58) {
            ctx->pc = 0x1C7F20u;
            goto label_1c7f20;
        }
    }
    ctx->pc = 0x1C7E60u;
    // 0x1c7e60: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1c7e64: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1c7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c7e68: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x1c7e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7e6c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1c7e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c7e70: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1c7e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7e74: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c7e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c7e78: 0xc4660420  lwc1        $f6, 0x420($v1)
    ctx->pc = 0x1c7e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c7e7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e80: 0xc46504a0  lwc1        $f5, 0x4A0($v1)
    ctx->pc = 0x1c7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c7e84: 0xc6a405b0  lwc1        $f4, 0x5B0($s5)
    ctx->pc = 0x1c7e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c7e88: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1c7e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7e8c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1c7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7e90: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1c7e90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1c7e94: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1c7e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c7e98: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1c7e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7e9c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1c7e9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1c7ea0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c7ea0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c7ea4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1c7ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1c7ea8: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1c7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7eac: 0x46052302  mul.s       $f12, $f4, $f5
    ctx->pc = 0x1c7eacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1c7eb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c7eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c7eb4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c7eb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c7eb8: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C7EB8u;
    SET_GPR_U32(ctx, 31, 0x1C7EC0u);
    ctx->pc = 0x1C7EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EB8u;
            // 0x1c7ebc: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EC0u; }
        if (ctx->pc != 0x1C7EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EC0u; }
        if (ctx->pc != 0x1C7EC0u) { return; }
    }
    ctx->pc = 0x1C7EC0u;
label_1c7ec0:
    // 0x1c7ec0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7EC0u;
    {
        const bool branch_taken_0x1c7ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ec0) {
            ctx->pc = 0x1C7F20u;
            goto label_1c7f20;
        }
    }
    ctx->pc = 0x1C7EC8u;
    // 0x1c7ec8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C7EC8u;
    SET_GPR_U32(ctx, 31, 0x1C7ED0u);
    ctx->pc = 0x1C7ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EC8u;
            // 0x1c7ecc: 0xc6cc0000  lwc1        $f12, 0x0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7ED0u; }
        if (ctx->pc != 0x1C7ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7ED0u; }
        if (ctx->pc != 0x1C7ED0u) { return; }
    }
    ctx->pc = 0x1C7ED0u;
label_1c7ed0:
    // 0x1c7ed0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c7ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c7ed4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c7ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ed8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7edc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c7edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ee0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C7EE0u;
    SET_GPR_U32(ctx, 31, 0x1C7EE8u);
    ctx->pc = 0x1C7EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EE0u;
            // 0x1c7ee4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EE8u; }
        if (ctx->pc != 0x1C7EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EE8u; }
        if (ctx->pc != 0x1C7EE8u) { return; }
    }
    ctx->pc = 0x1C7EE8u;
label_1c7ee8:
    // 0x1c7ee8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7eec: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1c7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c7ef0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C7EF0u;
    SET_GPR_U32(ctx, 31, 0x1C7EF8u);
    ctx->pc = 0x1C7EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EF0u;
            // 0x1c7ef4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EF8u; }
        if (ctx->pc != 0x1C7EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EF8u; }
        if (ctx->pc != 0x1C7EF8u) { return; }
    }
    ctx->pc = 0x1C7EF8u;
label_1c7ef8:
    // 0x1c7ef8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7efc: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C7EFCu;
    SET_GPR_U32(ctx, 31, 0x1C7F04u);
    ctx->pc = 0x1C7F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EFCu;
            // 0x1c7f00: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F04u; }
        if (ctx->pc != 0x1C7F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F04u; }
        if (ctx->pc != 0x1C7F04u) { return; }
    }
    ctx->pc = 0x1C7F04u;
label_1c7f04:
    // 0x1c7f04: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1c7f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c7f08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7f0c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C7F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F14u);
    ctx->pc = 0x1C7F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F0Cu;
            // 0x1c7f10: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F14u; }
        if (ctx->pc != 0x1C7F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F14u; }
        if (ctx->pc != 0x1C7F14u) { return; }
    }
    ctx->pc = 0x1C7F14u;
label_1c7f14:
    // 0x1c7f14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7f18: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C7F18u;
    SET_GPR_U32(ctx, 31, 0x1C7F20u);
    ctx->pc = 0x1C7F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F18u;
            // 0x1c7f1c: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F20u; }
        if (ctx->pc != 0x1C7F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F20u; }
        if (ctx->pc != 0x1C7F20u) { return; }
    }
    ctx->pc = 0x1C7F20u;
label_1c7f20:
    // 0x1c7f20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c7f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c7f24: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1c7f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c7f28: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1c7f28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1c7f2c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1c7f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c7f30: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1C7F30u;
    {
        const bool branch_taken_0x1c7f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F30u;
            // 0x1c7f34: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f30) {
            ctx->pc = 0x1C7E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7e38;
        }
    }
    ctx->pc = 0x1C7F38u;
    // 0x1c7f38: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C7F38u;
    SET_GPR_U32(ctx, 31, 0x1C7F40u);
    ctx->pc = 0x1C7F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F38u;
            // 0x1c7f3c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F40u; }
        if (ctx->pc != 0x1C7F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7F40u; }
        if (ctx->pc != 0x1C7F40u) { return; }
    }
    ctx->pc = 0x1C7F40u;
label_1c7f40:
    // 0x1c7f40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c7f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c7f44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c7f44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c7f48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c7f48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7f4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c7f4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7f50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c7f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7f54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c7f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7f60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F60u;
            // 0x1c7f64: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7F68u;
}
