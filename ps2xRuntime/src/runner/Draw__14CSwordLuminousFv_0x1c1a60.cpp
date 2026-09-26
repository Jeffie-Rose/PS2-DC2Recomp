#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14CSwordLuminousFv
// Address: 0x1c1a60 - 0x1c1c5c
void Draw__14CSwordLuminousFv_0x1c1a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14CSwordLuminousFv_0x1c1a60");
#endif

    switch (ctx->pc) {
        case 0x1c1aa8u: goto label_1c1aa8;
        case 0x1c1ab4u: goto label_1c1ab4;
        case 0x1c1ac4u: goto label_1c1ac4;
        case 0x1c1accu: goto label_1c1acc;
        case 0x1c1adcu: goto label_1c1adc;
        case 0x1c1b00u: goto label_1c1b00;
        case 0x1c1b08u: goto label_1c1b08;
        case 0x1c1b18u: goto label_1c1b18;
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b2cu: goto label_1c1b2c;
        case 0x1c1b38u: goto label_1c1b38;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b50u: goto label_1c1b50;
        case 0x1c1b5cu: goto label_1c1b5c;
        case 0x1c1b68u: goto label_1c1b68;
        case 0x1c1b74u: goto label_1c1b74;
        case 0x1c1b80u: goto label_1c1b80;
        case 0x1c1b98u: goto label_1c1b98;
        case 0x1c1ba0u: goto label_1c1ba0;
        case 0x1c1bc4u: goto label_1c1bc4;
        case 0x1c1bdcu: goto label_1c1bdc;
        case 0x1c1bf4u: goto label_1c1bf4;
        case 0x1c1c00u: goto label_1c1c00;
        case 0x1c1c10u: goto label_1c1c10;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c48u: goto label_1c1c48;
        default: break;
    }

    ctx->pc = 0x1c1a60u;

    // 0x1c1a60: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1c1a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1c1a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1a68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c1a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1a6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c1a6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c1a70: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1c1a70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1a74: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1C1A74u;
    {
        const bool branch_taken_0x1c1a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A74u;
            // 0x1c1a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a74) {
            ctx->pc = 0x1C1C48u;
            goto label_1c1c48;
        }
    }
    ctx->pc = 0x1C1A7Cu;
    // 0x1c1a7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c1a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1a80: 0x10800071  beqz        $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1C1A80u;
    {
        const bool branch_taken_0x1c1a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a80) {
            ctx->pc = 0x1C1C48u;
            goto label_1c1c48;
        }
    }
    ctx->pc = 0x1C1A88u;
    // 0x1c1a88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c1a8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1A8Cu;
    {
        const bool branch_taken_0x1c1a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A8Cu;
            // 0x1c1a90: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a8c) {
            ctx->pc = 0x1C1AA0u;
            goto label_1c1aa0;
        }
    }
    ctx->pc = 0x1C1A94u;
    // 0x1c1a94: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1C1A94u;
    {
        const bool branch_taken_0x1c1a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A94u;
            // 0x1c1a98: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a94) {
            ctx->pc = 0x1C1C4Cu;
            goto label_1c1c4c;
        }
    }
    ctx->pc = 0x1C1A9Cu;
    // 0x1c1a9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c1a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c1aa0:
    // 0x1c1aa0: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1C1AA0u;
    SET_GPR_U32(ctx, 31, 0x1C1AA8u);
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AA8u; }
        if (ctx->pc != 0x1C1AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AA8u; }
        if (ctx->pc != 0x1C1AA8u) { return; }
    }
    ctx->pc = 0x1C1AA8u;
label_1c1aa8:
    // 0x1c1aa8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1c1aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c1aac: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1C1AACu;
    SET_GPR_U32(ctx, 31, 0x1C1AB4u);
    ctx->pc = 0x1C1AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AACu;
            // 0x1c1ab0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AB4u; }
        if (ctx->pc != 0x1C1AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AB4u; }
        if (ctx->pc != 0x1C1AB4u) { return; }
    }
    ctx->pc = 0x1C1AB4u;
label_1c1ab4:
    // 0x1c1ab4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1ab8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c1ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1abc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1C1ABCu;
    SET_GPR_U32(ctx, 31, 0x1C1AC4u);
    ctx->pc = 0x1C1AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1ABCu;
            // 0x1c1ac0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AC4u; }
        if (ctx->pc != 0x1C1AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AC4u; }
        if (ctx->pc != 0x1C1AC4u) { return; }
    }
    ctx->pc = 0x1C1AC4u;
label_1c1ac4:
    // 0x1c1ac4: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x1C1AC4u;
    SET_GPR_U32(ctx, 31, 0x1C1ACCu);
    ctx->pc = 0x1C1AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AC4u;
            // 0x1c1ac8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ACCu; }
        if (ctx->pc != 0x1C1ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ACCu; }
        if (ctx->pc != 0x1C1ACCu) { return; }
    }
    ctx->pc = 0x1C1ACCu;
label_1c1acc:
    // 0x1c1acc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c1accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1ad0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c1ad0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c1ad4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C1AD4u;
    SET_GPR_U32(ctx, 31, 0x1C1ADCu);
    ctx->pc = 0x1C1AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AD4u;
            // 0x1c1ad8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ADCu; }
        if (ctx->pc != 0x1C1ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ADCu; }
        if (ctx->pc != 0x1C1ADCu) { return; }
    }
    ctx->pc = 0x1C1ADCu;
label_1c1adc:
    // 0x1c1adc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c1ae0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c1ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c1ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1ae8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c1ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1aec: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x1c1aecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1c1af0: 0x0  nop
    ctx->pc = 0x1c1af0u;
    // NOP
    // 0x1c1af4: 0x0  nop
    ctx->pc = 0x1c1af4u;
    // NOP
    // 0x1c1af8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1C1AF8u;
    SET_GPR_U32(ctx, 31, 0x1C1B00u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B00u; }
        if (ctx->pc != 0x1C1B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B00u; }
        if (ctx->pc != 0x1C1B00u) { return; }
    }
    ctx->pc = 0x1C1B00u;
label_1c1b00:
    // 0x1c1b00: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C1B00u;
    SET_GPR_U32(ctx, 31, 0x1C1B08u);
    ctx->pc = 0x1C1B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B00u;
            // 0x1c1b04: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B08u; }
        if (ctx->pc != 0x1C1B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B08u; }
        if (ctx->pc != 0x1C1B08u) { return; }
    }
    ctx->pc = 0x1C1B08u;
label_1c1b08:
    // 0x1c1b08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b10: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C1B10u;
    SET_GPR_U32(ctx, 31, 0x1C1B18u);
    ctx->pc = 0x1C1B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B10u;
            // 0x1c1b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B18u; }
        if (ctx->pc != 0x1C1B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B18u; }
        if (ctx->pc != 0x1C1B18u) { return; }
    }
    ctx->pc = 0x1C1B18u;
label_1c1b18:
    // 0x1c1b18: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C1B18u;
    SET_GPR_U32(ctx, 31, 0x1C1B20u);
    ctx->pc = 0x1C1B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B18u;
            // 0x1c1b1c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B20u; }
        if (ctx->pc != 0x1C1B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B20u; }
        if (ctx->pc != 0x1C1B20u) { return; }
    }
    ctx->pc = 0x1C1B20u;
label_1c1b20:
    // 0x1c1b20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b24: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C1B24u;
    SET_GPR_U32(ctx, 31, 0x1C1B2Cu);
    ctx->pc = 0x1C1B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B24u;
            // 0x1c1b28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B2Cu; }
        if (ctx->pc != 0x1C1B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B2Cu; }
        if (ctx->pc != 0x1C1B2Cu) { return; }
    }
    ctx->pc = 0x1C1B2Cu;
label_1c1b2c:
    // 0x1c1b2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b30: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C1B30u;
    SET_GPR_U32(ctx, 31, 0x1C1B38u);
    ctx->pc = 0x1C1B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B30u;
            // 0x1c1b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B38u; }
        if (ctx->pc != 0x1C1B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B38u; }
        if (ctx->pc != 0x1C1B38u) { return; }
    }
    ctx->pc = 0x1C1B38u;
label_1c1b38:
    // 0x1c1b38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b3c: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B44u);
    ctx->pc = 0x1C1B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B3Cu;
            // 0x1c1b40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B44u; }
        if (ctx->pc != 0x1C1B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B44u; }
        if (ctx->pc != 0x1C1B44u) { return; }
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b48: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C1B48u;
    SET_GPR_U32(ctx, 31, 0x1C1B50u);
    ctx->pc = 0x1C1B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B48u;
            // 0x1c1b4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B50u; }
        if (ctx->pc != 0x1C1B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B50u; }
        if (ctx->pc != 0x1C1B50u) { return; }
    }
    ctx->pc = 0x1C1B50u;
label_1c1b50:
    // 0x1c1b50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b54: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C1B54u;
    SET_GPR_U32(ctx, 31, 0x1C1B5Cu);
    ctx->pc = 0x1C1B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B54u;
            // 0x1c1b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B5Cu; }
        if (ctx->pc != 0x1C1B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B5Cu; }
        if (ctx->pc != 0x1C1B5Cu) { return; }
    }
    ctx->pc = 0x1C1B5Cu;
label_1c1b5c:
    // 0x1c1b5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b60: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C1B60u;
    SET_GPR_U32(ctx, 31, 0x1C1B68u);
    ctx->pc = 0x1C1B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B60u;
            // 0x1c1b64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B68u; }
        if (ctx->pc != 0x1C1B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B68u; }
        if (ctx->pc != 0x1C1B68u) { return; }
    }
    ctx->pc = 0x1C1B68u;
label_1c1b68:
    // 0x1c1b68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b6c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B74u);
    ctx->pc = 0x1C1B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B6Cu;
            // 0x1c1b70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B74u; }
        if (ctx->pc != 0x1C1B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B74u; }
        if (ctx->pc != 0x1C1B74u) { return; }
    }
    ctx->pc = 0x1C1B74u;
label_1c1b74:
    // 0x1c1b74: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1c1b78: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C1B78u;
    SET_GPR_U32(ctx, 31, 0x1C1B80u);
    ctx->pc = 0x1C1B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B78u;
            // 0x1c1b7c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B80u; }
        if (ctx->pc != 0x1C1B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B80u; }
        if (ctx->pc != 0x1C1B80u) { return; }
    }
    ctx->pc = 0x1C1B80u;
label_1c1b80:
    // 0x1c1b80: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c1b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c1b84: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1b88: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c1b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b8c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c1b90: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C1B90u;
    SET_GPR_U32(ctx, 31, 0x1C1B98u);
    ctx->pc = 0x1C1B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B90u;
            // 0x1c1b94: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B98u; }
        if (ctx->pc != 0x1C1B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B98u; }
        if (ctx->pc != 0x1C1B98u) { return; }
    }
    ctx->pc = 0x1C1B98u;
label_1c1b98:
    // 0x1c1b98: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C1B98u;
    SET_GPR_U32(ctx, 31, 0x1C1BA0u);
    ctx->pc = 0x1C1B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B98u;
            // 0x1c1b9c: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BA0u; }
        if (ctx->pc != 0x1C1BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BA0u; }
        if (ctx->pc != 0x1C1BA0u) { return; }
    }
    ctx->pc = 0x1C1BA0u;
label_1c1ba0:
    // 0x1c1ba0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c1ba4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1c1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1c1ba8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c1ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1bac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1bb4: 0x0  nop
    ctx->pc = 0x1c1bb4u;
    // NOP
    // 0x1c1bb8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c1bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c1bbc: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1c1bbcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c1bc0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1c1bc4:
    // 0x1c1bc4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1c1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c1bc8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c1bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c1bcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c1bd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c1bd4: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C1BD4u;
    SET_GPR_U32(ctx, 31, 0x1C1BDCu);
    ctx->pc = 0x1C1BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BD4u;
            // 0x1c1bd8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BDCu; }
        if (ctx->pc != 0x1C1BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BDCu; }
        if (ctx->pc != 0x1C1BDCu) { return; }
    }
    ctx->pc = 0x1C1BDCu;
label_1c1bdc:
    // 0x1c1bdc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C1BDCu;
    {
        const bool branch_taken_0x1c1bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bdc) {
            ctx->pc = 0x1C1C1Cu;
            goto label_1c1c1c;
        }
    }
    ctx->pc = 0x1C1BE4u;
    // 0x1c1be4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1be8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c1be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c1bec: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C1BECu;
    SET_GPR_U32(ctx, 31, 0x1C1BF4u);
    ctx->pc = 0x1C1BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BECu;
            // 0x1c1bf0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BF4u; }
        if (ctx->pc != 0x1C1BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BF4u; }
        if (ctx->pc != 0x1C1BF4u) { return; }
    }
    ctx->pc = 0x1C1BF4u;
label_1c1bf4:
    // 0x1c1bf4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1bf8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C1BF8u;
    SET_GPR_U32(ctx, 31, 0x1C1C00u);
    ctx->pc = 0x1C1BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BF8u;
            // 0x1c1bfc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C00u; }
        if (ctx->pc != 0x1C1C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C00u; }
        if (ctx->pc != 0x1C1C00u) { return; }
    }
    ctx->pc = 0x1C1C00u;
label_1c1c00:
    // 0x1c1c00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1c04: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c1c08: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C1C08u;
    SET_GPR_U32(ctx, 31, 0x1C1C10u);
    ctx->pc = 0x1C1C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C08u;
            // 0x1c1c0c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C10u; }
        if (ctx->pc != 0x1C1C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C10u; }
        if (ctx->pc != 0x1C1C10u) { return; }
    }
    ctx->pc = 0x1C1C10u;
label_1c1c10:
    // 0x1c1c10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1c14: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C1C14u;
    SET_GPR_U32(ctx, 31, 0x1C1C1Cu);
    ctx->pc = 0x1C1C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C14u;
            // 0x1c1c18: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C1Cu; }
        if (ctx->pc != 0x1C1C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C1Cu; }
        if (ctx->pc != 0x1C1C1Cu) { return; }
    }
    ctx->pc = 0x1C1C1Cu;
label_1c1c1c:
    // 0x1c1c1c: 0x0  nop
    ctx->pc = 0x1c1c1cu;
    // NOP
    // 0x1c1c20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c1c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c1c24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c1c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c28: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1C1C28u;
    SET_GPR_U32(ctx, 31, 0x1C1C30u);
    ctx->pc = 0x1C1C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C28u;
            // 0x1c1c2c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C30u; }
        if (ctx->pc != 0x1C1C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C30u; }
        if (ctx->pc != 0x1C1C30u) { return; }
    }
    ctx->pc = 0x1C1C30u;
label_1c1c30:
    // 0x1c1c30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c1c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c1c34: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1c1c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c1c38: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C1C38u;
    {
        const bool branch_taken_0x1c1c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C38u;
            // 0x1c1c3c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c38) {
            ctx->pc = 0x1C1BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1bc4;
        }
    }
    ctx->pc = 0x1C1C40u;
    // 0x1c1c40: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C1C40u;
    SET_GPR_U32(ctx, 31, 0x1C1C48u);
    ctx->pc = 0x1C1C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C40u;
            // 0x1c1c44: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C48u; }
        if (ctx->pc != 0x1C1C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C48u; }
        if (ctx->pc != 0x1C1C48u) { return; }
    }
    ctx->pc = 0x1C1C48u;
label_1c1c48:
    // 0x1c1c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1c4c:
    // 0x1c1c4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c1c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1c50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c1c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1c54: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C54u;
            // 0x1c1c58: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1C5Cu;
}
