#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_CHENGE_STEP__FP12RS_STACKDATAi
// Address: 0x2720c0 - 0x272160
void ps2__OBJS_CHENGE_STEP__FP12RS_STACKDATAi_0x2720c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_CHENGE_STEP__FP12RS_STACKDATAi_0x2720c0");
#endif

    switch (ctx->pc) {
        case 0x2720ecu: goto label_2720ec;
        case 0x2720fcu: goto label_2720fc;
        case 0x272108u: goto label_272108;
        case 0x272144u: goto label_272144;
        default: break;
    }

    ctx->pc = 0x2720c0u;

    // 0x2720c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2720c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2720c4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2720c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2720c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2720c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2720cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2720ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2720d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2720d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2720d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2720d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2720d8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2720d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2720dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2720dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2720e0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2720e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2720e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2720E4u;
    SET_GPR_U32(ctx, 31, 0x2720ECu);
    ctx->pc = 0x2720E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2720E4u;
            // 0x2720e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2720ECu; }
        if (ctx->pc != 0x2720ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2720ECu; }
        if (ctx->pc != 0x2720ECu) { return; }
    }
    ctx->pc = 0x2720ECu;
label_2720ec:
    // 0x2720ec: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2720ECu;
    {
        const bool branch_taken_0x2720ec = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2720F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720ECu;
            // 0x2720f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720ec) {
            ctx->pc = 0x272100u;
            goto label_272100;
        }
    }
    ctx->pc = 0x2720F4u;
    // 0x2720f4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2720F4u;
    SET_GPR_U32(ctx, 31, 0x2720FCu);
    ctx->pc = 0x2720F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2720F4u;
            // 0x2720f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2720FCu; }
        if (ctx->pc != 0x2720FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2720FCu; }
        if (ctx->pc != 0x2720FCu) { return; }
    }
    ctx->pc = 0x2720FCu;
label_2720fc:
    // 0x2720fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2720fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_272100:
    // 0x272100: 0xc098a44  jal         func_262910
    ctx->pc = 0x272100u;
    SET_GPR_U32(ctx, 31, 0x272108u);
    ctx->pc = 0x272104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272100u;
            // 0x272104: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272108u; }
        if (ctx->pc != 0x272108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272108u; }
        if (ctx->pc != 0x272108u) { return; }
    }
    ctx->pc = 0x272108u;
label_272108:
    // 0x272108: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272108u;
    {
        const bool branch_taken_0x272108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272108) {
            ctx->pc = 0x272118u;
            goto label_272118;
        }
    }
    ctx->pc = 0x272110u;
    // 0x272110: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x272110u;
    {
        const bool branch_taken_0x272110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272110u;
            // 0x272114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272110) {
            ctx->pc = 0x272148u;
            goto label_272148;
        }
    }
    ctx->pc = 0x272118u;
label_272118:
    // 0x272118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27211c: 0x0  nop
    ctx->pc = 0x27211cu;
    // NOP
    // 0x272120: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x272120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272124: 0x0  nop
    ctx->pc = 0x272124u;
    // NOP
    // 0x272128: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x272128u;
    {
        const bool branch_taken_0x272128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272128u;
            // 0x27212c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272128) {
            ctx->pc = 0x27213Cu;
            goto label_27213c;
        }
    }
    ctx->pc = 0x272130u;
    // 0x272130: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x272130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x272134: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x272134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x272138: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x272138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27213c:
    // 0x27213c: 0xc097434  jal         func_25D0D0
    ctx->pc = 0x27213Cu;
    SET_GPR_U32(ctx, 31, 0x272144u);
    ctx->pc = 0x272140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27213Cu;
            // 0x272140: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D0D0u;
    if (runtime->hasFunction(0x25D0D0u)) {
        auto targetFn = runtime->lookupFunction(0x25D0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272144u; }
        if (ctx->pc != 0x272144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChengeStep__12CSceneObjSeqFf_0x25d0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272144u; }
        if (ctx->pc != 0x272144u) { return; }
    }
    ctx->pc = 0x272144u;
label_272144:
    // 0x272144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272148:
    // 0x272148: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x272148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27214c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x272150: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x272150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272154: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x272154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272158: 0x3e00008  jr          $ra
    ctx->pc = 0x272158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272158u;
            // 0x27215c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272160u;
}
