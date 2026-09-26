#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleModeDraw__Fv
// Address: 0x2a1b60 - 0x2a2278
void TitleModeDraw__Fv_0x2a1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleModeDraw__Fv_0x2a1b60");
#endif

    switch (ctx->pc) {
        case 0x2a1b88u: goto label_2a1b88;
        case 0x2a1b9cu: goto label_2a1b9c;
        case 0x2a1ba4u: goto label_2a1ba4;
        case 0x2a1bb0u: goto label_2a1bb0;
        case 0x2a1bc8u: goto label_2a1bc8;
        case 0x2a1bd8u: goto label_2a1bd8;
        case 0x2a1bfcu: goto label_2a1bfc;
        case 0x2a1c14u: goto label_2a1c14;
        case 0x2a1c2cu: goto label_2a1c2c;
        case 0x2a1c38u: goto label_2a1c38;
        case 0x2a1c44u: goto label_2a1c44;
        case 0x2a1c50u: goto label_2a1c50;
        case 0x2a1c68u: goto label_2a1c68;
        case 0x2a1c84u: goto label_2a1c84;
        case 0x2a1c90u: goto label_2a1c90;
        case 0x2a1ca8u: goto label_2a1ca8;
        case 0x2a1cc0u: goto label_2a1cc0;
        case 0x2a1cdcu: goto label_2a1cdc;
        case 0x2a1ce4u: goto label_2a1ce4;
        case 0x2a1cf4u: goto label_2a1cf4;
        case 0x2a1d00u: goto label_2a1d00;
        case 0x2a1d0cu: goto label_2a1d0c;
        case 0x2a1d18u: goto label_2a1d18;
        case 0x2a1d30u: goto label_2a1d30;
        case 0x2a1d4cu: goto label_2a1d4c;
        case 0x2a1d58u: goto label_2a1d58;
        case 0x2a1d70u: goto label_2a1d70;
        case 0x2a1d88u: goto label_2a1d88;
        case 0x2a1da0u: goto label_2a1da0;
        case 0x2a1da8u: goto label_2a1da8;
        case 0x2a1dc0u: goto label_2a1dc0;
        case 0x2a1df8u: goto label_2a1df8;
        case 0x2a1e04u: goto label_2a1e04;
        case 0x2a1e10u: goto label_2a1e10;
        case 0x2a1e20u: goto label_2a1e20;
        case 0x2a1e44u: goto label_2a1e44;
        case 0x2a1e5cu: goto label_2a1e5c;
        case 0x2a1e80u: goto label_2a1e80;
        case 0x2a1ebcu: goto label_2a1ebc;
        case 0x2a1ed4u: goto label_2a1ed4;
        case 0x2a1eecu: goto label_2a1eec;
        case 0x2a1f04u: goto label_2a1f04;
        case 0x2a1f44u: goto label_2a1f44;
        case 0x2a1f80u: goto label_2a1f80;
        case 0x2a1fa8u: goto label_2a1fa8;
        case 0x2a1fb4u: goto label_2a1fb4;
        case 0x2a1fc0u: goto label_2a1fc0;
        case 0x2a200cu: goto label_2a200c;
        case 0x2a2024u: goto label_2a2024;
        case 0x2a2048u: goto label_2a2048;
        case 0x2a2070u: goto label_2a2070;
        case 0x2a2098u: goto label_2a2098;
        case 0x2a20bcu: goto label_2a20bc;
        case 0x2a20c8u: goto label_2a20c8;
        case 0x2a20fcu: goto label_2a20fc;
        case 0x2a2140u: goto label_2a2140;
        case 0x2a2164u: goto label_2a2164;
        case 0x2a2170u: goto label_2a2170;
        case 0x2a2190u: goto label_2a2190;
        case 0x2a21d8u: goto label_2a21d8;
        case 0x2a21e4u: goto label_2a21e4;
        case 0x2a2208u: goto label_2a2208;
        case 0x2a221cu: goto label_2a221c;
        default: break;
    }

    ctx->pc = 0x2a1b60u;

    // 0x2a1b60: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2a1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2a1b64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a1b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a1b68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a1b6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a1b70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a1b74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a1b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a1b78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a1b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a1b7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a1b7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a1b80: 0xc0a88a0  jal         func_2A2280
    ctx->pc = 0x2A1B80u;
    SET_GPR_U32(ctx, 31, 0x2A1B88u);
    ctx->pc = 0x2A1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B80u;
            // 0x2a1b84: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2280u;
    if (runtime->hasFunction(0x2A2280u)) {
        auto targetFn = runtime->lookupFunction(0x2A2280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B88u; }
        if (ctx->pc != 0x2A1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleMapDraw__Fv_0x2a2280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B88u; }
        if (ctx->pc != 0x2A1B88u) { return; }
    }
    ctx->pc = 0x2A1B88u;
label_2a1b88:
    // 0x2a1b88: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2a1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2a1b8c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2a1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a1b90: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2a1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2a1b94: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A1B94u;
    SET_GPR_U32(ctx, 31, 0x2A1B9Cu);
    ctx->pc = 0x2A1B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B94u;
            // 0x2a1b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B9Cu; }
        if (ctx->pc != 0x2A1B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1B9Cu; }
        if (ctx->pc != 0x2A1B9Cu) { return; }
    }
    ctx->pc = 0x2A1B9Cu;
label_2a1b9c:
    // 0x2a1b9c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2A1B9Cu;
    SET_GPR_U32(ctx, 31, 0x2A1BA4u);
    ctx->pc = 0x2A1BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1B9Cu;
            // 0x2a1ba0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BA4u; }
        if (ctx->pc != 0x2A1BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BA4u; }
        if (ctx->pc != 0x2A1BA4u) { return; }
    }
    ctx->pc = 0x2A1BA4u;
label_2a1ba4:
    // 0x2a1ba4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1ba8: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2A1BA8u;
    SET_GPR_U32(ctx, 31, 0x2A1BB0u);
    ctx->pc = 0x2A1BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1BA8u;
            // 0x2a1bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BB0u; }
        if (ctx->pc != 0x2A1BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BB0u; }
        if (ctx->pc != 0x2A1BB0u) { return; }
    }
    ctx->pc = 0x2A1BB0u;
label_2a1bb0:
    // 0x2a1bb0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2a1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2a1bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a1bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bbc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a1bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a1bc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A1BC0u;
    SET_GPR_U32(ctx, 31, 0x2A1BC8u);
    ctx->pc = 0x2A1BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1BC0u;
            // 0x2a1bc4: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BC8u; }
        if (ctx->pc != 0x2A1BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BC8u; }
        if (ctx->pc != 0x2A1BC8u) { return; }
    }
    ctx->pc = 0x2A1BC8u;
label_2a1bc8:
    // 0x2a1bc8: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1bcc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a1bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a1bd0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A1BD0u;
    SET_GPR_U32(ctx, 31, 0x2A1BD8u);
    ctx->pc = 0x2A1BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1BD0u;
            // 0x2a1bd4: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BD8u; }
        if (ctx->pc != 0x2A1BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BD8u; }
        if (ctx->pc != 0x2A1BD8u) { return; }
    }
    ctx->pc = 0x2A1BD8u;
label_2a1bd8:
    // 0x2a1bd8: 0x8f8499c4  lw          $a0, -0x663C($gp)
    ctx->pc = 0x2a1bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941124)));
    // 0x2a1bdc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a1bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a1be0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a1be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1be4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2a1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2a1be8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a1be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a1bec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a1becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1bf0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2a1bf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2a1bf4: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2A1BF4u;
    SET_GPR_U32(ctx, 31, 0x2A1BFCu);
    ctx->pc = 0x2A1BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1BF4u;
            // 0x2a1bf8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BFCu; }
        if (ctx->pc != 0x2A1BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1BFCu; }
        if (ctx->pc != 0x2A1BFCu) { return; }
    }
    ctx->pc = 0x2A1BFCu;
label_2a1bfc:
    // 0x2a1bfc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2a1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2a1c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c04: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2a1c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a1c08: 0x240700c4  addiu       $a3, $zero, 0xC4
    ctx->pc = 0x2a1c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x2a1c0c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A1C0Cu;
    SET_GPR_U32(ctx, 31, 0x2A1C14u);
    ctx->pc = 0x2A1C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C0Cu;
            // 0x2a1c10: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C14u; }
        if (ctx->pc != 0x2A1C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C14u; }
        if (ctx->pc != 0x2A1C14u) { return; }
    }
    ctx->pc = 0x2A1C14u;
label_2a1c14:
    // 0x2a1c14: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2a1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2a1c18: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A1C18u;
    {
        const bool branch_taken_0x2a1c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C18u;
            // 0x2a1c1c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c18) {
            ctx->pc = 0x2A1CECu;
            goto label_2a1cec;
        }
    }
    ctx->pc = 0x2A1C20u;
    // 0x2a1c20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1c24: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2A1C24u;
    SET_GPR_U32(ctx, 31, 0x2A1C2Cu);
    ctx->pc = 0x2A1C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C24u;
            // 0x2a1c28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C2Cu; }
        if (ctx->pc != 0x2A1C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C2Cu; }
        if (ctx->pc != 0x2A1C2Cu) { return; }
    }
    ctx->pc = 0x2A1C2Cu;
label_2a1c2c:
    // 0x2a1c2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1c30: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A1C30u;
    SET_GPR_U32(ctx, 31, 0x2A1C38u);
    ctx->pc = 0x2A1C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C30u;
            // 0x2a1c34: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C38u; }
        if (ctx->pc != 0x2A1C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C38u; }
        if (ctx->pc != 0x2A1C38u) { return; }
    }
    ctx->pc = 0x2A1C38u;
label_2a1c38:
    // 0x2a1c38: 0x8f8599c8  lw          $a1, -0x6638($gp)
    ctx->pc = 0x2a1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941128)));
    // 0x2a1c3c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2A1C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A1C44u);
    ctx->pc = 0x2A1C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C3Cu;
            // 0x2a1c40: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C44u; }
        if (ctx->pc != 0x2A1C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C44u; }
        if (ctx->pc != 0x2A1C44u) { return; }
    }
    ctx->pc = 0x2A1C44u;
label_2a1c44:
    // 0x2a1c44: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1c48: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A1C48u;
    SET_GPR_U32(ctx, 31, 0x2A1C50u);
    ctx->pc = 0x2A1C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C48u;
            // 0x2a1c4c: 0xc44c0014  lwc1        $f12, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C50u; }
        if (ctx->pc != 0x2A1C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C50u; }
        if (ctx->pc != 0x2A1C50u) { return; }
    }
    ctx->pc = 0x2A1C50u;
label_2a1c50:
    // 0x2a1c50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a1c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a1c54: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a1c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1c5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a1c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c60: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A1C60u;
    SET_GPR_U32(ctx, 31, 0x2A1C68u);
    ctx->pc = 0x2A1C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C60u;
            // 0x2a1c64: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C68u; }
        if (ctx->pc != 0x2A1C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C68u; }
        if (ctx->pc != 0x2A1C68u) { return; }
    }
    ctx->pc = 0x2A1C68u;
label_2a1c68:
    // 0x2a1c68: 0x3c034322  lui         $v1, 0x4322
    ctx->pc = 0x2a1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17186 << 16));
    // 0x2a1c6c: 0x3c0243a9  lui         $v0, 0x43A9
    ctx->pc = 0x2a1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17321 << 16));
    // 0x2a1c70: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a1c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1c74: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1c78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1c7c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2A1C7Cu;
    SET_GPR_U32(ctx, 31, 0x2A1C84u);
    ctx->pc = 0x2A1C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C7Cu;
            // 0x2a1c80: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C84u; }
        if (ctx->pc != 0x2A1C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C84u; }
        if (ctx->pc != 0x2A1C84u) { return; }
    }
    ctx->pc = 0x2A1C84u;
label_2a1c84:
    // 0x2a1c84: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1c88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A1C88u;
    SET_GPR_U32(ctx, 31, 0x2A1C90u);
    ctx->pc = 0x2A1C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1C88u;
            // 0x2a1c8c: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C90u; }
        if (ctx->pc != 0x2A1C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1C90u; }
        if (ctx->pc != 0x2A1C90u) { return; }
    }
    ctx->pc = 0x2A1C90u;
label_2a1c90:
    // 0x2a1c90: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a1c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a1c94: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a1c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c98: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1c9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a1c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ca0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A1CA0u;
    SET_GPR_U32(ctx, 31, 0x2A1CA8u);
    ctx->pc = 0x2A1CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CA0u;
            // 0x2a1ca4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CA8u; }
        if (ctx->pc != 0x2A1CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CA8u; }
        if (ctx->pc != 0x2A1CA8u) { return; }
    }
    ctx->pc = 0x2A1CA8u;
label_2a1ca8:
    // 0x2a1ca8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2a1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2a1cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1cb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a1cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1cb4: 0x24070166  addiu       $a3, $zero, 0x166
    ctx->pc = 0x2a1cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x2a1cb8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A1CB8u;
    SET_GPR_U32(ctx, 31, 0x2A1CC0u);
    ctx->pc = 0x2A1CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CB8u;
            // 0x2a1cbc: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CC0u; }
        if (ctx->pc != 0x2A1CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CC0u; }
        if (ctx->pc != 0x2A1CC0u) { return; }
    }
    ctx->pc = 0x2A1CC0u;
label_2a1cc0:
    // 0x2a1cc0: 0x3c0342a8  lui         $v1, 0x42A8
    ctx->pc = 0x2a1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17064 << 16));
    // 0x2a1cc4: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x2a1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x2a1cc8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a1cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1ccc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1cd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1cd4: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2A1CD4u;
    SET_GPR_U32(ctx, 31, 0x2A1CDCu);
    ctx->pc = 0x2A1CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CD4u;
            // 0x2a1cd8: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CDCu; }
        if (ctx->pc != 0x2A1CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CDCu; }
        if (ctx->pc != 0x2A1CDCu) { return; }
    }
    ctx->pc = 0x2A1CDCu;
label_2a1cdc:
    // 0x2a1cdc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A1CDCu;
    SET_GPR_U32(ctx, 31, 0x2A1CE4u);
    ctx->pc = 0x2A1CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CDCu;
            // 0x2a1ce0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CE4u; }
        if (ctx->pc != 0x2A1CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CE4u; }
        if (ctx->pc != 0x2A1CE4u) { return; }
    }
    ctx->pc = 0x2A1CE4u;
label_2a1ce4:
    // 0x2a1ce4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2A1CE4u;
    {
        const bool branch_taken_0x2a1ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CE4u;
            // 0x2a1ce8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ce4) {
            ctx->pc = 0x2A1DACu;
            goto label_2a1dac;
        }
    }
    ctx->pc = 0x2A1CECu;
label_2a1cec:
    // 0x2a1cec: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2A1CECu;
    SET_GPR_U32(ctx, 31, 0x2A1CF4u);
    ctx->pc = 0x2A1CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CECu;
            // 0x2a1cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CF4u; }
        if (ctx->pc != 0x2A1CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1CF4u; }
        if (ctx->pc != 0x2A1CF4u) { return; }
    }
    ctx->pc = 0x2A1CF4u;
label_2a1cf4:
    // 0x2a1cf4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1cf8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A1CF8u;
    SET_GPR_U32(ctx, 31, 0x2A1D00u);
    ctx->pc = 0x2A1CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1CF8u;
            // 0x2a1cfc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D00u; }
        if (ctx->pc != 0x2A1D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D00u; }
        if (ctx->pc != 0x2A1D00u) { return; }
    }
    ctx->pc = 0x2A1D00u;
label_2a1d00:
    // 0x2a1d00: 0x8f8599c8  lw          $a1, -0x6638($gp)
    ctx->pc = 0x2a1d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941128)));
    // 0x2a1d04: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2A1D04u;
    SET_GPR_U32(ctx, 31, 0x2A1D0Cu);
    ctx->pc = 0x2A1D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D04u;
            // 0x2a1d08: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D0Cu; }
        if (ctx->pc != 0x2A1D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D0Cu; }
        if (ctx->pc != 0x2A1D0Cu) { return; }
    }
    ctx->pc = 0x2A1D0Cu;
label_2a1d0c:
    // 0x2a1d0c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1d10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A1D10u;
    SET_GPR_U32(ctx, 31, 0x2A1D18u);
    ctx->pc = 0x2A1D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D10u;
            // 0x2a1d14: 0xc44c0014  lwc1        $f12, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D18u; }
        if (ctx->pc != 0x2A1D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D18u; }
        if (ctx->pc != 0x2A1D18u) { return; }
    }
    ctx->pc = 0x2A1D18u;
label_2a1d18:
    // 0x2a1d18: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a1d1c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a1d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1d24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a1d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d28: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A1D28u;
    SET_GPR_U32(ctx, 31, 0x2A1D30u);
    ctx->pc = 0x2A1D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D28u;
            // 0x2a1d2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D30u; }
        if (ctx->pc != 0x2A1D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D30u; }
        if (ctx->pc != 0x2A1D30u) { return; }
    }
    ctx->pc = 0x2A1D30u;
label_2a1d30:
    // 0x2a1d30: 0x3c03439a  lui         $v1, 0x439A
    ctx->pc = 0x2a1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17306 << 16));
    // 0x2a1d34: 0x3c024322  lui         $v0, 0x4322
    ctx->pc = 0x2a1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17186 << 16));
    // 0x2a1d38: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a1d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1d3c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1d40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1d44: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2A1D44u;
    SET_GPR_U32(ctx, 31, 0x2A1D4Cu);
    ctx->pc = 0x2A1D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D44u;
            // 0x2a1d48: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D4Cu; }
        if (ctx->pc != 0x2A1D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D4Cu; }
        if (ctx->pc != 0x2A1D4Cu) { return; }
    }
    ctx->pc = 0x2A1D4Cu;
label_2a1d4c:
    // 0x2a1d4c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1d50: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A1D50u;
    SET_GPR_U32(ctx, 31, 0x2A1D58u);
    ctx->pc = 0x2A1D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D50u;
            // 0x2a1d54: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D58u; }
        if (ctx->pc != 0x2A1D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D58u; }
        if (ctx->pc != 0x2A1D58u) { return; }
    }
    ctx->pc = 0x2A1D58u;
label_2a1d58:
    // 0x2a1d58: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a1d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a1d5c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a1d5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d60: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1d64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a1d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d68: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A1D68u;
    SET_GPR_U32(ctx, 31, 0x2A1D70u);
    ctx->pc = 0x2A1D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D68u;
            // 0x2a1d6c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D70u; }
        if (ctx->pc != 0x2A1D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D70u; }
        if (ctx->pc != 0x2A1D70u) { return; }
    }
    ctx->pc = 0x2A1D70u;
label_2a1d70:
    // 0x2a1d70: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a1d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d78: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2a1d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2a1d7c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a1d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a1d80: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A1D80u;
    SET_GPR_U32(ctx, 31, 0x2A1D88u);
    ctx->pc = 0x2A1D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D80u;
            // 0x2a1d84: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D88u; }
        if (ctx->pc != 0x2A1D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D88u; }
        if (ctx->pc != 0x2A1D88u) { return; }
    }
    ctx->pc = 0x2A1D88u;
label_2a1d88:
    // 0x2a1d88: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2a1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2a1d8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1d90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1d94: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2a1d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a1d98: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2A1D98u;
    SET_GPR_U32(ctx, 31, 0x2A1DA0u);
    ctx->pc = 0x2A1D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D98u;
            // 0x2a1d9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DA0u; }
        if (ctx->pc != 0x2A1DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DA0u; }
        if (ctx->pc != 0x2A1DA0u) { return; }
    }
    ctx->pc = 0x2A1DA0u;
label_2a1da0:
    // 0x2a1da0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A1DA0u;
    SET_GPR_U32(ctx, 31, 0x2A1DA8u);
    ctx->pc = 0x2A1DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1DA0u;
            // 0x2a1da4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DA8u; }
        if (ctx->pc != 0x2A1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DA8u; }
        if (ctx->pc != 0x2A1DA8u) { return; }
    }
    ctx->pc = 0x2A1DA8u;
label_2a1da8:
    // 0x2a1da8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2a1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2a1dac:
    // 0x2a1dac: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x2a1dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x2a1db0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2a1db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a1db4: 0x240700d2  addiu       $a3, $zero, 0xD2
    ctx->pc = 0x2a1db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x2a1db8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A1DB8u;
    SET_GPR_U32(ctx, 31, 0x2A1DC0u);
    ctx->pc = 0x2A1DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1DB8u;
            // 0x2a1dbc: 0x24080036  addiu       $t0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DC0u; }
        if (ctx->pc != 0x2A1DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DC0u; }
        if (ctx->pc != 0x2A1DC0u) { return; }
    }
    ctx->pc = 0x2A1DC0u;
label_2a1dc0:
    // 0x2a1dc0: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x2a1dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2a1dc4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a1dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a1dc8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x2a1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2a1dcc: 0x2412004c  addiu       $s2, $zero, 0x4C
    ctx->pc = 0x2a1dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2a1dd0: 0x93828460  lbu         $v0, -0x7BA0($gp)
    ctx->pc = 0x2a1dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x2a1dd4: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x2a1dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1dd8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2a1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a1ddc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1DDCu;
    {
        const bool branch_taken_0x2a1ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1DDCu;
            // 0x2a1de0: 0x38843  sra         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ddc) {
            ctx->pc = 0x2A1DECu;
            goto label_2a1dec;
        }
    }
    ctx->pc = 0x2A1DE4u;
    // 0x2a1de4: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x2a1de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a1de8: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2a1de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a1dec:
    // 0x2a1dec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1df0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2A1DF0u;
    SET_GPR_U32(ctx, 31, 0x2A1DF8u);
    ctx->pc = 0x2A1DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1DF0u;
            // 0x2a1df4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DF8u; }
        if (ctx->pc != 0x2A1DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1DF8u; }
        if (ctx->pc != 0x2A1DF8u) { return; }
    }
    ctx->pc = 0x2A1DF8u;
label_2a1df8:
    // 0x2a1df8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1dfc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A1DFCu;
    SET_GPR_U32(ctx, 31, 0x2A1E04u);
    ctx->pc = 0x2A1E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1DFCu;
            // 0x2a1e00: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E04u; }
        if (ctx->pc != 0x2A1E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E04u; }
        if (ctx->pc != 0x2A1E04u) { return; }
    }
    ctx->pc = 0x2A1E04u;
label_2a1e04:
    // 0x2a1e04: 0x8f8599c8  lw          $a1, -0x6638($gp)
    ctx->pc = 0x2a1e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941128)));
    // 0x2a1e08: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2A1E08u;
    SET_GPR_U32(ctx, 31, 0x2A1E10u);
    ctx->pc = 0x2A1E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E08u;
            // 0x2a1e0c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E10u; }
        if (ctx->pc != 0x2A1E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E10u; }
        if (ctx->pc != 0x2A1E10u) { return; }
    }
    ctx->pc = 0x2A1E10u;
label_2a1e10:
    // 0x2a1e10: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2a1e10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2a1e14: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
    ctx->pc = 0x2A1E14u;
    {
        const bool branch_taken_0x2a1e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E14u;
            // 0x2a1e18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e14) {
            ctx->pc = 0x2A1F74u;
            goto label_2a1f74;
        }
    }
    ctx->pc = 0x2A1E1Cu;
    // 0x2a1e1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a1e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1e20:
    // 0x2a1e20: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1e24: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2a1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2a1e28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a1e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1e2c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2a1e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1e30: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2a1e30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2a1e34: 0x0  nop
    ctx->pc = 0x2a1e34u;
    // NOP
    // 0x2a1e38: 0x0  nop
    ctx->pc = 0x2a1e38u;
    // NOP
    // 0x2a1e3c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A1E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E44u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E44u; }
        if (ctx->pc != 0x2A1E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E44u; }
        if (ctx->pc != 0x2A1E44u) { return; }
    }
    ctx->pc = 0x2A1E44u;
label_2a1e44:
    // 0x2a1e44: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a1e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a1e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e54: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A1E54u;
    SET_GPR_U32(ctx, 31, 0x2A1E5Cu);
    ctx->pc = 0x2A1E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E54u;
            // 0x2a1e58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E5Cu; }
        if (ctx->pc != 0x2A1E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E5Cu; }
        if (ctx->pc != 0x2A1E5Cu) { return; }
    }
    ctx->pc = 0x2A1E5Cu;
label_2a1e5c:
    // 0x2a1e5c: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x2a1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a1e60: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2a1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2a1e64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a1e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1e68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1e70: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2a1e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2a1e74: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2a1e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a1e78: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2A1E78u;
    SET_GPR_U32(ctx, 31, 0x2A1E80u);
    ctx->pc = 0x2A1E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E78u;
            // 0x2a1e7c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E80u; }
        if (ctx->pc != 0x2A1E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E80u; }
        if (ctx->pc != 0x2A1E80u) { return; }
    }
    ctx->pc = 0x2A1E80u;
label_2a1e80:
    // 0x2a1e80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1e84: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1E84u;
    {
        const bool branch_taken_0x2a1e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E84u;
            // 0x2a1e88: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e84) {
            ctx->pc = 0x2A1E98u;
            goto label_2a1e98;
        }
    }
    ctx->pc = 0x2A1E8Cu;
    // 0x2a1e8c: 0x8c2262d0  lw          $v0, 0x62D0($at)
    ctx->pc = 0x2a1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25296)));
    // 0x2a1e90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1E90u;
    {
        const bool branch_taken_0x2a1e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e90) {
            ctx->pc = 0x2A1EB0u;
            goto label_2a1eb0;
        }
    }
    ctx->pc = 0x2A1E98u;
label_2a1e98:
    // 0x2a1e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1e9c: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A1E9Cu;
    {
        const bool branch_taken_0x2a1e9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1e9c) {
            ctx->pc = 0x2A1EDCu;
            goto label_2a1edc;
        }
    }
    ctx->pc = 0x2A1EA4u;
    // 0x2a1ea4: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a1ea8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1EA8u;
    {
        const bool branch_taken_0x2a1ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ea8) {
            ctx->pc = 0x2A1EDCu;
            goto label_2a1edc;
        }
    }
    ctx->pc = 0x2A1EB0u;
label_2a1eb0:
    // 0x2a1eb0: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1eb4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A1EB4u;
    SET_GPR_U32(ctx, 31, 0x2A1EBCu);
    ctx->pc = 0x2A1EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1EB4u;
            // 0x2a1eb8: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1EBCu; }
        if (ctx->pc != 0x2A1EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1EBCu; }
        if (ctx->pc != 0x2A1EBCu) { return; }
    }
    ctx->pc = 0x2A1EBCu;
label_2a1ebc:
    // 0x2a1ebc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2a1ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a1ec0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a1ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ec4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1ec8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a1ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ecc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A1ECCu;
    SET_GPR_U32(ctx, 31, 0x2A1ED4u);
    ctx->pc = 0x2A1ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1ECCu;
            // 0x2a1ed0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1ED4u; }
        if (ctx->pc != 0x2A1ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1ED4u; }
        if (ctx->pc != 0x2A1ED4u) { return; }
    }
    ctx->pc = 0x2A1ED4u;
label_2a1ed4:
    // 0x2a1ed4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A1ED4u;
    {
        const bool branch_taken_0x2a1ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ed4) {
            ctx->pc = 0x2A1F04u;
            goto label_2a1f04;
        }
    }
    ctx->pc = 0x2A1EDCu;
label_2a1edc:
    // 0x2a1edc: 0x0  nop
    ctx->pc = 0x2a1edcu;
    // NOP
    // 0x2a1ee0: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1ee4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A1EE4u;
    SET_GPR_U32(ctx, 31, 0x2A1EECu);
    ctx->pc = 0x2A1EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1EE4u;
            // 0x2a1ee8: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1EECu; }
        if (ctx->pc != 0x2A1EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1EECu; }
        if (ctx->pc != 0x2A1EECu) { return; }
    }
    ctx->pc = 0x2A1EECu;
label_2a1eec:
    // 0x2a1eec: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a1eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a1ef0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a1ef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ef4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1ef8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a1ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1efc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A1EFCu;
    SET_GPR_U32(ctx, 31, 0x2A1F04u);
    ctx->pc = 0x2A1F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1EFCu;
            // 0x2a1f00: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F04u; }
        if (ctx->pc != 0x2A1F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F04u; }
        if (ctx->pc != 0x2A1F04u) { return; }
    }
    ctx->pc = 0x2A1F04u;
label_2a1f04:
    // 0x2a1f04: 0x0  nop
    ctx->pc = 0x2a1f04u;
    // NOP
    // 0x2a1f08: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2a1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2a1f0c: 0x24424320  addiu       $v0, $v0, 0x4320
    ctx->pc = 0x2a1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17184));
    // 0x2a1f10: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1f14: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2a1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a1f18: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2a1f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2a1f1c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2a1f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a1f20: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x2a1f20u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1f24: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2a1f24u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f28: 0x0  nop
    ctx->pc = 0x2a1f28u;
    // NOP
    // 0x2a1f2c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2a1f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a1f30: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2a1f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x2a1f34: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2a1f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a1f38: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2a1f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2a1f3c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2A1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F44u);
    ctx->pc = 0x2A1F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F3Cu;
            // 0x2a1f40: 0xafa20194  sw          $v0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F44u; }
        if (ctx->pc != 0x2A1F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F44u; }
        if (ctx->pc != 0x2A1F44u) { return; }
    }
    ctx->pc = 0x2A1F44u;
label_2a1f44:
    // 0x2a1f44: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1f48: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2a1f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a1f4c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1F4Cu;
    {
        const bool branch_taken_0x2a1f4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1f4c) {
            ctx->pc = 0x2A1F60u;
            goto label_2a1f60;
        }
    }
    ctx->pc = 0x2A1F54u;
    // 0x2a1f54: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2a1f54u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f58: 0x0  nop
    ctx->pc = 0x2a1f58u;
    // NOP
    // 0x2a1f5c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2a1f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2a1f60:
    // 0x2a1f60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a1f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a1f64: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x2a1f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2a1f68: 0x2652003a  addiu       $s2, $s2, 0x3A
    ctx->pc = 0x2a1f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 58));
    // 0x2a1f6c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2A1F6Cu;
    {
        const bool branch_taken_0x2a1f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F6Cu;
            // 0x2a1f70: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f6c) {
            ctx->pc = 0x2A1E20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1e20;
        }
    }
    ctx->pc = 0x2A1F74u;
label_2a1f74:
    // 0x2a1f74: 0x0  nop
    ctx->pc = 0x2a1f74u;
    // NOP
    // 0x2a1f78: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A1F78u;
    SET_GPR_U32(ctx, 31, 0x2A1F80u);
    ctx->pc = 0x2A1F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F78u;
            // 0x2a1f7c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F80u; }
        if (ctx->pc != 0x2A1F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F80u; }
        if (ctx->pc != 0x2A1F80u) { return; }
    }
    ctx->pc = 0x2A1F80u;
label_2a1f80:
    // 0x2a1f80: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a1f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f88: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2a1f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1f8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a1f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1f90: 0x0  nop
    ctx->pc = 0x2a1f90u;
    // NOP
    // 0x2a1f94: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x2A1F94u;
    {
        const bool branch_taken_0x2a1f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F94u;
            // 0x2a1f98: 0x2622ffe0  addiu       $v0, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f94) {
            ctx->pc = 0x2A20CCu;
            goto label_2a20cc;
        }
    }
    ctx->pc = 0x2A1F9Cu;
    // 0x2a1f9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1fa0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2A1FA0u;
    SET_GPR_U32(ctx, 31, 0x2A1FA8u);
    ctx->pc = 0x2A1FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1FA0u;
            // 0x2a1fa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FA8u; }
        if (ctx->pc != 0x2A1FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FA8u; }
        if (ctx->pc != 0x2A1FA8u) { return; }
    }
    ctx->pc = 0x2A1FA8u;
label_2a1fa8:
    // 0x2a1fa8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a1fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1fac: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A1FACu;
    SET_GPR_U32(ctx, 31, 0x2A1FB4u);
    ctx->pc = 0x2A1FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1FACu;
            // 0x2a1fb0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FB4u; }
        if (ctx->pc != 0x2A1FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FB4u; }
        if (ctx->pc != 0x2A1FB4u) { return; }
    }
    ctx->pc = 0x2A1FB4u;
label_2a1fb4:
    // 0x2a1fb4: 0x8f8599c8  lw          $a1, -0x6638($gp)
    ctx->pc = 0x2a1fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941128)));
    // 0x2a1fb8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2A1FB8u;
    SET_GPR_U32(ctx, 31, 0x2A1FC0u);
    ctx->pc = 0x2A1FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1FB8u;
            // 0x2a1fbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FC0u; }
        if (ctx->pc != 0x2A1FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1FC0u; }
        if (ctx->pc != 0x2A1FC0u) { return; }
    }
    ctx->pc = 0x2A1FC0u;
label_2a1fc0:
    // 0x2a1fc0: 0x8f87997c  lw          $a3, -0x6684($gp)
    ctx->pc = 0x2a1fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a1fc4: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x2a1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2a1fc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fcc: 0x84e60010  lh          $a2, 0x10($a3)
    ctx->pc = 0x2a1fccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a1fd0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2a1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2a1fd4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2a1fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a1fd8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a1fdc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2a1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a1fe0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1fe4: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x2a1fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x2a1fe8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2a1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2a1fec: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x2a1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x2a1ff0: 0x84e2000a  lh          $v0, 0xA($a3)
    ctx->pc = 0x2a1ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x2a1ff4: 0xc4ec0024  lwc1        $f12, 0x24($a3)
    ctx->pc = 0x2a1ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1ff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a1ffc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a2000: 0xc4400208  lwc1        $f0, 0x208($v0)
    ctx->pc = 0x2a2000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2004: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A2004u;
    SET_GPR_U32(ctx, 31, 0x2A200Cu);
    ctx->pc = 0x2A2008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2004u;
            // 0x2a2008: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A200Cu; }
        if (ctx->pc != 0x2A200Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A200Cu; }
        if (ctx->pc != 0x2A200Cu) { return; }
    }
    ctx->pc = 0x2A200Cu;
label_2a200c:
    // 0x2a200c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a2010: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a2010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2014: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a2014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2018: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a2018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a201c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A201Cu;
    SET_GPR_U32(ctx, 31, 0x2A2024u);
    ctx->pc = 0x2A2020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A201Cu;
            // 0x2a2020: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2024u; }
        if (ctx->pc != 0x2A2024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2024u; }
        if (ctx->pc != 0x2A2024u) { return; }
    }
    ctx->pc = 0x2A2024u;
label_2a2024:
    // 0x2a2024: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a2024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a2028: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a2028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a202c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A202Cu;
    {
        const bool branch_taken_0x2a202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A202Cu;
            // 0x2a2030: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a202c) {
            ctx->pc = 0x2A2070u;
            goto label_2a2070;
        }
    }
    ctx->pc = 0x2A2034u;
    // 0x2a2034: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a2038: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2a2038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a203c: 0x240700d2  addiu       $a3, $zero, 0xD2
    ctx->pc = 0x2a203cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x2a2040: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A2040u;
    SET_GPR_U32(ctx, 31, 0x2A2048u);
    ctx->pc = 0x2A2044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2040u;
            // 0x2a2044: 0x24080036  addiu       $t0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2048u; }
        if (ctx->pc != 0x2A2048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2048u; }
        if (ctx->pc != 0x2A2048u) { return; }
    }
    ctx->pc = 0x2A2048u;
label_2a2048:
    // 0x2a2048: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a2048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a204c: 0x3c024317  lui         $v0, 0x4317
    ctx->pc = 0x2a204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17175 << 16));
    // 0x2a2050: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a2050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2a2054: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a2054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2058: 0xc4600208  lwc1        $f0, 0x208($v1)
    ctx->pc = 0x2a2058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a205c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2a205cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2a2060: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a2060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a2064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a2064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a2068: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2A2068u;
    SET_GPR_U32(ctx, 31, 0x2A2070u);
    ctx->pc = 0x2A206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2068u;
            // 0x2a206c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2070u; }
        if (ctx->pc != 0x2A2070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2070u; }
        if (ctx->pc != 0x2A2070u) { return; }
    }
    ctx->pc = 0x2A2070u;
label_2a2070:
    // 0x2a2070: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a2070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a2074: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a2078: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2078u;
    {
        const bool branch_taken_0x2a2078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2078u;
            // 0x2a207c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2078) {
            ctx->pc = 0x2A20C0u;
            goto label_2a20c0;
        }
    }
    ctx->pc = 0x2A2080u;
    // 0x2a2080: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2a2080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2a2084: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x2a2084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2a2088: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x2a2088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x2a208c: 0x240700d2  addiu       $a3, $zero, 0xD2
    ctx->pc = 0x2a208cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x2a2090: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A2090u;
    SET_GPR_U32(ctx, 31, 0x2A2098u);
    ctx->pc = 0x2A2094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2090u;
            // 0x2a2094: 0x24080036  addiu       $t0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2098u; }
        if (ctx->pc != 0x2A2098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2098u; }
        if (ctx->pc != 0x2A2098u) { return; }
    }
    ctx->pc = 0x2A2098u;
label_2a2098:
    // 0x2a2098: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a2098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a209c: 0x3c024317  lui         $v0, 0x4317
    ctx->pc = 0x2a209cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17175 << 16));
    // 0x2a20a0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2a20a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a20a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a20a8: 0xc4600208  lwc1        $f0, 0x208($v1)
    ctx->pc = 0x2a20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a20ac: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2a20acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2a20b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a20b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a20b4: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2A20B4u;
    SET_GPR_U32(ctx, 31, 0x2A20BCu);
    ctx->pc = 0x2A20B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A20B4u;
            // 0x2a20b8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A20BCu; }
        if (ctx->pc != 0x2A20BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A20BCu; }
        if (ctx->pc != 0x2A20BCu) { return; }
    }
    ctx->pc = 0x2A20BCu;
label_2a20bc:
    // 0x2a20bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a20bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a20c0:
    // 0x2a20c0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A20C0u;
    SET_GPR_U32(ctx, 31, 0x2A20C8u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A20C8u; }
        if (ctx->pc != 0x2A20C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A20C8u; }
        if (ctx->pc != 0x2A20C8u) { return; }
    }
    ctx->pc = 0x2A20C8u;
label_2a20c8:
    // 0x2a20c8: 0x2622ffe0  addiu       $v0, $s1, -0x20
    ctx->pc = 0x2a20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_2a20cc:
    // 0x2a20cc: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a20ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a20d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a20d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a20d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a20d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20d8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2a20d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a20dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a20dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a20e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2a20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2a20e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a20e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a20e8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2a20e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2a20ec: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a20f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a20f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a20f4: 0xc094514  jal         func_251450
    ctx->pc = 0x2A20F4u;
    SET_GPR_U32(ctx, 31, 0x2A20FCu);
    ctx->pc = 0x2A20F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A20F4u;
            // 0x2a20f8: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A20FCu; }
        if (ctx->pc != 0x2A20FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A20FCu; }
        if (ctx->pc != 0x2A20FCu) { return; }
    }
    ctx->pc = 0x2A20FCu;
label_2a20fc:
    // 0x2a20fc: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a2100: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2a2100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2a2104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2108: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x2a2108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a210c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a210cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2110: 0x0  nop
    ctx->pc = 0x2a2110u;
    // NOP
    // 0x2a2114: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2114u;
    {
        const bool branch_taken_0x2a2114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2114u;
            // 0x2a2118: 0x24620034  addiu       $v0, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2114) {
            ctx->pc = 0x2A2120u;
            goto label_2a2120;
        }
    }
    ctx->pc = 0x2A211Cu;
    // 0x2a211c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x2a211cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a2120:
    // 0x2a2120: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a2120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a2124: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2a2128: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a2128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a212c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2130: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2a2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2134: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a2134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2138: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2A2138u;
    SET_GPR_U32(ctx, 31, 0x2A2140u);
    ctx->pc = 0x2A213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2138u;
            // 0x2a213c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2140u; }
        if (ctx->pc != 0x2A2140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2140u; }
        if (ctx->pc != 0x2A2140u) { return; }
    }
    ctx->pc = 0x2A2140u;
label_2a2140:
    // 0x2a2140: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a2140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a2144: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2a2144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2a2148: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a2148u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2a214c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a2150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2154: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2a2154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2158: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a2158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a215c: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2A215Cu;
    SET_GPR_U32(ctx, 31, 0x2A2164u);
    ctx->pc = 0x2A2160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A215Cu;
            // 0x2a2160: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2164u; }
        if (ctx->pc != 0x2A2164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2164u; }
        if (ctx->pc != 0x2A2164u) { return; }
    }
    ctx->pc = 0x2A2164u;
label_2a2164:
    // 0x2a2164: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a2164u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a2168: 0xc047964  jal         func_11E590
    ctx->pc = 0x2A2168u;
    SET_GPR_U32(ctx, 31, 0x2A2170u);
    ctx->pc = 0x2A216Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2168u;
            // 0x2a216c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2170u; }
        if (ctx->pc != 0x2A2170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2170u; }
        if (ctx->pc != 0x2A2170u) { return; }
    }
    ctx->pc = 0x2A2170u;
label_2a2170:
    // 0x2a2170: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2a2170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2a2174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2178: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a2178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a217c: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a2180: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a2180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a2184: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2a2184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2188: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2A2188u;
    SET_GPR_U32(ctx, 31, 0x2A2190u);
    ctx->pc = 0x2A218Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2188u;
            // 0x2a218c: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2190u; }
        if (ctx->pc != 0x2A2190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2190u; }
        if (ctx->pc != 0x2A2190u) { return; }
    }
    ctx->pc = 0x2A2190u;
label_2a2190:
    // 0x2a2190: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2a2190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2a2194: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a2194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a2198: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2a2198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a219c: 0x0  nop
    ctx->pc = 0x2a219cu;
    // NOP
    // 0x2a21a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a21a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a21a4: 0x3c034130  lui         $v1, 0x4130
    ctx->pc = 0x2a21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16688 << 16));
    // 0x2a21a8: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x2a21a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a21ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a21acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a21b0: 0x93839998  lbu         $v1, -0x6668($gp)
    ctx->pc = 0x2a21b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941080)));
    // 0x2a21b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a21b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a21b8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A21B8u;
    {
        const bool branch_taken_0x2a21b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A21BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A21B8u;
            // 0x2a21bc: 0x46020540  add.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21b8) {
            ctx->pc = 0x2A2208u;
            goto label_2a2208;
        }
    }
    ctx->pc = 0x2A21C0u;
    // 0x2a21c0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2a21c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a21c4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2a21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2a21c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a21c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21cc: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2a21ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a21d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A21D0u;
    SET_GPR_U32(ctx, 31, 0x2A21D8u);
    ctx->pc = 0x2A21D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A21D0u;
            // 0x2a21d4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A21D8u; }
        if (ctx->pc != 0x2A21D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A21D8u; }
        if (ctx->pc != 0x2A21D8u) { return; }
    }
    ctx->pc = 0x2A21D8u;
label_2a21d8:
    // 0x2a21d8: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a21dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A21DCu;
    SET_GPR_U32(ctx, 31, 0x2A21E4u);
    ctx->pc = 0x2A21E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A21DCu;
            // 0x2a21e0: 0xc44c0028  lwc1        $f12, 0x28($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A21E4u; }
        if (ctx->pc != 0x2A21E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A21E4u; }
        if (ctx->pc != 0x2A21E4u) { return; }
    }
    ctx->pc = 0x2A21E4u;
label_2a21e4:
    // 0x2a21e4: 0x8f8499c8  lw          $a0, -0x6638($gp)
    ctx->pc = 0x2a21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941128)));
    // 0x2a21e8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2a21e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a21ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a21ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a21f0: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2a21f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2a21f4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2a21f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2a21f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a21f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a21fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2200: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2A2200u;
    SET_GPR_U32(ctx, 31, 0x2A2208u);
    ctx->pc = 0x2A2204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2200u;
            // 0x2a2204: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2208u; }
        if (ctx->pc != 0x2A2208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2208u; }
        if (ctx->pc != 0x2A2208u) { return; }
    }
    ctx->pc = 0x2A2208u;
label_2a2208:
    // 0x2a2208: 0x93839998  lbu         $v1, -0x6668($gp)
    ctx->pc = 0x2a2208u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941080)));
    // 0x2a220c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A220Cu;
    {
        const bool branch_taken_0x2a220c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a220c) {
            ctx->pc = 0x2A221Cu;
            goto label_2a221c;
        }
    }
    ctx->pc = 0x2A2214u;
    // 0x2a2214: 0xc0a8bf4  jal         func_2A2FD0
    ctx->pc = 0x2A2214u;
    SET_GPR_U32(ctx, 31, 0x2A221Cu);
    ctx->pc = 0x2A2FD0u;
    if (runtime->hasFunction(0x2A2FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A221Cu; }
        if (ctx->pc != 0x2A221Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleMCCheckDraw__Fv_0x2a2fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A221Cu; }
        if (ctx->pc != 0x2A221Cu) { return; }
    }
    ctx->pc = 0x2A221Cu;
label_2a221c:
    // 0x2a221c: 0x8f84997c  lw          $a0, -0x6684($gp)
    ctx->pc = 0x2a221cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a2220: 0x3c010098  lui         $at, 0x98
    ctx->pc = 0x2a2220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)152 << 16));
    // 0x2a2224: 0x34219681  ori         $at, $at, 0x9681
    ctx->pc = 0x2a2224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38529);
    // 0x2a2228: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2a2228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a222c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a222cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a2230: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2a2230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x2a2234: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a2238: 0x2464002c  addiu       $a0, $v1, 0x2C
    ctx->pc = 0x2a2238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x2a223c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2a223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2a2240: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x2a2240u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2a2244: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2244u;
    {
        const bool branch_taken_0x2a2244 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2244) {
            ctx->pc = 0x2A2250u;
            goto label_2a2250;
        }
    }
    ctx->pc = 0x2A224Cu;
    // 0x2a224c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a224cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2a2250:
    // 0x2a2250: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a2250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2254: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a2254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a2258: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a2258u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a225c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a2260: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a2260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2264: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a2264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2268: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a2268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a226c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a226cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2270: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2270u;
            // 0x2a2274: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2278u;
}
