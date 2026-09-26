#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CEffectCtrlFv
// Address: 0x180e60 - 0x18110c
void Initialize__11CEffectCtrlFv_0x180e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CEffectCtrlFv_0x180e60");
#endif

    switch (ctx->pc) {
        case 0x1810b4u: goto label_1810b4;
        default: break;
    }

    ctx->pc = 0x180e60u;

    // 0x180e60: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x180e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x180e64: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x180e64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x180e68: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x180e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x180e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180e70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x180e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x180e74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180e78: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x180e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x180e7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e80: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x180e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x180e84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x180e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e88: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x180e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x180e8c: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x180e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x180e90: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x180e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x180e94: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x180e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x180e98: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x180e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x180e9c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x180e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x180ea0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x180ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x180ea4: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x180ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x180ea8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x180ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x180eac: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x180eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x180eb0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x180eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x180eb4: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x180eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x180eb8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x180eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x180ebc: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x180ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x180ec0: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x180ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x180ec4: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x180ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x180ec8: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x180ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x180ecc: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x180eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x180ed0: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x180ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x180ed4: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x180ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x180ed8: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x180ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x180edc: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x180edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x180ee0: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x180ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x180ee4: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x180ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x180ee8: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x180ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x180eec: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x180eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x180ef0: 0xac86007c  sw          $a2, 0x7C($a0)
    ctx->pc = 0x180ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
    // 0x180ef4: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x180ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x180ef8: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x180ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x180efc: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x180efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x180f00: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x180f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x180f04: 0xac86009c  sw          $a2, 0x9C($a0)
    ctx->pc = 0x180f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 6));
    // 0x180f08: 0xac8500a0  sw          $a1, 0xA0($a0)
    ctx->pc = 0x180f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 5));
    // 0x180f0c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x180f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x180f10: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x180f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x180f14: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x180f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x180f18: 0xac8600bc  sw          $a2, 0xBC($a0)
    ctx->pc = 0x180f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 6));
    // 0x180f1c: 0xac8600d0  sw          $a2, 0xD0($a0)
    ctx->pc = 0x180f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 6));
    // 0x180f20: 0xac8600d4  sw          $a2, 0xD4($a0)
    ctx->pc = 0x180f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 6));
    // 0x180f24: 0xac8600d8  sw          $a2, 0xD8($a0)
    ctx->pc = 0x180f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 6));
    // 0x180f28: 0xac8600dc  sw          $a2, 0xDC($a0)
    ctx->pc = 0x180f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 6));
    // 0x180f2c: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x180f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x180f30: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x180f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x180f34: 0xac800124  sw          $zero, 0x124($a0)
    ctx->pc = 0x180f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
    // 0x180f38: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x180f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
    // 0x180f3c: 0xac86012c  sw          $a2, 0x12C($a0)
    ctx->pc = 0x180f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 6));
    // 0x180f40: 0xac850160  sw          $a1, 0x160($a0)
    ctx->pc = 0x180f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 5));
    // 0x180f44: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x180f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x180f48: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x180f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x180f4c: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x180f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x180f50: 0xac8600cc  sw          $a2, 0xCC($a0)
    ctx->pc = 0x180f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 6));
    // 0x180f54: 0xac8600e0  sw          $a2, 0xE0($a0)
    ctx->pc = 0x180f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 6));
    // 0x180f58: 0xac8600e4  sw          $a2, 0xE4($a0)
    ctx->pc = 0x180f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 6));
    // 0x180f5c: 0xac8600e8  sw          $a2, 0xE8($a0)
    ctx->pc = 0x180f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 6));
    // 0x180f60: 0xac8600ec  sw          $a2, 0xEC($a0)
    ctx->pc = 0x180f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 6));
    // 0x180f64: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x180f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x180f68: 0xac800130  sw          $zero, 0x130($a0)
    ctx->pc = 0x180f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 0));
    // 0x180f6c: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x180f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x180f70: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x180f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
    // 0x180f74: 0xac86013c  sw          $a2, 0x13C($a0)
    ctx->pc = 0x180f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 6));
    // 0x180f78: 0xac850164  sw          $a1, 0x164($a0)
    ctx->pc = 0x180f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 5));
    // 0x180f7c: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x180f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x180f80: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x180f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x180f84: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x180f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x180f88: 0xac8600fc  sw          $a2, 0xFC($a0)
    ctx->pc = 0x180f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 6));
    // 0x180f8c: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x180f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x180f90: 0xac800140  sw          $zero, 0x140($a0)
    ctx->pc = 0x180f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
    // 0x180f94: 0xac800144  sw          $zero, 0x144($a0)
    ctx->pc = 0x180f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
    // 0x180f98: 0xac800148  sw          $zero, 0x148($a0)
    ctx->pc = 0x180f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 0));
    // 0x180f9c: 0xac86014c  sw          $a2, 0x14C($a0)
    ctx->pc = 0x180f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 6));
    // 0x180fa0: 0xac850168  sw          $a1, 0x168($a0)
    ctx->pc = 0x180fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 5));
    // 0x180fa4: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x180fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x180fa8: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x180fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
    // 0x180fac: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x180facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
    // 0x180fb0: 0xac86010c  sw          $a2, 0x10C($a0)
    ctx->pc = 0x180fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 6));
    // 0x180fb4: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x180fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
    // 0x180fb8: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x180fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x180fbc: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x180fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x180fc0: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x180fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x180fc4: 0xac86015c  sw          $a2, 0x15C($a0)
    ctx->pc = 0x180fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 6));
    // 0x180fc8: 0xac85016c  sw          $a1, 0x16C($a0)
    ctx->pc = 0x180fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 5));
    // 0x180fcc: 0xac800170  sw          $zero, 0x170($a0)
    ctx->pc = 0x180fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 0));
    // 0x180fd0: 0xac800174  sw          $zero, 0x174($a0)
    ctx->pc = 0x180fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 0));
    // 0x180fd4: 0xac800178  sw          $zero, 0x178($a0)
    ctx->pc = 0x180fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 0));
    // 0x180fd8: 0xac860180  sw          $a2, 0x180($a0)
    ctx->pc = 0x180fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 6));
    // 0x180fdc: 0xac860184  sw          $a2, 0x184($a0)
    ctx->pc = 0x180fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 6));
    // 0x180fe0: 0xac860188  sw          $a2, 0x188($a0)
    ctx->pc = 0x180fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 6));
    // 0x180fe4: 0xac86018c  sw          $a2, 0x18C($a0)
    ctx->pc = 0x180fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 6));
    // 0x180fe8: 0xac8001c0  sw          $zero, 0x1C0($a0)
    ctx->pc = 0x180fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    // 0x180fec: 0xac8001d0  sw          $zero, 0x1D0($a0)
    ctx->pc = 0x180fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 0));
    // 0x180ff0: 0xac8001d4  sw          $zero, 0x1D4($a0)
    ctx->pc = 0x180ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 0));
    // 0x180ff4: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x180ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x180ff8: 0xac8601dc  sw          $a2, 0x1DC($a0)
    ctx->pc = 0x180ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 6));
    // 0x180ffc: 0xac850210  sw          $a1, 0x210($a0)
    ctx->pc = 0x180ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 5));
    // 0x181000: 0xac800190  sw          $zero, 0x190($a0)
    ctx->pc = 0x181000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 0));
    // 0x181004: 0xac800194  sw          $zero, 0x194($a0)
    ctx->pc = 0x181004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 0));
    // 0x181008: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x181008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
    // 0x18100c: 0xac86019c  sw          $a2, 0x19C($a0)
    ctx->pc = 0x18100cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 6));
    // 0x181010: 0xac8001c4  sw          $zero, 0x1C4($a0)
    ctx->pc = 0x181010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 0));
    // 0x181014: 0xac8001e0  sw          $zero, 0x1E0($a0)
    ctx->pc = 0x181014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 0));
    // 0x181018: 0xac8001e4  sw          $zero, 0x1E4($a0)
    ctx->pc = 0x181018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 0));
    // 0x18101c: 0xac8001e8  sw          $zero, 0x1E8($a0)
    ctx->pc = 0x18101cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 488), GPR_U32(ctx, 0));
    // 0x181020: 0xac8601ec  sw          $a2, 0x1EC($a0)
    ctx->pc = 0x181020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 492), GPR_U32(ctx, 6));
    // 0x181024: 0xac850214  sw          $a1, 0x214($a0)
    ctx->pc = 0x181024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 5));
    // 0x181028: 0xac8001a0  sw          $zero, 0x1A0($a0)
    ctx->pc = 0x181028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 0));
    // 0x18102c: 0xac8001a4  sw          $zero, 0x1A4($a0)
    ctx->pc = 0x18102cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 0));
    // 0x181030: 0xac8001a8  sw          $zero, 0x1A8($a0)
    ctx->pc = 0x181030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 0));
    // 0x181034: 0xac8601ac  sw          $a2, 0x1AC($a0)
    ctx->pc = 0x181034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 6));
    // 0x181038: 0xac8001c8  sw          $zero, 0x1C8($a0)
    ctx->pc = 0x181038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 0));
    // 0x18103c: 0xac8001f0  sw          $zero, 0x1F0($a0)
    ctx->pc = 0x18103cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 0));
    // 0x181040: 0xac8001f4  sw          $zero, 0x1F4($a0)
    ctx->pc = 0x181040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 500), GPR_U32(ctx, 0));
    // 0x181044: 0xac8001f8  sw          $zero, 0x1F8($a0)
    ctx->pc = 0x181044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 504), GPR_U32(ctx, 0));
    // 0x181048: 0xac8601fc  sw          $a2, 0x1FC($a0)
    ctx->pc = 0x181048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 6));
    // 0x18104c: 0xac850218  sw          $a1, 0x218($a0)
    ctx->pc = 0x18104cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 5));
    // 0x181050: 0xac8001b0  sw          $zero, 0x1B0($a0)
    ctx->pc = 0x181050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
    // 0x181054: 0xac8001b4  sw          $zero, 0x1B4($a0)
    ctx->pc = 0x181054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 0));
    // 0x181058: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x181058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x18105c: 0xac8601bc  sw          $a2, 0x1BC($a0)
    ctx->pc = 0x18105cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 6));
    // 0x181060: 0xac8001cc  sw          $zero, 0x1CC($a0)
    ctx->pc = 0x181060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 0));
    // 0x181064: 0xac800200  sw          $zero, 0x200($a0)
    ctx->pc = 0x181064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x181068: 0xac800204  sw          $zero, 0x204($a0)
    ctx->pc = 0x181068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 0));
    // 0x18106c: 0xac800208  sw          $zero, 0x208($a0)
    ctx->pc = 0x18106cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 0));
    // 0x181070: 0xac86020c  sw          $a2, 0x20C($a0)
    ctx->pc = 0x181070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 6));
    // 0x181074: 0xac85021c  sw          $a1, 0x21C($a0)
    ctx->pc = 0x181074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 5));
    // 0x181078: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x181078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
    // 0x18107c: 0xac850220  sw          $a1, 0x220($a0)
    ctx->pc = 0x18107cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 5));
    // 0x181080: 0xac860228  sw          $a2, 0x228($a0)
    ctx->pc = 0x181080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 6));
    // 0x181084: 0xac800234  sw          $zero, 0x234($a0)
    ctx->pc = 0x181084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
    // 0x181088: 0xac800240  sw          $zero, 0x240($a0)
    ctx->pc = 0x181088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 0));
    // 0x18108c: 0xac85024c  sw          $a1, 0x24C($a0)
    ctx->pc = 0x18108cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 5));
    // 0x181090: 0xac80022c  sw          $zero, 0x22C($a0)
    ctx->pc = 0x181090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 0));
    // 0x181094: 0xac800230  sw          $zero, 0x230($a0)
    ctx->pc = 0x181094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
    // 0x181098: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x181098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x18109c: 0xac80023c  sw          $zero, 0x23C($a0)
    ctx->pc = 0x18109cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 0));
    // 0x1810a0: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x1810a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
    // 0x1810a4: 0xac800248  sw          $zero, 0x248($a0)
    ctx->pc = 0x1810a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 0));
    // 0x1810a8: 0xac850250  sw          $a1, 0x250($a0)
    ctx->pc = 0x1810a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 5));
    // 0x1810ac: 0xac850254  sw          $a1, 0x254($a0)
    ctx->pc = 0x1810acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 5));
    // 0x1810b0: 0xac800258  sw          $zero, 0x258($a0)
    ctx->pc = 0x1810b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 0));
label_1810b4:
    // 0x1810b4: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x1810b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1810b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1810b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1810bc: 0xaca0025c  sw          $zero, 0x25C($a1)
    ctx->pc = 0x1810bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 604), GPR_U32(ctx, 0));
    // 0x1810c0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1810c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1810c4: 0xaca00260  sw          $zero, 0x260($a1)
    ctx->pc = 0x1810c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 608), GPR_U32(ctx, 0));
    // 0x1810c8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1810c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1810cc: 0xaca00264  sw          $zero, 0x264($a1)
    ctx->pc = 0x1810ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 0));
    // 0x1810d0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1810D0u;
    {
        const bool branch_taken_0x1810d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1810D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1810D0u;
            // 0x1810d4: 0xaca00268  sw          $zero, 0x268($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810d0) {
            ctx->pc = 0x1810B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1810b4;
        }
    }
    ctx->pc = 0x1810D8u;
    // 0x1810d8: 0xac8002e0  sw          $zero, 0x2E0($a0)
    ctx->pc = 0x1810d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 0));
    // 0x1810dc: 0x3c03411c  lui         $v1, 0x411C
    ctx->pc = 0x1810dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16668 << 16));
    // 0x1810e0: 0xac8002dc  sw          $zero, 0x2DC($a0)
    ctx->pc = 0x1810e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 0));
    // 0x1810e4: 0x3465e80a  ori         $a1, $v1, 0xE80A
    ctx->pc = 0x1810e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59402);
    // 0x1810e8: 0xac8002e4  sw          $zero, 0x2E4($a0)
    ctx->pc = 0x1810e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 0));
    // 0x1810ec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1810f0: 0xac8002f0  sw          $zero, 0x2F0($a0)
    ctx->pc = 0x1810f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 0));
    // 0x1810f4: 0xac8002f4  sw          $zero, 0x2F4($a0)
    ctx->pc = 0x1810f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 756), GPR_U32(ctx, 0));
    // 0x1810f8: 0xac8002f8  sw          $zero, 0x2F8($a0)
    ctx->pc = 0x1810f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 760), GPR_U32(ctx, 0));
    // 0x1810fc: 0xac8002fc  sw          $zero, 0x2FC($a0)
    ctx->pc = 0x1810fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 764), GPR_U32(ctx, 0));
    // 0x181100: 0xac850300  sw          $a1, 0x300($a0)
    ctx->pc = 0x181100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 5));
    // 0x181104: 0x3e00008  jr          $ra
    ctx->pc = 0x181104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181104u;
            // 0x181108: 0xac830304  sw          $v1, 0x304($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18110Cu;
}
