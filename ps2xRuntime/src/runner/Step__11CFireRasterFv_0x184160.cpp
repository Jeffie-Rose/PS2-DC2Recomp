#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CFireRasterFv
// Address: 0x184160 - 0x18432c
void Step__11CFireRasterFv_0x184160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CFireRasterFv_0x184160");
#endif

    switch (ctx->pc) {
        case 0x184194u: goto label_184194;
        case 0x1841ccu: goto label_1841cc;
        case 0x18422cu: goto label_18422c;
        case 0x184280u: goto label_184280;
        case 0x1842dcu: goto label_1842dc;
        case 0x1842e8u: goto label_1842e8;
        default: break;
    }

    ctx->pc = 0x184160u;

    // 0x184160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x184160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x184164: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x184164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x184168: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x184168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18416c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x184170: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x184170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184174: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x184178: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x184178u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18417c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184180: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x184180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18418c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18418cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184190: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x184190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184194:
    // 0x184194: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x184194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x184198: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x184198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x18419c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x18419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1841a0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1841A0u;
    {
        const bool branch_taken_0x1841a0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1841a0) {
            ctx->pc = 0x1841B0u;
            goto label_1841b0;
        }
    }
    ctx->pc = 0x1841A8u;
    // 0x1841a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1841A8u;
    {
        const bool branch_taken_0x1841a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1841ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1841A8u;
            // 0x1841ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841a8) {
            ctx->pc = 0x1842B8u;
            goto label_1842b8;
        }
    }
    ctx->pc = 0x1841B0u;
label_1841b0:
    // 0x1841b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1841b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1841b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1841b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1841b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1841B8u;
    {
        const bool branch_taken_0x1841b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1841BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1841B8u;
            // 0x1841bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841b8) {
            ctx->pc = 0x1841D4u;
            goto label_1841d4;
        }
    }
    ctx->pc = 0x1841C0u;
    // 0x1841c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1841c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1841c4: 0xc049c86  jal         func_127218
    ctx->pc = 0x1841C4u;
    SET_GPR_U32(ctx, 31, 0x1841CCu);
    ctx->pc = 0x1841C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1841C4u;
            // 0x1841c8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1841CCu; }
        if (ctx->pc != 0x1841CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1841CCu; }
        if (ctx->pc != 0x1841CCu) { return; }
    }
    ctx->pc = 0x1841CCu;
label_1841cc:
    // 0x1841cc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1841CCu;
    {
        const bool branch_taken_0x1841cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1841cc) {
            ctx->pc = 0x1842B8u;
            goto label_1842b8;
        }
    }
    ctx->pc = 0x1841D4u;
label_1841d4:
    // 0x1841d4: 0x0  nop
    ctx->pc = 0x1841d4u;
    // NOP
    // 0x1841d8: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1841d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1841dc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1841dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1841e0: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x1841e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1841e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1841e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1841e8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1841e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1841ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1841ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1841f0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1841f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1841f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1841f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1841f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1841f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1841fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1841fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x184200: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x184200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x184204: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x184204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x184208: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x184208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18420c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18420cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184210: 0x0  nop
    ctx->pc = 0x184210u;
    // NOP
    // 0x184214: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184218: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x184218u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x18421c: 0x0  nop
    ctx->pc = 0x18421cu;
    // NOP
    // 0x184220: 0x0  nop
    ctx->pc = 0x184220u;
    // NOP
    // 0x184224: 0xc047a42  jal         func_11E908
    ctx->pc = 0x184224u;
    SET_GPR_U32(ctx, 31, 0x18422Cu);
    ctx->pc = 0x184228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184224u;
            // 0x184228: 0x46001b02  mul.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18422Cu; }
        if (ctx->pc != 0x18422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18422Cu; }
        if (ctx->pc != 0x18422Cu) { return; }
    }
    ctx->pc = 0x18422Cu;
label_18422c:
    // 0x18422c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18422cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x184230: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x184230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x184234: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x184234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x184238: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18423c: 0x0  nop
    ctx->pc = 0x18423cu;
    // NOP
    // 0x184240: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x184240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x184244: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x184244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x184248: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18424c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x18424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x184250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184254: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x184254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x184258: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x184258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18425c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x18425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x184260: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x184260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x184264: 0x0  nop
    ctx->pc = 0x184264u;
    // NOP
    // 0x184268: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x184268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18426c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18426cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x184270: 0x0  nop
    ctx->pc = 0x184270u;
    // NOP
    // 0x184274: 0x0  nop
    ctx->pc = 0x184274u;
    // NOP
    // 0x184278: 0xc047a42  jal         func_11E908
    ctx->pc = 0x184278u;
    SET_GPR_U32(ctx, 31, 0x184280u);
    ctx->pc = 0x18427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184278u;
            // 0x18427c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184280u; }
        if (ctx->pc != 0x184280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184280u; }
        if (ctx->pc != 0x184280u) { return; }
    }
    ctx->pc = 0x184280u;
label_184280:
    // 0x184280: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x184284: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x184284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x184288: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x184288u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18428c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x18428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x184290: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184294: 0x0  nop
    ctx->pc = 0x184294u;
    // NOP
    // 0x184298: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x184298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18429c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x18429cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1842a0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1842a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1842a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1842a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1842a8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1842a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1842ac: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1842acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1842b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1842b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1842b4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1842b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_1842b8:
    // 0x1842b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1842b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1842bc: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x1842bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1842c0: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1842c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1842c4: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1842C4u;
    {
        const bool branch_taken_0x1842c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1842C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1842C4u;
            // 0x1842c8: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842c4) {
            ctx->pc = 0x184194u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184194;
        }
    }
    ctx->pc = 0x1842CCu;
    // 0x1842cc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1842CCu;
    {
        const bool branch_taken_0x1842cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1842D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1842CCu;
            // 0x1842d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842cc) {
            ctx->pc = 0x184308u;
            goto label_184308;
        }
    }
    ctx->pc = 0x1842D4u;
    // 0x1842d4: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x1842D4u;
    SET_GPR_U32(ctx, 31, 0x1842DCu);
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842DCu; }
        if (ctx->pc != 0x1842DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842DCu; }
        if (ctx->pc != 0x1842DCu) { return; }
    }
    ctx->pc = 0x1842DCu;
label_1842dc:
    // 0x1842dc: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x1842dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x1842e0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1842E0u;
    SET_GPR_U32(ctx, 31, 0x1842E8u);
    ctx->pc = 0x1842E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1842E0u;
            // 0x1842e4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842E8u; }
        if (ctx->pc != 0x1842E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842E8u; }
        if (ctx->pc != 0x1842E8u) { return; }
    }
    ctx->pc = 0x1842E8u;
label_1842e8:
    // 0x1842e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1842e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1842ec: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1842ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1842f0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1842f0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1842f4: 0x0  nop
    ctx->pc = 0x1842f4u;
    // NOP
    // 0x1842f8: 0x0  nop
    ctx->pc = 0x1842f8u;
    // NOP
    // 0x1842fc: 0x2010  mfhi        $a0
    ctx->pc = 0x1842fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x184300: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x184300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x184304: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x184304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_184308:
    // 0x184308: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x184308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18430c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18430cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x184310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18431c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18431cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184324: 0x3e00008  jr          $ra
    ctx->pc = 0x184324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184324u;
            // 0x184328: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18432Cu;
}
