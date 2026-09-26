#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GenarateRandamLine__FPiiiPiii
// Address: 0x221fd0 - 0x2221b8
void GenarateRandamLine__FPiiiPiii_0x221fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GenarateRandamLine__FPiiiPiii_0x221fd0");
#endif

    switch (ctx->pc) {
        case 0x222030u: goto label_222030;
        case 0x222078u: goto label_222078;
        case 0x2220acu: goto label_2220ac;
        case 0x2220c0u: goto label_2220c0;
        case 0x2220dcu: goto label_2220dc;
        case 0x222128u: goto label_222128;
        case 0x22213cu: goto label_22213c;
        default: break;
    }

    ctx->pc = 0x221fd0u;

    // 0x221fd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x221fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x221fd4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x221fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x221fd8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x221fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x221fdc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x221fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x221fe0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x221fe0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221fe4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x221fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x221fe8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x221fe8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x221fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x221ff0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x221ff0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ff4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x221ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x221ff8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x221ff8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ffc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x221ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x222000: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x222000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222004: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x222004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x222008: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x222008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22200c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x222010: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x222010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x222014: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222018: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x222018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22201c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22201cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x222020: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222024: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x222024u;
    {
        const bool branch_taken_0x222024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x222028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222024u;
            // 0x222028: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222024) {
            ctx->pc = 0x222120u;
            goto label_222120;
        }
    }
    ctx->pc = 0x22202Cu;
    // 0x22202c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22202cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222030:
    // 0x222030: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x222030u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222034: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x222034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x222038: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x222038u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22203c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x22203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x222040: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x222040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x222044: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222048: 0x46011543  div.s       $f21, $f2, $f1
    ctx->pc = 0x222048u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x22204c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22204cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222050: 0x0  nop
    ctx->pc = 0x222050u;
    // NOP
    // 0x222054: 0x0  nop
    ctx->pc = 0x222054u;
    // NOP
    // 0x222058: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x222058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22205c: 0x0  nop
    ctx->pc = 0x22205cu;
    // NOP
    // 0x222060: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x222060u;
    {
        const bool branch_taken_0x222060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222060u;
            // 0x222064: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222060) {
            ctx->pc = 0x222070u;
            goto label_222070;
        }
    }
    ctx->pc = 0x222068u;
    // 0x222068: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x222068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x22206c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x22206cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_222070:
    // 0x222070: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x222070u;
    SET_GPR_U32(ctx, 31, 0x222078u);
    ctx->pc = 0x222074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222070u;
            // 0x222074: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222078u; }
        if (ctx->pc != 0x222078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222078u; }
        if (ctx->pc != 0x222078u) { return; }
    }
    ctx->pc = 0x222078u;
label_222078:
    // 0x222078: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x222078u;
    {
        const bool branch_taken_0x222078 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x22207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222078u;
            // 0x22207c: 0x151843  sra         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222078) {
            ctx->pc = 0x222088u;
            goto label_222088;
        }
    }
    ctx->pc = 0x222080u;
    // 0x222080: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x222080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x222084: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x222084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_222088:
    // 0x222088: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x222088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22208c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22208cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x222090: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x222090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x222094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x222098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22209c: 0x0  nop
    ctx->pc = 0x22209cu;
    // NOP
    // 0x2220a0: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x2220a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2220a4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2220A4u;
    SET_GPR_U32(ctx, 31, 0x2220ACu);
    ctx->pc = 0x2220A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2220A4u;
            // 0x2220a8: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220ACu; }
        if (ctx->pc != 0x2220ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220ACu; }
        if (ctx->pc != 0x2220ACu) { return; }
    }
    ctx->pc = 0x2220ACu;
label_2220ac:
    // 0x2220ac: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2220acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2220b0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2220b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2220b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2220b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2220b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2220B8u;
    SET_GPR_U32(ctx, 31, 0x2220C0u);
    ctx->pc = 0x2220BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2220B8u;
            // 0x2220bc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220C0u; }
        if (ctx->pc != 0x2220C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220C0u; }
        if (ctx->pc != 0x2220C0u) { return; }
    }
    ctx->pc = 0x2220C0u;
label_2220c0:
    // 0x2220c0: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2220c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2220c4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2220c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2220c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2220c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2220cc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2220ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2220d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2220d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2220d4: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2220D4u;
    SET_GPR_U32(ctx, 31, 0x2220DCu);
    ctx->pc = 0x2220D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2220D4u;
            // 0x2220d8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220DCu; }
        if (ctx->pc != 0x2220DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220DCu; }
        if (ctx->pc != 0x2220DCu) { return; }
    }
    ctx->pc = 0x2220DCu;
label_2220dc:
    // 0x2220dc: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2220DCu;
    {
        const bool branch_taken_0x2220dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2220dc) {
            ctx->pc = 0x2220FCu;
            goto label_2220fc;
        }
    }
    ctx->pc = 0x2220E4u;
    // 0x2220e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2220e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2220e8: 0x2f0082a  slt         $at, $s7, $s0
    ctx->pc = 0x2220e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2220ec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2220ECu;
    {
        const bool branch_taken_0x2220ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2220ec) {
            ctx->pc = 0x222110u;
            goto label_222110;
        }
    }
    ctx->pc = 0x2220F4u;
    // 0x2220f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2220F4u;
    {
        const bool branch_taken_0x2220f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2220F4u;
            // 0x2220f8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220f4) {
            ctx->pc = 0x222110u;
            goto label_222110;
        }
    }
    ctx->pc = 0x2220FCu;
label_2220fc:
    // 0x2220fc: 0x0  nop
    ctx->pc = 0x2220fcu;
    // NOP
    // 0x222100: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x222100u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x222104: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222104u;
    {
        const bool branch_taken_0x222104 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x222104) {
            ctx->pc = 0x222110u;
            goto label_222110;
        }
    }
    ctx->pc = 0x22210Cu;
    // 0x22210c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x22210cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222110:
    // 0x222110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x222110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x222114: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x222114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x222118: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x222118u;
    {
        const bool branch_taken_0x222118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222118u;
            // 0x22211c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222118) {
            ctx->pc = 0x222030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222030;
        }
    }
    ctx->pc = 0x222120u;
label_222120:
    // 0x222120: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x222120u;
    SET_GPR_U32(ctx, 31, 0x222128u);
    ctx->pc = 0x222124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222120u;
            // 0x222124: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222128u; }
        if (ctx->pc != 0x222128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222128u; }
        if (ctx->pc != 0x222128u) { return; }
    }
    ctx->pc = 0x222128u;
label_222128:
    // 0x222128: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x222128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22212c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22212cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222134: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x222134u;
    {
        const bool branch_taken_0x222134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222134u;
            // 0x222138: 0x640c0  sll         $t0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222134) {
            ctx->pc = 0x222164u;
            goto label_222164;
        }
    }
    ctx->pc = 0x22213Cu;
label_22213c:
    // 0x22213c: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x22213cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x222140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x222140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x222144: 0x2872021  addu        $a0, $s4, $a3
    ctx->pc = 0x222144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x222148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x222148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22214c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x22214cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x222150: 0x2834821  addu        $t1, $s4, $v1
    ctx->pc = 0x222150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x222154: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x222154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x222158: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x222158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22215c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22215cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x222160: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x222160u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_222164:
    // 0x222164: 0x0  nop
    ctx->pc = 0x222164u;
    // NOP
    // 0x222168: 0x153082a  slt         $at, $t2, $s3
    ctx->pc = 0x222168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22216c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x22216Cu;
    {
        const bool branch_taken_0x22216c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x222170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22216Cu;
            // 0x222170: 0x1462021  addu        $a0, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22216c) {
            ctx->pc = 0x222180u;
            goto label_222180;
        }
    }
    ctx->pc = 0x222174u;
    // 0x222174: 0x93182a  slt         $v1, $a0, $s3
    ctx->pc = 0x222174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x222178: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x222178u;
    {
        const bool branch_taken_0x222178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222178u;
            // 0x22217c: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222178) {
            ctx->pc = 0x22213Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22213c;
        }
    }
    ctx->pc = 0x222180u;
label_222180:
    // 0x222180: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x222180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x222184: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x222184u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x222188: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x222188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22218c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x22218cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x222190: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x222190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222194: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x222194u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222198: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x222198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22219c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22219cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2221a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2221a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2221a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2221a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2221a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2221a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2221ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2221acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2221b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2221B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2221B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2221B0u;
            // 0x2221b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2221B8u;
}
