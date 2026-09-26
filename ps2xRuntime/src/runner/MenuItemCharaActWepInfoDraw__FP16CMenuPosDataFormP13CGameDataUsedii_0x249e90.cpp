#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemCharaActWepInfoDraw__FP16CMenuPosDataFormP13CGameDataUsedii
// Address: 0x249e90 - 0x24a2ec
void MenuItemCharaActWepInfoDraw__FP16CMenuPosDataFormP13CGameDataUsedii_0x249e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemCharaActWepInfoDraw__FP16CMenuPosDataFormP13CGameDataUsedii_0x249e90");
#endif

    switch (ctx->pc) {
        case 0x249edcu: goto label_249edc;
        case 0x249eecu: goto label_249eec;
        case 0x249f04u: goto label_249f04;
        case 0x249f4cu: goto label_249f4c;
        case 0x24a0a0u: goto label_24a0a0;
        case 0x24a0b0u: goto label_24a0b0;
        case 0x24a0c4u: goto label_24a0c4;
        case 0x24a0ecu: goto label_24a0ec;
        case 0x24a0fcu: goto label_24a0fc;
        case 0x24a110u: goto label_24a110;
        case 0x24a11cu: goto label_24a11c;
        case 0x24a134u: goto label_24a134;
        case 0x24a15cu: goto label_24a15c;
        case 0x24a168u: goto label_24a168;
        case 0x24a17cu: goto label_24a17c;
        case 0x24a18cu: goto label_24a18c;
        case 0x24a1e0u: goto label_24a1e0;
        case 0x24a1ecu: goto label_24a1ec;
        case 0x24a208u: goto label_24a208;
        case 0x24a220u: goto label_24a220;
        case 0x24a23cu: goto label_24a23c;
        case 0x24a250u: goto label_24a250;
        case 0x24a264u: goto label_24a264;
        case 0x24a278u: goto label_24a278;
        case 0x24a28cu: goto label_24a28c;
        case 0x24a29cu: goto label_24a29c;
        case 0x24a2b8u: goto label_24a2b8;
        default: break;
    }

    ctx->pc = 0x249e90u;

    // 0x249e90: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x249e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x249e94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x249e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249e98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x249e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x249e9c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x249e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x249ea0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x249ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x249ea4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x249ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x249ea8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x249ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x249eac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x249eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x249eb0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x249eb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249eb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x249eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x249eb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x249eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x249ebc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x249ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x249ec0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x249ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x249ec4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x249ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x249ec8: 0xc78c9750  lwc1        $f12, -0x68B0($gp)
    ctx->pc = 0x249ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249ecc: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x249eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x249ed0: 0xafa500fc  sw          $a1, 0xFC($sp)
    ctx->pc = 0x249ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 5));
    // 0x249ed4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x249ED4u;
    SET_GPR_U32(ctx, 31, 0x249EDCu);
    ctx->pc = 0x249ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249ED4u;
            // 0x249ed8: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249EDCu; }
        if (ctx->pc != 0x249EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249EDCu; }
        if (ctx->pc != 0x249EDCu) { return; }
    }
    ctx->pc = 0x249EDCu;
label_249edc:
    // 0x249edc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x249edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x249ee0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x249ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249ee4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x249EE4u;
    SET_GPR_U32(ctx, 31, 0x249EECu);
    ctx->pc = 0x249EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249EE4u;
            // 0x249ee8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249EECu; }
        if (ctx->pc != 0x249EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249EECu; }
        if (ctx->pc != 0x249EECu) { return; }
    }
    ctx->pc = 0x249EECu;
label_249eec:
    // 0x249eec: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x249eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x249ef0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x249ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x249ef4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x249ef4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ef8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x249ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x249efc: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x249efcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x249f00: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x249f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_249f04:
    // 0x249f04: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x249f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x249f08: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x249f08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x249f0c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x249f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x249f10: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x249f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249f14: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x249f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x249f18: 0x2a180  sll         $s4, $v0, 6
    ctx->pc = 0x249f18u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x249f1c: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x249f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x249f20: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x249f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x249f24: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x249f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x249f28: 0x8c5701cc  lw          $s7, 0x1CC($v0)
    ctx->pc = 0x249f28u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x249f2c: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x249F2Cu;
    {
        const bool branch_taken_0x249f2c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249F2Cu;
            // 0x249f30: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f2c) {
            ctx->pc = 0x249F38u;
            goto label_249f38;
        }
    }
    ctx->pc = 0x249F34u;
    // 0x249f34: 0xa2e00005  sb          $zero, 0x5($s7)
    ctx->pc = 0x249f34u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 5), (uint8_t)GPR_U32(ctx, 0));
label_249f38:
    // 0x249f38: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x249f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x249f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f40: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x249f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x249f44: 0xc066030  jal         func_1980C0
    ctx->pc = 0x249F44u;
    SET_GPR_U32(ctx, 31, 0x249F4Cu);
    ctx->pc = 0x249F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249F44u;
            // 0x249f48: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980C0u;
    if (runtime->hasFunction(0x1980C0u)) {
        auto targetFn = runtime->lookupFunction(0x1980C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249F4Cu; }
        if (ctx->pc != 0x249F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHp__13CGameDataUsedFPi_0x1980c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249F4Cu; }
        if (ctx->pc != 0x249F4Cu) { return; }
    }
    ctx->pc = 0x249F4Cu;
label_249f4c:
    // 0x249f4c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x249f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x249f50: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x249f50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x249f54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x249f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x249f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249f5c: 0x0  nop
    ctx->pc = 0x249f5cu;
    // NOP
    // 0x249f60: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x249f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249f64: 0x0  nop
    ctx->pc = 0x249f64u;
    // NOP
    // 0x249f68: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x249F68u;
    {
        const bool branch_taken_0x249f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x249f68) {
            ctx->pc = 0x249FB0u;
            goto label_249fb0;
        }
    }
    ctx->pc = 0x249F70u;
    // 0x249f70: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x249f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x249f74: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x249F74u;
    {
        const bool branch_taken_0x249f74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x249f74) {
            ctx->pc = 0x249FB0u;
            goto label_249fb0;
        }
    }
    ctx->pc = 0x249F7Cu;
    // 0x249f7c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x249f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x249f80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249f84: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x249f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x249f88: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x249f88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249f8c: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x249f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249f90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x249F90u;
    {
        const bool branch_taken_0x249f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249F90u;
            // 0x249f94: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f90) {
            ctx->pc = 0x249FACu;
            goto label_249fac;
        }
    }
    ctx->pc = 0x249F98u;
    // 0x249f98: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x249F98u;
    {
        const bool branch_taken_0x249f98 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249F98u;
            // 0x249f9c: 0x24530080  addiu       $s3, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f98) {
            ctx->pc = 0x249FB0u;
            goto label_249fb0;
        }
    }
    ctx->pc = 0x249FA0u;
    // 0x249fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249fa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x249FA4u;
    {
        const bool branch_taken_0x249fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249FA4u;
            // 0x249fa8: 0xa2e20005  sb          $v0, 0x5($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fa4) {
            ctx->pc = 0x249FB0u;
            goto label_249fb0;
        }
    }
    ctx->pc = 0x249FACu;
label_249fac:
    // 0x249fac: 0x0  nop
    ctx->pc = 0x249facu;
    // NOP
label_249fb0:
    // 0x249fb0: 0x8f8895c0  lw          $t0, -0x6A40($gp)
    ctx->pc = 0x249fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x249fb4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x249fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x249fb8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x249fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x249fbc: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x249fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x249fc0: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x249fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x249fc4: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x249fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x249fc8: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x249fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x249fcc: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x249fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x249fd0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x249fd4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x249fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x249fd8: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x249fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x249fdc: 0x8d0801b8  lw          $t0, 0x1B8($t0)
    ctx->pc = 0x249fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 440)));
    // 0x249fe0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x249fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x249fe4: 0x26220005  addiu       $v0, $s1, 0x5
    ctx->pc = 0x249fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x249fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x249fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x249ff0: 0xa1130007  sb          $s3, 0x7($t0)
    ctx->pc = 0x249ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x249ff4: 0xa1120008  sb          $s2, 0x8($t0)
    ctx->pc = 0x249ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x249ff8: 0xa1120009  sb          $s2, 0x9($t0)
    ctx->pc = 0x249ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 18));
    // 0x249ffc: 0x8f8895c0  lw          $t0, -0x6A40($gp)
    ctx->pc = 0x249ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a000: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x24a000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x24a004: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x24a004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x24a008: 0x8ce701b8  lw          $a3, 0x1B8($a3)
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x24a00c: 0xa0f30007  sb          $s3, 0x7($a3)
    ctx->pc = 0x24a00cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a010: 0xa0f20008  sb          $s2, 0x8($a3)
    ctx->pc = 0x24a010u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a014: 0xa0f20009  sb          $s2, 0x9($a3)
    ctx->pc = 0x24a014u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a018: 0x8f8795c0  lw          $a3, -0x6A40($gp)
    ctx->pc = 0x24a018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a01c: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x24a01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x24a020: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x24a020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x24a024: 0x8cc601b8  lw          $a2, 0x1B8($a2)
    ctx->pc = 0x24a024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 440)));
    // 0x24a028: 0xa0d30007  sb          $s3, 0x7($a2)
    ctx->pc = 0x24a028u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a02c: 0xa0d20008  sb          $s2, 0x8($a2)
    ctx->pc = 0x24a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a030: 0xa0d20009  sb          $s2, 0x9($a2)
    ctx->pc = 0x24a030u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a034: 0x8f8695c0  lw          $a2, -0x6A40($gp)
    ctx->pc = 0x24a034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a038: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x24a038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x24a03c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x24a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x24a040: 0x8c8401b8  lw          $a0, 0x1B8($a0)
    ctx->pc = 0x24a040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x24a044: 0xa0930007  sb          $s3, 0x7($a0)
    ctx->pc = 0x24a044u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a048: 0xa0920008  sb          $s2, 0x8($a0)
    ctx->pc = 0x24a048u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a04c: 0xa0920009  sb          $s2, 0x9($a0)
    ctx->pc = 0x24a04cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a050: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a054: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x24a054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x24a058: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x24a058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24a05c: 0x8c6301b8  lw          $v1, 0x1B8($v1)
    ctx->pc = 0x24a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
    // 0x24a060: 0xa0730007  sb          $s3, 0x7($v1)
    ctx->pc = 0x24a060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a064: 0xa0720008  sb          $s2, 0x8($v1)
    ctx->pc = 0x24a064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a068: 0xa0720009  sb          $s2, 0x9($v1)
    ctx->pc = 0x24a068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a06c: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a070: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x24a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x24a074: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24a078: 0x8c4201b8  lw          $v0, 0x1B8($v0)
    ctx->pc = 0x24a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x24a07c: 0xa0530007  sb          $s3, 0x7($v0)
    ctx->pc = 0x24a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 19));
    // 0x24a080: 0xa0520008  sb          $s2, 0x8($v0)
    ctx->pc = 0x24a080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a084: 0xa0520009  sb          $s2, 0x9($v0)
    ctx->pc = 0x24a084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 18));
    // 0x24a088: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24a08c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x24a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x24a090: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x24a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x24a094: 0x8c5201c8  lw          $s2, 0x1C8($v0)
    ctx->pc = 0x24a094u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
    // 0x24a098: 0xc092798  jal         func_249E60
    ctx->pc = 0x24A098u;
    SET_GPR_U32(ctx, 31, 0x24A0A0u);
    ctx->pc = 0x24A09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A098u;
            // 0x24a09c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249E60u;
    if (runtime->hasFunction(0x249E60u)) {
        auto targetFn = runtime->lookupFunction(0x249E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0A0u; }
        if (ctx->pc != 0x24A0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_item_infoview_set__FP18MENUFORMPARTS_TYPEP13CGameDataUsed_0x249e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0A0u; }
        if (ctx->pc != 0x24A0A0u) { return; }
    }
    ctx->pc = 0x24A0A0u;
label_24a0a0:
    // 0x24a0a0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x24a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24a0a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a0a8: 0xc0659c4  jal         func_196710
    ctx->pc = 0x24A0A8u;
    SET_GPR_U32(ctx, 31, 0x24A0B0u);
    ctx->pc = 0x24A0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A0A8u;
            // 0x24a0ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0B0u; }
        if (ctx->pc != 0x24A0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0B0u; }
        if (ctx->pc != 0x24A0B0u) { return; }
    }
    ctx->pc = 0x24A0B0u;
label_24a0b0:
    // 0x24a0b0: 0xa2400045  sb          $zero, 0x45($s2)
    ctx->pc = 0x24a0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a0b4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x24a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24a0b8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24a0bc: 0xc08ae1c  jal         func_22B870
    ctx->pc = 0x24A0BCu;
    SET_GPR_U32(ctx, 31, 0x24A0C4u);
    ctx->pc = 0x24A0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A0BCu;
            // 0x24a0c0: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B870u;
    if (runtime->hasFunction(0x22B870u)) {
        auto targetFn = runtime->lookupFunction(0x22B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0C4u; }
        if (ctx->pc != 0x24A0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseVariable__FP13CGameDataUsedP14CItemUseTarget_0x22b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0C4u; }
        if (ctx->pc != 0x24A0C4u) { return; }
    }
    ctx->pc = 0x24A0C4u;
label_24a0c4:
    // 0x24a0c4: 0xa2420045  sb          $v0, 0x45($s2)
    ctx->pc = 0x24a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a0c8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24a0cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x24a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24a0d0: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x24a0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x24a0d4: 0x24631240  addiu       $v1, $v1, 0x1240
    ctx->pc = 0x24a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x24a0d8: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x24a0dc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x24a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24a0e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24a0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24a0e4: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A0E4u;
    SET_GPR_U32(ctx, 31, 0x24A0ECu);
    ctx->pc = 0x24A0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A0E4u;
            // 0x24a0e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0ECu; }
        if (ctx->pc != 0x24A0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0ECu; }
        if (ctx->pc != 0x24A0ECu) { return; }
    }
    ctx->pc = 0x24A0ECu;
label_24a0ec:
    // 0x24a0ec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x24a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24a0f0: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x24a0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x24a0f4: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A0F4u;
    SET_GPR_U32(ctx, 31, 0x24A0FCu);
    ctx->pc = 0x24A0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A0F4u;
            // 0x24a0f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0FCu; }
        if (ctx->pc != 0x24A0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A0FCu; }
        if (ctx->pc != 0x24A0FCu) { return; }
    }
    ctx->pc = 0x24A0FCu;
label_24a0fc:
    // 0x24a0fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a100: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24a104: 0x24a5b940  addiu       $a1, $a1, -0x46C0
    ctx->pc = 0x24a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949184));
    // 0x24a108: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x24A108u;
    SET_GPR_U32(ctx, 31, 0x24A110u);
    ctx->pc = 0x24A10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A108u;
            // 0x24a10c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A110u; }
        if (ctx->pc != 0x24A110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A110u; }
        if (ctx->pc != 0x24A110u) { return; }
    }
    ctx->pc = 0x24A110u;
label_24a110:
    // 0x24a110: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a114: 0xc089664  jal         func_225990
    ctx->pc = 0x24A114u;
    SET_GPR_U32(ctx, 31, 0x24A11Cu);
    ctx->pc = 0x24A118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A114u;
            // 0x24a118: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A11Cu; }
        if (ctx->pc != 0x24A11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A11Cu; }
        if (ctx->pc != 0x24A11Cu) { return; }
    }
    ctx->pc = 0x24A11Cu;
label_24a11c:
    // 0x24a11c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24a11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a120: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A120u;
    {
        const bool branch_taken_0x24a120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A120u;
            // 0x24a124: 0x3c0242be  lui         $v0, 0x42BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a120) {
            ctx->pc = 0x24A144u;
            goto label_24a144;
        }
    }
    ctx->pc = 0x24A128u;
    // 0x24a128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a12c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A12Cu;
    SET_GPR_U32(ctx, 31, 0x24A134u);
    ctx->pc = 0x24A130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A12Cu;
            // 0x24a130: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A134u; }
        if (ctx->pc != 0x24A134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A134u; }
        if (ctx->pc != 0x24A134u) { return; }
    }
    ctx->pc = 0x24A134u;
label_24a134:
    // 0x24a134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a138: 0x0  nop
    ctx->pc = 0x24a138u;
    // NOP
    // 0x24a13c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24a13cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24a140: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x24a140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_24a144:
    // 0x24a144: 0x0  nop
    ctx->pc = 0x24a144u;
    // NOP
    // 0x24a148: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a14c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24a150: 0x24a5b948  addiu       $a1, $a1, -0x46B8
    ctx->pc = 0x24a150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949192));
    // 0x24a154: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x24A154u;
    SET_GPR_U32(ctx, 31, 0x24A15Cu);
    ctx->pc = 0x24A158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A154u;
            // 0x24a158: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A15Cu; }
        if (ctx->pc != 0x24A15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A15Cu; }
        if (ctx->pc != 0x24A15Cu) { return; }
    }
    ctx->pc = 0x24A15Cu;
label_24a15c:
    // 0x24a15c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a160: 0xc089664  jal         func_225990
    ctx->pc = 0x24A160u;
    SET_GPR_U32(ctx, 31, 0x24A168u);
    ctx->pc = 0x24A164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A160u;
            // 0x24a164: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A168u; }
        if (ctx->pc != 0x24A168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A168u; }
        if (ctx->pc != 0x24A168u) { return; }
    }
    ctx->pc = 0x24A168u;
label_24a168:
    // 0x24a168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24a168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a16c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A16Cu;
    {
        const bool branch_taken_0x24a16c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A16Cu;
            // 0x24a170: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a16c) {
            ctx->pc = 0x24A19Cu;
            goto label_24a19c;
        }
    }
    ctx->pc = 0x24A174u;
    // 0x24a174: 0xc065b6c  jal         func_196DB0
    ctx->pc = 0x24A174u;
    SET_GPR_U32(ctx, 31, 0x24A17Cu);
    ctx->pc = 0x196DB0u;
    if (runtime->hasFunction(0x196DB0u)) {
        auto targetFn = runtime->lookupFunction(0x196DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A17Cu; }
        if (ctx->pc != 0x24A17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonGageRate__FP11COMMON_GAGE_0x196db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A17Cu; }
        if (ctx->pc != 0x24A17Cu) { return; }
    }
    ctx->pc = 0x24A17Cu;
label_24a17c:
    // 0x24a17c: 0x3c0242be  lui         $v0, 0x42BE
    ctx->pc = 0x24a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17086 << 16));
    // 0x24a180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24a180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a184: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24A184u;
    SET_GPR_U32(ctx, 31, 0x24A18Cu);
    ctx->pc = 0x24A188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A184u;
            // 0x24a188: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A18Cu; }
        if (ctx->pc != 0x24A18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A18Cu; }
        if (ctx->pc != 0x24A18Cu) { return; }
    }
    ctx->pc = 0x24A18Cu;
label_24a18c:
    // 0x24a18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a190: 0x0  nop
    ctx->pc = 0x24a190u;
    // NOP
    // 0x24a194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24a194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24a198: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x24a198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_24a19c:
    // 0x24a19c: 0x0  nop
    ctx->pc = 0x24a19cu;
    // NOP
    // 0x24a1a0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x24a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24a1a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x24a1a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x24a1a8: 0x27de0018  addiu       $fp, $fp, 0x18
    ctx->pc = 0x24a1a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x24a1ac: 0x2463006c  addiu       $v1, $v1, 0x6C
    ctx->pc = 0x24a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x24a1b0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x24a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x24a1b4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x24a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24a1b8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x24a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x24a1bc: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x24a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x24a1c0: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x24a1c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24a1c4: 0x1460ff4f  bnez        $v1, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x24A1C4u;
    {
        const bool branch_taken_0x24a1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1C4u;
            // 0x24a1c8: 0x26310006  addiu       $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1c4) {
            ctx->pc = 0x249F04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249f04;
        }
    }
    ctx->pc = 0x24A1CCu;
    // 0x24a1cc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x24a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x24a1d0: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x24A1D0u;
    {
        const bool branch_taken_0x24a1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a1d0) {
            ctx->pc = 0x24A2B8u;
            goto label_24a2b8;
        }
    }
    ctx->pc = 0x24A1D8u;
    // 0x24a1d8: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x24A1D8u;
    SET_GPR_U32(ctx, 31, 0x24A1E0u);
    ctx->pc = 0x24A1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1D8u;
            // 0x24a1dc: 0x8fa400fc  lw          $a0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A1E0u; }
        if (ctx->pc != 0x24A1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A1E0u; }
        if (ctx->pc != 0x24A1E0u) { return; }
    }
    ctx->pc = 0x24A1E0u;
label_24a1e0:
    // 0x24a1e0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x24a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x24a1e4: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x24A1E4u;
    SET_GPR_U32(ctx, 31, 0x24A1ECu);
    ctx->pc = 0x24A1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1E4u;
            // 0x24a1e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A1ECu; }
        if (ctx->pc != 0x24A1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A1ECu; }
        if (ctx->pc != 0x24A1ECu) { return; }
    }
    ctx->pc = 0x24A1ECu;
label_24a1ec:
    // 0x24a1ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24a1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a1f0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A1F0u;
    {
        const bool branch_taken_0x24a1f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1F0u;
            // 0x24a1f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1f0) {
            ctx->pc = 0x24A224u;
            goto label_24a224;
        }
    }
    ctx->pc = 0x24A1F8u;
    // 0x24a1f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a1fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a200: 0xc089664  jal         func_225990
    ctx->pc = 0x24A200u;
    SET_GPR_U32(ctx, 31, 0x24A208u);
    ctx->pc = 0x24A204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A200u;
            // 0x24a204: 0x24a5b068  addiu       $a1, $a1, -0x4F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A208u; }
        if (ctx->pc != 0x24A208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A208u; }
        if (ctx->pc != 0x24A208u) { return; }
    }
    ctx->pc = 0x24A208u;
label_24a208:
    // 0x24a208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A208u;
    {
        const bool branch_taken_0x24a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A208u;
            // 0x24a20c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a208) {
            ctx->pc = 0x24A218u;
            goto label_24a218;
        }
    }
    ctx->pc = 0x24A210u;
    // 0x24a210: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x24a210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24a214: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x24a214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_24a218:
    // 0x24a218: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x24A218u;
    SET_GPR_U32(ctx, 31, 0x24A220u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A220u; }
        if (ctx->pc != 0x24A220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A220u; }
        if (ctx->pc != 0x24A220u) { return; }
    }
    ctx->pc = 0x24A220u;
label_24a220:
    // 0x24a220: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24a220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a224:
    // 0x24a224: 0x10882b  sltu        $s1, $zero, $s0
    ctx->pc = 0x24a224u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x24a228: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a22c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a230: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24a230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a234: 0xc08968c  jal         func_225A30
    ctx->pc = 0x24A234u;
    SET_GPR_U32(ctx, 31, 0x24A23Cu);
    ctx->pc = 0x24A238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A234u;
            // 0x24a238: 0x24a5b950  addiu       $a1, $a1, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A23Cu; }
        if (ctx->pc != 0x24A23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A23Cu; }
        if (ctx->pc != 0x24A23Cu) { return; }
    }
    ctx->pc = 0x24A23Cu;
label_24a23c:
    // 0x24a23c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a240: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a244: 0x24a5b068  addiu       $a1, $a1, -0x4F98
    ctx->pc = 0x24a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946920));
    // 0x24a248: 0xc08968c  jal         func_225A30
    ctx->pc = 0x24A248u;
    SET_GPR_U32(ctx, 31, 0x24A250u);
    ctx->pc = 0x24A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A248u;
            // 0x24a24c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A250u; }
        if (ctx->pc != 0x24A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A250u; }
        if (ctx->pc != 0x24A250u) { return; }
    }
    ctx->pc = 0x24A250u;
label_24a250:
    // 0x24a250: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a258: 0x24a5b958  addiu       $a1, $a1, -0x46A8
    ctx->pc = 0x24a258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949208));
    // 0x24a25c: 0xc08968c  jal         func_225A30
    ctx->pc = 0x24A25Cu;
    SET_GPR_U32(ctx, 31, 0x24A264u);
    ctx->pc = 0x24A260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A25Cu;
            // 0x24a260: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A264u; }
        if (ctx->pc != 0x24A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A264u; }
        if (ctx->pc != 0x24A264u) { return; }
    }
    ctx->pc = 0x24A264u;
label_24a264:
    // 0x24a264: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a268: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24a268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a26c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a270: 0xc08968c  jal         func_225A30
    ctx->pc = 0x24A270u;
    SET_GPR_U32(ctx, 31, 0x24A278u);
    ctx->pc = 0x24A274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A270u;
            // 0x24a274: 0x24a5b960  addiu       $a1, $a1, -0x46A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A278u; }
        if (ctx->pc != 0x24A278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A278u; }
        if (ctx->pc != 0x24A278u) { return; }
    }
    ctx->pc = 0x24A278u;
label_24a278:
    // 0x24a278: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24a278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24a27c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24a27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a284: 0xc089728  jal         func_225CA0
    ctx->pc = 0x24A284u;
    SET_GPR_U32(ctx, 31, 0x24A28Cu);
    ctx->pc = 0x24A288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A284u;
            // 0x24a288: 0x24a5b968  addiu       $a1, $a1, -0x4698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A28Cu; }
        if (ctx->pc != 0x24A28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A28Cu; }
        if (ctx->pc != 0x24A28Cu) { return; }
    }
    ctx->pc = 0x24A28Cu;
label_24a28c:
    // 0x24a28c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x24A28Cu;
    {
        const bool branch_taken_0x24a28c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a28c) {
            ctx->pc = 0x24A2B8u;
            goto label_24a2b8;
        }
    }
    ctx->pc = 0x24A294u;
    // 0x24a294: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x24A294u;
    SET_GPR_U32(ctx, 31, 0x24A29Cu);
    ctx->pc = 0x24A298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A294u;
            // 0x24a298: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A29Cu; }
        if (ctx->pc != 0x24A29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A29Cu; }
        if (ctx->pc != 0x24A29Cu) { return; }
    }
    ctx->pc = 0x24A29Cu;
label_24a29c:
    // 0x24a29c: 0x2403012e  addiu       $v1, $zero, 0x12E
    ctx->pc = 0x24a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x24a2a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A2A0u;
    {
        const bool branch_taken_0x24a2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24A2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A2A0u;
            // 0x24a2a4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2a0) {
            ctx->pc = 0x24A2B8u;
            goto label_24a2b8;
        }
    }
    ctx->pc = 0x24A2A8u;
    // 0x24a2a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2ac: 0x24a5b960  addiu       $a1, $a1, -0x46A0
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949216));
    // 0x24a2b0: 0xc08968c  jal         func_225A30
    ctx->pc = 0x24A2B0u;
    SET_GPR_U32(ctx, 31, 0x24A2B8u);
    ctx->pc = 0x24A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A2B0u;
            // 0x24a2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A2B8u; }
        if (ctx->pc != 0x24A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A2B8u; }
        if (ctx->pc != 0x24A2B8u) { return; }
    }
    ctx->pc = 0x24A2B8u;
label_24a2b8:
    // 0x24a2b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24a2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24a2bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24a2c0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x24a2c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24a2c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x24a2c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24a2c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x24a2c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24a2cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24a2ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a2d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24a2d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a2d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24a2d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a2d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24a2d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a2dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24a2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a2e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24a2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A2E4u;
            // 0x24a2e8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A2ECu;
}
