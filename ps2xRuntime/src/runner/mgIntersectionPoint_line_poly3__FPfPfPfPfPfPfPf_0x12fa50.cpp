#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgIntersectionPoint_line_poly3__FPfPfPfPfPfPfPf
// Address: 0x12fa50 - 0x12fb6c
void mgIntersectionPoint_line_poly3__FPfPfPfPfPfPfPf_0x12fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgIntersectionPoint_line_poly3__FPfPfPfPfPfPfPf_0x12fa50");
#endif

    switch (ctx->pc) {
        case 0x12fa98u: goto label_12fa98;
        case 0x12faa8u: goto label_12faa8;
        case 0x12fab8u: goto label_12fab8;
        case 0x12fac8u: goto label_12fac8;
        case 0x12fad4u: goto label_12fad4;
        case 0x12fae4u: goto label_12fae4;
        case 0x12fb1cu: goto label_12fb1c;
        case 0x12fb2cu: goto label_12fb2c;
        case 0x12fb44u: goto label_12fb44;
        default: break;
    }

    ctx->pc = 0x12fa50u;

    // 0x12fa50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12fa54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12fa58: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12fa5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12fa60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12fa60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa64: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12fa68: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12fa68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12fa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12fa70: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12fa70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12fa78: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x12fa78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12fa80: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x12fa80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa84: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x12fa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12fa8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12fa8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa90: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FA90u;
    SET_GPR_U32(ctx, 31, 0x12FA98u);
    ctx->pc = 0x12FA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA90u;
            // 0x12fa94: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA98u; }
        if (ctx->pc != 0x12FA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA98u; }
        if (ctx->pc != 0x12FA98u) { return; }
    }
    ctx->pc = 0x12FA98u;
label_12fa98:
    // 0x12fa98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12fa9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12fa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faa0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FAA0u;
    SET_GPR_U32(ctx, 31, 0x12FAA8u);
    ctx->pc = 0x12FAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAA0u;
            // 0x12faa4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAA8u; }
        if (ctx->pc != 0x12FAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAA8u; }
        if (ctx->pc != 0x12FAA8u) { return; }
    }
    ctx->pc = 0x12FAA8u;
label_12faa8:
    // 0x12faa8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12faac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12faacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fab0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FAB0u;
    SET_GPR_U32(ctx, 31, 0x12FAB8u);
    ctx->pc = 0x12FAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAB0u;
            // 0x12fab4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAB8u; }
        if (ctx->pc != 0x12FAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAB8u; }
        if (ctx->pc != 0x12FAB8u) { return; }
    }
    ctx->pc = 0x12FAB8u;
label_12fab8:
    // 0x12fab8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12fabc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12fabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fac0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FAC0u;
    SET_GPR_U32(ctx, 31, 0x12FAC8u);
    ctx->pc = 0x12FAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAC0u;
            // 0x12fac4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAC8u; }
        if (ctx->pc != 0x12FAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAC8u; }
        if (ctx->pc != 0x12FAC8u) { return; }
    }
    ctx->pc = 0x12FAC8u;
label_12fac8:
    // 0x12fac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12facc: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x12FACCu;
    SET_GPR_U32(ctx, 31, 0x12FAD4u);
    ctx->pc = 0x12FAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FACCu;
            // 0x12fad0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAD4u; }
        if (ctx->pc != 0x12FAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAD4u; }
        if (ctx->pc != 0x12FAD4u) { return; }
    }
    ctx->pc = 0x12FAD4u;
label_12fad4:
    // 0x12fad4: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x12fad4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x12fad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fadc: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x12FADCu;
    SET_GPR_U32(ctx, 31, 0x12FAE4u);
    ctx->pc = 0x12FAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FADCu;
            // 0x12fae0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAE4u; }
        if (ctx->pc != 0x12FAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAE4u; }
        if (ctx->pc != 0x12FAE4u) { return; }
    }
    ctx->pc = 0x12FAE4u;
label_12fae4:
    // 0x12fae4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12fae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fae8: 0x0  nop
    ctx->pc = 0x12fae8u;
    // NOP
    // 0x12faec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12faecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12faf0: 0x0  nop
    ctx->pc = 0x12faf0u;
    // NOP
    // 0x12faf4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FAF4u;
    {
        const bool branch_taken_0x12faf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAF4u;
            // 0x12faf8: 0x4600a047  neg.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12faf4) {
            ctx->pc = 0x12FB04u;
            goto label_12fb04;
        }
    }
    ctx->pc = 0x12FAFCu;
    // 0x12fafc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12FAFCu;
    {
        const bool branch_taken_0x12fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAFCu;
            // 0x12fb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fafc) {
            ctx->pc = 0x12FB44u;
            goto label_12fb44;
        }
    }
    ctx->pc = 0x12FB04u;
label_12fb04:
    // 0x12fb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb08: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x12fb08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12fb0c: 0x0  nop
    ctx->pc = 0x12fb0cu;
    // NOP
    // 0x12fb10: 0x0  nop
    ctx->pc = 0x12fb10u;
    // NOP
    // 0x12fb14: 0xc041c4a  jal         func_107128
    ctx->pc = 0x12FB14u;
    SET_GPR_U32(ctx, 31, 0x12FB1Cu);
    ctx->pc = 0x12FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB14u;
            // 0x12fb18: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB1Cu; }
        if (ctx->pc != 0x12FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB1Cu; }
        if (ctx->pc != 0x12FB1Cu) { return; }
    }
    ctx->pc = 0x12FB1Cu;
label_12fb1c:
    // 0x12fb1c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12fb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb24: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x12FB24u;
    SET_GPR_U32(ctx, 31, 0x12FB2Cu);
    ctx->pc = 0x12FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB24u;
            // 0x12fb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB2Cu; }
        if (ctx->pc != 0x12FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB2Cu; }
        if (ctx->pc != 0x12FB2Cu) { return; }
    }
    ctx->pc = 0x12FB2Cu;
label_12fb2c:
    // 0x12fb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12fb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12fb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12fb38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb3c: 0xc04bedc  jal         func_12FB70
    ctx->pc = 0x12FB3Cu;
    SET_GPR_U32(ctx, 31, 0x12FB44u);
    ctx->pc = 0x12FB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB3Cu;
            // 0x12fb40: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB70u;
    if (runtime->hasFunction(0x12FB70u)) {
        auto targetFn = runtime->lookupFunction(0x12FB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB44u; }
        if (ctx->pc != 0x12FB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCheckPointPoly3_XYZ__FPfPfPfPfPf_0x12fb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB44u; }
        if (ctx->pc != 0x12FB44u) { return; }
    }
    ctx->pc = 0x12FB44u;
label_12fb44:
    // 0x12fb44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12fb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12fb48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12fb4c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12fb4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fb50: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12fb50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fb54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12fb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fb58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12fb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fb5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12fb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fb60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12fb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fb64: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB64u;
            // 0x12fb68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FB6Cu;
}
