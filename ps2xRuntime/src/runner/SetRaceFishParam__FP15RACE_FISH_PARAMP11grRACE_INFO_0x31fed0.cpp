#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRaceFishParam__FP15RACE_FISH_PARAMP11grRACE_INFO
// Address: 0x31fed0 - 0x320388
void SetRaceFishParam__FP15RACE_FISH_PARAMP11grRACE_INFO_0x31fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRaceFishParam__FP15RACE_FISH_PARAMP11grRACE_INFO_0x31fed0");
#endif

    switch (ctx->pc) {
        case 0x31ff50u: goto label_31ff50;
        case 0x3200f0u: goto label_3200f0;
        case 0x320170u: goto label_320170;
        case 0x320180u: goto label_320180;
        case 0x320190u: goto label_320190;
        case 0x3201c4u: goto label_3201c4;
        case 0x3201d4u: goto label_3201d4;
        case 0x320228u: goto label_320228;
        case 0x320230u: goto label_320230;
        case 0x320240u: goto label_320240;
        case 0x320288u: goto label_320288;
        case 0x3202a0u: goto label_3202a0;
        case 0x320310u: goto label_320310;
        default: break;
    }

    ctx->pc = 0x31fed0u;

    // 0x31fed0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x31fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x31fed4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x31fed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x31fed8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x31fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x31fedc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x31fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x31fee0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x31fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x31fee4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31fee4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fee8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x31fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x31feec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x31feecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fef0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31fef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31fef4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31fef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31fef8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31fefc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31fefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31ff00: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x31ff00u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31ff04: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x31ff04u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31ff08: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x31ff08u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31ff0c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x31ff0cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x31ff10: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x31ff10u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31ff14: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x31ff14u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31ff18: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x31ff18u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31ff1c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x31ff1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x31ff20: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x31ff20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31ff24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x31ff24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31ff28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31ff28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31ff2c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x31ff2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31ff30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x31ff30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31ff34: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x31ff34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31ff38: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x31FF38u;
    {
        const bool branch_taken_0x31ff38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FF38u;
            // 0x31ff3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff38) {
            ctx->pc = 0x320134u;
            goto label_320134;
        }
    }
    ctx->pc = 0x31FF40u;
    // 0x31ff40: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x31ff40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31ff44: 0x14200067  bnez        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x31FF44u;
    {
        const bool branch_taken_0x31ff44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FF44u;
            // 0x31ff48: 0x24e5fff8  addiu       $a1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff44) {
            ctx->pc = 0x3200E4u;
            goto label_3200e4;
        }
    }
    ctx->pc = 0x31FF4Cu;
    // 0x31ff4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ff4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ff50:
    // 0x31ff50: 0x2a64021  addu        $t0, $s5, $a2
    ctx->pc = 0x31ff50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x31ff54: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x31ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31ff58: 0xc5020034  lwc1        $f2, 0x34($t0)
    ctx->pc = 0x31ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ff5c: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x31ff5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31ff60: 0xc5010038  lwc1        $f1, 0x38($t0)
    ctx->pc = 0x31ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ff64: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x31ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x31ff68: 0xc500003c  lwc1        $f0, 0x3C($t0)
    ctx->pc = 0x31ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ff6c: 0xc51d0040  lwc1        $f29, 0x40($t0)
    ctx->pc = 0x31ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x31ff70: 0xc51c0074  lwc1        $f28, 0x74($t0)
    ctx->pc = 0x31ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x31ff74: 0xc51b0078  lwc1        $f27, 0x78($t0)
    ctx->pc = 0x31ff74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x31ff78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31ff78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31ff7c: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x31ff7cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x31ff80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31ff80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31ff84: 0x468007a0  cvt.s.w     $f30, $f0
    ctx->pc = 0x31ff84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[30] = FPU_CVT_S_W(tmp); }
    // 0x31ff88: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x31ff88u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x31ff8c: 0xc51a007c  lwc1        $f26, 0x7C($t0)
    ctx->pc = 0x31ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x31ff90: 0xc5190080  lwc1        $f25, 0x80($t0)
    ctx->pc = 0x31ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x31ff94: 0xc51800b4  lwc1        $f24, 0xB4($t0)
    ctx->pc = 0x31ff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x31ff98: 0x4680ef60  cvt.s.w     $f29, $f29
    ctx->pc = 0x31ff98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[29], sizeof(tmp)); ctx->f[29] = FPU_CVT_S_W(tmp); }
    // 0x31ff9c: 0x461ea500  add.s       $f20, $f20, $f30
    ctx->pc = 0x31ff9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[30]);
    // 0x31ffa0: 0xc51700b8  lwc1        $f23, 0xB8($t0)
    ctx->pc = 0x31ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x31ffa4: 0xc51600bc  lwc1        $f22, 0xBC($t0)
    ctx->pc = 0x31ffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31ffa8: 0xc51500c0  lwc1        $f21, 0xC0($t0)
    ctx->pc = 0x31ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31ffac: 0xc51300f4  lwc1        $f19, 0xF4($t0)
    ctx->pc = 0x31ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x31ffb0: 0x4680e720  cvt.s.w     $f28, $f28
    ctx->pc = 0x31ffb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[28], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x31ffb4: 0x461da500  add.s       $f20, $f20, $f29
    ctx->pc = 0x31ffb4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[29]);
    // 0x31ffb8: 0xc51200f8  lwc1        $f18, 0xF8($t0)
    ctx->pc = 0x31ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x31ffbc: 0xc51100fc  lwc1        $f17, 0xFC($t0)
    ctx->pc = 0x31ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x31ffc0: 0xc5100100  lwc1        $f16, 0x100($t0)
    ctx->pc = 0x31ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x31ffc4: 0x4680dee0  cvt.s.w     $f27, $f27
    ctx->pc = 0x31ffc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[27], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
    // 0x31ffc8: 0x461ca500  add.s       $f20, $f20, $f28
    ctx->pc = 0x31ffc8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[28]);
    // 0x31ffcc: 0xc50f0134  lwc1        $f15, 0x134($t0)
    ctx->pc = 0x31ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x31ffd0: 0xc50e0138  lwc1        $f14, 0x138($t0)
    ctx->pc = 0x31ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31ffd4: 0xc50d013c  lwc1        $f13, 0x13C($t0)
    ctx->pc = 0x31ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31ffd8: 0x4680d6a0  cvt.s.w     $f26, $f26
    ctx->pc = 0x31ffd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[26], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x31ffdc: 0x461ba500  add.s       $f20, $f20, $f27
    ctx->pc = 0x31ffdcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[27]);
    // 0x31ffe0: 0xc50c0140  lwc1        $f12, 0x140($t0)
    ctx->pc = 0x31ffe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31ffe4: 0xc50b0174  lwc1        $f11, 0x174($t0)
    ctx->pc = 0x31ffe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x31ffe8: 0xc50a0178  lwc1        $f10, 0x178($t0)
    ctx->pc = 0x31ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x31ffec: 0xc509017c  lwc1        $f9, 0x17C($t0)
    ctx->pc = 0x31ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x31fff0: 0x4680ce60  cvt.s.w     $f25, $f25
    ctx->pc = 0x31fff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[25], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x31fff4: 0x461aa500  add.s       $f20, $f20, $f26
    ctx->pc = 0x31fff4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x31fff8: 0xc5080180  lwc1        $f8, 0x180($t0)
    ctx->pc = 0x31fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x31fffc: 0xc50701b4  lwc1        $f7, 0x1B4($t0)
    ctx->pc = 0x31fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x320000: 0xc50601b8  lwc1        $f6, 0x1B8($t0)
    ctx->pc = 0x320000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320004: 0x4680c620  cvt.s.w     $f24, $f24
    ctx->pc = 0x320004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[24], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x320008: 0x4619a500  add.s       $f20, $f20, $f25
    ctx->pc = 0x320008u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x32000c: 0xc50501bc  lwc1        $f5, 0x1BC($t0)
    ctx->pc = 0x32000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320010: 0xc50401c0  lwc1        $f4, 0x1C0($t0)
    ctx->pc = 0x320010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x320014: 0xc50301f4  lwc1        $f3, 0x1F4($t0)
    ctx->pc = 0x320014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320018: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x320018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x32001c: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x32001cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x320020: 0xc50201f8  lwc1        $f2, 0x1F8($t0)
    ctx->pc = 0x320020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320024: 0xc50101fc  lwc1        $f1, 0x1FC($t0)
    ctx->pc = 0x320024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320028: 0xc5000200  lwc1        $f0, 0x200($t0)
    ctx->pc = 0x320028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32002c: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x32002cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x320030: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x320030u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x320034: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x320034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x320038: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x320038u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x32003c: 0x46809ce0  cvt.s.w     $f19, $f19
    ctx->pc = 0x32003cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[19], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
    // 0x320040: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x320040u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x320044: 0x468094a0  cvt.s.w     $f18, $f18
    ctx->pc = 0x320044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[18], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
    // 0x320048: 0x4613a500  add.s       $f20, $f20, $f19
    ctx->pc = 0x320048u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[19]);
    // 0x32004c: 0x46808c60  cvt.s.w     $f17, $f17
    ctx->pc = 0x32004cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[17], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x320050: 0x4612a500  add.s       $f20, $f20, $f18
    ctx->pc = 0x320050u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x320054: 0x46808420  cvt.s.w     $f16, $f16
    ctx->pc = 0x320054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[16], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x320058: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x320058u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
    // 0x32005c: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x32005cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x320060: 0x4610a500  add.s       $f20, $f20, $f16
    ctx->pc = 0x320060u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[16]);
    // 0x320064: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x320064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x320068: 0x460fa500  add.s       $f20, $f20, $f15
    ctx->pc = 0x320068u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[15]);
    // 0x32006c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x32006cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x320070: 0x460ea500  add.s       $f20, $f20, $f14
    ctx->pc = 0x320070u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[14]);
    // 0x320074: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x320074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320078: 0x460da500  add.s       $f20, $f20, $f13
    ctx->pc = 0x320078u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
    // 0x32007c: 0x46805ae0  cvt.s.w     $f11, $f11
    ctx->pc = 0x32007cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[11], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x320080: 0x460ca500  add.s       $f20, $f20, $f12
    ctx->pc = 0x320080u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x320084: 0x468052a0  cvt.s.w     $f10, $f10
    ctx->pc = 0x320084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[10], sizeof(tmp)); ctx->f[10] = FPU_CVT_S_W(tmp); }
    // 0x320088: 0x460ba500  add.s       $f20, $f20, $f11
    ctx->pc = 0x320088u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[11]);
    // 0x32008c: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x32008cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x320090: 0x460aa500  add.s       $f20, $f20, $f10
    ctx->pc = 0x320090u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[10]);
    // 0x320094: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x320094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x320098: 0x4609a500  add.s       $f20, $f20, $f9
    ctx->pc = 0x320098u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[9]);
    // 0x32009c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x32009cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3200a0: 0x4608a500  add.s       $f20, $f20, $f8
    ctx->pc = 0x3200a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[8]);
    // 0x3200a4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3200a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3200a8: 0x4607a500  add.s       $f20, $f20, $f7
    ctx->pc = 0x3200a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[7]);
    // 0x3200ac: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3200acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3200b0: 0x4606a500  add.s       $f20, $f20, $f6
    ctx->pc = 0x3200b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[6]);
    // 0x3200b4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3200b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3200b8: 0x4605a500  add.s       $f20, $f20, $f5
    ctx->pc = 0x3200b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[5]);
    // 0x3200bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3200bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3200c0: 0x4604a500  add.s       $f20, $f20, $f4
    ctx->pc = 0x3200c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x3200c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3200c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3200c8: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x3200c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x3200cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3200ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3200d0: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x3200d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x3200d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3200d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3200d8: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x3200d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x3200dc: 0x1460ff9c  bnez        $v1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x3200DCu;
    {
        const bool branch_taken_0x3200dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3200E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3200DCu;
            // 0x3200e0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200dc) {
            ctx->pc = 0x31FF50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ff50;
        }
    }
    ctx->pc = 0x3200E4u;
label_3200e4:
    // 0x3200e4: 0x0  nop
    ctx->pc = 0x3200e4u;
    // NOP
    // 0x3200e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3200E8u;
    {
        const bool branch_taken_0x3200e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3200ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3200E8u;
            // 0x3200ec: 0x42980  sll         $a1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200e8) {
            ctx->pc = 0x320128u;
            goto label_320128;
        }
    }
    ctx->pc = 0x3200F0u;
label_3200f0:
    // 0x3200f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3200f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3200f4: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x3200f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3200f8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x3200f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3200fc: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x3200fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320100: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x320100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320104: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x320104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320108: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x320108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32010c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32010cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x320110: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x320110u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x320114: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x320114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x320118: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x320118u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x32011c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32011cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x320120: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x320120u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x320124: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x320124u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_320128:
    // 0x320128: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x320128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x32012c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x32012Cu;
    {
        const bool branch_taken_0x32012c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32012Cu;
            // 0x320130: 0x2a51821  addu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32012c) {
            ctx->pc = 0x3200F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3200f0;
        }
    }
    ctx->pc = 0x320134u;
label_320134:
    // 0x320134: 0x0  nop
    ctx->pc = 0x320134u;
    // NOP
    // 0x320138: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x32013c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x32013cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320140: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x320140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x320144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x320148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32014c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32014cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x320150: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x320150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320154: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x320154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x320158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32015c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x32015cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x320160: 0x0  nop
    ctx->pc = 0x320160u;
    // NOP
    // 0x320164: 0x0  nop
    ctx->pc = 0x320164u;
    // NOP
    // 0x320168: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x320168u;
    {
        const bool branch_taken_0x320168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320168) {
            ctx->pc = 0x320320u;
            goto label_320320;
        }
    }
    ctx->pc = 0x320170u;
label_320170:
    // 0x320170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x320170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320178: 0xc049c86  jal         func_127218
    ctx->pc = 0x320178u;
    SET_GPR_U32(ctx, 31, 0x320180u);
    ctx->pc = 0x32017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320178u;
            // 0x32017c: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320180u; }
        if (ctx->pc != 0x320180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320180u; }
        if (ctx->pc != 0x320180u) { return; }
    }
    ctx->pc = 0x320180u;
label_320180:
    // 0x320180: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x320180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x320184: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x320184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x320188: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x320188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x32018c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x32018cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_320190:
    // 0x320190: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x320190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x320194: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x320194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x320198: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x320198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32019c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32019cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3201a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3201a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3201a4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3201a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3201a8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3201A8u;
    {
        const bool branch_taken_0x3201a8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x3201ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3201A8u;
            // 0x3201ac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201a8) {
            ctx->pc = 0x320190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320190;
        }
    }
    ctx->pc = 0x3201B0u;
    // 0x3201b0: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x3201b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3201b4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3201b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3201b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3201b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3201bc: 0xc0c7cc4  jal         func_31F310
    ctx->pc = 0x3201BCu;
    SET_GPR_U32(ctx, 31, 0x3201C4u);
    ctx->pc = 0x3201C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3201BCu;
            // 0x3201c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31F310u;
    if (runtime->hasFunction(0x31F310u)) {
        auto targetFn = runtime->lookupFunction(0x31F310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3201C4u; }
        if (ctx->pc != 0x3201C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishModifyParam__FP12grFISH_PARAMPff_0x31f310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3201C4u; }
        if (ctx->pc != 0x3201C4u) { return; }
    }
    ctx->pc = 0x3201C4u;
label_3201c4:
    // 0x3201c4: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x3201c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3201c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3201c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3201cc: 0xc0c7ea4  jal         func_31FA90
    ctx->pc = 0x3201CCu;
    SET_GPR_U32(ctx, 31, 0x3201D4u);
    ctx->pc = 0x3201D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3201CCu;
            // 0x3201d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31FA90u;
    if (runtime->hasFunction(0x31FA90u)) {
        auto targetFn = runtime->lookupFunction(0x31FA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3201D4u; }
        if (ctx->pc != 0x3201D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharacterBonus__FP12grFISH_PARAMP15RACE_FISH_PARAMi_0x31fa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3201D4u; }
        if (ctx->pc != 0x3201D4u) { return; }
    }
    ctx->pc = 0x3201D4u;
label_3201d4:
    // 0x3201d4: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x3201d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3201d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3201d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3201dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3201dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3201e0: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x3201e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3201e4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3201e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x3201e8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3201e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3201ec: 0xc7a60120  lwc1        $f6, 0x120($sp)
    ctx->pc = 0x3201ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3201f0: 0x46020102  mul.s       $f4, $f0, $f2
    ctx->pc = 0x3201f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3201f4: 0x46040800  add.s       $f0, $f1, $f4
    ctx->pc = 0x3201f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3201f8: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x3201f8u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x3201fc: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x3201fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320200: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x320200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x320204: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x320204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x320208: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x320208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x32020c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x32020cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x320210: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x320210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x320214: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x320214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x320218: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x320218u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x32021c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x32021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x320220: 0xc0c7f90  jal         func_31FE40
    ctx->pc = 0x320220u;
    SET_GPR_U32(ctx, 31, 0x320228u);
    ctx->pc = 0x320224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320220u;
            // 0x320224: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31FE40u;
    if (runtime->hasFunction(0x31FE40u)) {
        auto targetFn = runtime->lookupFunction(0x31FE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320228u; }
        if (ctx->pc != 0x320228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPaseRatio__FiPf_0x31fe40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320228u; }
        if (ctx->pc != 0x320228u) { return; }
    }
    ctx->pc = 0x320228u;
label_320228:
    // 0x320228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x320228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32022c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32022cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320230:
    // 0x320230: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x320230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x320234: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x320234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320238: 0xc0c7c94  jal         func_31F250
    ctx->pc = 0x320238u;
    SET_GPR_U32(ctx, 31, 0x320240u);
    ctx->pc = 0x32023Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320238u;
            // 0x32023c: 0x46003082  mul.s       $f2, $f6, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31F250u;
    if (runtime->hasFunction(0x31F250u)) {
        auto targetFn = runtime->lookupFunction(0x31F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320240u; }
        if (ctx->pc != 0x320240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRaceDivisionLength__Fi_0x31f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320240u; }
        if (ctx->pc != 0x320240u) { return; }
    }
    ctx->pc = 0x320240u;
label_320240:
    // 0x320240: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x320240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x320244: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x320244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x320248: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x320248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32024c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x320250: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x320250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x320254: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x320254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x320258: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x320258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32025c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x32025cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x320260: 0x0  nop
    ctx->pc = 0x320260u;
    // NOP
    // 0x320264: 0x0  nop
    ctx->pc = 0x320264u;
    // NOP
    // 0x320268: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x320268u;
    {
        const bool branch_taken_0x320268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320268u;
            // 0x32026c: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x320268) {
            ctx->pc = 0x320230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320230;
        }
    }
    ctx->pc = 0x320270u;
    // 0x320270: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x320270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320278: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x320278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x32027c: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x32027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320280: 0xc0c7f5c  jal         func_31FD70
    ctx->pc = 0x320280u;
    SET_GPR_U32(ctx, 31, 0x320288u);
    ctx->pc = 0x320284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320280u;
            // 0x320284: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x31FD70u;
    if (runtime->hasFunction(0x31FD70u)) {
        auto targetFn = runtime->lookupFunction(0x31FD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320288u; }
        if (ctx->pc != 0x320288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RndFishParam__FP15RACE_FISH_PARAM_0x31fd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320288u; }
        if (ctx->pc != 0x320288u) { return; }
    }
    ctx->pc = 0x320288u;
label_320288:
    // 0x320288: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x320288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x32028c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x32028cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x320290: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x320290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x320294: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x320294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320298: 0xc0c8190  jal         func_320640
    ctx->pc = 0x320298u;
    SET_GPR_U32(ctx, 31, 0x3202A0u);
    ctx->pc = 0x32029Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320298u;
            // 0x32029c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3202A0u; }
        if (ctx->pc != 0x3202A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3202A0u; }
        if (ctx->pc != 0x3202A0u) { return; }
    }
    ctx->pc = 0x3202A0u;
label_3202a0:
    // 0x3202a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3202a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3202a4: 0x0  nop
    ctx->pc = 0x3202a4u;
    // NOP
    // 0x3202a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3202a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3202ac: 0x0  nop
    ctx->pc = 0x3202acu;
    // NOP
    // 0x3202b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3202B0u;
    {
        const bool branch_taken_0x3202b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3202B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3202B0u;
            // 0x3202b4: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202b0) {
            ctx->pc = 0x3202BCu;
            goto label_3202bc;
        }
    }
    ctx->pc = 0x3202B8u;
    // 0x3202b8: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x3202b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_3202bc:
    // 0x3202bc: 0x0  nop
    ctx->pc = 0x3202bcu;
    // NOP
    // 0x3202c0: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3202c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3202c4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x3202c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x3202c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3202c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3202cc: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x3202ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x3202d0: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x3202d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x3202d4: 0x8ee4003c  lw          $a0, 0x3C($s7)
    ctx->pc = 0x3202d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 60)));
    // 0x3202d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3202d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202dc: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x3202dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x3202e0: 0xa203005c  sb          $v1, 0x5C($s0)
    ctx->pc = 0x3202e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x3202e4: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3202e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3202e8: 0x8ea3018c  lw          $v1, 0x18C($s5)
    ctx->pc = 0x3202e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 396)));
    // 0x3202ec: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x3202ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x3202f0: 0x8c420190  lw          $v0, 0x190($v0)
    ctx->pc = 0x3202f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x3202f4: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x3202f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x3202f8: 0x8ea3018c  lw          $v1, 0x18C($s5)
    ctx->pc = 0x3202f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 396)));
    // 0x3202fc: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x3202fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x320300: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x320300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x320304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320308: 0xc049c86  jal         func_127218
    ctx->pc = 0x320308u;
    SET_GPR_U32(ctx, 31, 0x320310u);
    ctx->pc = 0x32030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320308u;
            // 0x32030c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320310u; }
        if (ctx->pc != 0x320310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320310u; }
        if (ctx->pc != 0x320310u) { return; }
    }
    ctx->pc = 0x320310u;
label_320310:
    // 0x320310: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x320310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x320314: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x320314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x320318: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x320318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x32031c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32031cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_320320:
    // 0x320320: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x320320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x320324: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x320324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x320328: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x320328u;
    {
        const bool branch_taken_0x320328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320328u;
            // 0x32032c: 0x2d18021  addu        $s0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320328) {
            ctx->pc = 0x320170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320170;
        }
    }
    ctx->pc = 0x320330u;
    // 0x320330: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x320330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x320334: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x320334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x320338: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x320338u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32033c: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x32033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x320340: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x320340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x320344: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x320344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x320348: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x320348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32034c: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x32034cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x320350: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x320350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x320354: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x320354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x320358: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x320358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32035c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x32035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x320360: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x320360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x320364: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x320364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x320368: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x320368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32036c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x32036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x320370: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x320370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320374: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x320374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x320378: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x320378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x32037c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x32037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x320380: 0x3e00008  jr          $ra
    ctx->pc = 0x320380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320380u;
            // 0x320384: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x320388u;
}
