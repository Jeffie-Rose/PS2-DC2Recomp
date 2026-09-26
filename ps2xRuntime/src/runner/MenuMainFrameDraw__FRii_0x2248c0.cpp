#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainFrameDraw__FRii
// Address: 0x2248c0 - 0x224d78
void MenuMainFrameDraw__FRii_0x2248c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainFrameDraw__FRii_0x2248c0");
#endif

    switch (ctx->pc) {
        case 0x224928u: goto label_224928;
        case 0x224948u: goto label_224948;
        case 0x2249e8u: goto label_2249e8;
        case 0x2249fcu: goto label_2249fc;
        case 0x224a20u: goto label_224a20;
        case 0x224a44u: goto label_224a44;
        case 0x224a6cu: goto label_224a6c;
        case 0x224a80u: goto label_224a80;
        case 0x224aa8u: goto label_224aa8;
        case 0x224abcu: goto label_224abc;
        case 0x224ae4u: goto label_224ae4;
        case 0x224af8u: goto label_224af8;
        case 0x224b14u: goto label_224b14;
        case 0x224b20u: goto label_224b20;
        case 0x224b28u: goto label_224b28;
        case 0x224b38u: goto label_224b38;
        case 0x224b40u: goto label_224b40;
        case 0x224b50u: goto label_224b50;
        case 0x224b5cu: goto label_224b5c;
        case 0x224b68u: goto label_224b68;
        case 0x224b74u: goto label_224b74;
        case 0x224b7cu: goto label_224b7c;
        case 0x224b98u: goto label_224b98;
        case 0x224bacu: goto label_224bac;
        case 0x224bb4u: goto label_224bb4;
        case 0x224bc8u: goto label_224bc8;
        case 0x224bd8u: goto label_224bd8;
        case 0x224be4u: goto label_224be4;
        case 0x224bf0u: goto label_224bf0;
        case 0x224bfcu: goto label_224bfc;
        case 0x224c14u: goto label_224c14;
        case 0x224c24u: goto label_224c24;
        case 0x224c38u: goto label_224c38;
        case 0x224c48u: goto label_224c48;
        case 0x224c5cu: goto label_224c5c;
        case 0x224c6cu: goto label_224c6c;
        case 0x224c80u: goto label_224c80;
        case 0x224c90u: goto label_224c90;
        case 0x224ca4u: goto label_224ca4;
        case 0x224cacu: goto label_224cac;
        case 0x224cb8u: goto label_224cb8;
        case 0x224cc8u: goto label_224cc8;
        case 0x224cdcu: goto label_224cdc;
        case 0x224cecu: goto label_224cec;
        case 0x224cf4u: goto label_224cf4;
        case 0x224d10u: goto label_224d10;
        case 0x224d24u: goto label_224d24;
        case 0x224d2cu: goto label_224d2c;
        default: break;
    }

    ctx->pc = 0x2248c0u;

    // 0x2248c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2248c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2248c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2248c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2248c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2248c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2248cc: 0x24a5a668  addiu       $a1, $a1, -0x5998
    ctx->pc = 0x2248ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944360));
    // 0x2248d0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2248d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2248d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2248d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2248d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2248dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2248dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2248e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2248e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2248e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2248e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2248e8: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x2248e8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2248ec: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2248ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2248f0: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x2248f0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2248f4: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2248f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x2248f8: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x2248f8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2248fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2248fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224900: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x224900u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x224904: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x224904u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x224908: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x224908u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x22490c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x22490cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x224910: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x224910u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x224914: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x224914u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x224918: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x224918u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22491c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22491cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224920: 0xc04b414  jal         func_12D050
    ctx->pc = 0x224920u;
    SET_GPR_U32(ctx, 31, 0x224928u);
    ctx->pc = 0x224924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224920u;
            // 0x224924: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224928u; }
        if (ctx->pc != 0x224928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224928u; }
        if (ctx->pc != 0x224928u) { return; }
    }
    ctx->pc = 0x224928u;
label_224928:
    // 0x224928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22492c: 0x122000ff  beqz        $s1, . + 4 + (0xFF << 2)
    ctx->pc = 0x22492Cu;
    {
        const bool branch_taken_0x22492c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22492Cu;
            // 0x224930: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22492c) {
            ctx->pc = 0x224D2Cu;
            goto label_224d2c;
        }
    }
    ctx->pc = 0x224934u;
    // 0x224934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22493c: 0x240702c0  addiu       $a3, $zero, 0x2C0
    ctx->pc = 0x22493cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x224940: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x224940u;
    SET_GPR_U32(ctx, 31, 0x224948u);
    ctx->pc = 0x224944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224940u;
            // 0x224944: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224948u; }
        if (ctx->pc != 0x224948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224948u; }
        if (ctx->pc != 0x224948u) { return; }
    }
    ctx->pc = 0x224948u;
label_224948:
    // 0x224948: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x224948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x22494c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x22494cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x224950: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x224950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x224954: 0xc78293b8  lwc1        $f2, -0x6C48($gp)
    ctx->pc = 0x224954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224958: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x22495c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x22495cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x224960: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x224960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224964: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x224964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x224968: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x224968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22496c: 0x878393b4  lh          $v1, -0x6C4C($gp)
    ctx->pc = 0x22496cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x224970: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x224970u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x224974: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x224974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x224978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22497c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224980: 0x0  nop
    ctx->pc = 0x224980u;
    // NOP
    // 0x224984: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x224984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x224988: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224988u;
    {
        const bool branch_taken_0x224988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22498Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224988u;
            // 0x22498c: 0x46000e01  sub.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224988) {
            ctx->pc = 0x2249A0u;
            goto label_2249a0;
        }
    }
    ctx->pc = 0x224990u;
    // 0x224990: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224990u;
    {
        const bool branch_taken_0x224990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224990u;
            // 0x224994: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224990) {
            ctx->pc = 0x2249A4u;
            goto label_2249a4;
        }
    }
    ctx->pc = 0x224998u;
    // 0x224998: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x224998u;
    {
        const bool branch_taken_0x224998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22499Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224998u;
            // 0x22499c: 0x3c033f49  lui         $v1, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224998) {
            ctx->pc = 0x2249B4u;
            goto label_2249b4;
        }
    }
    ctx->pc = 0x2249A0u;
label_2249a0:
    // 0x2249a0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2249a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2249a4:
    // 0x2249a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2249a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2249a8: 0x0  nop
    ctx->pc = 0x2249a8u;
    // NOP
    // 0x2249ac: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x2249acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2249b0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2249b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_2249b4:
    // 0x2249b4: 0x3c02bf06  lui         $v0, 0xBF06
    ctx->pc = 0x2249b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48902 << 16));
    // 0x2249b8: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2249b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2249bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2249bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2249c0: 0x34430a92  ori         $v1, $v0, 0xA92
    ctx->pc = 0x2249c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2249c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2249c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2249c8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2249c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2249cc: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x2249ccu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2249d0: 0x461707c0  add.s       $f31, $f0, $f23
    ctx->pc = 0x2249d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x2249d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2249d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2249d8: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x2249d8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x2249dc: 0x46180582  mul.s       $f22, $f0, $f24
    ctx->pc = 0x2249dcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2249e0: 0xc047964  jal         func_11E590
    ctx->pc = 0x2249E0u;
    SET_GPR_U32(ctx, 31, 0x2249E8u);
    ctx->pc = 0x2249E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2249E0u;
            // 0x2249e4: 0x4600fb06  mov.s       $f12, $f31 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[31]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249E8u; }
        if (ctx->pc != 0x2249E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249E8u; }
        if (ctx->pc != 0x2249E8u) { return; }
    }
    ctx->pc = 0x2249E8u;
label_2249e8:
    // 0x2249e8: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x2249e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2249ec: 0xc78093c0  lwc1        $f0, -0x6C40($gp)
    ctx->pc = 0x2249ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2249f0: 0x4600fb06  mov.s       $f12, $f31
    ctx->pc = 0x2249f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
    // 0x2249f4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2249F4u;
    SET_GPR_U32(ctx, 31, 0x2249FCu);
    ctx->pc = 0x2249F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2249F4u;
            // 0x2249f8: 0x46010641  sub.s       $f25, $f0, $f1 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249FCu; }
        if (ctx->pc != 0x2249FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249FCu; }
        if (ctx->pc != 0x2249FCu) { return; }
    }
    ctx->pc = 0x2249FCu;
label_2249fc:
    // 0x2249fc: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x2249fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x224a00: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x224a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x224a04: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x224a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x224a08: 0xc78093c4  lwc1        $f0, -0x6C3C($gp)
    ctx->pc = 0x224a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x224a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x224a10: 0x0  nop
    ctx->pc = 0x224a10u;
    // NOP
    // 0x224a14: 0x4602fb01  sub.s       $f12, $f31, $f2
    ctx->pc = 0x224a14u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], ctx->f[2]);
    // 0x224a18: 0xc047964  jal         func_11E590
    ctx->pc = 0x224A18u;
    SET_GPR_U32(ctx, 31, 0x224A20u);
    ctx->pc = 0x224A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A18u;
            // 0x224a1c: 0x46010681  sub.s       $f26, $f0, $f1 (Delay Slot)
        ctx->f[26] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A20u; }
        if (ctx->pc != 0x224A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A20u; }
        if (ctx->pc != 0x224A20u) { return; }
    }
    ctx->pc = 0x224A20u;
label_224a20:
    // 0x224a20: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x224a20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x224a24: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x224a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x224a28: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x224a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x224a2c: 0xc78193c0  lwc1        $f1, -0x6C40($gp)
    ctx->pc = 0x224a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224a34: 0x0  nop
    ctx->pc = 0x224a34u;
    // NOP
    // 0x224a38: 0x4600fb01  sub.s       $f12, $f31, $f0
    ctx->pc = 0x224a38u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], ctx->f[0]);
    // 0x224a3c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x224A3Cu;
    SET_GPR_U32(ctx, 31, 0x224A44u);
    ctx->pc = 0x224A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A3Cu;
            // 0x224a40: 0x46020ec1  sub.s       $f27, $f1, $f2 (Delay Slot)
        ctx->f[27] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A44u; }
        if (ctx->pc != 0x224A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A44u; }
        if (ctx->pc != 0x224A44u) { return; }
    }
    ctx->pc = 0x224A44u;
label_224a44:
    // 0x224a44: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x224a44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x224a48: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x224a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x224a4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x224a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x224a50: 0xc78193c4  lwc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x224a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224a58: 0x0  nop
    ctx->pc = 0x224a58u;
    // NOP
    // 0x224a5c: 0x4600ffc0  add.s       $f31, $f31, $f0
    ctx->pc = 0x224a5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[0]);
    // 0x224a60: 0x46020f01  sub.s       $f28, $f1, $f2
    ctx->pc = 0x224a60u;
    ctx->f[28] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x224a64: 0xc047964  jal         func_11E590
    ctx->pc = 0x224A64u;
    SET_GPR_U32(ctx, 31, 0x224A6Cu);
    ctx->pc = 0x224A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A64u;
            // 0x224a68: 0x4600fb06  mov.s       $f12, $f31 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[31]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A6Cu; }
        if (ctx->pc != 0x224A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A6Cu; }
        if (ctx->pc != 0x224A6Cu) { return; }
    }
    ctx->pc = 0x224A6Cu;
label_224a6c:
    // 0x224a6c: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x224a6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x224a70: 0xc78093c0  lwc1        $f0, -0x6C40($gp)
    ctx->pc = 0x224a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a74: 0x4600fb06  mov.s       $f12, $f31
    ctx->pc = 0x224a74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
    // 0x224a78: 0xc047a42  jal         func_11E908
    ctx->pc = 0x224A78u;
    SET_GPR_U32(ctx, 31, 0x224A80u);
    ctx->pc = 0x224A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A78u;
            // 0x224a7c: 0x46010741  sub.s       $f29, $f0, $f1 (Delay Slot)
        ctx->f[29] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A80u; }
        if (ctx->pc != 0x224A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A80u; }
        if (ctx->pc != 0x224A80u) { return; }
    }
    ctx->pc = 0x224A80u;
label_224a80:
    // 0x224a80: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x224a80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x224a84: 0x3c023e77  lui         $v0, 0x3E77
    ctx->pc = 0x224a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15991 << 16));
    // 0x224a88: 0x344275fa  ori         $v0, $v0, 0x75FA
    ctx->pc = 0x224a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30202);
    // 0x224a8c: 0xc78193c4  lwc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x224a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224a94: 0x0  nop
    ctx->pc = 0x224a94u;
    // NOP
    // 0x224a98: 0x461f07c0  add.s       $f31, $f0, $f31
    ctx->pc = 0x224a98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[31]);
    // 0x224a9c: 0x46020f81  sub.s       $f30, $f1, $f2
    ctx->pc = 0x224a9cu;
    ctx->f[30] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x224aa0: 0xc047964  jal         func_11E590
    ctx->pc = 0x224AA0u;
    SET_GPR_U32(ctx, 31, 0x224AA8u);
    ctx->pc = 0x224AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AA0u;
            // 0x224aa4: 0x4600fb06  mov.s       $f12, $f31 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[31]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AA8u; }
        if (ctx->pc != 0x224AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AA8u; }
        if (ctx->pc != 0x224AA8u) { return; }
    }
    ctx->pc = 0x224AA8u;
label_224aa8:
    // 0x224aa8: 0xc78193c0  lwc1        $f1, -0x6C40($gp)
    ctx->pc = 0x224aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224aac: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x224aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x224ab0: 0x4600fb06  mov.s       $f12, $f31
    ctx->pc = 0x224ab0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
    // 0x224ab4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x224AB4u;
    SET_GPR_U32(ctx, 31, 0x224ABCu);
    ctx->pc = 0x224AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AB4u;
            // 0x224ab8: 0x46000fc1  sub.s       $f31, $f1, $f0 (Delay Slot)
        ctx->f[31] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224ABCu; }
        if (ctx->pc != 0x224ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224ABCu; }
        if (ctx->pc != 0x224ABCu) { return; }
    }
    ctx->pc = 0x224ABCu;
label_224abc:
    // 0x224abc: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x224abcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x224ac0: 0x3c02bf56  lui         $v0, 0xBF56
    ctx->pc = 0x224ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48982 << 16));
    // 0x224ac4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x224ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x224ac8: 0xc78193c4  lwc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x224ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224ad0: 0x0  nop
    ctx->pc = 0x224ad0u;
    // NOP
    // 0x224ad4: 0x461705c0  add.s       $f23, $f0, $f23
    ctx->pc = 0x224ad4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x224ad8: 0x46020d81  sub.s       $f22, $f1, $f2
    ctx->pc = 0x224ad8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x224adc: 0xc047964  jal         func_11E590
    ctx->pc = 0x224ADCu;
    SET_GPR_U32(ctx, 31, 0x224AE4u);
    ctx->pc = 0x224AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224ADCu;
            // 0x224ae0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AE4u; }
        if (ctx->pc != 0x224AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AE4u; }
        if (ctx->pc != 0x224AE4u) { return; }
    }
    ctx->pc = 0x224AE4u;
label_224ae4:
    // 0x224ae4: 0xc78193c0  lwc1        $f1, -0x6C40($gp)
    ctx->pc = 0x224ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224ae8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x224ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x224aec: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x224aecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x224af0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x224AF0u;
    SET_GPR_U32(ctx, 31, 0x224AF8u);
    ctx->pc = 0x224AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AF0u;
            // 0x224af4: 0x46000dc1  sub.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AF8u; }
        if (ctx->pc != 0x224AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AF8u; }
        if (ctx->pc != 0x224AF8u) { return; }
    }
    ctx->pc = 0x224AF8u;
label_224af8:
    // 0x224af8: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x224af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x224afc: 0x3c024048  lui         $v0, 0x4048
    ctx->pc = 0x224afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16456 << 16));
    // 0x224b00: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x224b00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x224b04: 0xc78093c4  lwc1        $f0, -0x6C3C($gp)
    ctx->pc = 0x224b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224b08: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x224b08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x224b0c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x224B0Cu;
    SET_GPR_U32(ctx, 31, 0x224B14u);
    ctx->pc = 0x224B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B0Cu;
            // 0x224b10: 0x46010601  sub.s       $f24, $f0, $f1 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B14u; }
        if (ctx->pc != 0x224B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B14u; }
        if (ctx->pc != 0x224B14u) { return; }
    }
    ctx->pc = 0x224B14u;
label_224b14:
    // 0x224b14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x224b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b18: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x224B18u;
    SET_GPR_U32(ctx, 31, 0x224B20u);
    ctx->pc = 0x224B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B18u;
            // 0x224b1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B20u; }
        if (ctx->pc != 0x224B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B20u; }
        if (ctx->pc != 0x224B20u) { return; }
    }
    ctx->pc = 0x224B20u;
label_224b20:
    // 0x224b20: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x224B20u;
    SET_GPR_U32(ctx, 31, 0x224B28u);
    ctx->pc = 0x224B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B20u;
            // 0x224b24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B28u; }
        if (ctx->pc != 0x224B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B28u; }
        if (ctx->pc != 0x224B28u) { return; }
    }
    ctx->pc = 0x224B28u;
label_224b28:
    // 0x224b28: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x224b28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x224b2c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x224b2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x224b30: 0xc08878c  jal         func_221E30
    ctx->pc = 0x224B30u;
    SET_GPR_U32(ctx, 31, 0x224B38u);
    ctx->pc = 0x224B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B30u;
            // 0x224b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B38u; }
        if (ctx->pc != 0x224B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B38u; }
        if (ctx->pc != 0x224B38u) { return; }
    }
    ctx->pc = 0x224B38u;
label_224b38:
    // 0x224b38: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x224B38u;
    SET_GPR_U32(ctx, 31, 0x224B40u);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B40u; }
        if (ctx->pc != 0x224B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B40u; }
        if (ctx->pc != 0x224B40u) { return; }
    }
    ctx->pc = 0x224B40u;
label_224b40:
    // 0x224b40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x224b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b48: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x224B48u;
    SET_GPR_U32(ctx, 31, 0x224B50u);
    ctx->pc = 0x224B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B48u;
            // 0x224b4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B50u; }
        if (ctx->pc != 0x224B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B50u; }
        if (ctx->pc != 0x224B50u) { return; }
    }
    ctx->pc = 0x224B50u;
label_224b50:
    // 0x224b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b54: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x224B54u;
    SET_GPR_U32(ctx, 31, 0x224B5Cu);
    ctx->pc = 0x224B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B54u;
            // 0x224b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B5Cu; }
        if (ctx->pc != 0x224B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B5Cu; }
        if (ctx->pc != 0x224B5Cu) { return; }
    }
    ctx->pc = 0x224B5Cu;
label_224b5c:
    // 0x224b5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b60: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x224B60u;
    SET_GPR_U32(ctx, 31, 0x224B68u);
    ctx->pc = 0x224B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B60u;
            // 0x224b64: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B68u; }
        if (ctx->pc != 0x224B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B68u; }
        if (ctx->pc != 0x224B68u) { return; }
    }
    ctx->pc = 0x224B68u;
label_224b68:
    // 0x224b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b6c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x224B6Cu;
    SET_GPR_U32(ctx, 31, 0x224B74u);
    ctx->pc = 0x224B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B6Cu;
            // 0x224b70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B74u; }
        if (ctx->pc != 0x224B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B74u; }
        if (ctx->pc != 0x224B74u) { return; }
    }
    ctx->pc = 0x224B74u;
label_224b74:
    // 0x224b74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224B74u;
    SET_GPR_U32(ctx, 31, 0x224B7Cu);
    ctx->pc = 0x224B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B74u;
            // 0x224b78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B7Cu; }
        if (ctx->pc != 0x224B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B7Cu; }
        if (ctx->pc != 0x224B7Cu) { return; }
    }
    ctx->pc = 0x224B7Cu;
label_224b7c:
    // 0x224b7c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x224b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x224b80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b84: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x224b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x224b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b90: 0xc04d320  jal         func_134C80
    ctx->pc = 0x224B90u;
    SET_GPR_U32(ctx, 31, 0x224B98u);
    ctx->pc = 0x224B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B90u;
            // 0x224b94: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B98u; }
        if (ctx->pc != 0x224B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B98u; }
        if (ctx->pc != 0x224B98u) { return; }
    }
    ctx->pc = 0x224B98u;
label_224b98:
    // 0x224b98: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x224b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x224b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ba0: 0x24a5ce60  addiu       $a1, $a1, -0x31A0
    ctx->pc = 0x224ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954592));
    // 0x224ba4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x224BA4u;
    SET_GPR_U32(ctx, 31, 0x224BACu);
    ctx->pc = 0x224BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BA4u;
            // 0x224ba8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BACu; }
        if (ctx->pc != 0x224BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BACu; }
        if (ctx->pc != 0x224BACu) { return; }
    }
    ctx->pc = 0x224BACu;
label_224bac:
    // 0x224bac: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x224BACu;
    SET_GPR_U32(ctx, 31, 0x224BB4u);
    ctx->pc = 0x224BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BACu;
            // 0x224bb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BB4u; }
        if (ctx->pc != 0x224BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BB4u; }
        if (ctx->pc != 0x224BB4u) { return; }
    }
    ctx->pc = 0x224BB4u;
label_224bb4:
    // 0x224bb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x224bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x224bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bbc: 0x24a5a670  addiu       $a1, $a1, -0x5990
    ctx->pc = 0x224bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944368));
    // 0x224bc0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x224BC0u;
    SET_GPR_U32(ctx, 31, 0x224BC8u);
    ctx->pc = 0x224BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BC0u;
            // 0x224bc4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BC8u; }
        if (ctx->pc != 0x224BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BC8u; }
        if (ctx->pc != 0x224BC8u) { return; }
    }
    ctx->pc = 0x224BC8u;
label_224bc8:
    // 0x224bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bd0: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x224BD0u;
    SET_GPR_U32(ctx, 31, 0x224BD8u);
    ctx->pc = 0x224BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BD0u;
            // 0x224bd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BD8u; }
        if (ctx->pc != 0x224BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BD8u; }
        if (ctx->pc != 0x224BD8u) { return; }
    }
    ctx->pc = 0x224BD8u;
label_224bd8:
    // 0x224bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bdc: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x224BDCu;
    SET_GPR_U32(ctx, 31, 0x224BE4u);
    ctx->pc = 0x224BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BDCu;
            // 0x224be0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BE4u; }
        if (ctx->pc != 0x224BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BE4u; }
        if (ctx->pc != 0x224BE4u) { return; }
    }
    ctx->pc = 0x224BE4u;
label_224be4:
    // 0x224be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224be8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x224BE8u;
    SET_GPR_U32(ctx, 31, 0x224BF0u);
    ctx->pc = 0x224BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BE8u;
            // 0x224bec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BF0u; }
        if (ctx->pc != 0x224BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BF0u; }
        if (ctx->pc != 0x224BF0u) { return; }
    }
    ctx->pc = 0x224BF0u;
label_224bf0:
    // 0x224bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bf4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x224BF4u;
    SET_GPR_U32(ctx, 31, 0x224BFCu);
    ctx->pc = 0x224BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224BF4u;
            // 0x224bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BFCu; }
        if (ctx->pc != 0x224BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BFCu; }
        if (ctx->pc != 0x224BFCu) { return; }
    }
    ctx->pc = 0x224BFCu;
label_224bfc:
    // 0x224bfc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x224bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x224c00: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x224c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x224c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c0c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x224C0Cu;
    SET_GPR_U32(ctx, 31, 0x224C14u);
    ctx->pc = 0x224C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C0Cu;
            // 0x224c10: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C14u; }
        if (ctx->pc != 0x224C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C14u; }
        if (ctx->pc != 0x224C14u) { return; }
    }
    ctx->pc = 0x224C14u;
label_224c14:
    // 0x224c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c18: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x224c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x224c1c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x224C1Cu;
    SET_GPR_U32(ctx, 31, 0x224C24u);
    ctx->pc = 0x224C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C1Cu;
            // 0x224c20: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C24u; }
        if (ctx->pc != 0x224C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C24u; }
        if (ctx->pc != 0x224C24u) { return; }
    }
    ctx->pc = 0x224C24u;
label_224c24:
    // 0x224c24: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x224c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x224c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c2c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x224c2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x224c30: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x224C30u;
    SET_GPR_U32(ctx, 31, 0x224C38u);
    ctx->pc = 0x224C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C30u;
            // 0x224c34: 0x4600d346  mov.s       $f13, $f26 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C38u; }
        if (ctx->pc != 0x224C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C38u; }
        if (ctx->pc != 0x224C38u) { return; }
    }
    ctx->pc = 0x224C38u;
label_224c38:
    // 0x224c38: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x224c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x224c3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c40: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x224C40u;
    SET_GPR_U32(ctx, 31, 0x224C48u);
    ctx->pc = 0x224C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C40u;
            // 0x224c44: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C48u; }
        if (ctx->pc != 0x224C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C48u; }
        if (ctx->pc != 0x224C48u) { return; }
    }
    ctx->pc = 0x224C48u;
label_224c48:
    // 0x224c48: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x224c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x224c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c50: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x224c50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x224c54: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x224C54u;
    SET_GPR_U32(ctx, 31, 0x224C5Cu);
    ctx->pc = 0x224C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C54u;
            // 0x224c58: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C5Cu; }
        if (ctx->pc != 0x224C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C5Cu; }
        if (ctx->pc != 0x224C5Cu) { return; }
    }
    ctx->pc = 0x224C5Cu;
label_224c5c:
    // 0x224c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c60: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x224c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x224c64: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x224C64u;
    SET_GPR_U32(ctx, 31, 0x224C6Cu);
    ctx->pc = 0x224C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C64u;
            // 0x224c68: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C6Cu; }
        if (ctx->pc != 0x224C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C6Cu; }
        if (ctx->pc != 0x224C6Cu) { return; }
    }
    ctx->pc = 0x224C6Cu;
label_224c6c:
    // 0x224c6c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x224c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x224c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c74: 0x4600fb06  mov.s       $f12, $f31
    ctx->pc = 0x224c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[31]);
    // 0x224c78: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x224C78u;
    SET_GPR_U32(ctx, 31, 0x224C80u);
    ctx->pc = 0x224C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C78u;
            // 0x224c7c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C80u; }
        if (ctx->pc != 0x224C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C80u; }
        if (ctx->pc != 0x224C80u) { return; }
    }
    ctx->pc = 0x224C80u;
label_224c80:
    // 0x224c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c84: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x224c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x224c88: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x224C88u;
    SET_GPR_U32(ctx, 31, 0x224C90u);
    ctx->pc = 0x224C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C88u;
            // 0x224c8c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C90u; }
        if (ctx->pc != 0x224C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C90u; }
        if (ctx->pc != 0x224C90u) { return; }
    }
    ctx->pc = 0x224C90u;
label_224c90:
    // 0x224c90: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x224c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x224c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c98: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x224c98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x224c9c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x224C9Cu;
    SET_GPR_U32(ctx, 31, 0x224CA4u);
    ctx->pc = 0x224CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224C9Cu;
            // 0x224ca0: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CA4u; }
        if (ctx->pc != 0x224CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CA4u; }
        if (ctx->pc != 0x224CA4u) { return; }
    }
    ctx->pc = 0x224CA4u;
label_224ca4:
    // 0x224ca4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x224CA4u;
    SET_GPR_U32(ctx, 31, 0x224CACu);
    ctx->pc = 0x224CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CA4u;
            // 0x224ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CACu; }
        if (ctx->pc != 0x224CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CACu; }
        if (ctx->pc != 0x224CACu) { return; }
    }
    ctx->pc = 0x224CACu;
label_224cac:
    // 0x224cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cb0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x224CB0u;
    SET_GPR_U32(ctx, 31, 0x224CB8u);
    ctx->pc = 0x224CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CB0u;
            // 0x224cb4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CB8u; }
        if (ctx->pc != 0x224CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CB8u; }
        if (ctx->pc != 0x224CB8u) { return; }
    }
    ctx->pc = 0x224CB8u;
label_224cb8:
    // 0x224cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x224cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x224cc0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x224CC0u;
    SET_GPR_U32(ctx, 31, 0x224CC8u);
    ctx->pc = 0x224CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CC0u;
            // 0x224cc4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CC8u; }
        if (ctx->pc != 0x224CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CC8u; }
        if (ctx->pc != 0x224CC8u) { return; }
    }
    ctx->pc = 0x224CC8u;
label_224cc8:
    // 0x224cc8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x224cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x224ccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cd0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x224cd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x224cd4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x224CD4u;
    SET_GPR_U32(ctx, 31, 0x224CDCu);
    ctx->pc = 0x224CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CD4u;
            // 0x224cd8: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CDCu; }
        if (ctx->pc != 0x224CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CDCu; }
        if (ctx->pc != 0x224CDCu) { return; }
    }
    ctx->pc = 0x224CDCu;
label_224cdc:
    // 0x224cdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ce0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x224ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x224ce4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x224CE4u;
    SET_GPR_U32(ctx, 31, 0x224CECu);
    ctx->pc = 0x224CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CE4u;
            // 0x224ce8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CECu; }
        if (ctx->pc != 0x224CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CECu; }
        if (ctx->pc != 0x224CECu) { return; }
    }
    ctx->pc = 0x224CECu;
label_224cec:
    // 0x224cec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224CECu;
    SET_GPR_U32(ctx, 31, 0x224CF4u);
    ctx->pc = 0x224CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CECu;
            // 0x224cf0: 0x4615bb00  add.s       $f12, $f23, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CF4u; }
        if (ctx->pc != 0x224CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CF4u; }
        if (ctx->pc != 0x224CF4u) { return; }
    }
    ctx->pc = 0x224CF4u;
label_224cf4:
    // 0x224cf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cf8: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x224cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
    // 0x224cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224d00: 0x0  nop
    ctx->pc = 0x224d00u;
    // NOP
    // 0x224d04: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x224d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x224d08: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224D08u;
    SET_GPR_U32(ctx, 31, 0x224D10u);
    ctx->pc = 0x224D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224D08u;
            // 0x224d0c: 0x4600c300  add.s       $f12, $f24, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D10u; }
        if (ctx->pc != 0x224D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D10u; }
        if (ctx->pc != 0x224D10u) { return; }
    }
    ctx->pc = 0x224D10u;
label_224d10:
    // 0x224d10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x224d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d1c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x224D1Cu;
    SET_GPR_U32(ctx, 31, 0x224D24u);
    ctx->pc = 0x224D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224D1Cu;
            // 0x224d20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D24u; }
        if (ctx->pc != 0x224D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D24u; }
        if (ctx->pc != 0x224D24u) { return; }
    }
    ctx->pc = 0x224D24u;
label_224d24:
    // 0x224d24: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x224D24u;
    SET_GPR_U32(ctx, 31, 0x224D2Cu);
    ctx->pc = 0x224D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224D24u;
            // 0x224d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D2Cu; }
        if (ctx->pc != 0x224D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D2Cu; }
        if (ctx->pc != 0x224D2Cu) { return; }
    }
    ctx->pc = 0x224D2Cu;
label_224d2c:
    // 0x224d2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x224d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x224d30: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x224d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x224d34: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x224d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x224d38: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x224d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x224d3c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x224d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x224d40: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x224d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x224d44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x224d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x224d48: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x224d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x224d4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x224d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224d50: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x224d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x224d54: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x224d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x224d58: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x224d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x224d5c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x224d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x224d60: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x224d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x224d64: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x224d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x224d68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x224d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x224d6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x224d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224d70: 0x3e00008  jr          $ra
    ctx->pc = 0x224D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D70u;
            // 0x224d74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224D78u;
}
