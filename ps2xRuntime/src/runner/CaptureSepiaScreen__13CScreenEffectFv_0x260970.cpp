#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CaptureSepiaScreen__13CScreenEffectFv
// Address: 0x260970 - 0x260bec
void CaptureSepiaScreen__13CScreenEffectFv_0x260970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CaptureSepiaScreen__13CScreenEffectFv_0x260970");
#endif

    switch (ctx->pc) {
        case 0x2609a0u: goto label_2609a0;
        case 0x2609a8u: goto label_2609a8;
        case 0x2609b8u: goto label_2609b8;
        case 0x2609c8u: goto label_2609c8;
        case 0x260ab0u: goto label_260ab0;
        default: break;
    }

    ctx->pc = 0x260970u;

    // 0x260970: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x260970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x260974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x260974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x260978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x260978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26097c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x260980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x260980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x260984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x260984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x260988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x260988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26098c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x26098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x260990: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x260990u;
    {
        const bool branch_taken_0x260990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260990u;
            // 0x260994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260990) {
            ctx->pc = 0x260BCCu;
            goto label_260bcc;
        }
    }
    ctx->pc = 0x260998u;
    // 0x260998: 0xc04b120  jal         func_12C480
    ctx->pc = 0x260998u;
    SET_GPR_U32(ctx, 31, 0x2609A0u);
    ctx->pc = 0x26099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260998u;
            // 0x26099c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2609A0u; }
        if (ctx->pc != 0x2609A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2609A0u; }
        if (ctx->pc != 0x2609A0u) { return; }
    }
    ctx->pc = 0x2609A0u;
label_2609a0:
    // 0x2609a0: 0xc051100  jal         func_144400
    ctx->pc = 0x2609A0u;
    SET_GPR_U32(ctx, 31, 0x2609A8u);
    ctx->pc = 0x2609A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2609A0u;
            // 0x2609a4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144400u;
    if (runtime->hasFunction(0x144400u)) {
        auto targetFn = runtime->lookupFunction(0x144400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2609A8u; }
        if (ctx->pc != 0x2609A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBackBuffer__FP10mgCTexture_0x144400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2609A8u; }
        if (ctx->pc != 0x2609A8u) { return; }
    }
    ctx->pc = 0x2609A8u;
label_2609a8:
    // 0x2609a8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2609ac: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x2609acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2609b0: 0xc05141c  jal         func_145070
    ctx->pc = 0x2609B0u;
    SET_GPR_U32(ctx, 31, 0x2609B8u);
    ctx->pc = 0x2609B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2609B0u;
            // 0x2609b4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145070u;
    if (runtime->hasFunction(0x145070u)) {
        auto targetFn = runtime->lookupFunction(0x145070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2609B8u; }
        if (ctx->pc != 0x2609B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgStoreImage__FP10mgCTextureP1_0x145070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2609B8u; }
        if (ctx->pc != 0x2609B8u) { return; }
    }
    ctx->pc = 0x2609B8u;
label_2609b8:
    // 0x2609b8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2609b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2609bc: 0x8c700050  lw          $s0, 0x50($v1)
    ctx->pc = 0x2609bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2609c0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2609C0u;
    {
        const bool branch_taken_0x2609c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609C0u;
            // 0x2609c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609c0) {
            ctx->pc = 0x260BACu;
            goto label_260bac;
        }
    }
    ctx->pc = 0x2609C8u;
label_2609c8:
    // 0x2609c8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2609c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2609cc: 0x2119021  addu        $s2, $s0, $s1
    ctx->pc = 0x2609ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2609d0: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x2609d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2609d4: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x2609d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2609d8: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x2609d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2609dc: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2609dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2609e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2609E0u;
    {
        const bool branch_taken_0x2609e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2609E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609E0u;
            // 0x2609e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609e0) {
            ctx->pc = 0x2609F4u;
            goto label_2609f4;
        }
    }
    ctx->pc = 0x2609E8u;
    // 0x2609e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2609e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2609ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2609ECu;
    {
        const bool branch_taken_0x2609ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609ECu;
            // 0x2609f0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609ec) {
            ctx->pc = 0x260A0Cu;
            goto label_260a0c;
        }
    }
    ctx->pc = 0x2609F4u;
label_2609f4:
    // 0x2609f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2609f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2609f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2609f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2609fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2609fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a00: 0x0  nop
    ctx->pc = 0x260a00u;
    // NOP
    // 0x260a04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x260a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x260a08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x260a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_260a0c:
    // 0x260a0c: 0x3c033e6a  lui         $v1, 0x3E6A
    ctx->pc = 0x260a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15978 << 16));
    // 0x260a10: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x260a10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x260a14: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x260a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32506);
    // 0x260a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a1c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260A1Cu;
    {
        const bool branch_taken_0x260a1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260A1Cu;
            // 0x260a20: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a1c) {
            ctx->pc = 0x260A30u;
            goto label_260a30;
        }
    }
    ctx->pc = 0x260A24u;
    // 0x260a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260A28u;
    {
        const bool branch_taken_0x260a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260A28u;
            // 0x260a2c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a28) {
            ctx->pc = 0x260A4Cu;
            goto label_260a4c;
        }
    }
    ctx->pc = 0x260A30u;
label_260a30:
    // 0x260a30: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x260a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x260a34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260a38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260a3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a40: 0x0  nop
    ctx->pc = 0x260a40u;
    // NOP
    // 0x260a44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x260a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x260a48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x260a48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_260a4c:
    // 0x260a4c: 0x3c033f16  lui         $v1, 0x3F16
    ctx->pc = 0x260a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16150 << 16));
    // 0x260a50: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x260a50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x260a54: 0x346345a2  ori         $v1, $v1, 0x45A2
    ctx->pc = 0x260a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17826);
    // 0x260a58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a5c: 0x0  nop
    ctx->pc = 0x260a5cu;
    // NOP
    // 0x260a60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x260a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x260a64: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260A64u;
    {
        const bool branch_taken_0x260a64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260A64u;
            // 0x260a68: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a64) {
            ctx->pc = 0x260A78u;
            goto label_260a78;
        }
    }
    ctx->pc = 0x260A6Cu;
    // 0x260a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260A70u;
    {
        const bool branch_taken_0x260a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260A70u;
            // 0x260a74: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a70) {
            ctx->pc = 0x260A94u;
            goto label_260a94;
        }
    }
    ctx->pc = 0x260A78u;
label_260a78:
    // 0x260a78: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x260a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x260a7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260a80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a88: 0x0  nop
    ctx->pc = 0x260a88u;
    // NOP
    // 0x260a8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x260a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x260a90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x260a90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_260a94:
    // 0x260a94: 0x3c023de9  lui         $v0, 0x3DE9
    ctx->pc = 0x260a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15849 << 16));
    // 0x260a98: 0x344278d5  ori         $v0, $v0, 0x78D5
    ctx->pc = 0x260a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30933);
    // 0x260a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260aa0: 0x0  nop
    ctx->pc = 0x260aa0u;
    // NOP
    // 0x260aa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x260aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x260aa8: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x260AA8u;
    SET_GPR_U32(ctx, 31, 0x260AB0u);
    ctx->pc = 0x260AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260AA8u;
            // 0x260aac: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260AB0u; }
        if (ctx->pc != 0x260AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260AB0u; }
        if (ctx->pc != 0x260AB0u) { return; }
    }
    ctx->pc = 0x260AB0u;
label_260ab0:
    // 0x260ab0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x260ab0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x260ab4: 0x29010041  slti        $at, $t0, 0x41
    ctx->pc = 0x260ab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x260ab8: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x260AB8u;
    {
        const bool branch_taken_0x260ab8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x260ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260AB8u;
            // 0x260abc: 0x2506ffc0  addiu       $a2, $t0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ab8) {
            ctx->pc = 0x260B5Cu;
            goto label_260b5c;
        }
    }
    ctx->pc = 0x260AC0u;
    // 0x260ac0: 0x3c03ab8f  lui         $v1, 0xAB8F
    ctx->pc = 0x260ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43919 << 16));
    // 0x260ac4: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x260ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x260ac8: 0x346369e3  ori         $v1, $v1, 0x69E3
    ctx->pc = 0x260ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27107);
    // 0x260acc: 0xe64823  subu        $t1, $a3, $a2
    ctx->pc = 0x260accu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x260ad0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x260ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x260ad4: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x260ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x260ad8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x260ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x260adc: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x260adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x260ae0: 0x86080  sll         $t4, $t0, 2
    ctx->pc = 0x260ae0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x260ae4: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x260ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x260ae8: 0x6c0018  mult        $zero, $v1, $t4
    ctx->pc = 0x260ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x260aec: 0xe65021  addu        $t2, $a3, $a2
    ctx->pc = 0x260aecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x260af0: 0xc5fc2  srl         $t3, $t4, 31
    ctx->pc = 0x260af0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x260af4: 0x240700ea  addiu       $a3, $zero, 0xEA
    ctx->pc = 0x260af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x260af8: 0xa4fc2  srl         $t1, $t2, 31
    ctx->pc = 0x260af8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x260afc: 0x4010  mfhi        $t0
    ctx->pc = 0x260afcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x260b00: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x260b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x260b04: 0x841c3  sra         $t0, $t0, 7
    ctx->pc = 0x260b04u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 7));
    // 0x260b08: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x260b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x260b0c: 0x2508004b  addiu       $t0, $t0, 0x4B
    ctx->pc = 0x260b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 75));
    // 0x260b10: 0x6a0018  mult        $zero, $v1, $t2
    ctx->pc = 0x260b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x260b14: 0xa2480000  sb          $t0, 0x0($s2)
    ctx->pc = 0x260b14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x260b18: 0x0  nop
    ctx->pc = 0x260b18u;
    // NOP
    // 0x260b1c: 0x4010  mfhi        $t0
    ctx->pc = 0x260b1cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x260b20: 0xc73818  mult        $a3, $a2, $a3
    ctx->pc = 0x260b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x260b24: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x260b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x260b28: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x260b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x260b2c: 0x831c3  sra         $a2, $t0, 7
    ctx->pc = 0x260b2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 7));
    // 0x260b30: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x260b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x260b34: 0x24c6003e  addiu       $a2, $a2, 0x3E
    ctx->pc = 0x260b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 62));
    // 0x260b38: 0xa2660000  sb          $a2, 0x0($s3)
    ctx->pc = 0x260b38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x260b3c: 0x1810  mfhi        $v1
    ctx->pc = 0x260b3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x260b40: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x260b40u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x260b44: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x260b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x260b48: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x260b48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x260b4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x260b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x260b50: 0x24630015  addiu       $v1, $v1, 0x15
    ctx->pc = 0x260b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21));
    // 0x260b54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x260B54u;
    {
        const bool branch_taken_0x260b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B54u;
            // 0x260b58: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b54) {
            ctx->pc = 0x260BA4u;
            goto label_260ba4;
        }
    }
    ctx->pc = 0x260B5Cu;
label_260b5c:
    // 0x260b5c: 0x0  nop
    ctx->pc = 0x260b5cu;
    // NOP
    // 0x260b60: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x260b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x260b64: 0x683823  subu        $a3, $v1, $t0
    ctx->pc = 0x260b64u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x260b68: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x260b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x260b6c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x260b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x260b70: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x260b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x260b74: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x260b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x260b78: 0x63983  sra         $a3, $a2, 6
    ctx->pc = 0x260b78u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 6));
    // 0x260b7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x260b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x260b80: 0x33183  sra         $a2, $v1, 6
    ctx->pc = 0x260b80u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
    // 0x260b84: 0xa2470000  sb          $a3, 0x0($s2)
    ctx->pc = 0x260b84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x260b88: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x260b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x260b8c: 0xa2660000  sb          $a2, 0x0($s3)
    ctx->pc = 0x260b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x260b90: 0x683023  subu        $a2, $v1, $t0
    ctx->pc = 0x260b90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x260b94: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x260b98: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x260b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x260b9c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x260b9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x260ba0: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x260ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
label_260ba4:
    // 0x260ba4: 0x0  nop
    ctx->pc = 0x260ba4u;
    // NOP
    // 0x260ba8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x260ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_260bac:
    // 0x260bac: 0x0  nop
    ctx->pc = 0x260bacu;
    // NOP
    // 0x260bb0: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x260bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x260bb4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x260bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x260bb8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x260bb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x260bbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x260bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x260bc0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x260bc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x260bc4: 0x1460ff80  bnez        $v1, . + 4 + (-0x80 << 2)
    ctx->pc = 0x260BC4u;
    {
        const bool branch_taken_0x260bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260bc4) {
            ctx->pc = 0x2609C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2609c8;
        }
    }
    ctx->pc = 0x260BCCu;
label_260bcc:
    // 0x260bcc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x260bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260bd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x260bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260bd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x260bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x260bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x260bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x260be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260be4: 0x3e00008  jr          $ra
    ctx->pc = 0x260BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260BE4u;
            // 0x260be8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260BECu;
}
