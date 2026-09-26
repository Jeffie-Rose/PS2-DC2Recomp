#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _NORMAL_VECTOR__FP12RS_STACKDATAi
// Address: 0x2767f0 - 0x276890
void ps2__NORMAL_VECTOR__FP12RS_STACKDATAi_0x2767f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__NORMAL_VECTOR__FP12RS_STACKDATAi_0x2767f0");
#endif

    switch (ctx->pc) {
        case 0x276848u: goto label_276848;
        case 0x276858u: goto label_276858;
        case 0x276868u: goto label_276868;
        case 0x276874u: goto label_276874;
        default: break;
    }

    ctx->pc = 0x2767f0u;

    // 0x2767f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2767f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2767f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2767f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2767f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2767f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2767fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2767fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x276800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x276804: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x276804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27680c: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x27680cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x276810: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x276810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x276814: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x276814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x276818: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x276818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27681c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27681cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x276820: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x276820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x276824: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x276824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276828: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x276828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27682c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x27682cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x276830: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x276830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276834: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x276834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276838: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x276838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27683c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x276840: 0xc041be0  jal         func_106F80
    ctx->pc = 0x276840u;
    SET_GPR_U32(ctx, 31, 0x276848u);
    ctx->pc = 0x276844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276840u;
            // 0x276844: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276848u; }
        if (ctx->pc != 0x276848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276848u; }
        if (ctx->pc != 0x276848u) { return; }
    }
    ctx->pc = 0x276848u;
label_276848:
    // 0x276848: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x276848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27684c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27684cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276850: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276850u;
    SET_GPR_U32(ctx, 31, 0x276858u);
    ctx->pc = 0x276854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276850u;
            // 0x276854: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276858u; }
        if (ctx->pc != 0x276858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276858u; }
        if (ctx->pc != 0x276858u) { return; }
    }
    ctx->pc = 0x276858u;
label_276858:
    // 0x276858: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x276858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27685c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276860: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276860u;
    SET_GPR_U32(ctx, 31, 0x276868u);
    ctx->pc = 0x276864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276860u;
            // 0x276864: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276868u; }
        if (ctx->pc != 0x276868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276868u; }
        if (ctx->pc != 0x276868u) { return; }
    }
    ctx->pc = 0x276868u;
label_276868:
    // 0x276868: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x276868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27686c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27686Cu;
    SET_GPR_U32(ctx, 31, 0x276874u);
    ctx->pc = 0x276870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27686Cu;
            // 0x276870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276874u; }
        if (ctx->pc != 0x276874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276874u; }
        if (ctx->pc != 0x276874u) { return; }
    }
    ctx->pc = 0x276874u;
label_276874:
    // 0x276874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x276874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27687c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27687cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276888: 0x3e00008  jr          $ra
    ctx->pc = 0x276888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276888u;
            // 0x27688c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276890u;
}
