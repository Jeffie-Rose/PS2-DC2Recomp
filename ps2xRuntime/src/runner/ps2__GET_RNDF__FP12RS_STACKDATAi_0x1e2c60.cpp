#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_RNDF__FP12RS_STACKDATAi
// Address: 0x1e2c60 - 0x1e2ce8
void ps2__GET_RNDF__FP12RS_STACKDATAi_0x1e2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_RNDF__FP12RS_STACKDATAi_0x1e2c60");
#endif

    switch (ctx->pc) {
        case 0x1e2c88u: goto label_1e2c88;
        case 0x1e2c90u: goto label_1e2c90;
        case 0x1e2cc0u: goto label_1e2cc0;
        case 0x1e2cd0u: goto label_1e2cd0;
        default: break;
    }

    ctx->pc = 0x1e2c60u;

    // 0x1e2c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2c64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2c68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2c6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e2c70: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2C70u;
    {
        const bool branch_taken_0x1e2c70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C70u;
            // 0x1e2c74: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c70) {
            ctx->pc = 0x1E2C80u;
            goto label_1e2c80;
        }
    }
    ctx->pc = 0x1E2C78u;
    // 0x1e2c78: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2C78u;
    {
        const bool branch_taken_0x1e2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C78u;
            // 0x1e2c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c78) {
            ctx->pc = 0x1E2CD4u;
            goto label_1e2cd4;
        }
    }
    ctx->pc = 0x1E2C80u;
label_1e2c80:
    // 0x1e2c80: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2C80u;
    SET_GPR_U32(ctx, 31, 0x1E2C88u);
    ctx->pc = 0x1E2C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C80u;
            // 0x1e2c84: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C88u; }
        if (ctx->pc != 0x1E2C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C88u; }
        if (ctx->pc != 0x1E2C88u) { return; }
    }
    ctx->pc = 0x1E2C88u;
label_1e2c88:
    // 0x1e2c88: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1E2C88u;
    SET_GPR_U32(ctx, 31, 0x1E2C90u);
    ctx->pc = 0x1E2C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C88u;
            // 0x1e2c8c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C90u; }
        if (ctx->pc != 0x1E2C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C90u; }
        if (ctx->pc != 0x1E2C90u) { return; }
    }
    ctx->pc = 0x1E2C90u;
label_1e2c90:
    // 0x1e2c90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e2c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2c94: 0x0  nop
    ctx->pc = 0x1e2c94u;
    // NOP
    // 0x1e2c98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e2c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e2c9c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1e2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1e2ca0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1e2ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1e2ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2ca8: 0x0  nop
    ctx->pc = 0x1e2ca8u;
    // NOP
    // 0x1e2cac: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1e2cacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e2cb0: 0x0  nop
    ctx->pc = 0x1e2cb0u;
    // NOP
    // 0x1e2cb4: 0x0  nop
    ctx->pc = 0x1e2cb4u;
    // NOP
    // 0x1e2cb8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E2CB8u;
    SET_GPR_U32(ctx, 31, 0x1E2CC0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2CC0u; }
        if (ctx->pc != 0x1E2CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2CC0u; }
        if (ctx->pc != 0x1E2CC0u) { return; }
    }
    ctx->pc = 0x1E2CC0u;
label_1e2cc0:
    // 0x1e2cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2cc8: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E2CC8u;
    SET_GPR_U32(ctx, 31, 0x1E2CD0u);
    ctx->pc = 0x1E2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2CC8u;
            // 0x1e2ccc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2CD0u; }
        if (ctx->pc != 0x1E2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2CD0u; }
        if (ctx->pc != 0x1E2CD0u) { return; }
    }
    ctx->pc = 0x1E2CD0u;
label_1e2cd0:
    // 0x1e2cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2cd4:
    // 0x1e2cd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2cd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e2cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e2cdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2CE0u;
            // 0x1e2ce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2CE8u;
}
