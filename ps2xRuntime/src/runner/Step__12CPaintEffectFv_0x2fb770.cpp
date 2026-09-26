#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CPaintEffectFv
// Address: 0x2fb770 - 0x2fb850
void Step__12CPaintEffectFv_0x2fb770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CPaintEffectFv_0x2fb770");
#endif

    switch (ctx->pc) {
        case 0x2fb7d0u: goto label_2fb7d0;
        case 0x2fb7f8u: goto label_2fb7f8;
        default: break;
    }

    ctx->pc = 0x2fb770u;

    // 0x2fb770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fb770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fb774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fb774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fb778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fb778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fb77c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fb77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fb780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fb780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fb784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb788: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x2fb788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2fb78c: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FB78Cu;
    {
        const bool branch_taken_0x2fb78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb78c) {
            ctx->pc = 0x2FB838u;
            goto label_2fb838;
        }
    }
    ctx->pc = 0x2FB794u;
    // 0x2fb794: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fb794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fb798: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB798u;
    {
        const bool branch_taken_0x2fb798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb798) {
            ctx->pc = 0x2FB7A8u;
            goto label_2fb7a8;
        }
    }
    ctx->pc = 0x2FB7A0u;
    // 0x2fb7a0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FB7A0u;
    {
        const bool branch_taken_0x2fb7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7A0u;
            // 0x2fb7a4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7a0) {
            ctx->pc = 0x2FB83Cu;
            goto label_2fb83c;
        }
    }
    ctx->pc = 0x2FB7A8u;
label_2fb7a8:
    // 0x2fb7a8: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2fb7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2fb7ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fb7b0: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x2fb7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x2fb7b4: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2fb7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2fb7b8: 0x1c60001f  bgtz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FB7B8u;
    {
        const bool branch_taken_0x2fb7b8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2fb7b8) {
            ctx->pc = 0x2FB838u;
            goto label_2fb838;
        }
    }
    ctx->pc = 0x2FB7C0u;
    // 0x2fb7c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb7c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fb7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7c8: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2fb7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2fb7cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fb7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb7d0:
    // 0x2fb7d0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2fb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2fb7d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2fb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2fb7d8: 0xc4610284  lwc1        $f1, 0x284($v1)
    ctx->pc = 0x2fb7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb7dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2fb7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2fb7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fb7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb7e4: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x2fb7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2fb7e8: 0x24650280  addiu       $a1, $v1, 0x280
    ctx->pc = 0x2fb7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x2fb7ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2fb7ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fb7f0: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x2FB7F0u;
    SET_GPR_U32(ctx, 31, 0x2FB7F8u);
    ctx->pc = 0x2FB7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7F0u;
            // 0x2fb7f4: 0xe4600284  swc1        $f0, 0x284($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 644), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7F8u; }
        if (ctx->pc != 0x2FB7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7F8u; }
        if (ctx->pc != 0x2FB7F8u) { return; }
    }
    ctx->pc = 0x2FB7F8u;
label_2fb7f8:
    // 0x2fb7f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fb7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2fb7fc: 0x2a230018  slti        $v1, $s1, 0x18
    ctx->pc = 0x2fb7fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2fb800: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2FB800u;
    {
        const bool branch_taken_0x2fb800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB800u;
            // 0x2fb804: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb800) {
            ctx->pc = 0x2FB7D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fb7d0;
        }
    }
    ctx->pc = 0x2FB808u;
    // 0x2fb808: 0xc60200f0  lwc1        $f2, 0xF0($s0)
    ctx->pc = 0x2fb808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fb80c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2fb80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2fb810: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fb810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2fb814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fb814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fb818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb81c: 0x0  nop
    ctx->pc = 0x2fb81cu;
    // NOP
    // 0x2fb820: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2fb820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2fb824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fb824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fb828: 0x0  nop
    ctx->pc = 0x2fb828u;
    // NOP
    // 0x2fb82c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB82Cu;
    {
        const bool branch_taken_0x2fb82c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB82Cu;
            // 0x2fb830: 0xe60100f0  swc1        $f1, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb82c) {
            ctx->pc = 0x2FB838u;
            goto label_2fb838;
        }
    }
    ctx->pc = 0x2FB834u;
    // 0x2fb834: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2fb834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2fb838:
    // 0x2fb838: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fb838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fb83c:
    // 0x2fb83c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fb83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fb840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fb844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb848: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB848u;
            // 0x2fb84c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB850u;
}
