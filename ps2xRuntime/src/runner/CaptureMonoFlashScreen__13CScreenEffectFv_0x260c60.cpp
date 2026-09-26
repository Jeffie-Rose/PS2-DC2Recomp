#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CaptureMonoFlashScreen__13CScreenEffectFv
// Address: 0x260c60 - 0x260f28
void CaptureMonoFlashScreen__13CScreenEffectFv_0x260c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CaptureMonoFlashScreen__13CScreenEffectFv_0x260c60");
#endif

    switch (ctx->pc) {
        case 0x260cacu: goto label_260cac;
        case 0x260cb4u: goto label_260cb4;
        case 0x260cc4u: goto label_260cc4;
        case 0x260cd4u: goto label_260cd4;
        case 0x260cecu: goto label_260cec;
        case 0x260dd0u: goto label_260dd0;
        case 0x260ec4u: goto label_260ec4;
        default: break;
    }

    ctx->pc = 0x260c60u;

    // 0x260c60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x260c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x260c64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x260c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x260c68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x260c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x260c6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x260c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x260c70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x260c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x260c74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x260c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x260c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x260c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x260c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x260c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x260c80: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x260c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x260c84: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x260C84u;
    {
        const bool branch_taken_0x260c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C84u;
            // 0x260c88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c84) {
            ctx->pc = 0x260F04u;
            goto label_260f04;
        }
    }
    ctx->pc = 0x260C8Cu;
    // 0x260c8c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x260c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x260c90: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260C90u;
    {
        const bool branch_taken_0x260c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C90u;
            // 0x260c94: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c90) {
            ctx->pc = 0x260CA4u;
            goto label_260ca4;
        }
    }
    ctx->pc = 0x260C98u;
    // 0x260c98: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x260C98u;
    {
        const bool branch_taken_0x260c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C98u;
            // 0x260c9c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c98) {
            ctx->pc = 0x260F08u;
            goto label_260f08;
        }
    }
    ctx->pc = 0x260CA0u;
    // 0x260ca0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x260ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_260ca4:
    // 0x260ca4: 0xc04b120  jal         func_12C480
    ctx->pc = 0x260CA4u;
    SET_GPR_U32(ctx, 31, 0x260CACu);
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CACu; }
        if (ctx->pc != 0x260CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CACu; }
        if (ctx->pc != 0x260CACu) { return; }
    }
    ctx->pc = 0x260CACu;
label_260cac:
    // 0x260cac: 0xc051100  jal         func_144400
    ctx->pc = 0x260CACu;
    SET_GPR_U32(ctx, 31, 0x260CB4u);
    ctx->pc = 0x260CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260CACu;
            // 0x260cb0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144400u;
    if (runtime->hasFunction(0x144400u)) {
        auto targetFn = runtime->lookupFunction(0x144400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CB4u; }
        if (ctx->pc != 0x260CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBackBuffer__FP10mgCTexture_0x144400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CB4u; }
        if (ctx->pc != 0x260CB4u) { return; }
    }
    ctx->pc = 0x260CB4u;
label_260cb4:
    // 0x260cb4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x260cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x260cb8: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x260cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x260cbc: 0xc05141c  jal         func_145070
    ctx->pc = 0x260CBCu;
    SET_GPR_U32(ctx, 31, 0x260CC4u);
    ctx->pc = 0x260CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260CBCu;
            // 0x260cc0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145070u;
    if (runtime->hasFunction(0x145070u)) {
        auto targetFn = runtime->lookupFunction(0x145070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CC4u; }
        if (ctx->pc != 0x260CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgStoreImage__FP10mgCTextureP1_0x145070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CC4u; }
        if (ctx->pc != 0x260CC4u) { return; }
    }
    ctx->pc = 0x260CC4u;
label_260cc4:
    // 0x260cc4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x260cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x260cc8: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x260cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x260ccc: 0xc05141c  jal         func_145070
    ctx->pc = 0x260CCCu;
    SET_GPR_U32(ctx, 31, 0x260CD4u);
    ctx->pc = 0x260CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260CCCu;
            // 0x260cd0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145070u;
    if (runtime->hasFunction(0x145070u)) {
        auto targetFn = runtime->lookupFunction(0x145070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CD4u; }
        if (ctx->pc != 0x260CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgStoreImage__FP10mgCTextureP1_0x145070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CD4u; }
        if (ctx->pc != 0x260CD4u) { return; }
    }
    ctx->pc = 0x260CD4u;
label_260cd4:
    // 0x260cd4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x260cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x260cd8: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x260cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x260cdc: 0x8c710050  lw          $s1, 0x50($v1)
    ctx->pc = 0x260cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x260ce0: 0x8cd00050  lw          $s0, 0x50($a2)
    ctx->pc = 0x260ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x260ce4: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x260CE4u;
    {
        const bool branch_taken_0x260ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260CE4u;
            // 0x260ce8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ce4) {
            ctx->pc = 0x260EE4u;
            goto label_260ee4;
        }
    }
    ctx->pc = 0x260CECu;
label_260cec:
    // 0x260cec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x260cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x260cf0: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x260cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x260cf4: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x260cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x260cf8: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x260cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x260cfc: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x260cfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x260d00: 0x3c023e6a  lui         $v0, 0x3E6A
    ctx->pc = 0x260d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15978 << 16));
    // 0x260d04: 0x34437efa  ori         $v1, $v0, 0x7EFA
    ctx->pc = 0x260d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x260d08: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x260d08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x260d0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x260d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260d10: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260D10u;
    {
        const bool branch_taken_0x260d10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D10u;
            // 0x260d14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d10) {
            ctx->pc = 0x260D28u;
            goto label_260d28;
        }
    }
    ctx->pc = 0x260D18u;
    // 0x260d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260d1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260D1Cu;
    {
        const bool branch_taken_0x260d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D1Cu;
            // 0x260d20: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d1c) {
            ctx->pc = 0x260D40u;
            goto label_260d40;
        }
    }
    ctx->pc = 0x260D24u;
    // 0x260d24: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x260d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_260d28:
    // 0x260d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260d2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260d30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260d34: 0x0  nop
    ctx->pc = 0x260d34u;
    // NOP
    // 0x260d38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260d3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x260d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_260d40:
    // 0x260d40: 0x3c023f16  lui         $v0, 0x3F16
    ctx->pc = 0x260d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16150 << 16));
    // 0x260d44: 0x344345a2  ori         $v1, $v0, 0x45A2
    ctx->pc = 0x260d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17826);
    // 0x260d48: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x260d48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x260d4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x260d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260d50: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260D50u;
    {
        const bool branch_taken_0x260d50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D50u;
            // 0x260d54: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d50) {
            ctx->pc = 0x260D64u;
            goto label_260d64;
        }
    }
    ctx->pc = 0x260D58u;
    // 0x260d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260D5Cu;
    {
        const bool branch_taken_0x260d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D5Cu;
            // 0x260d60: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d5c) {
            ctx->pc = 0x260D80u;
            goto label_260d80;
        }
    }
    ctx->pc = 0x260D64u;
label_260d64:
    // 0x260d64: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x260d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x260d68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260d6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260d74: 0x0  nop
    ctx->pc = 0x260d74u;
    // NOP
    // 0x260d78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260d7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x260d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_260d80:
    // 0x260d80: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x260d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x260d84: 0x3c023de9  lui         $v0, 0x3DE9
    ctx->pc = 0x260d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15849 << 16));
    // 0x260d88: 0x344378d5  ori         $v1, $v0, 0x78D5
    ctx->pc = 0x260d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30933);
    // 0x260d8c: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x260d8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x260d90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x260d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260d94: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260D94u;
    {
        const bool branch_taken_0x260d94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D94u;
            // 0x260d98: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d94) {
            ctx->pc = 0x260DA8u;
            goto label_260da8;
        }
    }
    ctx->pc = 0x260D9Cu;
    // 0x260d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260da0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260DA0u;
    {
        const bool branch_taken_0x260da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260DA0u;
            // 0x260da4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260da0) {
            ctx->pc = 0x260DC4u;
            goto label_260dc4;
        }
    }
    ctx->pc = 0x260DA8u;
label_260da8:
    // 0x260da8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x260da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x260dac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260db0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260db8: 0x0  nop
    ctx->pc = 0x260db8u;
    // NOP
    // 0x260dbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260dc0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x260dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_260dc4:
    // 0x260dc4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x260dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x260dc8: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x260DC8u;
    SET_GPR_U32(ctx, 31, 0x260DD0u);
    ctx->pc = 0x260DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260DC8u;
            // 0x260dcc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260DD0u; }
        if (ctx->pc != 0x260DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260DD0u; }
        if (ctx->pc != 0x260DD0u) { return; }
    }
    ctx->pc = 0x260DD0u;
label_260dd0:
    // 0x260dd0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x260dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x260dd4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x260dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x260dd8: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x260dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x260ddc: 0x232a821  addu        $s5, $s1, $s2
    ctx->pc = 0x260ddcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x260de0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x260de0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x260de4: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x260de4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x260de8: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x260de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x260dec: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x260decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x260df0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260DF0u;
    {
        const bool branch_taken_0x260df0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260DF0u;
            // 0x260df4: 0x223a021  addu        $s4, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260df0) {
            ctx->pc = 0x260E04u;
            goto label_260e04;
        }
    }
    ctx->pc = 0x260DF8u;
    // 0x260df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260dfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260DFCu;
    {
        const bool branch_taken_0x260dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260DFCu;
            // 0x260e00: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dfc) {
            ctx->pc = 0x260E20u;
            goto label_260e20;
        }
    }
    ctx->pc = 0x260E04u;
label_260e04:
    // 0x260e04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x260e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x260e08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260e0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e14: 0x0  nop
    ctx->pc = 0x260e14u;
    // NOP
    // 0x260e18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x260e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x260e1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x260e1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_260e20:
    // 0x260e20: 0x3c033e6a  lui         $v1, 0x3E6A
    ctx->pc = 0x260e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15978 << 16));
    // 0x260e24: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x260e24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x260e28: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x260e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32506);
    // 0x260e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e30: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260E30u;
    {
        const bool branch_taken_0x260e30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260E30u;
            // 0x260e34: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e30) {
            ctx->pc = 0x260E44u;
            goto label_260e44;
        }
    }
    ctx->pc = 0x260E38u;
    // 0x260e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260E3Cu;
    {
        const bool branch_taken_0x260e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260E3Cu;
            // 0x260e40: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e3c) {
            ctx->pc = 0x260E60u;
            goto label_260e60;
        }
    }
    ctx->pc = 0x260E44u;
label_260e44:
    // 0x260e44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x260e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x260e48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260e4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260e50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e54: 0x0  nop
    ctx->pc = 0x260e54u;
    // NOP
    // 0x260e58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x260e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x260e5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x260e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_260e60:
    // 0x260e60: 0x3c033f16  lui         $v1, 0x3F16
    ctx->pc = 0x260e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16150 << 16));
    // 0x260e64: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x260e64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x260e68: 0x346345a2  ori         $v1, $v1, 0x45A2
    ctx->pc = 0x260e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17826);
    // 0x260e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e70: 0x0  nop
    ctx->pc = 0x260e70u;
    // NOP
    // 0x260e74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x260e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x260e78: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260E78u;
    {
        const bool branch_taken_0x260e78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260E78u;
            // 0x260e7c: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e78) {
            ctx->pc = 0x260E8Cu;
            goto label_260e8c;
        }
    }
    ctx->pc = 0x260E80u;
    // 0x260e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x260E84u;
    {
        const bool branch_taken_0x260e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260E84u;
            // 0x260e88: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e84) {
            ctx->pc = 0x260EA8u;
            goto label_260ea8;
        }
    }
    ctx->pc = 0x260E8Cu;
label_260e8c:
    // 0x260e8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x260e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x260e90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260e94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e9c: 0x0  nop
    ctx->pc = 0x260e9cu;
    // NOP
    // 0x260ea0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x260ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x260ea4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x260ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_260ea8:
    // 0x260ea8: 0x3c023de9  lui         $v0, 0x3DE9
    ctx->pc = 0x260ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15849 << 16));
    // 0x260eac: 0x344278d5  ori         $v0, $v0, 0x78D5
    ctx->pc = 0x260eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30933);
    // 0x260eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260eb4: 0x0  nop
    ctx->pc = 0x260eb4u;
    // NOP
    // 0x260eb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x260eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x260ebc: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x260EBCu;
    SET_GPR_U32(ctx, 31, 0x260EC4u);
    ctx->pc = 0x260EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260EBCu;
            // 0x260ec0: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260EC4u; }
        if (ctx->pc != 0x260EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260EC4u; }
        if (ctx->pc != 0x260EC4u) { return; }
    }
    ctx->pc = 0x260EC4u;
label_260ec4:
    // 0x260ec4: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x260ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x260ec8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x260ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x260ecc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x260eccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x260ed0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x260ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x260ed4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x260ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x260ed8: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x260ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x260edc: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x260edcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x260ee0: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x260ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_260ee4:
    // 0x260ee4: 0x0  nop
    ctx->pc = 0x260ee4u;
    // NOP
    // 0x260ee8: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x260ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x260eec: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x260eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x260ef0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x260ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x260ef4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x260ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x260ef8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x260ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x260efc: 0x1460ff7b  bnez        $v1, . + 4 + (-0x85 << 2)
    ctx->pc = 0x260EFCu;
    {
        const bool branch_taken_0x260efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260efc) {
            ctx->pc = 0x260CECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_260cec;
        }
    }
    ctx->pc = 0x260F04u;
label_260f04:
    // 0x260f04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x260f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_260f08:
    // 0x260f08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x260f08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260f0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x260f0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260f10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x260f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260f14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x260f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x260f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x260f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260f20: 0x3e00008  jr          $ra
    ctx->pc = 0x260F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260F20u;
            // 0x260f24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260F28u;
}
