#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgShadowMatrix__FPA4_fPfPfPf
// Address: 0x130690 - 0x13089c
void mgShadowMatrix__FPA4_fPfPfPf_0x130690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgShadowMatrix__FPA4_fPfPfPf_0x130690");
#endif

    switch (ctx->pc) {
        case 0x1306ecu: goto label_1306ec;
        case 0x1306f8u: goto label_1306f8;
        case 0x130704u: goto label_130704;
        case 0x130770u: goto label_130770;
        case 0x1307a0u: goto label_1307a0;
        default: break;
    }

    ctx->pc = 0x130690u;

    // 0x130690: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x130690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x130694: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x130694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x130698: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x130698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13069c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1306a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1306a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1306a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1306a8: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x1306a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1306ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1306acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1306b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1306b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306b4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1306b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1306b8: 0x27b00068  addiu       $s0, $sp, 0x68
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1306bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1306bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1306c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1306c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1306c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1306c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1306c8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1306c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1306cc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1306ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1306d0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1306d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1306d4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1306d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1306d8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1306d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1306dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1306dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1306e0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1306e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306e4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1306E4u;
    SET_GPR_U32(ctx, 31, 0x1306ECu);
    ctx->pc = 0x1306E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1306E4u;
            // 0x1306e8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306ECu; }
        if (ctx->pc != 0x1306ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306ECu; }
        if (ctx->pc != 0x1306ECu) { return; }
    }
    ctx->pc = 0x1306ECu;
label_1306ec:
    // 0x1306ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1306ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306f0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1306F0u;
    SET_GPR_U32(ctx, 31, 0x1306F8u);
    ctx->pc = 0x1306F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1306F0u;
            // 0x1306f4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306F8u; }
        if (ctx->pc != 0x1306F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306F8u; }
        if (ctx->pc != 0x1306F8u) { return; }
    }
    ctx->pc = 0x1306F8u;
label_1306f8:
    // 0x1306f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1306f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1306fc: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x1306FCu;
    SET_GPR_U32(ctx, 31, 0x130704u);
    ctx->pc = 0x130700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1306FCu;
            // 0x130700: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130704u; }
        if (ctx->pc != 0x130704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130704u; }
        if (ctx->pc != 0x130704u) { return; }
    }
    ctx->pc = 0x130704u;
label_130704:
    // 0x130704: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x130704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130708: 0x0  nop
    ctx->pc = 0x130708u;
    // NOP
    // 0x13070c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13070cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130710: 0x0  nop
    ctx->pc = 0x130710u;
    // NOP
    // 0x130714: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x130714u;
    {
        const bool branch_taken_0x130714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130714u;
            // 0x130718: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130714) {
            ctx->pc = 0x130774u;
            goto label_130774;
        }
    }
    ctx->pc = 0x13071Cu;
    // 0x13071c: 0xc7a40080  lwc1        $f4, 0x80($sp)
    ctx->pc = 0x13071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x130720: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x130720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x130724: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x130724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130728: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x130728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x13072c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x13072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130730: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x130730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x130734: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x130734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x130738: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x130738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13073c: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x13073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x130740: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x130740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130744: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x130744u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x130748: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x130748u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x13074c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x13074cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x130750: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x130750u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x130754: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x130754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130758: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x130758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x13075c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13075cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130760: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x130760u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x130764: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x130764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x130768: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x130768u;
    SET_GPR_U32(ctx, 31, 0x130770u);
    ctx->pc = 0x13076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130768u;
            // 0x13076c: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130770u; }
        if (ctx->pc != 0x130770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130770u; }
        if (ctx->pc != 0x130770u) { return; }
    }
    ctx->pc = 0x130770u;
label_130770:
    // 0x130770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x130770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_130774:
    // 0x130774: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130778: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x130778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13077c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130780: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x130780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130784: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x130784u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x130788: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x130788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13078c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x13078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130790: 0x46001d02  mul.s       $f20, $f3, $f0
    ctx->pc = 0x130790u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x130794: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x130794u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x130798: 0xc041be0  jal         func_106F80
    ctx->pc = 0x130798u;
    SET_GPR_U32(ctx, 31, 0x1307A0u);
    ctx->pc = 0x13079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130798u;
            // 0x13079c: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307A0u; }
        if (ctx->pc != 0x1307A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1307A0u; }
        if (ctx->pc != 0x1307A0u) { return; }
    }
    ctx->pc = 0x1307A0u;
label_1307a0:
    // 0x1307a0: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x1307a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1307a4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1307a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1307a8: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x1307a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1307ac: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x1307acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1307b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1307b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1307b4: 0x4606a8c2  mul.s       $f3, $f21, $f6
    ctx->pc = 0x1307b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[6]);
    // 0x1307b8: 0x4604a082  mul.s       $f2, $f20, $f4
    ctx->pc = 0x1307b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x1307bc: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x1307bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1307c0: 0x4607b05c  madd.s      $f1, $f22, $f7
    ctx->pc = 0x1307c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[7]));
    // 0x1307c4: 0x46010203  div.s       $f8, $f0, $f1
    ctx->pc = 0x1307c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1307c8: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1307c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1307cc: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x1307ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1307d0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1307d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1307d4: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x1307d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1307d8: 0x4607b242  mul.s       $f9, $f22, $f7
    ctx->pc = 0x1307d8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[22], ctx->f[7]);
    // 0x1307dc: 0x46004142  mul.s       $f5, $f8, $f0
    ctx->pc = 0x1307dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1307e0: 0x46014801  sub.s       $f0, $f9, $f1
    ctx->pc = 0x1307e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x1307e4: 0x46004082  mul.s       $f2, $f8, $f0
    ctx->pc = 0x1307e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1307e8: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1307e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x1307ec: 0x4604a842  mul.s       $f1, $f21, $f4
    ctx->pc = 0x1307ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x1307f0: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x1307f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x1307f4: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1307f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1307f8: 0x4607a842  mul.s       $f1, $f21, $f7
    ctx->pc = 0x1307f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[7]);
    // 0x1307fc: 0x460140c2  mul.s       $f3, $f8, $f1
    ctx->pc = 0x1307fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x130800: 0x4604b042  mul.s       $f1, $f22, $f4
    ctx->pc = 0x130800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[4]);
    // 0x130804: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x130804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x130808: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x130808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x13080c: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x13080cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x130810: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x130810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x130814: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x130814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x130818: 0x4606b042  mul.s       $f1, $f22, $f6
    ctx->pc = 0x130818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[6]);
    // 0x13081c: 0x46014102  mul.s       $f4, $f8, $f1
    ctx->pc = 0x13081cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x130820: 0x4606a042  mul.s       $f1, $f20, $f6
    ctx->pc = 0x130820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x130824: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x130824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x130828: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x130828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x13082c: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x13082cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x130830: 0xe6250014  swc1        $f5, 0x14($s1)
    ctx->pc = 0x130830u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x130834: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x130834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x130838: 0xe6240024  swc1        $f4, 0x24($s1)
    ctx->pc = 0x130838u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x13083c: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x13083cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x130840: 0x4607a042  mul.s       $f1, $f20, $f7
    ctx->pc = 0x130840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x130844: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x130844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x130848: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x130848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x13084c: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x13084cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x130850: 0xe6230018  swc1        $f3, 0x18($s1)
    ctx->pc = 0x130850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x130854: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x130854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x130858: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x130858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x13085c: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x13085cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x130860: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x130860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x130864: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x130864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x130868: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x130868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x13086c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x13086cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x130870: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x130870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x130874: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x130874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130878: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x130878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13087c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13087cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130880: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x130880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x130884: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x130884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130888: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13088c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13088cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130890: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x130890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130894: 0x3e00008  jr          $ra
    ctx->pc = 0x130894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130894u;
            // 0x130898: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13089Cu;
}
