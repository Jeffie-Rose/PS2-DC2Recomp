#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemBrdDraw__FPf9mgRect<i>Riiiii
// Address: 0x227900 - 0x227de4
void MenuItemBrdDraw__FPf9mgRect_i_Riiiii_0x227900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemBrdDraw__FPf9mgRect_i_Riiiii_0x227900");
#endif

    switch (ctx->pc) {
        case 0x227958u: goto label_227958;
        case 0x2279a4u: goto label_2279a4;
        case 0x2279d4u: goto label_2279d4;
        case 0x2279e0u: goto label_2279e0;
        case 0x2279e8u: goto label_2279e8;
        case 0x227a18u: goto label_227a18;
        case 0x227a24u: goto label_227a24;
        case 0x227a30u: goto label_227a30;
        case 0x227a3cu: goto label_227a3c;
        case 0x227a54u: goto label_227a54;
        case 0x227a8cu: goto label_227a8c;
        case 0x227a94u: goto label_227a94;
        case 0x227accu: goto label_227acc;
        case 0x227ad0u: goto label_227ad0;
        case 0x227af4u: goto label_227af4;
        case 0x227afcu: goto label_227afc;
        case 0x227b24u: goto label_227b24;
        case 0x227b5cu: goto label_227b5c;
        case 0x227b68u: goto label_227b68;
        case 0x227b74u: goto label_227b74;
        case 0x227b80u: goto label_227b80;
        case 0x227b8cu: goto label_227b8c;
        case 0x227ba4u: goto label_227ba4;
        case 0x227bb8u: goto label_227bb8;
        case 0x227be0u: goto label_227be0;
        case 0x227c04u: goto label_227c04;
        case 0x227c18u: goto label_227c18;
        case 0x227c20u: goto label_227c20;
        case 0x227c2cu: goto label_227c2c;
        case 0x227c64u: goto label_227c64;
        case 0x227c78u: goto label_227c78;
        case 0x227c8cu: goto label_227c8c;
        case 0x227c94u: goto label_227c94;
        case 0x227ca0u: goto label_227ca0;
        case 0x227cd0u: goto label_227cd0;
        case 0x227ce4u: goto label_227ce4;
        case 0x227cf8u: goto label_227cf8;
        case 0x227d00u: goto label_227d00;
        case 0x227d0cu: goto label_227d0c;
        case 0x227d18u: goto label_227d18;
        case 0x227d24u: goto label_227d24;
        case 0x227d30u: goto label_227d30;
        case 0x227d48u: goto label_227d48;
        case 0x227da8u: goto label_227da8;
        case 0x227db0u: goto label_227db0;
        default: break;
    }

    ctx->pc = 0x227900u;

    // 0x227900: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x227900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x227904: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x227904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x227908: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x227908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22790c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x22790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x227910: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x227910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x227914: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x227914u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227918: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x227918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x22791c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x22791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x227920: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x227920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x227924: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x227924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x227928: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x227928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22792c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22792cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x227930: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x227930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227938: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x227938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22793c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x22793cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227940: 0xafa800bc  sw          $t0, 0xBC($sp)
    ctx->pc = 0x227940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
    // 0x227944: 0xafa900b8  sw          $t1, 0xB8($sp)
    ctx->pc = 0x227944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 9));
    // 0x227948: 0xafaa00b4  sw          $t2, 0xB4($sp)
    ctx->pc = 0x227948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 10));
    // 0x22794c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x22794cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227950: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x227950u;
    SET_GPR_U32(ctx, 31, 0x227958u);
    ctx->pc = 0x227954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227950u;
            // 0x227954: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227958u; }
        if (ctx->pc != 0x227958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227958u; }
        if (ctx->pc != 0x227958u) { return; }
    }
    ctx->pc = 0x227958u;
label_227958:
    // 0x227958: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x227958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22795c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x227960: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x227960u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954704)));
    // 0x227964: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x227968: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x227968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22796c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x227970: 0x24a5a678  addiu       $a1, $a1, -0x5988
    ctx->pc = 0x227970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944376));
    // 0x227974: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x227974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227978: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x227978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22797c: 0xafa800d0  sw          $t0, 0xD0($sp)
    ctx->pc = 0x22797cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 8));
    // 0x227980: 0x8c27ced4  lw          $a3, -0x312C($at)
    ctx->pc = 0x227980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954708)));
    // 0x227984: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x227984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x227988: 0xafa700d4  sw          $a3, 0xD4($sp)
    ctx->pc = 0x227988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 7));
    // 0x22798c: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x22798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
    // 0x227990: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x227990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x227994: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x227994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x227998: 0x8c22cedc  lw          $v0, -0x3124($at)
    ctx->pc = 0x227998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
    // 0x22799c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22799Cu;
    SET_GPR_U32(ctx, 31, 0x2279A4u);
    ctx->pc = 0x2279A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22799Cu;
            // 0x2279a0: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279A4u; }
        if (ctx->pc != 0x2279A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279A4u; }
        if (ctx->pc != 0x2279A4u) { return; }
    }
    ctx->pc = 0x2279A4u;
label_2279a4:
    // 0x2279a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2279a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2279a8: 0x12600101  beqz        $s3, . + 4 + (0x101 << 2)
    ctx->pc = 0x2279A8u;
    {
        const bool branch_taken_0x2279a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2279a8) {
            ctx->pc = 0x227DB0u;
            goto label_227db0;
        }
    }
    ctx->pc = 0x2279B0u;
    // 0x2279b0: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x2279b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2279b4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x2279b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2279b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2279b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2279bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2279bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279c0: 0x0  nop
    ctx->pc = 0x2279c0u;
    // NOP
    // 0x2279c4: 0x450100fa  bc1t        . + 4 + (0xFA << 2)
    ctx->pc = 0x2279C4u;
    {
        const bool branch_taken_0x2279c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2279C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2279C4u;
            // 0x2279c8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279c4) {
            ctx->pc = 0x227DB0u;
            goto label_227db0;
        }
    }
    ctx->pc = 0x2279CCu;
    // 0x2279cc: 0xc088038  jal         func_2200E0
    ctx->pc = 0x2279CCu;
    SET_GPR_U32(ctx, 31, 0x2279D4u);
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279D4u; }
        if (ctx->pc != 0x2279D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279D4u; }
        if (ctx->pc != 0x2279D4u) { return; }
    }
    ctx->pc = 0x2279D4u;
label_2279d4:
    // 0x2279d4: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x2279d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2279d8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x2279D8u;
    SET_GPR_U32(ctx, 31, 0x2279E0u);
    ctx->pc = 0x2279DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2279D8u;
            // 0x2279dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279E0u; }
        if (ctx->pc != 0x2279E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279E0u; }
        if (ctx->pc != 0x2279E0u) { return; }
    }
    ctx->pc = 0x2279E0u;
label_2279e0:
    // 0x2279e0: 0xc068644  jal         func_1A1910
    ctx->pc = 0x2279E0u;
    SET_GPR_U32(ctx, 31, 0x2279E8u);
    ctx->pc = 0x2279E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2279E0u;
            // 0x2279e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279E8u; }
        if (ctx->pc != 0x2279E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279E8u; }
        if (ctx->pc != 0x2279E8u) { return; }
    }
    ctx->pc = 0x2279E8u;
label_2279e8:
    // 0x2279e8: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x2279e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x2279ec: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2279ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2279f0: 0x3485aaab  ori         $a1, $a0, 0xAAAB
    ctx->pc = 0x2279f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x2279f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2279f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2279f8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2279f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2279fc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2279fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x227a00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x227a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x227a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a08: 0x1010  mfhi        $v0
    ctx->pc = 0x227a08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x227a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a10: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x227A10u;
    SET_GPR_U32(ctx, 31, 0x227A18u);
    ctx->pc = 0x227A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A10u;
            // 0x227a14: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A18u; }
        if (ctx->pc != 0x227A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A18u; }
        if (ctx->pc != 0x227A18u) { return; }
    }
    ctx->pc = 0x227A18u;
label_227a18:
    // 0x227a18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a1c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x227A1Cu;
    SET_GPR_U32(ctx, 31, 0x227A24u);
    ctx->pc = 0x227A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A1Cu;
            // 0x227a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A24u; }
        if (ctx->pc != 0x227A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A24u; }
        if (ctx->pc != 0x227A24u) { return; }
    }
    ctx->pc = 0x227A24u;
label_227a24:
    // 0x227a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a28: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x227A28u;
    SET_GPR_U32(ctx, 31, 0x227A30u);
    ctx->pc = 0x227A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A28u;
            // 0x227a2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A30u; }
        if (ctx->pc != 0x227A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A30u; }
        if (ctx->pc != 0x227A30u) { return; }
    }
    ctx->pc = 0x227A30u;
label_227a30:
    // 0x227a30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x227a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a34: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x227A34u;
    SET_GPR_U32(ctx, 31, 0x227A3Cu);
    ctx->pc = 0x227A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A34u;
            // 0x227a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A3Cu; }
        if (ctx->pc != 0x227A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A3Cu; }
        if (ctx->pc != 0x227A3Cu) { return; }
    }
    ctx->pc = 0x227A3Cu;
label_227a3c:
    // 0x227a3c: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x227a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x227a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a44: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x227a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x227a48: 0x8fa700b4  lw          $a3, 0xB4($sp)
    ctx->pc = 0x227a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x227a4c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x227A4Cu;
    SET_GPR_U32(ctx, 31, 0x227A54u);
    ctx->pc = 0x227A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A4Cu;
            // 0x227a50: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A54u; }
        if (ctx->pc != 0x227A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A54u; }
        if (ctx->pc != 0x227A54u) { return; }
    }
    ctx->pc = 0x227A54u;
label_227a54:
    // 0x227a54: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x227a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x227a58: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x227a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x227a5c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x227a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x227a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x227a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227a68: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x227a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227a6c: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x227a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227a70: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x227a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x227a74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x227a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x227a78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x227a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227a7c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x227a7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x227a80: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x227a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x227a84: 0xc04d360  jal         func_134D80
    ctx->pc = 0x227A84u;
    SET_GPR_U32(ctx, 31, 0x227A8Cu);
    ctx->pc = 0x227A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A84u;
            // 0x227a88: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A8Cu; }
        if (ctx->pc != 0x227A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A8Cu; }
        if (ctx->pc != 0x227A8Cu) { return; }
    }
    ctx->pc = 0x227A8Cu;
label_227a8c:
    // 0x227a8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227A8Cu;
    SET_GPR_U32(ctx, 31, 0x227A94u);
    ctx->pc = 0x227A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A8Cu;
            // 0x227a90: 0xc7cc0004  lwc1        $f12, 0x4($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A94u; }
        if (ctx->pc != 0x227A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A94u; }
        if (ctx->pc != 0x227A94u) { return; }
    }
    ctx->pc = 0x227A94u;
label_227a94:
    // 0x227a94: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x227a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x227a98: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x227a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x227a9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x227a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x227aa0: 0x27b500e8  addiu       $s5, $sp, 0xE8
    ctx->pc = 0x227aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x227aa4: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x227aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x227aa8: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x227aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x227aac: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x227aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x227ab0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x227ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x227ab4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x227ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x227ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x227ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ac4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x227AC4u;
    SET_GPR_U32(ctx, 31, 0x227ACCu);
    ctx->pc = 0x227AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227AC4u;
            // 0x227ac8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227ACCu; }
        if (ctx->pc != 0x227ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227ACCu; }
        if (ctx->pc != 0x227ACCu) { return; }
    }
    ctx->pc = 0x227ACCu;
label_227acc:
    // 0x227acc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x227accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227ad0:
    // 0x227ad0: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x227ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x227ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x227ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227ad8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x227ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x227adc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x227adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227ae0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x227ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227ae4: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x227AE4u;
    {
        const bool branch_taken_0x227ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227ae4) {
            ctx->pc = 0x227D70u;
            goto label_227d70;
        }
    }
    ctx->pc = 0x227AECu;
    // 0x227aec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227AECu;
    SET_GPR_U32(ctx, 31, 0x227AF4u);
    ctx->pc = 0x227AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227AECu;
            // 0x227af0: 0xc7cc0000  lwc1        $f12, 0x0($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AF4u; }
        if (ctx->pc != 0x227AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227AF4u; }
        if (ctx->pc != 0x227AF4u) { return; }
    }
    ctx->pc = 0x227AF4u;
label_227af4:
    // 0x227af4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x227af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x227af8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x227af8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227afc:
    // 0x227afc: 0x0  nop
    ctx->pc = 0x227afcu;
    // NOP
    // 0x227b00: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x227b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x227b04: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x227b08: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x227b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x227b0c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227B0Cu;
    {
        const bool branch_taken_0x227b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227b0c) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227B14u;
    // 0x227b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b18: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x227b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x227b1c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x227B1Cu;
    SET_GPR_U32(ctx, 31, 0x227B24u);
    ctx->pc = 0x227B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B1Cu;
            // 0x227b20: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B24u; }
        if (ctx->pc != 0x227B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B24u; }
        if (ctx->pc != 0x227B24u) { return; }
    }
    ctx->pc = 0x227B24u;
label_227b24:
    // 0x227b24: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x227b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x227b28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x227b28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x227b2c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x227b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x227b30: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x227b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x227b34: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x227b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x227b38: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x227B38u;
    {
        const bool branch_taken_0x227b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227B38u;
            // 0x227b3c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b38) {
            ctx->pc = 0x227AFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227afc;
        }
    }
    ctx->pc = 0x227B40u;
label_227b40:
    // 0x227b40: 0x16720081  bne         $s3, $s2, . + 4 + (0x81 << 2)
    ctx->pc = 0x227B40u;
    {
        const bool branch_taken_0x227b40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x227b40) {
            ctx->pc = 0x227D48u;
            goto label_227d48;
        }
    }
    ctx->pc = 0x227B48u;
    // 0x227b48: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x227b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x227b4c: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x227B4Cu;
    {
        const bool branch_taken_0x227b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227b4c) {
            ctx->pc = 0x227D48u;
            goto label_227d48;
        }
    }
    ctx->pc = 0x227B54u;
    // 0x227b54: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x227B54u;
    SET_GPR_U32(ctx, 31, 0x227B5Cu);
    ctx->pc = 0x227B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B54u;
            // 0x227b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B5Cu; }
        if (ctx->pc != 0x227B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B5Cu; }
        if (ctx->pc != 0x227B5Cu) { return; }
    }
    ctx->pc = 0x227B5Cu;
label_227b5c:
    // 0x227b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b60: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x227B60u;
    SET_GPR_U32(ctx, 31, 0x227B68u);
    ctx->pc = 0x227B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B60u;
            // 0x227b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B68u; }
        if (ctx->pc != 0x227B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B68u; }
        if (ctx->pc != 0x227B68u) { return; }
    }
    ctx->pc = 0x227B68u;
label_227b68:
    // 0x227b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b6c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x227B6Cu;
    SET_GPR_U32(ctx, 31, 0x227B74u);
    ctx->pc = 0x227B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B6Cu;
            // 0x227b70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B74u; }
        if (ctx->pc != 0x227B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B74u; }
        if (ctx->pc != 0x227B74u) { return; }
    }
    ctx->pc = 0x227B74u;
label_227b74:
    // 0x227b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b78: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x227B78u;
    SET_GPR_U32(ctx, 31, 0x227B80u);
    ctx->pc = 0x227B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B78u;
            // 0x227b7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B80u; }
        if (ctx->pc != 0x227B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B80u; }
        if (ctx->pc != 0x227B80u) { return; }
    }
    ctx->pc = 0x227B80u;
label_227b80:
    // 0x227b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b84: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x227B84u;
    SET_GPR_U32(ctx, 31, 0x227B8Cu);
    ctx->pc = 0x227B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B84u;
            // 0x227b88: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B8Cu; }
        if (ctx->pc != 0x227B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227B8Cu; }
        if (ctx->pc != 0x227B8Cu) { return; }
    }
    ctx->pc = 0x227B8Cu;
label_227b8c:
    // 0x227b8c: 0x240500de  addiu       $a1, $zero, 0xDE
    ctx->pc = 0x227b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x227b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b98: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x227b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b9c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x227B9Cu;
    SET_GPR_U32(ctx, 31, 0x227BA4u);
    ctx->pc = 0x227BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227B9Cu;
            // 0x227ba0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BA4u; }
        if (ctx->pc != 0x227BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BA4u; }
        if (ctx->pc != 0x227BA4u) { return; }
    }
    ctx->pc = 0x227BA4u;
label_227ba4:
    // 0x227ba4: 0xc7d40000  lwc1        $f20, 0x0($fp)
    ctx->pc = 0x227ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x227ba8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x227ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x227bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227bb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227BB0u;
    SET_GPR_U32(ctx, 31, 0x227BB8u);
    ctx->pc = 0x227BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227BB0u;
            // 0x227bb4: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BB8u; }
        if (ctx->pc != 0x227BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BB8u; }
        if (ctx->pc != 0x227BB8u) { return; }
    }
    ctx->pc = 0x227BB8u;
label_227bb8:
    // 0x227bb8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x227bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x227bbc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x227bbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x227bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x227bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227bc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x227bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x227bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227bd0: 0x0  nop
    ctx->pc = 0x227bd0u;
    // NOP
    // 0x227bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x227bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x227bd8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227BD8u;
    SET_GPR_U32(ctx, 31, 0x227BE0u);
    ctx->pc = 0x227BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227BD8u;
            // 0x227bdc: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BE0u; }
        if (ctx->pc != 0x227BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BE0u; }
        if (ctx->pc != 0x227BE0u) { return; }
    }
    ctx->pc = 0x227BE0u;
label_227be0:
    // 0x227be0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x227be0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227be8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x227be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x227bec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x227becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x227bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x227bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bf8: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x227bf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x227bfc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x227BFCu;
    SET_GPR_U32(ctx, 31, 0x227C04u);
    ctx->pc = 0x227C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227BFCu;
            // 0x227c00: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C04u; }
        if (ctx->pc != 0x227C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C04u; }
        if (ctx->pc != 0x227C04u) { return; }
    }
    ctx->pc = 0x227C04u;
label_227c04:
    // 0x227c04: 0x26860001  addiu       $a2, $s4, 0x1
    ctx->pc = 0x227c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x227c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x227c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c10: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x227C10u;
    SET_GPR_U32(ctx, 31, 0x227C18u);
    ctx->pc = 0x227C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C10u;
            // 0x227c14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C18u; }
        if (ctx->pc != 0x227C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C18u; }
        if (ctx->pc != 0x227C18u) { return; }
    }
    ctx->pc = 0x227C18u;
label_227c18:
    // 0x227c18: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x227C18u;
    SET_GPR_U32(ctx, 31, 0x227C20u);
    ctx->pc = 0x227C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C18u;
            // 0x227c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C20u; }
        if (ctx->pc != 0x227C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C20u; }
        if (ctx->pc != 0x227C20u) { return; }
    }
    ctx->pc = 0x227C20u;
label_227c20:
    // 0x227c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c24: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x227C24u;
    SET_GPR_U32(ctx, 31, 0x227C2Cu);
    ctx->pc = 0x227C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C24u;
            // 0x227c28: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C2Cu; }
        if (ctx->pc != 0x227C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C2Cu; }
        if (ctx->pc != 0x227C2Cu) { return; }
    }
    ctx->pc = 0x227C2Cu;
label_227c2c:
    // 0x227c2c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x227c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x227c30: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x227c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x227c34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x227c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x227c38: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x227c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x227c3c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x227c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x227c40: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x227c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x227c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x227c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c50: 0x1010  mfhi        $v0
    ctx->pc = 0x227c50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x227c54: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x227c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x227c58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x227c58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x227c5c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x227C5Cu;
    SET_GPR_U32(ctx, 31, 0x227C64u);
    ctx->pc = 0x227C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C5Cu;
            // 0x227c60: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C64u; }
        if (ctx->pc != 0x227C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C64u; }
        if (ctx->pc != 0x227C64u) { return; }
    }
    ctx->pc = 0x227C64u;
label_227c64:
    // 0x227c64: 0x26860002  addiu       $a2, $s4, 0x2
    ctx->pc = 0x227c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x227c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c6c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x227c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c70: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x227C70u;
    SET_GPR_U32(ctx, 31, 0x227C78u);
    ctx->pc = 0x227C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C70u;
            // 0x227c74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C78u; }
        if (ctx->pc != 0x227C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C78u; }
        if (ctx->pc != 0x227C78u) { return; }
    }
    ctx->pc = 0x227C78u;
label_227c78:
    // 0x227c78: 0x26860003  addiu       $a2, $s4, 0x3
    ctx->pc = 0x227c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x227c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x227c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c84: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x227C84u;
    SET_GPR_U32(ctx, 31, 0x227C8Cu);
    ctx->pc = 0x227C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C84u;
            // 0x227c88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C8Cu; }
        if (ctx->pc != 0x227C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C8Cu; }
        if (ctx->pc != 0x227C8Cu) { return; }
    }
    ctx->pc = 0x227C8Cu;
label_227c8c:
    // 0x227c8c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x227C8Cu;
    SET_GPR_U32(ctx, 31, 0x227C94u);
    ctx->pc = 0x227C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C8Cu;
            // 0x227c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C94u; }
        if (ctx->pc != 0x227C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C94u; }
        if (ctx->pc != 0x227C94u) { return; }
    }
    ctx->pc = 0x227C94u;
label_227c94:
    // 0x227c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c98: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x227C98u;
    SET_GPR_U32(ctx, 31, 0x227CA0u);
    ctx->pc = 0x227C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C98u;
            // 0x227c9c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CA0u; }
        if (ctx->pc != 0x227CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CA0u; }
        if (ctx->pc != 0x227CA0u) { return; }
    }
    ctx->pc = 0x227CA0u;
label_227ca0:
    // 0x227ca0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x227ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x227ca4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x227ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x227ca8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x227ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x227cac: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x227cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x227cb0: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x227cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x227cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cbc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x227cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cc0: 0x1010  mfhi        $v0
    ctx->pc = 0x227cc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x227cc4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x227cc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x227cc8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x227CC8u;
    SET_GPR_U32(ctx, 31, 0x227CD0u);
    ctx->pc = 0x227CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CC8u;
            // 0x227ccc: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CD0u; }
        if (ctx->pc != 0x227CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CD0u; }
        if (ctx->pc != 0x227CD0u) { return; }
    }
    ctx->pc = 0x227CD0u;
label_227cd0:
    // 0x227cd0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x227cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cd4: 0x26860004  addiu       $a2, $s4, 0x4
    ctx->pc = 0x227cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x227cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cdc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x227CDCu;
    SET_GPR_U32(ctx, 31, 0x227CE4u);
    ctx->pc = 0x227CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CDCu;
            // 0x227ce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CE4u; }
        if (ctx->pc != 0x227CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CE4u; }
        if (ctx->pc != 0x227CE4u) { return; }
    }
    ctx->pc = 0x227CE4u;
label_227ce4:
    // 0x227ce4: 0x26860005  addiu       $a2, $s4, 0x5
    ctx->pc = 0x227ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 5));
    // 0x227ce8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x227ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cf0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x227CF0u;
    SET_GPR_U32(ctx, 31, 0x227CF8u);
    ctx->pc = 0x227CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CF0u;
            // 0x227cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CF8u; }
        if (ctx->pc != 0x227CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CF8u; }
        if (ctx->pc != 0x227CF8u) { return; }
    }
    ctx->pc = 0x227CF8u;
label_227cf8:
    // 0x227cf8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x227CF8u;
    SET_GPR_U32(ctx, 31, 0x227D00u);
    ctx->pc = 0x227CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CF8u;
            // 0x227cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D00u; }
        if (ctx->pc != 0x227D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D00u; }
        if (ctx->pc != 0x227D00u) { return; }
    }
    ctx->pc = 0x227D00u;
label_227d00:
    // 0x227d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d04: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x227D04u;
    SET_GPR_U32(ctx, 31, 0x227D0Cu);
    ctx->pc = 0x227D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227D04u;
            // 0x227d08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D0Cu; }
        if (ctx->pc != 0x227D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D0Cu; }
        if (ctx->pc != 0x227D0Cu) { return; }
    }
    ctx->pc = 0x227D0Cu;
label_227d0c:
    // 0x227d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d10: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x227D10u;
    SET_GPR_U32(ctx, 31, 0x227D18u);
    ctx->pc = 0x227D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227D10u;
            // 0x227d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D18u; }
        if (ctx->pc != 0x227D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D18u; }
        if (ctx->pc != 0x227D18u) { return; }
    }
    ctx->pc = 0x227D18u;
label_227d18:
    // 0x227d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d1c: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x227D1Cu;
    SET_GPR_U32(ctx, 31, 0x227D24u);
    ctx->pc = 0x227D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227D1Cu;
            // 0x227d20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D24u; }
        if (ctx->pc != 0x227D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D24u; }
        if (ctx->pc != 0x227D24u) { return; }
    }
    ctx->pc = 0x227D24u;
label_227d24:
    // 0x227d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d28: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x227D28u;
    SET_GPR_U32(ctx, 31, 0x227D30u);
    ctx->pc = 0x227D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227D28u;
            // 0x227d2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D30u; }
        if (ctx->pc != 0x227D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D30u; }
        if (ctx->pc != 0x227D30u) { return; }
    }
    ctx->pc = 0x227D30u;
label_227d30:
    // 0x227d30: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x227d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x227d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d38: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x227d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x227d3c: 0x8fa700b4  lw          $a3, 0xB4($sp)
    ctx->pc = 0x227d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x227d40: 0xc04d320  jal         func_134C80
    ctx->pc = 0x227D40u;
    SET_GPR_U32(ctx, 31, 0x227D48u);
    ctx->pc = 0x227D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227D40u;
            // 0x227d44: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D48u; }
        if (ctx->pc != 0x227D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227D48u; }
        if (ctx->pc != 0x227D48u) { return; }
    }
    ctx->pc = 0x227D48u;
label_227d48:
    // 0x227d48: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x227d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x227d4c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x227d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227d50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x227d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x227d54: 0x2a63001a  slti        $v1, $s3, 0x1A
    ctx->pc = 0x227d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x227d58: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x227d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x227d5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227d60: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x227d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x227d64: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x227d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x227d68: 0x1460ff59  bnez        $v1, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x227D68u;
    {
        const bool branch_taken_0x227d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227D68u;
            // 0x227d6c: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d68) {
            ctx->pc = 0x227AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227ad0;
        }
    }
    ctx->pc = 0x227D70u;
label_227d70:
    // 0x227d70: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x227d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x227d74: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x227d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x227d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d7c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x227d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227d80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x227d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x227d84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x227d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x227d88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x227d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x227d8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x227d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x227d90: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x227d90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x227d94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x227d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x227d98: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x227d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x227d9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x227d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227da0: 0xc04d360  jal         func_134D80
    ctx->pc = 0x227DA0u;
    SET_GPR_U32(ctx, 31, 0x227DA8u);
    ctx->pc = 0x227DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227DA0u;
            // 0x227da4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227DA8u; }
        if (ctx->pc != 0x227DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227DA8u; }
        if (ctx->pc != 0x227DA8u) { return; }
    }
    ctx->pc = 0x227DA8u;
label_227da8:
    // 0x227da8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x227DA8u;
    SET_GPR_U32(ctx, 31, 0x227DB0u);
    ctx->pc = 0x227DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227DA8u;
            // 0x227dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227DB0u; }
        if (ctx->pc != 0x227DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227DB0u; }
        if (ctx->pc != 0x227DB0u) { return; }
    }
    ctx->pc = 0x227DB0u;
label_227db0:
    // 0x227db0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x227db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x227db4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x227db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x227db8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x227db8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x227dbc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x227dbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x227dc0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x227dc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x227dc4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x227dc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x227dc8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x227dc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227dcc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x227dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227dd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x227dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227dd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x227dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227dd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x227DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227DDCu;
            // 0x227de0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227DE4u;
}
