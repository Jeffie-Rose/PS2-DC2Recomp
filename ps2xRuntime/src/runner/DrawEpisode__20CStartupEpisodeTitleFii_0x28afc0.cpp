#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEpisode__20CStartupEpisodeTitleFii
// Address: 0x28afc0 - 0x28b1e8
void DrawEpisode__20CStartupEpisodeTitleFii_0x28afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEpisode__20CStartupEpisodeTitleFii_0x28afc0");
#endif

    switch (ctx->pc) {
        case 0x28b004u: goto label_28b004;
        case 0x28b00cu: goto label_28b00c;
        case 0x28b020u: goto label_28b020;
        case 0x28b028u: goto label_28b028;
        case 0x28b038u: goto label_28b038;
        case 0x28b040u: goto label_28b040;
        case 0x28b04cu: goto label_28b04c;
        case 0x28b058u: goto label_28b058;
        case 0x28b064u: goto label_28b064;
        case 0x28b070u: goto label_28b070;
        case 0x28b084u: goto label_28b084;
        case 0x28b09cu: goto label_28b09c;
        case 0x28b0bcu: goto label_28b0bc;
        case 0x28b0d8u: goto label_28b0d8;
        case 0x28b104u: goto label_28b104;
        case 0x28b124u: goto label_28b124;
        case 0x28b150u: goto label_28b150;
        case 0x28b16cu: goto label_28b16c;
        case 0x28b18cu: goto label_28b18c;
        case 0x28b1acu: goto label_28b1ac;
        case 0x28b1ccu: goto label_28b1cc;
        case 0x28b1d4u: goto label_28b1d4;
        default: break;
    }

    ctx->pc = 0x28afc0u;

    // 0x28afc0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x28afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x28afc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28afc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28afcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28afccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28afd0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28afd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28afd4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28afd8: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x28AFD8u;
    {
        const bool branch_taken_0x28afd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFD8u;
            // 0x28afdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afd8) {
            ctx->pc = 0x28B1D4u;
            goto label_28b1d4;
        }
    }
    ctx->pc = 0x28AFE0u;
    // 0x28afe0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x28afe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28afe4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28AFE4u;
    {
        const bool branch_taken_0x28afe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28afe4) {
            ctx->pc = 0x28AFF4u;
            goto label_28aff4;
        }
    }
    ctx->pc = 0x28AFECu;
    // 0x28afec: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x28AFECu;
    {
        const bool branch_taken_0x28afec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFECu;
            // 0x28aff0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afec) {
            ctx->pc = 0x28B1D8u;
            goto label_28b1d8;
        }
    }
    ctx->pc = 0x28AFF4u;
label_28aff4:
    // 0x28aff4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x28aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x28aff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28aff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28affc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x28AFFCu;
    SET_GPR_U32(ctx, 31, 0x28B004u);
    ctx->pc = 0x28B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFFCu;
            // 0x28b000: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B004u; }
        if (ctx->pc != 0x28B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B004u; }
        if (ctx->pc != 0x28B004u) { return; }
    }
    ctx->pc = 0x28B004u;
label_28b004:
    // 0x28b004: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x28B004u;
    SET_GPR_U32(ctx, 31, 0x28B00Cu);
    ctx->pc = 0x28B008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B004u;
            // 0x28b008: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B00Cu; }
        if (ctx->pc != 0x28B00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B00Cu; }
        if (ctx->pc != 0x28B00Cu) { return; }
    }
    ctx->pc = 0x28B00Cu;
label_28b00c:
    // 0x28b00c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x28b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x28b010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b014: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x28b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x28b018: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x28B018u;
    SET_GPR_U32(ctx, 31, 0x28B020u);
    ctx->pc = 0x28B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B018u;
            // 0x28b01c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B020u; }
        if (ctx->pc != 0x28B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B020u; }
        if (ctx->pc != 0x28B020u) { return; }
    }
    ctx->pc = 0x28B020u;
label_28b020:
    // 0x28b020: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x28B020u;
    SET_GPR_U32(ctx, 31, 0x28B028u);
    ctx->pc = 0x28B024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B020u;
            // 0x28b024: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B028u; }
        if (ctx->pc != 0x28B028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B028u; }
        if (ctx->pc != 0x28B028u) { return; }
    }
    ctx->pc = 0x28B028u;
label_28b028:
    // 0x28b028: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b02c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b030: 0xc04d104  jal         func_134410
    ctx->pc = 0x28B030u;
    SET_GPR_U32(ctx, 31, 0x28B038u);
    ctx->pc = 0x28B034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B030u;
            // 0x28b034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B038u; }
        if (ctx->pc != 0x28B038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B038u; }
        if (ctx->pc != 0x28B038u) { return; }
    }
    ctx->pc = 0x28B038u;
label_28b038:
    // 0x28b038: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x28B038u;
    SET_GPR_U32(ctx, 31, 0x28B040u);
    ctx->pc = 0x28B03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B038u;
            // 0x28b03c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B040u; }
        if (ctx->pc != 0x28B040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B040u; }
        if (ctx->pc != 0x28B040u) { return; }
    }
    ctx->pc = 0x28B040u;
label_28b040:
    // 0x28b040: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b044: 0xc04d44c  jal         func_135130
    ctx->pc = 0x28B044u;
    SET_GPR_U32(ctx, 31, 0x28B04Cu);
    ctx->pc = 0x28B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B044u;
            // 0x28b048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B04Cu; }
        if (ctx->pc != 0x28B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B04Cu; }
        if (ctx->pc != 0x28B04Cu) { return; }
    }
    ctx->pc = 0x28B04Cu;
label_28b04c:
    // 0x28b04c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b050: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x28B050u;
    SET_GPR_U32(ctx, 31, 0x28B058u);
    ctx->pc = 0x28B054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B050u;
            // 0x28b054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B058u; }
        if (ctx->pc != 0x28B058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B058u; }
        if (ctx->pc != 0x28B058u) { return; }
    }
    ctx->pc = 0x28B058u;
label_28b058:
    // 0x28b058: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b05c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x28B05Cu;
    SET_GPR_U32(ctx, 31, 0x28B064u);
    ctx->pc = 0x28B060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B05Cu;
            // 0x28b060: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B064u; }
        if (ctx->pc != 0x28B064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B064u; }
        if (ctx->pc != 0x28B064u) { return; }
    }
    ctx->pc = 0x28B064u;
label_28b064:
    // 0x28b064: 0x8f858e80  lw          $a1, -0x7180($gp)
    ctx->pc = 0x28b064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
    // 0x28b068: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x28B068u;
    SET_GPR_U32(ctx, 31, 0x28B070u);
    ctx->pc = 0x28B06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B068u;
            // 0x28b06c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B070u; }
        if (ctx->pc != 0x28B070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B070u; }
        if (ctx->pc != 0x28B070u) { return; }
    }
    ctx->pc = 0x28B070u;
label_28b070:
    // 0x28b070: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x28b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b074: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x28b074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x28b078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b07c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x28B07Cu;
    SET_GPR_U32(ctx, 31, 0x28B084u);
    ctx->pc = 0x28B080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B07Cu;
            // 0x28b080: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B084u; }
        if (ctx->pc != 0x28B084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B084u; }
        if (ctx->pc != 0x28B084u) { return; }
    }
    ctx->pc = 0x28B084u;
label_28b084:
    // 0x28b084: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x28b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28b088: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28b088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b08c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b090: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28b090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b094: 0xc04d320  jal         func_134C80
    ctx->pc = 0x28B094u;
    SET_GPR_U32(ctx, 31, 0x28B09Cu);
    ctx->pc = 0x28B098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B094u;
            // 0x28b098: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B09Cu; }
        if (ctx->pc != 0x28B09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B09Cu; }
        if (ctx->pc != 0x28B09Cu) { return; }
    }
    ctx->pc = 0x28B09Cu;
label_28b09c:
    // 0x28b09c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b0a0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x28b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x28b0a4: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x28b0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x28b0a8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x28b0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28b0ac: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x28b0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28b0b0: 0x24090062  addiu       $t1, $zero, 0x62
    ctx->pc = 0x28b0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x28b0b4: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x28B0B4u;
    SET_GPR_U32(ctx, 31, 0x28B0BCu);
    ctx->pc = 0x28B0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0B4u;
            // 0x28b0b8: 0x240a0038  addiu       $t2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B0BCu; }
        if (ctx->pc != 0x28B0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B0BCu; }
        if (ctx->pc != 0x28B0BCu) { return; }
    }
    ctx->pc = 0x28B0BCu;
label_28b0bc:
    // 0x28b0bc: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x28b0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28b0c0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x28b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b0c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b0c8: 0x0  nop
    ctx->pc = 0x28b0c8u;
    // NOP
    // 0x28b0cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28b0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28b0d0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x28B0D0u;
    SET_GPR_U32(ctx, 31, 0x28B0D8u);
    ctx->pc = 0x28B0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0D0u;
            // 0x28b0d4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B0D8u; }
        if (ctx->pc != 0x28B0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B0D8u; }
        if (ctx->pc != 0x28B0D8u) { return; }
    }
    ctx->pc = 0x28B0D8u;
label_28b0d8:
    // 0x28b0d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28b0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0dc: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x28b0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28b0e0: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x28b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x28b0e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b0e8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x28b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28b0ec: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x28b0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x28b0f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28b0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0f4: 0x2409006c  addiu       $t1, $zero, 0x6C
    ctx->pc = 0x28b0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x28b0f8: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x28b0f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x28b0fc: 0xc079fa8  jal         func_1E7EA0
    ctx->pc = 0x28B0FCu;
    SET_GPR_U32(ctx, 31, 0x28B104u);
    ctx->pc = 0x28B100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B0FCu;
            // 0x28b100: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA0u;
    if (runtime->hasFunction(0x1E7EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B104u; }
        if (ctx->pc != 0x28B104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIStretch__10CPreSpriteFiiiiiiii_0x1e7ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B104u; }
        if (ctx->pc != 0x28B104u) { return; }
    }
    ctx->pc = 0x28B104u;
label_28b104:
    // 0x28b104: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x28b104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28b108: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b10c: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x28b10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x28b110: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x28b110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28b114: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x28b114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28b118: 0x24090076  addiu       $t1, $zero, 0x76
    ctx->pc = 0x28b118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x28b11c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x28B11Cu;
    SET_GPR_U32(ctx, 31, 0x28B124u);
    ctx->pc = 0x28B120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B11Cu;
            // 0x28b120: 0x240a0038  addiu       $t2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B124u; }
        if (ctx->pc != 0x28B124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B124u; }
        if (ctx->pc != 0x28B124u) { return; }
    }
    ctx->pc = 0x28B124u;
label_28b124:
    // 0x28b124: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x28b124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28b128: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B128u;
    {
        const bool branch_taken_0x28b128 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28B12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B128u;
            // 0x28b12c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b128) {
            ctx->pc = 0x28B138u;
            goto label_28b138;
        }
    }
    ctx->pc = 0x28B130u;
    // 0x28b130: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28b130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28b134: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28b134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_28b138:
    // 0x28b138: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x28b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b13c: 0x2451ffcf  addiu       $s1, $v0, -0x31
    ctx->pc = 0x28b13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x28b140: 0x3c02431a  lui         $v0, 0x431A
    ctx->pc = 0x28b140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17178 << 16));
    // 0x28b144: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b148: 0xc0a248c  jal         func_289230
    ctx->pc = 0x28B148u;
    SET_GPR_U32(ctx, 31, 0x28B150u);
    ctx->pc = 0x28B14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B148u;
            // 0x28b14c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B150u; }
        if (ctx->pc != 0x28B150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B150u; }
        if (ctx->pc != 0x28B150u) { return; }
    }
    ctx->pc = 0x28B150u;
label_28b150:
    // 0x28b150: 0x2623009a  addiu       $v1, $s1, 0x9A
    ctx->pc = 0x28b150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 154));
    // 0x28b154: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b158: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x28b158u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28b15c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28b15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b160: 0x2406016c  addiu       $a2, $zero, 0x16C
    ctx->pc = 0x28b160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    // 0x28b164: 0xc079fd8  jal         func_1E7F60
    ctx->pc = 0x28B164u;
    SET_GPR_U32(ctx, 31, 0x28B16Cu);
    ctx->pc = 0x28B168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B164u;
            // 0x28b168: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F60u;
    if (runtime->hasFunction(0x1E7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B16Cu; }
        if (ctx->pc != 0x28B16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScirror__10CPreSpriteFiiii_0x1e7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B16Cu; }
        if (ctx->pc != 0x28B16Cu) { return; }
    }
    ctx->pc = 0x28B16Cu;
label_28b16c:
    // 0x28b16c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b174: 0x2406016c  addiu       $a2, $zero, 0x16C
    ctx->pc = 0x28b174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    // 0x28b178: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x28b178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x28b17c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x28b17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x28b180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28b180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b184: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x28B184u;
    SET_GPR_U32(ctx, 31, 0x28B18Cu);
    ctx->pc = 0x28B188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B184u;
            // 0x28b188: 0x240a0024  addiu       $t2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B18Cu; }
        if (ctx->pc != 0x28B18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B18Cu; }
        if (ctx->pc != 0x28B18Cu) { return; }
    }
    ctx->pc = 0x28B18Cu;
label_28b18c:
    // 0x28b18c: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x28b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x28b190: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b194: 0x2406016c  addiu       $a2, $zero, 0x16C
    ctx->pc = 0x28b194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    // 0x28b198: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x28b198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x28b19c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x28b19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x28b1a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28b1a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1a4: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x28B1A4u;
    SET_GPR_U32(ctx, 31, 0x28B1ACu);
    ctx->pc = 0x28B1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1A4u;
            // 0x28b1a8: 0x240a0032  addiu       $t2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1ACu; }
        if (ctx->pc != 0x28B1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1ACu; }
        if (ctx->pc != 0x28B1ACu) { return; }
    }
    ctx->pc = 0x28B1ACu;
label_28b1ac:
    // 0x28b1ac: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x28b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x28b1b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28b1b4: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x28b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x28b1b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1c0: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x28b1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28b1c4: 0xc079fd8  jal         func_1E7F60
    ctx->pc = 0x28B1C4u;
    SET_GPR_U32(ctx, 31, 0x28B1CCu);
    ctx->pc = 0x28B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1C4u;
            // 0x28b1c8: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F60u;
    if (runtime->hasFunction(0x1E7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1CCu; }
        if (ctx->pc != 0x28B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScirror__10CPreSpriteFiiii_0x1e7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1CCu; }
        if (ctx->pc != 0x28B1CCu) { return; }
    }
    ctx->pc = 0x28B1CCu;
label_28b1cc:
    // 0x28b1cc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x28B1CCu;
    SET_GPR_U32(ctx, 31, 0x28B1D4u);
    ctx->pc = 0x28B1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1CCu;
            // 0x28b1d0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1D4u; }
        if (ctx->pc != 0x28B1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B1D4u; }
        if (ctx->pc != 0x28B1D4u) { return; }
    }
    ctx->pc = 0x28B1D4u;
label_28b1d4:
    // 0x28b1d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28b1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28b1d8:
    // 0x28b1d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28b1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b1dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28b1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1E0u;
            // 0x28b1e4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B1E8u;
}
