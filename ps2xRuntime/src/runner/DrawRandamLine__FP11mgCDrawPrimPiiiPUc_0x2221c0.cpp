#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawRandamLine__FP11mgCDrawPrimPiiiPUc
// Address: 0x2221c0 - 0x222448
void DrawRandamLine__FP11mgCDrawPrimPiiiPUc_0x2221c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawRandamLine__FP11mgCDrawPrimPiiiPUc_0x2221c0");
#endif

    switch (ctx->pc) {
        case 0x222224u: goto label_222224;
        case 0x22233cu: goto label_22233c;
        case 0x222384u: goto label_222384;
        case 0x222390u: goto label_222390;
        case 0x2223acu: goto label_2223ac;
        case 0x2223c4u: goto label_2223c4;
        case 0x2223d8u: goto label_2223d8;
        case 0x2223f4u: goto label_2223f4;
        case 0x222410u: goto label_222410;
        case 0x222428u: goto label_222428;
        default: break;
    }

    ctx->pc = 0x2221c0u;

    // 0x2221c0: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x2221c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x2221c4: 0x34214430  ori         $at, $at, 0x4430
    ctx->pc = 0x2221c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17456);
    // 0x2221c8: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2221c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2221cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2221ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2221d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2221d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2221d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2221d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2221d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2221d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2221dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2221e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2221e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2221e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2221e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2221e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221ec: 0x1260008e  beqz        $s3, . + 4 + (0x8E << 2)
    ctx->pc = 0x2221ECu;
    {
        const bool branch_taken_0x2221ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2221ECu;
            // 0x2221f0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221ec) {
            ctx->pc = 0x222428u;
            goto label_222428;
        }
    }
    ctx->pc = 0x2221F4u;
    // 0x2221f4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2221F4u;
    {
        const bool branch_taken_0x2221f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2221F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2221F4u;
            // 0x2221f8: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221f4) {
            ctx->pc = 0x222208u;
            goto label_222208;
        }
    }
    ctx->pc = 0x2221FCu;
    // 0x2221fc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2221FCu;
    {
        const bool branch_taken_0x2221fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2221FCu;
            // 0x222200: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221fc) {
            ctx->pc = 0x22242Cu;
            goto label_22242c;
        }
    }
    ctx->pc = 0x222204u;
    // 0x222204: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x222204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_222208:
    // 0x222208: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x222208u;
    {
        const bool branch_taken_0x222208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22220Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222208u;
            // 0x22220c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222208) {
            ctx->pc = 0x222378u;
            goto label_222378;
        }
    }
    ctx->pc = 0x222210u;
    // 0x222210: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x222210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x222214: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x222214u;
    {
        const bool branch_taken_0x222214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x222218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222214u;
            // 0x222218: 0x2624fff8  addiu       $a0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222214) {
            ctx->pc = 0x222324u;
            goto label_222324;
        }
    }
    ctx->pc = 0x22221Cu;
    // 0x22221c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22221cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222220: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222224:
    // 0x222224: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x222228: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x222228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x22222c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x22222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222230: 0x24490050  addiu       $t1, $v0, 0x50
    ctx->pc = 0x222230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x222234: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x222238: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x222238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x22223c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x22223cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x222240: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x222240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x222244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222248: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x222248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x22224c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x22224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222254: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x222254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x222258: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x222258u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x22225c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x22225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222264: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x222264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x222268: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x222268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22226c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22226cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222270: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x222270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
    // 0x222274: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x222274u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
    // 0x222278: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x222278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22227c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22227cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222280: 0xe5200020  swc1        $f0, 0x20($t1)
    ctx->pc = 0x222280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
    // 0x222284: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x222284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22228c: 0xe5200024  swc1        $f0, 0x24($t1)
    ctx->pc = 0x22228cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 36), bits); }
    // 0x222290: 0xad200028  sw          $zero, 0x28($t1)
    ctx->pc = 0x222290u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 0));
    // 0x222294: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x222294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222298: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22229c: 0xe5200030  swc1        $f0, 0x30($t1)
    ctx->pc = 0x22229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 48), bits); }
    // 0x2222a0: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x2222a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2222a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2222a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2222a8: 0xe5200034  swc1        $f0, 0x34($t1)
    ctx->pc = 0x2222a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 52), bits); }
    // 0x2222ac: 0xad200038  sw          $zero, 0x38($t1)
    ctx->pc = 0x2222acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 56), GPR_U32(ctx, 0));
    // 0x2222b0: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x2222b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2222b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2222b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2222b8: 0xe5200040  swc1        $f0, 0x40($t1)
    ctx->pc = 0x2222b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 64), bits); }
    // 0x2222bc: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x2222bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2222c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2222c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2222c4: 0xe5200044  swc1        $f0, 0x44($t1)
    ctx->pc = 0x2222c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 68), bits); }
    // 0x2222c8: 0xad200048  sw          $zero, 0x48($t1)
    ctx->pc = 0x2222c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 0));
    // 0x2222cc: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x2222ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2222d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2222d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2222d4: 0xe5200050  swc1        $f0, 0x50($t1)
    ctx->pc = 0x2222d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 80), bits); }
    // 0x2222d8: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x2222d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2222dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2222dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2222e0: 0xe5200054  swc1        $f0, 0x54($t1)
    ctx->pc = 0x2222e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 84), bits); }
    // 0x2222e4: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x2222e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x2222e8: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x2222e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2222ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2222ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2222f0: 0xe5200060  swc1        $f0, 0x60($t1)
    ctx->pc = 0x2222f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 96), bits); }
    // 0x2222f4: 0xc5000034  lwc1        $f0, 0x34($t0)
    ctx->pc = 0x2222f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2222f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2222f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2222fc: 0xe5200064  swc1        $f0, 0x64($t1)
    ctx->pc = 0x2222fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
    // 0x222300: 0xad200068  sw          $zero, 0x68($t1)
    ctx->pc = 0x222300u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 0));
    // 0x222304: 0xc5000038  lwc1        $f0, 0x38($t0)
    ctx->pc = 0x222304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222308: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22230c: 0xe5200070  swc1        $f0, 0x70($t1)
    ctx->pc = 0x22230cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 112), bits); }
    // 0x222310: 0xc500003c  lwc1        $f0, 0x3C($t0)
    ctx->pc = 0x222310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222318: 0xe5200074  swc1        $f0, 0x74($t1)
    ctx->pc = 0x222318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 116), bits); }
    // 0x22231c: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x22231Cu;
    {
        const bool branch_taken_0x22231c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22231Cu;
            // 0x222320: 0xad200078  sw          $zero, 0x78($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22231c) {
            ctx->pc = 0x222224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222224;
        }
    }
    ctx->pc = 0x222324u;
label_222324:
    // 0x222324: 0x0  nop
    ctx->pc = 0x222324u;
    // NOP
    // 0x222328: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x222328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x22232c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x22232Cu;
    {
        const bool branch_taken_0x22232c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22232c) {
            ctx->pc = 0x222378u;
            goto label_222378;
        }
    }
    ctx->pc = 0x222334u;
    // 0x222334: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x222334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x222338: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x222338u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_22233c:
    // 0x22233c: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x22233cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x222340: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x222340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x222344: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x222344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222348: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x222348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x22234c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x222350: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x222350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x222354: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x222354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x222358: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x222358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x22235c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22235cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222360: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x222360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x222364: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x222364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222368: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22236c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x22236cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x222370: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x222370u;
    {
        const bool branch_taken_0x222370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222370u;
            // 0x222374: 0xad000008  sw          $zero, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222370) {
            ctx->pc = 0x22233Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22233c;
        }
    }
    ctx->pc = 0x222378u;
label_222378:
    // 0x222378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x222378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22237c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22237Cu;
    SET_GPR_U32(ctx, 31, 0x222384u);
    ctx->pc = 0x222380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22237Cu;
            // 0x222380: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222384u; }
        if (ctx->pc != 0x222384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222384u; }
        if (ctx->pc != 0x222384u) { return; }
    }
    ctx->pc = 0x222384u;
label_222384:
    // 0x222384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x222384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222388: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x222388u;
    SET_GPR_U32(ctx, 31, 0x222390u);
    ctx->pc = 0x22238Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222388u;
            // 0x22238c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222390u; }
        if (ctx->pc != 0x222390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222390u; }
        if (ctx->pc != 0x222390u) { return; }
    }
    ctx->pc = 0x222390u;
label_222390:
    // 0x222390: 0x27a43ed0  addiu       $a0, $sp, 0x3ED0
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16080));
    // 0x222394: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x222394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x222398: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x222398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22239c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22239cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2223a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223a4: 0xc072324  jal         func_1C8C90
    ctx->pc = 0x2223A4u;
    SET_GPR_U32(ctx, 31, 0x2223ACu);
    ctx->pc = 0x2223A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2223A4u;
            // 0x2223a8: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8C90u;
    if (runtime->hasFunction(0x1C8C90u)) {
        auto targetFn = runtime->lookupFunction(0x1C8C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223ACu; }
        if (ctx->pc != 0x2223ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatSmoothPass__FPA4_fPA4_fiiii_0x1c8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223ACu; }
        if (ctx->pc != 0x2223ACu) { return; }
    }
    ctx->pc = 0x2223ACu;
label_2223ac:
    // 0x2223ac: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2223acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2223b0: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2223b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2223b4: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x2223b4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2223b8: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x2223b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2223bc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2223BCu;
    SET_GPR_U32(ctx, 31, 0x2223C4u);
    ctx->pc = 0x2223C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2223BCu;
            // 0x2223c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223C4u; }
        if (ctx->pc != 0x2223C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223C4u; }
        if (ctx->pc != 0x2223C4u) { return; }
    }
    ctx->pc = 0x2223C4u;
label_2223c4:
    // 0x2223c4: 0xc7ac3ed0  lwc1        $f12, 0x3ED0($sp)
    ctx->pc = 0x2223c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2223c8: 0xc7ad3ed4  lwc1        $f13, 0x3ED4($sp)
    ctx->pc = 0x2223c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2223cc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2223ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2223d0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2223D0u;
    SET_GPR_U32(ctx, 31, 0x2223D8u);
    ctx->pc = 0x2223D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2223D0u;
            // 0x2223d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223D8u; }
        if (ctx->pc != 0x2223D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2223D8u; }
        if (ctx->pc != 0x2223D8u) { return; }
    }
    ctx->pc = 0x2223D8u;
label_2223d8:
    // 0x2223d8: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2223dc: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2223e0: 0x628818  mult        $s1, $v1, $v0
    ctx->pc = 0x2223e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2223e4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2223e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2223e8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2223E8u;
    {
        const bool branch_taken_0x2223e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2223E8u;
            // 0x2223ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223e8) {
            ctx->pc = 0x222420u;
            goto label_222420;
        }
    }
    ctx->pc = 0x2223F0u;
    // 0x2223f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2223f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2223f4:
    // 0x2223f4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2223f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2223f8: 0x24423ed0  addiu       $v0, $v0, 0x3ED0
    ctx->pc = 0x2223f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16080));
    // 0x2223fc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2223fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x222400: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x222400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222404: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x222404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x222408: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x222408u;
    SET_GPR_U32(ctx, 31, 0x222410u);
    ctx->pc = 0x22240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222408u;
            // 0x22240c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222410u; }
        if (ctx->pc != 0x222410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222410u; }
        if (ctx->pc != 0x222410u) { return; }
    }
    ctx->pc = 0x222410u;
label_222410:
    // 0x222410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222414: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x222414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x222418: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x222418u;
    {
        const bool branch_taken_0x222418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22241Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222418u;
            // 0x22241c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222418) {
            ctx->pc = 0x2223F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2223f4;
        }
    }
    ctx->pc = 0x222420u;
label_222420:
    // 0x222420: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x222420u;
    SET_GPR_U32(ctx, 31, 0x222428u);
    ctx->pc = 0x222424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222420u;
            // 0x222424: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222428u; }
        if (ctx->pc != 0x222428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222428u; }
        if (ctx->pc != 0x222428u) { return; }
    }
    ctx->pc = 0x222428u;
label_222428:
    // 0x222428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x222428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22242c:
    // 0x22242c: 0x3401bbd0  ori         $at, $zero, 0xBBD0
    ctx->pc = 0x22242cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48080);
    // 0x222430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x222430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x222434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22243c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22243cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222440: 0x3e00008  jr          $ra
    ctx->pc = 0x222440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222440u;
            // 0x222444: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222448u;
}
