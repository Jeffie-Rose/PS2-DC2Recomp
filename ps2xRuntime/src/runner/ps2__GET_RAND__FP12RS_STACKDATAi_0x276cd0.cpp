#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_RAND__FP12RS_STACKDATAi
// Address: 0x276cd0 - 0x276da8
void ps2__GET_RAND__FP12RS_STACKDATAi_0x276cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_RAND__FP12RS_STACKDATAi_0x276cd0");
#endif

    switch (ctx->pc) {
        case 0x276cfcu: goto label_276cfc;
        case 0x276d04u: goto label_276d04;
        case 0x276d34u: goto label_276d34;
        case 0x276d44u: goto label_276d44;
        case 0x276d4cu: goto label_276d4c;
        case 0x276d80u: goto label_276d80;
        case 0x276d8cu: goto label_276d8c;
        default: break;
    }

    ctx->pc = 0x276cd0u;

    // 0x276cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x276cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276cd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x276cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x276cdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x276cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x276ce0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x276ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x276ce4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x276ce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x276ce8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x276ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x276cec: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x276CECu;
    {
        const bool branch_taken_0x276cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x276CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276CECu;
            // 0x276cf0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276cec) {
            ctx->pc = 0x276D3Cu;
            goto label_276d3c;
        }
    }
    ctx->pc = 0x276CF4u;
    // 0x276cf4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276CF4u;
    SET_GPR_U32(ctx, 31, 0x276CFCu);
    ctx->pc = 0x276CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276CF4u;
            // 0x276cf8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276CFCu; }
        if (ctx->pc != 0x276CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276CFCu; }
        if (ctx->pc != 0x276CFCu) { return; }
    }
    ctx->pc = 0x276CFCu;
label_276cfc:
    // 0x276cfc: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x276CFCu;
    SET_GPR_U32(ctx, 31, 0x276D04u);
    ctx->pc = 0x276D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276CFCu;
            // 0x276d00: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D04u; }
        if (ctx->pc != 0x276D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D04u; }
        if (ctx->pc != 0x276D04u) { return; }
    }
    ctx->pc = 0x276D04u;
label_276d04:
    // 0x276d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x276d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x276d10: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x276d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x276d14: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x276d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x276d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276d1c: 0x0  nop
    ctx->pc = 0x276d1cu;
    // NOP
    // 0x276d20: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x276d20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276d24: 0x0  nop
    ctx->pc = 0x276d24u;
    // NOP
    // 0x276d28: 0x0  nop
    ctx->pc = 0x276d28u;
    // NOP
    // 0x276d2c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276D2Cu;
    SET_GPR_U32(ctx, 31, 0x276D34u);
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D34u; }
        if (ctx->pc != 0x276D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D34u; }
        if (ctx->pc != 0x276D34u) { return; }
    }
    ctx->pc = 0x276D34u;
label_276d34:
    // 0x276d34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x276D34u;
    {
        const bool branch_taken_0x276d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276D34u;
            // 0x276d38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d34) {
            ctx->pc = 0x276D90u;
            goto label_276d90;
        }
    }
    ctx->pc = 0x276D3Cu;
label_276d3c:
    // 0x276d3c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276D3Cu;
    SET_GPR_U32(ctx, 31, 0x276D44u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D44u; }
        if (ctx->pc != 0x276D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D44u; }
        if (ctx->pc != 0x276D44u) { return; }
    }
    ctx->pc = 0x276D44u;
label_276d44:
    // 0x276d44: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x276D44u;
    SET_GPR_U32(ctx, 31, 0x276D4Cu);
    ctx->pc = 0x276D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276D44u;
            // 0x276d48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D4Cu; }
        if (ctx->pc != 0x276D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D4Cu; }
        if (ctx->pc != 0x276D4Cu) { return; }
    }
    ctx->pc = 0x276D4Cu;
label_276d4c:
    // 0x276d4c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x276d4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276d50: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x276d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x276d54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x276d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x276d58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x276d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x276d5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x276d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x276d60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x276d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x276d64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276d68: 0x0  nop
    ctx->pc = 0x276d68u;
    // NOP
    // 0x276d6c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x276d6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276d70: 0x0  nop
    ctx->pc = 0x276d70u;
    // NOP
    // 0x276d74: 0x0  nop
    ctx->pc = 0x276d74u;
    // NOP
    // 0x276d78: 0xc0a248c  jal         func_289230
    ctx->pc = 0x276D78u;
    SET_GPR_U32(ctx, 31, 0x276D80u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D80u; }
        if (ctx->pc != 0x276D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D80u; }
        if (ctx->pc != 0x276D80u) { return; }
    }
    ctx->pc = 0x276D80u;
label_276d80:
    // 0x276d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x276d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d84: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x276D84u;
    SET_GPR_U32(ctx, 31, 0x276D8Cu);
    ctx->pc = 0x276D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276D84u;
            // 0x276d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D8Cu; }
        if (ctx->pc != 0x276D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276D8Cu; }
        if (ctx->pc != 0x276D8Cu) { return; }
    }
    ctx->pc = 0x276D8Cu;
label_276d8c:
    // 0x276d8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x276d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_276d90:
    // 0x276d90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x276d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276d94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x276d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x276d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276da0: 0x3e00008  jr          $ra
    ctx->pc = 0x276DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276DA0u;
            // 0x276da4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276DA8u;
}
