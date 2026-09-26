#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw_Thunder__14CWeaponElementFv
// Address: 0x1c8750 - 0x1c8c88
void Draw_Thunder__14CWeaponElementFv_0x1c8750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Thunder__14CWeaponElementFv_0x1c8750");
#endif

    switch (ctx->pc) {
        case 0x1c8798u: goto label_1c8798;
        case 0x1c87a8u: goto label_1c87a8;
        case 0x1c87b0u: goto label_1c87b0;
        case 0x1c87c0u: goto label_1c87c0;
        case 0x1c87c8u: goto label_1c87c8;
        case 0x1c87d4u: goto label_1c87d4;
        case 0x1c87e0u: goto label_1c87e0;
        case 0x1c87ecu: goto label_1c87ec;
        case 0x1c87f8u: goto label_1c87f8;
        case 0x1c8804u: goto label_1c8804;
        case 0x1c8810u: goto label_1c8810;
        case 0x1c881cu: goto label_1c881c;
        case 0x1c8828u: goto label_1c8828;
        case 0x1c8838u: goto label_1c8838;
        case 0x1c8890u: goto label_1c8890;
        case 0x1c88a0u: goto label_1c88a0;
        case 0x1c88b8u: goto label_1c88b8;
        case 0x1c88c8u: goto label_1c88c8;
        case 0x1c88d4u: goto label_1c88d4;
        case 0x1c88e4u: goto label_1c88e4;
        case 0x1c88f0u: goto label_1c88f0;
        case 0x1c8918u: goto label_1c8918;
        case 0x1c893cu: goto label_1c893c;
        case 0x1c8948u: goto label_1c8948;
        case 0x1c8954u: goto label_1c8954;
        case 0x1c8960u: goto label_1c8960;
        case 0x1c896cu: goto label_1c896c;
        case 0x1c8978u: goto label_1c8978;
        case 0x1c8984u: goto label_1c8984;
        case 0x1c8990u: goto label_1c8990;
        case 0x1c899cu: goto label_1c899c;
        case 0x1c89acu: goto label_1c89ac;
        case 0x1c89c8u: goto label_1c89c8;
        case 0x1c89ecu: goto label_1c89ec;
        case 0x1c8a10u: goto label_1c8a10;
        case 0x1c8a28u: goto label_1c8a28;
        case 0x1c8a48u: goto label_1c8a48;
        case 0x1c8a6cu: goto label_1c8a6c;
        case 0x1c8aa8u: goto label_1c8aa8;
        case 0x1c8ac0u: goto label_1c8ac0;
        case 0x1c8ad0u: goto label_1c8ad0;
        case 0x1c8adcu: goto label_1c8adc;
        case 0x1c8aecu: goto label_1c8aec;
        case 0x1c8af8u: goto label_1c8af8;
        case 0x1c8b08u: goto label_1c8b08;
        case 0x1c8b14u: goto label_1c8b14;
        case 0x1c8b24u: goto label_1c8b24;
        case 0x1c8b30u: goto label_1c8b30;
        case 0x1c8b40u: goto label_1c8b40;
        case 0x1c8b4cu: goto label_1c8b4c;
        case 0x1c8b5cu: goto label_1c8b5c;
        case 0x1c8b6cu: goto label_1c8b6c;
        case 0x1c8b80u: goto label_1c8b80;
        case 0x1c8ba4u: goto label_1c8ba4;
        case 0x1c8bc4u: goto label_1c8bc4;
        case 0x1c8bd4u: goto label_1c8bd4;
        case 0x1c8be0u: goto label_1c8be0;
        case 0x1c8bf0u: goto label_1c8bf0;
        case 0x1c8bfcu: goto label_1c8bfc;
        case 0x1c8c0cu: goto label_1c8c0c;
        case 0x1c8c18u: goto label_1c8c18;
        case 0x1c8c28u: goto label_1c8c28;
        case 0x1c8c34u: goto label_1c8c34;
        case 0x1c8c58u: goto label_1c8c58;
        default: break;
    }

    ctx->pc = 0x1c8750u;

    // 0x1c8750: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x1c8750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x1c8754: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1c8754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1c8758: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c8758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c875c: 0x24a56c60  addiu       $a1, $a1, 0x6C60
    ctx->pc = 0x1c875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27744));
    // 0x1c8760: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c8760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c8764: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8768: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c8768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c876c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c8770: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c8770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c8774: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c8774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c8778: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c8778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c877c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c877cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c8780: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c8780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c8784: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c8784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c8788: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1c8788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1c878c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8790: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1C8790u;
    SET_GPR_U32(ctx, 31, 0x1C8798u);
    ctx->pc = 0x1C8794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8790u;
            // 0x1c8794: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8798u; }
        if (ctx->pc != 0x1C8798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8798u; }
        if (ctx->pc != 0x1C8798u) { return; }
    }
    ctx->pc = 0x1C8798u;
label_1c8798:
    // 0x1c8798: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1c8798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c879c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c879cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c87a0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C87A0u;
    SET_GPR_U32(ctx, 31, 0x1C87A8u);
    ctx->pc = 0x1C87A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87A0u;
            // 0x1c87a4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87A8u; }
        if (ctx->pc != 0x1C87A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87A8u; }
        if (ctx->pc != 0x1C87A8u) { return; }
    }
    ctx->pc = 0x1C87A8u;
label_1c87a8:
    // 0x1c87a8: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C87A8u;
    SET_GPR_U32(ctx, 31, 0x1C87B0u);
    ctx->pc = 0x1C87ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87A8u;
            // 0x1c87ac: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87B0u; }
        if (ctx->pc != 0x1C87B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87B0u; }
        if (ctx->pc != 0x1C87B0u) { return; }
    }
    ctx->pc = 0x1C87B0u;
label_1c87b0:
    // 0x1c87b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c87b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c87b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c87b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c87b8: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C87B8u;
    SET_GPR_U32(ctx, 31, 0x1C87C0u);
    ctx->pc = 0x1C87BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87B8u;
            // 0x1c87bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87C0u; }
        if (ctx->pc != 0x1C87C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87C0u; }
        if (ctx->pc != 0x1C87C0u) { return; }
    }
    ctx->pc = 0x1C87C0u;
label_1c87c0:
    // 0x1c87c0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C87C0u;
    SET_GPR_U32(ctx, 31, 0x1C87C8u);
    ctx->pc = 0x1C87C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87C0u;
            // 0x1c87c4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87C8u; }
        if (ctx->pc != 0x1C87C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87C8u; }
        if (ctx->pc != 0x1C87C8u) { return; }
    }
    ctx->pc = 0x1C87C8u;
label_1c87c8:
    // 0x1c87c8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c87cc: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C87CCu;
    SET_GPR_U32(ctx, 31, 0x1C87D4u);
    ctx->pc = 0x1C87D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87CCu;
            // 0x1c87d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87D4u; }
        if (ctx->pc != 0x1C87D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87D4u; }
        if (ctx->pc != 0x1C87D4u) { return; }
    }
    ctx->pc = 0x1C87D4u;
label_1c87d4:
    // 0x1c87d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c87d8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C87D8u;
    SET_GPR_U32(ctx, 31, 0x1C87E0u);
    ctx->pc = 0x1C87DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87D8u;
            // 0x1c87dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87E0u; }
        if (ctx->pc != 0x1C87E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87E0u; }
        if (ctx->pc != 0x1C87E0u) { return; }
    }
    ctx->pc = 0x1C87E0u;
label_1c87e0:
    // 0x1c87e0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c87e4: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C87E4u;
    SET_GPR_U32(ctx, 31, 0x1C87ECu);
    ctx->pc = 0x1C87E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87E4u;
            // 0x1c87e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87ECu; }
        if (ctx->pc != 0x1C87ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87ECu; }
        if (ctx->pc != 0x1C87ECu) { return; }
    }
    ctx->pc = 0x1C87ECu;
label_1c87ec:
    // 0x1c87ec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c87ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c87f0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C87F0u;
    SET_GPR_U32(ctx, 31, 0x1C87F8u);
    ctx->pc = 0x1C87F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87F0u;
            // 0x1c87f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87F8u; }
        if (ctx->pc != 0x1C87F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C87F8u; }
        if (ctx->pc != 0x1C87F8u) { return; }
    }
    ctx->pc = 0x1C87F8u;
label_1c87f8:
    // 0x1c87f8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c87f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c87fc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C87FCu;
    SET_GPR_U32(ctx, 31, 0x1C8804u);
    ctx->pc = 0x1C8800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87FCu;
            // 0x1c8800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8804u; }
        if (ctx->pc != 0x1C8804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8804u; }
        if (ctx->pc != 0x1C8804u) { return; }
    }
    ctx->pc = 0x1C8804u;
label_1c8804:
    // 0x1c8804: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8808: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C8808u;
    SET_GPR_U32(ctx, 31, 0x1C8810u);
    ctx->pc = 0x1C880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8808u;
            // 0x1c880c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8810u; }
        if (ctx->pc != 0x1C8810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8810u; }
        if (ctx->pc != 0x1C8810u) { return; }
    }
    ctx->pc = 0x1C8810u;
label_1c8810:
    // 0x1c8810: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8814: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C8814u;
    SET_GPR_U32(ctx, 31, 0x1C881Cu);
    ctx->pc = 0x1C8818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8814u;
            // 0x1c8818: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C881Cu; }
        if (ctx->pc != 0x1C881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C881Cu; }
        if (ctx->pc != 0x1C881Cu) { return; }
    }
    ctx->pc = 0x1C881Cu;
label_1c881c:
    // 0x1c881c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8820: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C8820u;
    SET_GPR_U32(ctx, 31, 0x1C8828u);
    ctx->pc = 0x1C8824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8820u;
            // 0x1c8824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8828u; }
        if (ctx->pc != 0x1C8828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8828u; }
        if (ctx->pc != 0x1C8828u) { return; }
    }
    ctx->pc = 0x1C8828u;
label_1c8828:
    // 0x1c8828: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c882c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c882cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8830: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C8830u;
    {
        const bool branch_taken_0x1c8830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8830u;
            // 0x1c8834: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8830) {
            ctx->pc = 0x1C88FCu;
            goto label_1c88fc;
        }
    }
    ctx->pc = 0x1C8838u;
label_1c8838:
    // 0x1c8838: 0xc4610520  lwc1        $f1, 0x520($v1)
    ctx->pc = 0x1c8838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c883c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c883cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8840: 0x0  nop
    ctx->pc = 0x1c8840u;
    // NOP
    // 0x1c8844: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8848: 0x0  nop
    ctx->pc = 0x1c8848u;
    // NOP
    // 0x1c884c: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x1C884Cu;
    {
        const bool branch_taken_0x1c884c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C884Cu;
            // 0x1c8850: 0x24740520  addiu       $s4, $v1, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c884c) {
            ctx->pc = 0x1C88F0u;
            goto label_1c88f0;
        }
    }
    ctx->pc = 0x1C8854u;
    // 0x1c8854: 0xc4620420  lwc1        $f2, 0x420($v1)
    ctx->pc = 0x1c8854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8858: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x1c8858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1c885c: 0xc46104a0  lwc1        $f1, 0x4A0($v1)
    ctx->pc = 0x1c885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8860: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1c8864: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c8864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c8868: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1c8868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1c886c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c886cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8870: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1c8870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1c8874: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8878: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1c8878u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c887c: 0x46006343  div.s       $f13, $f12, $f0
    ctx->pc = 0x1c887cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1c8880: 0x0  nop
    ctx->pc = 0x1c8880u;
    // NOP
    // 0x1c8884: 0x0  nop
    ctx->pc = 0x1c8884u;
    // NOP
    // 0x1c8888: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C8888u;
    SET_GPR_U32(ctx, 31, 0x1C8890u);
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8890u; }
        if (ctx->pc != 0x1C8890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8890u; }
        if (ctx->pc != 0x1C8890u) { return; }
    }
    ctx->pc = 0x1C8890u;
label_1c8890:
    // 0x1c8890: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C8890u;
    {
        const bool branch_taken_0x1c8890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8890) {
            ctx->pc = 0x1C88F0u;
            goto label_1c88f0;
        }
    }
    ctx->pc = 0x1C8898u;
    // 0x1c8898: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C8898u;
    SET_GPR_U32(ctx, 31, 0x1C88A0u);
    ctx->pc = 0x1C889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8898u;
            // 0x1c889c: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88A0u; }
        if (ctx->pc != 0x1C88A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88A0u; }
        if (ctx->pc != 0x1C88A0u) { return; }
    }
    ctx->pc = 0x1C88A0u;
label_1c88a0:
    // 0x1c88a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c88a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c88a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c88a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88a8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c88a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c88ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c88acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88b0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C88B0u;
    SET_GPR_U32(ctx, 31, 0x1C88B8u);
    ctx->pc = 0x1C88B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88B0u;
            // 0x1c88b4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88B8u; }
        if (ctx->pc != 0x1C88B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88B8u; }
        if (ctx->pc != 0x1C88B8u) { return; }
    }
    ctx->pc = 0x1C88B8u;
label_1c88b8:
    // 0x1c88b8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c88b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c88bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c88bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88c0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C88C0u;
    SET_GPR_U32(ctx, 31, 0x1C88C8u);
    ctx->pc = 0x1C88C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88C0u;
            // 0x1c88c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88C8u; }
        if (ctx->pc != 0x1C88C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88C8u; }
        if (ctx->pc != 0x1C88C8u) { return; }
    }
    ctx->pc = 0x1C88C8u;
label_1c88c8:
    // 0x1c88c8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c88c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c88cc: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C88CCu;
    SET_GPR_U32(ctx, 31, 0x1C88D4u);
    ctx->pc = 0x1C88D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88CCu;
            // 0x1c88d0: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88D4u; }
        if (ctx->pc != 0x1C88D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88D4u; }
        if (ctx->pc != 0x1C88D4u) { return; }
    }
    ctx->pc = 0x1C88D4u;
label_1c88d4:
    // 0x1c88d4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c88d8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c88dc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C88DCu;
    SET_GPR_U32(ctx, 31, 0x1C88E4u);
    ctx->pc = 0x1C88E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88DCu;
            // 0x1c88e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88E4u; }
        if (ctx->pc != 0x1C88E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88E4u; }
        if (ctx->pc != 0x1C88E4u) { return; }
    }
    ctx->pc = 0x1C88E4u;
label_1c88e4:
    // 0x1c88e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c88e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c88e8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C88E8u;
    SET_GPR_U32(ctx, 31, 0x1C88F0u);
    ctx->pc = 0x1C88ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88E8u;
            // 0x1c88ec: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88F0u; }
        if (ctx->pc != 0x1C88F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88F0u; }
        if (ctx->pc != 0x1C88F0u) { return; }
    }
    ctx->pc = 0x1C88F0u;
label_1c88f0:
    // 0x1c88f0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1c88f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c88f4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1c88f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1c88f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c88f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c88fc:
    // 0x1c88fc: 0x0  nop
    ctx->pc = 0x1c88fcu;
    // NOP
    // 0x1c8900: 0x86a205ae  lh          $v0, 0x5AE($s5)
    ctx->pc = 0x1c8900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1454)));
    // 0x1c8904: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c8904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8908: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1C8908u;
    {
        const bool branch_taken_0x1c8908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8908u;
            // 0x1c890c: 0x2b21821  addu        $v1, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8908) {
            ctx->pc = 0x1C8838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8838;
        }
    }
    ctx->pc = 0x1C8910u;
    // 0x1c8910: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C8910u;
    SET_GPR_U32(ctx, 31, 0x1C8918u);
    ctx->pc = 0x1C8914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8910u;
            // 0x1c8914: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8918u; }
        if (ctx->pc != 0x1C8918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8918u; }
        if (ctx->pc != 0x1C8918u) { return; }
    }
    ctx->pc = 0x1C8918u;
label_1c8918:
    // 0x1c8918: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c8918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c891c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x1c891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1c8920: 0x24428e30  addiu       $v0, $v0, -0x71D0
    ctx->pc = 0x1c8920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938160));
    // 0x1c8924: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8928: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c8928u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c892c: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x1c892cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c8930: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1c8930u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1c8934: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C8934u;
    SET_GPR_U32(ctx, 31, 0x1C893Cu);
    ctx->pc = 0x1C8938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8934u;
            // 0x1c8938: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C893Cu; }
        if (ctx->pc != 0x1C893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C893Cu; }
        if (ctx->pc != 0x1C893Cu) { return; }
    }
    ctx->pc = 0x1C893Cu;
label_1c893c:
    // 0x1c893c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8940: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C8940u;
    SET_GPR_U32(ctx, 31, 0x1C8948u);
    ctx->pc = 0x1C8944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8940u;
            // 0x1c8944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8948u; }
        if (ctx->pc != 0x1C8948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8948u; }
        if (ctx->pc != 0x1C8948u) { return; }
    }
    ctx->pc = 0x1C8948u;
label_1c8948:
    // 0x1c8948: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c894c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C894Cu;
    SET_GPR_U32(ctx, 31, 0x1C8954u);
    ctx->pc = 0x1C8950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C894Cu;
            // 0x1c8950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8954u; }
        if (ctx->pc != 0x1C8954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8954u; }
        if (ctx->pc != 0x1C8954u) { return; }
    }
    ctx->pc = 0x1C8954u;
label_1c8954:
    // 0x1c8954: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8958: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C8958u;
    SET_GPR_U32(ctx, 31, 0x1C8960u);
    ctx->pc = 0x1C895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8958u;
            // 0x1c895c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8960u; }
        if (ctx->pc != 0x1C8960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8960u; }
        if (ctx->pc != 0x1C8960u) { return; }
    }
    ctx->pc = 0x1C8960u;
label_1c8960:
    // 0x1c8960: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8964: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C8964u;
    SET_GPR_U32(ctx, 31, 0x1C896Cu);
    ctx->pc = 0x1C8968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8964u;
            // 0x1c8968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C896Cu; }
        if (ctx->pc != 0x1C896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C896Cu; }
        if (ctx->pc != 0x1C896Cu) { return; }
    }
    ctx->pc = 0x1C896Cu;
label_1c896c:
    // 0x1c896c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8970: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C8970u;
    SET_GPR_U32(ctx, 31, 0x1C8978u);
    ctx->pc = 0x1C8974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8970u;
            // 0x1c8974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8978u; }
        if (ctx->pc != 0x1C8978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8978u; }
        if (ctx->pc != 0x1C8978u) { return; }
    }
    ctx->pc = 0x1C8978u;
label_1c8978:
    // 0x1c8978: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c897c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C897Cu;
    SET_GPR_U32(ctx, 31, 0x1C8984u);
    ctx->pc = 0x1C8980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C897Cu;
            // 0x1c8980: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8984u; }
        if (ctx->pc != 0x1C8984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8984u; }
        if (ctx->pc != 0x1C8984u) { return; }
    }
    ctx->pc = 0x1C8984u;
label_1c8984:
    // 0x1c8984: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8988: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C8988u;
    SET_GPR_U32(ctx, 31, 0x1C8990u);
    ctx->pc = 0x1C898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8988u;
            // 0x1c898c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8990u; }
        if (ctx->pc != 0x1C8990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8990u; }
        if (ctx->pc != 0x1C8990u) { return; }
    }
    ctx->pc = 0x1C8990u;
label_1c8990:
    // 0x1c8990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8994: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C8994u;
    SET_GPR_U32(ctx, 31, 0x1C899Cu);
    ctx->pc = 0x1C8998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8994u;
            // 0x1c8998: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C899Cu; }
        if (ctx->pc != 0x1C899Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C899Cu; }
        if (ctx->pc != 0x1C899Cu) { return; }
    }
    ctx->pc = 0x1C899Cu;
label_1c899c:
    // 0x1c899c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c899cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c89a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89a4: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1C89A4u;
    {
        const bool branch_taken_0x1c89a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89A4u;
            // 0x1c89a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89a4) {
            ctx->pc = 0x1C8C40u;
            goto label_1c8c40;
        }
    }
    ctx->pc = 0x1C89ACu;
label_1c89ac:
    // 0x1c89ac: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1c89acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1c89b0: 0x8642073c  lh          $v0, 0x73C($s2)
    ctx->pc = 0x1c89b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1852)));
    // 0x1c89b4: 0x2656073c  addiu       $s6, $s2, 0x73C
    ctx->pc = 0x1c89b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1852));
    // 0x1c89b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c89bc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1c89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1c89c0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C89C0u;
    SET_GPR_U32(ctx, 31, 0x1C89C8u);
    ctx->pc = 0x1C89C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89C0u;
            // 0x1c89c4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89C8u; }
        if (ctx->pc != 0x1C89C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89C8u; }
        if (ctx->pc != 0x1C89C8u) { return; }
    }
    ctx->pc = 0x1C89C8u;
label_1c89c8:
    // 0x1c89c8: 0x27b10254  addiu       $s1, $sp, 0x254
    ctx->pc = 0x1c89c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1c89cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c89d0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1c89d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c89d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c89d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c89d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c89d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c89dc: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1c89dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1c89e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c89e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c89e4: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C89E4u;
    SET_GPR_U32(ctx, 31, 0x1C89ECu);
    ctx->pc = 0x1C89E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89E4u;
            // 0x1c89e8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89ECu; }
        if (ctx->pc != 0x1C89ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89ECu; }
        if (ctx->pc != 0x1C89ECu) { return; }
    }
    ctx->pc = 0x1C89ECu;
label_1c89ec:
    // 0x1c89ec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1c89ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c89f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c89f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c89f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c89f8: 0x27b700b0  addiu       $s7, $sp, 0xB0
    ctx->pc = 0x1c89f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c89fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c89fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a00: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1c8a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1c8a04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c8a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c8a08: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C8A08u;
    SET_GPR_U32(ctx, 31, 0x1C8A10u);
    ctx->pc = 0x1C8A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A08u;
            // 0x1c8a0c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A10u; }
        if (ctx->pc != 0x1C8A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A10u; }
        if (ctx->pc != 0x1C8A10u) { return; }
    }
    ctx->pc = 0x1C8A10u;
label_1c8a10:
    // 0x1c8a10: 0x8642075c  lh          $v0, 0x75C($s2)
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1884)));
    // 0x1c8a14: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1c8a18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c8a1c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1c8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1c8a20: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C8A20u;
    SET_GPR_U32(ctx, 31, 0x1C8A28u);
    ctx->pc = 0x1C8A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A20u;
            // 0x1c8a24: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A28u; }
        if (ctx->pc != 0x1C8A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A28u; }
        if (ctx->pc != 0x1C8A28u) { return; }
    }
    ctx->pc = 0x1C8A28u;
label_1c8a28:
    // 0x1c8a28: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1c8a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8a2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8a34: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c8a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c8a38: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1c8a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1c8a3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8a40: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C8A40u;
    SET_GPR_U32(ctx, 31, 0x1C8A48u);
    ctx->pc = 0x1C8A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A40u;
            // 0x1c8a44: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A48u; }
        if (ctx->pc != 0x1C8A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A48u; }
        if (ctx->pc != 0x1C8A48u) { return; }
    }
    ctx->pc = 0x1C8A48u;
label_1c8a48:
    // 0x1c8a48: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1c8a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8a4c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c8a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8a54: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x1c8a54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c8a58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1c8a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a5c: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1c8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1c8a60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8a64: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C8A64u;
    SET_GPR_U32(ctx, 31, 0x1C8A6Cu);
    ctx->pc = 0x1C8A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A64u;
            // 0x1c8a68: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A6Cu; }
        if (ctx->pc != 0x1C8A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A6Cu; }
        if (ctx->pc != 0x1C8A6Cu) { return; }
    }
    ctx->pc = 0x1C8A6Cu;
label_1c8a6c:
    // 0x1c8a6c: 0x8646079c  lh          $a2, 0x79C($s2)
    ctx->pc = 0x1c8a6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1948)));
    // 0x1c8a70: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1c8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1c8a74: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c8a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c8a78: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x1c8a78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c8a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8a80: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1c8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1c8a84: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x1c8a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c8a88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8a8c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1c8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1c8a90: 0x24c30230  addiu       $v1, $a2, 0x230
    ctx->pc = 0x1c8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 560));
    // 0x1c8a94: 0xc4400520  lwc1        $f0, 0x520($v0)
    ctx->pc = 0x1c8a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8a98: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c8a98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8a9c: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x1c8a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c8aa0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C8AA0u;
    SET_GPR_U32(ctx, 31, 0x1C8AA8u);
    ctx->pc = 0x1C8AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AA0u;
            // 0x1c8aa4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AA8u; }
        if (ctx->pc != 0x1C8AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AA8u; }
        if (ctx->pc != 0x1C8AA8u) { return; }
    }
    ctx->pc = 0x1C8AA8u;
label_1c8aa8:
    // 0x1c8aa8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c8aac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c8aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ab0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8ab4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c8ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ab8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C8AB8u;
    SET_GPR_U32(ctx, 31, 0x1C8AC0u);
    ctx->pc = 0x1C8ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AB8u;
            // 0x1c8abc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AC0u; }
        if (ctx->pc != 0x1C8AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AC0u; }
        if (ctx->pc != 0x1C8AC0u) { return; }
    }
    ctx->pc = 0x1C8AC0u;
label_1c8ac0:
    // 0x1c8ac0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8ac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ac8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C8AC8u;
    SET_GPR_U32(ctx, 31, 0x1C8AD0u);
    ctx->pc = 0x1C8ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AC8u;
            // 0x1c8acc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AD0u; }
        if (ctx->pc != 0x1C8AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AD0u; }
        if (ctx->pc != 0x1C8AD0u) { return; }
    }
    ctx->pc = 0x1C8AD0u;
label_1c8ad0:
    // 0x1c8ad0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8ad4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C8AD4u;
    SET_GPR_U32(ctx, 31, 0x1C8ADCu);
    ctx->pc = 0x1C8AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AD4u;
            // 0x1c8ad8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8ADCu; }
        if (ctx->pc != 0x1C8ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8ADCu; }
        if (ctx->pc != 0x1C8ADCu) { return; }
    }
    ctx->pc = 0x1C8ADCu;
label_1c8adc:
    // 0x1c8adc: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x1c8adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1c8ae0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8ae4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C8AE4u;
    SET_GPR_U32(ctx, 31, 0x1C8AECu);
    ctx->pc = 0x1C8AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AE4u;
            // 0x1c8ae8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AECu; }
        if (ctx->pc != 0x1C8AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AECu; }
        if (ctx->pc != 0x1C8AECu) { return; }
    }
    ctx->pc = 0x1C8AECu;
label_1c8aec:
    // 0x1c8aec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8af0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C8AF0u;
    SET_GPR_U32(ctx, 31, 0x1C8AF8u);
    ctx->pc = 0x1C8AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AF0u;
            // 0x1c8af4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AF8u; }
        if (ctx->pc != 0x1C8AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8AF8u; }
        if (ctx->pc != 0x1C8AF8u) { return; }
    }
    ctx->pc = 0x1C8AF8u;
label_1c8af8:
    // 0x1c8af8: 0x26460068  addiu       $a2, $s2, 0x68
    ctx->pc = 0x1c8af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x1c8afc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8b00: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C8B00u;
    SET_GPR_U32(ctx, 31, 0x1C8B08u);
    ctx->pc = 0x1C8B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B00u;
            // 0x1c8b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B08u; }
        if (ctx->pc != 0x1C8B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B08u; }
        if (ctx->pc != 0x1C8B08u) { return; }
    }
    ctx->pc = 0x1C8B08u;
label_1c8b08:
    // 0x1c8b08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8b0c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C8B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C8B14u);
    ctx->pc = 0x1C8B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B0Cu;
            // 0x1c8b10: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B14u; }
        if (ctx->pc != 0x1C8B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B14u; }
        if (ctx->pc != 0x1C8B14u) { return; }
    }
    ctx->pc = 0x1C8B14u;
label_1c8b14:
    // 0x1c8b14: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x1c8b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1c8b18: 0x26460068  addiu       $a2, $s2, 0x68
    ctx->pc = 0x1c8b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x1c8b1c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C8B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C8B24u);
    ctx->pc = 0x1C8B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B1Cu;
            // 0x1c8b20: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B24u; }
        if (ctx->pc != 0x1C8B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B24u; }
        if (ctx->pc != 0x1C8B24u) { return; }
    }
    ctx->pc = 0x1C8B24u;
label_1c8b24:
    // 0x1c8b24: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8b28: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C8B28u;
    SET_GPR_U32(ctx, 31, 0x1C8B30u);
    ctx->pc = 0x1C8B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B28u;
            // 0x1c8b2c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B30u; }
        if (ctx->pc != 0x1C8B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B30u; }
        if (ctx->pc != 0x1C8B30u) { return; }
    }
    ctx->pc = 0x1C8B30u;
label_1c8b30:
    // 0x1c8b30: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1c8b34: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1c8b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1c8b38: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1C8B38u;
    SET_GPR_U32(ctx, 31, 0x1C8B40u);
    ctx->pc = 0x1C8B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B38u;
            // 0x1c8b3c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B40u; }
        if (ctx->pc != 0x1C8B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B40u; }
        if (ctx->pc != 0x1C8B40u) { return; }
    }
    ctx->pc = 0x1C8B40u;
label_1c8b40:
    // 0x1c8b40: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1c8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1c8b44: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C8B44u;
    SET_GPR_U32(ctx, 31, 0x1C8B4Cu);
    ctx->pc = 0x1C8B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B44u;
            // 0x1c8b48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B4Cu; }
        if (ctx->pc != 0x1C8B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B4Cu; }
        if (ctx->pc != 0x1C8B4Cu) { return; }
    }
    ctx->pc = 0x1C8B4Cu;
label_1c8b4c:
    // 0x1c8b4c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1c8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1c8b50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c8b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8b54: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C8B54u;
    SET_GPR_U32(ctx, 31, 0x1C8B5Cu);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B5Cu; }
        if (ctx->pc != 0x1C8B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B5Cu; }
        if (ctx->pc != 0x1C8B5Cu) { return; }
    }
    ctx->pc = 0x1C8B5Cu;
label_1c8b5c:
    // 0x1c8b5c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1c8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1c8b60: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c8b60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c8b64: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1C8B64u;
    SET_GPR_U32(ctx, 31, 0x1C8B6Cu);
    ctx->pc = 0x1C8B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B64u;
            // 0x1c8b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B6Cu; }
        if (ctx->pc != 0x1C8B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B6Cu; }
        if (ctx->pc != 0x1C8B6Cu) { return; }
    }
    ctx->pc = 0x1C8B6Cu;
label_1c8b6c:
    // 0x1c8b6c: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x1c8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1c8b70: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1c8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1c8b74: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1c8b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1c8b78: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1C8B78u;
    SET_GPR_U32(ctx, 31, 0x1C8B80u);
    ctx->pc = 0x1C8B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B78u;
            // 0x1c8b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B80u; }
        if (ctx->pc != 0x1C8B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B80u; }
        if (ctx->pc != 0x1C8B80u) { return; }
    }
    ctx->pc = 0x1C8B80u;
label_1c8b80:
    // 0x1c8b80: 0x27b60264  addiu       $s6, $sp, 0x264
    ctx->pc = 0x1c8b80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
    // 0x1c8b84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8b88: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x1c8b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8b8c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c8b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c8b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8b94: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1c8b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1c8b98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8b9c: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C8BA4u);
    ctx->pc = 0x1C8BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B9Cu;
            // 0x1c8ba0: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BA4u; }
        if (ctx->pc != 0x1C8BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BA4u; }
        if (ctx->pc != 0x1C8BA4u) { return; }
    }
    ctx->pc = 0x1C8BA4u;
label_1c8ba4:
    // 0x1c8ba4: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x1c8ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8ba8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c8bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8bb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c8bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bb4: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1c8bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1c8bb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8bb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8bbc: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C8BBCu;
    SET_GPR_U32(ctx, 31, 0x1C8BC4u);
    ctx->pc = 0x1C8BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BBCu;
            // 0x1c8bc0: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BC4u; }
        if (ctx->pc != 0x1C8BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BC4u; }
        if (ctx->pc != 0x1C8BC4u) { return; }
    }
    ctx->pc = 0x1C8BC4u;
label_1c8bc4:
    // 0x1c8bc4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8bc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bcc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C8BCCu;
    SET_GPR_U32(ctx, 31, 0x1C8BD4u);
    ctx->pc = 0x1C8BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BCCu;
            // 0x1c8bd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BD4u; }
        if (ctx->pc != 0x1C8BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BD4u; }
        if (ctx->pc != 0x1C8BD4u) { return; }
    }
    ctx->pc = 0x1C8BD4u;
label_1c8bd4:
    // 0x1c8bd4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8bd8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C8BD8u;
    SET_GPR_U32(ctx, 31, 0x1C8BE0u);
    ctx->pc = 0x1C8BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BD8u;
            // 0x1c8bdc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BE0u; }
        if (ctx->pc != 0x1C8BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BE0u; }
        if (ctx->pc != 0x1C8BE0u) { return; }
    }
    ctx->pc = 0x1C8BE0u;
label_1c8be0:
    // 0x1c8be0: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x1c8be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1c8be4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8be8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C8BE8u;
    SET_GPR_U32(ctx, 31, 0x1C8BF0u);
    ctx->pc = 0x1C8BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BE8u;
            // 0x1c8bec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BF0u; }
        if (ctx->pc != 0x1C8BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BF0u; }
        if (ctx->pc != 0x1C8BF0u) { return; }
    }
    ctx->pc = 0x1C8BF0u;
label_1c8bf0:
    // 0x1c8bf0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c8bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bf4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C8BF4u;
    SET_GPR_U32(ctx, 31, 0x1C8BFCu);
    ctx->pc = 0x1C8BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BF4u;
            // 0x1c8bf8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BFCu; }
        if (ctx->pc != 0x1C8BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BFCu; }
        if (ctx->pc != 0x1C8BFCu) { return; }
    }
    ctx->pc = 0x1C8BFCu;
label_1c8bfc:
    // 0x1c8bfc: 0x26460068  addiu       $a2, $s2, 0x68
    ctx->pc = 0x1c8bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x1c8c00: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c8c04: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C8C04u;
    SET_GPR_U32(ctx, 31, 0x1C8C0Cu);
    ctx->pc = 0x1C8C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C04u;
            // 0x1c8c08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C0Cu; }
        if (ctx->pc != 0x1C8C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C0Cu; }
        if (ctx->pc != 0x1C8C0Cu) { return; }
    }
    ctx->pc = 0x1C8C0Cu;
label_1c8c0c:
    // 0x1c8c0c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1c8c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c8c10: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C8C10u;
    SET_GPR_U32(ctx, 31, 0x1C8C18u);
    ctx->pc = 0x1C8C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C10u;
            // 0x1c8c14: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C18u; }
        if (ctx->pc != 0x1C8C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C18u; }
        if (ctx->pc != 0x1C8C18u) { return; }
    }
    ctx->pc = 0x1C8C18u;
label_1c8c18:
    // 0x1c8c18: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x1c8c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1c8c1c: 0x26460068  addiu       $a2, $s2, 0x68
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x1c8c20: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C8C20u;
    SET_GPR_U32(ctx, 31, 0x1C8C28u);
    ctx->pc = 0x1C8C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C20u;
            // 0x1c8c24: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C28u; }
        if (ctx->pc != 0x1C8C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C28u; }
        if (ctx->pc != 0x1C8C28u) { return; }
    }
    ctx->pc = 0x1C8C28u;
label_1c8c28:
    // 0x1c8c28: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c8c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c2c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C8C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C34u);
    ctx->pc = 0x1C8C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C2Cu;
            // 0x1c8c30: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C34u; }
        if (ctx->pc != 0x1C8C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C34u; }
        if (ctx->pc != 0x1C8C34u) { return; }
    }
    ctx->pc = 0x1C8C34u;
label_1c8c34:
    // 0x1c8c34: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1c8c34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1c8c38: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1c8c38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1c8c3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c8c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c8c40:
    // 0x1c8c40: 0x86a207bc  lh          $v0, 0x7BC($s5)
    ctx->pc = 0x1c8c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1980)));
    // 0x1c8c44: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c8c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8c48: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x1C8C48u;
    {
        const bool branch_taken_0x1c8c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C48u;
            // 0x1c8c4c: 0x2b39021  addu        $s2, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c48) {
            ctx->pc = 0x1C89ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c89ac;
        }
    }
    ctx->pc = 0x1C8C50u;
    // 0x1c8c50: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C8C50u;
    SET_GPR_U32(ctx, 31, 0x1C8C58u);
    ctx->pc = 0x1C8C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C50u;
            // 0x1c8c54: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C58u; }
        if (ctx->pc != 0x1C8C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8C58u; }
        if (ctx->pc != 0x1C8C58u) { return; }
    }
    ctx->pc = 0x1C8C58u;
label_1c8c58:
    // 0x1c8c58: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c8c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8c5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c8c5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8c60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c8c60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c8c64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c8c64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8c68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c8c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8c6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c8c6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8c70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c8c70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8c74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c8c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C80u;
            // 0x1c8c84: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8C88u;
}
