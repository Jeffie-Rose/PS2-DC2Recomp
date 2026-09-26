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
// Address: 0x2e3980 - 0x2e3a6c
void ps2__GET_RAND__FP12RS_STACKDATAi_0x2e3980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_RAND__FP12RS_STACKDATAi_0x2e3980");
#endif

    switch (ctx->pc) {
        case 0x2e39c0u: goto label_2e39c0;
        case 0x2e39c8u: goto label_2e39c8;
        case 0x2e39f8u: goto label_2e39f8;
        case 0x2e3a08u: goto label_2e3a08;
        case 0x2e3a10u: goto label_2e3a10;
        case 0x2e3a44u: goto label_2e3a44;
        case 0x2e3a50u: goto label_2e3a50;
        default: break;
    }

    ctx->pc = 0x2e3980u;

    // 0x2e3980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e3988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e398c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e3990: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e3990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3998: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3998u;
    {
        const bool branch_taken_0x2e3998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E399Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3998u;
            // 0x2e399c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3998) {
            ctx->pc = 0x2E39A8u;
            goto label_2e39a8;
        }
    }
    ctx->pc = 0x2E39A0u;
    // 0x2e39a0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E39A0u;
    {
        const bool branch_taken_0x2e39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E39A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39A0u;
            // 0x2e39a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39a0) {
            ctx->pc = 0x2E3A54u;
            goto label_2e3a54;
        }
    }
    ctx->pc = 0x2E39A8u;
label_2e39a8:
    // 0x2e39a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e39ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e39acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e39b0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E39B0u;
    {
        const bool branch_taken_0x2e39b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E39B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39B0u;
            // 0x2e39b4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39b0) {
            ctx->pc = 0x2E3A00u;
            goto label_2e3a00;
        }
    }
    ctx->pc = 0x2E39B8u;
    // 0x2e39b8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E39B8u;
    SET_GPR_U32(ctx, 31, 0x2E39C0u);
    ctx->pc = 0x2E39BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39B8u;
            // 0x2e39bc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39C0u; }
        if (ctx->pc != 0x2E39C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39C0u; }
        if (ctx->pc != 0x2E39C0u) { return; }
    }
    ctx->pc = 0x2E39C0u;
label_2e39c0:
    // 0x2e39c0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2E39C0u;
    SET_GPR_U32(ctx, 31, 0x2E39C8u);
    ctx->pc = 0x2E39C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39C0u;
            // 0x2e39c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39C8u; }
        if (ctx->pc != 0x2E39C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39C8u; }
        if (ctx->pc != 0x2E39C8u) { return; }
    }
    ctx->pc = 0x2E39C8u;
label_2e39c8:
    // 0x2e39c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e39c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e39cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e39ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e39d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e39d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e39d8: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2e39d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e39dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e39dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e39e0: 0x0  nop
    ctx->pc = 0x2e39e0u;
    // NOP
    // 0x2e39e4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e39e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e39e8: 0x0  nop
    ctx->pc = 0x2e39e8u;
    // NOP
    // 0x2e39ec: 0x0  nop
    ctx->pc = 0x2e39ecu;
    // NOP
    // 0x2e39f0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E39F0u;
    SET_GPR_U32(ctx, 31, 0x2E39F8u);
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39F8u; }
        if (ctx->pc != 0x2E39F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39F8u; }
        if (ctx->pc != 0x2E39F8u) { return; }
    }
    ctx->pc = 0x2E39F8u;
label_2e39f8:
    // 0x2e39f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E39F8u;
    {
        const bool branch_taken_0x2e39f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E39FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39F8u;
            // 0x2e39fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39f8) {
            ctx->pc = 0x2E3A54u;
            goto label_2e3a54;
        }
    }
    ctx->pc = 0x2E3A00u;
label_2e3a00:
    // 0x2e3a00: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E3A00u;
    SET_GPR_U32(ctx, 31, 0x2E3A08u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A08u; }
        if (ctx->pc != 0x2E3A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A08u; }
        if (ctx->pc != 0x2E3A08u) { return; }
    }
    ctx->pc = 0x2E3A08u;
label_2e3a08:
    // 0x2e3a08: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2E3A08u;
    SET_GPR_U32(ctx, 31, 0x2E3A10u);
    ctx->pc = 0x2E3A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A08u;
            // 0x2e3a0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A10u; }
        if (ctx->pc != 0x2E3A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A10u; }
        if (ctx->pc != 0x2E3A10u) { return; }
    }
    ctx->pc = 0x2E3A10u;
label_2e3a10:
    // 0x2e3a10: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2e3a10u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3a14: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2e3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2e3a18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e3a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3a1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e3a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e3a20: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e3a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e3a24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e3a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e3a28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e3a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3a2c: 0x0  nop
    ctx->pc = 0x2e3a2cu;
    // NOP
    // 0x2e3a30: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e3a30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e3a34: 0x0  nop
    ctx->pc = 0x2e3a34u;
    // NOP
    // 0x2e3a38: 0x0  nop
    ctx->pc = 0x2e3a38u;
    // NOP
    // 0x2e3a3c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2E3A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A44u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A44u; }
        if (ctx->pc != 0x2E3A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A44u; }
        if (ctx->pc != 0x2E3A44u) { return; }
    }
    ctx->pc = 0x2E3A44u;
label_2e3a44:
    // 0x2e3a44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a48: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E3A48u;
    SET_GPR_U32(ctx, 31, 0x2E3A50u);
    ctx->pc = 0x2E3A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A48u;
            // 0x2e3a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A50u; }
        if (ctx->pc != 0x2E3A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A50u; }
        if (ctx->pc != 0x2E3A50u) { return; }
    }
    ctx->pc = 0x2E3A50u;
label_2e3a50:
    // 0x2e3a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3a54:
    // 0x2e3a54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e3a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3a58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e3a5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e3a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3a60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e3a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A64u;
            // 0x2e3a68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3A6Cu;
}
