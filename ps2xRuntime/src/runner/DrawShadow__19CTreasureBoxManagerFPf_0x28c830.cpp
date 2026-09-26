#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawShadow__19CTreasureBoxManagerFPf
// Address: 0x28c830 - 0x28c91c
void DrawShadow__19CTreasureBoxManagerFPf_0x28c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawShadow__19CTreasureBoxManagerFPf_0x28c830");
#endif

    switch (ctx->pc) {
        case 0x28c85cu: goto label_28c85c;
        case 0x28c8d4u: goto label_28c8d4;
        case 0x28c8f0u: goto label_28c8f0;
        default: break;
    }

    ctx->pc = 0x28c830u;

    // 0x28c830: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x28c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x28c834: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28c838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c83c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c840: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28c840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c844: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28c844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c84c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x28c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28c850: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x28c850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28c854: 0xc050dd8  jal         func_143760
    ctx->pc = 0x28C854u;
    SET_GPR_U32(ctx, 31, 0x28C85Cu);
    ctx->pc = 0x28C858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C854u;
            // 0x28c858: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C85Cu; }
        if (ctx->pc != 0x28C85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C85Cu; }
        if (ctx->pc != 0x28C85Cu) { return; }
    }
    ctx->pc = 0x28C85Cu;
label_28c85c:
    // 0x28c85c: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x28c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x28c860: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28c860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28c864: 0x246352b0  addiu       $v1, $v1, 0x52B0
    ctx->pc = 0x28c864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21168));
    // 0x28c868: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x28c868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x28c86c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x28c86cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c870: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c874: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x28c874u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x28c878: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x28c878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28c87c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x28c87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28c880: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x28c880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c884: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x28c884u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x28c888: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x28c888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x28c88c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x28c88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x28c890: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x28c890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28c894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c898: 0x0  nop
    ctx->pc = 0x28c898u;
    // NOP
    // 0x28c89c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28C89Cu;
    {
        const bool branch_taken_0x28c89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c89c) {
            ctx->pc = 0x28C8A8u;
            goto label_28c8a8;
        }
    }
    ctx->pc = 0x28C8A4u;
    // 0x28c8a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x28c8a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_28c8a8:
    // 0x28c8a8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x28c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x28c8ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x28c8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x28c8b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8b4: 0x0  nop
    ctx->pc = 0x28c8b4u;
    // NOP
    // 0x28c8b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28c8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28c8bc: 0x0  nop
    ctx->pc = 0x28c8bcu;
    // NOP
    // 0x28c8c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28C8C0u;
    {
        const bool branch_taken_0x28c8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28C8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8C0u;
            // 0x28c8c4: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8c0) {
            ctx->pc = 0x28C8CCu;
            goto label_28c8cc;
        }
    }
    ctx->pc = 0x28C8C8u;
    // 0x28c8c8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x28c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_28c8cc:
    // 0x28c8cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28c8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c8d4:
    // 0x28c8d4: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x28c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x28c8d8: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x28c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28c8dc: 0x80630064  lb          $v1, 0x64($v1)
    ctx->pc = 0x28c8dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x28c8e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C8E0u;
    {
        const bool branch_taken_0x28c8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8E0u;
            // 0x28c8e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8e0) {
            ctx->pc = 0x28C8F0u;
            goto label_28c8f0;
        }
    }
    ctx->pc = 0x28C8E8u;
    // 0x28c8e8: 0xc0a30c0  jal         func_28C300
    ctx->pc = 0x28C8E8u;
    SET_GPR_U32(ctx, 31, 0x28C8F0u);
    ctx->pc = 0x28C8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8E8u;
            // 0x28c8ec: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C300u;
    if (runtime->hasFunction(0x28C300u)) {
        auto targetFn = runtime->lookupFunction(0x28C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8F0u; }
        if (ctx->pc != 0x28C8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawShadow__12CTreasureBoxFPfPf_0x28c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8F0u; }
        if (ctx->pc != 0x28C8F0u) { return; }
    }
    ctx->pc = 0x28C8F0u;
label_28c8f0:
    // 0x28c8f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28c8f4: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x28c8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x28c8f8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x28C8F8u;
    {
        const bool branch_taken_0x28c8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8F8u;
            // 0x28c8fc: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8f8) {
            ctx->pc = 0x28C8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c8d4;
        }
    }
    ctx->pc = 0x28C900u;
    // 0x28c900: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c914: 0x3e00008  jr          $ra
    ctx->pc = 0x28C914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C914u;
            // 0x28c918: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C91Cu;
}
