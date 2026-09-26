#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__7CEffectFi
// Address: 0x17f7c0 - 0x17ff6c
void Step__7CEffectFi_0x17f7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__7CEffectFi_0x17f7c0");
#endif

    switch (ctx->pc) {
        case 0x17f838u: goto label_17f838;
        case 0x17f848u: goto label_17f848;
        case 0x17f858u: goto label_17f858;
        case 0x17f868u: goto label_17f868;
        case 0x17f884u: goto label_17f884;
        case 0x17f88cu: goto label_17f88c;
        case 0x17f8d0u: goto label_17f8d0;
        case 0x17fa70u: goto label_17fa70;
        case 0x17fa88u: goto label_17fa88;
        case 0x17fa94u: goto label_17fa94;
        case 0x17faacu: goto label_17faac;
        case 0x17fde4u: goto label_17fde4;
        case 0x17fe08u: goto label_17fe08;
        case 0x17fe10u: goto label_17fe10;
        case 0x17fe1cu: goto label_17fe1c;
        case 0x17fe28u: goto label_17fe28;
        case 0x17fe30u: goto label_17fe30;
        default: break;
    }

    ctx->pc = 0x17f7c0u;

    // 0x17f7c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17f7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17f7c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17f7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17f7c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17f7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17f7cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17f7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17f7d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17f7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17f7d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17f7d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f7dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17f7dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17f7e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17f7e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17f7e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f7e8: 0x106001d6  beqz        $v1, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x17F7E8u;
    {
        const bool branch_taken_0x17f7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7E8u;
            // 0x17f7ec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7e8) {
            ctx->pc = 0x17FF44u;
            goto label_17ff44;
        }
    }
    ctx->pc = 0x17F7F0u;
    // 0x17f7f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f7f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17f7f8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x17f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x17f7fc: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x17f800: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f804: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x17f804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17f808: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F808u;
    {
        const bool branch_taken_0x17f808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f808) {
            ctx->pc = 0x17F818u;
            goto label_17f818;
        }
    }
    ctx->pc = 0x17F810u;
    // 0x17f810: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x17f810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x17f814: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x17f814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_17f818:
    // 0x17f818: 0x8e620144  lw          $v0, 0x144($s3)
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x17f81c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F81Cu;
    {
        const bool branch_taken_0x17f81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F81Cu;
            // 0x17f820: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f81c) {
            ctx->pc = 0x17F82Cu;
            goto label_17f82c;
        }
    }
    ctx->pc = 0x17F824u;
    // 0x17f824: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x17f824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x17f828: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x17f828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_17f82c:
    // 0x17f82c: 0x26660070  addiu       $a2, $s3, 0x70
    ctx->pc = 0x17f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x17f830: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x17F830u;
    SET_GPR_U32(ctx, 31, 0x17F838u);
    ctx->pc = 0x17F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F830u;
            // 0x17f834: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F838u; }
        if (ctx->pc != 0x17F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F838u; }
        if (ctx->pc != 0x17F838u) { return; }
    }
    ctx->pc = 0x17F838u;
label_17f838:
    // 0x17f838: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x17f838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x17f83c: 0x26660080  addiu       $a2, $s3, 0x80
    ctx->pc = 0x17f83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x17f840: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x17F840u;
    SET_GPR_U32(ctx, 31, 0x17F848u);
    ctx->pc = 0x17F844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F840u;
            // 0x17f844: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F848u; }
        if (ctx->pc != 0x17F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F848u; }
        if (ctx->pc != 0x17F848u) { return; }
    }
    ctx->pc = 0x17F848u;
label_17f848:
    // 0x17f848: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x17f848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x17f84c: 0x26660090  addiu       $a2, $s3, 0x90
    ctx->pc = 0x17f84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x17f850: 0xc041c44  jal         func_107110
    ctx->pc = 0x17F850u;
    SET_GPR_U32(ctx, 31, 0x17F858u);
    ctx->pc = 0x17F854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F850u;
            // 0x17f854: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107110u;
    if (runtime->hasFunction(0x107110u)) {
        auto targetFn = runtime->lookupFunction(0x107110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F858u; }
        if (ctx->pc != 0x17F858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulVector_0x107110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F858u; }
        if (ctx->pc != 0x17F858u) { return; }
    }
    ctx->pc = 0x17F858u;
label_17f858:
    // 0x17f858: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x17f858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x17f85c: 0x266600a0  addiu       $a2, $s3, 0xA0
    ctx->pc = 0x17f85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x17f860: 0xc041c44  jal         func_107110
    ctx->pc = 0x17F860u;
    SET_GPR_U32(ctx, 31, 0x17F868u);
    ctx->pc = 0x17F864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F860u;
            // 0x17f864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107110u;
    if (runtime->hasFunction(0x107110u)) {
        auto targetFn = runtime->lookupFunction(0x107110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F868u; }
        if (ctx->pc != 0x17F868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulVector_0x107110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F868u; }
        if (ctx->pc != 0x17F868u) { return; }
    }
    ctx->pc = 0x17F868u;
label_17f868:
    // 0x17f868: 0x8e6201d0  lw          $v0, 0x1D0($s3)
    ctx->pc = 0x17f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x17f86c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x17F86Cu;
    {
        const bool branch_taken_0x17f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F86Cu;
            // 0x17f870: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f86c) {
            ctx->pc = 0x17FA68u;
            goto label_17fa68;
        }
    }
    ctx->pc = 0x17F874u;
    // 0x17f874: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17f878: 0x266501e0  addiu       $a1, $s3, 0x1E0
    ctx->pc = 0x17f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    // 0x17f87c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x17F87Cu;
    SET_GPR_U32(ctx, 31, 0x17F884u);
    ctx->pc = 0x17F880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F87Cu;
            // 0x17f880: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F884u; }
        if (ctx->pc != 0x17F884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F884u; }
        if (ctx->pc != 0x17F884u) { return; }
    }
    ctx->pc = 0x17F884u;
label_17f884:
    // 0x17f884: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x17F884u;
    SET_GPR_U32(ctx, 31, 0x17F88Cu);
    ctx->pc = 0x17F888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F884u;
            // 0x17f888: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F88Cu; }
        if (ctx->pc != 0x17F88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F88Cu; }
        if (ctx->pc != 0x17F88Cu) { return; }
    }
    ctx->pc = 0x17F88Cu;
label_17f88c:
    // 0x17f88c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17f88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f890: 0x0  nop
    ctx->pc = 0x17f890u;
    // NOP
    // 0x17f894: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17f894u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f898: 0x0  nop
    ctx->pc = 0x17f898u;
    // NOP
    // 0x17f89c: 0x45010071  bc1t        . + 4 + (0x71 << 2)
    ctx->pc = 0x17F89Cu;
    {
        const bool branch_taken_0x17f89c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f89c) {
            ctx->pc = 0x17FA64u;
            goto label_17fa64;
        }
    }
    ctx->pc = 0x17F8A4u;
    // 0x17f8a4: 0xc66201f0  lwc1        $f2, 0x1F0($s3)
    ctx->pc = 0x17f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17f8a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17f8ac: 0xc66101f4  lwc1        $f1, 0x1F4($s3)
    ctx->pc = 0x17f8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f8b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17f8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17f8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x17f8b8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17f8b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17f8bc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17f8bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17f8c0: 0x0  nop
    ctx->pc = 0x17f8c0u;
    // NOP
    // 0x17f8c4: 0x0  nop
    ctx->pc = 0x17f8c4u;
    // NOP
    // 0x17f8c8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x17F8C8u;
    SET_GPR_U32(ctx, 31, 0x17F8D0u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8D0u; }
        if (ctx->pc != 0x17F8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8D0u; }
        if (ctx->pc != 0x17F8D0u) { return; }
    }
    ctx->pc = 0x17F8D0u;
label_17f8d0:
    // 0x17f8d0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x17f8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f8d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f8d8: 0x0  nop
    ctx->pc = 0x17f8d8u;
    // NOP
    // 0x17f8dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17f8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f8e0: 0x0  nop
    ctx->pc = 0x17f8e0u;
    // NOP
    // 0x17f8e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17F8E4u;
    {
        const bool branch_taken_0x17f8e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17F8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8E4u;
            // 0x17f8e8: 0x27a20074  addiu       $v0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8e4) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8ECu;
    // 0x17f8ec: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x17f8ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x17f8f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x17f8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_17f8f4:
    // 0x17f8f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f8f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f8fc: 0x0  nop
    ctx->pc = 0x17f8fcu;
    // NOP
    // 0x17f900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17f900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f904: 0x0  nop
    ctx->pc = 0x17f904u;
    // NOP
    // 0x17f908: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17F908u;
    {
        const bool branch_taken_0x17f908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17F90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F908u;
            // 0x17f90c: 0x27a30078  addiu       $v1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f908) {
            ctx->pc = 0x17F918u;
            goto label_17f918;
        }
    }
    ctx->pc = 0x17F910u;
    // 0x17f910: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x17f910u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x17f914: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_17f918:
    // 0x17f918: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f91c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f920: 0x0  nop
    ctx->pc = 0x17f920u;
    // NOP
    // 0x17f924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17f924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f928: 0x0  nop
    ctx->pc = 0x17f928u;
    // NOP
    // 0x17f92c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17F92Cu;
    {
        const bool branch_taken_0x17f92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17F930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F92Cu;
            // 0x17f930: 0x46000807  neg.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f92c) {
            ctx->pc = 0x17F938u;
            goto label_17f938;
        }
    }
    ctx->pc = 0x17F934u;
    // 0x17f934: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x17f934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_17f938:
    // 0x17f938: 0xc6610060  lwc1        $f1, 0x60($s3)
    ctx->pc = 0x17f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f93c: 0xc66001e0  lwc1        $f0, 0x1E0($s3)
    ctx->pc = 0x17f93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f940: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17f940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f944: 0x0  nop
    ctx->pc = 0x17f944u;
    // NOP
    // 0x17f948: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x17F948u;
    {
        const bool branch_taken_0x17f948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f948) {
            ctx->pc = 0x17F978u;
            goto label_17f978;
        }
    }
    ctx->pc = 0x17F950u;
    // 0x17f950: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x17f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f954: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17f954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17f958: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x17f958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x17f95c: 0xc66101e0  lwc1        $f1, 0x1E0($s3)
    ctx->pc = 0x17f95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f960: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17f960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f964: 0x0  nop
    ctx->pc = 0x17f964u;
    // NOP
    // 0x17f968: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x17F968u;
    {
        const bool branch_taken_0x17f968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f968) {
            ctx->pc = 0x17F99Cu;
            goto label_17f99c;
        }
    }
    ctx->pc = 0x17F970u;
    // 0x17f970: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F970u;
    {
        const bool branch_taken_0x17f970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F970u;
            // 0x17f974: 0xe6610060  swc1        $f1, 0x60($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f970) {
            ctx->pc = 0x17F99Cu;
            goto label_17f99c;
        }
    }
    ctx->pc = 0x17F978u;
label_17f978:
    // 0x17f978: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x17f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f97c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17f97cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17f980: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x17f980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x17f984: 0xc66101e0  lwc1        $f1, 0x1E0($s3)
    ctx->pc = 0x17f984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f988: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17f988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f98c: 0x0  nop
    ctx->pc = 0x17f98cu;
    // NOP
    // 0x17f990: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17F990u;
    {
        const bool branch_taken_0x17f990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f990) {
            ctx->pc = 0x17F99Cu;
            goto label_17f99c;
        }
    }
    ctx->pc = 0x17F998u;
    // 0x17f998: 0xe6610060  swc1        $f1, 0x60($s3)
    ctx->pc = 0x17f998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
label_17f99c:
    // 0x17f99c: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x17f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f9a0: 0xc66001e4  lwc1        $f0, 0x1E4($s3)
    ctx->pc = 0x17f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f9a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17f9a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f9a8: 0x0  nop
    ctx->pc = 0x17f9a8u;
    // NOP
    // 0x17f9ac: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x17F9ACu;
    {
        const bool branch_taken_0x17f9ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f9ac) {
            ctx->pc = 0x17F9DCu;
            goto label_17f9dc;
        }
    }
    ctx->pc = 0x17F9B4u;
    // 0x17f9b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f9b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17f9b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17f9bc: 0xe6600064  swc1        $f0, 0x64($s3)
    ctx->pc = 0x17f9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x17f9c0: 0xc66101e4  lwc1        $f1, 0x1E4($s3)
    ctx->pc = 0x17f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f9c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17f9c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f9c8: 0x0  nop
    ctx->pc = 0x17f9c8u;
    // NOP
    // 0x17f9cc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x17F9CCu;
    {
        const bool branch_taken_0x17f9cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f9cc) {
            ctx->pc = 0x17FA00u;
            goto label_17fa00;
        }
    }
    ctx->pc = 0x17F9D4u;
    // 0x17f9d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F9D4u;
    {
        const bool branch_taken_0x17f9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9D4u;
            // 0x17f9d8: 0xe6610064  swc1        $f1, 0x64($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9d4) {
            ctx->pc = 0x17FA00u;
            goto label_17fa00;
        }
    }
    ctx->pc = 0x17F9DCu;
label_17f9dc:
    // 0x17f9dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f9e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17f9e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17f9e4: 0xe6600064  swc1        $f0, 0x64($s3)
    ctx->pc = 0x17f9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x17f9e8: 0xc66101e4  lwc1        $f1, 0x1E4($s3)
    ctx->pc = 0x17f9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f9ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17f9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f9f0: 0x0  nop
    ctx->pc = 0x17f9f0u;
    // NOP
    // 0x17f9f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17F9F4u;
    {
        const bool branch_taken_0x17f9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f9f4) {
            ctx->pc = 0x17FA00u;
            goto label_17fa00;
        }
    }
    ctx->pc = 0x17F9FCu;
    // 0x17f9fc: 0xe6610064  swc1        $f1, 0x64($s3)
    ctx->pc = 0x17f9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
label_17fa00:
    // 0x17fa00: 0xc6610068  lwc1        $f1, 0x68($s3)
    ctx->pc = 0x17fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fa04: 0xc66001e8  lwc1        $f0, 0x1E8($s3)
    ctx->pc = 0x17fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fa08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17fa08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fa0c: 0x0  nop
    ctx->pc = 0x17fa0cu;
    // NOP
    // 0x17fa10: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x17FA10u;
    {
        const bool branch_taken_0x17fa10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fa10) {
            ctx->pc = 0x17FA40u;
            goto label_17fa40;
        }
    }
    ctx->pc = 0x17FA18u;
    // 0x17fa18: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fa1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17fa1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17fa20: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x17fa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x17fa24: 0xc66101e8  lwc1        $f1, 0x1E8($s3)
    ctx->pc = 0x17fa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fa28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17fa28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fa2c: 0x0  nop
    ctx->pc = 0x17fa2cu;
    // NOP
    // 0x17fa30: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x17FA30u;
    {
        const bool branch_taken_0x17fa30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fa30) {
            ctx->pc = 0x17FA64u;
            goto label_17fa64;
        }
    }
    ctx->pc = 0x17FA38u;
    // 0x17fa38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17FA38u;
    {
        const bool branch_taken_0x17fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA38u;
            // 0x17fa3c: 0xe6610068  swc1        $f1, 0x68($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa38) {
            ctx->pc = 0x17FA64u;
            goto label_17fa64;
        }
    }
    ctx->pc = 0x17FA40u;
label_17fa40:
    // 0x17fa40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fa44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17fa44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17fa48: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x17fa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x17fa4c: 0xc66101e8  lwc1        $f1, 0x1E8($s3)
    ctx->pc = 0x17fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fa50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17fa50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fa54: 0x0  nop
    ctx->pc = 0x17fa54u;
    // NOP
    // 0x17fa58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17FA58u;
    {
        const bool branch_taken_0x17fa58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fa58) {
            ctx->pc = 0x17FA64u;
            goto label_17fa64;
        }
    }
    ctx->pc = 0x17FA60u;
    // 0x17fa60: 0xe6610068  swc1        $f1, 0x68($s3)
    ctx->pc = 0x17fa60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
label_17fa64:
    // 0x17fa64: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x17fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_17fa68:
    // 0x17fa68: 0xc041c5c  jal         func_107170
    ctx->pc = 0x17FA68u;
    SET_GPR_U32(ctx, 31, 0x17FA70u);
    ctx->pc = 0x17FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA68u;
            // 0x17fa6c: 0x26650060  addiu       $a1, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA70u; }
        if (ctx->pc != 0x17FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA70u; }
        if (ctx->pc != 0x17FA70u) { return; }
    }
    ctx->pc = 0x17FA70u;
label_17fa70:
    // 0x17fa70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fa74: 0x266400f0  addiu       $a0, $s3, 0xF0
    ctx->pc = 0x17fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x17fa78: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x17fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x17fa7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17fa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa80: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x17FA80u;
    SET_GPR_U32(ctx, 31, 0x17FA88u);
    ctx->pc = 0x17FA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA80u;
            // 0x17fa84: 0x26660100  addiu       $a2, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA88u; }
        if (ctx->pc != 0x17FA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA88u; }
        if (ctx->pc != 0x17FA88u) { return; }
    }
    ctx->pc = 0x17FA88u;
label_17fa88:
    // 0x17fa88: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x17fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x17fa8c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x17FA8Cu;
    SET_GPR_U32(ctx, 31, 0x17FA94u);
    ctx->pc = 0x17FA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA8Cu;
            // 0x17fa90: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA94u; }
        if (ctx->pc != 0x17FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA94u; }
        if (ctx->pc != 0x17FA94u) { return; }
    }
    ctx->pc = 0x17FA94u;
label_17fa94:
    // 0x17fa94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17fa98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17fa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa9c: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x17fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x17faa0: 0xc6600138  lwc1        $f0, 0x138($s3)
    ctx->pc = 0x17faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17faa4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x17faa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x17faa8: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x17faa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_17faac:
    // 0x17faac: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x17FAACu;
    {
        const bool branch_taken_0x17faac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAACu;
            // 0x17fab0: 0x3c060036  lui         $a2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17faac) {
            ctx->pc = 0x17FB5Cu;
            goto label_17fb5c;
        }
    }
    ctx->pc = 0x17FAB4u;
    // 0x17fab4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17fab8: 0x24c63c00  addiu       $a2, $a2, 0x3C00
    ctx->pc = 0x17fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15360));
    // 0x17fabc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17fac0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fac4: 0x600008  jr          $v1
    ctx->pc = 0x17FAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FACCu: goto label_17facc;
            case 0x17FAE4u: goto label_17fae4;
            case 0x17FAFCu: goto label_17fafc;
            case 0x17FB14u: goto label_17fb14;
            case 0x17FB2Cu: goto label_17fb2c;
            case 0x17FB44u: goto label_17fb44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FACCu;
label_17facc:
    // 0x17facc: 0x0  nop
    ctx->pc = 0x17faccu;
    // NOP
    // 0x17fad0: 0x8e7100b0  lw          $s1, 0xB0($s3)
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x17fad4: 0xc67400c0  lwc1        $f20, 0xC0($s3)
    ctx->pc = 0x17fad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fad8: 0xc67500d0  lwc1        $f21, 0xD0($s3)
    ctx->pc = 0x17fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17fadc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17FADCu;
    {
        const bool branch_taken_0x17fadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FADCu;
            // 0x17fae0: 0x26720010  addiu       $s2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fadc) {
            ctx->pc = 0x17FB5Cu;
            goto label_17fb5c;
        }
    }
    ctx->pc = 0x17FAE4u;
label_17fae4:
    // 0x17fae4: 0x0  nop
    ctx->pc = 0x17fae4u;
    // NOP
    // 0x17fae8: 0x8e7100b4  lw          $s1, 0xB4($s3)
    ctx->pc = 0x17fae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x17faec: 0xc67400c4  lwc1        $f20, 0xC4($s3)
    ctx->pc = 0x17faecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17faf0: 0xc67500d4  lwc1        $f21, 0xD4($s3)
    ctx->pc = 0x17faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17faf4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17FAF4u;
    {
        const bool branch_taken_0x17faf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAF4u;
            // 0x17faf8: 0x26720014  addiu       $s2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17faf4) {
            ctx->pc = 0x17FB5Cu;
            goto label_17fb5c;
        }
    }
    ctx->pc = 0x17FAFCu;
label_17fafc:
    // 0x17fafc: 0x0  nop
    ctx->pc = 0x17fafcu;
    // NOP
    // 0x17fb00: 0x8e7100b8  lw          $s1, 0xB8($s3)
    ctx->pc = 0x17fb00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x17fb04: 0xc67400c8  lwc1        $f20, 0xC8($s3)
    ctx->pc = 0x17fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fb08: 0xc67500d8  lwc1        $f21, 0xD8($s3)
    ctx->pc = 0x17fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17fb0c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17FB0Cu;
    {
        const bool branch_taken_0x17fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB0Cu;
            // 0x17fb10: 0x26720018  addiu       $s2, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb0c) {
            ctx->pc = 0x17FB5Cu;
            goto label_17fb5c;
        }
    }
    ctx->pc = 0x17FB14u;
label_17fb14:
    // 0x17fb14: 0x0  nop
    ctx->pc = 0x17fb14u;
    // NOP
    // 0x17fb18: 0x8e7100e0  lw          $s1, 0xE0($s3)
    ctx->pc = 0x17fb18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x17fb1c: 0xc6740110  lwc1        $f20, 0x110($s3)
    ctx->pc = 0x17fb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fb20: 0xc6750120  lwc1        $f21, 0x120($s3)
    ctx->pc = 0x17fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17fb24: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17FB24u;
    {
        const bool branch_taken_0x17fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB24u;
            // 0x17fb28: 0x26720020  addiu       $s2, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb24) {
            ctx->pc = 0x17FB5Cu;
            goto label_17fb5c;
        }
    }
    ctx->pc = 0x17FB2Cu;
label_17fb2c:
    // 0x17fb2c: 0x0  nop
    ctx->pc = 0x17fb2cu;
    // NOP
    // 0x17fb30: 0x8e7100e4  lw          $s1, 0xE4($s3)
    ctx->pc = 0x17fb30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x17fb34: 0xc6740114  lwc1        $f20, 0x114($s3)
    ctx->pc = 0x17fb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fb38: 0xc6750124  lwc1        $f21, 0x124($s3)
    ctx->pc = 0x17fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17fb3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17FB3Cu;
    {
        const bool branch_taken_0x17fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB3Cu;
            // 0x17fb40: 0x26720024  addiu       $s2, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb3c) {
            ctx->pc = 0x17FB5Cu;
            goto label_17fb5c;
        }
    }
    ctx->pc = 0x17FB44u;
label_17fb44:
    // 0x17fb44: 0x0  nop
    ctx->pc = 0x17fb44u;
    // NOP
    // 0x17fb48: 0x8e710134  lw          $s1, 0x134($s3)
    ctx->pc = 0x17fb48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x17fb4c: 0xc674013c  lwc1        $f20, 0x13C($s3)
    ctx->pc = 0x17fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fb50: 0x26720008  addiu       $s2, $s3, 0x8
    ctx->pc = 0x17fb50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x17fb54: 0xc6750140  lwc1        $f21, 0x140($s3)
    ctx->pc = 0x17fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17fb58: 0x0  nop
    ctx->pc = 0x17fb58u;
    // NOP
label_17fb5c:
    // 0x17fb5c: 0x0  nop
    ctx->pc = 0x17fb5cu;
    // NOP
    // 0x17fb60: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x17fb60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x17fb64: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
    ctx->pc = 0x17FB64u;
    {
        const bool branch_taken_0x17fb64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB64u;
            // 0x17fb68: 0x3c060036  lui         $a2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb64) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FB6Cu;
    // 0x17fb6c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17fb70: 0x24c63be0  addiu       $a2, $a2, 0x3BE0
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15328));
    // 0x17fb74: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17fb78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fb7c: 0x600008  jr          $v1
    ctx->pc = 0x17FB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FB84u: goto label_17fb84;
            case 0x17FBD4u: goto label_17fbd4;
            case 0x17FC24u: goto label_17fc24;
            case 0x17FC94u: goto label_17fc94;
            case 0x17FCF4u: goto label_17fcf4;
            case 0x17FD9Cu: goto label_17fd9c;
            case 0x17FE3Cu: goto label_17fe3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FB84u;
label_17fb84:
    // 0x17fb84: 0x0  nop
    ctx->pc = 0x17fb84u;
    // NOP
    // 0x17fb88: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x17fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fb8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fb8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb90: 0x0  nop
    ctx->pc = 0x17fb90u;
    // NOP
    // 0x17fb94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fb94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fb98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17fb98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fb9c: 0x0  nop
    ctx->pc = 0x17fb9cu;
    // NOP
    // 0x17fba0: 0x450100a6  bc1t        . + 4 + (0xA6 << 2)
    ctx->pc = 0x17FBA0u;
    {
        const bool branch_taken_0x17fba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fba0) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FBA8u;
    // 0x17fba8: 0x0  nop
    ctx->pc = 0x17fba8u;
    // NOP
    // 0x17fbac: 0x0  nop
    ctx->pc = 0x17fbacu;
    // NOP
    // 0x17fbb0: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x17fbb0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x17fbb4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x17fbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fbb8: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x17fbb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x17fbbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fbc0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fbc4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x17fbc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17fbc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17fbc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17fbcc: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x17FBCCu;
    {
        const bool branch_taken_0x17fbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FBCCu;
            // 0x17fbd0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbcc) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FBD4u;
label_17fbd4:
    // 0x17fbd4: 0x0  nop
    ctx->pc = 0x17fbd4u;
    // NOP
    // 0x17fbd8: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x17fbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fbdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fbdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fbe0: 0x0  nop
    ctx->pc = 0x17fbe0u;
    // NOP
    // 0x17fbe4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fbe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fbe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17fbe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fbec: 0x0  nop
    ctx->pc = 0x17fbecu;
    // NOP
    // 0x17fbf0: 0x45010092  bc1t        . + 4 + (0x92 << 2)
    ctx->pc = 0x17FBF0u;
    {
        const bool branch_taken_0x17fbf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fbf0) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FBF8u;
    // 0x17fbf8: 0x0  nop
    ctx->pc = 0x17fbf8u;
    // NOP
    // 0x17fbfc: 0x0  nop
    ctx->pc = 0x17fbfcu;
    // NOP
    // 0x17fc00: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x17fc00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x17fc04: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x17fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fc08: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x17fc08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x17fc0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fc0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fc10: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fc14: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x17fc14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17fc18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17fc18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x17fc1c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x17FC1Cu;
    {
        const bool branch_taken_0x17fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC1Cu;
            // 0x17fc20: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc1c) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FC24u;
label_17fc24:
    // 0x17fc24: 0x0  nop
    ctx->pc = 0x17fc24u;
    // NOP
    // 0x17fc28: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x17fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fc2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fc30: 0x0  nop
    ctx->pc = 0x17fc30u;
    // NOP
    // 0x17fc34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fc34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fc38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17fc38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fc3c: 0x0  nop
    ctx->pc = 0x17fc3cu;
    // NOP
    // 0x17fc40: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
    ctx->pc = 0x17FC40u;
    {
        const bool branch_taken_0x17fc40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fc40) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FC48u;
    // 0x17fc48: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x17fc48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x17fc4c: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x17fc4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x17fc50: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x17fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fc54: 0x0  nop
    ctx->pc = 0x17fc54u;
    // NOP
    // 0x17fc58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17fc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17fc5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17fc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fc60: 0x0  nop
    ctx->pc = 0x17fc60u;
    // NOP
    // 0x17fc64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17FC64u;
    {
        const bool branch_taken_0x17fc64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fc64) {
            ctx->pc = 0x17FC80u;
            goto label_17fc80;
        }
    }
    ctx->pc = 0x17FC6Cu;
    // 0x17fc6c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x17fc6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17fc70: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fc74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17fc74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17fc78: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x17FC78u;
    {
        const bool branch_taken_0x17fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC78u;
            // 0x17fc7c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc78) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FC80u;
label_17fc80:
    // 0x17fc80: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fc84: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x17fc84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17fc88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17fc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17fc8c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x17FC8Cu;
    {
        const bool branch_taken_0x17fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FC8Cu;
            // 0x17fc90: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc8c) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FC94u;
label_17fc94:
    // 0x17fc94: 0x0  nop
    ctx->pc = 0x17fc94u;
    // NOP
    // 0x17fc98: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x17fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fc9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fca0: 0x0  nop
    ctx->pc = 0x17fca0u;
    // NOP
    // 0x17fca4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fca8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17fca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fcac: 0x0  nop
    ctx->pc = 0x17fcacu;
    // NOP
    // 0x17fcb0: 0x45010062  bc1t        . + 4 + (0x62 << 2)
    ctx->pc = 0x17FCB0u;
    {
        const bool branch_taken_0x17fcb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fcb0) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FCB8u;
    // 0x17fcb8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x17fcb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x17fcbc: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x17fcbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x17fcc0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x17fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fcc4: 0x0  nop
    ctx->pc = 0x17fcc4u;
    // NOP
    // 0x17fcc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17fcc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17fccc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17fcccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fcd0: 0x0  nop
    ctx->pc = 0x17fcd0u;
    // NOP
    // 0x17fcd4: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x17FCD4u;
    {
        const bool branch_taken_0x17fcd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fcd4) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FCDCu;
    // 0x17fcdc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x17fcdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17fce0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fce4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x17fce4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17fce8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17fce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x17fcec: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x17FCECu;
    {
        const bool branch_taken_0x17fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FCECu;
            // 0x17fcf0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcec) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FCF4u;
label_17fcf4:
    // 0x17fcf4: 0x0  nop
    ctx->pc = 0x17fcf4u;
    // NOP
    // 0x17fcf8: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x17fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x17fcfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fcfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fd00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17fd00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17fd04: 0x0  nop
    ctx->pc = 0x17fd04u;
    // NOP
    // 0x17fd08: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x17fd08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17fd0c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17fd0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fd10: 0x0  nop
    ctx->pc = 0x17fd10u;
    // NOP
    // 0x17fd14: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x17FD14u;
    {
        const bool branch_taken_0x17fd14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD14u;
            // 0x17fd18: 0x46151102  mul.s       $f4, $f2, $f21 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd14) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FD1Cu;
    // 0x17fd1c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x17fd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17fd20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17fd20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fd24: 0x0  nop
    ctx->pc = 0x17fd24u;
    // NOP
    // 0x17fd28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17fd28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fd2c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x17fd2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fd30: 0x0  nop
    ctx->pc = 0x17fd30u;
    // NOP
    // 0x17fd34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17FD34u;
    {
        const bool branch_taken_0x17fd34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD34u;
            // 0x17fd38: 0x4604a0c3  div.s       $f3, $f20, $f4 (Delay Slot)
        { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[20], ctx->f[4]); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd34) {
            ctx->pc = 0x17FD50u;
            goto label_17fd50;
        }
    }
    ctx->pc = 0x17FD3Cu;
    // 0x17fd3c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17fd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd40: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x17fd40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x17fd44: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x17fd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17fd48: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x17FD48u;
    {
        const bool branch_taken_0x17fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD48u;
            // 0x17fd4c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd48) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FD50u;
label_17fd50:
    // 0x17fd50: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x17fd50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x17fd54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17fd54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fd58: 0x0  nop
    ctx->pc = 0x17fd58u;
    // NOP
    // 0x17fd5c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x17FD5Cu;
    {
        const bool branch_taken_0x17fd5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fd5c) {
            ctx->pc = 0x17FD84u;
            goto label_17fd84;
        }
    }
    ctx->pc = 0x17FD64u;
    // 0x17fd64: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x17fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17fd68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17fd68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17fd6c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17fd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fd70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fd74: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x17fd74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x17fd78: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x17fd78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17fd7c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x17FD7Cu;
    {
        const bool branch_taken_0x17fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD7Cu;
            // 0x17fd80: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd7c) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FD84u;
label_17fd84:
    // 0x17fd84: 0x0  nop
    ctx->pc = 0x17fd84u;
    // NOP
    // 0x17fd88: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17fd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd8c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x17fd8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x17fd90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x17fd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17fd94: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17FD94u;
    {
        const bool branch_taken_0x17fd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD94u;
            // 0x17fd98: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd94) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FD9Cu;
label_17fd9c:
    // 0x17fd9c: 0x0  nop
    ctx->pc = 0x17fd9cu;
    // NOP
    // 0x17fda0: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x17fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fda4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fda4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fda8: 0x0  nop
    ctx->pc = 0x17fda8u;
    // NOP
    // 0x17fdac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fdacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fdb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17fdb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fdb4: 0x0  nop
    ctx->pc = 0x17fdb4u;
    // NOP
    // 0x17fdb8: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x17FDB8u;
    {
        const bool branch_taken_0x17fdb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDB8u;
            // 0x17fdbc: 0x46150882  mul.s       $f2, $f1, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdb8) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FDC0u;
    // 0x17fdc0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x17fdc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fdc8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x17fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fdcc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x17fdccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x17fdd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fdd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17fdd4: 0x0  nop
    ctx->pc = 0x17fdd4u;
    // NOP
    // 0x17fdd8: 0x0  nop
    ctx->pc = 0x17fdd8u;
    // NOP
    // 0x17fddc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x17FDDCu;
    SET_GPR_U32(ctx, 31, 0x17FDE4u);
    ctx->pc = 0x17FDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDDCu;
            // 0x17fde0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDE4u; }
        if (ctx->pc != 0x17FDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDE4u; }
        if (ctx->pc != 0x17FDE4u) { return; }
    }
    ctx->pc = 0x17FDE4u;
label_17fde4:
    // 0x17fde4: 0x3c043f91  lui         $a0, 0x3F91
    ctx->pc = 0x17fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16273 << 16));
    // 0x17fde8: 0x3403aaaa  ori         $v1, $zero, 0xAAAA
    ctx->pc = 0x17fde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43690);
    // 0x17fdec: 0x3484df46  ori         $a0, $a0, 0xDF46
    ctx->pc = 0x17fdecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57158);
    // 0x17fdf0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17fdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17fdf4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17fdf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17fdf8: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x17fdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x17fdfc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17fdfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17fe00: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x17FE00u;
    SET_GPR_U32(ctx, 31, 0x17FE08u);
    ctx->pc = 0x17FE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE00u;
            // 0x17fe04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE08u; }
        if (ctx->pc != 0x17FE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE08u; }
        if (ctx->pc != 0x17FE08u) { return; }
    }
    ctx->pc = 0x17FE08u;
label_17fe08:
    // 0x17fe08: 0xc047870  jal         func_11E1C0
    ctx->pc = 0x17FE08u;
    SET_GPR_U32(ctx, 31, 0x17FE10u);
    ctx->pc = 0x17FE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE08u;
            // 0x17fe0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E1C0u;
    if (runtime->hasFunction(0x11E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x11E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE10u; }
        if (ctx->pc != 0x17FE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sin_0x11e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE10u; }
        if (ctx->pc != 0x17FE10u) { return; }
    }
    ctx->pc = 0x17FE10u;
label_17fe10:
    // 0x17fe10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17fe10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe14: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x17FE14u;
    SET_GPR_U32(ctx, 31, 0x17FE1Cu);
    ctx->pc = 0x17FE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE14u;
            // 0x17fe18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE1Cu; }
        if (ctx->pc != 0x17FE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE1Cu; }
        if (ctx->pc != 0x17FE1Cu) { return; }
    }
    ctx->pc = 0x17FE1Cu;
label_17fe1c:
    // 0x17fe1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17fe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe20: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x17FE20u;
    SET_GPR_U32(ctx, 31, 0x17FE28u);
    ctx->pc = 0x17FE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE20u;
            // 0x17fe24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE28u; }
        if (ctx->pc != 0x17FE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE28u; }
        if (ctx->pc != 0x17FE28u) { return; }
    }
    ctx->pc = 0x17FE28u;
label_17fe28:
    // 0x17fe28: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x17FE28u;
    SET_GPR_U32(ctx, 31, 0x17FE30u);
    ctx->pc = 0x17FE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE28u;
            // 0x17fe2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE30u; }
        if (ctx->pc != 0x17FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE30u; }
        if (ctx->pc != 0x17FE30u) { return; }
    }
    ctx->pc = 0x17FE30u;
label_17fe30:
    // 0x17fe30: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x17fe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fe34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17fe34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17fe38: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x17fe38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_17fe3c:
    // 0x17fe3c: 0x0  nop
    ctx->pc = 0x17fe3cu;
    // NOP
    // 0x17fe40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17fe40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17fe44: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x17fe44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17fe48: 0x1460ff18  bnez        $v1, . + 4 + (-0xE8 << 2)
    ctx->pc = 0x17FE48u;
    {
        const bool branch_taken_0x17fe48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE48u;
            // 0x17fe4c: 0x2e010006  sltiu       $at, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe48) {
            ctx->pc = 0x17FAACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17faac;
        }
    }
    ctx->pc = 0x17FE50u;
    // 0x17fe50: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x17fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17fe54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17fe58: 0x0  nop
    ctx->pc = 0x17fe58u;
    // NOP
    // 0x17fe5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17fe5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fe60: 0x0  nop
    ctx->pc = 0x17fe60u;
    // NOP
    // 0x17fe64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE64u;
    {
        const bool branch_taken_0x17fe64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fe64) {
            ctx->pc = 0x17FE70u;
            goto label_17fe70;
        }
    }
    ctx->pc = 0x17FE6Cu;
    // 0x17fe6c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x17fe6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_17fe70:
    // 0x17fe70: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x17fe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fe74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17fe78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17fe78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fe7c: 0x0  nop
    ctx->pc = 0x17fe7cu;
    // NOP
    // 0x17fe80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17fe80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fe84: 0x0  nop
    ctx->pc = 0x17fe84u;
    // NOP
    // 0x17fe88: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE88u;
    {
        const bool branch_taken_0x17fe88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fe88) {
            ctx->pc = 0x17FE94u;
            goto label_17fe94;
        }
    }
    ctx->pc = 0x17FE90u;
    // 0x17fe90: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x17fe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_17fe94:
    // 0x17fe94: 0x8e6301c8  lw          $v1, 0x1C8($s3)
    ctx->pc = 0x17fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x17fe98: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17FE98u;
    {
        const bool branch_taken_0x17fe98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fe98) {
            ctx->pc = 0x17FEC4u;
            goto label_17fec4;
        }
    }
    ctx->pc = 0x17FEA0u;
    // 0x17fea0: 0x8e630148  lw          $v1, 0x148($s3)
    ctx->pc = 0x17fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x17fea4: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x17fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    // 0x17fea8: 0x8e63014c  lw          $v1, 0x14C($s3)
    ctx->pc = 0x17fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x17feac: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x17feacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x17feb0: 0x8e630150  lw          $v1, 0x150($s3)
    ctx->pc = 0x17feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x17feb4: 0xae630038  sw          $v1, 0x38($s3)
    ctx->pc = 0x17feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
    // 0x17feb8: 0x8e630154  lw          $v1, 0x154($s3)
    ctx->pc = 0x17feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x17febc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17FEBCu;
    {
        const bool branch_taken_0x17febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEBCu;
            // 0x17fec0: 0xae63003c  sw          $v1, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17febc) {
            ctx->pc = 0x17FF44u;
            goto label_17ff44;
        }
    }
    ctx->pc = 0x17FEC4u;
label_17fec4:
    // 0x17fec4: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x17fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x17fec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17fecc: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x17feccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
    // 0x17fed0: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x17fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x17fed4: 0x8e6301cc  lw          $v1, 0x1CC($s3)
    ctx->pc = 0x17fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x17fed8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x17fed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x17fedc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FEDCu;
    {
        const bool branch_taken_0x17fedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fedc) {
            ctx->pc = 0x17FEF4u;
            goto label_17fef4;
        }
    }
    ctx->pc = 0x17FEE4u;
    // 0x17fee4: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x17fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x17fee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17feec: 0xae630044  sw          $v1, 0x44($s3)
    ctx->pc = 0x17feecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
    // 0x17fef0: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x17fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
label_17fef4:
    // 0x17fef4: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x17fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x17fef8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fefc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17ff00: 0x8c630148  lw          $v1, 0x148($v1)
    ctx->pc = 0x17ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x17ff04: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x17ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    // 0x17ff08: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x17ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x17ff0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17ff10: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17ff14: 0x8c63014c  lw          $v1, 0x14C($v1)
    ctx->pc = 0x17ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x17ff18: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x17ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x17ff1c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x17ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x17ff20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17ff24: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17ff28: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x17ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x17ff2c: 0xae630038  sw          $v1, 0x38($s3)
    ctx->pc = 0x17ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
    // 0x17ff30: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x17ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x17ff34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17ff38: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17ff3c: 0x8c630154  lw          $v1, 0x154($v1)
    ctx->pc = 0x17ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17ff40: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x17ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
label_17ff44:
    // 0x17ff44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17ff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ff48: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17ff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17ff4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17ff4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ff50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ff54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17ff54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ff58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17ff58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ff5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17ff5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ff60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ff60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ff64: 0x3e00008  jr          $ra
    ctx->pc = 0x17FF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF64u;
            // 0x17ff68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FF6Cu;
}
