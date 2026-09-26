#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightingSunRatio__4CMapFPf
// Address: 0x161010 - 0x1610ec
void GetLightingSunRatio__4CMapFPf_0x161010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightingSunRatio__4CMapFPf_0x161010");
#endif

    switch (ctx->pc) {
        case 0x161030u: goto label_161030;
        case 0x161040u: goto label_161040;
        default: break;
    }

    ctx->pc = 0x161010u;

    // 0x161010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x161014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x161014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x161018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x161018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16101c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x161024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161028: 0xc05834c  jal         func_160D30
    ctx->pc = 0x161028u;
    SET_GPR_U32(ctx, 31, 0x161030u);
    ctx->pc = 0x16102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161028u;
            // 0x16102c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161030u; }
        if (ctx->pc != 0x161030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161030u; }
        if (ctx->pc != 0x161030u) { return; }
    }
    ctx->pc = 0x161030u;
label_161030:
    // 0x161030: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x161030u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x161034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161038: 0xc05839c  jal         func_160E70
    ctx->pc = 0x161038u;
    SET_GPR_U32(ctx, 31, 0x161040u);
    ctx->pc = 0x16103Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161038u;
            // 0x16103c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160E70u;
    if (runtime->hasFunction(0x160E70u)) {
        auto targetFn = runtime->lookupFunction(0x160E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161040u; }
        if (ctx->pc != 0x161040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingRatio__4CMapFPf_0x160e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161040u; }
        if (ctx->pc != 0x161040u) { return; }
    }
    ctx->pc = 0x161040u;
label_161040:
    // 0x161040: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x161044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161048: 0x0  nop
    ctx->pc = 0x161048u;
    // NOP
    // 0x16104c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16104cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161050: 0x0  nop
    ctx->pc = 0x161050u;
    // NOP
    // 0x161054: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x161054u;
    {
        const bool branch_taken_0x161054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161054u;
            // 0x161058: 0x3c034080  lui         $v1, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161054) {
            ctx->pc = 0x1610B0u;
            goto label_1610b0;
        }
    }
    ctx->pc = 0x16105Cu;
    // 0x16105c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16105cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161060: 0x0  nop
    ctx->pc = 0x161060u;
    // NOP
    // 0x161064: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x161064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161068: 0x0  nop
    ctx->pc = 0x161068u;
    // NOP
    // 0x16106c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16106Cu;
    {
        const bool branch_taken_0x16106c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16106Cu;
            // 0x161070: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16106c) {
            ctx->pc = 0x161080u;
            goto label_161080;
        }
    }
    ctx->pc = 0x161074u;
    // 0x161074: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x161074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x161078: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x161078u;
    {
        const bool branch_taken_0x161078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16107Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161078u;
            // 0x16107c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161078) {
            ctx->pc = 0x1610B0u;
            goto label_1610b0;
        }
    }
    ctx->pc = 0x161080u;
label_161080:
    // 0x161080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161084: 0x0  nop
    ctx->pc = 0x161084u;
    // NOP
    // 0x161088: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x161088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16108c: 0x0  nop
    ctx->pc = 0x16108cu;
    // NOP
    // 0x161090: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x161090u;
    {
        const bool branch_taken_0x161090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161090) {
            ctx->pc = 0x1610B0u;
            goto label_1610b0;
        }
    }
    ctx->pc = 0x161098u;
    // 0x161098: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x161098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x16109c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16109cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1610a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1610a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1610a4: 0x0  nop
    ctx->pc = 0x1610a4u;
    // NOP
    // 0x1610a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1610a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1610ac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1610acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1610b0:
    // 0x1610b0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1610b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1610b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1610b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1610b8: 0x0  nop
    ctx->pc = 0x1610b8u;
    // NOP
    // 0x1610bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1610bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1610c0: 0x0  nop
    ctx->pc = 0x1610c0u;
    // NOP
    // 0x1610c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1610C4u;
    {
        const bool branch_taken_0x1610c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1610c4) {
            ctx->pc = 0x1610D4u;
            goto label_1610d4;
        }
    }
    ctx->pc = 0x1610CCu;
    // 0x1610cc: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1610ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1610d0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1610d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1610d4:
    // 0x1610d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1610d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1610d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1610d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1610dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1610dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1610e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1610e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1610e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1610E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1610E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1610E4u;
            // 0x1610e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1610ECu;
}
