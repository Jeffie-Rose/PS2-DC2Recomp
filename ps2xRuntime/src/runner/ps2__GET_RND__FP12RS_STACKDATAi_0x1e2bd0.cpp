#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_RND__FP12RS_STACKDATAi
// Address: 0x1e2bd0 - 0x1e2c58
void ps2__GET_RND__FP12RS_STACKDATAi_0x1e2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_RND__FP12RS_STACKDATAi_0x1e2bd0");
#endif

    switch (ctx->pc) {
        case 0x1e2bf8u: goto label_1e2bf8;
        case 0x1e2c00u: goto label_1e2c00;
        case 0x1e2c34u: goto label_1e2c34;
        case 0x1e2c40u: goto label_1e2c40;
        default: break;
    }

    ctx->pc = 0x1e2bd0u;

    // 0x1e2bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2bd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2bdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2be0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2BE0u;
    {
        const bool branch_taken_0x1e2be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BE0u;
            // 0x1e2be4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2be0) {
            ctx->pc = 0x1E2BF0u;
            goto label_1e2bf0;
        }
    }
    ctx->pc = 0x1E2BE8u;
    // 0x1e2be8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2BE8u;
    {
        const bool branch_taken_0x1e2be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BE8u;
            // 0x1e2bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2be8) {
            ctx->pc = 0x1E2C44u;
            goto label_1e2c44;
        }
    }
    ctx->pc = 0x1E2BF0u;
label_1e2bf0:
    // 0x1e2bf0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2BF0u;
    SET_GPR_U32(ctx, 31, 0x1E2BF8u);
    ctx->pc = 0x1E2BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BF0u;
            // 0x1e2bf4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2BF8u; }
        if (ctx->pc != 0x1E2BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2BF8u; }
        if (ctx->pc != 0x1E2BF8u) { return; }
    }
    ctx->pc = 0x1E2BF8u;
label_1e2bf8:
    // 0x1e2bf8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1E2BF8u;
    SET_GPR_U32(ctx, 31, 0x1E2C00u);
    ctx->pc = 0x1E2BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BF8u;
            // 0x1e2bfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C00u; }
        if (ctx->pc != 0x1E2C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C00u; }
        if (ctx->pc != 0x1E2C00u) { return; }
    }
    ctx->pc = 0x1E2C00u;
label_1e2c00:
    // 0x1e2c00: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1e2c00u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2c04: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1e2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1e2c08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e2c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e2c0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e2c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e2c10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e2c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e2c14: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e2c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e2c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2c1c: 0x0  nop
    ctx->pc = 0x1e2c1cu;
    // NOP
    // 0x1e2c20: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1e2c20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e2c24: 0x0  nop
    ctx->pc = 0x1e2c24u;
    // NOP
    // 0x1e2c28: 0x0  nop
    ctx->pc = 0x1e2c28u;
    // NOP
    // 0x1e2c2c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E2C34u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C34u; }
        if (ctx->pc != 0x1E2C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C34u; }
        if (ctx->pc != 0x1E2C34u) { return; }
    }
    ctx->pc = 0x1E2C34u;
label_1e2c34:
    // 0x1e2c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c38: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E2C38u;
    SET_GPR_U32(ctx, 31, 0x1E2C40u);
    ctx->pc = 0x1E2C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C38u;
            // 0x1e2c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C40u; }
        if (ctx->pc != 0x1E2C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C40u; }
        if (ctx->pc != 0x1E2C40u) { return; }
    }
    ctx->pc = 0x1E2C40u;
label_1e2c40:
    // 0x1e2c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2c44:
    // 0x1e2c44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C50u;
            // 0x1e2c54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2C58u;
}
