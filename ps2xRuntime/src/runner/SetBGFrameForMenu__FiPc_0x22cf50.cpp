#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBGFrameForMenu__FiPc
// Address: 0x22cf50 - 0x22d060
void SetBGFrameForMenu__FiPc_0x22cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBGFrameForMenu__FiPc_0x22cf50");
#endif

    switch (ctx->pc) {
        case 0x22cf7cu: goto label_22cf7c;
        case 0x22cf84u: goto label_22cf84;
        case 0x22cf8cu: goto label_22cf8c;
        case 0x22cfacu: goto label_22cfac;
        case 0x22cfccu: goto label_22cfcc;
        case 0x22cfd4u: goto label_22cfd4;
        case 0x22cfe8u: goto label_22cfe8;
        case 0x22cff4u: goto label_22cff4;
        case 0x22d000u: goto label_22d000;
        case 0x22d00cu: goto label_22d00c;
        case 0x22d020u: goto label_22d020;
        case 0x22d030u: goto label_22d030;
        case 0x22d04cu: goto label_22d04c;
        default: break;
    }

    ctx->pc = 0x22cf50u;

    // 0x22cf50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22cf54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22cf54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22cf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22cf5c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22cf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22cf60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22cf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22cf64: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22cf68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22cf6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cf6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22cf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf74: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x22CF74u;
    SET_GPR_U32(ctx, 31, 0x22CF7Cu);
    ctx->pc = 0x22CF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF74u;
            // 0x22cf78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF7Cu; }
        if (ctx->pc != 0x22CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF7Cu; }
        if (ctx->pc != 0x22CF7Cu) { return; }
    }
    ctx->pc = 0x22CF7Cu;
label_22cf7c:
    // 0x22cf7c: 0xc04b120  jal         func_12C480
    ctx->pc = 0x22CF7Cu;
    SET_GPR_U32(ctx, 31, 0x22CF84u);
    ctx->pc = 0x22CF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF7Cu;
            // 0x22cf80: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF84u; }
        if (ctx->pc != 0x22CF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF84u; }
        if (ctx->pc != 0x22CF84u) { return; }
    }
    ctx->pc = 0x22CF84u;
label_22cf84:
    // 0x22cf84: 0xc0510c0  jal         func_144300
    ctx->pc = 0x22CF84u;
    SET_GPR_U32(ctx, 31, 0x22CF8Cu);
    ctx->pc = 0x22CF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF84u;
            // 0x22cf88: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF8Cu; }
        if (ctx->pc != 0x22CF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF8Cu; }
        if (ctx->pc != 0x22CF8Cu) { return; }
    }
    ctx->pc = 0x22CF8Cu;
label_22cf8c:
    // 0x22cf8c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x22cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x22cf90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22cf94: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x22cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x22cf98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cf9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfa0: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x22cfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22cfa4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22CFA4u;
    SET_GPR_U32(ctx, 31, 0x22CFACu);
    ctx->pc = 0x22CFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFA4u;
            // 0x22cfa8: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFACu; }
        if (ctx->pc != 0x22CFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFACu; }
        if (ctx->pc != 0x22CFACu) { return; }
    }
    ctx->pc = 0x22CFACu;
label_22cfac:
    // 0x22cfac: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x22cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x22cfb0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x22cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22cfb4: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x22cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x22cfb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cfbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfc0: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x22cfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22cfc4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22CFC4u;
    SET_GPR_U32(ctx, 31, 0x22CFCCu);
    ctx->pc = 0x22CFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFC4u;
            // 0x22cfc8: 0x240c0  sll         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFCCu; }
        if (ctx->pc != 0x22CFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFCCu; }
        if (ctx->pc != 0x22CFCCu) { return; }
    }
    ctx->pc = 0x22CFCCu;
label_22cfcc:
    // 0x22cfcc: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x22CFCCu;
    SET_GPR_U32(ctx, 31, 0x22CFD4u);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFD4u; }
        if (ctx->pc != 0x22CFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFD4u; }
        if (ctx->pc != 0x22CFD4u) { return; }
    }
    ctx->pc = 0x22CFD4u;
label_22cfd4:
    // 0x22cfd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22cfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfe0: 0xc04d104  jal         func_134410
    ctx->pc = 0x22CFE0u;
    SET_GPR_U32(ctx, 31, 0x22CFE8u);
    ctx->pc = 0x22CFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFE0u;
            // 0x22cfe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFE8u; }
        if (ctx->pc != 0x22CFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFE8u; }
        if (ctx->pc != 0x22CFE8u) { return; }
    }
    ctx->pc = 0x22CFE8u;
label_22cfe8:
    // 0x22cfe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cfec: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x22CFECu;
    SET_GPR_U32(ctx, 31, 0x22CFF4u);
    ctx->pc = 0x22CFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFECu;
            // 0x22cff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFF4u; }
        if (ctx->pc != 0x22CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CFF4u; }
        if (ctx->pc != 0x22CFF4u) { return; }
    }
    ctx->pc = 0x22CFF4u;
label_22cff4:
    // 0x22cff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cff8: 0xc04d424  jal         func_135090
    ctx->pc = 0x22CFF8u;
    SET_GPR_U32(ctx, 31, 0x22D000u);
    ctx->pc = 0x22CFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CFF8u;
            // 0x22cffc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D000u; }
        if (ctx->pc != 0x22D000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D000u; }
        if (ctx->pc != 0x22D000u) { return; }
    }
    ctx->pc = 0x22D000u;
label_22d000:
    // 0x22d000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d004: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x22D004u;
    SET_GPR_U32(ctx, 31, 0x22D00Cu);
    ctx->pc = 0x22D008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D004u;
            // 0x22d008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D00Cu; }
        if (ctx->pc != 0x22D00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D00Cu; }
        if (ctx->pc != 0x22D00Cu) { return; }
    }
    ctx->pc = 0x22D00Cu;
label_22d00c:
    // 0x22d00c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22d010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d014: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22d014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22d018: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22D018u;
    SET_GPR_U32(ctx, 31, 0x22D020u);
    ctx->pc = 0x22D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D018u;
            // 0x22d01c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D020u; }
        if (ctx->pc != 0x22D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D020u; }
        if (ctx->pc != 0x22D020u) { return; }
    }
    ctx->pc = 0x22D020u;
label_22d020:
    // 0x22d020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22d020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22d024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d028: 0xc04b154  jal         func_12C550
    ctx->pc = 0x22D028u;
    SET_GPR_U32(ctx, 31, 0x22D030u);
    ctx->pc = 0x22D02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D028u;
            // 0x22d02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C550u;
    if (runtime->hasFunction(0x12C550u)) {
        auto targetFn = runtime->lookupFunction(0x12C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D030u; }
        if (ctx->pc != 0x22D030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__10mgCTextureFi_0x12c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D030u; }
        if (ctx->pc != 0x22D030u) { return; }
    }
    ctx->pc = 0x22D030u;
label_22d030:
    // 0x22d030: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22d030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d034: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22d034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22d038: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x22d038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22d03c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22d03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d044: 0xc051158  jal         func_144560
    ctx->pc = 0x22D044u;
    SET_GPR_U32(ctx, 31, 0x22D04Cu);
    ctx->pc = 0x22D048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D044u;
            // 0x22d048: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144560u;
    if (runtime->hasFunction(0x144560u)) {
        auto targetFn = runtime->lookupFunction(0x144560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D04Cu; }
        if (ctx->pc != 0x22D04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTextureiii_0x144560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D04Cu; }
        if (ctx->pc != 0x22D04Cu) { return; }
    }
    ctx->pc = 0x22D04Cu;
label_22d04c:
    // 0x22d04c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22d04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d058: 0x3e00008  jr          $ra
    ctx->pc = 0x22D058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D058u;
            // 0x22d05c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D060u;
}
