#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaListDraw__FRiPfii
// Address: 0x1f3a40 - 0x1f4a08
void MenuGeoramaListDraw__FRiPfii_0x1f3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaListDraw__FRiPfii_0x1f3a40");
#endif

    switch (ctx->pc) {
        case 0x1f3ac4u: goto label_1f3ac4;
        case 0x1f3ae0u: goto label_1f3ae0;
        case 0x1f3af8u: goto label_1f3af8;
        case 0x1f3b10u: goto label_1f3b10;
        case 0x1f3b28u: goto label_1f3b28;
        case 0x1f3b30u: goto label_1f3b30;
        case 0x1f3b40u: goto label_1f3b40;
        case 0x1f3b4cu: goto label_1f3b4c;
        case 0x1f3b58u: goto label_1f3b58;
        case 0x1f3b70u: goto label_1f3b70;
        case 0x1f3b84u: goto label_1f3b84;
        case 0x1f3b9cu: goto label_1f3b9c;
        case 0x1f3bc4u: goto label_1f3bc4;
        case 0x1f3be0u: goto label_1f3be0;
        case 0x1f3bf0u: goto label_1f3bf0;
        case 0x1f3c0cu: goto label_1f3c0c;
        case 0x1f3c2cu: goto label_1f3c2c;
        case 0x1f3c3cu: goto label_1f3c3c;
        case 0x1f3c54u: goto label_1f3c54;
        case 0x1f3c68u: goto label_1f3c68;
        case 0x1f3c80u: goto label_1f3c80;
        case 0x1f3c88u: goto label_1f3c88;
        case 0x1f3ca4u: goto label_1f3ca4;
        case 0x1f3cb4u: goto label_1f3cb4;
        case 0x1f3cbcu: goto label_1f3cbc;
        case 0x1f3cdcu: goto label_1f3cdc;
        case 0x1f3cf4u: goto label_1f3cf4;
        case 0x1f3d04u: goto label_1f3d04;
        case 0x1f3d5cu: goto label_1f3d5c;
        case 0x1f3d70u: goto label_1f3d70;
        case 0x1f3d88u: goto label_1f3d88;
        case 0x1f3da0u: goto label_1f3da0;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3dd4u: goto label_1f3dd4;
        case 0x1f3decu: goto label_1f3dec;
        case 0x1f3df8u: goto label_1f3df8;
        case 0x1f3e04u: goto label_1f3e04;
        case 0x1f3e10u: goto label_1f3e10;
        case 0x1f3e28u: goto label_1f3e28;
        case 0x1f3e4cu: goto label_1f3e4c;
        case 0x1f3e64u: goto label_1f3e64;
        case 0x1f3e70u: goto label_1f3e70;
        case 0x1f3e7cu: goto label_1f3e7c;
        case 0x1f3e94u: goto label_1f3e94;
        case 0x1f3ea4u: goto label_1f3ea4;
        case 0x1f3eb8u: goto label_1f3eb8;
        case 0x1f3ed0u: goto label_1f3ed0;
        case 0x1f3eecu: goto label_1f3eec;
        case 0x1f3f14u: goto label_1f3f14;
        case 0x1f3f2cu: goto label_1f3f2c;
        case 0x1f3f44u: goto label_1f3f44;
        case 0x1f3f5cu: goto label_1f3f5c;
        case 0x1f3f64u: goto label_1f3f64;
        case 0x1f3f8cu: goto label_1f3f8c;
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fb4u: goto label_1f3fb4;
        case 0x1f3fd8u: goto label_1f3fd8;
        case 0x1f3ff0u: goto label_1f3ff0;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4058u: goto label_1f4058;
        case 0x1f4060u: goto label_1f4060;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f4080u: goto label_1f4080;
        case 0x1f4098u: goto label_1f4098;
        case 0x1f40b0u: goto label_1f40b0;
        case 0x1f40c8u: goto label_1f40c8;
        case 0x1f411cu: goto label_1f411c;
        case 0x1f4128u: goto label_1f4128;
        case 0x1f4134u: goto label_1f4134;
        case 0x1f414cu: goto label_1f414c;
        case 0x1f4154u: goto label_1f4154;
        case 0x1f4198u: goto label_1f4198;
        case 0x1f41c8u: goto label_1f41c8;
        case 0x1f41d8u: goto label_1f41d8;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f420cu: goto label_1f420c;
        case 0x1f4240u: goto label_1f4240;
        case 0x1f4280u: goto label_1f4280;
        case 0x1f4294u: goto label_1f4294;
        case 0x1f42a0u: goto label_1f42a0;
        case 0x1f42b8u: goto label_1f42b8;
        case 0x1f42bcu: goto label_1f42bc;
        case 0x1f4300u: goto label_1f4300;
        case 0x1f4340u: goto label_1f4340;
        case 0x1f4368u: goto label_1f4368;
        case 0x1f4374u: goto label_1f4374;
        case 0x1f4380u: goto label_1f4380;
        case 0x1f4398u: goto label_1f4398;
        case 0x1f439cu: goto label_1f439c;
        case 0x1f43e0u: goto label_1f43e0;
        case 0x1f4420u: goto label_1f4420;
        case 0x1f4430u: goto label_1f4430;
        case 0x1f4444u: goto label_1f4444;
        case 0x1f4468u: goto label_1f4468;
        case 0x1f44a8u: goto label_1f44a8;
        case 0x1f44d4u: goto label_1f44d4;
        case 0x1f4510u: goto label_1f4510;
        case 0x1f451cu: goto label_1f451c;
        case 0x1f4528u: goto label_1f4528;
        case 0x1f4534u: goto label_1f4534;
        case 0x1f454cu: goto label_1f454c;
        case 0x1f4560u: goto label_1f4560;
        case 0x1f4568u: goto label_1f4568;
        case 0x1f457cu: goto label_1f457c;
        case 0x1f4588u: goto label_1f4588;
        case 0x1f45a0u: goto label_1f45a0;
        case 0x1f45c4u: goto label_1f45c4;
        case 0x1f45d4u: goto label_1f45d4;
        case 0x1f45e8u: goto label_1f45e8;
        case 0x1f4618u: goto label_1f4618;
        case 0x1f4620u: goto label_1f4620;
        case 0x1f462cu: goto label_1f462c;
        case 0x1f4638u: goto label_1f4638;
        case 0x1f4644u: goto label_1f4644;
        case 0x1f4650u: goto label_1f4650;
        case 0x1f4668u: goto label_1f4668;
        case 0x1f467cu: goto label_1f467c;
        case 0x1f468cu: goto label_1f468c;
        case 0x1f46a0u: goto label_1f46a0;
        case 0x1f46b4u: goto label_1f46b4;
        case 0x1f4748u: goto label_1f4748;
        case 0x1f4754u: goto label_1f4754;
        case 0x1f4760u: goto label_1f4760;
        case 0x1f4778u: goto label_1f4778;
        case 0x1f47a0u: goto label_1f47a0;
        case 0x1f47c8u: goto label_1f47c8;
        case 0x1f47d0u: goto label_1f47d0;
        case 0x1f4848u: goto label_1f4848;
        case 0x1f4854u: goto label_1f4854;
        case 0x1f485cu: goto label_1f485c;
        case 0x1f4864u: goto label_1f4864;
        case 0x1f48e0u: goto label_1f48e0;
        case 0x1f4908u: goto label_1f4908;
        case 0x1f4910u: goto label_1f4910;
        case 0x1f4918u: goto label_1f4918;
        case 0x1f4994u: goto label_1f4994;
        case 0x1f49c0u: goto label_1f49c0;
        default: break;
    }

    ctx->pc = 0x1f3a40u;

    // 0x1f3a40: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1f3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1f3a44: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1f3a48: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1f3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1f3a4c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1f3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1f3a50: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1f3a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1f3a54: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1f3a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1f3a58: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f3a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1f3a5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f3a5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f3a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1f3a64: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f3a64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f3a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f3a6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f3a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f3a70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f3a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f3a74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f3a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a78: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1f3a78u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1f3a7c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1f3a7cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f3a80: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1f3a80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f3a84: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1f3a84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f3a88: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1f3a88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f3a8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f3a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f3a90: 0x8f839020  lw          $v1, -0x6FE0($gp)
    ctx->pc = 0x1f3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f3a94: 0x106003ca  beqz        $v1, . + 4 + (0x3CA << 2)
    ctx->pc = 0x1F3A94u;
    {
        const bool branch_taken_0x1f3a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A94u;
            // 0x1f3a98: 0xafa400ec  sw          $a0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a94) {
            ctx->pc = 0x1F49C0u;
            goto label_1f49c0;
        }
    }
    ctx->pc = 0x1F3A9Cu;
    // 0x1f3a9c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1f3a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3aa0: 0x3c03c382  lui         $v1, 0xC382
    ctx->pc = 0x1f3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50050 << 16));
    // 0x1f3aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f3aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3aa8: 0x0  nop
    ctx->pc = 0x1f3aa8u;
    // NOP
    // 0x1f3aac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f3aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3ab0: 0x0  nop
    ctx->pc = 0x1f3ab0u;
    // NOP
    // 0x1f3ab4: 0x450103c2  bc1t        . + 4 + (0x3C2 << 2)
    ctx->pc = 0x1F3AB4u;
    {
        const bool branch_taken_0x1f3ab4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3AB4u;
            // 0x1f3ab8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ab4) {
            ctx->pc = 0x1F49C0u;
            goto label_1f49c0;
        }
    }
    ctx->pc = 0x1F3ABCu;
    // 0x1f3abc: 0xc07c958  jal         func_1F2560
    ctx->pc = 0x1F3ABCu;
    SET_GPR_U32(ctx, 31, 0x1F3AC4u);
    ctx->pc = 0x1F2560u;
    if (runtime->hasFunction(0x1F2560u)) {
        auto targetFn = runtime->lookupFunction(0x1F2560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AC4u; }
        if (ctx->pc != 0x1F3AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvGeoramaDataNo__Fi_0x1f2560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AC4u; }
        if (ctx->pc != 0x1F3AC4u) { return; }
    }
    ctx->pc = 0x1F3AC4u;
label_1f3ac4:
    // 0x1f3ac4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f3ac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ac8: 0x6e003bd  bltz        $s7, . + 4 + (0x3BD << 2)
    ctx->pc = 0x1F3AC8u;
    {
        const bool branch_taken_0x1f3ac8 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x1f3ac8) {
            ctx->pc = 0x1F49C0u;
            goto label_1f49c0;
        }
    }
    ctx->pc = 0x1F3AD0u;
    // 0x1f3ad0: 0x8f829020  lw          $v0, -0x6FE0($gp)
    ctx->pc = 0x1f3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f3ad4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1f3ad4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3ad8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x1F3AD8u;
    SET_GPR_U32(ctx, 31, 0x1F3AE0u);
    ctx->pc = 0x1F3ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3AD8u;
            // 0x1f3adc: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AE0u; }
        if (ctx->pc != 0x1F3AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AE0u; }
        if (ctx->pc != 0x1F3AE0u) { return; }
    }
    ctx->pc = 0x1F3AE0u;
label_1f3ae0:
    // 0x1f3ae0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1f3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f3ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ae8: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1f3ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1f3aec: 0x240700f2  addiu       $a3, $zero, 0xF2
    ctx->pc = 0x1f3aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x1f3af0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3AF0u;
    SET_GPR_U32(ctx, 31, 0x1F3AF8u);
    ctx->pc = 0x1F3AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3AF0u;
            // 0x1f3af4: 0x2408005e  addiu       $t0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AF8u; }
        if (ctx->pc != 0x1F3AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3AF8u; }
        if (ctx->pc != 0x1F3AF8u) { return; }
    }
    ctx->pc = 0x1F3AF8u;
label_1f3af8:
    // 0x1f3af8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1f3af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1f3afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b00: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1f3b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1f3b04: 0x240700f2  addiu       $a3, $zero, 0xF2
    ctx->pc = 0x1f3b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x1f3b08: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3B08u;
    SET_GPR_U32(ctx, 31, 0x1F3B10u);
    ctx->pc = 0x1F3B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B08u;
            // 0x1f3b0c: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B10u; }
        if (ctx->pc != 0x1F3B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B10u; }
        if (ctx->pc != 0x1F3B10u) { return; }
    }
    ctx->pc = 0x1F3B10u;
label_1f3b10:
    // 0x1f3b10: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f3b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f3b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b18: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x1f3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x1f3b1c: 0x240700f2  addiu       $a3, $zero, 0xF2
    ctx->pc = 0x1f3b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x1f3b20: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3B20u;
    SET_GPR_U32(ctx, 31, 0x1F3B28u);
    ctx->pc = 0x1F3B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B20u;
            // 0x1f3b24: 0x24080059  addiu       $t0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B28u; }
        if (ctx->pc != 0x1F3B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B28u; }
        if (ctx->pc != 0x1F3B28u) { return; }
    }
    ctx->pc = 0x1F3B28u;
label_1f3b28:
    // 0x1f3b28: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x1F3B28u;
    SET_GPR_U32(ctx, 31, 0x1F3B30u);
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B30u; }
        if (ctx->pc != 0x1F3B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B30u; }
        if (ctx->pc != 0x1F3B30u) { return; }
    }
    ctx->pc = 0x1F3B30u;
label_1f3b30:
    // 0x1f3b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b38: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1F3B38u;
    SET_GPR_U32(ctx, 31, 0x1F3B40u);
    ctx->pc = 0x1F3B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B38u;
            // 0x1f3b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B40u; }
        if (ctx->pc != 0x1F3B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B40u; }
        if (ctx->pc != 0x1F3B40u) { return; }
    }
    ctx->pc = 0x1F3B40u;
label_1f3b40:
    // 0x1f3b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b44: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F3B44u;
    SET_GPR_U32(ctx, 31, 0x1F3B4Cu);
    ctx->pc = 0x1F3B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B44u;
            // 0x1f3b48: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B4Cu; }
        if (ctx->pc != 0x1F3B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B4Cu; }
        if (ctx->pc != 0x1F3B4Cu) { return; }
    }
    ctx->pc = 0x1F3B4Cu;
label_1f3b4c:
    // 0x1f3b4c: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f3b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f3b50: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F3B50u;
    SET_GPR_U32(ctx, 31, 0x1F3B58u);
    ctx->pc = 0x1F3B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B50u;
            // 0x1f3b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B58u; }
        if (ctx->pc != 0x1F3B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B58u; }
        if (ctx->pc != 0x1F3B58u) { return; }
    }
    ctx->pc = 0x1F3B58u;
label_1f3b58:
    // 0x1f3b58: 0x144083  sra         $t0, $s4, 2
    ctx->pc = 0x1f3b58u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 20), 2));
    // 0x1f3b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b68: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F3B68u;
    SET_GPR_U32(ctx, 31, 0x1F3B70u);
    ctx->pc = 0x1F3B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B68u;
            // 0x1f3b6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B70u; }
        if (ctx->pc != 0x1F3B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B70u; }
        if (ctx->pc != 0x1F3B70u) { return; }
    }
    ctx->pc = 0x1F3B70u;
label_1f3b70:
    // 0x1f3b70: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f3b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3b74: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1f3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1f3b78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3b7c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3B7Cu;
    SET_GPR_U32(ctx, 31, 0x1F3B84u);
    ctx->pc = 0x1F3B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B7Cu;
            // 0x1f3b80: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B84u; }
        if (ctx->pc != 0x1F3B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B84u; }
        if (ctx->pc != 0x1F3B84u) { return; }
    }
    ctx->pc = 0x1F3B84u;
label_1f3b84:
    // 0x1f3b84: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1f3b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3b88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f3b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b8c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1f3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1f3b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3b94: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3B94u;
    SET_GPR_U32(ctx, 31, 0x1F3B9Cu);
    ctx->pc = 0x1F3B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3B94u;
            // 0x1f3b98: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B9Cu; }
        if (ctx->pc != 0x1F3B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B9Cu; }
        if (ctx->pc != 0x1F3B9Cu) { return; }
    }
    ctx->pc = 0x1F3B9Cu;
label_1f3b9c:
    // 0x1f3b9c: 0x27be00fc  addiu       $fp, $sp, 0xFC
    ctx->pc = 0x1f3b9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1f3ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ba4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1f3ba4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3ba8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1f3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3bb0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f3bb4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1f3bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f3bb8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1f3bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3bbc: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F3BBCu;
    SET_GPR_U32(ctx, 31, 0x1F3BC4u);
    ctx->pc = 0x1F3BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BBCu;
            // 0x1f3bc0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BC4u; }
        if (ctx->pc != 0x1F3BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BC4u; }
        if (ctx->pc != 0x1F3BC4u) { return; }
    }
    ctx->pc = 0x1F3BC4u;
label_1f3bc4:
    // 0x1f3bc4: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1f3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1f3bc8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1f3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1f3bcc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3bccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3bd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bd4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f3bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bd8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3BD8u;
    SET_GPR_U32(ctx, 31, 0x1F3BE0u);
    ctx->pc = 0x1F3BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BD8u;
            // 0x1f3bdc: 0x24080088  addiu       $t0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BE0u; }
        if (ctx->pc != 0x1F3BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BE0u; }
        if (ctx->pc != 0x1F3BE0u) { return; }
    }
    ctx->pc = 0x1F3BE0u;
label_1f3be0:
    // 0x1f3be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3be4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1f3be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1f3be8: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F3BE8u;
    SET_GPR_U32(ctx, 31, 0x1F3BF0u);
    ctx->pc = 0x1F3BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3BE8u;
            // 0x1f3bec: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BF0u; }
        if (ctx->pc != 0x1F3BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BF0u; }
        if (ctx->pc != 0x1F3BF0u) { return; }
    }
    ctx->pc = 0x1F3BF0u;
label_1f3bf0:
    // 0x1f3bf0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1f3bf0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3bf4: 0x3c024308  lui         $v0, 0x4308
    ctx->pc = 0x1f3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17160 << 16));
    // 0x1f3bf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3bfc: 0x0  nop
    ctx->pc = 0x1f3bfcu;
    // NOP
    // 0x1f3c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f3c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f3c04: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3C04u;
    SET_GPR_U32(ctx, 31, 0x1F3C0Cu);
    ctx->pc = 0x1F3C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C04u;
            // 0x1f3c08: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C0Cu; }
        if (ctx->pc != 0x1F3C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C0Cu; }
        if (ctx->pc != 0x1F3C0Cu) { return; }
    }
    ctx->pc = 0x1F3C0Cu;
label_1f3c0c:
    // 0x1f3c0c: 0x27b30118  addiu       $s3, $sp, 0x118
    ctx->pc = 0x1f3c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1f3c10: 0x27b6011c  addiu       $s6, $sp, 0x11C
    ctx->pc = 0x1f3c10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1f3c14: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1f3c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f3c18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c1c: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x1f3c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f3c20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c24: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3C24u;
    SET_GPR_U32(ctx, 31, 0x1F3C2Cu);
    ctx->pc = 0x1F3C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C24u;
            // 0x1f3c28: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C2Cu; }
        if (ctx->pc != 0x1F3C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C2Cu; }
        if (ctx->pc != 0x1F3C2Cu) { return; }
    }
    ctx->pc = 0x1F3C2Cu;
label_1f3c2c:
    // 0x1f3c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c30: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1f3c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1f3c34: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F3C34u;
    SET_GPR_U32(ctx, 31, 0x1F3C3Cu);
    ctx->pc = 0x1F3C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C34u;
            // 0x1f3c38: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C3Cu; }
        if (ctx->pc != 0x1F3C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C3Cu; }
        if (ctx->pc != 0x1F3C3Cu) { return; }
    }
    ctx->pc = 0x1F3C3Cu;
label_1f3c3c:
    // 0x1f3c3c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f3c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f3c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f3c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c4c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F3C4Cu;
    SET_GPR_U32(ctx, 31, 0x1F3C54u);
    ctx->pc = 0x1F3C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C4Cu;
            // 0x1f3c50: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C54u; }
        if (ctx->pc != 0x1F3C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C54u; }
        if (ctx->pc != 0x1F3C54u) { return; }
    }
    ctx->pc = 0x1F3C54u;
label_1f3c54:
    // 0x1f3c54: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1f3c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3c58: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x1f3c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f3c5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f3c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f3c60: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3C60u;
    SET_GPR_U32(ctx, 31, 0x1F3C68u);
    ctx->pc = 0x1F3C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C60u;
            // 0x1f3c64: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C68u; }
        if (ctx->pc != 0x1F3C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C68u; }
        if (ctx->pc != 0x1F3C68u) { return; }
    }
    ctx->pc = 0x1F3C68u;
label_1f3c68:
    // 0x1f3c68: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1f3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3c6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f3c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c70: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f3c70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1f3c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c78: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F3C78u;
    SET_GPR_U32(ctx, 31, 0x1F3C80u);
    ctx->pc = 0x1F3C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C78u;
            // 0x1f3c7c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C80u; }
        if (ctx->pc != 0x1F3C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C80u; }
        if (ctx->pc != 0x1F3C80u) { return; }
    }
    ctx->pc = 0x1F3C80u;
label_1f3c80:
    // 0x1f3c80: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3C80u;
    SET_GPR_U32(ctx, 31, 0x1F3C88u);
    ctx->pc = 0x1F3C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C80u;
            // 0x1f3c84: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C88u; }
        if (ctx->pc != 0x1F3C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3C88u; }
        if (ctx->pc != 0x1F3C88u) { return; }
    }
    ctx->pc = 0x1F3C88u;
label_1f3c88:
    // 0x1f3c88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c8c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1f3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1f3c90: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1f3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1f3c94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f3c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c98: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3c98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3c9c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F3CA4u);
    ctx->pc = 0x1F3CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3C9Cu;
            // 0x1f3ca0: 0x24080088  addiu       $t0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CA4u; }
        if (ctx->pc != 0x1F3CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CA4u; }
        if (ctx->pc != 0x1F3CA4u) { return; }
    }
    ctx->pc = 0x1F3CA4u;
label_1f3ca4:
    // 0x1f3ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ca8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1f3cac: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F3CACu;
    SET_GPR_U32(ctx, 31, 0x1F3CB4u);
    ctx->pc = 0x1F3CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3CACu;
            // 0x1f3cb0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CB4u; }
        if (ctx->pc != 0x1F3CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CB4u; }
        if (ctx->pc != 0x1F3CB4u) { return; }
    }
    ctx->pc = 0x1F3CB4u;
label_1f3cb4:
    // 0x1f3cb4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3CB4u;
    SET_GPR_U32(ctx, 31, 0x1F3CBCu);
    ctx->pc = 0x1F3CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3CB4u;
            // 0x1f3cb8: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CBCu; }
        if (ctx->pc != 0x1F3CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CBCu; }
        if (ctx->pc != 0x1F3CBCu) { return; }
    }
    ctx->pc = 0x1F3CBCu;
label_1f3cbc:
    // 0x1f3cbc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1f3cbcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3cc0: 0x0  nop
    ctx->pc = 0x1f3cc0u;
    // NOP
    // 0x1f3cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f3cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f3cc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f3cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ccc: 0x3c024308  lui         $v0, 0x4308
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17160 << 16));
    // 0x1f3cd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3cd4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3CD4u;
    SET_GPR_U32(ctx, 31, 0x1F3CDCu);
    ctx->pc = 0x1F3CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3CD4u;
            // 0x1f3cd8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CDCu; }
        if (ctx->pc != 0x1F3CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CDCu; }
        if (ctx->pc != 0x1F3CDCu) { return; }
    }
    ctx->pc = 0x1F3CDCu;
label_1f3cdc:
    // 0x1f3cdc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1f3cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f3ce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ce4: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x1f3ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f3ce8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3cec: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3CECu;
    SET_GPR_U32(ctx, 31, 0x1F3CF4u);
    ctx->pc = 0x1F3CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3CECu;
            // 0x1f3cf0: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CF4u; }
        if (ctx->pc != 0x1F3CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3CF4u; }
        if (ctx->pc != 0x1F3CF4u) { return; }
    }
    ctx->pc = 0x1F3CF4u;
label_1f3cf4:
    // 0x1f3cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3cf8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1f3cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1f3cfc: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F3CFCu;
    SET_GPR_U32(ctx, 31, 0x1F3D04u);
    ctx->pc = 0x1F3D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3CFCu;
            // 0x1f3d00: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D04u; }
        if (ctx->pc != 0x1F3D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D04u; }
        if (ctx->pc != 0x1F3D04u) { return; }
    }
    ctx->pc = 0x1F3D04u;
label_1f3d04:
    // 0x1f3d04: 0x2a0102a  slt         $v0, $s5, $zero
    ctx->pc = 0x1f3d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1f3d08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f3d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f3d0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3D0Cu;
    {
        const bool branch_taken_0x1f3d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D0Cu;
            // 0x1f3d10: 0x3c130035  lui         $s3, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d0c) {
            ctx->pc = 0x1F3D30u;
            goto label_1f3d30;
        }
    }
    ctx->pc = 0x1F3D14u;
    // 0x1f3d14: 0x8f838ffc  lw          $v1, -0x7004($gp)
    ctx->pc = 0x1f3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f3d18: 0x27828190  addiu       $v0, $gp, -0x7E70
    ctx->pc = 0x1f3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
    // 0x1f3d1c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1f3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f3d20: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f3d20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3d24: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x1f3d24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1f3d28: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1f3d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1f3d2c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f3d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f3d30:
    // 0x1f3d30: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1f3d30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3d34: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3D34u;
    {
        const bool branch_taken_0x1f3d34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D34u;
            // 0x1f3d38: 0x2673e720  addiu       $s3, $s3, -0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d34) {
            ctx->pc = 0x1F3D44u;
            goto label_1f3d44;
        }
    }
    ctx->pc = 0x1F3D3Cu;
    // 0x1f3d3c: 0x3c130035  lui         $s3, 0x35
    ctx->pc = 0x1f3d3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)53 << 16));
    // 0x1f3d40: 0x2673e740  addiu       $s3, $s3, -0x18C0
    ctx->pc = 0x1f3d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960960));
label_1f3d44:
    // 0x1f3d44: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f3d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f3d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d50: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f3d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d54: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F3D54u;
    SET_GPR_U32(ctx, 31, 0x1F3D5Cu);
    ctx->pc = 0x1F3D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D54u;
            // 0x1f3d58: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D5Cu; }
        if (ctx->pc != 0x1F3D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D5Cu; }
        if (ctx->pc != 0x1F3D5Cu) { return; }
    }
    ctx->pc = 0x1F3D5Cu;
label_1f3d5c:
    // 0x1f3d5c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f3d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3d60: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x1f3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x1f3d64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3d68: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3D68u;
    SET_GPR_U32(ctx, 31, 0x1F3D70u);
    ctx->pc = 0x1F3D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D68u;
            // 0x1f3d6c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D70u; }
        if (ctx->pc != 0x1F3D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D70u; }
        if (ctx->pc != 0x1F3D70u) { return; }
    }
    ctx->pc = 0x1F3D70u;
label_1f3d70:
    // 0x1f3d70: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1f3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3d74: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f3d74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d78: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x1f3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x1f3d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3d80: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3D80u;
    SET_GPR_U32(ctx, 31, 0x1F3D88u);
    ctx->pc = 0x1F3D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D80u;
            // 0x1f3d84: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D88u; }
        if (ctx->pc != 0x1F3D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D88u; }
        if (ctx->pc != 0x1F3D88u) { return; }
    }
    ctx->pc = 0x1F3D88u;
label_1f3d88:
    // 0x1f3d88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f3d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d90: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1f3d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1f3d94: 0x24070089  addiu       $a3, $zero, 0x89
    ctx->pc = 0x1f3d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1f3d98: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3D98u;
    SET_GPR_U32(ctx, 31, 0x1F3DA0u);
    ctx->pc = 0x1F3D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D98u;
            // 0x1f3d9c: 0x24080015  addiu       $t0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DA0u; }
        if (ctx->pc != 0x1F3DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DA0u; }
        if (ctx->pc != 0x1F3DA0u) { return; }
    }
    ctx->pc = 0x1F3DA0u;
label_1f3da0:
    // 0x1f3da0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f3da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3da8: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1f3da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1f3dac: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1F3DACu;
    SET_GPR_U32(ctx, 31, 0x1F3DB4u);
    ctx->pc = 0x1F3DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DACu;
            // 0x1f3db0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DB4u; }
        if (ctx->pc != 0x1F3DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DB4u; }
        if (ctx->pc != 0x1F3DB4u) { return; }
    }
    ctx->pc = 0x1F3DB4u;
label_1f3db4:
    // 0x1f3db4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3DB4u;
    {
        const bool branch_taken_0x1f3db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3db4) {
            ctx->pc = 0x1F3DD4u;
            goto label_1f3dd4;
        }
    }
    ctx->pc = 0x1F3DBCu;
    // 0x1f3dbc: 0x240500b6  addiu       $a1, $zero, 0xB6
    ctx->pc = 0x1f3dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x1f3dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3dc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f3dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3dc8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f3dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3dcc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F3DCCu;
    SET_GPR_U32(ctx, 31, 0x1F3DD4u);
    ctx->pc = 0x1F3DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DCCu;
            // 0x1f3dd0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DD4u; }
        if (ctx->pc != 0x1F3DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DD4u; }
        if (ctx->pc != 0x1F3DD4u) { return; }
    }
    ctx->pc = 0x1F3DD4u;
label_1f3dd4:
    // 0x1f3dd4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f3dd8: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x1f3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1f3ddc: 0x244293d0  addiu       $v0, $v0, -0x6C30
    ctx->pc = 0x1f3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939600));
    // 0x1f3de0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3de4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3DE4u;
    SET_GPR_U32(ctx, 31, 0x1F3DECu);
    ctx->pc = 0x1F3DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DE4u;
            // 0x1f3de8: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DECu; }
        if (ctx->pc != 0x1F3DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DECu; }
        if (ctx->pc != 0x1F3DECu) { return; }
    }
    ctx->pc = 0x1F3DECu;
label_1f3dec:
    // 0x1f3dec: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x1f3decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3df0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3DF0u;
    SET_GPR_U32(ctx, 31, 0x1F3DF8u);
    ctx->pc = 0x1F3DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DF0u;
            // 0x1f3df4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DF8u; }
        if (ctx->pc != 0x1F3DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DF8u; }
        if (ctx->pc != 0x1F3DF8u) { return; }
    }
    ctx->pc = 0x1F3DF8u;
label_1f3df8:
    // 0x1f3df8: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x1f3df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3dfc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3DFCu;
    SET_GPR_U32(ctx, 31, 0x1F3E04u);
    ctx->pc = 0x1F3E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DFCu;
            // 0x1f3e00: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E04u; }
        if (ctx->pc != 0x1F3E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E04u; }
        if (ctx->pc != 0x1F3E04u) { return; }
    }
    ctx->pc = 0x1F3E04u;
label_1f3e04:
    // 0x1f3e04: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x1f3e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3e08: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3E08u;
    SET_GPR_U32(ctx, 31, 0x1F3E10u);
    ctx->pc = 0x1F3E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E08u;
            // 0x1f3e0c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E10u; }
        if (ctx->pc != 0x1F3E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E10u; }
        if (ctx->pc != 0x1F3E10u) { return; }
    }
    ctx->pc = 0x1F3E10u;
label_1f3e10:
    // 0x1f3e10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e14: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1f3e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e18: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1f3e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e1c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f3e1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e20: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3E20u;
    SET_GPR_U32(ctx, 31, 0x1F3E28u);
    ctx->pc = 0x1F3E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E20u;
            // 0x1f3e24: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E28u; }
        if (ctx->pc != 0x1F3E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E28u; }
        if (ctx->pc != 0x1F3E28u) { return; }
    }
    ctx->pc = 0x1F3E28u;
label_1f3e28:
    // 0x1f3e28: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f3e2c: 0x17b0c0  sll         $s6, $s7, 3
    ctx->pc = 0x1f3e2cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x1f3e30: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x1f3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
    // 0x1f3e34: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1f3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1f3e38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f3e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3e3c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f3e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3e40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f3e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f3e44: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3E44u;
    SET_GPR_U32(ctx, 31, 0x1F3E4Cu);
    ctx->pc = 0x1F3E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E44u;
            // 0x1f3e48: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E4Cu; }
        if (ctx->pc != 0x1F3E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E4Cu; }
        if (ctx->pc != 0x1F3E4Cu) { return; }
    }
    ctx->pc = 0x1F3E4Cu;
label_1f3e4c:
    // 0x1f3e4c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1f3e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3e50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f3e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e54: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1f3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1f3e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3e5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E64u);
    ctx->pc = 0x1F3E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E5Cu;
            // 0x1f3e60: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E64u; }
        if (ctx->pc != 0x1F3E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E64u; }
        if (ctx->pc != 0x1F3E64u) { return; }
    }
    ctx->pc = 0x1F3E64u;
label_1f3e64:
    // 0x1f3e64: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x1f3e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3e68: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3E68u;
    SET_GPR_U32(ctx, 31, 0x1F3E70u);
    ctx->pc = 0x1F3E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E68u;
            // 0x1f3e6c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E70u; }
        if (ctx->pc != 0x1F3E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E70u; }
        if (ctx->pc != 0x1F3E70u) { return; }
    }
    ctx->pc = 0x1F3E70u;
label_1f3e70:
    // 0x1f3e70: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x1f3e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3e74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3E74u;
    SET_GPR_U32(ctx, 31, 0x1F3E7Cu);
    ctx->pc = 0x1F3E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E74u;
            // 0x1f3e78: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E7Cu; }
        if (ctx->pc != 0x1F3E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E7Cu; }
        if (ctx->pc != 0x1F3E7Cu) { return; }
    }
    ctx->pc = 0x1F3E7Cu;
label_1f3e7c:
    // 0x1f3e7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e80: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1f3e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e84: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f3e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e88: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f3e88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e8c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3E8Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E94u);
    ctx->pc = 0x1F3E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E8Cu;
            // 0x1f3e90: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E94u; }
        if (ctx->pc != 0x1F3E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E94u; }
        if (ctx->pc != 0x1F3E94u) { return; }
    }
    ctx->pc = 0x1F3E94u;
label_1f3e94:
    // 0x1f3e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3e98: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1f3e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1f3e9c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x1F3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1F3EA4u);
    ctx->pc = 0x1F3EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E9Cu;
            // 0x1f3ea0: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EA4u; }
        if (ctx->pc != 0x1F3EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EA4u; }
        if (ctx->pc != 0x1F3EA4u) { return; }
    }
    ctx->pc = 0x1F3EA4u;
label_1f3ea4:
    // 0x1f3ea4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f3ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3ea8: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x1f3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x1f3eac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3eb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3EB0u;
    SET_GPR_U32(ctx, 31, 0x1F3EB8u);
    ctx->pc = 0x1F3EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EB0u;
            // 0x1f3eb4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EB8u; }
        if (ctx->pc != 0x1F3EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EB8u; }
        if (ctx->pc != 0x1F3EB8u) { return; }
    }
    ctx->pc = 0x1F3EB8u;
label_1f3eb8:
    // 0x1f3eb8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1f3eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3ebc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f3ebcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ec0: 0x3c024238  lui         $v0, 0x4238
    ctx->pc = 0x1f3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16952 << 16));
    // 0x1f3ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ec8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3EC8u;
    SET_GPR_U32(ctx, 31, 0x1F3ED0u);
    ctx->pc = 0x1F3ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EC8u;
            // 0x1f3ecc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ED0u; }
        if (ctx->pc != 0x1F3ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ED0u; }
        if (ctx->pc != 0x1F3ED0u) { return; }
    }
    ctx->pc = 0x1F3ED0u;
label_1f3ed0:
    // 0x1f3ed0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3ed4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f3ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3edc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f3edcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ee0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f3ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ee4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F3EE4u;
    SET_GPR_U32(ctx, 31, 0x1F3EECu);
    ctx->pc = 0x1F3EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3EE4u;
            // 0x1f3ee8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EECu; }
        if (ctx->pc != 0x1F3EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EECu; }
        if (ctx->pc != 0x1F3EECu) { return; }
    }
    ctx->pc = 0x1F3EECu;
label_1f3eec:
    // 0x1f3eec: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1f3eecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ef0: 0x159880  sll         $s3, $s5, 2
    ctx->pc = 0x1f3ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1f3ef4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f3ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f3ef8: 0x8f928ffc  lw          $s2, -0x7004($gp)
    ctx->pc = 0x1f3ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f3efc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f3efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f3f00: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1f3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1f3f04: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f3f04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f3f08: 0xc421b85c  lwc1        $f1, -0x47A4($at)
    ctx->pc = 0x1f3f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3f0c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F14u);
    ctx->pc = 0x1F3F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F0Cu;
            // 0x1f3f10: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F14u; }
        if (ctx->pc != 0x1F3F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F14u; }
        if (ctx->pc != 0x1F3F14u) { return; }
    }
    ctx->pc = 0x1F3F14u;
label_1f3f14:
    // 0x1f3f14: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1f3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1f3f18: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f3f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f3f1c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f3f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f3f20: 0xc42cb878  lwc1        $f12, -0x4788($at)
    ctx->pc = 0x1f3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3f24: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3F24u;
    SET_GPR_U32(ctx, 31, 0x1F3F2Cu);
    ctx->pc = 0x1F3F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F24u;
            // 0x1f3f28: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F2Cu; }
        if (ctx->pc != 0x1F3F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F2Cu; }
        if (ctx->pc != 0x1F3F2Cu) { return; }
    }
    ctx->pc = 0x1F3F2Cu;
label_1f3f2c:
    // 0x1f3f2c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f3f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f3f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f3f34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f38: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1f3f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1f3f3c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3F3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F44u);
    ctx->pc = 0x1F3F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F3Cu;
            // 0x1f3f40: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F44u; }
        if (ctx->pc != 0x1F3F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F44u; }
        if (ctx->pc != 0x1F3F44u) { return; }
    }
    ctx->pc = 0x1F3F44u;
label_1f3f44:
    // 0x1f3f44: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1f3f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1f3f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f4c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1f3f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1f3f50: 0x24c6e760  addiu       $a2, $a2, -0x18A0
    ctx->pc = 0x1f3f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960992));
    // 0x1f3f54: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x1F3F54u;
    SET_GPR_U32(ctx, 31, 0x1F3F5Cu);
    ctx->pc = 0x1F3F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F54u;
            // 0x1f3f58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F5Cu; }
        if (ctx->pc != 0x1F3F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F5Cu; }
        if (ctx->pc != 0x1F3F5Cu) { return; }
    }
    ctx->pc = 0x1F3F5Cu;
label_1f3f5c:
    // 0x1f3f5c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F64u);
    ctx->pc = 0x1F3F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F5Cu;
            // 0x1f3f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F64u; }
        if (ctx->pc != 0x1F3F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F64u; }
        if (ctx->pc != 0x1F3F64u) { return; }
    }
    ctx->pc = 0x1F3F64u;
label_1f3f64:
    // 0x1f3f64: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x1f3f68: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1f3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1f3f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3f70: 0xc6350000  lwc1        $f21, 0x0($s1)
    ctx->pc = 0x1f3f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f3f74: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1f3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1f3f78: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x1f3f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f3f7c: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x1f3f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f3f80: 0x46150300  add.s       $f12, $f0, $f21
    ctx->pc = 0x1f3f80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1f3f84: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3F84u;
    SET_GPR_U32(ctx, 31, 0x1F3F8Cu);
    ctx->pc = 0x1F3F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F84u;
            // 0x1f3f88: 0x2452ffff  addiu       $s2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F8Cu; }
        if (ctx->pc != 0x1F3F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F8Cu; }
        if (ctx->pc != 0x1F3F8Cu) { return; }
    }
    ctx->pc = 0x1F3F8Cu;
label_1f3f8c:
    // 0x1f3f8c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f3f8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3f90: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1f3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x1f3f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3f98: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3F98u;
    SET_GPR_U32(ctx, 31, 0x1F3FA0u);
    ctx->pc = 0x1F3F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3F98u;
            // 0x1f3f9c: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FA0u; }
        if (ctx->pc != 0x1F3FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FA0u; }
        if (ctx->pc != 0x1F3FA0u) { return; }
    }
    ctx->pc = 0x1F3FA0u;
label_1f3fa0:
    // 0x1f3fa0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1f3fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1f3fa4: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
    // 0x1f3fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3fac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3FACu;
    SET_GPR_U32(ctx, 31, 0x1F3FB4u);
    ctx->pc = 0x1F3FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3FACu;
            // 0x1f3fb0: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FB4u; }
        if (ctx->pc != 0x1F3FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FB4u; }
        if (ctx->pc != 0x1F3FB4u) { return; }
    }
    ctx->pc = 0x1F3FB4u;
label_1f3fb4:
    // 0x1f3fb4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1f3fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1f3fb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3fc0: 0x3c02436e  lui         $v0, 0x436E
    ctx->pc = 0x1f3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17262 << 16));
    // 0x1f3fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3fc8: 0x0  nop
    ctx->pc = 0x1f3fc8u;
    // NOP
    // 0x1f3fcc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1f3fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1f3fd0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F3FD0u;
    SET_GPR_U32(ctx, 31, 0x1F3FD8u);
    ctx->pc = 0x1F3FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3FD0u;
            // 0x1f3fd4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FD8u; }
        if (ctx->pc != 0x1F3FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FD8u; }
        if (ctx->pc != 0x1F3FD8u) { return; }
    }
    ctx->pc = 0x1F3FD8u;
label_1f3fd8:
    // 0x1f3fd8: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x1f3fd8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f3fdc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f3fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fe0: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x1f3fe0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f3fe4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f3fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3fe8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3FE8u;
    SET_GPR_U32(ctx, 31, 0x1F3FF0u);
    ctx->pc = 0x1F3FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3FE8u;
            // 0x1f3fec: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FF0u; }
        if (ctx->pc != 0x1F3FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FF0u; }
        if (ctx->pc != 0x1F3FF0u) { return; }
    }
    ctx->pc = 0x1F3FF0u;
label_1f3ff0:
    // 0x1f3ff0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1f3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3ff4: 0x3c02436e  lui         $v0, 0x436E
    ctx->pc = 0x1f3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17262 << 16));
    // 0x1f3ff8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3ffc: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1f3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x1f4000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4004: 0x0  nop
    ctx->pc = 0x1f4004u;
    // NOP
    // 0x1f4008: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1f4008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f400c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F400Cu;
    SET_GPR_U32(ctx, 31, 0x1F4014u);
    ctx->pc = 0x1F4010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F400Cu;
            // 0x1f4010: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4014u; }
        if (ctx->pc != 0x1F4014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4014u; }
        if (ctx->pc != 0x1F4014u) { return; }
    }
    ctx->pc = 0x1F4014u;
label_1f4014:
    // 0x1f4014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4018: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f4018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f401c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f401cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4020: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1f4020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1f4024: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4024u;
    SET_GPR_U32(ctx, 31, 0x1F402Cu);
    ctx->pc = 0x1F4028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4024u;
            // 0x1f4028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F402Cu; }
        if (ctx->pc != 0x1F402Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F402Cu; }
        if (ctx->pc != 0x1F402Cu) { return; }
    }
    ctx->pc = 0x1F402Cu;
label_1f402c:
    // 0x1f402c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4030: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4030u;
    {
        const bool branch_taken_0x1f4030 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4030u;
            // 0x1f4034: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4030) {
            ctx->pc = 0x1F4050u;
            goto label_1f4050;
        }
    }
    ctx->pc = 0x1F4038u;
    // 0x1f4038: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x1f4038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1f403c: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x1f403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1f4040: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1f4040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1f4044: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1f4044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f4048: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x1f4048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x1f404c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1f404cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_1f4050:
    // 0x1f4050: 0xc088038  jal         func_2200E0
    ctx->pc = 0x1F4050u;
    SET_GPR_U32(ctx, 31, 0x1F4058u);
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4058u; }
        if (ctx->pc != 0x1F4058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4058u; }
        if (ctx->pc != 0x1F4058u) { return; }
    }
    ctx->pc = 0x1F4058u;
label_1f4058:
    // 0x1f4058: 0xc088038  jal         func_2200E0
    ctx->pc = 0x1F4058u;
    SET_GPR_U32(ctx, 31, 0x1F4060u);
    ctx->pc = 0x1F405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4058u;
            // 0x1f405c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4060u; }
        if (ctx->pc != 0x1F4060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4060u; }
        if (ctx->pc != 0x1F4060u) { return; }
    }
    ctx->pc = 0x1F4060u;
label_1f4060:
    // 0x1f4060: 0xc088050  jal         func_220140
    ctx->pc = 0x1F4060u;
    SET_GPR_U32(ctx, 31, 0x1F4068u);
    ctx->pc = 0x1F4064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4060u;
            // 0x1f4064: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4068u; }
        if (ctx->pc != 0x1F4068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4068u; }
        if (ctx->pc != 0x1F4068u) { return; }
    }
    ctx->pc = 0x1F4068u;
label_1f4068:
    // 0x1f4068: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1f4068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f406c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f406cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4070: 0x24060229  addiu       $a2, $zero, 0x229
    ctx->pc = 0x1f4070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    // 0x1f4074: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x1f4074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1f4078: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4078u;
    SET_GPR_U32(ctx, 31, 0x1F4080u);
    ctx->pc = 0x1F407Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4078u;
            // 0x1f407c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4080u; }
        if (ctx->pc != 0x1F4080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4080u; }
        if (ctx->pc != 0x1F4080u) { return; }
    }
    ctx->pc = 0x1F4080u;
label_1f4080:
    // 0x1f4080: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1f4080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f4084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4088: 0x24060294  addiu       $a2, $zero, 0x294
    ctx->pc = 0x1f4088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
    // 0x1f408c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1f408cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f4090: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F4090u;
    SET_GPR_U32(ctx, 31, 0x1F4098u);
    ctx->pc = 0x1F4094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4090u;
            // 0x1f4094: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4098u; }
        if (ctx->pc != 0x1F4098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4098u; }
        if (ctx->pc != 0x1F4098u) { return; }
    }
    ctx->pc = 0x1F4098u;
label_1f4098:
    // 0x1f4098: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1f4098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1f409c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f409cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40a0: 0x24060286  addiu       $a2, $zero, 0x286
    ctx->pc = 0x1f40a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 646));
    // 0x1f40a4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1f40a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f40a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F40A8u;
    SET_GPR_U32(ctx, 31, 0x1F40B0u);
    ctx->pc = 0x1F40ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F40A8u;
            // 0x1f40ac: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40B0u; }
        if (ctx->pc != 0x1F40B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40B0u; }
        if (ctx->pc != 0x1F40B0u) { return; }
    }
    ctx->pc = 0x1F40B0u;
label_1f40b0:
    // 0x1f40b0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1f40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f40b4: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1f40b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1f40b8: 0x24060294  addiu       $a2, $zero, 0x294
    ctx->pc = 0x1f40b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
    // 0x1f40bc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1f40bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f40c0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F40C0u;
    SET_GPR_U32(ctx, 31, 0x1F40C8u);
    ctx->pc = 0x1F40C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F40C0u;
            // 0x1f40c4: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40C8u; }
        if (ctx->pc != 0x1F40C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40C8u; }
        if (ctx->pc != 0x1F40C8u) { return; }
    }
    ctx->pc = 0x1F40C8u;
label_1f40c8:
    // 0x1f40c8: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x1f40cc: 0x8f838ffc  lw          $v1, -0x7004($gp)
    ctx->pc = 0x1f40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f40d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f40d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f40d4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f40d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f40d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f40d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f40dc: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x1f40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x1f40e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f40e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f40e4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1f40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1f40e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f40e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f40ec: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x1f40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1f40f0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f40f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f40f4: 0xc435b894  lwc1        $f21, -0x476C($at)
    ctx->pc = 0x1f40f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f40f8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f40f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f40fc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f40fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f4100: 0xc438b898  lwc1        $f24, -0x4768($at)
    ctx->pc = 0x1f4100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f4104: 0x4602ad81  sub.s       $f22, $f21, $f2
    ctx->pc = 0x1f4104u;
    ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x1f4108: 0x46180dc0  add.s       $f23, $f1, $f24
    ctx->pc = 0x1f4108u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x1f410c: 0x16a5005c  bne         $s5, $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1F410Cu;
    {
        const bool branch_taken_0x1f410c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F4110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F410Cu;
            // 0x1f4110: 0x46180500  add.s       $f20, $f0, $f24 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f410c) {
            ctx->pc = 0x1F4280u;
            goto label_1f4280;
        }
    }
    ctx->pc = 0x1F4114u;
    // 0x1f4114: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1F4114u;
    SET_GPR_U32(ctx, 31, 0x1F411Cu);
    ctx->pc = 0x1F4118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4114u;
            // 0x1f4118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F411Cu; }
        if (ctx->pc != 0x1F411Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F411Cu; }
        if (ctx->pc != 0x1F411Cu) { return; }
    }
    ctx->pc = 0x1F411Cu;
label_1f411c:
    // 0x1f411c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4120: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F4120u;
    SET_GPR_U32(ctx, 31, 0x1F4128u);
    ctx->pc = 0x1F4124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4120u;
            // 0x1f4124: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4128u; }
        if (ctx->pc != 0x1F4128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4128u; }
        if (ctx->pc != 0x1F4128u) { return; }
    }
    ctx->pc = 0x1F4128u;
label_1f4128:
    // 0x1f4128: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f4128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f412c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F412Cu;
    SET_GPR_U32(ctx, 31, 0x1F4134u);
    ctx->pc = 0x1F4130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F412Cu;
            // 0x1f4130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4134u; }
        if (ctx->pc != 0x1F4134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4134u; }
        if (ctx->pc != 0x1F4134u) { return; }
    }
    ctx->pc = 0x1F4134u;
label_1f4134:
    // 0x1f4134: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f413c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f413cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4140: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f4140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4144: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4144u;
    SET_GPR_U32(ctx, 31, 0x1F414Cu);
    ctx->pc = 0x1F4148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4144u;
            // 0x1f4148: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F414Cu; }
        if (ctx->pc != 0x1F414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F414Cu; }
        if (ctx->pc != 0x1F414Cu) { return; }
    }
    ctx->pc = 0x1F414Cu;
label_1f414c:
    // 0x1f414c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f414cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4150: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f4150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4154:
    // 0x1f4154: 0x3c024305  lui         $v0, 0x4305
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17157 << 16));
    // 0x1f4158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f415c: 0x0  nop
    ctx->pc = 0x1f415cu;
    // NOP
    // 0x1f4160: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1f4160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4164: 0x0  nop
    ctx->pc = 0x1f4164u;
    // NOP
    // 0x1f4168: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x1F4168u;
    {
        const bool branch_taken_0x1f4168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4168) {
            ctx->pc = 0x1F4258u;
            goto label_1f4258;
        }
    }
    ctx->pc = 0x1F4170u;
    // 0x1f4170: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4178: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f4178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f417c: 0x0  nop
    ctx->pc = 0x1f417cu;
    // NOP
    // 0x1f4180: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F4180u;
    {
        const bool branch_taken_0x1f4180 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4180u;
            // 0x1f4184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4180) {
            ctx->pc = 0x1F4278u;
            goto label_1f4278;
        }
    }
    ctx->pc = 0x1F4188u;
    // 0x1f4188: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1f4188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f418c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f418cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f4190: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F4190u;
    SET_GPR_U32(ctx, 31, 0x1F4198u);
    ctx->pc = 0x1F4194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4190u;
            // 0x1f4194: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4198u; }
        if (ctx->pc != 0x1F4198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4198u; }
        if (ctx->pc != 0x1F4198u) { return; }
    }
    ctx->pc = 0x1F4198u;
label_1f4198:
    // 0x1f4198: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1f4198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1f419c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f419cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f41a0: 0x0  nop
    ctx->pc = 0x1f41a0u;
    // NOP
    // 0x1f41a4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1f41a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f41a8: 0x0  nop
    ctx->pc = 0x1f41a8u;
    // NOP
    // 0x1f41ac: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x1F41ACu;
    {
        const bool branch_taken_0x1f41ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F41B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F41ACu;
            // 0x1f41b0: 0x3c0501ed  lui         $a1, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41ac) {
            ctx->pc = 0x1F4258u;
            goto label_1f4258;
        }
    }
    ctx->pc = 0x1F41B4u;
    // 0x1f41b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f41b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41b8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f41b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f41bc: 0x24a595f0  addiu       $a1, $a1, -0x6A10
    ctx->pc = 0x1f41bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940144));
    // 0x1f41c0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F41C0u;
    SET_GPR_U32(ctx, 31, 0x1F41C8u);
    ctx->pc = 0x1F41C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F41C0u;
            // 0x1f41c4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F41C8u; }
        if (ctx->pc != 0x1F41C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F41C8u; }
        if (ctx->pc != 0x1F41C8u) { return; }
    }
    ctx->pc = 0x1F41C8u;
label_1f41c8:
    // 0x1f41c8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f41cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f41ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f41d0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F41D0u;
    SET_GPR_U32(ctx, 31, 0x1F41D8u);
    ctx->pc = 0x1F41D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F41D0u;
            // 0x1f41d4: 0x4600bb01  sub.s       $f12, $f23, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F41D8u; }
        if (ctx->pc != 0x1F41D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F41D8u; }
        if (ctx->pc != 0x1F41D8u) { return; }
    }
    ctx->pc = 0x1F41D8u;
label_1f41d8:
    // 0x1f41d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f41d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f41dc: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1f41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x1f41e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f41e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f41e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f41e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41e8: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x1f41e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1f41ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f41ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41f0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1f41f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f41f4: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F41F4u;
    SET_GPR_U32(ctx, 31, 0x1F41FCu);
    ctx->pc = 0x1F41F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F41F4u;
            // 0x1f41f8: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F41FCu; }
        if (ctx->pc != 0x1F41FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F41FCu; }
        if (ctx->pc != 0x1F41FCu) { return; }
    }
    ctx->pc = 0x1F41FCu;
label_1f41fc:
    // 0x1f41fc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1f41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1f4200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4204: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4204u;
    SET_GPR_U32(ctx, 31, 0x1F420Cu);
    ctx->pc = 0x1F4208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4204u;
            // 0x1f4208: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F420Cu; }
        if (ctx->pc != 0x1F420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F420Cu; }
        if (ctx->pc != 0x1F420Cu) { return; }
    }
    ctx->pc = 0x1F420Cu;
label_1f420c:
    // 0x1f420c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f420cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4210: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f4210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f4214: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1f4214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f4218: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f4218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f421c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4220: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4224: 0x27a90150  addiu       $t1, $sp, 0x150
    ctx->pc = 0x1f4224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f4228: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x1f4228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f422c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f4230: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f4230u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f4234: 0x8c25bbc0  lw          $a1, -0x4440($at)
    ctx->pc = 0x1f4234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949824)));
    // 0x1f4238: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x1F4238u;
    SET_GPR_U32(ctx, 31, 0x1F4240u);
    ctx->pc = 0x1F423Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4238u;
            // 0x1f423c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4240u; }
        if (ctx->pc != 0x1F4240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4240u; }
        if (ctx->pc != 0x1F4240u) { return; }
    }
    ctx->pc = 0x1F4240u;
label_1f4240:
    // 0x1f4240: 0xc7808784  lwc1        $f0, -0x787C($gp)
    ctx->pc = 0x1f4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4248: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1f4248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f424c: 0x0  nop
    ctx->pc = 0x1f424cu;
    // NOP
    // 0x1f4250: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4250u;
    {
        const bool branch_taken_0x1f4250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4250) {
            ctx->pc = 0x1F4278u;
            goto label_1f4278;
        }
    }
    ctx->pc = 0x1F4258u;
label_1f4258:
    // 0x1f4258: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1f4258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1f425c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f425cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f4260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f4264: 0x26730038  addiu       $s3, $s3, 0x38
    ctx->pc = 0x1f4264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x1f4268: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f4268u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1f426c: 0x2a220063  slti        $v0, $s1, 0x63
    ctx->pc = 0x1f426cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x1f4270: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1F4270u;
    {
        const bool branch_taken_0x1f4270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4270u;
            // 0x1f4274: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4270) {
            ctx->pc = 0x1F4154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4154;
        }
    }
    ctx->pc = 0x1F4278u;
label_1f4278:
    // 0x1f4278: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F4278u;
    SET_GPR_U32(ctx, 31, 0x1F4280u);
    ctx->pc = 0x1F427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4278u;
            // 0x1f427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4280u; }
        if (ctx->pc != 0x1F4280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4280u; }
        if (ctx->pc != 0x1F4280u) { return; }
    }
    ctx->pc = 0x1F4280u;
label_1f4280:
    // 0x1f4280: 0x16a00030  bnez        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F4280u;
    {
        const bool branch_taken_0x1f4280 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4280u;
            // 0x1f4284: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4280) {
            ctx->pc = 0x1F4344u;
            goto label_1f4344;
        }
    }
    ctx->pc = 0x1F4288u;
    // 0x1f4288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f428c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F428Cu;
    SET_GPR_U32(ctx, 31, 0x1F4294u);
    ctx->pc = 0x1F4290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F428Cu;
            // 0x1f4290: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4294u; }
        if (ctx->pc != 0x1F4294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4294u; }
        if (ctx->pc != 0x1F4294u) { return; }
    }
    ctx->pc = 0x1F4294u;
label_1f4294:
    // 0x1f4294: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f4294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f4298: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F4298u;
    SET_GPR_U32(ctx, 31, 0x1F42A0u);
    ctx->pc = 0x1F429Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4298u;
            // 0x1f429c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42A0u; }
        if (ctx->pc != 0x1F42A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42A0u; }
        if (ctx->pc != 0x1F42A0u) { return; }
    }
    ctx->pc = 0x1F42A0u;
label_1f42a0:
    // 0x1f42a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f42a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f42a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f42a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f42a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f42acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42b0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F42B0u;
    SET_GPR_U32(ctx, 31, 0x1F42B8u);
    ctx->pc = 0x1F42B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42B0u;
            // 0x1f42b4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42B8u; }
        if (ctx->pc != 0x1F42B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42B8u; }
        if (ctx->pc != 0x1F42B8u) { return; }
    }
    ctx->pc = 0x1F42B8u;
label_1f42b8:
    // 0x1f42b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f42b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f42bc:
    // 0x1f42bc: 0x3c024305  lui         $v0, 0x4305
    ctx->pc = 0x1f42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17157 << 16));
    // 0x1f42c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f42c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f42c4: 0x0  nop
    ctx->pc = 0x1f42c4u;
    // NOP
    // 0x1f42c8: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1f42c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f42cc: 0x0  nop
    ctx->pc = 0x1f42ccu;
    // NOP
    // 0x1f42d0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1F42D0u;
    {
        const bool branch_taken_0x1f42d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f42d0) {
            ctx->pc = 0x1F4318u;
            goto label_1f4318;
        }
    }
    ctx->pc = 0x1F42D8u;
    // 0x1f42d8: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f42d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f42dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f42dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f42e0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f42e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f42e4: 0x0  nop
    ctx->pc = 0x1f42e4u;
    // NOP
    // 0x1f42e8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1F42E8u;
    {
        const bool branch_taken_0x1f42e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F42ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42E8u;
            // 0x1f42ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42e8) {
            ctx->pc = 0x1F4334u;
            goto label_1f4334;
        }
    }
    ctx->pc = 0x1F42F0u;
    // 0x1f42f0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f42f4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f42f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f42f8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F42F8u;
    SET_GPR_U32(ctx, 31, 0x1F4300u);
    ctx->pc = 0x1F42FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42F8u;
            // 0x1f42fc: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4300u; }
        if (ctx->pc != 0x1F4300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4300u; }
        if (ctx->pc != 0x1F4300u) { return; }
    }
    ctx->pc = 0x1F4300u;
label_1f4300:
    // 0x1f4300: 0xc7808784  lwc1        $f0, -0x787C($gp)
    ctx->pc = 0x1f4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4308: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1f4308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f430c: 0x0  nop
    ctx->pc = 0x1f430cu;
    // NOP
    // 0x1f4310: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4310u;
    {
        const bool branch_taken_0x1f4310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4310) {
            ctx->pc = 0x1F4334u;
            goto label_1f4334;
        }
    }
    ctx->pc = 0x1F4318u;
label_1f4318:
    // 0x1f4318: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x1f4318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x1f431c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f431cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4320: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f4320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f4324: 0x2a220063  slti        $v0, $s1, 0x63
    ctx->pc = 0x1f4324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x1f4328: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f4328u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1f432c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1F432Cu;
    {
        const bool branch_taken_0x1f432c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F432Cu;
            // 0x1f4330: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f432c) {
            ctx->pc = 0x1F42BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f42bc;
        }
    }
    ctx->pc = 0x1F4334u;
label_1f4334:
    // 0x1f4334: 0x0  nop
    ctx->pc = 0x1f4334u;
    // NOP
    // 0x1f4338: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F4338u;
    SET_GPR_U32(ctx, 31, 0x1F4340u);
    ctx->pc = 0x1F433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4338u;
            // 0x1f433c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4340u; }
        if (ctx->pc != 0x1F4340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4340u; }
        if (ctx->pc != 0x1F4340u) { return; }
    }
    ctx->pc = 0x1F4340u;
label_1f4340:
    // 0x1f4340: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f4340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f4344:
    // 0x1f4344: 0x16a20059  bne         $s5, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F4344u;
    {
        const bool branch_taken_0x1f4344 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4344u;
            // 0x1f4348: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4344) {
            ctx->pc = 0x1F44ACu;
            goto label_1f44ac;
        }
    }
    ctx->pc = 0x1F434Cu;
    // 0x1f434c: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1f434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f4350: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f4350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f4354: 0x342163c4  ori         $at, $at, 0x63C4
    ctx->pc = 0x1f4354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25540);
    // 0x1f4358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f435c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4360: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1F4360u;
    SET_GPR_U32(ctx, 31, 0x1F4368u);
    ctx->pc = 0x1F4364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4360u;
            // 0x1f4364: 0x419021  addu        $s2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4368u; }
        if (ctx->pc != 0x1F4368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4368u; }
        if (ctx->pc != 0x1F4368u) { return; }
    }
    ctx->pc = 0x1F4368u;
label_1f4368:
    // 0x1f4368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f436c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F436Cu;
    SET_GPR_U32(ctx, 31, 0x1F4374u);
    ctx->pc = 0x1F4370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F436Cu;
            // 0x1f4370: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4374u; }
        if (ctx->pc != 0x1F4374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4374u; }
        if (ctx->pc != 0x1F4374u) { return; }
    }
    ctx->pc = 0x1F4374u;
label_1f4374:
    // 0x1f4374: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f4374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f4378: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F4378u;
    SET_GPR_U32(ctx, 31, 0x1F4380u);
    ctx->pc = 0x1F437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4378u;
            // 0x1f437c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4380u; }
        if (ctx->pc != 0x1F4380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4380u; }
        if (ctx->pc != 0x1F4380u) { return; }
    }
    ctx->pc = 0x1F4380u;
label_1f4380:
    // 0x1f4380: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4388: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f4388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f438c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f438cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4390: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4390u;
    SET_GPR_U32(ctx, 31, 0x1F4398u);
    ctx->pc = 0x1F4394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4390u;
            // 0x1f4394: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4398u; }
        if (ctx->pc != 0x1F4398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4398u; }
        if (ctx->pc != 0x1F4398u) { return; }
    }
    ctx->pc = 0x1F4398u;
label_1f4398:
    // 0x1f4398: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f4398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f439c:
    // 0x1f439c: 0x3c024305  lui         $v0, 0x4305
    ctx->pc = 0x1f439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17157 << 16));
    // 0x1f43a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f43a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f43a4: 0x0  nop
    ctx->pc = 0x1f43a4u;
    // NOP
    // 0x1f43a8: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1f43a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f43ac: 0x0  nop
    ctx->pc = 0x1f43acu;
    // NOP
    // 0x1f43b0: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x1F43B0u;
    {
        const bool branch_taken_0x1f43b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f43b0) {
            ctx->pc = 0x1F4480u;
            goto label_1f4480;
        }
    }
    ctx->pc = 0x1F43B8u;
    // 0x1f43b8: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f43b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f43bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f43bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f43c0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f43c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f43c4: 0x0  nop
    ctx->pc = 0x1f43c4u;
    // NOP
    // 0x1f43c8: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x1F43C8u;
    {
        const bool branch_taken_0x1f43c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F43CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43C8u;
            // 0x1f43cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43c8) {
            ctx->pc = 0x1F44A0u;
            goto label_1f44a0;
        }
    }
    ctx->pc = 0x1F43D0u;
    // 0x1f43d0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1f43d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f43d4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f43d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f43d8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F43D8u;
    SET_GPR_U32(ctx, 31, 0x1F43E0u);
    ctx->pc = 0x1F43DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43D8u;
            // 0x1f43dc: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43E0u; }
        if (ctx->pc != 0x1F43E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43E0u; }
        if (ctx->pc != 0x1F43E0u) { return; }
    }
    ctx->pc = 0x1F43E0u;
label_1f43e0:
    // 0x1f43e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f43e4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1f43e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f43e8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F43E8u;
    {
        const bool branch_taken_0x1f43e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f43e8) {
            ctx->pc = 0x1F4468u;
            goto label_1f4468;
        }
    }
    ctx->pc = 0x1F43F0u;
    // 0x1f43f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f43f4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1f43f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f43f8: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F43F8u;
    {
        const bool branch_taken_0x1f43f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F43FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43F8u;
            // 0x1f43fc: 0x3c034316  lui         $v1, 0x4316 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43f8) {
            ctx->pc = 0x1F4468u;
            goto label_1f4468;
        }
    }
    ctx->pc = 0x1F4400u;
    // 0x1f4400: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f4400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f4404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f4404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f440c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f440cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4410: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1f4410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f4414: 0x46160300  add.s       $f12, $f0, $f22
    ctx->pc = 0x1f4414u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x1f4418: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F4418u;
    SET_GPR_U32(ctx, 31, 0x1F4420u);
    ctx->pc = 0x1F441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4418u;
            // 0x1f441c: 0x4601bb41  sub.s       $f13, $f23, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4420u; }
        if (ctx->pc != 0x1F4420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4420u; }
        if (ctx->pc != 0x1F4420u) { return; }
    }
    ctx->pc = 0x1F4420u;
label_1f4420:
    // 0x1f4420: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1f4420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1f4424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4428: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4428u;
    SET_GPR_U32(ctx, 31, 0x1F4430u);
    ctx->pc = 0x1F442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4428u;
            // 0x1f442c: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4430u; }
        if (ctx->pc != 0x1F4430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4430u; }
        if (ctx->pc != 0x1F4430u) { return; }
    }
    ctx->pc = 0x1F4430u;
label_1f4430:
    // 0x1f4430: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4434: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f4434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f4438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f443c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F443Cu;
    SET_GPR_U32(ctx, 31, 0x1F4444u);
    ctx->pc = 0x1F4440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F443Cu;
            // 0x1f4440: 0x4600bb01  sub.s       $f12, $f23, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4444u; }
        if (ctx->pc != 0x1F4444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4444u; }
        if (ctx->pc != 0x1F4444u) { return; }
    }
    ctx->pc = 0x1F4444u;
label_1f4444:
    // 0x1f4444: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1f4444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f4448: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f4448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f444c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f444cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4454: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4458: 0x27a90150  addiu       $t1, $sp, 0x150
    ctx->pc = 0x1f4458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f445c: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x1f445cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f4460: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x1F4460u;
    SET_GPR_U32(ctx, 31, 0x1F4468u);
    ctx->pc = 0x1F4464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4460u;
            // 0x1f4464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4468u; }
        if (ctx->pc != 0x1F4468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4468u; }
        if (ctx->pc != 0x1F4468u) { return; }
    }
    ctx->pc = 0x1F4468u;
label_1f4468:
    // 0x1f4468: 0xc7808784  lwc1        $f0, -0x787C($gp)
    ctx->pc = 0x1f4468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f446c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f446cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4470: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1f4470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4474: 0x0  nop
    ctx->pc = 0x1f4474u;
    // NOP
    // 0x1f4478: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4478u;
    {
        const bool branch_taken_0x1f4478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4478) {
            ctx->pc = 0x1F44A0u;
            goto label_1f44a0;
        }
    }
    ctx->pc = 0x1F4480u;
label_1f4480:
    // 0x1f4480: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1f4480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1f4484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4488: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f4488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f448c: 0x26520038  addiu       $s2, $s2, 0x38
    ctx->pc = 0x1f448cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x1f4490: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f4490u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1f4494: 0x2a620063  slti        $v0, $s3, 0x63
    ctx->pc = 0x1f4494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x1f4498: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1F4498u;
    {
        const bool branch_taken_0x1f4498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4498u;
            // 0x1f449c: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4498) {
            ctx->pc = 0x1F439Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f439c;
        }
    }
    ctx->pc = 0x1F44A0u;
label_1f44a0:
    // 0x1f44a0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F44A0u;
    SET_GPR_U32(ctx, 31, 0x1F44A8u);
    ctx->pc = 0x1F44A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F44A0u;
            // 0x1f44a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44A8u; }
        if (ctx->pc != 0x1F44A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F44A8u; }
        if (ctx->pc != 0x1F44A8u) { return; }
    }
    ctx->pc = 0x1F44A8u;
label_1f44a8:
    // 0x1f44a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f44ac:
    // 0x1f44ac: 0x16a200d7  bne         $s5, $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1F44ACu;
    {
        const bool branch_taken_0x1f44ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F44B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F44ACu;
            // 0x1f44b0: 0x3c034080  lui         $v1, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f44ac) {
            ctx->pc = 0x1F480Cu;
            goto label_1f480c;
        }
    }
    ctx->pc = 0x1F44B4u;
    // 0x1f44b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f44b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f44b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f44bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f44bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f44c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f44c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f44c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44c8: 0x46150500  add.s       $f20, $f0, $f21
    ctx->pc = 0x1f44c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1f44cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f44ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44d0: 0x46180d40  add.s       $f21, $f1, $f24
    ctx->pc = 0x1f44d0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
label_1f44d4:
    // 0x1f44d4: 0x3c024305  lui         $v0, 0x4305
    ctx->pc = 0x1f44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17157 << 16));
    // 0x1f44d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f44d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f44dc: 0x0  nop
    ctx->pc = 0x1f44dcu;
    // NOP
    // 0x1f44e0: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1f44e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f44e4: 0x0  nop
    ctx->pc = 0x1f44e4u;
    // NOP
    // 0x1f44e8: 0x450100bf  bc1t        . + 4 + (0xBF << 2)
    ctx->pc = 0x1F44E8u;
    {
        const bool branch_taken_0x1f44e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f44e8) {
            ctx->pc = 0x1F47E8u;
            goto label_1f47e8;
        }
    }
    ctx->pc = 0x1F44F0u;
    // 0x1f44f0: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f44f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f44f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f44f8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1f44f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f44fc: 0x0  nop
    ctx->pc = 0x1f44fcu;
    // NOP
    // 0x1f4500: 0x450100c2  bc1t        . + 4 + (0xC2 << 2)
    ctx->pc = 0x1F4500u;
    {
        const bool branch_taken_0x1f4500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4500u;
            // 0x1f4504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4500) {
            ctx->pc = 0x1F480Cu;
            goto label_1f480c;
        }
    }
    ctx->pc = 0x1F4508u;
    // 0x1f4508: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1F4508u;
    SET_GPR_U32(ctx, 31, 0x1F4510u);
    ctx->pc = 0x1F450Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4508u;
            // 0x1f450c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4510u; }
        if (ctx->pc != 0x1F4510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4510u; }
        if (ctx->pc != 0x1F4510u) { return; }
    }
    ctx->pc = 0x1F4510u;
label_1f4510:
    // 0x1f4510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4514: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1F4514u;
    SET_GPR_U32(ctx, 31, 0x1F451Cu);
    ctx->pc = 0x1F4518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4514u;
            // 0x1f4518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F451Cu; }
        if (ctx->pc != 0x1F451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F451Cu; }
        if (ctx->pc != 0x1F451Cu) { return; }
    }
    ctx->pc = 0x1F451Cu;
label_1f451c:
    // 0x1f451c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4520: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F4520u;
    SET_GPR_U32(ctx, 31, 0x1F4528u);
    ctx->pc = 0x1F4524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4520u;
            // 0x1f4524: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4528u; }
        if (ctx->pc != 0x1F4528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4528u; }
        if (ctx->pc != 0x1F4528u) { return; }
    }
    ctx->pc = 0x1F4528u;
label_1f4528:
    // 0x1f4528: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f4528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f452c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F452Cu;
    SET_GPR_U32(ctx, 31, 0x1F4534u);
    ctx->pc = 0x1F4530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F452Cu;
            // 0x1f4530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4534u; }
        if (ctx->pc != 0x1F4534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4534u; }
        if (ctx->pc != 0x1F4534u) { return; }
    }
    ctx->pc = 0x1F4534u;
label_1f4534:
    // 0x1f4534: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f453c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f453cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4540: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f4540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4544: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4544u;
    SET_GPR_U32(ctx, 31, 0x1F454Cu);
    ctx->pc = 0x1F4548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4544u;
            // 0x1f4548: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F454Cu; }
        if (ctx->pc != 0x1F454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F454Cu; }
        if (ctx->pc != 0x1F454Cu) { return; }
    }
    ctx->pc = 0x1F454Cu;
label_1f454c:
    // 0x1f454c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4550: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1f4550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f4554: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f4554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f4558: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F4558u;
    SET_GPR_U32(ctx, 31, 0x1F4560u);
    ctx->pc = 0x1F455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4558u;
            // 0x1f455c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4560u; }
        if (ctx->pc != 0x1F4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4560u; }
        if (ctx->pc != 0x1F4560u) { return; }
    }
    ctx->pc = 0x1F4560u;
label_1f4560:
    // 0x1f4560: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F4560u;
    SET_GPR_U32(ctx, 31, 0x1F4568u);
    ctx->pc = 0x1F4564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4560u;
            // 0x1f4564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4568u; }
        if (ctx->pc != 0x1F4568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4568u; }
        if (ctx->pc != 0x1F4568u) { return; }
    }
    ctx->pc = 0x1F4568u;
label_1f4568:
    // 0x1f4568: 0x2a610008  slti        $at, $s3, 0x8
    ctx->pc = 0x1f4568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f456c: 0x10200098  beqz        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x1F456Cu;
    {
        const bool branch_taken_0x1f456c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F456Cu;
            // 0x1f4570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f456c) {
            ctx->pc = 0x1F47D0u;
            goto label_1f47d0;
        }
    }
    ctx->pc = 0x1F4574u;
    // 0x1f4574: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F4574u;
    SET_GPR_U32(ctx, 31, 0x1F457Cu);
    ctx->pc = 0x1F4578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4574u;
            // 0x1f4578: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F457Cu; }
        if (ctx->pc != 0x1F457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F457Cu; }
        if (ctx->pc != 0x1F457Cu) { return; }
    }
    ctx->pc = 0x1F457Cu;
label_1f457c:
    // 0x1f457c: 0x8f859020  lw          $a1, -0x6FE0($gp)
    ctx->pc = 0x1f457cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f4580: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1F4580u;
    SET_GPR_U32(ctx, 31, 0x1F4588u);
    ctx->pc = 0x1F4584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4580u;
            // 0x1f4584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4588u; }
        if (ctx->pc != 0x1F4588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4588u; }
        if (ctx->pc != 0x1F4588u) { return; }
    }
    ctx->pc = 0x1F4588u;
label_1f4588:
    // 0x1f4588: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f458c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f458cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4590: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f4590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4594: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f4594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4598: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4598u;
    SET_GPR_U32(ctx, 31, 0x1F45A0u);
    ctx->pc = 0x1F459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4598u;
            // 0x1f459c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45A0u; }
        if (ctx->pc != 0x1F45A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45A0u; }
        if (ctx->pc != 0x1F45A0u) { return; }
    }
    ctx->pc = 0x1F45A0u;
label_1f45a0:
    // 0x1f45a0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1f45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x1f45a4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f45a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f45a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f45ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f45acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f45b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f45b4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1f45b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f45b8: 0x46160300  add.s       $f12, $f0, $f22
    ctx->pc = 0x1f45b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x1f45bc: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1F45BCu;
    SET_GPR_U32(ctx, 31, 0x1F45C4u);
    ctx->pc = 0x1F45C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45BCu;
            // 0x1f45c0: 0x4601bb41  sub.s       $f13, $f23, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45C4u; }
        if (ctx->pc != 0x1F45C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45C4u; }
        if (ctx->pc != 0x1F45C4u) { return; }
    }
    ctx->pc = 0x1F45C4u;
label_1f45c4:
    // 0x1f45c4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1f45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1f45c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f45c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f45cc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F45CCu;
    SET_GPR_U32(ctx, 31, 0x1F45D4u);
    ctx->pc = 0x1F45D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45CCu;
            // 0x1f45d0: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45D4u; }
        if (ctx->pc != 0x1F45D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45D4u; }
        if (ctx->pc != 0x1F45D4u) { return; }
    }
    ctx->pc = 0x1F45D4u;
label_1f45d4:
    // 0x1f45d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f45d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45d8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f45dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f45dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f45e0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F45E0u;
    SET_GPR_U32(ctx, 31, 0x1F45E8u);
    ctx->pc = 0x1F45E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45E0u;
            // 0x1f45e4: 0x4600bb01  sub.s       $f12, $f23, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45E8u; }
        if (ctx->pc != 0x1F45E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F45E8u; }
        if (ctx->pc != 0x1F45E8u) { return; }
    }
    ctx->pc = 0x1F45E8u;
label_1f45e8:
    // 0x1f45e8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f45e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f45ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45f0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f45f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f45f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45f8: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x1f45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x1f45fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f45fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4600: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f4600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f4604: 0x27a90150  addiu       $t1, $sp, 0x150
    ctx->pc = 0x1f4604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f4608: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1f4608u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f460c: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x1f460cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f4610: 0xc0886ac  jal         func_221AB0
    ctx->pc = 0x1F4610u;
    SET_GPR_U32(ctx, 31, 0x1F4618u);
    ctx->pc = 0x1F4614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4610u;
            // 0x1f4614: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221AB0u;
    if (runtime->hasFunction(0x221AB0u)) {
        auto targetFn = runtime->lookupFunction(0x221AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4618u; }
        if (ctx->pc != 0x1F4618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4618u; }
        if (ctx->pc != 0x1F4618u) { return; }
    }
    ctx->pc = 0x1F4618u;
label_1f4618:
    // 0x1f4618: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F4618u;
    SET_GPR_U32(ctx, 31, 0x1F4620u);
    ctx->pc = 0x1F461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4618u;
            // 0x1f461c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4620u; }
        if (ctx->pc != 0x1F4620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4620u; }
        if (ctx->pc != 0x1F4620u) { return; }
    }
    ctx->pc = 0x1F4620u;
label_1f4620:
    // 0x1f4620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4624: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1F4624u;
    SET_GPR_U32(ctx, 31, 0x1F462Cu);
    ctx->pc = 0x1F4628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4624u;
            // 0x1f4628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F462Cu; }
        if (ctx->pc != 0x1F462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F462Cu; }
        if (ctx->pc != 0x1F462Cu) { return; }
    }
    ctx->pc = 0x1F462Cu;
label_1f462c:
    // 0x1f462c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4630: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x1F4630u;
    SET_GPR_U32(ctx, 31, 0x1F4638u);
    ctx->pc = 0x1F4634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4630u;
            // 0x1f4634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4638u; }
        if (ctx->pc != 0x1F4638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4638u; }
        if (ctx->pc != 0x1F4638u) { return; }
    }
    ctx->pc = 0x1F4638u;
label_1f4638:
    // 0x1f4638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f463c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1F463Cu;
    SET_GPR_U32(ctx, 31, 0x1F4644u);
    ctx->pc = 0x1F4640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F463Cu;
            // 0x1f4640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4644u; }
        if (ctx->pc != 0x1F4644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4644u; }
        if (ctx->pc != 0x1F4644u) { return; }
    }
    ctx->pc = 0x1F4644u;
label_1f4644:
    // 0x1f4644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4648: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1F4648u;
    SET_GPR_U32(ctx, 31, 0x1F4650u);
    ctx->pc = 0x1F464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4648u;
            // 0x1f464c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4650u; }
        if (ctx->pc != 0x1F4650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4650u; }
        if (ctx->pc != 0x1F4650u) { return; }
    }
    ctx->pc = 0x1F4650u;
label_1f4650:
    // 0x1f4650: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1f4650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1f4654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4658: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f4658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f465c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f465cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4660: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4660u;
    SET_GPR_U32(ctx, 31, 0x1F4668u);
    ctx->pc = 0x1F4664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4660u;
            // 0x1f4664: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4668u; }
        if (ctx->pc != 0x1F4668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4668u; }
        if (ctx->pc != 0x1F4668u) { return; }
    }
    ctx->pc = 0x1F4668u;
label_1f4668:
    // 0x1f4668: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1f4668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f466c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f466cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4670: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f4670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f4674: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1F4674u;
    SET_GPR_U32(ctx, 31, 0x1F467Cu);
    ctx->pc = 0x1F4678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4674u;
            // 0x1f4678: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F467Cu; }
        if (ctx->pc != 0x1F467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F467Cu; }
        if (ctx->pc != 0x1F467Cu) { return; }
    }
    ctx->pc = 0x1F467Cu;
label_1f467c:
    // 0x1f467c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x1f467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x1f4680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4684: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4684u;
    SET_GPR_U32(ctx, 31, 0x1F468Cu);
    ctx->pc = 0x1F4688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4684u;
            // 0x1f4688: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F468Cu; }
        if (ctx->pc != 0x1F468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F468Cu; }
        if (ctx->pc != 0x1F468Cu) { return; }
    }
    ctx->pc = 0x1F468Cu;
label_1f468c:
    // 0x1f468c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f468cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4690: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x1f4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x1f4694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4698: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4698u;
    SET_GPR_U32(ctx, 31, 0x1F46A0u);
    ctx->pc = 0x1F469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4698u;
            // 0x1f469c: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46A0u; }
        if (ctx->pc != 0x1F46A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46A0u; }
        if (ctx->pc != 0x1F46A0u) { return; }
    }
    ctx->pc = 0x1F46A0u;
label_1f46a0:
    // 0x1f46a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f46a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f46a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f46a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46ac: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1F46ACu;
    SET_GPR_U32(ctx, 31, 0x1F46B4u);
    ctx->pc = 0x1F46B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46ACu;
            // 0x1f46b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46B4u; }
        if (ctx->pc != 0x1F46B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46B4u; }
        if (ctx->pc != 0x1F46B4u) { return; }
    }
    ctx->pc = 0x1F46B4u;
label_1f46b4:
    // 0x1f46b4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1f46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1f46b8: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1f46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1f46bc: 0x2463e3a0  addiu       $v1, $v1, -0x1C60
    ctx->pc = 0x1f46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960032));
    // 0x1f46c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f46c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f46c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f46c8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1f46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f46cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1f46ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f46d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1f46d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f46d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f46d8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1f46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1f46dc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1f46dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f46e0: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1f46e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1f46e4: 0x46011e02  mul.s       $f24, $f3, $f1
    ctx->pc = 0x1f46e4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1f46e8: 0x460c2034  c.lt.s      $f4, $f12
    ctx->pc = 0x1f46e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f46ec: 0x0  nop
    ctx->pc = 0x1f46ecu;
    // NOP
    // 0x1f46f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F46F0u;
    {
        const bool branch_taken_0x1f46f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46F0u;
            // 0x1f46f4: 0x46001e42  mul.s       $f25, $f3, $f0 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46f0) {
            ctx->pc = 0x1F46FCu;
            goto label_1f46fc;
        }
    }
    ctx->pc = 0x1F46F8u;
    // 0x1f46f8: 0x46002306  mov.s       $f12, $f4
    ctx->pc = 0x1f46f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[4]);
label_1f46fc:
    // 0x1f46fc: 0x0  nop
    ctx->pc = 0x1f46fcu;
    // NOP
    // 0x1f4700: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1f4700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1f4704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4708: 0x0  nop
    ctx->pc = 0x1f4708u;
    // NOP
    // 0x1f470c: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x1f470cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4710: 0x0  nop
    ctx->pc = 0x1f4710u;
    // NOP
    // 0x1f4714: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4714u;
    {
        const bool branch_taken_0x1f4714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4714) {
            ctx->pc = 0x1F4720u;
            goto label_1f4720;
        }
    }
    ctx->pc = 0x1F471Cu;
    // 0x1f471c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1f471cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_1f4720:
    // 0x1f4720: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1f4720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1f4724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4728: 0x0  nop
    ctx->pc = 0x1f4728u;
    // NOP
    // 0x1f472c: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x1f472cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4730: 0x0  nop
    ctx->pc = 0x1f4730u;
    // NOP
    // 0x1f4734: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4734u;
    {
        const bool branch_taken_0x1f4734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4734) {
            ctx->pc = 0x1F4740u;
            goto label_1f4740;
        }
    }
    ctx->pc = 0x1F473Cu;
    // 0x1f473c: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x1f473cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_1f4740:
    // 0x1f4740: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4740u;
    SET_GPR_U32(ctx, 31, 0x1F4748u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4748u; }
        if (ctx->pc != 0x1F4748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4748u; }
        if (ctx->pc != 0x1F4748u) { return; }
    }
    ctx->pc = 0x1F4748u;
label_1f4748:
    // 0x1f4748: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1f4748u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1f474c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F474Cu;
    SET_GPR_U32(ctx, 31, 0x1F4754u);
    ctx->pc = 0x1F4750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F474Cu;
            // 0x1f4750: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4754u; }
        if (ctx->pc != 0x1F4754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4754u; }
        if (ctx->pc != 0x1F4754u) { return; }
    }
    ctx->pc = 0x1F4754u;
label_1f4754:
    // 0x1f4754: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1f4754u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1f4758: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1F4758u;
    SET_GPR_U32(ctx, 31, 0x1F4760u);
    ctx->pc = 0x1F475Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4758u;
            // 0x1f475c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4760u; }
        if (ctx->pc != 0x1F4760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4760u; }
        if (ctx->pc != 0x1F4760u) { return; }
    }
    ctx->pc = 0x1F4760u;
label_1f4760:
    // 0x1f4760: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f4760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4764: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1f4764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4768: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f4768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f476c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f476cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4770: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1F4770u;
    SET_GPR_U32(ctx, 31, 0x1F4778u);
    ctx->pc = 0x1F4774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4770u;
            // 0x1f4774: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4778u; }
        if (ctx->pc != 0x1F4778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4778u; }
        if (ctx->pc != 0x1F4778u) { return; }
    }
    ctx->pc = 0x1F4778u;
label_1f4778:
    // 0x1f4778: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f4778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f477c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f477cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f4780: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f4780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f478c: 0x0  nop
    ctx->pc = 0x1f478cu;
    // NOP
    // 0x1f4790: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x1f4790u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1f4794: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1f4794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4798: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1F4798u;
    SET_GPR_U32(ctx, 31, 0x1F47A0u);
    ctx->pc = 0x1F479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4798u;
            // 0x1f479c: 0x46150340  add.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47A0u; }
        if (ctx->pc != 0x1F47A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47A0u; }
        if (ctx->pc != 0x1F47A0u) { return; }
    }
    ctx->pc = 0x1F47A0u;
label_1f47a0:
    // 0x1f47a0: 0x3c0341a8  lui         $v1, 0x41A8
    ctx->pc = 0x1f47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16808 << 16));
    // 0x1f47a4: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x1f47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x1f47a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f47a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f47ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f47acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f47b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f47b4: 0x0  nop
    ctx->pc = 0x1f47b4u;
    // NOP
    // 0x1f47b8: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x1f47b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1f47bc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1f47bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f47c0: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x1F47C0u;
    SET_GPR_U32(ctx, 31, 0x1F47C8u);
    ctx->pc = 0x1F47C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F47C0u;
            // 0x1f47c4: 0x46150340  add.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47C8u; }
        if (ctx->pc != 0x1F47C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47C8u; }
        if (ctx->pc != 0x1F47C8u) { return; }
    }
    ctx->pc = 0x1F47C8u;
label_1f47c8:
    // 0x1f47c8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1F47C8u;
    SET_GPR_U32(ctx, 31, 0x1F47D0u);
    ctx->pc = 0x1F47CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F47C8u;
            // 0x1f47cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47D0u; }
        if (ctx->pc != 0x1F47D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F47D0u; }
        if (ctx->pc != 0x1F47D0u) { return; }
    }
    ctx->pc = 0x1F47D0u;
label_1f47d0:
    // 0x1f47d0: 0xc7808784  lwc1        $f0, -0x787C($gp)
    ctx->pc = 0x1f47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f47d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f47d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f47d8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1f47d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f47dc: 0x0  nop
    ctx->pc = 0x1f47dcu;
    // NOP
    // 0x1f47e0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1F47E0u;
    {
        const bool branch_taken_0x1f47e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f47e0) {
            ctx->pc = 0x1F480Cu;
            goto label_1f480c;
        }
    }
    ctx->pc = 0x1F47E8u;
label_1f47e8:
    // 0x1f47e8: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x1f47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x1f47ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f47ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f47f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f47f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f47f4: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1f47f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f47f8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1f47f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1f47fc: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x1f47fcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1f4800: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x1f4800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1f4804: 0x1440ff33  bnez        $v0, . + 4 + (-0xCD << 2)
    ctx->pc = 0x1F4804u;
    {
        const bool branch_taken_0x1f4804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4804u;
            // 0x1f4808: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4804) {
            ctx->pc = 0x1F44D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f44d4;
        }
    }
    ctx->pc = 0x1F480Cu;
label_1f480c:
    // 0x1f480c: 0x0  nop
    ctx->pc = 0x1f480cu;
    // NOP
    // 0x1f4810: 0x2e0082a  slt         $at, $s7, $zero
    ctx->pc = 0x1f4810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1f4814: 0x14200067  bnez        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x1F4814u;
    {
        const bool branch_taken_0x1f4814 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4814u;
            // 0x1f4818: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4814) {
            ctx->pc = 0x1F49B4u;
            goto label_1f49b4;
        }
    }
    ctx->pc = 0x1F481Cu;
    // 0x1f481c: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x1f481cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1f4820: 0x24429460  addiu       $v0, $v0, -0x6BA0
    ctx->pc = 0x1f4820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939744));
    // 0x1f4824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f4824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f4828: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1f4828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f482c: 0x8e021b94  lw          $v0, 0x1B94($s0)
    ctx->pc = 0x1f482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7060)));
    // 0x1f4830: 0x2841ff4d  slti        $at, $v0, -0xB3
    ctx->pc = 0x1f4830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967117) ? 1 : 0);
    // 0x1f4834: 0x1420005f  bnez        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x1F4834u;
    {
        const bool branch_taken_0x1f4834 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4834u;
            // 0x1f4838: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4834) {
            ctx->pc = 0x1F49B4u;
            goto label_1f49b4;
        }
    }
    ctx->pc = 0x1F483Cu;
    // 0x1f483c: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x1f483cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f4840: 0xc08878c  jal         func_221E30
    ctx->pc = 0x1F4840u;
    SET_GPR_U32(ctx, 31, 0x1F4848u);
    ctx->pc = 0x1F4844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4840u;
            // 0x1f4844: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4848u; }
        if (ctx->pc != 0x1F4848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4848u; }
        if (ctx->pc != 0x1F4848u) { return; }
    }
    ctx->pc = 0x1F4848u;
label_1f4848:
    // 0x1f4848: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f4848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f484c: 0xc0878f0  jal         func_21E3C0
    ctx->pc = 0x1F484Cu;
    SET_GPR_U32(ctx, 31, 0x1F4854u);
    ctx->pc = 0x1F4850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F484Cu;
            // 0x1f4850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E3C0u;
    if (runtime->hasFunction(0x21E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4854u; }
        if (ctx->pc != 0x1F4854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgAlpha__7CDC2MesFi_0x21e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4854u; }
        if (ctx->pc != 0x1F4854u) { return; }
    }
    ctx->pc = 0x1F4854u;
label_1f4854:
    // 0x1f4854: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x1F4854u;
    SET_GPR_U32(ctx, 31, 0x1F485Cu);
    ctx->pc = 0x1F4858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4854u;
            // 0x1f4858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F485Cu; }
        if (ctx->pc != 0x1F485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F485Cu; }
        if (ctx->pc != 0x1F485Cu) { return; }
    }
    ctx->pc = 0x1F485Cu;
label_1f485c:
    // 0x1f485c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f485cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4860: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f4860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4864:
    // 0x1f4864: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1f4864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f4868: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1f4868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1f486c: 0x8c821b98  lw          $v0, 0x1B98($a0)
    ctx->pc = 0x1f486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7064)));
    // 0x1f4870: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1f4870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1f4874: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f4874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f4878: 0xac821b98  sw          $v0, 0x1B98($a0)
    ctx->pc = 0x1f4878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7064), GPR_U32(ctx, 2));
    // 0x1f487c: 0x8c821ba0  lw          $v0, 0x1BA0($a0)
    ctx->pc = 0x1f487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7072)));
    // 0x1f4880: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f4884: 0xac821ba0  sw          $v0, 0x1BA0($a0)
    ctx->pc = 0x1f4884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7072), GPR_U32(ctx, 2));
    // 0x1f4888: 0x8c821ba8  lw          $v0, 0x1BA8($a0)
    ctx->pc = 0x1f4888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7080)));
    // 0x1f488c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f4890: 0xac821ba8  sw          $v0, 0x1BA8($a0)
    ctx->pc = 0x1f4890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7080), GPR_U32(ctx, 2));
    // 0x1f4894: 0x8c821bb0  lw          $v0, 0x1BB0($a0)
    ctx->pc = 0x1f4894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7088)));
    // 0x1f4898: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f4898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f489c: 0xac821bb0  sw          $v0, 0x1BB0($a0)
    ctx->pc = 0x1f489cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7088), GPR_U32(ctx, 2));
    // 0x1f48a0: 0x8c821bb8  lw          $v0, 0x1BB8($a0)
    ctx->pc = 0x1f48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7096)));
    // 0x1f48a4: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f48a8: 0xac821bb8  sw          $v0, 0x1BB8($a0)
    ctx->pc = 0x1f48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7096), GPR_U32(ctx, 2));
    // 0x1f48ac: 0x8c821bc0  lw          $v0, 0x1BC0($a0)
    ctx->pc = 0x1f48acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7104)));
    // 0x1f48b0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f48b4: 0xac821bc0  sw          $v0, 0x1BC0($a0)
    ctx->pc = 0x1f48b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7104), GPR_U32(ctx, 2));
    // 0x1f48b8: 0x8c821bc8  lw          $v0, 0x1BC8($a0)
    ctx->pc = 0x1f48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7112)));
    // 0x1f48bc: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f48c0: 0xac821bc8  sw          $v0, 0x1BC8($a0)
    ctx->pc = 0x1f48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7112), GPR_U32(ctx, 2));
    // 0x1f48c4: 0x8c821bd0  lw          $v0, 0x1BD0($a0)
    ctx->pc = 0x1f48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7120)));
    // 0x1f48c8: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1f48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f48cc: 0x18a0ffe5  blez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F48CCu;
    {
        const bool branch_taken_0x1f48cc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1F48D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F48CCu;
            // 0x1f48d0: 0xac821bd0  sw          $v0, 0x1BD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48cc) {
            ctx->pc = 0x1F4864u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4864;
        }
    }
    ctx->pc = 0x1F48D4u;
    // 0x1f48d4: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1f48d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f48d8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F48D8u;
    {
        const bool branch_taken_0x1f48d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F48DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F48D8u;
            // 0x1f48dc: 0x530c0  sll         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48d8) {
            ctx->pc = 0x1F4900u;
            goto label_1f4900;
        }
    }
    ctx->pc = 0x1F48E0u;
label_1f48e0:
    // 0x1f48e0: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1f48e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f48e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f48e8: 0x8c831b98  lw          $v1, 0x1B98($a0)
    ctx->pc = 0x1f48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7064)));
    // 0x1f48ec: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x1f48ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f48f0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1f48f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1f48f4: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1f48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1f48f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F48F8u;
    {
        const bool branch_taken_0x1f48f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F48FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F48F8u;
            // 0x1f48fc: 0xac831b98  sw          $v1, 0x1B98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48f8) {
            ctx->pc = 0x1F48E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f48e0;
        }
    }
    ctx->pc = 0x1F4900u;
label_1f4900:
    // 0x1f4900: 0xc088050  jal         func_220140
    ctx->pc = 0x1F4900u;
    SET_GPR_U32(ctx, 31, 0x1F4908u);
    ctx->pc = 0x1F4904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4900u;
            // 0x1f4904: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4908u; }
        if (ctx->pc != 0x1F4908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4908u; }
        if (ctx->pc != 0x1F4908u) { return; }
    }
    ctx->pc = 0x1F4908u;
label_1f4908:
    // 0x1f4908: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x1F4908u;
    SET_GPR_U32(ctx, 31, 0x1F4910u);
    ctx->pc = 0x1F490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4908u;
            // 0x1f490c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4910u; }
        if (ctx->pc != 0x1F4910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4910u; }
        if (ctx->pc != 0x1F4910u) { return; }
    }
    ctx->pc = 0x1F4910u;
label_1f4910:
    // 0x1f4910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4914: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f4914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4918:
    // 0x1f4918: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1f4918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f491c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1f491cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1f4920: 0x8c821b98  lw          $v0, 0x1B98($a0)
    ctx->pc = 0x1f4920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7064)));
    // 0x1f4924: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1f4924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1f4928: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1f4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1f492c: 0xac821b98  sw          $v0, 0x1B98($a0)
    ctx->pc = 0x1f492cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7064), GPR_U32(ctx, 2));
    // 0x1f4930: 0x8c821ba0  lw          $v0, 0x1BA0($a0)
    ctx->pc = 0x1f4930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7072)));
    // 0x1f4934: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1f4934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1f4938: 0xac821ba0  sw          $v0, 0x1BA0($a0)
    ctx->pc = 0x1f4938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7072), GPR_U32(ctx, 2));
    // 0x1f493c: 0x8c821ba8  lw          $v0, 0x1BA8($a0)
    ctx->pc = 0x1f493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7080)));
    // 0x1f4940: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1f4940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1f4944: 0xac821ba8  sw          $v0, 0x1BA8($a0)
    ctx->pc = 0x1f4944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7080), GPR_U32(ctx, 2));
    // 0x1f4948: 0x8c821bb0  lw          $v0, 0x1BB0($a0)
    ctx->pc = 0x1f4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7088)));
    // 0x1f494c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1f494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1f4950: 0xac821bb0  sw          $v0, 0x1BB0($a0)
    ctx->pc = 0x1f4950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7088), GPR_U32(ctx, 2));
    // 0x1f4954: 0x8c821bb8  lw          $v0, 0x1BB8($a0)
    ctx->pc = 0x1f4954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7096)));
    // 0x1f4958: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1f4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1f495c: 0xac821bb8  sw          $v0, 0x1BB8($a0)
    ctx->pc = 0x1f495cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7096), GPR_U32(ctx, 2));
    // 0x1f4960: 0x8c821bc0  lw          $v0, 0x1BC0($a0)
    ctx->pc = 0x1f4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7104)));
    // 0x1f4964: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1f4964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1f4968: 0xac821bc0  sw          $v0, 0x1BC0($a0)
    ctx->pc = 0x1f4968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7104), GPR_U32(ctx, 2));
    // 0x1f496c: 0x8c821bc8  lw          $v0, 0x1BC8($a0)
    ctx->pc = 0x1f496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7112)));
    // 0x1f4970: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1f4974: 0xac821bc8  sw          $v0, 0x1BC8($a0)
    ctx->pc = 0x1f4974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7112), GPR_U32(ctx, 2));
    // 0x1f4978: 0x8c821bd0  lw          $v0, 0x1BD0($a0)
    ctx->pc = 0x1f4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7120)));
    // 0x1f497c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1f497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1f4980: 0x18a0ffe5  blez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F4980u;
    {
        const bool branch_taken_0x1f4980 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1F4984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4980u;
            // 0x1f4984: 0xac821bd0  sw          $v0, 0x1BD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4980) {
            ctx->pc = 0x1F4918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4918;
        }
    }
    ctx->pc = 0x1F4988u;
    // 0x1f4988: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1f4988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f498c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F498Cu;
    {
        const bool branch_taken_0x1f498c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F498Cu;
            // 0x1f4990: 0x530c0  sll         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f498c) {
            ctx->pc = 0x1F49B4u;
            goto label_1f49b4;
        }
    }
    ctx->pc = 0x1F4994u;
label_1f4994:
    // 0x1f4994: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x1f4994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1f4998: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f4998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f499c: 0x8c831b98  lw          $v1, 0x1B98($a0)
    ctx->pc = 0x1f499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7064)));
    // 0x1f49a0: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x1f49a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f49a4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1f49a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1f49a8: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1f49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1f49ac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F49ACu;
    {
        const bool branch_taken_0x1f49ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F49B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F49ACu;
            // 0x1f49b0: 0xac831b98  sw          $v1, 0x1B98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f49ac) {
            ctx->pc = 0x1F4994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4994;
        }
    }
    ctx->pc = 0x1F49B4u;
label_1f49b4:
    // 0x1f49b4: 0x0  nop
    ctx->pc = 0x1f49b4u;
    // NOP
    // 0x1f49b8: 0xc088070  jal         func_2201C0
    ctx->pc = 0x1F49B8u;
    SET_GPR_U32(ctx, 31, 0x1F49C0u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49C0u; }
        if (ctx->pc != 0x1F49C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49C0u; }
        if (ctx->pc != 0x1F49C0u) { return; }
    }
    ctx->pc = 0x1F49C0u;
label_1f49c0:
    // 0x1f49c0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f49c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f49c4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1f49c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f49c8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1f49c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f49cc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1f49ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f49d0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1f49d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f49d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1f49d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f49d8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1f49d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f49dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1f49dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f49e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1f49e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f49e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1f49e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f49e8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f49e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f49ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f49ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f49f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f49f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f49f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f49f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f49f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f49f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f49fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f49fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4a00: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A00u;
            // 0x1f4a04: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4A08u;
}
