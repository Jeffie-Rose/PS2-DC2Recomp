#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInit__F13INIT_LOOP_ARG
// Address: 0x191970 - 0x191c30
void MenuInit__F13INIT_LOOP_ARG_0x191970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInit__F13INIT_LOOP_ARG_0x191970");
#endif

    switch (ctx->pc) {
        case 0x191988u: goto label_191988;
        case 0x191990u: goto label_191990;
        case 0x19199cu: goto label_19199c;
        case 0x1919a8u: goto label_1919a8;
        case 0x1919b4u: goto label_1919b4;
        case 0x1919bcu: goto label_1919bc;
        case 0x1919c4u: goto label_1919c4;
        case 0x1919e4u: goto label_1919e4;
        case 0x191a00u: goto label_191a00;
        case 0x191a1cu: goto label_191a1c;
        case 0x191a3cu: goto label_191a3c;
        case 0x191a50u: goto label_191a50;
        case 0x191a60u: goto label_191a60;
        case 0x191a74u: goto label_191a74;
        case 0x191a80u: goto label_191a80;
        case 0x191a94u: goto label_191a94;
        case 0x191aa0u: goto label_191aa0;
        case 0x191ab4u: goto label_191ab4;
        case 0x191ac0u: goto label_191ac0;
        case 0x191ad4u: goto label_191ad4;
        case 0x191ae0u: goto label_191ae0;
        case 0x191af4u: goto label_191af4;
        case 0x191b04u: goto label_191b04;
        case 0x191b1cu: goto label_191b1c;
        case 0x191b2cu: goto label_191b2c;
        case 0x191b44u: goto label_191b44;
        case 0x191b5cu: goto label_191b5c;
        case 0x191b74u: goto label_191b74;
        case 0x191b8cu: goto label_191b8c;
        case 0x191ba0u: goto label_191ba0;
        case 0x191bb4u: goto label_191bb4;
        case 0x191bc4u: goto label_191bc4;
        case 0x191bccu: goto label_191bcc;
        case 0x191be8u: goto label_191be8;
        case 0x191bf0u: goto label_191bf0;
        case 0x191c0cu: goto label_191c0c;
        case 0x191c1cu: goto label_191c1c;
        default: break;
    }

    ctx->pc = 0x191970u;

    // 0x191970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191974: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x191974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x191978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19197c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191980: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x191980u;
    SET_GPR_U32(ctx, 31, 0x191988u);
    ctx->pc = 0x191984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191980u;
            // 0x191984: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191988u; }
        if (ctx->pc != 0x191988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191988u; }
        if (ctx->pc != 0x191988u) { return; }
    }
    ctx->pc = 0x191988u;
label_191988:
    // 0x191988: 0xc0637cc  jal         func_18DF30
    ctx->pc = 0x191988u;
    SET_GPR_U32(ctx, 31, 0x191990u);
    ctx->pc = 0x19198Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191988u;
            // 0x19198c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DF30u;
    if (runtime->hasFunction(0x18DF30u)) {
        auto targetFn = runtime->lookupFunction(0x18DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191990u; }
        if (ctx->pc != 0x191990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndDeletePort__Fi_0x18df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191990u; }
        if (ctx->pc != 0x191990u) { return; }
    }
    ctx->pc = 0x191990u;
label_191990:
    // 0x191990: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x191994: 0xc0a9700  jal         func_2A5C00
    ctx->pc = 0x191994u;
    SET_GPR_U32(ctx, 31, 0x19199Cu);
    ctx->pc = 0x191998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191994u;
            // 0x191998: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C00u;
    if (runtime->hasFunction(0x2A5C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19199Cu; }
        if (ctx->pc != 0x19199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBGM__6CSceneFv_0x2a5c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19199Cu; }
        if (ctx->pc != 0x19199Cu) { return; }
    }
    ctx->pc = 0x19199Cu;
label_19199c:
    // 0x19199c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1919a0: 0xc0a9784  jal         func_2A5E10
    ctx->pc = 0x1919A0u;
    SET_GPR_U32(ctx, 31, 0x1919A8u);
    ctx->pc = 0x1919A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1919A0u;
            // 0x1919a4: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5E10u;
    if (runtime->hasFunction(0x2A5E10u)) {
        auto targetFn = runtime->lookupFunction(0x2A5E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919A8u; }
        if (ctx->pc != 0x1919A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeEnv__6CSceneFv_0x2a5e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919A8u; }
        if (ctx->pc != 0x1919A8u) { return; }
    }
    ctx->pc = 0x1919A8u;
label_1919a8:
    // 0x1919a8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1919ac: 0xc0a9714  jal         func_2A5C50
    ctx->pc = 0x1919ACu;
    SET_GPR_U32(ctx, 31, 0x1919B4u);
    ctx->pc = 0x1919B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1919ACu;
            // 0x1919b0: 0x24848260  addiu       $a0, $a0, -0x7DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C50u;
    if (runtime->hasFunction(0x2A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919B4u; }
        if (ctx->pc != 0x1919B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeSrc__6CSceneFv_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919B4u; }
        if (ctx->pc != 0x1919B4u) { return; }
    }
    ctx->pc = 0x1919B4u;
label_1919b4:
    // 0x1919b4: 0xc051878  jal         func_1461E0
    ctx->pc = 0x1919B4u;
    SET_GPR_U32(ctx, 31, 0x1919BCu);
    ctx->pc = 0x1919B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1919B4u;
            // 0x1919b8: 0xaf808b10  sw          $zero, -0x74F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461E0u;
    if (runtime->hasFunction(0x1461E0u)) {
        auto targetFn = runtime->lookupFunction(0x1461E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919BCu; }
        if (ctx->pc != 0x1919BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitFont__Fv_0x1461e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919BCu; }
        if (ctx->pc != 0x1919BCu) { return; }
    }
    ctx->pc = 0x1919BCu;
label_1919bc:
    // 0x1919bc: 0xc06423c  jal         func_1908F0
    ctx->pc = 0x1919BCu;
    SET_GPR_U32(ctx, 31, 0x1919C4u);
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919C4u; }
        if (ctx->pc != 0x1919C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919C4u; }
        if (ctx->pc != 0x1919C4u) { return; }
    }
    ctx->pc = 0x1919C4u;
label_1919c4:
    // 0x1919c4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1919c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1919c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1919c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919cc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1919ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1919d0: 0x83828b14  lb          $v0, -0x74EC($gp)
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937364)));
    // 0x1919d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1919D4u;
    {
        const bool branch_taken_0x1919d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1919D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919D4u;
            // 0x1919d8: 0x3c0401e6  lui         $a0, 0x1E6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919d4) {
            ctx->pc = 0x1919ECu;
            goto label_1919ec;
        }
    }
    ctx->pc = 0x1919DCu;
    // 0x1919dc: 0xc04e640  jal         func_139900
    ctx->pc = 0x1919DCu;
    SET_GPR_U32(ctx, 31, 0x1919E4u);
    ctx->pc = 0x1919E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1919DCu;
            // 0x1919e0: 0x248471b0  addiu       $a0, $a0, 0x71B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919E4u; }
        if (ctx->pc != 0x1919E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919E4u; }
        if (ctx->pc != 0x1919E4u) { return; }
    }
    ctx->pc = 0x1919E4u;
label_1919e4:
    // 0x1919e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1919e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1919e8: 0xa3828b14  sb          $v0, -0x74EC($gp)
    ctx->pc = 0x1919e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937364), (uint8_t)GPR_U32(ctx, 2));
label_1919ec:
    // 0x1919ec: 0x83828b18  lb          $v0, -0x74E8($gp)
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937368)));
    // 0x1919f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1919F0u;
    {
        const bool branch_taken_0x1919f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1919F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919F0u;
            // 0x1919f4: 0x3c0401e6  lui         $a0, 0x1E6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919f0) {
            ctx->pc = 0x191A08u;
            goto label_191a08;
        }
    }
    ctx->pc = 0x1919F8u;
    // 0x1919f8: 0xc04e640  jal         func_139900
    ctx->pc = 0x1919F8u;
    SET_GPR_U32(ctx, 31, 0x191A00u);
    ctx->pc = 0x1919FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1919F8u;
            // 0x1919fc: 0x248471e0  addiu       $a0, $a0, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A00u; }
        if (ctx->pc != 0x191A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A00u; }
        if (ctx->pc != 0x191A00u) { return; }
    }
    ctx->pc = 0x191A00u;
label_191a00:
    // 0x191a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191a04: 0xa3828b18  sb          $v0, -0x74E8($gp)
    ctx->pc = 0x191a04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937368), (uint8_t)GPR_U32(ctx, 2));
label_191a08:
    // 0x191a08: 0x83828b1c  lb          $v0, -0x74E4($gp)
    ctx->pc = 0x191a08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937372)));
    // 0x191a0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191A0Cu;
    {
        const bool branch_taken_0x191a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A0Cu;
            // 0x191a10: 0x3c0401e6  lui         $a0, 0x1E6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a0c) {
            ctx->pc = 0x191A24u;
            goto label_191a24;
        }
    }
    ctx->pc = 0x191A14u;
    // 0x191a14: 0xc04e640  jal         func_139900
    ctx->pc = 0x191A14u;
    SET_GPR_U32(ctx, 31, 0x191A1Cu);
    ctx->pc = 0x191A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A14u;
            // 0x191a18: 0x24847210  addiu       $a0, $a0, 0x7210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A1Cu; }
        if (ctx->pc != 0x191A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A1Cu; }
        if (ctx->pc != 0x191A1Cu) { return; }
    }
    ctx->pc = 0x191A1Cu;
label_191a1c:
    // 0x191a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191a20: 0xa3828b1c  sb          $v0, -0x74E4($gp)
    ctx->pc = 0x191a20u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937372), (uint8_t)GPR_U32(ctx, 2));
label_191a24:
    // 0x191a24: 0x83828b20  lb          $v0, -0x74E0($gp)
    ctx->pc = 0x191a24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937376)));
    // 0x191a28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x191A28u;
    {
        const bool branch_taken_0x191a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A28u;
            // 0x191a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a28) {
            ctx->pc = 0x191A48u;
            goto label_191a48;
        }
    }
    ctx->pc = 0x191A30u;
    // 0x191a30: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x191a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x191a34: 0xc04e640  jal         func_139900
    ctx->pc = 0x191A34u;
    SET_GPR_U32(ctx, 31, 0x191A3Cu);
    ctx->pc = 0x191A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A34u;
            // 0x191a38: 0x24847240  addiu       $a0, $a0, 0x7240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A3Cu; }
        if (ctx->pc != 0x191A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A3Cu; }
        if (ctx->pc != 0x191A3Cu) { return; }
    }
    ctx->pc = 0x191A3Cu;
label_191a3c:
    // 0x191a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191a40: 0xa3828b20  sb          $v0, -0x74E0($gp)
    ctx->pc = 0x191a40u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937376), (uint8_t)GPR_U32(ctx, 2));
    // 0x191a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191a48:
    // 0x191a48: 0xc04e704  jal         func_139C10
    ctx->pc = 0x191A48u;
    SET_GPR_U32(ctx, 31, 0x191A50u);
    ctx->pc = 0x191A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A48u;
            // 0x191a4c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A50u; }
        if (ctx->pc != 0x191A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A50u; }
        if (ctx->pc != 0x191A50u) { return; }
    }
    ctx->pc = 0x191A50u;
label_191a50:
    // 0x191a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x191a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a58: 0xc04e704  jal         func_139C10
    ctx->pc = 0x191A58u;
    SET_GPR_U32(ctx, 31, 0x191A60u);
    ctx->pc = 0x191A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A58u;
            // 0x191a5c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A60u; }
        if (ctx->pc != 0x191A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A60u; }
        if (ctx->pc != 0x191A60u) { return; }
    }
    ctx->pc = 0x191A60u;
label_191a60:
    // 0x191a60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a68: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x191a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x191a6c: 0xc050784  jal         func_141E10
    ctx->pc = 0x191A6Cu;
    SET_GPR_U32(ctx, 31, 0x191A74u);
    ctx->pc = 0x191A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A6Cu;
            // 0x191a70: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A74u; }
        if (ctx->pc != 0x191A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A74u; }
        if (ctx->pc != 0x191A74u) { return; }
    }
    ctx->pc = 0x191A74u;
label_191a74:
    // 0x191a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a78: 0xc04e704  jal         func_139C10
    ctx->pc = 0x191A78u;
    SET_GPR_U32(ctx, 31, 0x191A80u);
    ctx->pc = 0x191A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A78u;
            // 0x191a7c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A80u; }
        if (ctx->pc != 0x191A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A80u; }
        if (ctx->pc != 0x191A80u) { return; }
    }
    ctx->pc = 0x191A80u;
label_191a80:
    // 0x191a80: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x191a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x191a84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a88: 0x248471b0  addiu       $a0, $a0, 0x71B0
    ctx->pc = 0x191a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29104));
    // 0x191a8c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x191A8Cu;
    SET_GPR_U32(ctx, 31, 0x191A94u);
    ctx->pc = 0x191A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A8Cu;
            // 0x191a90: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A94u; }
        if (ctx->pc != 0x191A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A94u; }
        if (ctx->pc != 0x191A94u) { return; }
    }
    ctx->pc = 0x191A94u;
label_191a94:
    // 0x191a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a98: 0xc04e704  jal         func_139C10
    ctx->pc = 0x191A98u;
    SET_GPR_U32(ctx, 31, 0x191AA0u);
    ctx->pc = 0x191A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A98u;
            // 0x191a9c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AA0u; }
        if (ctx->pc != 0x191AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AA0u; }
        if (ctx->pc != 0x191AA0u) { return; }
    }
    ctx->pc = 0x191AA0u;
label_191aa0:
    // 0x191aa0: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x191aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x191aa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191aa8: 0x248471e0  addiu       $a0, $a0, 0x71E0
    ctx->pc = 0x191aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29152));
    // 0x191aac: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x191AACu;
    SET_GPR_U32(ctx, 31, 0x191AB4u);
    ctx->pc = 0x191AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191AACu;
            // 0x191ab0: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AB4u; }
        if (ctx->pc != 0x191AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AB4u; }
        if (ctx->pc != 0x191AB4u) { return; }
    }
    ctx->pc = 0x191AB4u;
label_191ab4:
    // 0x191ab4: 0x3405c350  ori         $a1, $zero, 0xC350
    ctx->pc = 0x191ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x191ab8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x191AB8u;
    SET_GPR_U32(ctx, 31, 0x191AC0u);
    ctx->pc = 0x191ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191AB8u;
            // 0x191abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AC0u; }
        if (ctx->pc != 0x191AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AC0u; }
        if (ctx->pc != 0x191AC0u) { return; }
    }
    ctx->pc = 0x191AC0u;
label_191ac0:
    // 0x191ac0: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x191ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x191ac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ac8: 0x24847210  addiu       $a0, $a0, 0x7210
    ctx->pc = 0x191ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29200));
    // 0x191acc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x191ACCu;
    SET_GPR_U32(ctx, 31, 0x191AD4u);
    ctx->pc = 0x191AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191ACCu;
            // 0x191ad0: 0x3406c350  ori         $a2, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AD4u; }
        if (ctx->pc != 0x191AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AD4u; }
        if (ctx->pc != 0x191AD4u) { return; }
    }
    ctx->pc = 0x191AD4u;
label_191ad4:
    // 0x191ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ad8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x191AD8u;
    SET_GPR_U32(ctx, 31, 0x191AE0u);
    ctx->pc = 0x191ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191AD8u;
            // 0x191adc: 0x3405c350  ori         $a1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AE0u; }
        if (ctx->pc != 0x191AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AE0u; }
        if (ctx->pc != 0x191AE0u) { return; }
    }
    ctx->pc = 0x191AE0u;
label_191ae0:
    // 0x191ae0: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x191ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ae8: 0x24847240  addiu       $a0, $a0, 0x7240
    ctx->pc = 0x191ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29248));
    // 0x191aec: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x191AECu;
    SET_GPR_U32(ctx, 31, 0x191AF4u);
    ctx->pc = 0x191AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191AECu;
            // 0x191af0: 0x3406c350  ori         $a2, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AF4u; }
        if (ctx->pc != 0x191AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AF4u; }
        if (ctx->pc != 0x191AF4u) { return; }
    }
    ctx->pc = 0x191AF4u;
label_191af4:
    // 0x191af4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x191af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x191af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191afc: 0xc04e704  jal         func_139C10
    ctx->pc = 0x191AFCu;
    SET_GPR_U32(ctx, 31, 0x191B04u);
    ctx->pc = 0x191B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191AFCu;
            // 0x191b00: 0x3445a120  ori         $a1, $v0, 0xA120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B04u; }
        if (ctx->pc != 0x191B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B04u; }
        if (ctx->pc != 0x191B04u) { return; }
    }
    ctx->pc = 0x191B04u;
label_191b04:
    // 0x191b04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b08: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x191b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x191b0c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x191b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x191b10: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x191b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x191b14: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x191B14u;
    SET_GPR_U32(ctx, 31, 0x191B1Cu);
    ctx->pc = 0x191B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B14u;
            // 0x191b18: 0x3446a120  ori         $a2, $v0, 0xA120 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B1Cu; }
        if (ctx->pc != 0x191B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B1Cu; }
        if (ctx->pc != 0x191B1Cu) { return; }
    }
    ctx->pc = 0x191B1Cu;
label_191b1c:
    // 0x191b1c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x191b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x191b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b24: 0xc04e704  jal         func_139C10
    ctx->pc = 0x191B24u;
    SET_GPR_U32(ctx, 31, 0x191B2Cu);
    ctx->pc = 0x191B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B24u;
            // 0x191b28: 0x344586a0  ori         $a1, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B2Cu; }
        if (ctx->pc != 0x191B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B2Cu; }
        if (ctx->pc != 0x191B2Cu) { return; }
    }
    ctx->pc = 0x191B2Cu;
label_191b2c:
    // 0x191b2c: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x191b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x191b30: 0x3c0501e6  lui         $a1, 0x1E6
    ctx->pc = 0x191b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)486 << 16));
    // 0x191b34: 0xaf828ac0  sw          $v0, -0x7540($gp)
    ctx->pc = 0x191b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937280), GPR_U32(ctx, 2));
    // 0x191b38: 0x248471b0  addiu       $a0, $a0, 0x71B0
    ctx->pc = 0x191b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29104));
    // 0x191b3c: 0xc0507bc  jal         func_141EF0
    ctx->pc = 0x191B3Cu;
    SET_GPR_U32(ctx, 31, 0x191B44u);
    ctx->pc = 0x191B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B3Cu;
            // 0x191b40: 0x24a571e0  addiu       $a1, $a1, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B44u; }
        if (ctx->pc != 0x191B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B44u; }
        if (ctx->pc != 0x191B44u) { return; }
    }
    ctx->pc = 0x191B44u;
label_191b44:
    // 0x191b44: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x191b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x191b48: 0x3c0501e6  lui         $a1, 0x1E6
    ctx->pc = 0x191b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)486 << 16));
    // 0x191b4c: 0x24847210  addiu       $a0, $a0, 0x7210
    ctx->pc = 0x191b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29200));
    // 0x191b50: 0x24a57240  addiu       $a1, $a1, 0x7240
    ctx->pc = 0x191b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29248));
    // 0x191b54: 0xc050810  jal         func_142040
    ctx->pc = 0x191B54u;
    SET_GPR_U32(ctx, 31, 0x191B5Cu);
    ctx->pc = 0x191B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B54u;
            // 0x191b58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B5Cu; }
        if (ctx->pc != 0x191B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B5Cu; }
        if (ctx->pc != 0x191B5Cu) { return; }
    }
    ctx->pc = 0x191B5Cu;
label_191b5c:
    // 0x191b5c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x191b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x191b60: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x191b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x191b64: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x191b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x191b68: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x191b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x191b6c: 0xc052c2c  jal         func_14B0B0
    ctx->pc = 0x191B6Cu;
    SET_GPR_U32(ctx, 31, 0x191B74u);
    ctx->pc = 0x191B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B6Cu;
            // 0x191b70: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B0B0u;
    if (runtime->hasFunction(0x14B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x14B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B74u; }
        if (ctx->pc != 0x191B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat__8CGamePadFiii_0x14b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B74u; }
        if (ctx->pc != 0x191B74u) { return; }
    }
    ctx->pc = 0x191B74u;
label_191b74:
    // 0x191b74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x191b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x191b78: 0x0  nop
    ctx->pc = 0x191b78u;
    // NOP
    // 0x191b7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x191b7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x191b80: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x191b80u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x191b84: 0xc050da0  jal         func_143680
    ctx->pc = 0x191B84u;
    SET_GPR_U32(ctx, 31, 0x191B8Cu);
    ctx->pc = 0x191B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B84u;
            // 0x191b88: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143680u;
    if (runtime->hasFunction(0x143680u)) {
        auto targetFn = runtime->lookupFunction(0x143680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B8Cu; }
        if (ctx->pc != 0x191B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__Fffff_0x143680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B8Cu; }
        if (ctx->pc != 0x191B8Cu) { return; }
    }
    ctx->pc = 0x191B8Cu;
label_191b8c:
    // 0x191b8c: 0x3c0601e6  lui         $a2, 0x1E6
    ctx->pc = 0x191b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)486 << 16));
    // 0x191b90: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x191b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x191b94: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x191b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x191b98: 0xc064278  jal         func_1909E0
    ctx->pc = 0x191B98u;
    SET_GPR_U32(ctx, 31, 0x191BA0u);
    ctx->pc = 0x191B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B98u;
            // 0x191b9c: 0x24c67180  addiu       $a2, $a2, 0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909E0u;
    if (runtime->hasFunction(0x1909E0u)) {
        auto targetFn = runtime->lookupFunction(0x1909E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BA0u; }
        if (ctx->pc != 0x191BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTextureTable__FiiP9mgCMemory_0x1909e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BA0u; }
        if (ctx->pc != 0x191BA0u) { return; }
    }
    ctx->pc = 0x191BA0u;
label_191ba0:
    // 0x191ba0: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x191ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x191ba4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191BA4u;
    {
        const bool branch_taken_0x191ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191ba4) {
            ctx->pc = 0x191BB4u;
            goto label_191bb4;
        }
    }
    ctx->pc = 0x191BACu;
    // 0x191bac: 0xc0648e4  jal         func_192390
    ctx->pc = 0x191BACu;
    SET_GPR_U32(ctx, 31, 0x191BB4u);
    ctx->pc = 0x192390u;
    if (runtime->hasFunction(0x192390u)) {
        auto targetFn = runtime->lookupFunction(0x192390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BB4u; }
        if (ctx->pc != 0x191BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEventSelect__Fv_0x192390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BB4u; }
        if (ctx->pc != 0x191BB4u) { return; }
    }
    ctx->pc = 0x191BB4u;
label_191bb4:
    // 0x191bb4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x191bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x191bb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191bbc: 0xc04b950  jal         func_12E540
    ctx->pc = 0x191BBCu;
    SET_GPR_U32(ctx, 31, 0x191BC4u);
    ctx->pc = 0x191BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191BBCu;
            // 0x191bc0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BC4u; }
        if (ctx->pc != 0x191BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BC4u; }
        if (ctx->pc != 0x191BC4u) { return; }
    }
    ctx->pc = 0x191BC4u;
label_191bc4:
    // 0x191bc4: 0xc0b61d8  jal         func_2D8760
    ctx->pc = 0x191BC4u;
    SET_GPR_U32(ctx, 31, 0x191BCCu);
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BCCu; }
        if (ctx->pc != 0x191BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiImgPtr__Fv_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BCCu; }
        if (ctx->pc != 0x191BCCu) { return; }
    }
    ctx->pc = 0x191BCCu;
label_191bcc:
    // 0x191bcc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x191bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x191bd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191bd4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x191bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x191bd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x191bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191bdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191be0: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x191BE0u;
    SET_GPR_U32(ctx, 31, 0x191BE8u);
    ctx->pc = 0x191BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191BE0u;
            // 0x191be4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BE8u; }
        if (ctx->pc != 0x191BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BE8u; }
        if (ctx->pc != 0x191BE8u) { return; }
    }
    ctx->pc = 0x191BE8u;
label_191be8:
    // 0x191be8: 0xc0b61f8  jal         func_2D87E0
    ctx->pc = 0x191BE8u;
    SET_GPR_U32(ctx, 31, 0x191BF0u);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BF0u; }
        if (ctx->pc != 0x191BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BF0u; }
        if (ctx->pc != 0x191BF0u) { return; }
    }
    ctx->pc = 0x191BF0u;
label_191bf0:
    // 0x191bf0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x191bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x191bf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191bf8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x191bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x191bfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x191bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c04: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x191C04u;
    SET_GPR_U32(ctx, 31, 0x191C0Cu);
    ctx->pc = 0x191C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191C04u;
            // 0x191c08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C0Cu; }
        if (ctx->pc != 0x191C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C0Cu; }
        if (ctx->pc != 0x191C0Cu) { return; }
    }
    ctx->pc = 0x191C0Cu;
label_191c0c:
    // 0x191c0c: 0x8f848ac0  lw          $a0, -0x7540($gp)
    ctx->pc = 0x191c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x191c10: 0x3c0501e6  lui         $a1, 0x1E6
    ctx->pc = 0x191c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)486 << 16));
    // 0x191c14: 0xc0b4f04  jal         func_2D3C10
    ctx->pc = 0x191C14u;
    SET_GPR_U32(ctx, 31, 0x191C1Cu);
    ctx->pc = 0x191C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191C14u;
            // 0x191c18: 0x24a57180  addiu       $a1, $a1, 0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3C10u;
    if (runtime->hasFunction(0x2D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x2D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C1Cu; }
        if (ctx->pc != 0x191C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadEventViewData__FP1P9mgCMemory_0x2d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C1Cu; }
        if (ctx->pc != 0x191C1Cu) { return; }
    }
    ctx->pc = 0x191C1Cu;
label_191c1c:
    // 0x191c1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191c28: 0x3e00008  jr          $ra
    ctx->pc = 0x191C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C28u;
            // 0x191c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191C30u;
}
