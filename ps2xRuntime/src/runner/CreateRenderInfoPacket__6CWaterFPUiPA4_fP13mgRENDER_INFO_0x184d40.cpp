#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateRenderInfoPacket__6CWaterFPUiPA4_fP13mgRENDER_INFO
// Address: 0x184d40 - 0x185198
void CreateRenderInfoPacket__6CWaterFPUiPA4_fP13mgRENDER_INFO_0x184d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateRenderInfoPacket__6CWaterFPUiPA4_fP13mgRENDER_INFO_0x184d40");
#endif

    switch (ctx->pc) {
        case 0x184d90u: goto label_184d90;
        case 0x184d98u: goto label_184d98;
        case 0x184da8u: goto label_184da8;
        case 0x184e20u: goto label_184e20;
        case 0x184e2cu: goto label_184e2c;
        case 0x185120u: goto label_185120;
        case 0x185170u: goto label_185170;
        default: break;
    }

    ctx->pc = 0x184d40u;

    // 0x184d40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x184d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x184d44: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x184d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x184d48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x184d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x184d4c: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x184d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x184d50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x184d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x184d54: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x184d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x184d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x184d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x184d60: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x184d60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184d68: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x184d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x184d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d78: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x184d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184d7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x184d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x184d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x184d84: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x184d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x184d88: 0xc04c094  jal         func_130250
    ctx->pc = 0x184D88u;
    SET_GPR_U32(ctx, 31, 0x184D90u);
    ctx->pc = 0x184D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D88u;
            // 0x184d8c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D90u; }
        if (ctx->pc != 0x184D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D90u; }
        if (ctx->pc != 0x184D90u) { return; }
    }
    ctx->pc = 0x184D90u;
label_184d90:
    // 0x184d90: 0xc04f8ec  jal         func_13E3B0
    ctx->pc = 0x184D90u;
    SET_GPR_U32(ctx, 31, 0x184D98u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D98u; }
        if (ctx->pc != 0x184D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D98u; }
        if (ctx->pc != 0x184D98u) { return; }
    }
    ctx->pc = 0x184D98u;
label_184d98:
    // 0x184d98: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x184d98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x184d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184da0: 0xc04e494  jal         func_139250
    ctx->pc = 0x184DA0u;
    SET_GPR_U32(ctx, 31, 0x184DA8u);
    ctx->pc = 0x184DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184DA0u;
            // 0x184da4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DA8u; }
        if (ctx->pc != 0x184DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DA8u; }
        if (ctx->pc != 0x184DA8u) { return; }
    }
    ctx->pc = 0x184DA8u;
label_184da8:
    // 0x184da8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x184da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x184dac: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x184dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x184db0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x184db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x184db4: 0x3445003c  ori         $a1, $v0, 0x3C
    ctx->pc = 0x184db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    // 0x184db8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x184db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x184dbc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x184dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x184dc0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x184dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x184dc4: 0x344200b4  ori         $v0, $v0, 0xB4
    ctx->pc = 0x184dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)180);
    // 0x184dc8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x184dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x184dcc: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x184dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184dd0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x184dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x184dd4: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x184dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x184dd8: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x184dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x184ddc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x184ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x184de0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x184de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x184de4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x184de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184de8: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x184de8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x184dec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x184decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184df0: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x184df0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    // 0x184df4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x184df4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184df8: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x184df8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
    // 0x184dfc: 0x8e820fbc  lw          $v0, 0xFBC($s4)
    ctx->pc = 0x184dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4028)));
    // 0x184e00: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x184e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x184e04: 0xc6800fb0  lwc1        $f0, 0xFB0($s4)
    ctx->pc = 0x184e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184e08: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x184e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x184e0c: 0xc6800fb4  lwc1        $f0, 0xFB4($s4)
    ctx->pc = 0x184e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184e10: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x184e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x184e14: 0xc6800fb8  lwc1        $f0, 0xFB8($s4)
    ctx->pc = 0x184e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184e18: 0xc041c60  jal         func_107180
    ctx->pc = 0x184E18u;
    SET_GPR_U32(ctx, 31, 0x184E20u);
    ctx->pc = 0x184E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184E18u;
            // 0x184e1c: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E20u; }
        if (ctx->pc != 0x184E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E20u; }
        if (ctx->pc != 0x184E20u) { return; }
    }
    ctx->pc = 0x184E20u;
label_184e20:
    // 0x184e20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x184e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e24: 0xc041c60  jal         func_107180
    ctx->pc = 0x184E24u;
    SET_GPR_U32(ctx, 31, 0x184E2Cu);
    ctx->pc = 0x184E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184E24u;
            // 0x184e28: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E2Cu; }
        if (ctx->pc != 0x184E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E2Cu; }
        if (ctx->pc != 0x184E2Cu) { return; }
    }
    ctx->pc = 0x184E2Cu;
label_184e2c:
    // 0x184e2c: 0xae800fc4  sw          $zero, 0xFC4($s4)
    ctx->pc = 0x184e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4036), GPR_U32(ctx, 0));
    // 0x184e30: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x184e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x184e34: 0x7a870ea0  lq          $a3, 0xEA0($s4)
    ctx->pc = 0x184e34u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 3744)));
    // 0x184e38: 0x3444f000  ori         $a0, $v0, 0xF000
    ctx->pc = 0x184e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x184e3c: 0x265301a0  addiu       $s3, $s2, 0x1A0
    ctx->pc = 0x184e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x184e40: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x184e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x184e44: 0x27a800c4  addiu       $t0, $sp, 0xC4
    ctx->pc = 0x184e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x184e48: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x184e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x184e4c: 0x26630040  addiu       $v1, $s3, 0x40
    ctx->pc = 0x184e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x184e50: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x184e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x184e54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x184e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184e58: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x184e58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x184e5c: 0x7e470170  sq          $a3, 0x170($s2)
    ctx->pc = 0x184e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 368), GPR_VEC(ctx, 7));
    // 0x184e60: 0x7a870eb0  lq          $a3, 0xEB0($s4)
    ctx->pc = 0x184e60u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 3760)));
    // 0x184e64: 0x7e470180  sq          $a3, 0x180($s2)
    ctx->pc = 0x184e64u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 7));
    // 0x184e68: 0xae460180  sw          $a2, 0x180($s2)
    ctx->pc = 0x184e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 6));
    // 0x184e6c: 0xae440170  sw          $a0, 0x170($s2)
    ctx->pc = 0x184e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 4));
    // 0x184e70: 0xae460184  sw          $a2, 0x184($s2)
    ctx->pc = 0x184e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 6));
    // 0x184e74: 0xae440174  sw          $a0, 0x174($s2)
    ctx->pc = 0x184e74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 4));
    // 0x184e78: 0x7a840ff0  lq          $a0, 0xFF0($s4)
    ctx->pc = 0x184e78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 4080)));
    // 0x184e7c: 0x7e440190  sq          $a0, 0x190($s2)
    ctx->pc = 0x184e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 400), GPR_VEC(ctx, 4));
    // 0x184e80: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x184e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184e84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184e88: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x184e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x184e8c: 0x8f848784  lw          $a0, -0x787C($gp)
    ctx->pc = 0x184e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x184e90: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x184e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x184e94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x184e94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184e98: 0x0  nop
    ctx->pc = 0x184e98u;
    // NOP
    // 0x184e9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184ea0: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x184ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x184ea4: 0xc7808798  lwc1        $f0, -0x7868($gp)
    ctx->pc = 0x184ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184ea8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184eac: 0xe64001b0  swc1        $f0, 0x1B0($s2)
    ctx->pc = 0x184eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 432), bits); }
    // 0x184eb0: 0xc780879c  lwc1        $f0, -0x7864($gp)
    ctx->pc = 0x184eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184eb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184eb8: 0xe64001b4  swc1        $f0, 0x1B4($s2)
    ctx->pc = 0x184eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 436), bits); }
    // 0x184ebc: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x184ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184ec4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x184ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x184ec8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x184ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184ecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184ed0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x184ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x184ed4: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x184ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184ed8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184edc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x184edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x184ee0: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x184ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184ee4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184ee8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x184ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x184eec: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x184eecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184ef0: 0x7e4401c0  sq          $a0, 0x1C0($s2)
    ctx->pc = 0x184ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 448), GPR_VEC(ctx, 4));
    // 0x184ef4: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x184ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184ef8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x184ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x184efc: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x184efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184f00: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x184f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x184f04: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x184f04u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184f08: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184F08u;
    {
        const bool branch_taken_0x184f08 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x184F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F08u;
            // 0x184f0c: 0x7e4401d0  sq          $a0, 0x1D0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 464), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f08) {
            ctx->pc = 0x184F18u;
            goto label_184f18;
        }
    }
    ctx->pc = 0x184F10u;
    // 0x184f10: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x184f14: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x184f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_184f18:
    // 0x184f18: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x184f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x184f1c: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x184f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x184f20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x184f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x184f24: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x184f28: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x184f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x184f2c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x184f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x184f30: 0x26630050  addiu       $v1, $s3, 0x50
    ctx->pc = 0x184f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x184f34: 0xae45001c  sw          $a1, 0x1C($s2)
    ctx->pc = 0x184f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
    // 0x184f38: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x184f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x184f3c: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x184f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x184f40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x184f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184f44: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x184f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
    // 0x184f48: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x184f48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x184f4c: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x184f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x184f50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184F50u;
    {
        const bool branch_taken_0x184f50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x184F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F50u;
            // 0x184f54: 0xae64004c  sw          $a0, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f50) {
            ctx->pc = 0x184F60u;
            goto label_184f60;
        }
    }
    ctx->pc = 0x184F58u;
    // 0x184f58: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x184f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x184f5c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x184f5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_184f60:
    // 0x184f60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184F60u;
    {
        const bool branch_taken_0x184f60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F60u;
            // 0x184f64: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f60) {
            ctx->pc = 0x184F70u;
            goto label_184f70;
        }
    }
    ctx->pc = 0x184F68u;
    // 0x184f68: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x184f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x184f6c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_184f70:
    // 0x184f70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x184f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x184f74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184f78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x184f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x184f7c: 0x8e830fc4  lw          $v1, 0xFC4($s4)
    ctx->pc = 0x184f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4036)));
    // 0x184f80: 0x8e820fc0  lw          $v0, 0xFC0($s4)
    ctx->pc = 0x184f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4032)));
    // 0x184f84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184f88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x184F88u;
    {
        const bool branch_taken_0x184f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F88u;
            // 0x184f8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f88) {
            ctx->pc = 0x184F94u;
            goto label_184f94;
        }
    }
    ctx->pc = 0x184F90u;
    // 0x184f90: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x184f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_184f94:
    // 0x184f94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x184F94u;
    {
        const bool branch_taken_0x184f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184f94) {
            ctx->pc = 0x184FA0u;
            goto label_184fa0;
        }
    }
    ctx->pc = 0x184F9Cu;
    // 0x184f9c: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x184f9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
label_184fa0:
    // 0x184fa0: 0x8e830fcc  lw          $v1, 0xFCC($s4)
    ctx->pc = 0x184fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4044)));
    // 0x184fa4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x184fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x184fa8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x184FA8u;
    {
        const bool branch_taken_0x184fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184fa8) {
            ctx->pc = 0x184FB4u;
            goto label_184fb4;
        }
    }
    ctx->pc = 0x184FB0u;
    // 0x184fb0: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x184fb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_184fb4:
    // 0x184fb4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x184fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x184fb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x184FB8u;
    {
        const bool branch_taken_0x184fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184fb8) {
            ctx->pc = 0x184FC4u;
            goto label_184fc4;
        }
    }
    ctx->pc = 0x184FC0u;
    // 0x184fc0: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x184fc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
label_184fc4:
    // 0x184fc4: 0x8e820fc8  lw          $v0, 0xFC8($s4)
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4040)));
    // 0x184fc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x184FC8u;
    {
        const bool branch_taken_0x184fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184fc8) {
            ctx->pc = 0x184FD4u;
            goto label_184fd4;
        }
    }
    ctx->pc = 0x184FD0u;
    // 0x184fd0: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x184fd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
label_184fd4:
    // 0x184fd4: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x184fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x184fd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x184FD8u;
    {
        const bool branch_taken_0x184fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184FD8u;
            // 0x184fdc: 0x3c026c01  lui         $v0, 0x6C01 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fd8) {
            ctx->pc = 0x184FE4u;
            goto label_184fe4;
        }
    }
    ctx->pc = 0x184FE0u;
    // 0x184fe0: 0x34e70020  ori         $a3, $a3, 0x20
    ctx->pc = 0x184fe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
label_184fe4:
    // 0x184fe4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x184fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x184fe8: 0x34430026  ori         $v1, $v0, 0x26
    ctx->pc = 0x184fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
    // 0x184fec: 0x34048003  ori         $a0, $zero, 0x8003
    ctx->pc = 0x184fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x184ff0: 0x34c2000a  ori         $v0, $a2, 0xA
    ctx->pc = 0x184ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x184ff4: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x184ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x184ff8: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x184ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
    // 0x184ffc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x184ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x185000: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x185000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
    // 0x185004: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x185004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x185008: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x185008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x18500c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x18500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x185010: 0xae670060  sw          $a3, 0x60($s3)
    ctx->pc = 0x185010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 7));
    // 0x185014: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x185014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x185018: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x185018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
    // 0x18501c: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x18501cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x185020: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x185020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x185024: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x185024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x185028: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x185028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x18502c: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x18502cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x185030: 0xae65007c  sw          $a1, 0x7C($s3)
    ctx->pc = 0x185030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 5));
    // 0x185034: 0xae640080  sw          $a0, 0x80($s3)
    ctx->pc = 0x185034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 4));
    // 0x185038: 0xae660084  sw          $a2, 0x84($s3)
    ctx->pc = 0x185038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 6));
    // 0x18503c: 0xae630088  sw          $v1, 0x88($s3)
    ctx->pc = 0x18503cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 3));
    // 0x185040: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x185040u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x185044: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x185044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x185048: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x185048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x18504c: 0xae620098  sw          $v0, 0x98($s3)
    ctx->pc = 0x18504cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
    // 0x185050: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x185050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x185054: 0x8e820fcc  lw          $v0, 0xFCC($s4)
    ctx->pc = 0x185054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4044)));
    // 0x185058: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x185058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18505c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18505cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x185060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185060u;
    {
        const bool branch_taken_0x185060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185060u;
            // 0x185064: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185060) {
            ctx->pc = 0x185074u;
            goto label_185074;
        }
    }
    ctx->pc = 0x185068u;
    // 0x185068: 0x8e820fa4  lw          $v0, 0xFA4($s4)
    ctx->pc = 0x185068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4004)));
    // 0x18506c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18506cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x185070: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x185070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_185074:
    // 0x185074: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x185074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x185078: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x185078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x18507c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18507cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x185080: 0x34630158  ori         $v1, $v1, 0x158
    ctx->pc = 0x185080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)344);
    // 0x185084: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x185084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x185088: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x185088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18508c: 0xae6300a0  sw          $v1, 0xA0($s3)
    ctx->pc = 0x18508cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 3));
    // 0x185090: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x185090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x185094: 0xae6200a8  sw          $v0, 0xA8($s3)
    ctx->pc = 0x185094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 2));
    // 0x185098: 0xae6000ac  sw          $zero, 0xAC($s3)
    ctx->pc = 0x185098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
    // 0x18509c: 0x92840fd9  lbu         $a0, 0xFD9($s4)
    ctx->pc = 0x18509cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4057)));
    // 0x1850a0: 0x92830fda  lbu         $v1, 0xFDA($s4)
    ctx->pc = 0x1850a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4058)));
    // 0x1850a4: 0x92850fd8  lbu         $a1, 0xFD8($s4)
    ctx->pc = 0x1850a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4056)));
    // 0x1850a8: 0x8e820fcc  lw          $v0, 0xFCC($s4)
    ctx->pc = 0x1850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4044)));
    // 0x1850ac: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1850acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1850b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1850b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1850b4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1850b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1850b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1850b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1850bc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1850bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1850c0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1850c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1850c4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1850C4u;
    {
        const bool branch_taken_0x1850c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1850C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850C4u;
            // 0x1850c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850c4) {
            ctx->pc = 0x1850E4u;
            goto label_1850e4;
        }
    }
    ctx->pc = 0x1850CCu;
    // 0x1850cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1850CCu;
    {
        const bool branch_taken_0x1850cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1850D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850CCu;
            // 0x1850d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850cc) {
            ctx->pc = 0x1850D8u;
            goto label_1850d8;
        }
    }
    ctx->pc = 0x1850D4u;
    // 0x1850d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1850d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1850d8:
    // 0x1850d8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1850D8u;
    {
        const bool branch_taken_0x1850d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1850DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850D8u;
            // 0x1850dc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850d8) {
            ctx->pc = 0x1850E4u;
            goto label_1850e4;
        }
    }
    ctx->pc = 0x1850E0u;
    // 0x1850e0: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1850e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1850e4:
    // 0x1850e4: 0xae6400b0  sw          $a0, 0xB0($s3)
    ctx->pc = 0x1850e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 4));
    // 0x1850e8: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1850e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1850ec: 0xae6000b4  sw          $zero, 0xB4($s3)
    ctx->pc = 0x1850ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 0));
    // 0x1850f0: 0xae6200b8  sw          $v0, 0xB8($s3)
    ctx->pc = 0x1850f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 2));
    // 0x1850f4: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x1850f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
    // 0x1850f8: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1850f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1850fc: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1850FCu;
    {
        const bool branch_taken_0x1850fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x185100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1850FCu;
            // 0x185100: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850fc) {
            ctx->pc = 0x18510Cu;
            goto label_18510c;
        }
    }
    ctx->pc = 0x185104u;
    // 0x185104: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185104u;
    {
        const bool branch_taken_0x185104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185104u;
            // 0x185108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185104) {
            ctx->pc = 0x185114u;
            goto label_185114;
        }
    }
    ctx->pc = 0x18510Cu;
label_18510c:
    // 0x18510c: 0x26870f20  addiu       $a3, $s4, 0xF20
    ctx->pc = 0x18510cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3872));
    // 0x185110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185114:
    // 0x185114: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x185114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185118: 0xc04fa14  jal         func_13E850
    ctx->pc = 0x185118u;
    SET_GPR_U32(ctx, 31, 0x185120u);
    ctx->pc = 0x18511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185118u;
            // 0x18511c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E850u;
    if (runtime->hasFunction(0x13E850u)) {
        auto targetFn = runtime->lookupFunction(0x13E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185120u; }
        if (ctx->pc != 0x185120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDrawEnvGifTag__9mgCVisualFP1P13mgRENDER_INFOP10mgCDrawEnv_0x13e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185120u; }
        if (ctx->pc != 0x185120u) { return; }
    }
    ctx->pc = 0x185120u;
label_185120:
    // 0x185120: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x185120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x185124: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x185128: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x185128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x18512c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18512cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x185130: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x185130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x185134: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x185134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x185138: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x185138u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18513c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x18513cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x185140: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x185140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x185144: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x185144u;
    {
        const bool branch_taken_0x185144 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x185148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185144u;
            // 0x185148: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185144) {
            ctx->pc = 0x185154u;
            goto label_185154;
        }
    }
    ctx->pc = 0x18514Cu;
    // 0x18514c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x18514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x185150: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x185150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_185154:
    // 0x185154: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185154u;
    {
        const bool branch_taken_0x185154 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x185158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185154u;
            // 0x185158: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185154) {
            ctx->pc = 0x185164u;
            goto label_185164;
        }
    }
    ctx->pc = 0x18515Cu;
    // 0x18515c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x185160: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x185160u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_185164:
    // 0x185164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185168: 0xc04f8f4  jal         func_13E3D0
    ctx->pc = 0x185168u;
    SET_GPR_U32(ctx, 31, 0x185170u);
    ctx->pc = 0x18516Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185168u;
            // 0x18516c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185170u; }
        if (ctx->pc != 0x185170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185170u; }
        if (ctx->pc != 0x185170u) { return; }
    }
    ctx->pc = 0x185170u;
label_185170:
    // 0x185170: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x185170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185174: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x185174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185178: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185178u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18517c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18517cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185180: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185184: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18518c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18518cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185190: 0x3e00008  jr          $ra
    ctx->pc = 0x185190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185190u;
            // 0x185194: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185198u;
}
