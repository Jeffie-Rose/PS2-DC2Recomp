#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__6CWaterFP14mgCDrawManager
// Address: 0x1852c0 - 0x185b1c
void CreatePacket__6CWaterFP14mgCDrawManager_0x1852c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__6CWaterFP14mgCDrawManager_0x1852c0");
#endif

    switch (ctx->pc) {
        case 0x18530cu: goto label_18530c;
        case 0x185314u: goto label_185314;
        case 0x185398u: goto label_185398;
        case 0x1853d0u: goto label_1853d0;
        case 0x185470u: goto label_185470;
        case 0x1854d8u: goto label_1854d8;
        case 0x185568u: goto label_185568;
        case 0x1856b4u: goto label_1856b4;
        case 0x1856d0u: goto label_1856d0;
        case 0x185728u: goto label_185728;
        case 0x18574cu: goto label_18574c;
        case 0x185784u: goto label_185784;
        case 0x18579cu: goto label_18579c;
        case 0x18589cu: goto label_18589c;
        case 0x1858f0u: goto label_1858f0;
        case 0x185904u: goto label_185904;
        case 0x185938u: goto label_185938;
        case 0x18594cu: goto label_18594c;
        case 0x185a64u: goto label_185a64;
        case 0x185ad0u: goto label_185ad0;
        default: break;
    }

    ctx->pc = 0x1852c0u;

    // 0x1852c0: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x1852c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x1852c4: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x1852c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x1852c8: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1852c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1852cc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1852ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1852d0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1852d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1852d4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1852d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1852d8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1852d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1852dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1852dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1852e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1852e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1852e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1852e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1852e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1852e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1852ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1852ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1852f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1852f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1852f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1852f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1852f8: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x1852f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1852fc: 0xafa40134  sw          $a0, 0x134($sp)
    ctx->pc = 0x1852fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 4));
    // 0x185300: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x185300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x185304: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x185304u;
    SET_GPR_U32(ctx, 31, 0x18530Cu);
    ctx->pc = 0x185308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185304u;
            // 0x185308: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18530Cu; }
        if (ctx->pc != 0x18530Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18530Cu; }
        if (ctx->pc != 0x18530Cu) { return; }
    }
    ctx->pc = 0x18530Cu;
label_18530c:
    // 0x18530c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x18530Cu;
    SET_GPR_U32(ctx, 31, 0x185314u);
    ctx->pc = 0x185310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18530Cu;
            // 0x185310: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185314u; }
        if (ctx->pc != 0x185314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185314u; }
        if (ctx->pc != 0x185314u) { return; }
    }
    ctx->pc = 0x185314u;
label_185314:
    // 0x185314: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x185314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x185318: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x185318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18531c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18531cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x185320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185324: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x185324u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185328: 0xc4420070  lwc1        $f2, 0x70($v0)
    ctx->pc = 0x185328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18532c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x18532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x185330: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x185330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185334: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x185334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x185338: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x185338u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18533c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18533cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185340: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x185340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185344: 0x0  nop
    ctx->pc = 0x185344u;
    // NOP
    // 0x185348: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x185348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18534c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x18534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x185350: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x185350u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x185354: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x185354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x185358: 0xc4620078  lwc1        $f2, 0x78($v1)
    ctx->pc = 0x185358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18535c: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x18535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185360: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x185360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x185364: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x185364u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x185368: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x185368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18536c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x18536cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x185370: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x185370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185374: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x185374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x185378: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x185378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x18537c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18537cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185380: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x185380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x185384: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x185384u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x185388: 0x0  nop
    ctx->pc = 0x185388u;
    // NOP
    // 0x18538c: 0x0  nop
    ctx->pc = 0x18538cu;
    // NOP
    // 0x185390: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x185390u;
    {
        const bool branch_taken_0x185390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185390u;
            // 0x185394: 0xe7a10158  swc1        $f1, 0x158($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185390) {
            ctx->pc = 0x185428u;
            goto label_185428;
        }
    }
    ctx->pc = 0x185398u;
label_185398:
    // 0x185398: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x185398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x18539c: 0x8c680058  lw          $t0, 0x58($v1)
    ctx->pc = 0x18539cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1853a0: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x1853a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1853a4: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x1853a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1853a8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1853a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1853ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1853acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1853b0: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x1853b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1853b4: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1853B4u;
    {
        const bool branch_taken_0x1853b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1853B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853B4u;
            // 0x1853b8: 0x1033023  subu        $a2, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853b4) {
            ctx->pc = 0x1853C0u;
            goto label_1853c0;
        }
    }
    ctx->pc = 0x1853BCu;
    // 0x1853bc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1853bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1853c0:
    // 0x1853c0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1853c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1853c4: 0x24690160  addiu       $t1, $v1, 0x160
    ctx->pc = 0x1853c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x1853c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1853C8u;
    {
        const bool branch_taken_0x1853c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853C8u;
            // 0x1853cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853c8) {
            ctx->pc = 0x185404u;
            goto label_185404;
        }
    }
    ctx->pc = 0x1853D0u;
label_1853d0:
    // 0x1853d0: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x1853d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
    // 0x1853d4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1853d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1853d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1853d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1853dc: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1853dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1853e0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1853e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1853e4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1853e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1853e8: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x1853e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1853ec: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1853ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1853f0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1853f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1853f4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1853f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1853f8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1853f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1853fc: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x1853fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x185400: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x185400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_185404:
    // 0x185404: 0x0  nop
    ctx->pc = 0x185404u;
    // NOP
    // 0x185408: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x185408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x18540c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x18540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x185410: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x185410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x185414: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x185414u;
    {
        const bool branch_taken_0x185414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185414) {
            ctx->pc = 0x1853D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1853d0;
        }
    }
    ctx->pc = 0x18541Cu;
    // 0x18541c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x18541cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x185420: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x185420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x185424: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x185424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_185428:
    // 0x185428: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x185428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x18542c: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x18542cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x185430: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x185430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x185434: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x185434u;
    {
        const bool branch_taken_0x185434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185434) {
            ctx->pc = 0x185398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_185398;
        }
    }
    ctx->pc = 0x18543Cu;
    // 0x18543c: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x18543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x185440: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x185440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x185444: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x185444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x185448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18544c: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x18544cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x185450: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185454: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x185454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x185458: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x185458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x18545c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x18545cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x185460: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x185460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x185464: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x185464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x185468: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x185468u;
    {
        const bool branch_taken_0x185468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185468u;
            // 0x18546c: 0x5d3021  addu        $a2, $v0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185468) {
            ctx->pc = 0x18549Cu;
            goto label_18549c;
        }
    }
    ctx->pc = 0x185470u;
label_185470:
    // 0x185470: 0x13d1021  addu        $v0, $t1, $sp
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x185474: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x185474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x185478: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x185478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x18547c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x18547cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x185480: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x185480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x185484: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x185484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x185488: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x185488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18548c: 0xaca4fffc  sw          $a0, -0x4($a1)
    ctx->pc = 0x18548cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 4));
    // 0x185490: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x185490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x185494: 0xaca3ffec  sw          $v1, -0x14($a1)
    ctx->pc = 0x185494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967276), GPR_U32(ctx, 3));
    // 0x185498: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x185498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_18549c:
    // 0x18549c: 0x0  nop
    ctx->pc = 0x18549cu;
    // NOP
    // 0x1854a0: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x1854a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1854a4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1854a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1854a8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1854a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1854ac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1854ACu;
    {
        const bool branch_taken_0x1854ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1854B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1854ACu;
            // 0x1854b0: 0x1262821  addu        $a1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854ac) {
            ctx->pc = 0x185470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_185470;
        }
    }
    ctx->pc = 0x1854B4u;
    // 0x1854b4: 0x71280  sll         $v0, $a3, 10
    ctx->pc = 0x1854b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x1854b8: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1854b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1854bc: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x1854bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1854c0: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x1854c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1854c4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1854c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1854c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1854c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1854ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1854D0u;
    {
        const bool branch_taken_0x1854d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1854D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1854D0u;
            // 0x1854d4: 0x3443999a  ori         $v1, $v0, 0x999A (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854d0) {
            ctx->pc = 0x185504u;
            goto label_185504;
        }
    }
    ctx->pc = 0x1854D8u;
label_1854d8:
    // 0x1854d8: 0x11d1021  addu        $v0, $t0, $sp
    ctx->pc = 0x1854d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x1854dc: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x1854dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x1854e0: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1854e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1854e4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1854e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1854e8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1854ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1854ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1854f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1854f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1854f4: 0xaca4fc0c  sw          $a0, -0x3F4($a1)
    ctx->pc = 0x1854f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294966284), GPR_U32(ctx, 4));
    // 0x1854f8: 0xac44040c  sw          $a0, 0x40C($v0)
    ctx->pc = 0x1854f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1036), GPR_U32(ctx, 4));
    // 0x1854fc: 0xaca3f80c  sw          $v1, -0x7F4($a1)
    ctx->pc = 0x1854fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965260), GPR_U32(ctx, 3));
    // 0x185500: 0xac43080c  sw          $v1, 0x80C($v0)
    ctx->pc = 0x185500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 3));
label_185504:
    // 0x185504: 0x0  nop
    ctx->pc = 0x185504u;
    // NOP
    // 0x185508: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x185508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x18550c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x18550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x185510: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x185510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x185514: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x185514u;
    {
        const bool branch_taken_0x185514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185514u;
            // 0x185518: 0x1062821  addu        $a1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185514) {
            ctx->pc = 0x1854D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1854d8;
        }
    }
    ctx->pc = 0x18551Cu;
    // 0x18551c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x185520: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x185520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x185524: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x185524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x185528: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x185528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18552c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x18552cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x185530: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x185530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x185534: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x185534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x185538: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x18553c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x18553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x185540: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x185540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x185544: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x185544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x185548: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x185548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x18554c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x18554Cu;
    {
        const bool branch_taken_0x18554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18554Cu;
            // 0x185550: 0x8fb400b0  lw          $s4, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18554c) {
            ctx->pc = 0x1856BCu;
            goto label_1856bc;
        }
    }
    ctx->pc = 0x185554u;
    // 0x185554: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185558: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x185558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18555c: 0x34210168  ori         $at, $at, 0x168
    ctx->pc = 0x18555cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)360);
    // 0x185560: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x185560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x185564: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x185564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_185568:
    // 0x185568: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18556c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x18556cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x185570: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x185570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x185574: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x185574u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x185578: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x185578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x18557c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x18557cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x185580: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x185580u;
    {
        const bool branch_taken_0x185580 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x185584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185580u;
            // 0x185584: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185580) {
            ctx->pc = 0x185568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_185568;
        }
    }
    ctx->pc = 0x185588u;
    // 0x185588: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x18558c: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18558cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x185590: 0x34210198  ori         $at, $at, 0x198
    ctx->pc = 0x185590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)408);
    // 0x185594: 0x441c0  sll         $t0, $a0, 7
    ctx->pc = 0x185594u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x185598: 0x3a12821  addu        $a1, $sp, $at
    ctx->pc = 0x185598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x18559c: 0x8c4d0028  lw          $t5, 0x28($v0)
    ctx->pc = 0x18559cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1855a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1855a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1855a4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1855a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1855a8: 0x342101a0  ori         $at, $at, 0x1A0
    ctx->pc = 0x1855a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)416);
    // 0x1855ac: 0x240bfc0f  addiu       $t3, $zero, -0x3F1
    ctx->pc = 0x1855acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1855b0: 0x3a11821  addu        $v1, $sp, $at
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1855b4: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x1855b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1855b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1855b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1855bc: 0x640c0010  daddiu      $t4, $zero, 0x10
    ctx->pc = 0x1855bcu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1855c0: 0x342101b0  ori         $at, $at, 0x1B0
    ctx->pc = 0x1855c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)432);
    // 0x1855c4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1855c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1855c8: 0x3a14821  addu        $t1, $sp, $at
    ctx->pc = 0x1855c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1855cc: 0x27a70138  addiu       $a3, $sp, 0x138
    ctx->pc = 0x1855ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x1855d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1855d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1855d4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1855d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1855d8: 0xac2d0188  sw          $t5, 0x188($at)
    ctx->pc = 0x1855d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 392), GPR_U32(ctx, 13));
    // 0x1855dc: 0x8c4d002c  lw          $t5, 0x2C($v0)
    ctx->pc = 0x1855dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1855e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1855e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1855e4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1855e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1855e8: 0xac2d018c  sw          $t5, 0x18C($at)
    ctx->pc = 0x1855e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 396), GPR_U32(ctx, 13));
    // 0x1855ec: 0x8c4d0030  lw          $t5, 0x30($v0)
    ctx->pc = 0x1855ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1855f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1855f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1855f4: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1855f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1855f8: 0xac2d0190  sw          $t5, 0x190($at)
    ctx->pc = 0x1855f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 400), GPR_U32(ctx, 13));
    // 0x1855fc: 0xdc4d0038  ld          $t5, 0x38($v0)
    ctx->pc = 0x1855fcu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x185600: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185604: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x185604u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185608: 0xfcad0000  sd          $t5, 0x0($a1)
    ctx->pc = 0x185608u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 13));
    // 0x18560c: 0xdc4d0040  ld          $t5, 0x40($v0)
    ctx->pc = 0x18560cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x185610: 0xfc6d0000  sd          $t5, 0x0($v1)
    ctx->pc = 0x185610u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 13));
    // 0x185614: 0xdc4d0048  ld          $t5, 0x48($v0)
    ctx->pc = 0x185614u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x185618: 0xfc2d01a8  sd          $t5, 0x1A8($at)
    ctx->pc = 0x185618u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 424), GPR_U64(ctx, 13));
    // 0x18561c: 0xc4430050  lwc1        $f3, 0x50($v0)
    ctx->pc = 0x18561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x185620: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185624: 0xc4420054  lwc1        $f2, 0x54($v0)
    ctx->pc = 0x185624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185628: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x185628u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x18562c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x18562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185630: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x185630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185634: 0xe5230000  swc1        $f3, 0x0($t1)
    ctx->pc = 0x185634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x185638: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x185638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x18563c: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x18563cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x185640: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x185640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x185644: 0x942d019a  lhu         $t5, 0x19A($at)
    ctx->pc = 0x185644u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 410)));
    // 0x185648: 0x8c4e0060  lw          $t6, 0x60($v0)
    ctx->pc = 0x185648u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18564c: 0x93a90139  lbu         $t1, 0x139($sp)
    ctx->pc = 0x18564cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 313)));
    // 0x185650: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185654: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x185654u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x185658: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x185658u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x18565c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x18565cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x185660: 0xac2e01c0  sw          $t6, 0x1C0($at)
    ctx->pc = 0x185660u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 448), GPR_U32(ctx, 14));
    // 0x185664: 0x1263024  and         $a2, $t1, $a2
    ctx->pc = 0x185664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x185668: 0x8c4d0064  lw          $t5, 0x64($v0)
    ctx->pc = 0x185668u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18566c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x18566cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185670: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x185670u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185674: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x185674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x185678: 0xac2d01c4  sw          $t5, 0x1C4($at)
    ctx->pc = 0x185678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 452), GPR_U32(ctx, 13));
    // 0x18567c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x18567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x185680: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185684: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x185684u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185688: 0xac2201c8  sw          $v0, 0x1C8($at)
    ctx->pc = 0x185688u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 456), GPR_U32(ctx, 2));
    // 0x18568c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x18568cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185690: 0xa3a60139  sb          $a2, 0x139($sp)
    ctx->pc = 0x185690u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 313), (uint8_t)GPR_U32(ctx, 6));
    // 0x185694: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x185694u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185698: 0xa3aa0138  sb          $t2, 0x138($sp)
    ctx->pc = 0x185698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 312), (uint8_t)GPR_U32(ctx, 10));
    // 0x18569c: 0xa42b019a  sh          $t3, 0x19A($at)
    ctx->pc = 0x18569cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 410), (uint16_t)GPR_U32(ctx, 11));
    // 0x1856a0: 0xa3aa013c  sb          $t2, 0x13C($sp)
    ctx->pc = 0x1856a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 10));
    // 0x1856a4: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1856a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1856a8: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x1856a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1856ac: 0xc04f938  jal         func_13E4E0
    ctx->pc = 0x1856ACu;
    SET_GPR_U32(ctx, 31, 0x1856B4u);
    ctx->pc = 0x1856B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1856ACu;
            // 0x1856b0: 0xdca50000  ld          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E4E0u;
    if (runtime->hasFunction(0x13E4E0u)) {
        auto targetFn = runtime->lookupFunction(0x13E4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856B4u; }
        if (ctx->pc != 0x1856B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTEX0__FPUiUlUlUl_0x13e4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856B4u; }
        if (ctx->pc != 0x1856B4u) { return; }
    }
    ctx->pc = 0x1856B4u;
label_1856b4:
    // 0x1856b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1856b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1856b8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1856b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1856bc:
    // 0x1856bc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1856bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1856c0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1856c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1856c4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1856c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1856c8: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x1856C8u;
    {
        const bool branch_taken_0x1856c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1856C8u;
            // 0x1856cc: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856c8) {
            ctx->pc = 0x185A40u;
            goto label_185a40;
        }
    }
    ctx->pc = 0x1856D0u;
label_1856d0:
    // 0x1856d0: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x1856d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1856d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1856d8: 0x342101f0  ori         $at, $at, 0x1F0
    ctx->pc = 0x1856d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)496);
    // 0x1856dc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1856dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1856e0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1856e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1856e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1856e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1856e8: 0x8c470058  lw          $a3, 0x58($v0)
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1856ec: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1856ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1856f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1856f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1856f4: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x1856f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1856f8: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x1856f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1856fc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1856fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x185700: 0x24730160  addiu       $s3, $v1, 0x160
    ctx->pc = 0x185700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x185704: 0x8c46005c  lw          $a2, 0x5C($v0)
    ctx->pc = 0x185704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x185708: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18570c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x185710: 0x24520160  addiu       $s2, $v0, 0x160
    ctx->pc = 0x185710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x185714: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x185714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x185718: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x185718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18571c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18571cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185720: 0xc041c4a  jal         func_107128
    ctx->pc = 0x185720u;
    SET_GPR_U32(ctx, 31, 0x185728u);
    ctx->pc = 0x185724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185720u;
            // 0x185724: 0xc2a821  addu        $s5, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185728u; }
        if (ctx->pc != 0x185728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185728u; }
        if (ctx->pc != 0x185728u) { return; }
    }
    ctx->pc = 0x185728u;
label_185728:
    // 0x185728: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x185728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x18572c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x18572cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185730: 0x342101d0  ori         $at, $at, 0x1D0
    ctx->pc = 0x185730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)464);
    // 0x185734: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x185734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185738: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x18573c: 0x342101f0  ori         $at, $at, 0x1F0
    ctx->pc = 0x18573cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)496);
    // 0x185740: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x185740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185744: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x185744u;
    SET_GPR_U32(ctx, 31, 0x18574Cu);
    ctx->pc = 0x185748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185744u;
            // 0x185748: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18574Cu; }
        if (ctx->pc != 0x18574Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18574Cu; }
        if (ctx->pc != 0x18574Cu) { return; }
    }
    ctx->pc = 0x18574Cu;
label_18574c:
    // 0x18574c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x18574cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185750: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x185750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x185754: 0x342101d0  ori         $at, $at, 0x1D0
    ctx->pc = 0x185754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)464);
    // 0x185758: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x185758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x18575c: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x18575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185760: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185764: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x185764u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185768: 0xac2301dc  sw          $v1, 0x1DC($at)
    ctx->pc = 0x185768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 476), GPR_U32(ctx, 3));
    // 0x18576c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18576cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185770: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185774: 0x342101e0  ori         $at, $at, 0x1E0
    ctx->pc = 0x185774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)480);
    // 0x185778: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x185778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x18577c: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x18577Cu;
    SET_GPR_U32(ctx, 31, 0x185784u);
    ctx->pc = 0x185780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18577Cu;
            // 0x185780: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185784u; }
        if (ctx->pc != 0x185784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185784u; }
        if (ctx->pc != 0x185784u) { return; }
    }
    ctx->pc = 0x185784u;
label_185784:
    // 0x185784: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x185784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x185788: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x185788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x18578c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x18578cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x185790: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x185790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x185794: 0x184000a0  blez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x185794u;
    {
        const bool branch_taken_0x185794 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x185794) {
            ctx->pc = 0x185A18u;
            goto label_185a18;
        }
    }
    ctx->pc = 0x18579Cu;
label_18579c:
    // 0x18579c: 0x0  nop
    ctx->pc = 0x18579cu;
    // NOP
    // 0x1857a0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1857a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1857a4: 0x2841001b  slti        $at, $v0, 0x1B
    ctx->pc = 0x1857a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1857a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1857A8u;
    {
        const bool branch_taken_0x1857a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1857ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1857A8u;
            // 0x1857ac: 0x2411001b  addiu       $s1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857a8) {
            ctx->pc = 0x1857B4u;
            goto label_1857b4;
        }
    }
    ctx->pc = 0x1857B0u;
    // 0x1857b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1857b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1857b4:
    // 0x1857b4: 0x0  nop
    ctx->pc = 0x1857b4u;
    // NOP
    // 0x1857b8: 0x7e800010  sq          $zero, 0x10($s4)
    ctx->pc = 0x1857b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 0));
    // 0x1857bc: 0x928a0011  lbu         $t2, 0x11($s4)
    ctx->pc = 0x1857bcu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x1857c0: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x1857c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1857c4: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x1857c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x1857c8: 0x64060004  daddiu      $a2, $zero, 0x4
    ctx->pc = 0x1857c8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1857cc: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x1857ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1857d0: 0x64090080  daddiu      $t1, $zero, 0x80
    ctx->pc = 0x1857d0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1857d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1857d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1857d8: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x1857d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1857dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1857dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1857e0: 0x64080040  daddiu      $t0, $zero, 0x40
    ctx->pc = 0x1857e0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1857e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1857e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1857e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1857e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1857ec: 0x1442024  and         $a0, $t2, $a0
    ctx->pc = 0x1857ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x1857f0: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x1857f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1857f4: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x1857f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x1857f8: 0x62bfc  dsll32      $a1, $a2, 15
    ctx->pc = 0x1857f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 15));
    // 0x1857fc: 0xa2840011  sb          $a0, 0x11($s4)
    ctx->pc = 0x1857fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x185800: 0x114840  sll         $t1, $s1, 1
    ctx->pc = 0x185800u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x185804: 0x928c0015  lbu         $t4, 0x15($s4)
    ctx->pc = 0x185804u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21)));
    // 0x185808: 0x2403ff0f  addiu       $v1, $zero, -0xF1
    ctx->pc = 0x185808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18580c: 0x64040030  daddiu      $a0, $zero, 0x30
    ctx->pc = 0x18580cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
    // 0x185810: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x185810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x185814: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x185814u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x185818: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x185818u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18581c: 0x26970020  addiu       $s7, $s4, 0x20
    ctx->pc = 0x18581cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x185820: 0x269e0030  addiu       $fp, $s4, 0x30
    ctx->pc = 0x185820u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x185824: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x185824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x185828: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x185828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18582c: 0x1873824  and         $a3, $t4, $a3
    ctx->pc = 0x18582cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x185830: 0xafa90100  sw          $t1, 0x100($sp)
    ctx->pc = 0x185830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 9));
    // 0x185834: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x185834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x185838: 0x114940  sll         $t1, $s1, 5
    ctx->pc = 0x185838u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x18583c: 0xa2870015  sb          $a3, 0x15($s4)
    ctx->pc = 0x18583cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21), (uint8_t)GPR_U32(ctx, 7));
    // 0x185840: 0x1344821  addu        $t1, $t1, $s4
    ctx->pc = 0x185840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x185844: 0xde870010  ld          $a3, 0x10($s4)
    ctx->pc = 0x185844u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x185848: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x185848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x18584c: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x18584cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x185850: 0xfe850010  sd          $a1, 0x10($s4)
    ctx->pc = 0x185850u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 5));
    // 0x185854: 0x92850017  lbu         $a1, 0x17($s4)
    ctx->pc = 0x185854u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 23)));
    // 0x185858: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x185858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18585c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x18585cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x185860: 0xa2850017  sb          $a1, 0x17($s4)
    ctx->pc = 0x185860u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 23), (uint8_t)GPR_U32(ctx, 5));
    // 0x185864: 0x92850018  lbu         $a1, 0x18($s4)
    ctx->pc = 0x185864u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x185868: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x185868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x18586c: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x18586cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x185870: 0xa2850018  sb          $a1, 0x18($s4)
    ctx->pc = 0x185870u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x185874: 0x92850018  lbu         $a1, 0x18($s4)
    ctx->pc = 0x185874u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x185878: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x185878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18587c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x185880: 0xa2830018  sb          $v1, 0x18($s4)
    ctx->pc = 0x185880u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x185884: 0x92830019  lbu         $v1, 0x19($s4)
    ctx->pc = 0x185884u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 25)));
    // 0x185888: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x185888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18588c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18588cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x185890: 0xa2820019  sb          $v0, 0x19($s4)
    ctx->pc = 0x185890u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x185894: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x185894u;
    {
        const bool branch_taken_0x185894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x185898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185894u;
            // 0x185898: 0x25340030  addiu       $s4, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185894) {
            ctx->pc = 0x185914u;
            goto label_185914;
        }
    }
    ctx->pc = 0x18589Cu;
label_18589c:
    // 0x18589c: 0x0  nop
    ctx->pc = 0x18589cu;
    // NOP
    // 0x1858a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1858a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1858a4: 0x342101d0  ori         $at, $at, 0x1D0
    ctx->pc = 0x1858a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)464);
    // 0x1858a8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1858a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1858ac: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1858acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1858b0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1858b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1858b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1858b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1858b8: 0x342101e0  ori         $at, $at, 0x1E0
    ctx->pc = 0x1858b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)480);
    // 0x1858bc: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1858c0: 0x7fc30000  sq          $v1, 0x0($fp)
    ctx->pc = 0x1858c0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 3));
    // 0x1858c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1858c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1858c8: 0x7fc20010  sq          $v0, 0x10($fp)
    ctx->pc = 0x1858c8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), GPR_VEC(ctx, 2));
    // 0x1858cc: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1858ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1858d0: 0x27de0020  addiu       $fp, $fp, 0x20
    ctx->pc = 0x1858d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x1858d4: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1858d4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1858d8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1858d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1858dc: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1858dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1858e0: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x1858e0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x1858e4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1858e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1858e8: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1858E8u;
    SET_GPR_U32(ctx, 31, 0x1858F0u);
    ctx->pc = 0x1858ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1858E8u;
            // 0x1858ec: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1858F0u; }
        if (ctx->pc != 0x1858F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1858F0u; }
        if (ctx->pc != 0x1858F0u) { return; }
    }
    ctx->pc = 0x1858F0u;
label_1858f0:
    // 0x1858f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1858f4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1858f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1858f8: 0x342101e0  ori         $at, $at, 0x1E0
    ctx->pc = 0x1858f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)480);
    // 0x1858fc: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1858FCu;
    SET_GPR_U32(ctx, 31, 0x185904u);
    ctx->pc = 0x185900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1858FCu;
            // 0x185900: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185904u; }
        if (ctx->pc != 0x185904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185904u; }
        if (ctx->pc != 0x185904u) { return; }
    }
    ctx->pc = 0x185904u;
label_185904:
    // 0x185904: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x185904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x185908: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x185908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x18590c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x18590Cu;
    {
        const bool branch_taken_0x18590c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18590c) {
            ctx->pc = 0x18589Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18589c;
        }
    }
    ctx->pc = 0x185914u;
label_185914:
    // 0x185914: 0x0  nop
    ctx->pc = 0x185914u;
    // NOP
    // 0x185918: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x18591c: 0x342101d0  ori         $at, $at, 0x1D0
    ctx->pc = 0x18591cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)464);
    // 0x185920: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x185920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x185924: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x185924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x185928: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x185928u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x18592c: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x18592cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x185930: 0xc04bcfc  jal         func_12F3F0
    ctx->pc = 0x185930u;
    SET_GPR_U32(ctx, 31, 0x185938u);
    ctx->pc = 0x185934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185930u;
            // 0x185934: 0x2673fff0  addiu       $s3, $s3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3F0u;
    if (runtime->hasFunction(0x12F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185938u; }
        if (ctx->pc != 0x185938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSubVector__FPfPf_0x12f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185938u; }
        if (ctx->pc != 0x185938u) { return; }
    }
    ctx->pc = 0x185938u;
label_185938:
    // 0x185938: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x18593c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x18593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x185940: 0x342101e0  ori         $at, $at, 0x1E0
    ctx->pc = 0x185940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)480);
    // 0x185944: 0xc04bcfc  jal         func_12F3F0
    ctx->pc = 0x185944u;
    SET_GPR_U32(ctx, 31, 0x18594Cu);
    ctx->pc = 0x185948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185944u;
            // 0x185948: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3F0u;
    if (runtime->hasFunction(0x12F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18594Cu; }
        if (ctx->pc != 0x18594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSubVector__FPfPf_0x12f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18594Cu; }
        if (ctx->pc != 0x18594Cu) { return; }
    }
    ctx->pc = 0x18594Cu;
label_18594c:
    // 0x18594c: 0x2961823  subu        $v1, $s4, $s6
    ctx->pc = 0x18594cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x185950: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x185950u;
    {
        const bool branch_taken_0x185950 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x185954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185950u;
            // 0x185954: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185950) {
            ctx->pc = 0x185960u;
            goto label_185960;
        }
    }
    ctx->pc = 0x185958u;
    // 0x185958: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x185958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x18595c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x18595cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_185960:
    // 0x185960: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x185960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x185964: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x185964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x185968: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x185968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18596c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x18596cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x185970: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x185974: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x185974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x185978: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x185978u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x18597c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x185980: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x185980u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x185984: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x185984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x185988: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x185988u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x18598c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x18598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x185990: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x185990u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x185994: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x185994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x185998: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x185998u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x18599c: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x18599cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x1859a0: 0x1a200016  blez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1859A0u;
    {
        const bool branch_taken_0x1859a0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1859A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859A0u;
            // 0x1859a4: 0xaee0000c  sw          $zero, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859a0) {
            ctx->pc = 0x1859FCu;
            goto label_1859fc;
        }
    }
    ctx->pc = 0x1859A8u;
    // 0x1859a8: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x1859a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1859ac: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1859acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1859b0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1859b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1859b4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1859b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1859b8: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1859b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x1859bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1859c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1859C0u;
    {
        const bool branch_taken_0x1859c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1859C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859C0u;
            // 0x1859c4: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859c0) {
            ctx->pc = 0x1859E4u;
            goto label_1859e4;
        }
    }
    ctx->pc = 0x1859C8u;
    // 0x1859c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1859c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1859cc: 0x24635100  addiu       $v1, $v1, 0x5100
    ctx->pc = 0x1859ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20736));
    // 0x1859d0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1859d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1859d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1859d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1859d8: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x1859d8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x1859dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1859DCu;
    {
        const bool branch_taken_0x1859dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859DCu;
            // 0x1859e0: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859dc) {
            ctx->pc = 0x1859FCu;
            goto label_1859fc;
        }
    }
    ctx->pc = 0x1859E4u;
label_1859e4:
    // 0x1859e4: 0x0  nop
    ctx->pc = 0x1859e4u;
    // NOP
    // 0x1859e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1859e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1859ec: 0x24425110  addiu       $v0, $v0, 0x5110
    ctx->pc = 0x1859ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20752));
    // 0x1859f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1859f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1859f4: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x1859f4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x1859f8: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1859f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1859fc:
    // 0x1859fc: 0x0  nop
    ctx->pc = 0x1859fcu;
    // NOP
    // 0x185a00: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x185a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x185a04: 0x2442ffe5  addiu       $v0, $v0, -0x1B
    ctx->pc = 0x185a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967269));
    // 0x185a08: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x185a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x185a0c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x185a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x185a10: 0x1c40ff62  bgtz        $v0, . + 4 + (-0x9E << 2)
    ctx->pc = 0x185A10u;
    {
        const bool branch_taken_0x185a10 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x185a10) {
            ctx->pc = 0x18579Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18579c;
        }
    }
    ctx->pc = 0x185A18u;
label_185a18:
    // 0x185a18: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x185a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x185a1c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x185a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x185a20: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x185a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x185a24: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x185a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x185a28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x185a2c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x185a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x185a30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x185a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185a38: 0x0  nop
    ctx->pc = 0x185a38u;
    // NOP
    // 0x185a3c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x185a3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_185a40:
    // 0x185a40: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x185a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x185a44: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x185a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x185a48: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x185a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x185a4c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x185a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x185a50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x185a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x185a54: 0x1440ff1e  bnez        $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x185A54u;
    {
        const bool branch_taken_0x185a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A54u;
            // 0x185a58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a54) {
            ctx->pc = 0x1856D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1856d0;
        }
    }
    ctx->pc = 0x185A5Cu;
    // 0x185a5c: 0xc04f94c  jal         func_13E530
    ctx->pc = 0x185A5Cu;
    SET_GPR_U32(ctx, 31, 0x185A64u);
    ctx->pc = 0x13E530u;
    if (runtime->hasFunction(0x13E530u)) {
        auto targetFn = runtime->lookupFunction(0x13E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185A64u; }
        if (ctx->pc != 0x185A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTexFlush_TagCnt__FPUi_0x13e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185A64u; }
        if (ctx->pc != 0x185A64u) { return; }
    }
    ctx->pc = 0x185A64u;
label_185a64:
    // 0x185a64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x185a68: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x185a6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x185a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x185a70: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x185a70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x185a74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x185a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x185a78: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x185a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x185a7c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x185a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x185a80: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x185a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x185a84: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x185a84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x185a88: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x185a88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x185a8c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x185a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x185a90: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x185a90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x185a94: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x185a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x185a98: 0xae850010  sw          $a1, 0x10($s4)
    ctx->pc = 0x185a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 5));
    // 0x185a9c: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x185a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x185aa0: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x185aa0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
    // 0x185aa4: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x185aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x185aa8: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x185aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
    // 0x185aac: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x185aacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
    // 0x185ab0: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x185ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x185ab4: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x185ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x185ab8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185AB8u;
    {
        const bool branch_taken_0x185ab8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x185ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185AB8u;
            // 0x185abc: 0xae80002c  sw          $zero, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ab8) {
            ctx->pc = 0x185AC8u;
            goto label_185ac8;
        }
    }
    ctx->pc = 0x185AC0u;
    // 0x185ac0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x185ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x185ac4: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x185ac4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_185ac8:
    // 0x185ac8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x185AC8u;
    SET_GPR_U32(ctx, 31, 0x185AD0u);
    ctx->pc = 0x185ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185AC8u;
            // 0x185acc: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AD0u; }
        if (ctx->pc != 0x185AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AD0u; }
        if (ctx->pc != 0x185AD0u) { return; }
    }
    ctx->pc = 0x185AD0u;
label_185ad0:
    // 0x185ad0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x185ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x185ad4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x185ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x185ad8: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x185ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x185adc: 0x34210200  ori         $at, $at, 0x200
    ctx->pc = 0x185adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)512);
    // 0x185ae0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x185ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x185ae4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x185ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x185ae8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x185ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185aec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x185aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x185af0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x185af0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185af4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x185af4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185af8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x185af8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185afc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x185afcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185b00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x185b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185b04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185b08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x185b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185b0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x185b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185b10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185b14: 0x3e00008  jr          $ra
    ctx->pc = 0x185B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B14u;
            // 0x185b18: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185B1Cu;
}
