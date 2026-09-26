#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __EFFECT_END__FP9SPI_STACKi
// Address: 0x181530 - 0x181b24
void ps2___EFFECT_END__FP9SPI_STACKi_0x181530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___EFFECT_END__FP9SPI_STACKi_0x181530");
#endif

    switch (ctx->pc) {
        case 0x181a54u: goto label_181a54;
        case 0x181ad4u: goto label_181ad4;
        case 0x181ae0u: goto label_181ae0;
        case 0x181aecu: goto label_181aec;
        default: break;
    }

    ctx->pc = 0x181530u;

    // 0x181530: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x181530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x181534: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x181534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x181538: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x181538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18153c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x181540: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x181540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x181544: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x181548: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x181548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18154c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x181550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x181554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18155c: 0x8f828a60  lw          $v0, -0x75A0($gp)
    ctx->pc = 0x18155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x181560: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x181560u;
    {
        const bool branch_taken_0x181560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181560) {
            ctx->pc = 0x181AE0u;
            goto label_181ae0;
        }
    }
    ctx->pc = 0x181568u;
    // 0x181568: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18156c: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x181570: 0x27b40110  addiu       $s4, $sp, 0x110
    ctx->pc = 0x181570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x181574: 0x27b30130  addiu       $s3, $sp, 0x130
    ctx->pc = 0x181574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x181578: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x18157c: 0x27b10160  addiu       $s1, $sp, 0x160
    ctx->pc = 0x18157cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x181580: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x181580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x181584: 0x27b90180  addiu       $t9, $sp, 0x180
    ctx->pc = 0x181584u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x181588: 0x27b80190  addiu       $t8, $sp, 0x190
    ctx->pc = 0x181588u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x18158c: 0x27af01a0  addiu       $t7, $sp, 0x1A0
    ctx->pc = 0x18158cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x181590: 0x27ae01c0  addiu       $t6, $sp, 0x1C0
    ctx->pc = 0x181590u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x181594: 0x27ad01d0  addiu       $t5, $sp, 0x1D0
    ctx->pc = 0x181594u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x181598: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x181598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18159c: 0x27ac01e0  addiu       $t4, $sp, 0x1E0
    ctx->pc = 0x18159cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1815a0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1815a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1815a4: 0x27ab01f0  addiu       $t3, $sp, 0x1F0
    ctx->pc = 0x1815a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1815a8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1815a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1815ac: 0x27aa0220  addiu       $t2, $sp, 0x220
    ctx->pc = 0x1815acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1815b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1815b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815b4: 0x27a90230  addiu       $t1, $sp, 0x230
    ctx->pc = 0x1815b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1815b8: 0x27a80240  addiu       $t0, $sp, 0x240
    ctx->pc = 0x1815b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1815bc: 0x27a70250  addiu       $a3, $sp, 0x250
    ctx->pc = 0x1815bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1815c0: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x1815c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1815c4: 0x27b60280  addiu       $s6, $sp, 0x280
    ctx->pc = 0x1815c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1815c8: 0x27b70290  addiu       $s7, $sp, 0x290
    ctx->pc = 0x1815c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1815cc: 0x27be02a0  addiu       $fp, $sp, 0x2A0
    ctx->pc = 0x1815ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1815d0: 0x2445025c  addiu       $a1, $v0, 0x25C
    ctx->pc = 0x1815d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 604));
    // 0x1815d4: 0x27a402fc  addiu       $a0, $sp, 0x2FC
    ctx->pc = 0x1815d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
    // 0x1815d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1815d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1815dc: 0xe6a30000  swc1        $f3, 0x0($s5)
    ctx->pc = 0x1815dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1815e0: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x1815e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x1815e4: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x1815e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1815e8: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x1815e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1815ec: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x1815ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1815f0: 0xafb500b0  sw          $s5, 0xB0($sp)
    ctx->pc = 0x1815f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 21));
    // 0x1815f4: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1815f8: 0xafb500b4  sw          $s5, 0xB4($sp)
    ctx->pc = 0x1815f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 21));
    // 0x1815fc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1815fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181600: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x181600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x181604: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x181604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181608: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x181608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18160c: 0x8c550020  lw          $s5, 0x20($v0)
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x181610: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x181610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
    // 0x181614: 0x8c550024  lw          $s5, 0x24($v0)
    ctx->pc = 0x181614u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x181618: 0xafb500c4  sw          $s5, 0xC4($sp)
    ctx->pc = 0x181618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 21));
    // 0x18161c: 0x8c550028  lw          $s5, 0x28($v0)
    ctx->pc = 0x18161cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x181620: 0xafb500c8  sw          $s5, 0xC8($sp)
    ctx->pc = 0x181620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 21));
    // 0x181624: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x181624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181628: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x181628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x18162c: 0x8c550030  lw          $s5, 0x30($v0)
    ctx->pc = 0x18162cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x181630: 0xafb500d0  sw          $s5, 0xD0($sp)
    ctx->pc = 0x181630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 21));
    // 0x181634: 0x8c550034  lw          $s5, 0x34($v0)
    ctx->pc = 0x181634u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x181638: 0xafb500d4  sw          $s5, 0xD4($sp)
    ctx->pc = 0x181638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 21));
    // 0x18163c: 0x8c550038  lw          $s5, 0x38($v0)
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x181640: 0xafb500d8  sw          $s5, 0xD8($sp)
    ctx->pc = 0x181640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 21));
    // 0x181644: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x181644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181648: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x181648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x18164c: 0x8c550040  lw          $s5, 0x40($v0)
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x181650: 0xafb500e0  sw          $s5, 0xE0($sp)
    ctx->pc = 0x181650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 21));
    // 0x181654: 0x8c550044  lw          $s5, 0x44($v0)
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x181658: 0xafb500e4  sw          $s5, 0xE4($sp)
    ctx->pc = 0x181658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 21));
    // 0x18165c: 0x8c550048  lw          $s5, 0x48($v0)
    ctx->pc = 0x18165cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x181660: 0xafb500e8  sw          $s5, 0xE8($sp)
    ctx->pc = 0x181660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 21));
    // 0x181664: 0x8c55004c  lw          $s5, 0x4C($v0)
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x181668: 0xafb500ec  sw          $s5, 0xEC($sp)
    ctx->pc = 0x181668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 21));
    // 0x18166c: 0x8c550050  lw          $s5, 0x50($v0)
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x181670: 0xafb500f0  sw          $s5, 0xF0($sp)
    ctx->pc = 0x181670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 21));
    // 0x181674: 0x8c550054  lw          $s5, 0x54($v0)
    ctx->pc = 0x181674u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x181678: 0xafb500f4  sw          $s5, 0xF4($sp)
    ctx->pc = 0x181678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 21));
    // 0x18167c: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x18167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181680: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x181680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x181684: 0x8c55005c  lw          $s5, 0x5C($v0)
    ctx->pc = 0x181684u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x181688: 0xafb500fc  sw          $s5, 0xFC($sp)
    ctx->pc = 0x181688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 21));
    // 0x18168c: 0x8c550060  lw          $s5, 0x60($v0)
    ctx->pc = 0x18168cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x181690: 0xafb50100  sw          $s5, 0x100($sp)
    ctx->pc = 0x181690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 21));
    // 0x181694: 0x8c550064  lw          $s5, 0x64($v0)
    ctx->pc = 0x181694u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x181698: 0xafb50104  sw          $s5, 0x104($sp)
    ctx->pc = 0x181698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 21));
    // 0x18169c: 0xc4430070  lwc1        $f3, 0x70($v0)
    ctx->pc = 0x18169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1816a0: 0xc4420074  lwc1        $f2, 0x74($v0)
    ctx->pc = 0x1816a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1816a4: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x1816a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1816a8: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x1816a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1816ac: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x1816acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1816b0: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x1816b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1816b4: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x1816b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1816b8: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x1816b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x1816bc: 0x8c540080  lw          $s4, 0x80($v0)
    ctx->pc = 0x1816bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1816c0: 0xafb40120  sw          $s4, 0x120($sp)
    ctx->pc = 0x1816c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 20));
    // 0x1816c4: 0xc4430090  lwc1        $f3, 0x90($v0)
    ctx->pc = 0x1816c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1816c8: 0xc4420094  lwc1        $f2, 0x94($v0)
    ctx->pc = 0x1816c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1816cc: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1816ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1816d0: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x1816d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1816d4: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x1816d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1816d8: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x1816d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1816dc: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1816dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1816e0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1816e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1816e4: 0x8c5300a0  lw          $s3, 0xA0($v0)
    ctx->pc = 0x1816e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1816e8: 0xafb30140  sw          $s3, 0x140($sp)
    ctx->pc = 0x1816e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 19));
    // 0x1816ec: 0x8c5300a4  lw          $s3, 0xA4($v0)
    ctx->pc = 0x1816ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1816f0: 0xafb30144  sw          $s3, 0x144($sp)
    ctx->pc = 0x1816f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 19));
    // 0x1816f4: 0x8c5300a8  lw          $s3, 0xA8($v0)
    ctx->pc = 0x1816f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1816f8: 0xafb30148  sw          $s3, 0x148($sp)
    ctx->pc = 0x1816f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 19));
    // 0x1816fc: 0x8c5300ac  lw          $s3, 0xAC($v0)
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x181700: 0xafb3014c  sw          $s3, 0x14C($sp)
    ctx->pc = 0x181700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 19));
    // 0x181704: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x181704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181708: 0xc44200b4  lwc1        $f2, 0xB4($v0)
    ctx->pc = 0x181708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18170c: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x18170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181710: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x181710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181714: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x181714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x181718: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x181718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x18171c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x18171cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x181720: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x181720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x181724: 0xc44300c0  lwc1        $f3, 0xC0($v0)
    ctx->pc = 0x181724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181728: 0xc44200c4  lwc1        $f2, 0xC4($v0)
    ctx->pc = 0x181728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18172c: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x18172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181730: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x181730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181734: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x181734u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x181738: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x181738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x18173c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x18173cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x181740: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x181740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x181744: 0xc44300d0  lwc1        $f3, 0xD0($v0)
    ctx->pc = 0x181744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181748: 0xc44200d4  lwc1        $f2, 0xD4($v0)
    ctx->pc = 0x181748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18174c: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x18174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181750: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x181750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181754: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x181754u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x181758: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x181758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x18175c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x18175cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x181760: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x181760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x181764: 0xc44300e0  lwc1        $f3, 0xE0($v0)
    ctx->pc = 0x181764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181768: 0xc44200e4  lwc1        $f2, 0xE4($v0)
    ctx->pc = 0x181768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18176c: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x18176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181770: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x181770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181774: 0xe7230000  swc1        $f3, 0x0($t9)
    ctx->pc = 0x181774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x181778: 0xe7220004  swc1        $f2, 0x4($t9)
    ctx->pc = 0x181778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
    // 0x18177c: 0xe7210008  swc1        $f1, 0x8($t9)
    ctx->pc = 0x18177cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 8), bits); }
    // 0x181780: 0xe720000c  swc1        $f0, 0xC($t9)
    ctx->pc = 0x181780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 12), bits); }
    // 0x181784: 0xc44300f0  lwc1        $f3, 0xF0($v0)
    ctx->pc = 0x181784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181788: 0xc44200f4  lwc1        $f2, 0xF4($v0)
    ctx->pc = 0x181788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18178c: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x18178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181790: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x181790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181794: 0xe7030000  swc1        $f3, 0x0($t8)
    ctx->pc = 0x181794u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x181798: 0xe7020004  swc1        $f2, 0x4($t8)
    ctx->pc = 0x181798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    // 0x18179c: 0xe7010008  swc1        $f1, 0x8($t8)
    ctx->pc = 0x18179cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
    // 0x1817a0: 0xe700000c  swc1        $f0, 0xC($t8)
    ctx->pc = 0x1817a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 12), bits); }
    // 0x1817a4: 0xc4430100  lwc1        $f3, 0x100($v0)
    ctx->pc = 0x1817a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1817a8: 0xc4420104  lwc1        $f2, 0x104($v0)
    ctx->pc = 0x1817a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1817ac: 0xc4410108  lwc1        $f1, 0x108($v0)
    ctx->pc = 0x1817acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1817b0: 0xc440010c  lwc1        $f0, 0x10C($v0)
    ctx->pc = 0x1817b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1817b4: 0xe5e30000  swc1        $f3, 0x0($t7)
    ctx->pc = 0x1817b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x1817b8: 0xe5e20004  swc1        $f2, 0x4($t7)
    ctx->pc = 0x1817b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x1817bc: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x1817bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x1817c0: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x1817c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x1817c4: 0x8c4f0110  lw          $t7, 0x110($v0)
    ctx->pc = 0x1817c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1817c8: 0xafaf01b0  sw          $t7, 0x1B0($sp)
    ctx->pc = 0x1817c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 15));
    // 0x1817cc: 0x8c4f0114  lw          $t7, 0x114($v0)
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x1817d0: 0xafaf01b4  sw          $t7, 0x1B4($sp)
    ctx->pc = 0x1817d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 15));
    // 0x1817d4: 0x8c4f0118  lw          $t7, 0x118($v0)
    ctx->pc = 0x1817d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x1817d8: 0xafaf01b8  sw          $t7, 0x1B8($sp)
    ctx->pc = 0x1817d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 15));
    // 0x1817dc: 0x8c4f011c  lw          $t7, 0x11C($v0)
    ctx->pc = 0x1817dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x1817e0: 0xafaf01bc  sw          $t7, 0x1BC($sp)
    ctx->pc = 0x1817e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 15));
    // 0x1817e4: 0xc4430120  lwc1        $f3, 0x120($v0)
    ctx->pc = 0x1817e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1817e8: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x1817e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1817ec: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1817ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1817f0: 0xc440012c  lwc1        $f0, 0x12C($v0)
    ctx->pc = 0x1817f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1817f4: 0xe5c30000  swc1        $f3, 0x0($t6)
    ctx->pc = 0x1817f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x1817f8: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x1817f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x1817fc: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x1817fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x181800: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x181800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x181804: 0xc4430130  lwc1        $f3, 0x130($v0)
    ctx->pc = 0x181804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181808: 0xc4420134  lwc1        $f2, 0x134($v0)
    ctx->pc = 0x181808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18180c: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x18180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181810: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x181810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181814: 0xe5a30000  swc1        $f3, 0x0($t5)
    ctx->pc = 0x181814u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x181818: 0xe5a20004  swc1        $f2, 0x4($t5)
    ctx->pc = 0x181818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x18181c: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x18181cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x181820: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x181820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x181824: 0xc4430140  lwc1        $f3, 0x140($v0)
    ctx->pc = 0x181824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181828: 0xc4420144  lwc1        $f2, 0x144($v0)
    ctx->pc = 0x181828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18182c: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x18182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181830: 0xc440014c  lwc1        $f0, 0x14C($v0)
    ctx->pc = 0x181830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181834: 0xe5830000  swc1        $f3, 0x0($t4)
    ctx->pc = 0x181834u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x181838: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x181838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x18183c: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x18183cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x181840: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x181840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x181844: 0xc4430150  lwc1        $f3, 0x150($v0)
    ctx->pc = 0x181844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181848: 0xc4420154  lwc1        $f2, 0x154($v0)
    ctx->pc = 0x181848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18184c: 0xc4410158  lwc1        $f1, 0x158($v0)
    ctx->pc = 0x18184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181850: 0xc440015c  lwc1        $f0, 0x15C($v0)
    ctx->pc = 0x181850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181854: 0xe5630000  swc1        $f3, 0x0($t3)
    ctx->pc = 0x181854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x181858: 0xe5620004  swc1        $f2, 0x4($t3)
    ctx->pc = 0x181858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x18185c: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x18185cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x181860: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x181860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x181864: 0x8c4b0160  lw          $t3, 0x160($v0)
    ctx->pc = 0x181864u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x181868: 0xafab0200  sw          $t3, 0x200($sp)
    ctx->pc = 0x181868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 11));
    // 0x18186c: 0x8c4b0164  lw          $t3, 0x164($v0)
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x181870: 0xafab0204  sw          $t3, 0x204($sp)
    ctx->pc = 0x181870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 11));
    // 0x181874: 0x8c4b0168  lw          $t3, 0x168($v0)
    ctx->pc = 0x181874u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x181878: 0xafab0208  sw          $t3, 0x208($sp)
    ctx->pc = 0x181878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 11));
    // 0x18187c: 0x8c4b016c  lw          $t3, 0x16C($v0)
    ctx->pc = 0x18187cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x181880: 0xafab020c  sw          $t3, 0x20C($sp)
    ctx->pc = 0x181880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 11));
    // 0x181884: 0x8c4b0170  lw          $t3, 0x170($v0)
    ctx->pc = 0x181884u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x181888: 0xafab0210  sw          $t3, 0x210($sp)
    ctx->pc = 0x181888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 11));
    // 0x18188c: 0x8c4b0174  lw          $t3, 0x174($v0)
    ctx->pc = 0x18188cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x181890: 0xafab0214  sw          $t3, 0x214($sp)
    ctx->pc = 0x181890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 11));
    // 0x181894: 0x8c4b0178  lw          $t3, 0x178($v0)
    ctx->pc = 0x181894u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x181898: 0xafab0218  sw          $t3, 0x218($sp)
    ctx->pc = 0x181898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 11));
    // 0x18189c: 0xc4430180  lwc1        $f3, 0x180($v0)
    ctx->pc = 0x18189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1818a0: 0xc4420184  lwc1        $f2, 0x184($v0)
    ctx->pc = 0x1818a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1818a4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1818a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1818a8: 0xc440018c  lwc1        $f0, 0x18C($v0)
    ctx->pc = 0x1818a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1818ac: 0xe5430000  swc1        $f3, 0x0($t2)
    ctx->pc = 0x1818acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1818b0: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x1818b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x1818b4: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x1818b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x1818b8: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x1818b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x1818bc: 0xc4430190  lwc1        $f3, 0x190($v0)
    ctx->pc = 0x1818bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1818c0: 0xc4420194  lwc1        $f2, 0x194($v0)
    ctx->pc = 0x1818c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1818c4: 0xc4410198  lwc1        $f1, 0x198($v0)
    ctx->pc = 0x1818c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1818c8: 0xc440019c  lwc1        $f0, 0x19C($v0)
    ctx->pc = 0x1818c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1818cc: 0xe5230000  swc1        $f3, 0x0($t1)
    ctx->pc = 0x1818ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1818d0: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x1818d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1818d4: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x1818d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1818d8: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1818d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x1818dc: 0xc44301a0  lwc1        $f3, 0x1A0($v0)
    ctx->pc = 0x1818dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1818e0: 0xc44201a4  lwc1        $f2, 0x1A4($v0)
    ctx->pc = 0x1818e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1818e4: 0xc44101a8  lwc1        $f1, 0x1A8($v0)
    ctx->pc = 0x1818e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1818e8: 0xc44001ac  lwc1        $f0, 0x1AC($v0)
    ctx->pc = 0x1818e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1818ec: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x1818ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1818f0: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x1818f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1818f4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x1818f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1818f8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1818f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1818fc: 0xc44301b0  lwc1        $f3, 0x1B0($v0)
    ctx->pc = 0x1818fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181900: 0xc44201b4  lwc1        $f2, 0x1B4($v0)
    ctx->pc = 0x181900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181904: 0xc44101b8  lwc1        $f1, 0x1B8($v0)
    ctx->pc = 0x181904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181908: 0xc44001bc  lwc1        $f0, 0x1BC($v0)
    ctx->pc = 0x181908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18190c: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x18190cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x181910: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x181910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x181914: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x181914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x181918: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x181918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18191c: 0x8c4701c0  lw          $a3, 0x1C0($v0)
    ctx->pc = 0x18191cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x181920: 0xafa70260  sw          $a3, 0x260($sp)
    ctx->pc = 0x181920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 7));
    // 0x181924: 0x8c4701c4  lw          $a3, 0x1C4($v0)
    ctx->pc = 0x181924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x181928: 0xafa70264  sw          $a3, 0x264($sp)
    ctx->pc = 0x181928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 7));
    // 0x18192c: 0x8c4701c8  lw          $a3, 0x1C8($v0)
    ctx->pc = 0x18192cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
    // 0x181930: 0xafa70268  sw          $a3, 0x268($sp)
    ctx->pc = 0x181930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 7));
    // 0x181934: 0x8c4701cc  lw          $a3, 0x1CC($v0)
    ctx->pc = 0x181934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x181938: 0xafa7026c  sw          $a3, 0x26C($sp)
    ctx->pc = 0x181938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 7));
    // 0x18193c: 0xc44301d0  lwc1        $f3, 0x1D0($v0)
    ctx->pc = 0x18193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181940: 0xc44201d4  lwc1        $f2, 0x1D4($v0)
    ctx->pc = 0x181940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181944: 0xc44101d8  lwc1        $f1, 0x1D8($v0)
    ctx->pc = 0x181944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181948: 0xc44001dc  lwc1        $f0, 0x1DC($v0)
    ctx->pc = 0x181948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18194c: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x18194cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x181950: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x181950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x181954: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x181954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x181958: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x181958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x18195c: 0xc44301e0  lwc1        $f3, 0x1E0($v0)
    ctx->pc = 0x18195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181960: 0xc44201e4  lwc1        $f2, 0x1E4($v0)
    ctx->pc = 0x181960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181964: 0xc44101e8  lwc1        $f1, 0x1E8($v0)
    ctx->pc = 0x181964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181968: 0xc44001ec  lwc1        $f0, 0x1EC($v0)
    ctx->pc = 0x181968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18196c: 0xe6c30000  swc1        $f3, 0x0($s6)
    ctx->pc = 0x18196cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x181970: 0xe6c20004  swc1        $f2, 0x4($s6)
    ctx->pc = 0x181970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x181974: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x181974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x181978: 0xe6c0000c  swc1        $f0, 0xC($s6)
    ctx->pc = 0x181978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x18197c: 0xc44301f0  lwc1        $f3, 0x1F0($v0)
    ctx->pc = 0x18197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181980: 0xc44201f4  lwc1        $f2, 0x1F4($v0)
    ctx->pc = 0x181980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181984: 0xc44101f8  lwc1        $f1, 0x1F8($v0)
    ctx->pc = 0x181984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181988: 0xc44001fc  lwc1        $f0, 0x1FC($v0)
    ctx->pc = 0x181988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18198c: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x18198cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x181990: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x181990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x181994: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x181994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x181998: 0xe6e0000c  swc1        $f0, 0xC($s7)
    ctx->pc = 0x181998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x18199c: 0xc4430200  lwc1        $f3, 0x200($v0)
    ctx->pc = 0x18199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1819a0: 0xc4420204  lwc1        $f2, 0x204($v0)
    ctx->pc = 0x1819a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1819a4: 0xc4410208  lwc1        $f1, 0x208($v0)
    ctx->pc = 0x1819a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1819a8: 0xc440020c  lwc1        $f0, 0x20C($v0)
    ctx->pc = 0x1819a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1819ac: 0xe7c30000  swc1        $f3, 0x0($fp)
    ctx->pc = 0x1819acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1819b0: 0xe7c20004  swc1        $f2, 0x4($fp)
    ctx->pc = 0x1819b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x1819b4: 0xe7c10008  swc1        $f1, 0x8($fp)
    ctx->pc = 0x1819b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x1819b8: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x1819b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x1819bc: 0x8c460210  lw          $a2, 0x210($v0)
    ctx->pc = 0x1819bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x1819c0: 0xafa602b0  sw          $a2, 0x2B0($sp)
    ctx->pc = 0x1819c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 6));
    // 0x1819c4: 0x8c460214  lw          $a2, 0x214($v0)
    ctx->pc = 0x1819c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    // 0x1819c8: 0xafa602b4  sw          $a2, 0x2B4($sp)
    ctx->pc = 0x1819c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 6));
    // 0x1819cc: 0x8c460218  lw          $a2, 0x218($v0)
    ctx->pc = 0x1819ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x1819d0: 0xafa602b8  sw          $a2, 0x2B8($sp)
    ctx->pc = 0x1819d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 6));
    // 0x1819d4: 0x8c46021c  lw          $a2, 0x21C($v0)
    ctx->pc = 0x1819d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x1819d8: 0xafa602bc  sw          $a2, 0x2BC($sp)
    ctx->pc = 0x1819d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 6));
    // 0x1819dc: 0x8c460220  lw          $a2, 0x220($v0)
    ctx->pc = 0x1819dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x1819e0: 0xafa602c0  sw          $a2, 0x2C0($sp)
    ctx->pc = 0x1819e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 6));
    // 0x1819e4: 0x8c460224  lw          $a2, 0x224($v0)
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x1819e8: 0xafa602c4  sw          $a2, 0x2C4($sp)
    ctx->pc = 0x1819e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 6));
    // 0x1819ec: 0xc4400228  lwc1        $f0, 0x228($v0)
    ctx->pc = 0x1819ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1819f0: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x1819f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x1819f4: 0xc440022c  lwc1        $f0, 0x22C($v0)
    ctx->pc = 0x1819f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1819f8: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x1819f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
    // 0x1819fc: 0xc4400230  lwc1        $f0, 0x230($v0)
    ctx->pc = 0x1819fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181a00: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x181a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x181a04: 0x8c460234  lw          $a2, 0x234($v0)
    ctx->pc = 0x181a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x181a08: 0xafa602d4  sw          $a2, 0x2D4($sp)
    ctx->pc = 0x181a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 6));
    // 0x181a0c: 0x8c460238  lw          $a2, 0x238($v0)
    ctx->pc = 0x181a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
    // 0x181a10: 0xafa602d8  sw          $a2, 0x2D8($sp)
    ctx->pc = 0x181a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 6));
    // 0x181a14: 0x8c46023c  lw          $a2, 0x23C($v0)
    ctx->pc = 0x181a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x181a18: 0xafa602dc  sw          $a2, 0x2DC($sp)
    ctx->pc = 0x181a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 6));
    // 0x181a1c: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x181a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181a20: 0xe7a002e0  swc1        $f0, 0x2E0($sp)
    ctx->pc = 0x181a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x181a24: 0xc4400244  lwc1        $f0, 0x244($v0)
    ctx->pc = 0x181a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181a28: 0xe7a002e4  swc1        $f0, 0x2E4($sp)
    ctx->pc = 0x181a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
    // 0x181a2c: 0xc4400248  lwc1        $f0, 0x248($v0)
    ctx->pc = 0x181a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181a30: 0xe7a002e8  swc1        $f0, 0x2E8($sp)
    ctx->pc = 0x181a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x181a34: 0x8c46024c  lw          $a2, 0x24C($v0)
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x181a38: 0xafa602ec  sw          $a2, 0x2EC($sp)
    ctx->pc = 0x181a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 6));
    // 0x181a3c: 0x8c460250  lw          $a2, 0x250($v0)
    ctx->pc = 0x181a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x181a40: 0xafa602f0  sw          $a2, 0x2F0($sp)
    ctx->pc = 0x181a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 6));
    // 0x181a44: 0x8c460254  lw          $a2, 0x254($v0)
    ctx->pc = 0x181a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x181a48: 0xafa602f4  sw          $a2, 0x2F4($sp)
    ctx->pc = 0x181a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 6));
    // 0x181a4c: 0x8c460258  lw          $a2, 0x258($v0)
    ctx->pc = 0x181a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x181a50: 0xafa602f8  sw          $a2, 0x2F8($sp)
    ctx->pc = 0x181a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 6));
label_181a54:
    // 0x181a54: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x181a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181a58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x181a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x181a5c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x181a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x181a60: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x181a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x181a64: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x181a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x181a68: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x181a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x181a6c: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x181A6Cu;
    {
        const bool branch_taken_0x181a6c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x181A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A6Cu;
            // 0x181a70: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a6c) {
            ctx->pc = 0x181A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_181a54;
        }
    }
    ctx->pc = 0x181A74u;
    // 0x181a74: 0x8c4402dc  lw          $a0, 0x2DC($v0)
    ctx->pc = 0x181a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
    // 0x181a78: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x181a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x181a7c: 0x27a30390  addiu       $v1, $sp, 0x390
    ctx->pc = 0x181a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x181a80: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x181a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x181a84: 0x24c607b0  addiu       $a2, $a2, 0x7B0
    ctx->pc = 0x181a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1968));
    // 0x181a88: 0xafa4037c  sw          $a0, 0x37C($sp)
    ctx->pc = 0x181a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 4));
    // 0x181a8c: 0x8c4402e0  lw          $a0, 0x2E0($v0)
    ctx->pc = 0x181a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x181a90: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x181a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
    // 0x181a94: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x181a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
    // 0x181a98: 0xafa40384  sw          $a0, 0x384($sp)
    ctx->pc = 0x181a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 4));
    // 0x181a9c: 0xc44302f0  lwc1        $f3, 0x2F0($v0)
    ctx->pc = 0x181a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181aa0: 0xc44202f4  lwc1        $f2, 0x2F4($v0)
    ctx->pc = 0x181aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181aa4: 0xc44102f8  lwc1        $f1, 0x2F8($v0)
    ctx->pc = 0x181aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181aa8: 0xc44002fc  lwc1        $f0, 0x2FC($v0)
    ctx->pc = 0x181aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181aac: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x181aacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x181ab0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x181ab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x181ab4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x181ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x181ab8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x181ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x181abc: 0xc4400300  lwc1        $f0, 0x300($v0)
    ctx->pc = 0x181abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ac0: 0x8f848a58  lw          $a0, -0x75A8($gp)
    ctx->pc = 0x181ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x181ac4: 0xe7a003a0  swc1        $f0, 0x3A0($sp)
    ctx->pc = 0x181ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x181ac8: 0xc4400304  lwc1        $f0, 0x304($v0)
    ctx->pc = 0x181ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181acc: 0xc060bb4  jal         func_182ED0
    ctx->pc = 0x181ACCu;
    SET_GPR_U32(ctx, 31, 0x181AD4u);
    ctx->pc = 0x181AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181ACCu;
            // 0x181ad0: 0xe7a003a4  swc1        $f0, 0x3A4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182ED0u;
    if (runtime->hasFunction(0x182ED0u)) {
        auto targetFn = runtime->lookupFunction(0x182ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AD4u; }
        if (ctx->pc != 0x181AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterEffectCtrl__14CEffectManagerF11CEffectCtrlPc_0x182ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AD4u; }
        if (ctx->pc != 0x181AD4u) { return; }
    }
    ctx->pc = 0x181AD4u;
label_181ad4:
    // 0x181ad4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x181ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x181ad8: 0xc060058  jal         func_180160
    ctx->pc = 0x181AD8u;
    SET_GPR_U32(ctx, 31, 0x181AE0u);
    ctx->pc = 0x181ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181AD8u;
            // 0x181adc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180160u;
    if (runtime->hasFunction(0x180160u)) {
        auto targetFn = runtime->lookupFunction(0x180160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AE0u; }
        if (ctx->pc != 0x181AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___dt__11CEffectCtrlFv_0x180160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AE0u; }
        if (ctx->pc != 0x181AE0u) { return; }
    }
    ctx->pc = 0x181AE0u;
label_181ae0:
    // 0x181ae0: 0x8f848a5c  lw          $a0, -0x75A4($gp)
    ctx->pc = 0x181ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181ae4: 0xc060058  jal         func_180160
    ctx->pc = 0x181AE4u;
    SET_GPR_U32(ctx, 31, 0x181AECu);
    ctx->pc = 0x181AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181AE4u;
            // 0x181ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180160u;
    if (runtime->hasFunction(0x180160u)) {
        auto targetFn = runtime->lookupFunction(0x180160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AECu; }
        if (ctx->pc != 0x181AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___dt__11CEffectCtrlFv_0x180160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AECu; }
        if (ctx->pc != 0x181AECu) { return; }
    }
    ctx->pc = 0x181AECu;
label_181aec:
    // 0x181aec: 0xaf808a5c  sw          $zero, -0x75A4($gp)
    ctx->pc = 0x181aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937180), GPR_U32(ctx, 0));
    // 0x181af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181af4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x181af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x181af8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x181af8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x181afc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x181afcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181b00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x181b00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181b04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x181b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181b08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x181b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181b0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181b10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x181B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B1Cu;
            // 0x181b20: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181B24u;
}
