#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFishParam__FiiP10mgCTextureP13CGameDataUsed
// Address: 0x211e50 - 0x212920
void DrawFishParam__FiiP10mgCTextureP13CGameDataUsed_0x211e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFishParam__FiiP10mgCTextureP13CGameDataUsed_0x211e50");
#endif

    switch (ctx->pc) {
        case 0x211fe8u: goto label_211fe8;
        case 0x211ff8u: goto label_211ff8;
        case 0x212004u: goto label_212004;
        case 0x212010u: goto label_212010;
        case 0x212018u: goto label_212018;
        case 0x21203cu: goto label_21203c;
        case 0x212048u: goto label_212048;
        case 0x212054u: goto label_212054;
        case 0x212090u: goto label_212090;
        case 0x2120a4u: goto label_2120a4;
        case 0x2120b8u: goto label_2120b8;
        case 0x2120e0u: goto label_2120e0;
        case 0x2120f0u: goto label_2120f0;
        case 0x212158u: goto label_212158;
        case 0x21218cu: goto label_21218c;
        case 0x2121a4u: goto label_2121a4;
        case 0x2121b0u: goto label_2121b0;
        case 0x2121bcu: goto label_2121bc;
        case 0x2121d4u: goto label_2121d4;
        case 0x212218u: goto label_212218;
        case 0x21223cu: goto label_21223c;
        case 0x212250u: goto label_212250;
        case 0x21227cu: goto label_21227c;
        case 0x212294u: goto label_212294;
        case 0x2122d4u: goto label_2122d4;
        case 0x212304u: goto label_212304;
        case 0x212318u: goto label_212318;
        case 0x21232cu: goto label_21232c;
        case 0x212340u: goto label_212340;
        case 0x212360u: goto label_212360;
        case 0x212378u: goto label_212378;
        case 0x2123b8u: goto label_2123b8;
        case 0x2123dcu: goto label_2123dc;
        case 0x21241cu: goto label_21241c;
        case 0x212440u: goto label_212440;
        case 0x212468u: goto label_212468;
        case 0x2124a4u: goto label_2124a4;
        case 0x2124c0u: goto label_2124c0;
        case 0x2124e4u: goto label_2124e4;
        case 0x2124fcu: goto label_2124fc;
        case 0x212514u: goto label_212514;
        case 0x212538u: goto label_212538;
        case 0x212590u: goto label_212590;
        case 0x2125b4u: goto label_2125b4;
        case 0x2125c4u: goto label_2125c4;
        case 0x2125e8u: goto label_2125e8;
        case 0x212600u: goto label_212600;
        case 0x212648u: goto label_212648;
        case 0x21266cu: goto label_21266c;
        case 0x21268cu: goto label_21268c;
        case 0x2126ccu: goto label_2126cc;
        case 0x2126e8u: goto label_2126e8;
        case 0x212734u: goto label_212734;
        case 0x21275cu: goto label_21275c;
        case 0x2127a0u: goto label_2127a0;
        case 0x2127bcu: goto label_2127bc;
        case 0x2127d8u: goto label_2127d8;
        case 0x2127f0u: goto label_2127f0;
        case 0x212814u: goto label_212814;
        case 0x21282cu: goto label_21282c;
        case 0x212850u: goto label_212850;
        case 0x21285cu: goto label_21285c;
        case 0x212874u: goto label_212874;
        case 0x212894u: goto label_212894;
        case 0x2128a0u: goto label_2128a0;
        case 0x2128c4u: goto label_2128c4;
        case 0x2128d0u: goto label_2128d0;
        case 0x2128e4u: goto label_2128e4;
        default: break;
    }

    ctx->pc = 0x211e50u;

    // 0x211e50: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x211e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x211e54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x211e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x211e58: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x211e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x211e5c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x211e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x211e60: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x211e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x211e64: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x211e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x211e68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x211e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x211e6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x211e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x211e70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x211e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x211e74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x211e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x211e78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x211e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x211e7c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x211e7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x211e80: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x211e80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x211e84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x211e84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x211e88: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x211e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
    // 0x211e8c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x211e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x211e90: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x211e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x211e94: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x211e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x211e98: 0x10600292  beqz        $v1, . + 4 + (0x292 << 2)
    ctx->pc = 0x211E98u;
    {
        const bool branch_taken_0x211e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211E98u;
            // 0x211e9c: 0xafa600f4  sw          $a2, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e98) {
            ctx->pc = 0x2128E4u;
            goto label_2128e4;
        }
    }
    ctx->pc = 0x211EA0u;
    // 0x211ea0: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x211ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x211ea4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211EA4u;
    {
        const bool branch_taken_0x211ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211ea4) {
            ctx->pc = 0x211EB4u;
            goto label_211eb4;
        }
    }
    ctx->pc = 0x211EACu;
    // 0x211eac: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x211EACu;
    {
        const bool branch_taken_0x211eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211EACu;
            // 0x211eb0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211eac) {
            ctx->pc = 0x2128E8u;
            goto label_2128e8;
        }
    }
    ctx->pc = 0x211EB4u;
label_211eb4:
    // 0x211eb4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x211eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x211eb8: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x211eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x211ebc: 0x938d8248  lbu         $t5, -0x7DB8($gp)
    ctx->pc = 0x211ebcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935112)));
    // 0x211ec0: 0x2403014a  addiu       $v1, $zero, 0x14A
    ctx->pc = 0x211ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x211ec4: 0x938c824a  lbu         $t4, -0x7DB6($gp)
    ctx->pc = 0x211ec4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935114)));
    // 0x211ec8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x211ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x211ecc: 0x938b824c  lbu         $t3, -0x7DB4($gp)
    ctx->pc = 0x211eccu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935116)));
    // 0x211ed0: 0x24c6c4c0  addiu       $a2, $a2, -0x3B40
    ctx->pc = 0x211ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952128));
    // 0x211ed4: 0x938a8250  lbu         $t2, -0x7DB0($gp)
    ctx->pc = 0x211ed4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935120)));
    // 0x211ed8: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x211ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x211edc: 0x93898252  lbu         $t1, -0x7DAE($gp)
    ctx->pc = 0x211edcu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935122)));
    // 0x211ee0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x211ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x211ee4: 0x93888254  lbu         $t0, -0x7DAC($gp)
    ctx->pc = 0x211ee4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935124)));
    // 0x211ee8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x211ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x211eec: 0x6d2823  subu        $a1, $v1, $t5
    ctx->pc = 0x211eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x211ef0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x211ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x211ef4: 0xac2823  subu        $a1, $a1, $t4
    ctx->pc = 0x211ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x211ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211efc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x211efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x211f00: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x211f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x211f04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x211f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211f08: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x211f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x211f0c: 0x2442c4a0  addiu       $v0, $v0, -0x3B60
    ctx->pc = 0x211f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952096));
    // 0x211f10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x211f10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211f14: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x211f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f18: 0xab1023  subu        $v0, $a1, $t3
    ctx->pc = 0x211f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x211f1c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x211f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x211f20: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x211f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x211f24: 0x27043  sra         $t6, $v0, 1
    ctx->pc = 0x211f24u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 1));
    // 0x211f28: 0xafad0100  sw          $t5, 0x100($sp)
    ctx->pc = 0x211f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 13));
    // 0x211f2c: 0x8a1023  subu        $v0, $a0, $t2
    ctx->pc = 0x211f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x211f30: 0xafac0108  sw          $t4, 0x108($sp)
    ctx->pc = 0x211f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 12));
    // 0x211f34: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x211f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x211f38: 0xafab0110  sw          $t3, 0x110($sp)
    ctx->pc = 0x211f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 11));
    // 0x211f3c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x211f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x211f40: 0xafae0104  sw          $t6, 0x104($sp)
    ctx->pc = 0x211f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 14));
    // 0x211f44: 0x27843  sra         $t7, $v0, 1
    ctx->pc = 0x211f44u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), 1));
    // 0x211f48: 0xafae010c  sw          $t6, 0x10C($sp)
    ctx->pc = 0x211f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 14));
    // 0x211f4c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x211f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x211f50: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x211f50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211f54: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x211f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f58: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x211f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x211f5c: 0x2442c4e0  addiu       $v0, $v0, -0x3B20
    ctx->pc = 0x211f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952160));
    // 0x211f60: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x211f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x211f64: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x211f64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x211f68: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x211f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x211f6c: 0xafaa0120  sw          $t2, 0x120($sp)
    ctx->pc = 0x211f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 10));
    // 0x211f70: 0xafa90128  sw          $t1, 0x128($sp)
    ctx->pc = 0x211f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 9));
    // 0x211f74: 0xafa80130  sw          $t0, 0x130($sp)
    ctx->pc = 0x211f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 8));
    // 0x211f78: 0xafaf0124  sw          $t7, 0x124($sp)
    ctx->pc = 0x211f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 15));
    // 0x211f7c: 0xafaf012c  sw          $t7, 0x12C($sp)
    ctx->pc = 0x211f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 15));
    // 0x211f80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x211f80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211f84: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x211f84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x211f88: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x211f88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x211f8c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x211f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x211f90: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x211f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x211f94: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x211f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x211f98: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x211f98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x211f9c: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x211F9Cu;
    {
        const bool branch_taken_0x211f9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211F9Cu;
            // 0x211fa0: 0x46800d60  cvt.s.w     $f21, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f9c) {
            ctx->pc = 0x211FE0u;
            goto label_211fe0;
        }
    }
    ctx->pc = 0x211FA4u;
    // 0x211fa4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x211fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x211fa8: 0x9442002e  lhu         $v0, 0x2E($v0)
    ctx->pc = 0x211fa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x211fac: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x211facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x211fb0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x211fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x211fb4: 0x9442002c  lhu         $v0, 0x2C($v0)
    ctx->pc = 0x211fb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x211fb8: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x211fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x211fbc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x211fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x211fc0: 0x94420026  lhu         $v0, 0x26($v0)
    ctx->pc = 0x211fc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x211fc4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x211fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x211fc8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x211fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x211fcc: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x211fccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x211fd0: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x211fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x211fd4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x211fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x211fd8: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x211fd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x211fdc: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x211fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_211fe0:
    // 0x211fe0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x211FE0u;
    SET_GPR_U32(ctx, 31, 0x211FE8u);
    ctx->pc = 0x211FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211FE0u;
            // 0x211fe4: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211FE8u; }
        if (ctx->pc != 0x211FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211FE8u; }
        if (ctx->pc != 0x211FE8u) { return; }
    }
    ctx->pc = 0x211FE8u;
label_211fe8:
    // 0x211fe8: 0x27be0160  addiu       $fp, $sp, 0x160
    ctx->pc = 0x211fe8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x211fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ff0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x211FF0u;
    SET_GPR_U32(ctx, 31, 0x211FF8u);
    ctx->pc = 0x211FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211FF0u;
            // 0x211ff4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211FF8u; }
        if (ctx->pc != 0x211FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211FF8u; }
        if (ctx->pc != 0x211FF8u) { return; }
    }
    ctx->pc = 0x211FF8u;
label_211ff8:
    // 0x211ff8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x211ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ffc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x211FFCu;
    SET_GPR_U32(ctx, 31, 0x212004u);
    ctx->pc = 0x212000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211FFCu;
            // 0x212000: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212004u; }
        if (ctx->pc != 0x212004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212004u; }
        if (ctx->pc != 0x212004u) { return; }
    }
    ctx->pc = 0x212004u;
label_212004:
    // 0x212004: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x212004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x212008: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x212008u;
    SET_GPR_U32(ctx, 31, 0x212010u);
    ctx->pc = 0x21200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212008u;
            // 0x21200c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212010u; }
        if (ctx->pc != 0x212010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212010u; }
        if (ctx->pc != 0x212010u) { return; }
    }
    ctx->pc = 0x212010u;
label_212010:
    // 0x212010: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x212010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x212014: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x212014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_212018:
    // 0x212018: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x212018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21201c: 0x27838258  addiu       $v1, $gp, -0x7DA8
    ctx->pc = 0x21201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
    // 0x212020: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x212020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x212024: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x212024u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212028: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x212028u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x21202c: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x21202cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x212030: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x212030u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x212034: 0xc04d320  jal         func_134C80
    ctx->pc = 0x212034u;
    SET_GPR_U32(ctx, 31, 0x21203Cu);
    ctx->pc = 0x212038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212034u;
            // 0x212038: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21203Cu; }
        if (ctx->pc != 0x21203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21203Cu; }
        if (ctx->pc != 0x21203Cu) { return; }
    }
    ctx->pc = 0x21203Cu;
label_21203c:
    // 0x21203c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x21203cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212040: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x212040u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212044: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x212044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212048:
    // 0x212048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21204c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21204cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212050: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212054:
    // 0x212054: 0x0  nop
    ctx->pc = 0x212054u;
    // NOP
    // 0x212058: 0x27828238  addiu       $v0, $gp, -0x7DC8
    ctx->pc = 0x212058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
    // 0x21205c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x21205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x212060: 0x27828240  addiu       $v0, $gp, -0x7DC0
    ctx->pc = 0x212060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
    // 0x212064: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x212064u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212068: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x212068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x21206c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x21206cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212070: 0x27828248  addiu       $v0, $gp, -0x7DB8
    ctx->pc = 0x212070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
    // 0x212074: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x212074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x212078: 0x27828250  addiu       $v0, $gp, -0x7DB0
    ctx->pc = 0x212078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
    // 0x21207c: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x21207cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212080: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x212080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x212084: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x212084u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212088: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x212088u;
    SET_GPR_U32(ctx, 31, 0x212090u);
    ctx->pc = 0x21208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212088u;
            // 0x21208c: 0x27a40350  addiu       $a0, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212090u; }
        if (ctx->pc != 0x212090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212090u; }
        if (ctx->pc != 0x212090u) { return; }
    }
    ctx->pc = 0x212090u;
label_212090:
    // 0x212090: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x212090u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212094: 0x0  nop
    ctx->pc = 0x212094u;
    // NOP
    // 0x212098: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x212098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21209c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21209Cu;
    SET_GPR_U32(ctx, 31, 0x2120A4u);
    ctx->pc = 0x2120A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21209Cu;
            // 0x2120a0: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120A4u; }
        if (ctx->pc != 0x2120A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120A4u; }
        if (ctx->pc != 0x2120A4u) { return; }
    }
    ctx->pc = 0x2120A4u;
label_2120a4:
    // 0x2120a4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2120a4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2120a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2120a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2120ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2120acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2120b0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2120B0u;
    SET_GPR_U32(ctx, 31, 0x2120B8u);
    ctx->pc = 0x2120B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2120B0u;
            // 0x2120b4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120B8u; }
        if (ctx->pc != 0x2120B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120B8u; }
        if (ctx->pc != 0x2120B8u) { return; }
    }
    ctx->pc = 0x2120B8u;
label_2120b8:
    // 0x2120b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2120b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2120bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2120bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2120c0: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x2120c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2120c4: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x2120c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x2120c8: 0x8c730100  lw          $s3, 0x100($v1)
    ctx->pc = 0x2120c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2120cc: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x2120ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x2120d0: 0x8c540120  lw          $s4, 0x120($v0)
    ctx->pc = 0x2120d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x2120d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2120d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2120d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2120D8u;
    SET_GPR_U32(ctx, 31, 0x2120E0u);
    ctx->pc = 0x2120DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2120D8u;
            // 0x2120dc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120E0u; }
        if (ctx->pc != 0x2120E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120E0u; }
        if (ctx->pc != 0x2120E0u) { return; }
    }
    ctx->pc = 0x2120E0u;
label_2120e0:
    // 0x2120e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2120e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2120e4: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2120e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x2120e8: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2120E8u;
    SET_GPR_U32(ctx, 31, 0x2120F0u);
    ctx->pc = 0x2120ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2120E8u;
            // 0x2120ec: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120F0u; }
        if (ctx->pc != 0x2120F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120F0u; }
        if (ctx->pc != 0x2120F0u) { return; }
    }
    ctx->pc = 0x2120F0u;
label_2120f0:
    // 0x2120f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2120f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2120f4: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x2120f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2120f8: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2120f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2120fc: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2120FCu;
    {
        const bool branch_taken_0x2120fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2120FCu;
            // 0x212100: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120fc) {
            ctx->pc = 0x212054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212054;
        }
    }
    ctx->pc = 0x212104u;
    // 0x212104: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x212104u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x212108: 0x2d4b021  addu        $s6, $s6, $s4
    ctx->pc = 0x212108u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x21210c: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x21210cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x212110: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x212110u;
    {
        const bool branch_taken_0x212110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212110u;
            // 0x212114: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212110) {
            ctx->pc = 0x212048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212048;
        }
    }
    ctx->pc = 0x212118u;
    // 0x212118: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x212118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21211c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x21211cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x212120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x212120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212124: 0x0  nop
    ctx->pc = 0x212124u;
    // NOP
    // 0x212128: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x212128u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x21212c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x212130: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x212130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x212134: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x212134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x212138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x212138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21213c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x21213cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x212140: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x212140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x212144: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x212144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x212148: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x212148u;
    {
        const bool branch_taken_0x212148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212148u;
            // 0x21214c: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212148) {
            ctx->pc = 0x212018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212018;
        }
    }
    ctx->pc = 0x212150u;
    // 0x212150: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x212150u;
    SET_GPR_U32(ctx, 31, 0x212158u);
    ctx->pc = 0x212154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212150u;
            // 0x212154: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212158u; }
        if (ctx->pc != 0x212158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212158u; }
        if (ctx->pc != 0x212158u) { return; }
    }
    ctx->pc = 0x212158u;
label_212158:
    // 0x212158: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x212158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x21215c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x21215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x212160: 0x8f908ad0  lw          $s0, -0x7530($gp)
    ctx->pc = 0x212160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x212164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212168: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x212168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x21216c: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x21216cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x212170: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x212170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x212174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x212174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212178: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21217c: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x21217cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x212180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212184: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x212184u;
    SET_GPR_U32(ctx, 31, 0x21218Cu);
    ctx->pc = 0x212188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212184u;
            // 0x212188: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21218Cu; }
        if (ctx->pc != 0x21218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21218Cu; }
        if (ctx->pc != 0x21218Cu) { return; }
    }
    ctx->pc = 0x21218Cu;
label_21218c:
    // 0x21218c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x21218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x212190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212194: 0x240600ee  addiu       $a2, $zero, 0xEE
    ctx->pc = 0x212194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x212198: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x212198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21219c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21219Cu;
    SET_GPR_U32(ctx, 31, 0x2121A4u);
    ctx->pc = 0x2121A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21219Cu;
            // 0x2121a0: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121A4u; }
        if (ctx->pc != 0x2121A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121A4u; }
        if (ctx->pc != 0x2121A4u) { return; }
    }
    ctx->pc = 0x2121A4u;
label_2121a4:
    // 0x2121a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2121a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121a8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2121A8u;
    SET_GPR_U32(ctx, 31, 0x2121B0u);
    ctx->pc = 0x2121ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2121A8u;
            // 0x2121ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121B0u; }
        if (ctx->pc != 0x2121B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121B0u; }
        if (ctx->pc != 0x2121B0u) { return; }
    }
    ctx->pc = 0x2121B0u;
label_2121b0:
    // 0x2121b0: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x2121b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2121b4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2121B4u;
    SET_GPR_U32(ctx, 31, 0x2121BCu);
    ctx->pc = 0x2121B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2121B4u;
            // 0x2121b8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121BCu; }
        if (ctx->pc != 0x2121BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121BCu; }
        if (ctx->pc != 0x2121BCu) { return; }
    }
    ctx->pc = 0x2121BCu;
label_2121bc:
    // 0x2121bc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2121bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2121c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2121c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2121c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121c8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2121c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121cc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2121CCu;
    SET_GPR_U32(ctx, 31, 0x2121D4u);
    ctx->pc = 0x2121D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2121CCu;
            // 0x2121d0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121D4u; }
        if (ctx->pc != 0x2121D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2121D4u; }
        if (ctx->pc != 0x2121D4u) { return; }
    }
    ctx->pc = 0x2121D4u;
label_2121d4:
    // 0x2121d4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2121d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2121d8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2121d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2121dc: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2121dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2121e0: 0x2463fb8a  addiu       $v1, $v1, -0x476
    ctx->pc = 0x2121e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966154));
    // 0x2121e4: 0x48880  sll         $s1, $a0, 2
    ctx->pc = 0x2121e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2121e8: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2121e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2121ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2121ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2121f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2121f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2121f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2121f8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2121f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2121fc: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x2121fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x212200: 0x46150580  add.s       $f22, $f0, $f21
    ctx->pc = 0x212200u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x212204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x212204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212208: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x212208u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x21220c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21220cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x212210: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x212210u;
    SET_GPR_U32(ctx, 31, 0x212218u);
    ctx->pc = 0x212214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212210u;
            // 0x212214: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212218u; }
        if (ctx->pc != 0x212218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212218u; }
        if (ctx->pc != 0x212218u) { return; }
    }
    ctx->pc = 0x212218u;
label_212218:
    // 0x212218: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x212218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21221c: 0x2442fb80  addiu       $v0, $v0, -0x480
    ctx->pc = 0x21221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966144));
    // 0x212220: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x212220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x212224: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x212224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21222c: 0x0  nop
    ctx->pc = 0x21222cu;
    // NOP
    // 0x212230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x212230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x212234: 0xc0a248c  jal         func_289230
    ctx->pc = 0x212234u;
    SET_GPR_U32(ctx, 31, 0x21223Cu);
    ctx->pc = 0x212238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212234u;
            // 0x212238: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21223Cu; }
        if (ctx->pc != 0x21223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21223Cu; }
        if (ctx->pc != 0x21223Cu) { return; }
    }
    ctx->pc = 0x21223Cu;
label_21223c:
    // 0x21223c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21223cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212240: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x212240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x212244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212248: 0xc0a248c  jal         func_289230
    ctx->pc = 0x212248u;
    SET_GPR_U32(ctx, 31, 0x212250u);
    ctx->pc = 0x21224Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212248u;
            // 0x21224c: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212250u; }
        if (ctx->pc != 0x212250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212250u; }
        if (ctx->pc != 0x212250u) { return; }
    }
    ctx->pc = 0x212250u;
label_212250:
    // 0x212250: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x212250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x212254: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x212254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212258: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x212258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21225c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x212260: 0x2442fb82  addiu       $v0, $v0, -0x47E
    ctx->pc = 0x212260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966146));
    // 0x212264: 0x8428fa76  lh          $t0, -0x58A($at)
    ctx->pc = 0x212264u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294965878)));
    // 0x212268: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x212268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21226c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21226cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212270: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x212270u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212274: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x212274u;
    SET_GPR_U32(ctx, 31, 0x21227Cu);
    ctx->pc = 0x212278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212274u;
            // 0x212278: 0x27a40360  addiu       $a0, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21227Cu; }
        if (ctx->pc != 0x21227Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21227Cu; }
        if (ctx->pc != 0x21227Cu) { return; }
    }
    ctx->pc = 0x21227Cu;
label_21227c:
    // 0x21227c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x21227cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x212280: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212284: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x212284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x212288: 0x24c6fa70  addiu       $a2, $a2, -0x590
    ctx->pc = 0x212288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965872));
    // 0x21228c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x21228Cu;
    SET_GPR_U32(ctx, 31, 0x212294u);
    ctx->pc = 0x212290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21228Cu;
            // 0x212290: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212294u; }
        if (ctx->pc != 0x212294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212294u; }
        if (ctx->pc != 0x212294u) { return; }
    }
    ctx->pc = 0x212294u;
label_212294:
    // 0x212294: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x212294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x212298: 0x27868260  addiu       $a2, $gp, -0x7DA0
    ctx->pc = 0x212298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935136));
    // 0x21229c: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x21229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2122a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2122a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122a4: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x2122a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2122a8: 0x80470015  lb          $a3, 0x15($v0)
    ctx->pc = 0x2122a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x2122ac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2122acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2122b0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2122b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2122b4: 0x2442fb86  addiu       $v0, $v0, -0x47A
    ctx->pc = 0x2122b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966150));
    // 0x2122b8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2122b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2122bc: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2122bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2122c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2122c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2122c4: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2122c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2122c8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x2122c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2122cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2122CCu;
    SET_GPR_U32(ctx, 31, 0x2122D4u);
    ctx->pc = 0x2122D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2122CCu;
            // 0x2122d0: 0x246600ca  addiu       $a2, $v1, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122D4u; }
        if (ctx->pc != 0x2122D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122D4u; }
        if (ctx->pc != 0x2122D4u) { return; }
    }
    ctx->pc = 0x2122D4u;
label_2122d4:
    // 0x2122d4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2122d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2122d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2122d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122dc: 0x2442fb84  addiu       $v0, $v0, -0x47C
    ctx->pc = 0x2122dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966148));
    // 0x2122e0: 0x27a50370  addiu       $a1, $sp, 0x370
    ctx->pc = 0x2122e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2122e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2122e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2122e8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2122e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2122ec: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2122ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2122f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2122f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2122f4: 0x0  nop
    ctx->pc = 0x2122f4u;
    // NOP
    // 0x2122f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2122f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2122fc: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2122FCu;
    SET_GPR_U32(ctx, 31, 0x212304u);
    ctx->pc = 0x212300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2122FCu;
            // 0x212300: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212304u; }
        if (ctx->pc != 0x212304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212304u; }
        if (ctx->pc != 0x212304u) { return; }
    }
    ctx->pc = 0x212304u;
label_212304:
    // 0x212304: 0x24140016  addiu       $s4, $zero, 0x16
    ctx->pc = 0x212304u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x212308: 0x2415002c  addiu       $s5, $zero, 0x2C
    ctx->pc = 0x212308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x21230c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21230cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212310: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x212310u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212314: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x212314u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212318:
    // 0x212318: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x212318u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21231c: 0x0  nop
    ctx->pc = 0x21231cu;
    // NOP
    // 0x212320: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x212320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x212324: 0xc0a248c  jal         func_289230
    ctx->pc = 0x212324u;
    SET_GPR_U32(ctx, 31, 0x21232Cu);
    ctx->pc = 0x212328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212324u;
            // 0x212328: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21232Cu; }
        if (ctx->pc != 0x21232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21232Cu; }
        if (ctx->pc != 0x21232Cu) { return; }
    }
    ctx->pc = 0x21232Cu;
label_21232c:
    // 0x21232c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x21232cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212330: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x212330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x212334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x212338: 0xc0a248c  jal         func_289230
    ctx->pc = 0x212338u;
    SET_GPR_U32(ctx, 31, 0x212340u);
    ctx->pc = 0x21233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212338u;
            // 0x21233c: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212340u; }
        if (ctx->pc != 0x212340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212340u; }
        if (ctx->pc != 0x212340u) { return; }
    }
    ctx->pc = 0x212340u;
label_212340:
    // 0x212340: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x212340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x212344: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x212344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212348: 0x8428fa76  lh          $t0, -0x58A($at)
    ctx->pc = 0x212348u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294965878)));
    // 0x21234c: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x21234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x212350: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212354: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x212354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212358: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x212358u;
    SET_GPR_U32(ctx, 31, 0x212360u);
    ctx->pc = 0x21235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212358u;
            // 0x21235c: 0x2407005c  addiu       $a3, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212360u; }
        if (ctx->pc != 0x212360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212360u; }
        if (ctx->pc != 0x212360u) { return; }
    }
    ctx->pc = 0x212360u;
label_212360:
    // 0x212360: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x212360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x212364: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212368: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x212368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x21236c: 0x24c6fa70  addiu       $a2, $a2, -0x590
    ctx->pc = 0x21236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965872));
    // 0x212370: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x212370u;
    SET_GPR_U32(ctx, 31, 0x212378u);
    ctx->pc = 0x212374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212370u;
            // 0x212374: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212378u; }
        if (ctx->pc != 0x212378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212378u; }
        if (ctx->pc != 0x212378u) { return; }
    }
    ctx->pc = 0x212378u;
label_212378:
    // 0x212378: 0x1620001a  bnez        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x212378u;
    {
        const bool branch_taken_0x212378 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x212378) {
            ctx->pc = 0x2123E4u;
            goto label_2123e4;
        }
    }
    ctx->pc = 0x212380u;
    // 0x212380: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x212380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x212384: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x212384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x212388: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x212388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x21238c: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x21238cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x212390: 0x90450016  lbu         $a1, 0x16($v0)
    ctx->pc = 0x212390u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x212394: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x212394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x212398: 0x2442fbb0  addiu       $v0, $v0, -0x450
    ctx->pc = 0x212398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x21239c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2123a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2123a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2123a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2123a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2123a8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2123a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2123ac: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x2123acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2123b0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2123B0u;
    SET_GPR_U32(ctx, 31, 0x2123B8u);
    ctx->pc = 0x2123B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2123B0u;
            // 0x2123b4: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2123B8u; }
        if (ctx->pc != 0x2123B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2123B8u; }
        if (ctx->pc != 0x2123B8u) { return; }
    }
    ctx->pc = 0x2123B8u;
label_2123b8:
    // 0x2123b8: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x2123b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2123bc: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x2123bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2123c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2123c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2123c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2123c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2123c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2123cc: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x2123ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x2123d0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2123d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2123d4: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2123D4u;
    SET_GPR_U32(ctx, 31, 0x2123DCu);
    ctx->pc = 0x2123D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2123D4u;
            // 0x2123d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2123DCu; }
        if (ctx->pc != 0x2123DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2123DCu; }
        if (ctx->pc != 0x2123DCu) { return; }
    }
    ctx->pc = 0x2123DCu;
label_2123dc:
    // 0x2123dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2123DCu;
    {
        const bool branch_taken_0x2123dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2123dc) {
            ctx->pc = 0x212468u;
            goto label_212468;
        }
    }
    ctx->pc = 0x2123E4u;
label_2123e4:
    // 0x2123e4: 0x0  nop
    ctx->pc = 0x2123e4u;
    // NOP
    // 0x2123e8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2123e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2123ec: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x2123ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2123f0: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x2123f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2123f4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2123f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2123f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2123f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2123fc: 0x2442fa90  addiu       $v0, $v0, -0x570
    ctx->pc = 0x2123fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x212400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212404: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x212404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x212408: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x212408u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21240c: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x21240cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x212410: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x212410u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x212414: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x212414u;
    SET_GPR_U32(ctx, 31, 0x21241Cu);
    ctx->pc = 0x212418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212414u;
            // 0x212418: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21241Cu; }
        if (ctx->pc != 0x21241Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21241Cu; }
        if (ctx->pc != 0x21241Cu) { return; }
    }
    ctx->pc = 0x21241Cu;
label_21241c:
    // 0x21241c: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x21241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x212420: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x212420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x212424: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x212424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212428: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21242c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21242cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212430: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x212434: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x212434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x212438: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x212438u;
    SET_GPR_U32(ctx, 31, 0x212440u);
    ctx->pc = 0x21243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212438u;
            // 0x21243c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212440u; }
        if (ctx->pc != 0x212440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212440u; }
        if (ctx->pc != 0x212440u) { return; }
    }
    ctx->pc = 0x212440u;
label_212440:
    // 0x212440: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x212440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x212444: 0x26470056  addiu       $a3, $s2, 0x56
    ctx->pc = 0x212444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 86));
    // 0x212448: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x212448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x21244c: 0x26680003  addiu       $t0, $s3, 0x3
    ctx->pc = 0x21244cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x212450: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x212454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212458: 0x27a90280  addiu       $t1, $sp, 0x280
    ctx->pc = 0x212458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x21245c: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x21245cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x212460: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x212460u;
    SET_GPR_U32(ctx, 31, 0x212468u);
    ctx->pc = 0x212464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212460u;
            // 0x212464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212468u; }
        if (ctx->pc != 0x212468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212468u; }
        if (ctx->pc != 0x212468u) { return; }
    }
    ctx->pc = 0x212468u;
label_212468:
    // 0x212468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x212468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21246c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21246Cu;
    {
        const bool branch_taken_0x21246c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21246Cu;
            // 0x212470: 0x2694005c  addiu       $s4, $s4, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21246c) {
            ctx->pc = 0x21247Cu;
            goto label_21247c;
        }
    }
    ctx->pc = 0x212474u;
    // 0x212474: 0x24140016  addiu       $s4, $zero, 0x16
    ctx->pc = 0x212474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x212478: 0x26b50016  addiu       $s5, $s5, 0x16
    ctx->pc = 0x212478u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 22));
label_21247c:
    // 0x21247c: 0x0  nop
    ctx->pc = 0x21247cu;
    // NOP
    // 0x212480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x212480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x212484: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x212484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x212488: 0x26f70006  addiu       $s7, $s7, 0x6
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 6));
    // 0x21248c: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x21248Cu;
    {
        const bool branch_taken_0x21248c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21248Cu;
            // 0x212490: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21248c) {
            ctx->pc = 0x212318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_212318;
        }
    }
    ctx->pc = 0x212494u;
    // 0x212494: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x212498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21249c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21249Cu;
    SET_GPR_U32(ctx, 31, 0x2124A4u);
    ctx->pc = 0x2124A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21249Cu;
            // 0x2124a0: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124A4u; }
        if (ctx->pc != 0x2124A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124A4u; }
        if (ctx->pc != 0x2124A4u) { return; }
    }
    ctx->pc = 0x2124A4u;
label_2124a4:
    // 0x2124a4: 0x26a30016  addiu       $v1, $s5, 0x16
    ctx->pc = 0x2124a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 22));
    // 0x2124a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2124a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2124acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2124b0: 0x0  nop
    ctx->pc = 0x2124b0u;
    // NOP
    // 0x2124b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2124b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2124b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2124B8u;
    SET_GPR_U32(ctx, 31, 0x2124C0u);
    ctx->pc = 0x2124BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2124B8u;
            // 0x2124bc: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124C0u; }
        if (ctx->pc != 0x2124C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124C0u; }
        if (ctx->pc != 0x2124C0u) { return; }
    }
    ctx->pc = 0x2124C0u;
label_2124c0:
    // 0x2124c0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2124c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2124c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2124c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124c8: 0x8428fa76  lh          $t0, -0x58A($at)
    ctx->pc = 0x2124c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294965878)));
    // 0x2124cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2124ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124d0: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x2124d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2124d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2124d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2124d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2124DCu;
    SET_GPR_U32(ctx, 31, 0x2124E4u);
    ctx->pc = 0x2124E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2124DCu;
            // 0x2124e0: 0x2407008a  addiu       $a3, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124E4u; }
        if (ctx->pc != 0x2124E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124E4u; }
        if (ctx->pc != 0x2124E4u) { return; }
    }
    ctx->pc = 0x2124E4u;
label_2124e4:
    // 0x2124e4: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2124e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x2124e8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2124e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124ec: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x2124ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2124f0: 0x24c6fa70  addiu       $a2, $a2, -0x590
    ctx->pc = 0x2124f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965872));
    // 0x2124f4: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x2124F4u;
    SET_GPR_U32(ctx, 31, 0x2124FCu);
    ctx->pc = 0x2124F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2124F4u;
            // 0x2124f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124FCu; }
        if (ctx->pc != 0x2124FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124FCu; }
        if (ctx->pc != 0x2124FCu) { return; }
    }
    ctx->pc = 0x2124FCu;
label_2124fc:
    // 0x2124fc: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x2124fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x212500: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x212500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x212504: 0x240600ee  addiu       $a2, $zero, 0xEE
    ctx->pc = 0x212504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x212508: 0x24070082  addiu       $a3, $zero, 0x82
    ctx->pc = 0x212508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x21250c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21250Cu;
    SET_GPR_U32(ctx, 31, 0x212514u);
    ctx->pc = 0x212510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21250Cu;
            // 0x212510: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212514u; }
        if (ctx->pc != 0x212514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212514u; }
        if (ctx->pc != 0x212514u) { return; }
    }
    ctx->pc = 0x212514u;
label_212514:
    // 0x212514: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x212514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x212518: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x212518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x21251c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21251cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212520: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212528: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x212528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x21252c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x21252cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x212530: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x212530u;
    SET_GPR_U32(ctx, 31, 0x212538u);
    ctx->pc = 0x212534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212530u;
            // 0x212534: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212538u; }
        if (ctx->pc != 0x212538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212538u; }
        if (ctx->pc != 0x212538u) { return; }
    }
    ctx->pc = 0x212538u;
label_212538:
    // 0x212538: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x212538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21253c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x212540: 0x2647005a  addiu       $a3, $s2, 0x5A
    ctx->pc = 0x212540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 90));
    // 0x212544: 0x26680002  addiu       $t0, $s3, 0x2
    ctx->pc = 0x212544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x212548: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21254c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21254cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212550: 0x27a90280  addiu       $t1, $sp, 0x280
    ctx->pc = 0x212550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x212554: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x212554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212558: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x212558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21255c: 0x94450018  lhu         $a1, 0x18($v0)
    ctx->pc = 0x21255cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x212560: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x212560u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x212564: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x212564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x212568: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x212568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x21256c: 0xa010  mfhi        $s4
    ctx->pc = 0x21256cu;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x212570: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x212570u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x212574: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x212574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x212578: 0x0  nop
    ctx->pc = 0x212578u;
    // NOP
    // 0x21257c: 0x0  nop
    ctx->pc = 0x21257cu;
    // NOP
    // 0x212580: 0x1010  mfhi        $v0
    ctx->pc = 0x212580u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x212584: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x212584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x212588: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x212588u;
    SET_GPR_U32(ctx, 31, 0x212590u);
    ctx->pc = 0x21258Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212588u;
            // 0x21258c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212590u; }
        if (ctx->pc != 0x212590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212590u; }
        if (ctx->pc != 0x212590u) { return; }
    }
    ctx->pc = 0x212590u;
label_212590:
    // 0x212590: 0x2647006a  addiu       $a3, $s2, 0x6A
    ctx->pc = 0x212590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 106));
    // 0x212594: 0x26680002  addiu       $t0, $s3, 0x2
    ctx->pc = 0x212594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x212598: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x212598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21259c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x21259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2125a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125a4: 0x27a90280  addiu       $t1, $sp, 0x280
    ctx->pc = 0x2125a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2125a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2125a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125ac: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x2125ACu;
    SET_GPR_U32(ctx, 31, 0x2125B4u);
    ctx->pc = 0x2125B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2125ACu;
            // 0x2125b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125B4u; }
        if (ctx->pc != 0x2125B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125B4u; }
        if (ctx->pc != 0x2125B4u) { return; }
    }
    ctx->pc = 0x2125B4u;
label_2125b4:
    // 0x2125b4: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2125b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2125b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2125b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2125bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2125BCu;
    SET_GPR_U32(ctx, 31, 0x2125C4u);
    ctx->pc = 0x2125C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2125BCu;
            // 0x2125c0: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125C4u; }
        if (ctx->pc != 0x2125C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125C4u; }
        if (ctx->pc != 0x2125C4u) { return; }
    }
    ctx->pc = 0x2125C4u;
label_2125c4:
    // 0x2125c4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2125c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2125c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2125c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125cc: 0x8428fa76  lh          $t0, -0x58A($at)
    ctx->pc = 0x2125ccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294965878)));
    // 0x2125d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2125d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125d4: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x2125d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2125d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2125d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125dc: 0x2407008a  addiu       $a3, $zero, 0x8A
    ctx->pc = 0x2125dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x2125e0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2125E0u;
    SET_GPR_U32(ctx, 31, 0x2125E8u);
    ctx->pc = 0x2125E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2125E0u;
            // 0x2125e4: 0x26330002  addiu       $s3, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125E8u; }
        if (ctx->pc != 0x2125E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2125E8u; }
        if (ctx->pc != 0x2125E8u) { return; }
    }
    ctx->pc = 0x2125E8u;
label_2125e8:
    // 0x2125e8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2125e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x2125ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2125ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125f0: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x2125f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2125f4: 0x24c6fa70  addiu       $a2, $a2, -0x590
    ctx->pc = 0x2125f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965872));
    // 0x2125f8: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x2125F8u;
    SET_GPR_U32(ctx, 31, 0x212600u);
    ctx->pc = 0x2125FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2125F8u;
            // 0x2125fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212600u; }
        if (ctx->pc != 0x212600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212600u; }
        if (ctx->pc != 0x212600u) { return; }
    }
    ctx->pc = 0x212600u;
label_212600:
    // 0x212600: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x212600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x212604: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x212604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x212608: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x212608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21260c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x21260cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x212610: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x212610u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x212614: 0x2484fac0  addiu       $a0, $a0, -0x540
    ctx->pc = 0x212614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965952));
    // 0x212618: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x212618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21261c: 0x2463fac2  addiu       $v1, $v1, -0x53E
    ctx->pc = 0x21261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965954));
    // 0x212620: 0x2442fac4  addiu       $v0, $v0, -0x53C
    ctx->pc = 0x212620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965956));
    // 0x212624: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x212624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x212628: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x212628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21262c: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x21262cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212630: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x212630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x212634: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x212634u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212638: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x212638u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21263c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x21263cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x212640: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x212640u;
    SET_GPR_U32(ctx, 31, 0x212648u);
    ctx->pc = 0x212644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212640u;
            // 0x212644: 0x27a403e0  addiu       $a0, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212648u; }
        if (ctx->pc != 0x212648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212648u; }
        if (ctx->pc != 0x212648u) { return; }
    }
    ctx->pc = 0x212648u;
label_212648:
    // 0x212648: 0x26420078  addiu       $v0, $s2, 0x78
    ctx->pc = 0x212648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x21264c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x21264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x212650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212654: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x212654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x212658: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x212658u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21265c: 0x0  nop
    ctx->pc = 0x21265cu;
    // NOP
    // 0x212660: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x212660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x212664: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x212664u;
    SET_GPR_U32(ctx, 31, 0x21266Cu);
    ctx->pc = 0x212668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212664u;
            // 0x212668: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21266Cu; }
        if (ctx->pc != 0x21266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21266Cu; }
        if (ctx->pc != 0x21266Cu) { return; }
    }
    ctx->pc = 0x21266Cu;
label_21266c:
    // 0x21266c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x21266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x212670: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x212670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x212674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212678: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x212678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21267c: 0x0  nop
    ctx->pc = 0x21267cu;
    // NOP
    // 0x212680: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x212680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x212684: 0xc0a248c  jal         func_289230
    ctx->pc = 0x212684u;
    SET_GPR_U32(ctx, 31, 0x21268Cu);
    ctx->pc = 0x212688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212684u;
            // 0x212688: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21268Cu; }
        if (ctx->pc != 0x21268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21268Cu; }
        if (ctx->pc != 0x21268Cu) { return; }
    }
    ctx->pc = 0x21268Cu;
label_21268c:
    // 0x21268c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21268cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212690: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x212690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x212694: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x212694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x212698: 0x2442faba  addiu       $v0, $v0, -0x546
    ctx->pc = 0x212698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965946));
    // 0x21269c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x21269cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2126a0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2126a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2126a4: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2126a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2126a8: 0x2442fabc  addiu       $v0, $v0, -0x544
    ctx->pc = 0x2126a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965948));
    // 0x2126ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2126acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2126b0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x2126b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2126b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2126b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2126b8: 0x2442fabe  addiu       $v0, $v0, -0x542
    ctx->pc = 0x2126b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965950));
    // 0x2126bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2126bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2126c0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x2126c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2126c4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2126C4u;
    SET_GPR_U32(ctx, 31, 0x2126CCu);
    ctx->pc = 0x2126C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2126C4u;
            // 0x2126c8: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126CCu; }
        if (ctx->pc != 0x2126CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126CCu; }
        if (ctx->pc != 0x2126CCu) { return; }
    }
    ctx->pc = 0x2126CCu;
label_2126cc:
    // 0x2126cc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2126ccu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2126d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2126d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126d4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2126d4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2126d8: 0x27a503f0  addiu       $a1, $sp, 0x3F0
    ctx->pc = 0x2126d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x2126dc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2126dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2126e0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2126E0u;
    SET_GPR_U32(ctx, 31, 0x2126E8u);
    ctx->pc = 0x2126E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2126E0u;
            // 0x2126e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126E8u; }
        if (ctx->pc != 0x2126E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126E8u; }
        if (ctx->pc != 0x2126E8u) { return; }
    }
    ctx->pc = 0x2126E8u;
label_2126e8:
    // 0x2126e8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2126e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2126ec: 0x94420048  lhu         $v0, 0x48($v0)
    ctx->pc = 0x2126ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2126f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2126f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2126f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2126F4u;
    {
        const bool branch_taken_0x2126f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2126F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2126F4u;
            // 0x2126f8: 0x3c034320  lui         $v1, 0x4320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126f4) {
            ctx->pc = 0x212768u;
            goto label_212768;
        }
    }
    ctx->pc = 0x2126FCu;
    // 0x2126fc: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2126fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x212700: 0x3c03430a  lui         $v1, 0x430A
    ctx->pc = 0x212700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17162 << 16));
    // 0x212704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x212704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212708: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x212708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21270c: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x21270cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x212710: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x212710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x212714: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x212714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x212718: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x212718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21271c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21271cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212720: 0x0  nop
    ctx->pc = 0x212720u;
    // NOP
    // 0x212724: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x212724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21272c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21272Cu;
    SET_GPR_U32(ctx, 31, 0x212734u);
    ctx->pc = 0x212730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21272Cu;
            // 0x212730: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212734u; }
        if (ctx->pc != 0x212734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212734u; }
        if (ctx->pc != 0x212734u) { return; }
    }
    ctx->pc = 0x212734u;
label_212734:
    // 0x212734: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x212734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212738: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x212738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21273c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x21273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x212740: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x212744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212748: 0x27a90280  addiu       $t1, $sp, 0x280
    ctx->pc = 0x212748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x21274c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x21274cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212750: 0x9445001a  lhu         $a1, 0x1A($v0)
    ctx->pc = 0x212750u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x212754: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x212754u;
    SET_GPR_U32(ctx, 31, 0x21275Cu);
    ctx->pc = 0x212758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212754u;
            // 0x212758: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21275Cu; }
        if (ctx->pc != 0x21275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21275Cu; }
        if (ctx->pc != 0x21275Cu) { return; }
    }
    ctx->pc = 0x21275Cu;
label_21275c:
    // 0x21275c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x21275Cu;
    {
        const bool branch_taken_0x21275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21275Cu;
            // 0x212760: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21275c) {
            ctx->pc = 0x212854u;
            goto label_212854;
        }
    }
    ctx->pc = 0x212764u;
    // 0x212764: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x212764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_212768:
    // 0x212768: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x212768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21276c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21276cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212770: 0x3c06428a  lui         $a2, 0x428A
    ctx->pc = 0x212770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17034 << 16));
    // 0x212774: 0x2442fa90  addiu       $v0, $v0, -0x570
    ctx->pc = 0x212774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x212778: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x212778u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x21277c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x212780: 0x24510036  addiu       $s1, $v0, 0x36
    ctx->pc = 0x212780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 54));
    // 0x212784: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x212784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x212788: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x212788u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21278c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21278cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212790: 0x0  nop
    ctx->pc = 0x212790u;
    // NOP
    // 0x212794: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x212794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x212798: 0xc0a248c  jal         func_289230
    ctx->pc = 0x212798u;
    SET_GPR_U32(ctx, 31, 0x2127A0u);
    ctx->pc = 0x21279Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212798u;
            // 0x21279c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127A0u; }
        if (ctx->pc != 0x2127A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127A0u; }
        if (ctx->pc != 0x2127A0u) { return; }
    }
    ctx->pc = 0x2127A0u;
label_2127a0:
    // 0x2127a0: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x2127a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2127a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2127a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127a8: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x2127a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2127ac: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x2127acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2127b0: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x2127b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2127b4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2127B4u;
    SET_GPR_U32(ctx, 31, 0x2127BCu);
    ctx->pc = 0x2127B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2127B4u;
            // 0x2127b8: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127BCu; }
        if (ctx->pc != 0x2127BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127BCu; }
        if (ctx->pc != 0x2127BCu) { return; }
    }
    ctx->pc = 0x2127BCu;
label_2127bc:
    // 0x2127bc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x2127bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2127c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2127c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127c4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2127c4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2127c8: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x2127c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2127cc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2127ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2127d0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2127D0u;
    SET_GPR_U32(ctx, 31, 0x2127D8u);
    ctx->pc = 0x2127D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2127D0u;
            // 0x2127d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127D8u; }
        if (ctx->pc != 0x2127D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127D8u; }
        if (ctx->pc != 0x2127D8u) { return; }
    }
    ctx->pc = 0x2127D8u;
label_2127d8:
    // 0x2127d8: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x2127d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2127dc: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x2127dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x2127e0: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x2127e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2127e4: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x2127e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2127e8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2127E8u;
    SET_GPR_U32(ctx, 31, 0x2127F0u);
    ctx->pc = 0x2127ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2127E8u;
            // 0x2127ec: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127F0u; }
        if (ctx->pc != 0x2127F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2127F0u; }
        if (ctx->pc != 0x2127F0u) { return; }
    }
    ctx->pc = 0x2127F0u;
label_2127f0:
    // 0x2127f0: 0x2642000e  addiu       $v0, $s2, 0xE
    ctx->pc = 0x2127f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
    // 0x2127f4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2127f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2127f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2127fc: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x2127fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x212800: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x212800u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212804: 0x0  nop
    ctx->pc = 0x212804u;
    // NOP
    // 0x212808: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x212808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x21280c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x21280Cu;
    SET_GPR_U32(ctx, 31, 0x212814u);
    ctx->pc = 0x212810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21280Cu;
            // 0x212810: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212814u; }
        if (ctx->pc != 0x212814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212814u; }
        if (ctx->pc != 0x212814u) { return; }
    }
    ctx->pc = 0x212814u;
label_212814:
    // 0x212814: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x212814u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212818: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x212818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x21281c: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x21281cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x212820: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x212820u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x212824: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x212824u;
    SET_GPR_U32(ctx, 31, 0x21282Cu);
    ctx->pc = 0x212828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212824u;
            // 0x212828: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21282Cu; }
        if (ctx->pc != 0x21282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21282Cu; }
        if (ctx->pc != 0x21282Cu) { return; }
    }
    ctx->pc = 0x21282Cu;
label_21282c:
    // 0x21282c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x21282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x212830: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212834: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x212834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212838: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x212838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x21283c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x21283cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212840: 0x0  nop
    ctx->pc = 0x212840u;
    // NOP
    // 0x212844: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x212844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x212848: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x212848u;
    SET_GPR_U32(ctx, 31, 0x212850u);
    ctx->pc = 0x21284Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212848u;
            // 0x21284c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212850u; }
        if (ctx->pc != 0x212850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212850u; }
        if (ctx->pc != 0x212850u) { return; }
    }
    ctx->pc = 0x212850u;
label_212850:
    // 0x212850: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x212850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_212854:
    // 0x212854: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x212854u;
    SET_GPR_U32(ctx, 31, 0x21285Cu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21285Cu; }
        if (ctx->pc != 0x21285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21285Cu; }
        if (ctx->pc != 0x21285Cu) { return; }
    }
    ctx->pc = 0x21285Cu;
label_21285c:
    // 0x21285c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x212860: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x212860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x212864: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x212864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x212868: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x212868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x21286c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x21286Cu;
    SET_GPR_U32(ctx, 31, 0x212874u);
    ctx->pc = 0x212870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21286Cu;
            // 0x212870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212874u; }
        if (ctx->pc != 0x212874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212874u; }
        if (ctx->pc != 0x212874u) { return; }
    }
    ctx->pc = 0x212874u;
label_212874:
    // 0x212874: 0x27828268  addiu       $v0, $gp, -0x7D98
    ctx->pc = 0x212874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
    // 0x212878: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x212878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21287c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21287cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212884: 0x0  nop
    ctx->pc = 0x212884u;
    // NOP
    // 0x212888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x212888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21288c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21288Cu;
    SET_GPR_U32(ctx, 31, 0x212894u);
    ctx->pc = 0x212890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21288Cu;
            // 0x212890: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212894u; }
        if (ctx->pc != 0x212894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212894u; }
        if (ctx->pc != 0x212894u) { return; }
    }
    ctx->pc = 0x212894u;
label_212894:
    // 0x212894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x212894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212898: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x212898u;
    SET_GPR_U32(ctx, 31, 0x2128A0u);
    ctx->pc = 0x21289Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212898u;
            // 0x21289c: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128A0u; }
        if (ctx->pc != 0x2128A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128A0u; }
        if (ctx->pc != 0x2128A0u) { return; }
    }
    ctx->pc = 0x2128A0u;
label_2128a0:
    // 0x2128a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2128a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2128a4: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x2128a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2128a8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2128a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2128ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2128ACu;
    {
        const bool branch_taken_0x2128ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2128ac) {
            ctx->pc = 0x2128C4u;
            goto label_2128c4;
        }
    }
    ctx->pc = 0x2128B4u;
    // 0x2128b4: 0x3c02803c  lui         $v0, 0x803C
    ctx->pc = 0x2128b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32828 << 16));
    // 0x2128b8: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2128b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2128bc: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x2128BCu;
    SET_GPR_U32(ctx, 31, 0x2128C4u);
    ctx->pc = 0x2128C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2128BCu;
            // 0x2128c0: 0x3445a0a8  ori         $a1, $v0, 0xA0A8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128C4u; }
        if (ctx->pc != 0x2128C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128C4u; }
        if (ctx->pc != 0x2128C4u) { return; }
    }
    ctx->pc = 0x2128C4u;
label_2128c4:
    // 0x2128c4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2128c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2128c8: 0xc065dc0  jal         func_197700
    ctx->pc = 0x2128C8u;
    SET_GPR_U32(ctx, 31, 0x2128D0u);
    ctx->pc = 0x2128CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2128C8u;
            // 0x2128cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128D0u; }
        if (ctx->pc != 0x2128D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128D0u; }
        if (ctx->pc != 0x2128D0u) { return; }
    }
    ctx->pc = 0x2128D0u;
label_2128d0:
    // 0x2128d0: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x2128d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2128d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2128d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2128d8: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2128d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2128dc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2128DCu;
    SET_GPR_U32(ctx, 31, 0x2128E4u);
    ctx->pc = 0x2128E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2128DCu;
            // 0x2128e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128E4u; }
        if (ctx->pc != 0x2128E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128E4u; }
        if (ctx->pc != 0x2128E4u) { return; }
    }
    ctx->pc = 0x2128E4u;
label_2128e4:
    // 0x2128e4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2128e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2128e8:
    // 0x2128e8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2128e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2128ec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2128ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2128f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2128f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2128f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2128f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2128f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2128f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2128fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2128fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212900: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x212900u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x212904: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x212904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212908: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x212908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21290c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21290cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212910: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x212910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212914: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x212914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212918: 0x3e00008  jr          $ra
    ctx->pc = 0x212918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212918u;
            // 0x21291c: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212920u;
}
