#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgLookAtMatrixZ__FPA4_fPf
// Address: 0x1305b0 - 0x130684
void mgLookAtMatrixZ__FPA4_fPf_0x1305b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgLookAtMatrixZ__FPA4_fPf_0x1305b0");
#endif

    switch (ctx->pc) {
        case 0x1305d0u: goto label_1305d0;
        case 0x1305dcu: goto label_1305dc;
        case 0x1305e8u: goto label_1305e8;
        case 0x1305f4u: goto label_1305f4;
        case 0x130600u: goto label_130600;
        case 0x130670u: goto label_130670;
        default: break;
    }

    ctx->pc = 0x1305b0u;

    // 0x1305b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1305b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1305b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1305b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1305b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1305b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1305bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1305bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1305c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1305c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1305c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305c8: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x1305C8u;
    SET_GPR_U32(ctx, 31, 0x1305D0u);
    ctx->pc = 0x1305CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1305C8u;
            // 0x1305cc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305D0u; }
        if (ctx->pc != 0x1305D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305D0u; }
        if (ctx->pc != 0x1305D0u) { return; }
    }
    ctx->pc = 0x1305D0u;
label_1305d0:
    // 0x1305d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1305d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1305d4: 0xc041c60  jal         func_107180
    ctx->pc = 0x1305D4u;
    SET_GPR_U32(ctx, 31, 0x1305DCu);
    ctx->pc = 0x1305D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1305D4u;
            // 0x1305d8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305DCu; }
        if (ctx->pc != 0x1305DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305DCu; }
        if (ctx->pc != 0x1305DCu) { return; }
    }
    ctx->pc = 0x1305DCu;
label_1305dc:
    // 0x1305dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1305dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305e0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1305E0u;
    SET_GPR_U32(ctx, 31, 0x1305E8u);
    ctx->pc = 0x1305E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1305E0u;
            // 0x1305e4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305E8u; }
        if (ctx->pc != 0x1305E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305E8u; }
        if (ctx->pc != 0x1305E8u) { return; }
    }
    ctx->pc = 0x1305E8u;
label_1305e8:
    // 0x1305e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1305e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1305ec: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1305ECu;
    SET_GPR_U32(ctx, 31, 0x1305F4u);
    ctx->pc = 0x1305F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1305ECu;
            // 0x1305f0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305F4u; }
        if (ctx->pc != 0x1305F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305F4u; }
        if (ctx->pc != 0x1305F4u) { return; }
    }
    ctx->pc = 0x1305F4u;
label_1305f4:
    // 0x1305f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1305f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1305f8: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x1305F8u;
    SET_GPR_U32(ctx, 31, 0x130600u);
    ctx->pc = 0x1305FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1305F8u;
            // 0x1305fc: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130600u; }
        if (ctx->pc != 0x130600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130600u; }
        if (ctx->pc != 0x130600u) { return; }
    }
    ctx->pc = 0x130600u;
label_130600:
    // 0x130600: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x130600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x130604: 0x0  nop
    ctx->pc = 0x130604u;
    // NOP
    // 0x130608: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x130608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13060c: 0x0  nop
    ctx->pc = 0x13060cu;
    // NOP
    // 0x130610: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x130610u;
    {
        const bool branch_taken_0x130610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130610u;
            // 0x130614: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130610) {
            ctx->pc = 0x130624u;
            goto label_130624;
        }
    }
    ctx->pc = 0x130618u;
    // 0x130618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13061c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13061Cu;
    {
        const bool branch_taken_0x13061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13061Cu;
            // 0x130620: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13061c) {
            ctx->pc = 0x130638u;
            goto label_130638;
        }
    }
    ctx->pc = 0x130624u;
label_130624:
    // 0x130624: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x130624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130628: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x130628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13062c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x13062cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x130630: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x130630u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x130634: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x130634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_130638:
    // 0x130638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13063c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x13063cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x130640: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x130640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x130644: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x130644u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x130648: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x130648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13064c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x13064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x130650: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x130650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130654: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x130654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x130658: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x130658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x13065c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x13065cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x130660: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x130660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x130664: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130664u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130668: 0xc04c094  jal         func_130250
    ctx->pc = 0x130668u;
    SET_GPR_U32(ctx, 31, 0x130670u);
    ctx->pc = 0x13066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130668u;
            // 0x13066c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130670u; }
        if (ctx->pc != 0x130670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130670u; }
        if (ctx->pc != 0x130670u) { return; }
    }
    ctx->pc = 0x130670u;
label_130670:
    // 0x130670: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13067c: 0x3e00008  jr          $ra
    ctx->pc = 0x13067Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13067Cu;
            // 0x130680: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130684u;
}
