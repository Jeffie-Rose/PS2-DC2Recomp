#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommonBoardDraw__FPfRi
// Address: 0x222c90 - 0x223a50
void CommonBoardDraw__FPfRi_0x222c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommonBoardDraw__FPfRi_0x222c90");
#endif

    switch (ctx->pc) {
        case 0x222d1cu: goto label_222d1c;
        case 0x222d24u: goto label_222d24;
        case 0x222da4u: goto label_222da4;
        case 0x222dc0u: goto label_222dc0;
        case 0x222dccu: goto label_222dcc;
        case 0x222de4u: goto label_222de4;
        case 0x222e08u: goto label_222e08;
        case 0x222e44u: goto label_222e44;
        case 0x222e4cu: goto label_222e4c;
        case 0x222e58u: goto label_222e58;
        case 0x222e64u: goto label_222e64;
        case 0x222e70u: goto label_222e70;
        case 0x222e7cu: goto label_222e7c;
        case 0x222e94u: goto label_222e94;
        case 0x222ea0u: goto label_222ea0;
        case 0x222eb8u: goto label_222eb8;
        case 0x222eccu: goto label_222ecc;
        case 0x222ef4u: goto label_222ef4;
        case 0x222f18u: goto label_222f18;
        case 0x222f38u: goto label_222f38;
        case 0x222f4cu: goto label_222f4c;
        case 0x222f70u: goto label_222f70;
        case 0x222fa0u: goto label_222fa0;
        case 0x222fc0u: goto label_222fc0;
        case 0x222fd4u: goto label_222fd4;
        case 0x222ff4u: goto label_222ff4;
        case 0x223008u: goto label_223008;
        case 0x223024u: goto label_223024;
        case 0x223038u: goto label_223038;
        case 0x22305cu: goto label_22305c;
        case 0x223074u: goto label_223074;
        case 0x223084u: goto label_223084;
        case 0x2230e0u: goto label_2230e0;
        case 0x22311cu: goto label_22311c;
        case 0x223128u: goto label_223128;
        case 0x223134u: goto label_223134;
        case 0x223140u: goto label_223140;
        case 0x223158u: goto label_223158;
        case 0x223160u: goto label_223160;
        case 0x22316cu: goto label_22316c;
        case 0x223184u: goto label_223184;
        case 0x223194u: goto label_223194;
        case 0x22319cu: goto label_22319c;
        case 0x2231b4u: goto label_2231b4;
        case 0x2231d8u: goto label_2231d8;
        case 0x223200u: goto label_223200;
        case 0x22320cu: goto label_22320c;
        case 0x223218u: goto label_223218;
        case 0x223230u: goto label_223230;
        case 0x22323cu: goto label_22323c;
        case 0x2232b0u: goto label_2232b0;
        case 0x2232b8u: goto label_2232b8;
        case 0x2232c8u: goto label_2232c8;
        case 0x2232e0u: goto label_2232e0;
        case 0x2232f0u: goto label_2232f0;
        case 0x22331cu: goto label_22331c;
        case 0x223324u: goto label_223324;
        case 0x22333cu: goto label_22333c;
        case 0x22334cu: goto label_22334c;
        case 0x223370u: goto label_223370;
        case 0x223378u: goto label_223378;
        case 0x223394u: goto label_223394;
        case 0x2233a4u: goto label_2233a4;
        case 0x2233c8u: goto label_2233c8;
        case 0x2233d8u: goto label_2233d8;
        case 0x223400u: goto label_223400;
        case 0x223408u: goto label_223408;
        case 0x223434u: goto label_223434;
        case 0x223450u: goto label_223450;
        case 0x223460u: goto label_223460;
        case 0x223478u: goto label_223478;
        case 0x223488u: goto label_223488;
        case 0x2234acu: goto label_2234ac;
        case 0x2234c4u: goto label_2234c4;
        case 0x2234e8u: goto label_2234e8;
        case 0x223500u: goto label_223500;
        case 0x223508u: goto label_223508;
        case 0x223530u: goto label_223530;
        case 0x223540u: goto label_223540;
        case 0x223558u: goto label_223558;
        case 0x22358cu: goto label_22358c;
        case 0x22359cu: goto label_22359c;
        case 0x2235b4u: goto label_2235b4;
        case 0x2235c4u: goto label_2235c4;
        case 0x22368cu: goto label_22368c;
        case 0x2236a4u: goto label_2236a4;
        case 0x2236d0u: goto label_2236d0;
        case 0x2236dcu: goto label_2236dc;
        case 0x2236ecu: goto label_2236ec;
        case 0x223704u: goto label_223704;
        case 0x223714u: goto label_223714;
        case 0x22372cu: goto label_22372c;
        case 0x223738u: goto label_223738;
        case 0x223748u: goto label_223748;
        case 0x223760u: goto label_223760;
        case 0x223770u: goto label_223770;
        case 0x2237b4u: goto label_2237b4;
        case 0x2237d0u: goto label_2237d0;
        case 0x2237ecu: goto label_2237ec;
        case 0x223814u: goto label_223814;
        case 0x22382cu: goto label_22382c;
        case 0x223844u: goto label_223844;
        case 0x223854u: goto label_223854;
        case 0x22386cu: goto label_22386c;
        case 0x223884u: goto label_223884;
        case 0x2238a4u: goto label_2238a4;
        case 0x2238bcu: goto label_2238bc;
        case 0x2238ccu: goto label_2238cc;
        case 0x2238e4u: goto label_2238e4;
        case 0x2238fcu: goto label_2238fc;
        case 0x22390cu: goto label_22390c;
        case 0x223924u: goto label_223924;
        case 0x22393cu: goto label_22393c;
        case 0x22394cu: goto label_22394c;
        case 0x223974u: goto label_223974;
        case 0x22398cu: goto label_22398c;
        case 0x2239a4u: goto label_2239a4;
        case 0x2239b4u: goto label_2239b4;
        case 0x2239ccu: goto label_2239cc;
        case 0x2239e4u: goto label_2239e4;
        case 0x223a0cu: goto label_223a0c;
        case 0x223a14u: goto label_223a14;
        default: break;
    }

    ctx->pc = 0x222c90u;

    // 0x222c90: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x222c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x222c94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x222c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x222c98: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x222c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x222c9c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x222c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x222ca0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x222ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x222ca4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x222ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x222ca8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x222ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x222cac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x222cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x222cb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x222cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x222cb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x222cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x222cb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222cbc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x222cbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x222cc0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x222cc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x222cc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x222cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x222cc8: 0x8f8393a0  lw          $v1, -0x6C60($gp)
    ctx->pc = 0x222cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x222ccc: 0x10600351  beqz        $v1, . + 4 + (0x351 << 2)
    ctx->pc = 0x222CCCu;
    {
        const bool branch_taken_0x222ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222CCCu;
            // 0x222cd0: 0xafa4010c  sw          $a0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ccc) {
            ctx->pc = 0x223A14u;
            goto label_223a14;
        }
    }
    ctx->pc = 0x222CD4u;
    // 0x222cd4: 0xc78293a4  lwc1        $f2, -0x6C5C($gp)
    ctx->pc = 0x222cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222cd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x222cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x222cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222ce0: 0x3c02426c  lui         $v0, 0x426C
    ctx->pc = 0x222ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17004 << 16));
    // 0x222ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x222ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222ce8: 0x0  nop
    ctx->pc = 0x222ce8u;
    // NOP
    // 0x222cec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x222cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x222cf0: 0xe78093a4  swc1        $f0, -0x6C5C($gp)
    ctx->pc = 0x222cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939556), bits); }
    // 0x222cf4: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x222cf4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x222cf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x222cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222cfc: 0x0  nop
    ctx->pc = 0x222cfcu;
    // NOP
    // 0x222d00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x222D00u;
    {
        const bool branch_taken_0x222d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222d00) {
            ctx->pc = 0x222D0Cu;
            goto label_222d0c;
        }
    }
    ctx->pc = 0x222D08u;
    // 0x222d08: 0xaf8093a4  sw          $zero, -0x6C5C($gp)
    ctx->pc = 0x222d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939556), GPR_U32(ctx, 0));
label_222d0c:
    // 0x222d0c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x222d0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222d10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x222d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d14: 0xc08878c  jal         func_221E30
    ctx->pc = 0x222D14u;
    SET_GPR_U32(ctx, 31, 0x222D1Cu);
    ctx->pc = 0x222D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222D14u;
            // 0x222d18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D1Cu; }
        if (ctx->pc != 0x222D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D1Cu; }
        if (ctx->pc != 0x222D1Cu) { return; }
    }
    ctx->pc = 0x222D1Cu;
label_222d1c:
    // 0x222d1c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x222D1Cu;
    SET_GPR_U32(ctx, 31, 0x222D24u);
    ctx->pc = 0x222D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222D1Cu;
            // 0x222d20: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D24u; }
        if (ctx->pc != 0x222D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D24u; }
        if (ctx->pc != 0x222D24u) { return; }
    }
    ctx->pc = 0x222D24u;
label_222d24:
    // 0x222d24: 0xdf8282b8  ld          $v0, -0x7D48($gp)
    ctx->pc = 0x222d24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x222d28: 0x27a704f8  addiu       $a3, $sp, 0x4F8
    ctx->pc = 0x222d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1272));
    // 0x222d2c: 0x3c0b0035  lui         $t3, 0x35
    ctx->pc = 0x222d2cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)53 << 16));
    // 0x222d30: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x222d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x222d34: 0x256b04a0  addiu       $t3, $t3, 0x4A0
    ctx->pc = 0x222d34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1184));
    // 0x222d38: 0x27aa0220  addiu       $t2, $sp, 0x220
    ctx->pc = 0x222d38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x222d3c: 0x24c604f0  addiu       $a2, $a2, 0x4F0
    ctx->pc = 0x222d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1264));
    // 0x222d40: 0x27a30270  addiu       $v1, $sp, 0x270
    ctx->pc = 0x222d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x222d44: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x222d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x222d48: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x222d48u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x222d4c: 0x79690000  lq          $t1, 0x0($t3)
    ctx->pc = 0x222d4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x222d50: 0x79680010  lq          $t0, 0x10($t3)
    ctx->pc = 0x222d50u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x222d54: 0x79670020  lq          $a3, 0x20($t3)
    ctx->pc = 0x222d54u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x222d58: 0x79620030  lq          $v0, 0x30($t3)
    ctx->pc = 0x222d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x222d5c: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x222d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x222d60: 0x7d480010  sq          $t0, 0x10($t2)
    ctx->pc = 0x222d60u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 8));
    // 0x222d64: 0x7d470020  sq          $a3, 0x20($t2)
    ctx->pc = 0x222d64u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 7));
    // 0x222d68: 0x7d420030  sq          $v0, 0x30($t2)
    ctx->pc = 0x222d68u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 2));
    // 0x222d6c: 0xdd620040  ld          $v0, 0x40($t3)
    ctx->pc = 0x222d6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x222d70: 0xfd420040  sd          $v0, 0x40($t2)
    ctx->pc = 0x222d70u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 64), GPR_U64(ctx, 2));
    // 0x222d74: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x222d74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x222d78: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x222d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222d7c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x222d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x222d80: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x222d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x222d84: 0x83a60223  lb          $a2, 0x223($sp)
    ctx->pc = 0x222d84u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 547)));
    // 0x222d88: 0xc42cce00  lwc1        $f12, -0x3200($at)
    ctx->pc = 0x222d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x222d8c: 0x83a3023b  lb          $v1, 0x23B($sp)
    ctx->pc = 0x222d8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 571)));
    // 0x222d90: 0x83a20253  lb          $v0, 0x253($sp)
    ctx->pc = 0x222d90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 595)));
    // 0x222d94: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x222d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
    // 0x222d98: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x222d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
    // 0x222d9c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222D9Cu;
    SET_GPR_U32(ctx, 31, 0x222DA4u);
    ctx->pc = 0x222DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222D9Cu;
            // 0x222da0: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DA4u; }
        if (ctx->pc != 0x222DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DA4u; }
        if (ctx->pc != 0x222DA4u) { return; }
    }
    ctx->pc = 0x222DA4u;
label_222da4:
    // 0x222da4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x222da4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222da8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222dac: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x222dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x222db0: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x222db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x222db4: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x222db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222db8: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x222DB8u;
    SET_GPR_U32(ctx, 31, 0x222DC0u);
    ctx->pc = 0x222DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222DB8u;
            // 0x222dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DC0u; }
        if (ctx->pc != 0x222DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DC0u; }
        if (ctx->pc != 0x222DC0u) { return; }
    }
    ctx->pc = 0x222DC0u;
label_222dc0:
    // 0x222dc0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222dc4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x222DC4u;
    SET_GPR_U32(ctx, 31, 0x222DCCu);
    ctx->pc = 0x222DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222DC4u;
            // 0x222dc8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DCCu; }
        if (ctx->pc != 0x222DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DCCu; }
        if (ctx->pc != 0x222DCCu) { return; }
    }
    ctx->pc = 0x222DCCu;
label_222dcc:
    // 0x222dcc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222dd0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x222dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x222dd4: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x222dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x222dd8: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x222dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x222ddc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x222DDCu;
    SET_GPR_U32(ctx, 31, 0x222DE4u);
    ctx->pc = 0x222DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222DDCu;
            // 0x222de0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DE4u; }
        if (ctx->pc != 0x222DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222DE4u; }
        if (ctx->pc != 0x222DE4u) { return; }
    }
    ctx->pc = 0x222DE4u;
label_222de4:
    // 0x222de4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x222de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x222de8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222df0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x222df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x222df4: 0x46150580  add.s       $f22, $f0, $f21
    ctx->pc = 0x222df4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x222df8: 0x46140540  add.s       $f21, $f0, $f20
    ctx->pc = 0x222df8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x222dfc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x222dfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x222e00: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x222E00u;
    SET_GPR_U32(ctx, 31, 0x222E08u);
    ctx->pc = 0x222E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E00u;
            // 0x222e04: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E08u; }
        if (ctx->pc != 0x222E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E08u; }
        if (ctx->pc != 0x222E08u) { return; }
    }
    ctx->pc = 0x222E08u;
label_222e08:
    // 0x222e08: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x222e08u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222e0c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x222e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x222e10: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x222e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222e14: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222e18: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x222e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x222e1c: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x222e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222e20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222e24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222e28: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x222e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x222e2c: 0x4602b080  add.s       $f2, $f22, $f2
    ctx->pc = 0x222e2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x222e30: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x222e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x222e34: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x222e34u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x222e38: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x222e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x222e3c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x222E3Cu;
    SET_GPR_U32(ctx, 31, 0x222E44u);
    ctx->pc = 0x222E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E3Cu;
            // 0x222e40: 0x46021b00  add.s       $f12, $f3, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E44u; }
        if (ctx->pc != 0x222E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E44u; }
        if (ctx->pc != 0x222E44u) { return; }
    }
    ctx->pc = 0x222E44u;
label_222e44:
    // 0x222e44: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x222E44u;
    SET_GPR_U32(ctx, 31, 0x222E4Cu);
    ctx->pc = 0x222E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E44u;
            // 0x222e48: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E4Cu; }
        if (ctx->pc != 0x222E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E4Cu; }
        if (ctx->pc != 0x222E4Cu) { return; }
    }
    ctx->pc = 0x222E4Cu;
label_222e4c:
    // 0x222e4c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222e50: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x222E50u;
    SET_GPR_U32(ctx, 31, 0x222E58u);
    ctx->pc = 0x222E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E50u;
            // 0x222e54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E58u; }
        if (ctx->pc != 0x222E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E58u; }
        if (ctx->pc != 0x222E58u) { return; }
    }
    ctx->pc = 0x222E58u;
label_222e58:
    // 0x222e58: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222e5c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x222E5Cu;
    SET_GPR_U32(ctx, 31, 0x222E64u);
    ctx->pc = 0x222E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E5Cu;
            // 0x222e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E64u; }
        if (ctx->pc != 0x222E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E64u; }
        if (ctx->pc != 0x222E64u) { return; }
    }
    ctx->pc = 0x222E64u;
label_222e64:
    // 0x222e64: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222e68: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x222E68u;
    SET_GPR_U32(ctx, 31, 0x222E70u);
    ctx->pc = 0x222E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E68u;
            // 0x222e6c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E70u; }
        if (ctx->pc != 0x222E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E70u; }
        if (ctx->pc != 0x222E70u) { return; }
    }
    ctx->pc = 0x222E70u;
label_222e70:
    // 0x222e70: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x222e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x222e74: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x222E74u;
    SET_GPR_U32(ctx, 31, 0x222E7Cu);
    ctx->pc = 0x222E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E74u;
            // 0x222e78: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E7Cu; }
        if (ctx->pc != 0x222E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E7Cu; }
        if (ctx->pc != 0x222E7Cu) { return; }
    }
    ctx->pc = 0x222E7Cu;
label_222e7c:
    // 0x222e7c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x222e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x222e80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222e84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x222e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e88: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x222e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e8c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x222E8Cu;
    SET_GPR_U32(ctx, 31, 0x222E94u);
    ctx->pc = 0x222E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E8Cu;
            // 0x222e90: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E94u; }
        if (ctx->pc != 0x222E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E94u; }
        if (ctx->pc != 0x222E94u) { return; }
    }
    ctx->pc = 0x222E94u;
label_222e94:
    // 0x222e94: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x222e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x222e98: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x222e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x222e9c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x222e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_222ea0:
    // 0x222ea0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x222ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x222ea4: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x222ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x222ea8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x222ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222eac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x222eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222eb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222EB0u;
    SET_GPR_U32(ctx, 31, 0x222EB8u);
    ctx->pc = 0x222EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222EB0u;
            // 0x222eb4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EB8u; }
        if (ctx->pc != 0x222EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222EB8u; }
        if (ctx->pc != 0x222EB8u) { return; }
    }
    ctx->pc = 0x222EB8u;
label_222eb8:
    // 0x222eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ebc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x222ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x222ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222ec4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x222EC4u;
    SET_GPR_U32(ctx, 31, 0x222ECCu);
    ctx->pc = 0x222EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222EC4u;
            // 0x222ec8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222ECCu; }
        if (ctx->pc != 0x222ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222ECCu; }
        if (ctx->pc != 0x222ECCu) { return; }
    }
    ctx->pc = 0x222ECCu;
label_222ecc:
    // 0x222ecc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ed0: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x222ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x222ed4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x222ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x222ed8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x222ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222edc: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x222edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x222ee0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x222ee0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ee4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x222ee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222ee8: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x222ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x222eec: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x222eecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x222ef0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x222ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_222ef4:
    // 0x222ef4: 0x0  nop
    ctx->pc = 0x222ef4u;
    // NOP
    // 0x222ef8: 0x3dd1021  addu        $v0, $fp, $sp
    ctx->pc = 0x222ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 29)));
    // 0x222efc: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x222efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x222f00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x222f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222f04: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x222f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x222f08: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x222f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222f0c: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x222f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x222f10: 0xc04d320  jal         func_134C80
    ctx->pc = 0x222F10u;
    SET_GPR_U32(ctx, 31, 0x222F18u);
    ctx->pc = 0x222F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F10u;
            // 0x222f14: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F18u; }
        if (ctx->pc != 0x222F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F18u; }
        if (ctx->pc != 0x222F18u) { return; }
    }
    ctx->pc = 0x222F18u;
label_222f18:
    // 0x222f18: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x222f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x222f1c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222f20: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x222f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x222f24: 0x24530220  addiu       $s3, $v0, 0x220
    ctx->pc = 0x222f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x222f28: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x222f28u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x222f2c: 0x82660001  lb          $a2, 0x1($s3)
    ctx->pc = 0x222f2cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x222f30: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x222F30u;
    SET_GPR_U32(ctx, 31, 0x222F38u);
    ctx->pc = 0x222F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F30u;
            // 0x222f34: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F38u; }
        if (ctx->pc != 0x222F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F38u; }
        if (ctx->pc != 0x222F38u) { return; }
    }
    ctx->pc = 0x222F38u;
label_222f38:
    // 0x222f38: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222f3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x222f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x222f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f44: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x222F44u;
    SET_GPR_U32(ctx, 31, 0x222F4Cu);
    ctx->pc = 0x222F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F44u;
            // 0x222f48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F4Cu; }
        if (ctx->pc != 0x222F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F4Cu; }
        if (ctx->pc != 0x222F4Cu) { return; }
    }
    ctx->pc = 0x222F4Cu;
label_222f4c:
    // 0x222f4c: 0x82660002  lb          $a2, 0x2($s3)
    ctx->pc = 0x222f4cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x222f50: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222f54: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x222f54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x222f58: 0x26750002  addiu       $s5, $s3, 0x2
    ctx->pc = 0x222f58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x222f5c: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x222f5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x222f60: 0x82620003  lb          $v0, 0x3($s3)
    ctx->pc = 0x222f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x222f64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x222f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x222f68: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x222F68u;
    SET_GPR_U32(ctx, 31, 0x222F70u);
    ctx->pc = 0x222F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F68u;
            // 0x222f6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F70u; }
        if (ctx->pc != 0x222F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F70u; }
        if (ctx->pc != 0x222F70u) { return; }
    }
    ctx->pc = 0x222F70u;
label_222f70:
    // 0x222f70: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x222f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x222f74: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222f78: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x222f78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x222f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f80: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x222f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x222f84: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x222f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x222f88: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x222f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x222f8c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x222f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x222f90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x222f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x222f94: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x222f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x222f98: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x222F98u;
    SET_GPR_U32(ctx, 31, 0x222FA0u);
    ctx->pc = 0x222F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F98u;
            // 0x222f9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FA0u; }
        if (ctx->pc != 0x222FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FA0u; }
        if (ctx->pc != 0x222FA0u) { return; }
    }
    ctx->pc = 0x222FA0u;
label_222fa0:
    // 0x222fa0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x222fa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x222fa4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222fa8: 0x82650004  lb          $a1, 0x4($s3)
    ctx->pc = 0x222fa8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x222fac: 0x26770005  addiu       $s7, $s3, 0x5
    ctx->pc = 0x222facu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x222fb0: 0x82660005  lb          $a2, 0x5($s3)
    ctx->pc = 0x222fb0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x222fb4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x222fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x222fb8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x222FB8u;
    SET_GPR_U32(ctx, 31, 0x222FC0u);
    ctx->pc = 0x222FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222FB8u;
            // 0x222fbc: 0x26750004  addiu       $s5, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FC0u; }
        if (ctx->pc != 0x222FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FC0u; }
        if (ctx->pc != 0x222FC0u) { return; }
    }
    ctx->pc = 0x222FC0u;
label_222fc0:
    // 0x222fc0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x222fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x222fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fcc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x222FCCu;
    SET_GPR_U32(ctx, 31, 0x222FD4u);
    ctx->pc = 0x222FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222FCCu;
            // 0x222fd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FD4u; }
        if (ctx->pc != 0x222FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FD4u; }
        if (ctx->pc != 0x222FD4u) { return; }
    }
    ctx->pc = 0x222FD4u;
label_222fd4:
    // 0x222fd4: 0x82a60000  lb          $a2, 0x0($s5)
    ctx->pc = 0x222fd4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x222fd8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222fdc: 0x82650006  lb          $a1, 0x6($s3)
    ctx->pc = 0x222fdcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x222fe0: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x222fe0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x222fe4: 0x82620007  lb          $v0, 0x7($s3)
    ctx->pc = 0x222fe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x222fe8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x222fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x222fec: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x222FECu;
    SET_GPR_U32(ctx, 31, 0x222FF4u);
    ctx->pc = 0x222FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222FECu;
            // 0x222ff0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FF4u; }
        if (ctx->pc != 0x222FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FF4u; }
        if (ctx->pc != 0x222FF4u) { return; }
    }
    ctx->pc = 0x222FF4u;
label_222ff4:
    // 0x222ff4: 0x2162821  addu        $a1, $s0, $s6
    ctx->pc = 0x222ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x222ff8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x222ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x222ffc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x222ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223000: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x223000u;
    SET_GPR_U32(ctx, 31, 0x223008u);
    ctx->pc = 0x223004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223000u;
            // 0x223004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223008u; }
        if (ctx->pc != 0x223008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223008u; }
        if (ctx->pc != 0x223008u) { return; }
    }
    ctx->pc = 0x223008u;
label_223008:
    // 0x223008: 0x82650008  lb          $a1, 0x8($s3)
    ctx->pc = 0x223008u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x22300c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x22300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223010: 0x82660009  lb          $a2, 0x9($s3)
    ctx->pc = 0x223010u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x223014: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x223014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x223018: 0x26750008  addiu       $s5, $s3, 0x8
    ctx->pc = 0x223018u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x22301c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22301Cu;
    SET_GPR_U32(ctx, 31, 0x223024u);
    ctx->pc = 0x223020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22301Cu;
            // 0x223020: 0x26770009  addiu       $s7, $s3, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223024u; }
        if (ctx->pc != 0x223024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223024u; }
        if (ctx->pc != 0x223024u) { return; }
    }
    ctx->pc = 0x223024u;
label_223024:
    // 0x223024: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22302c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22302cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223030: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x223030u;
    SET_GPR_U32(ctx, 31, 0x223038u);
    ctx->pc = 0x223034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223030u;
            // 0x223034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223038u; }
        if (ctx->pc != 0x223038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223038u; }
        if (ctx->pc != 0x223038u) { return; }
    }
    ctx->pc = 0x223038u;
label_223038:
    // 0x223038: 0x82a50000  lb          $a1, 0x0($s5)
    ctx->pc = 0x223038u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22303c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x22303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223040: 0x8266000a  lb          $a2, 0xA($s3)
    ctx->pc = 0x223040u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x223044: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x223044u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x223048: 0x8262000b  lb          $v0, 0xB($s3)
    ctx->pc = 0x223048u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 11)));
    // 0x22304c: 0x2675000a  addiu       $s5, $s3, 0xA
    ctx->pc = 0x22304cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
    // 0x223050: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x223050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x223054: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x223054u;
    SET_GPR_U32(ctx, 31, 0x22305Cu);
    ctx->pc = 0x223058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223054u;
            // 0x223058: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22305Cu; }
        if (ctx->pc != 0x22305Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22305Cu; }
        if (ctx->pc != 0x22305Cu) { return; }
    }
    ctx->pc = 0x22305Cu;
label_22305c:
    // 0x22305c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x22305cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x223060: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x223060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223064: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x223068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22306c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x22306Cu;
    SET_GPR_U32(ctx, 31, 0x223074u);
    ctx->pc = 0x223070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22306Cu;
            // 0x223070: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223074u; }
        if (ctx->pc != 0x223074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223074u; }
        if (ctx->pc != 0x223074u) { return; }
    }
    ctx->pc = 0x223074u;
label_223074:
    // 0x223074: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x223074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x223078: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x223078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22307c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22307Cu;
    SET_GPR_U32(ctx, 31, 0x223084u);
    ctx->pc = 0x223080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22307Cu;
            // 0x223080: 0x2631fffa  addiu       $s1, $s1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223084u; }
        if (ctx->pc != 0x223084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223084u; }
        if (ctx->pc != 0x223084u) { return; }
    }
    ctx->pc = 0x223084u;
label_223084:
    // 0x223084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223088: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x223088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22308c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x22308cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x223090: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x223090u;
    {
        const bool branch_taken_0x223090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223090u;
            // 0x223094: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223090) {
            ctx->pc = 0x222EF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222ef4;
        }
    }
    ctx->pc = 0x223098u;
    // 0x223098: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x223098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x22309c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22309cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2230a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2230a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2230a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2230a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2230a8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2230a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2230ac: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2230acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2230b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2230b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2230b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2230b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2230b8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2230b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2230bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2230bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2230c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2230c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2230c4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2230c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2230c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2230c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2230cc: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2230ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2230d0: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
    ctx->pc = 0x2230D0u;
    {
        const bool branch_taken_0x2230d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2230D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2230D0u;
            // 0x2230d4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230d0) {
            ctx->pc = 0x222EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222ea0;
        }
    }
    ctx->pc = 0x2230D8u;
    // 0x2230d8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2230D8u;
    SET_GPR_U32(ctx, 31, 0x2230E0u);
    ctx->pc = 0x2230DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2230D8u;
            // 0x2230dc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230E0u; }
        if (ctx->pc != 0x2230E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230E0u; }
        if (ctx->pc != 0x2230E0u) { return; }
    }
    ctx->pc = 0x2230E0u;
label_2230e0:
    // 0x2230e0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2230e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2230e4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2230e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2230e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2230e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2230ec: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x2230ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2230f0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2230f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2230f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2230f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230f8: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2230f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2230fc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2230fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x223100: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x223100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223104: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x223104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223108: 0x46021d00  add.s       $f20, $f3, $f2
    ctx->pc = 0x223108u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x22310c: 0x3c024284  lui         $v0, 0x4284
    ctx->pc = 0x22310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17028 << 16));
    // 0x223110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223114: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223114u;
    SET_GPR_U32(ctx, 31, 0x22311Cu);
    ctx->pc = 0x223118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223114u;
            // 0x223118: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22311Cu; }
        if (ctx->pc != 0x22311Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22311Cu; }
        if (ctx->pc != 0x22311Cu) { return; }
    }
    ctx->pc = 0x22311Cu;
label_22311c:
    // 0x22311c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x22311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223120: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x223120u;
    SET_GPR_U32(ctx, 31, 0x223128u);
    ctx->pc = 0x223124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223120u;
            // 0x223124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223128u; }
        if (ctx->pc != 0x223128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223128u; }
        if (ctx->pc != 0x223128u) { return; }
    }
    ctx->pc = 0x223128u;
label_223128:
    // 0x223128: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x22312c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22312Cu;
    SET_GPR_U32(ctx, 31, 0x223134u);
    ctx->pc = 0x223130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22312Cu;
            // 0x223130: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223134u; }
        if (ctx->pc != 0x223134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223134u; }
        if (ctx->pc != 0x223134u) { return; }
    }
    ctx->pc = 0x223134u;
label_223134:
    // 0x223134: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x223134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x223138: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x223138u;
    SET_GPR_U32(ctx, 31, 0x223140u);
    ctx->pc = 0x22313Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223138u;
            // 0x22313c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223140u; }
        if (ctx->pc != 0x223140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223140u; }
        if (ctx->pc != 0x223140u) { return; }
    }
    ctx->pc = 0x223140u;
label_223140:
    // 0x223140: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x223140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223144: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223148: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x223148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22314c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22314cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223150: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223150u;
    SET_GPR_U32(ctx, 31, 0x223158u);
    ctx->pc = 0x223154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223150u;
            // 0x223154: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223158u; }
        if (ctx->pc != 0x223158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223158u; }
        if (ctx->pc != 0x223158u) { return; }
    }
    ctx->pc = 0x223158u;
label_223158:
    // 0x223158: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223158u;
    SET_GPR_U32(ctx, 31, 0x223160u);
    ctx->pc = 0x22315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223158u;
            // 0x22315c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223160u; }
        if (ctx->pc != 0x223160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223160u; }
        if (ctx->pc != 0x223160u) { return; }
    }
    ctx->pc = 0x223160u;
label_223160:
    // 0x223160: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x223160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x223164: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223164u;
    SET_GPR_U32(ctx, 31, 0x22316Cu);
    ctx->pc = 0x223168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223164u;
            // 0x223168: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22316Cu; }
        if (ctx->pc != 0x22316Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22316Cu; }
        if (ctx->pc != 0x22316Cu) { return; }
    }
    ctx->pc = 0x22316Cu;
label_22316c:
    // 0x22316c: 0x8fa702b8  lw          $a3, 0x2B8($sp)
    ctx->pc = 0x22316cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x223170: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x223170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223174: 0x8fa802bc  lw          $t0, 0x2BC($sp)
    ctx->pc = 0x223174u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x223178: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22317c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22317Cu;
    SET_GPR_U32(ctx, 31, 0x223184u);
    ctx->pc = 0x223180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22317Cu;
            // 0x223180: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223184u; }
        if (ctx->pc != 0x223184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223184u; }
        if (ctx->pc != 0x223184u) { return; }
    }
    ctx->pc = 0x223184u;
label_223184:
    // 0x223184: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223188: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x223188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x22318c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x22318Cu;
    SET_GPR_U32(ctx, 31, 0x223194u);
    ctx->pc = 0x223190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22318Cu;
            // 0x223190: 0x27a602b0  addiu       $a2, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223194u; }
        if (ctx->pc != 0x223194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223194u; }
        if (ctx->pc != 0x223194u) { return; }
    }
    ctx->pc = 0x223194u;
label_223194:
    // 0x223194: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x223194u;
    SET_GPR_U32(ctx, 31, 0x22319Cu);
    ctx->pc = 0x223198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223194u;
            // 0x223198: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22319Cu; }
        if (ctx->pc != 0x22319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22319Cu; }
        if (ctx->pc != 0x22319Cu) { return; }
    }
    ctx->pc = 0x22319Cu;
label_22319c:
    // 0x22319c: 0xc78093a4  lwc1        $f0, -0x6C5C($gp)
    ctx->pc = 0x22319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2231a0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2231a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2231a4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2231a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2231a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2231a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2231ac: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2231ACu;
    SET_GPR_U32(ctx, 31, 0x2231B4u);
    ctx->pc = 0x2231B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2231ACu;
            // 0x2231b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231B4u; }
        if (ctx->pc != 0x2231B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231B4u; }
        if (ctx->pc != 0x2231B4u) { return; }
    }
    ctx->pc = 0x2231B4u;
label_2231b4:
    // 0x2231b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2231b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2231b8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2231b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2231bc: 0x24420530  addiu       $v0, $v0, 0x530
    ctx->pc = 0x2231bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
    // 0x2231c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2231c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2231c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2231c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2231c8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2231c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2231cc: 0x27a302c0  addiu       $v1, $sp, 0x2C0
    ctx->pc = 0x2231ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x2231d0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2231D0u;
    SET_GPR_U32(ctx, 31, 0x2231D8u);
    ctx->pc = 0x2231D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2231D0u;
            // 0x2231d4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231D8u; }
        if (ctx->pc != 0x2231D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231D8u; }
        if (ctx->pc != 0x2231D8u) { return; }
    }
    ctx->pc = 0x2231D8u;
label_2231d8:
    // 0x2231d8: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x2231d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2231dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2231dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2231e0: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x2231e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x2231e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2231e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2231e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2231e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2231ec: 0x26d7fff6  addiu       $s7, $s6, -0xA
    ctx->pc = 0x2231ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967286));
    // 0x2231f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2231f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2231f4: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x2231f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
    // 0x2231f8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2231F8u;
    SET_GPR_U32(ctx, 31, 0x223200u);
    ctx->pc = 0x2231FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2231F8u;
            // 0x2231fc: 0xafa202c8  sw          $v0, 0x2C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223200u; }
        if (ctx->pc != 0x223200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223200u; }
        if (ctx->pc != 0x223200u) { return; }
    }
    ctx->pc = 0x223200u;
label_223200:
    // 0x223200: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223204: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x223204u;
    SET_GPR_U32(ctx, 31, 0x22320Cu);
    ctx->pc = 0x223208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223204u;
            // 0x223208: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22320Cu; }
        if (ctx->pc != 0x22320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22320Cu; }
        if (ctx->pc != 0x22320Cu) { return; }
    }
    ctx->pc = 0x22320Cu;
label_22320c:
    // 0x22320c: 0x8f8593a0  lw          $a1, -0x6C60($gp)
    ctx->pc = 0x22320cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939552)));
    // 0x223210: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x223210u;
    SET_GPR_U32(ctx, 31, 0x223218u);
    ctx->pc = 0x223214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223210u;
            // 0x223214: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223218u; }
        if (ctx->pc != 0x223218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223218u; }
        if (ctx->pc != 0x223218u) { return; }
    }
    ctx->pc = 0x223218u;
label_223218:
    // 0x223218: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x223218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22321c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x22321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223220: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x223220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223224: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x223224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223228: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223228u;
    SET_GPR_U32(ctx, 31, 0x223230u);
    ctx->pc = 0x22322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223228u;
            // 0x22322c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223230u; }
        if (ctx->pc != 0x223230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223230u; }
        if (ctx->pc != 0x223230u) { return; }
    }
    ctx->pc = 0x223230u;
label_223230:
    // 0x223230: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x223230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223234: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x223234u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223238: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x223238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22323c:
    // 0x22323c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x223240: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x223240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x223244: 0x2442ce10  addiu       $v0, $v0, -0x31F0
    ctx->pc = 0x223244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954512));
    // 0x223248: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x223248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x22324c: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x22324cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x223250: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x223250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x223254: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x223254u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223258: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x223258u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22325c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x22325cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x223260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223264: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x223264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x223268: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x223268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22326c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x223270: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x223270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223274: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x223274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x223278: 0x46032540  add.s       $f21, $f4, $f3
    ctx->pc = 0x223278u;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x22327c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x22327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x223280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223284: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x223284u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x223288: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x223288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22328c: 0x24420470  addiu       $v0, $v0, 0x470
    ctx->pc = 0x22328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x223290: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x223290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223294: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x223294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x223298: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x223298u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22329c: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x22329cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2232a0: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x2232a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2232a4: 0x86280006  lh          $t0, 0x6($s1)
    ctx->pc = 0x2232a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2232a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2232A8u;
    SET_GPR_U32(ctx, 31, 0x2232B0u);
    ctx->pc = 0x2232ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232A8u;
            // 0x2232ac: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232B0u; }
        if (ctx->pc != 0x2232B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232B0u; }
        if (ctx->pc != 0x2232B0u) { return; }
    }
    ctx->pc = 0x2232B0u;
label_2232b0:
    // 0x2232b0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2232B0u;
    SET_GPR_U32(ctx, 31, 0x2232B8u);
    ctx->pc = 0x2232B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232B0u;
            // 0x2232b4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232B8u; }
        if (ctx->pc != 0x2232B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232B8u; }
        if (ctx->pc != 0x2232B8u) { return; }
    }
    ctx->pc = 0x2232B8u;
label_2232b8:
    // 0x2232b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2232b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2232bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2232C0u;
    SET_GPR_U32(ctx, 31, 0x2232C8u);
    ctx->pc = 0x2232C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232C0u;
            // 0x2232c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232C8u; }
        if (ctx->pc != 0x2232C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232C8u; }
        if (ctx->pc != 0x2232C8u) { return; }
    }
    ctx->pc = 0x2232C8u;
label_2232c8:
    // 0x2232c8: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x2232c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2232cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2232ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232d0: 0x86280006  lh          $t0, 0x6($s1)
    ctx->pc = 0x2232d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2232d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2232d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2232D8u;
    SET_GPR_U32(ctx, 31, 0x2232E0u);
    ctx->pc = 0x2232DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232D8u;
            // 0x2232dc: 0x27a40340  addiu       $a0, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232E0u; }
        if (ctx->pc != 0x2232E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232E0u; }
        if (ctx->pc != 0x2232E0u) { return; }
    }
    ctx->pc = 0x2232E0u;
label_2232e0:
    // 0x2232e0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2232e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2232e4: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2232e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x2232e8: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2232E8u;
    SET_GPR_U32(ctx, 31, 0x2232F0u);
    ctx->pc = 0x2232ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232E8u;
            // 0x2232ec: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232F0u; }
        if (ctx->pc != 0x2232F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232F0u; }
        if (ctx->pc != 0x2232F0u) { return; }
    }
    ctx->pc = 0x2232F0u;
label_2232f0:
    // 0x2232f0: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x2232f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2232f4: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x2232f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2232f8: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x2232f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2232fc: 0x8626000a  lh          $a2, 0xA($s1)
    ctx->pc = 0x2232fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x223300: 0x8627000c  lh          $a3, 0xC($s1)
    ctx->pc = 0x223300u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x223304: 0x8628000e  lh          $t0, 0xE($s1)
    ctx->pc = 0x223304u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x223308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22330c: 0x0  nop
    ctx->pc = 0x22330cu;
    // NOP
    // 0x223310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223314: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223314u;
    SET_GPR_U32(ctx, 31, 0x22331Cu);
    ctx->pc = 0x223318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223314u;
            // 0x223318: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22331Cu; }
        if (ctx->pc != 0x22331Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22331Cu; }
        if (ctx->pc != 0x22331Cu) { return; }
    }
    ctx->pc = 0x22331Cu;
label_22331c:
    // 0x22331c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22331Cu;
    SET_GPR_U32(ctx, 31, 0x223324u);
    ctx->pc = 0x223320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22331Cu;
            // 0x223320: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223324u; }
        if (ctx->pc != 0x223324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223324u; }
        if (ctx->pc != 0x223324u) { return; }
    }
    ctx->pc = 0x223324u;
label_223324:
    // 0x223324: 0x8628000e  lh          $t0, 0xE($s1)
    ctx->pc = 0x223324u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x223328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x223328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22332c: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x22332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x223330: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x223330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223334: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223334u;
    SET_GPR_U32(ctx, 31, 0x22333Cu);
    ctx->pc = 0x223338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223334u;
            // 0x223338: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22333Cu; }
        if (ctx->pc != 0x22333Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22333Cu; }
        if (ctx->pc != 0x22333Cu) { return; }
    }
    ctx->pc = 0x22333Cu;
label_22333c:
    // 0x22333c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x22333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223340: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x223340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x223344: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x223344u;
    SET_GPR_U32(ctx, 31, 0x22334Cu);
    ctx->pc = 0x223348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223344u;
            // 0x223348: 0x27a60370  addiu       $a2, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22334Cu; }
        if (ctx->pc != 0x22334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22334Cu; }
        if (ctx->pc != 0x22334Cu) { return; }
    }
    ctx->pc = 0x22334Cu;
label_22334c:
    // 0x22334c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x22334cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223350: 0x86250010  lh          $a1, 0x10($s1)
    ctx->pc = 0x223350u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x223354: 0x86260012  lh          $a2, 0x12($s1)
    ctx->pc = 0x223354u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x223358: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x223358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x22335c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22335cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223360: 0x86270014  lh          $a3, 0x14($s1)
    ctx->pc = 0x223360u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x223364: 0x86280016  lh          $t0, 0x16($s1)
    ctx->pc = 0x223364u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x223368: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223368u;
    SET_GPR_U32(ctx, 31, 0x223370u);
    ctx->pc = 0x22336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223368u;
            // 0x22336c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223370u; }
        if (ctx->pc != 0x223370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223370u; }
        if (ctx->pc != 0x223370u) { return; }
    }
    ctx->pc = 0x223370u;
label_223370:
    // 0x223370: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223370u;
    SET_GPR_U32(ctx, 31, 0x223378u);
    ctx->pc = 0x223374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223370u;
            // 0x223374: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223378u; }
        if (ctx->pc != 0x223378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223378u; }
        if (ctx->pc != 0x223378u) { return; }
    }
    ctx->pc = 0x223378u;
label_223378:
    // 0x223378: 0x86270014  lh          $a3, 0x14($s1)
    ctx->pc = 0x223378u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x22337c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22337cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223380: 0x86280016  lh          $t0, 0x16($s1)
    ctx->pc = 0x223380u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x223384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x223384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223388: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x223388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x22338c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22338Cu;
    SET_GPR_U32(ctx, 31, 0x223394u);
    ctx->pc = 0x223390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22338Cu;
            // 0x223390: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223394u; }
        if (ctx->pc != 0x223394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223394u; }
        if (ctx->pc != 0x223394u) { return; }
    }
    ctx->pc = 0x223394u;
label_223394:
    // 0x223394: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223398: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x223398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x22339c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x22339Cu;
    SET_GPR_U32(ctx, 31, 0x2233A4u);
    ctx->pc = 0x2233A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22339Cu;
            // 0x2233a0: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233A4u; }
        if (ctx->pc != 0x2233A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233A4u; }
        if (ctx->pc != 0x2233A4u) { return; }
    }
    ctx->pc = 0x2233A4u;
label_2233a4:
    // 0x2233a4: 0x93a204f9  lbu         $v0, 0x4F9($sp)
    ctx->pc = 0x2233a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1273)));
    // 0x2233a8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x2233a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2233ac: 0x93be04f8  lbu         $fp, 0x4F8($sp)
    ctx->pc = 0x2233acu;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1272)));
    // 0x2233b0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2233b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2233b4: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2233b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2233b8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2233b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x2233bc: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x2233bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2233c0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2233C0u;
    SET_GPR_U32(ctx, 31, 0x2233C8u);
    ctx->pc = 0x2233C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2233C0u;
            // 0x2233c4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233C8u; }
        if (ctx->pc != 0x2233C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233C8u; }
        if (ctx->pc != 0x2233C8u) { return; }
    }
    ctx->pc = 0x2233C8u;
label_2233c8:
    // 0x2233c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2233c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2233cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2233ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2233d0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2233D0u;
    SET_GPR_U32(ctx, 31, 0x2233D8u);
    ctx->pc = 0x2233D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2233D0u;
            // 0x2233d4: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233D8u; }
        if (ctx->pc != 0x2233D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233D8u; }
        if (ctx->pc != 0x2233D8u) { return; }
    }
    ctx->pc = 0x2233D8u;
label_2233d8:
    // 0x2233d8: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2233d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2233dc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2233dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2233e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233e4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2233e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2233e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2233ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2233ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233f0: 0x27a903a0  addiu       $t1, $sp, 0x3A0
    ctx->pc = 0x2233f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2233f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2233f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233f8: 0xc0886d8  jal         func_221B60
    ctx->pc = 0x2233F8u;
    SET_GPR_U32(ctx, 31, 0x223400u);
    ctx->pc = 0x2233FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2233F8u;
            // 0x2233fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221B60u;
    if (runtime->hasFunction(0x221B60u)) {
        auto targetFn = runtime->lookupFunction(0x221B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223400u; }
        if (ctx->pc != 0x223400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber2__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223400u; }
        if (ctx->pc != 0x223400u) { return; }
    }
    ctx->pc = 0x223400u;
label_223400:
    // 0x223400: 0xc0945b0  jal         func_2516C0
    ctx->pc = 0x223400u;
    SET_GPR_U32(ctx, 31, 0x223408u);
    ctx->pc = 0x223404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223400u;
            // 0x223404: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2516C0u;
    if (runtime->hasFunction(0x2516C0u)) {
        auto targetFn = runtime->lookupFunction(0x2516C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223408u; }
        if (ctx->pc != 0x223408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumberKeta__Fi_0x2516c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223408u; }
        if (ctx->pc != 0x223408u) { return; }
    }
    ctx->pc = 0x223408u;
label_223408:
    // 0x223408: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x223408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22340c: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x22340cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x223410: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x223410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x223414: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x223414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x223418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22341c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22341cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223420: 0x0  nop
    ctx->pc = 0x223420u;
    // NOP
    // 0x223424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x223424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x223428: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x223428u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x22342c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22342Cu;
    SET_GPR_U32(ctx, 31, 0x223434u);
    ctx->pc = 0x223430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22342Cu;
            // 0x223430: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223434u; }
        if (ctx->pc != 0x223434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223434u; }
        if (ctx->pc != 0x223434u) { return; }
    }
    ctx->pc = 0x223434u;
label_223434:
    // 0x223434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x223434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223438: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x223438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x22343c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x223440: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x223440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x223444: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x223444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x223448: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223448u;
    SET_GPR_U32(ctx, 31, 0x223450u);
    ctx->pc = 0x22344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223448u;
            // 0x22344c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223450u; }
        if (ctx->pc != 0x223450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223450u; }
        if (ctx->pc != 0x223450u) { return; }
    }
    ctx->pc = 0x223450u;
label_223450:
    // 0x223450: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x223450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x223454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223458: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223458u;
    SET_GPR_U32(ctx, 31, 0x223460u);
    ctx->pc = 0x22345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223458u;
            // 0x22345c: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223460u; }
        if (ctx->pc != 0x223460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223460u; }
        if (ctx->pc != 0x223460u) { return; }
    }
    ctx->pc = 0x223460u;
label_223460:
    // 0x223460: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x223460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223464: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x223464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x223468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22346c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22346cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x223470: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223470u;
    SET_GPR_U32(ctx, 31, 0x223478u);
    ctx->pc = 0x223474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223470u;
            // 0x223474: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223478u; }
        if (ctx->pc != 0x223478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223478u; }
        if (ctx->pc != 0x223478u) { return; }
    }
    ctx->pc = 0x223478u;
label_223478:
    // 0x223478: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x22347c: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x22347cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x223480: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x223480u;
    SET_GPR_U32(ctx, 31, 0x223488u);
    ctx->pc = 0x223484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223480u;
            // 0x223484: 0x27a603c0  addiu       $a2, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223488u; }
        if (ctx->pc != 0x223488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223488u; }
        if (ctx->pc != 0x223488u) { return; }
    }
    ctx->pc = 0x223488u;
label_223488:
    // 0x223488: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x223488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22348c: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x22348Cu;
    {
        const bool branch_taken_0x22348c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22348c) {
            ctx->pc = 0x223558u;
            goto label_223558;
        }
    }
    ctx->pc = 0x223494u;
    // 0x223494: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x223494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x223498: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x22349c: 0x8fa602c4  lw          $a2, 0x2C4($sp)
    ctx->pc = 0x22349cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2234a0: 0x8fa702c8  lw          $a3, 0x2C8($sp)
    ctx->pc = 0x2234a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2234a4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2234A4u;
    SET_GPR_U32(ctx, 31, 0x2234ACu);
    ctx->pc = 0x2234A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234A4u;
            // 0x2234a8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234ACu; }
        if (ctx->pc != 0x2234ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234ACu; }
        if (ctx->pc != 0x2234ACu) { return; }
    }
    ctx->pc = 0x2234ACu;
label_2234ac:
    // 0x2234ac: 0x93a504fc  lbu         $a1, 0x4FC($sp)
    ctx->pc = 0x2234acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1276)));
    // 0x2234b0: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x2234b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2234b4: 0x93a604fd  lbu         $a2, 0x4FD($sp)
    ctx->pc = 0x2234b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1277)));
    // 0x2234b8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2234b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2234bc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2234BCu;
    SET_GPR_U32(ctx, 31, 0x2234C4u);
    ctx->pc = 0x2234C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234BCu;
            // 0x2234c0: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234C4u; }
        if (ctx->pc != 0x2234C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234C4u; }
        if (ctx->pc != 0x2234C4u) { return; }
    }
    ctx->pc = 0x2234C4u;
label_2234c4:
    // 0x2234c4: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x2234c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2234c8: 0x2627fffe  addiu       $a3, $s1, -0x2
    ctx->pc = 0x2234c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x2234cc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2234ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2234d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2234d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234d4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2234d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234d8: 0x27a903d0  addiu       $t1, $sp, 0x3D0
    ctx->pc = 0x2234d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x2234dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2234dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234e0: 0xc0886d8  jal         func_221B60
    ctx->pc = 0x2234E0u;
    SET_GPR_U32(ctx, 31, 0x2234E8u);
    ctx->pc = 0x2234E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234E0u;
            // 0x2234e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221B60u;
    if (runtime->hasFunction(0x221B60u)) {
        auto targetFn = runtime->lookupFunction(0x221B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234E8u; }
        if (ctx->pc != 0x2234E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber2__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234E8u; }
        if (ctx->pc != 0x2234E8u) { return; }
    }
    ctx->pc = 0x2234E8u;
label_2234e8:
    // 0x2234e8: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x2234e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x2234ec: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2234ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2234f0: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x2234f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2234f4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2234f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2234f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2234F8u;
    SET_GPR_U32(ctx, 31, 0x223500u);
    ctx->pc = 0x2234FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234F8u;
            // 0x2234fc: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223500u; }
        if (ctx->pc != 0x223500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223500u; }
        if (ctx->pc != 0x223500u) { return; }
    }
    ctx->pc = 0x223500u;
label_223500:
    // 0x223500: 0xc0945b0  jal         func_2516C0
    ctx->pc = 0x223500u;
    SET_GPR_U32(ctx, 31, 0x223508u);
    ctx->pc = 0x223504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223500u;
            // 0x223504: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2516C0u;
    if (runtime->hasFunction(0x2516C0u)) {
        auto targetFn = runtime->lookupFunction(0x2516C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223508u; }
        if (ctx->pc != 0x223508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumberKeta__Fi_0x2516c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223508u; }
        if (ctx->pc != 0x223508u) { return; }
    }
    ctx->pc = 0x223508u;
label_223508:
    // 0x223508: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x223508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22350c: 0x2623fff2  addiu       $v1, $s1, -0xE
    ctx->pc = 0x22350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967282));
    // 0x223510: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x223510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x223514: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x223514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223518: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22351c: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x22351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x223520: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x223520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x223524: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x223524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x223528: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223528u;
    SET_GPR_U32(ctx, 31, 0x223530u);
    ctx->pc = 0x22352Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223528u;
            // 0x22352c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223530u; }
        if (ctx->pc != 0x223530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223530u; }
        if (ctx->pc != 0x223530u) { return; }
    }
    ctx->pc = 0x223530u;
label_223530:
    // 0x223530: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223534: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x223534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x223538: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x223538u;
    SET_GPR_U32(ctx, 31, 0x223540u);
    ctx->pc = 0x22353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223538u;
            // 0x22353c: 0x27a603f0  addiu       $a2, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223540u; }
        if (ctx->pc != 0x223540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223540u; }
        if (ctx->pc != 0x223540u) { return; }
    }
    ctx->pc = 0x223540u;
label_223540:
    // 0x223540: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x223540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223544: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223548: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x223548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22354c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22354cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223550: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223550u;
    SET_GPR_U32(ctx, 31, 0x223558u);
    ctx->pc = 0x223554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223550u;
            // 0x223554: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223558u; }
        if (ctx->pc != 0x223558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223558u; }
        if (ctx->pc != 0x223558u) { return; }
    }
    ctx->pc = 0x223558u;
label_223558:
    // 0x223558: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x223558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22355c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22355Cu;
    {
        const bool branch_taken_0x22355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22355c) {
            ctx->pc = 0x2235C4u;
            goto label_2235c4;
        }
    }
    ctx->pc = 0x223564u;
    // 0x223564: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x223564u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x223568: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x223568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22356c: 0x278282c0  addiu       $v0, $gp, -0x7D40
    ctx->pc = 0x22356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935232));
    // 0x223570: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x223570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x223574: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x223574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x223578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22357c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x22357cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223580: 0x80460001  lb          $a2, 0x1($v0)
    ctx->pc = 0x223580u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x223584: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223584u;
    SET_GPR_U32(ctx, 31, 0x22358Cu);
    ctx->pc = 0x223588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223584u;
            // 0x223588: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22358Cu; }
        if (ctx->pc != 0x22358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22358Cu; }
        if (ctx->pc != 0x22358Cu) { return; }
    }
    ctx->pc = 0x22358Cu;
label_22358c:
    // 0x22358c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x223590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223594: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223594u;
    SET_GPR_U32(ctx, 31, 0x22359Cu);
    ctx->pc = 0x223598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223594u;
            // 0x223598: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22359Cu; }
        if (ctx->pc != 0x22359Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22359Cu; }
        if (ctx->pc != 0x22359Cu) { return; }
    }
    ctx->pc = 0x22359Cu;
label_22359c:
    // 0x22359c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x22359cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2235a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2235a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2235a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235a8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x2235a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2235ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2235ACu;
    SET_GPR_U32(ctx, 31, 0x2235B4u);
    ctx->pc = 0x2235B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2235ACu;
            // 0x2235b0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235B4u; }
        if (ctx->pc != 0x2235B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235B4u; }
        if (ctx->pc != 0x2235B4u) { return; }
    }
    ctx->pc = 0x2235B4u;
label_2235b4:
    // 0x2235b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2235b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2235b8: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x2235b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2235bc: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2235BCu;
    SET_GPR_U32(ctx, 31, 0x2235C4u);
    ctx->pc = 0x2235C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2235BCu;
            // 0x2235c0: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235C4u; }
        if (ctx->pc != 0x2235C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235C4u; }
        if (ctx->pc != 0x2235C4u) { return; }
    }
    ctx->pc = 0x2235C4u;
label_2235c4:
    // 0x2235c4: 0x0  nop
    ctx->pc = 0x2235c4u;
    // NOP
    // 0x2235c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2235c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2235cc: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x2235ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2235d0: 0x26d60006  addiu       $s6, $s6, 0x6
    ctx->pc = 0x2235d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
    // 0x2235d4: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x2235D4u;
    {
        const bool branch_taken_0x2235d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2235D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2235D4u;
            // 0x2235d8: 0x26520022  addiu       $s2, $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235d4) {
            ctx->pc = 0x22323Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22323c;
        }
    }
    ctx->pc = 0x2235DCu;
    // 0x2235dc: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2235dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2235e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2235e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2235e4: 0xc421ce00  lwc1        $f1, -0x3200($at)
    ctx->pc = 0x2235e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2235e8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2235e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2235ec: 0x27ab02d0  addiu       $t3, $sp, 0x2D0
    ctx->pc = 0x2235ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x2235f0: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x2235f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2235f4: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x2235f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2235f8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2235f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2235fc: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x2235fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x223600: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x223600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x223604: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x223604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223608: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22360c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22360cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x223610: 0x3c024376  lui         $v0, 0x4376
    ctx->pc = 0x223610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17270 << 16));
    // 0x223614: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x223614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x223618: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x223618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x22361c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22361cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x223620: 0x0  nop
    ctx->pc = 0x223620u;
    // NOP
    // 0x223624: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x223624u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x223628: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x223628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x22362c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x22362cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x223630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223634: 0xe423cdf4  swc1        $f3, -0x320C($at)
    ctx->pc = 0x223634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294954484), bits); }
    // 0x223638: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x223638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22363c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22363cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223640: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x223640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x223644: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x223644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x223648: 0xe420cdfc  swc1        $f0, -0x3204($at)
    ctx->pc = 0x223648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294954492), bits); }
    // 0x22364c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22364cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223650: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223658: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x223658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22365c: 0xe420cdf8  swc1        $f0, -0x3208($at)
    ctx->pc = 0x22365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294954488), bits); }
    // 0x223660: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223664: 0xe420cdf0  swc1        $f0, -0x3210($at)
    ctx->pc = 0x223664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294954480), bits); }
    // 0x223668: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x223668u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22366c: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x22366cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x223670: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x223670u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x223674: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x223674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x223678: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x223678u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
    // 0x22367c: 0x7d690010  sq          $t1, 0x10($t3)
    ctx->pc = 0x22367cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 9));
    // 0x223680: 0x7d630020  sq          $v1, 0x20($t3)
    ctx->pc = 0x223680u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), GPR_VEC(ctx, 3));
    // 0x223684: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223684u;
    SET_GPR_U32(ctx, 31, 0x22368Cu);
    ctx->pc = 0x223688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223684u;
            // 0x223688: 0x7d620030  sq          $v0, 0x30($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22368Cu; }
        if (ctx->pc != 0x22368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22368Cu; }
        if (ctx->pc != 0x22368Cu) { return; }
    }
    ctx->pc = 0x22368Cu;
label_22368c:
    // 0x22368c: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x22368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x223690: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x223690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x223694: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x223694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x223698: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x223698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22369c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22369Cu;
    SET_GPR_U32(ctx, 31, 0x2236A4u);
    ctx->pc = 0x2236A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22369Cu;
            // 0x2236a0: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236A4u; }
        if (ctx->pc != 0x2236A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236A4u; }
        if (ctx->pc != 0x2236A4u) { return; }
    }
    ctx->pc = 0x2236A4u;
label_2236a4:
    // 0x2236a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2236a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2236a8: 0x8c22ce30  lw          $v0, -0x31D0($at)
    ctx->pc = 0x2236a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954544)));
    // 0x2236ac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2236acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2236b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2236b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2236b4: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x2236b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2236b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2236b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2236bc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2236bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2236c0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2236c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2236c4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x2236c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2236c8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2236C8u;
    SET_GPR_U32(ctx, 31, 0x2236D0u);
    ctx->pc = 0x2236CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2236C8u;
            // 0x2236cc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236D0u; }
        if (ctx->pc != 0x2236D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236D0u; }
        if (ctx->pc != 0x2236D0u) { return; }
    }
    ctx->pc = 0x2236D0u;
label_2236d0:
    // 0x2236d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2236d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2236d4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2236D4u;
    SET_GPR_U32(ctx, 31, 0x2236DCu);
    ctx->pc = 0x2236D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2236D4u;
            // 0x2236d8: 0xc42ccdf0  lwc1        $f12, -0x3210($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236DCu; }
        if (ctx->pc != 0x2236DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236DCu; }
        if (ctx->pc != 0x2236DCu) { return; }
    }
    ctx->pc = 0x2236DCu;
label_2236dc:
    // 0x2236dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2236dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2236e0: 0xc42ccdf4  lwc1        $f12, -0x320C($at)
    ctx->pc = 0x2236e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2236e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2236E4u;
    SET_GPR_U32(ctx, 31, 0x2236ECu);
    ctx->pc = 0x2236E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2236E4u;
            // 0x2236e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236ECu; }
        if (ctx->pc != 0x2236ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236ECu; }
        if (ctx->pc != 0x2236ECu) { return; }
    }
    ctx->pc = 0x2236ECu;
label_2236ec:
    // 0x2236ec: 0x8fa70318  lw          $a3, 0x318($sp)
    ctx->pc = 0x2236ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
    // 0x2236f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2236f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2236f4: 0x8fa8031c  lw          $t0, 0x31C($sp)
    ctx->pc = 0x2236f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
    // 0x2236f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2236f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2236fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2236FCu;
    SET_GPR_U32(ctx, 31, 0x223704u);
    ctx->pc = 0x223700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2236FCu;
            // 0x223700: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223704u; }
        if (ctx->pc != 0x223704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223704u; }
        if (ctx->pc != 0x223704u) { return; }
    }
    ctx->pc = 0x223704u;
label_223704:
    // 0x223704: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223708: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x223708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x22370c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x22370Cu;
    SET_GPR_U32(ctx, 31, 0x223714u);
    ctx->pc = 0x223710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22370Cu;
            // 0x223710: 0x27a60310  addiu       $a2, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223714u; }
        if (ctx->pc != 0x223714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223714u; }
        if (ctx->pc != 0x223714u) { return; }
    }
    ctx->pc = 0x223714u;
label_223714:
    // 0x223714: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x223714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x223718: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x223718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22371c: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x22371cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x223720: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x223720u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x223724: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223724u;
    SET_GPR_U32(ctx, 31, 0x22372Cu);
    ctx->pc = 0x223728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223724u;
            // 0x223728: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22372Cu; }
        if (ctx->pc != 0x22372Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22372Cu; }
        if (ctx->pc != 0x22372Cu) { return; }
    }
    ctx->pc = 0x22372Cu;
label_22372c:
    // 0x22372c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22372cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223730: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223730u;
    SET_GPR_U32(ctx, 31, 0x223738u);
    ctx->pc = 0x223734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223730u;
            // 0x223734: 0xc42ccdf8  lwc1        $f12, -0x3208($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223738u; }
        if (ctx->pc != 0x223738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223738u; }
        if (ctx->pc != 0x223738u) { return; }
    }
    ctx->pc = 0x223738u;
label_223738:
    // 0x223738: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22373c: 0xc42ccdfc  lwc1        $f12, -0x3204($at)
    ctx->pc = 0x22373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223740: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223740u;
    SET_GPR_U32(ctx, 31, 0x223748u);
    ctx->pc = 0x223744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223740u;
            // 0x223744: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223748u; }
        if (ctx->pc != 0x223748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223748u; }
        if (ctx->pc != 0x223748u) { return; }
    }
    ctx->pc = 0x223748u;
label_223748:
    // 0x223748: 0x8fa70328  lw          $a3, 0x328($sp)
    ctx->pc = 0x223748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
    // 0x22374c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22374cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223750: 0x8fa8032c  lw          $t0, 0x32C($sp)
    ctx->pc = 0x223750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x223754: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x223754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223758: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223758u;
    SET_GPR_U32(ctx, 31, 0x223760u);
    ctx->pc = 0x22375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223758u;
            // 0x22375c: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223760u; }
        if (ctx->pc != 0x223760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223760u; }
        if (ctx->pc != 0x223760u) { return; }
    }
    ctx->pc = 0x223760u;
label_223760:
    // 0x223760: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223764: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x223764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x223768: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x223768u;
    SET_GPR_U32(ctx, 31, 0x223770u);
    ctx->pc = 0x22376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223768u;
            // 0x22376c: 0x27a60320  addiu       $a2, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223770u; }
        if (ctx->pc != 0x223770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223770u; }
        if (ctx->pc != 0x223770u) { return; }
    }
    ctx->pc = 0x223770u;
label_223770:
    // 0x223770: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223774: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x223774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x223778: 0xc423ce00  lwc1        $f3, -0x3200($at)
    ctx->pc = 0x223778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22377c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x22377cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x223780: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x223780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x223784: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x223784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x223788: 0x0  nop
    ctx->pc = 0x223788u;
    // NOP
    // 0x22378c: 0x46041803  div.s       $f0, $f3, $f4
    ctx->pc = 0x22378cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x223790: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x223790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x223794: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x223794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223798: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x223798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22379c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22379cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2237a0: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x2237a0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2237a4: 0x0  nop
    ctx->pc = 0x2237a4u;
    // NOP
    // 0x2237a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2237a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2237ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2237ACu;
    SET_GPR_U32(ctx, 31, 0x2237B4u);
    ctx->pc = 0x2237B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2237ACu;
            // 0x2237b0: 0x46002300  add.s       $f12, $f4, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237B4u; }
        if (ctx->pc != 0x2237B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237B4u; }
        if (ctx->pc != 0x2237B4u) { return; }
    }
    ctx->pc = 0x2237B4u;
label_2237b4:
    // 0x2237b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2237b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237b8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2237b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2237bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2237bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2237c0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2237c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2237c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2237c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2237c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2237C8u;
    SET_GPR_U32(ctx, 31, 0x2237D0u);
    ctx->pc = 0x2237CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2237C8u;
            // 0x2237cc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237D0u; }
        if (ctx->pc != 0x2237D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237D0u; }
        if (ctx->pc != 0x2237D0u) { return; }
    }
    ctx->pc = 0x2237D0u;
label_2237d0:
    // 0x2237d0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2237d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2237d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2237d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237d8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2237d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2237dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2237dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2237e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237e4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2237E4u;
    SET_GPR_U32(ctx, 31, 0x2237ECu);
    ctx->pc = 0x2237E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2237E4u;
            // 0x2237e8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237ECu; }
        if (ctx->pc != 0x2237ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237ECu; }
        if (ctx->pc != 0x2237ECu) { return; }
    }
    ctx->pc = 0x2237ECu;
label_2237ec:
    // 0x2237ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2237ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2237f0: 0x8c22ce34  lw          $v0, -0x31CC($at)
    ctx->pc = 0x2237f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954548)));
    // 0x2237f4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2237F4u;
    {
        const bool branch_taken_0x2237f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2237F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2237F4u;
            // 0x2237f8: 0x27a40450  addiu       $a0, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237f4) {
            ctx->pc = 0x223818u;
            goto label_223818;
        }
    }
    ctx->pc = 0x2237FCu;
    // 0x2237fc: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x2237fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x223800: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223804: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x223804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223808: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x223808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22380c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22380Cu;
    SET_GPR_U32(ctx, 31, 0x223814u);
    ctx->pc = 0x223810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22380Cu;
            // 0x223810: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223814u; }
        if (ctx->pc != 0x223814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223814u; }
        if (ctx->pc != 0x223814u) { return; }
    }
    ctx->pc = 0x223814u;
label_223814:
    // 0x223814: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x223814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_223818:
    // 0x223818: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x223818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22381c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x22381cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x223820: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x223820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x223824: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223824u;
    SET_GPR_U32(ctx, 31, 0x22382Cu);
    ctx->pc = 0x223828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223824u;
            // 0x223828: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22382Cu; }
        if (ctx->pc != 0x22382Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22382Cu; }
        if (ctx->pc != 0x22382Cu) { return; }
    }
    ctx->pc = 0x22382Cu;
label_22382c:
    // 0x22382c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x22382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x223830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223834: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x223834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223838: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x223838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22383c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22383Cu;
    SET_GPR_U32(ctx, 31, 0x223844u);
    ctx->pc = 0x223840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22383Cu;
            // 0x223840: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223844u; }
        if (ctx->pc != 0x223844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223844u; }
        if (ctx->pc != 0x223844u) { return; }
    }
    ctx->pc = 0x223844u;
label_223844:
    // 0x223844: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223848: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x223848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x22384c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x22384Cu;
    SET_GPR_U32(ctx, 31, 0x223854u);
    ctx->pc = 0x223850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22384Cu;
            // 0x223850: 0x27a60450  addiu       $a2, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223854u; }
        if (ctx->pc != 0x223854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223854u; }
        if (ctx->pc != 0x223854u) { return; }
    }
    ctx->pc = 0x223854u;
label_223854:
    // 0x223854: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x223854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223858: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x22385c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22385cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223860: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x223860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223864: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223864u;
    SET_GPR_U32(ctx, 31, 0x22386Cu);
    ctx->pc = 0x223868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223864u;
            // 0x223868: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22386Cu; }
        if (ctx->pc != 0x22386Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22386Cu; }
        if (ctx->pc != 0x22386Cu) { return; }
    }
    ctx->pc = 0x22386Cu;
label_22386c:
    // 0x22386c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x22386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x223870: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x223870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223874: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x223874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x223878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22387c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22387Cu;
    SET_GPR_U32(ctx, 31, 0x223884u);
    ctx->pc = 0x223880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22387Cu;
            // 0x223880: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223884u; }
        if (ctx->pc != 0x223884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223884u; }
        if (ctx->pc != 0x223884u) { return; }
    }
    ctx->pc = 0x223884u;
label_223884:
    // 0x223884: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x223884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223888: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x223888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x22388c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x22388cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x223890: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x223890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x223894: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x223894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x223898: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22389c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22389Cu;
    SET_GPR_U32(ctx, 31, 0x2238A4u);
    ctx->pc = 0x2238A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22389Cu;
            // 0x2238a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238A4u; }
        if (ctx->pc != 0x2238A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238A4u; }
        if (ctx->pc != 0x2238A4u) { return; }
    }
    ctx->pc = 0x2238A4u;
label_2238a4:
    // 0x2238a4: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x2238a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x2238a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2238a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2238acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238b0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2238b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2238b4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2238B4u;
    SET_GPR_U32(ctx, 31, 0x2238BCu);
    ctx->pc = 0x2238B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2238B4u;
            // 0x2238b8: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238BCu; }
        if (ctx->pc != 0x2238BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238BCu; }
        if (ctx->pc != 0x2238BCu) { return; }
    }
    ctx->pc = 0x2238BCu;
label_2238bc:
    // 0x2238bc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2238bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2238c0: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x2238c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x2238c4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2238C4u;
    SET_GPR_U32(ctx, 31, 0x2238CCu);
    ctx->pc = 0x2238C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2238C4u;
            // 0x2238c8: 0x27a60470  addiu       $a2, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238CCu; }
        if (ctx->pc != 0x2238CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238CCu; }
        if (ctx->pc != 0x2238CCu) { return; }
    }
    ctx->pc = 0x2238CCu;
label_2238cc:
    // 0x2238cc: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x2238ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x2238d0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2238d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2238d4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2238d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2238d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2238d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2238dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2238DCu;
    SET_GPR_U32(ctx, 31, 0x2238E4u);
    ctx->pc = 0x2238E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2238DCu;
            // 0x2238e0: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238E4u; }
        if (ctx->pc != 0x2238E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238E4u; }
        if (ctx->pc != 0x2238E4u) { return; }
    }
    ctx->pc = 0x2238E4u;
label_2238e4:
    // 0x2238e4: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x2238e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2238e8: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x2238e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x2238ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2238ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238f0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2238f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2238f4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2238F4u;
    SET_GPR_U32(ctx, 31, 0x2238FCu);
    ctx->pc = 0x2238F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2238F4u;
            // 0x2238f8: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238FCu; }
        if (ctx->pc != 0x2238FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238FCu; }
        if (ctx->pc != 0x2238FCu) { return; }
    }
    ctx->pc = 0x2238FCu;
label_2238fc:
    // 0x2238fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2238fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223900: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x223900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x223904: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x223904u;
    SET_GPR_U32(ctx, 31, 0x22390Cu);
    ctx->pc = 0x223908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223904u;
            // 0x223908: 0x27a60490  addiu       $a2, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22390Cu; }
        if (ctx->pc != 0x22390Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22390Cu; }
        if (ctx->pc != 0x22390Cu) { return; }
    }
    ctx->pc = 0x22390Cu;
label_22390c:
    // 0x22390c: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x22390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x223910: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x223910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x223914: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x223914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x223918: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x223918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22391c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22391Cu;
    SET_GPR_U32(ctx, 31, 0x223924u);
    ctx->pc = 0x223920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22391Cu;
            // 0x223920: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223924u; }
        if (ctx->pc != 0x223924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223924u; }
        if (ctx->pc != 0x223924u) { return; }
    }
    ctx->pc = 0x223924u;
label_223924:
    // 0x223924: 0x2605001a  addiu       $a1, $s0, 0x1A
    ctx->pc = 0x223924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
    // 0x223928: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x223928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x22392c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22392cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223930: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x223930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x223934: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223934u;
    SET_GPR_U32(ctx, 31, 0x22393Cu);
    ctx->pc = 0x223938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223934u;
            // 0x223938: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22393Cu; }
        if (ctx->pc != 0x22393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22393Cu; }
        if (ctx->pc != 0x22393Cu) { return; }
    }
    ctx->pc = 0x22393Cu;
label_22393c:
    // 0x22393c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x22393cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223940: 0x27a504a0  addiu       $a1, $sp, 0x4A0
    ctx->pc = 0x223940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x223944: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x223944u;
    SET_GPR_U32(ctx, 31, 0x22394Cu);
    ctx->pc = 0x223948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223944u;
            // 0x223948: 0x27a604b0  addiu       $a2, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22394Cu; }
        if (ctx->pc != 0x22394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22394Cu; }
        if (ctx->pc != 0x22394Cu) { return; }
    }
    ctx->pc = 0x22394Cu;
label_22394c:
    // 0x22394c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22394cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223950: 0x8c22ce38  lw          $v0, -0x31C8($at)
    ctx->pc = 0x223950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954552)));
    // 0x223954: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223954u;
    {
        const bool branch_taken_0x223954 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x223958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223954u;
            // 0x223958: 0x27a404d0  addiu       $a0, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223954) {
            ctx->pc = 0x223978u;
            goto label_223978;
        }
    }
    ctx->pc = 0x22395Cu;
    // 0x22395c: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x22395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x223960: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x223960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x223964: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x223964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223968: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x223968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22396c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22396Cu;
    SET_GPR_U32(ctx, 31, 0x223974u);
    ctx->pc = 0x223970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22396Cu;
            // 0x223970: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223974u; }
        if (ctx->pc != 0x223974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223974u; }
        if (ctx->pc != 0x223974u) { return; }
    }
    ctx->pc = 0x223974u;
label_223974:
    // 0x223974: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x223974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_223978:
    // 0x223978: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x223978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x22397c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x22397cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x223980: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x223980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x223984: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223984u;
    SET_GPR_U32(ctx, 31, 0x22398Cu);
    ctx->pc = 0x223988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223984u;
            // 0x223988: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22398Cu; }
        if (ctx->pc != 0x22398Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22398Cu; }
        if (ctx->pc != 0x22398Cu) { return; }
    }
    ctx->pc = 0x22398Cu;
label_22398c:
    // 0x22398c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22398cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223990: 0x26050022  addiu       $a1, $s0, 0x22
    ctx->pc = 0x223990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
    // 0x223994: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x223994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x223998: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x223998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22399c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22399Cu;
    SET_GPR_U32(ctx, 31, 0x2239A4u);
    ctx->pc = 0x2239A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22399Cu;
            // 0x2239a0: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239A4u; }
        if (ctx->pc != 0x2239A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239A4u; }
        if (ctx->pc != 0x2239A4u) { return; }
    }
    ctx->pc = 0x2239A4u;
label_2239a4:
    // 0x2239a4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2239a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2239a8: 0x27a504c0  addiu       $a1, $sp, 0x4C0
    ctx->pc = 0x2239a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x2239ac: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2239ACu;
    SET_GPR_U32(ctx, 31, 0x2239B4u);
    ctx->pc = 0x2239B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2239ACu;
            // 0x2239b0: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239B4u; }
        if (ctx->pc != 0x2239B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239B4u; }
        if (ctx->pc != 0x2239B4u) { return; }
    }
    ctx->pc = 0x2239B4u;
label_2239b4:
    // 0x2239b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2239b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2239b8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2239b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2239bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2239bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239c0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2239c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239c4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2239C4u;
    SET_GPR_U32(ctx, 31, 0x2239CCu);
    ctx->pc = 0x2239C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2239C4u;
            // 0x2239c8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239CCu; }
        if (ctx->pc != 0x2239CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239CCu; }
        if (ctx->pc != 0x2239CCu) { return; }
    }
    ctx->pc = 0x2239CCu;
label_2239cc:
    // 0x2239cc: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x2239ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2239d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2239d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239d4: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x2239d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2239d8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2239d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2239dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2239DCu;
    SET_GPR_U32(ctx, 31, 0x2239E4u);
    ctx->pc = 0x2239E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2239DCu;
            // 0x2239e0: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239E4u; }
        if (ctx->pc != 0x2239E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239E4u; }
        if (ctx->pc != 0x2239E4u) { return; }
    }
    ctx->pc = 0x2239E4u;
label_2239e4:
    // 0x2239e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2239e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2239e8: 0x26070015  addiu       $a3, $s0, 0x15
    ctx->pc = 0x2239e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
    // 0x2239ec: 0x8c25ce2c  lw          $a1, -0x31D4($at)
    ctx->pc = 0x2239ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954540)));
    // 0x2239f0: 0x26480005  addiu       $t0, $s2, 0x5
    ctx->pc = 0x2239f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x2239f4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2239f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2239f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2239f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2239fc: 0x27a904e0  addiu       $t1, $sp, 0x4E0
    ctx->pc = 0x2239fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x223a00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x223a00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a04: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x223A04u;
    SET_GPR_U32(ctx, 31, 0x223A0Cu);
    ctx->pc = 0x223A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A04u;
            // 0x223a08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A0Cu; }
        if (ctx->pc != 0x223A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A0Cu; }
        if (ctx->pc != 0x223A0Cu) { return; }
    }
    ctx->pc = 0x223A0Cu;
label_223a0c:
    // 0x223a0c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x223A0Cu;
    SET_GPR_U32(ctx, 31, 0x223A14u);
    ctx->pc = 0x223A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A0Cu;
            // 0x223a10: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A14u; }
        if (ctx->pc != 0x223A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A14u; }
        if (ctx->pc != 0x223A14u) { return; }
    }
    ctx->pc = 0x223A14u;
label_223a14:
    // 0x223a14: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x223a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x223a18: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x223a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x223a1c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x223a1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x223a20: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x223a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x223a24: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x223a24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x223a28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x223a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223a2c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x223a2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x223a30: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x223a30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x223a34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x223a34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223a38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x223a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223a3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x223a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223a40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x223a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223a44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223a48: 0x3e00008  jr          $ra
    ctx->pc = 0x223A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A48u;
            // 0x223a4c: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223A50u;
}
