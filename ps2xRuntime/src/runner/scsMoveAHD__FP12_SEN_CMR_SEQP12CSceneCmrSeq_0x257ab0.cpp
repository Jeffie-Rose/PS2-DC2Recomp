#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMoveAHD__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257ab0 - 0x257e10
void scsMoveAHD__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMoveAHD__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257ab0");
#endif

    switch (ctx->pc) {
        case 0x257b1cu: goto label_257b1c;
        case 0x257b48u: goto label_257b48;
        case 0x257db0u: goto label_257db0;
        case 0x257ddcu: goto label_257ddc;
        default: break;
    }

    ctx->pc = 0x257ab0u;

    // 0x257ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257abc: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x257abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x257ac0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x257ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ac4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x257ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x257ac8: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x257ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x257acc: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x257ACCu;
    {
        const bool branch_taken_0x257acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257acc) {
            ctx->pc = 0x257B68u;
            goto label_257b68;
        }
    }
    ctx->pc = 0x257AD4u;
    // 0x257ad4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x257ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x257ad8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257AD8u;
    {
        const bool branch_taken_0x257ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257ad8) {
            ctx->pc = 0x257AFCu;
            goto label_257afc;
        }
    }
    ctx->pc = 0x257AE0u;
    // 0x257ae0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x257ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257ae4: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x257ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x257ae8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x257ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257aec: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x257aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x257af0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x257af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257af4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x257AF4u;
    {
        const bool branch_taken_0x257af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257AF4u;
            // 0x257af8: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257af4) {
            ctx->pc = 0x257B5Cu;
            goto label_257b5c;
        }
    }
    ctx->pc = 0x257AFCu;
label_257afc:
    // 0x257afc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x257afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257b00: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x257b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x257b04: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x257b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257b08: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x257b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x257b0c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x257b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257b10: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x257b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x257b14: 0xc047a42  jal         func_11E908
    ctx->pc = 0x257B14u;
    SET_GPR_U32(ctx, 31, 0x257B1Cu);
    ctx->pc = 0x257B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257B14u;
            // 0x257b18: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257B1Cu; }
        if (ctx->pc != 0x257B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257B1Cu; }
        if (ctx->pc != 0x257B1Cu) { return; }
    }
    ctx->pc = 0x257B1Cu;
label_257b1c:
    // 0x257b1c: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x257b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257b20: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x257b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257b24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257b28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257b2c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x257b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x257b30: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x257b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257b34: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x257b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257b38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257b3c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x257b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x257b40: 0xc047964  jal         func_11E590
    ctx->pc = 0x257B40u;
    SET_GPR_U32(ctx, 31, 0x257B48u);
    ctx->pc = 0x257B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257B40u;
            // 0x257b44: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257B48u; }
        if (ctx->pc != 0x257B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257B48u; }
        if (ctx->pc != 0x257B48u) { return; }
    }
    ctx->pc = 0x257B48u;
label_257b48:
    // 0x257b48: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x257b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257b4c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x257b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257b50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257b54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257b58: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x257b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_257b5c:
    // 0x257b5c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x257b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x257b60: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x257B60u;
    {
        const bool branch_taken_0x257b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257B60u;
            // 0x257b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b60) {
            ctx->pc = 0x257E00u;
            goto label_257e00;
        }
    }
    ctx->pc = 0x257B68u;
label_257b68:
    // 0x257b68: 0x1c60003d  bgtz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x257B68u;
    {
        const bool branch_taken_0x257b68 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x257b68) {
            ctx->pc = 0x257C60u;
            goto label_257c60;
        }
    }
    ctx->pc = 0x257B70u;
    // 0x257b70: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x257b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x257b74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257B74u;
    {
        const bool branch_taken_0x257b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b74) {
            ctx->pc = 0x257B8Cu;
            goto label_257b8c;
        }
    }
    ctx->pc = 0x257B7Cu;
    // 0x257b7c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x257b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257b80: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x257b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257B84u;
    {
        const bool branch_taken_0x257b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257B84u;
            // 0x257b88: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b84) {
            ctx->pc = 0x257B98u;
            goto label_257b98;
        }
    }
    ctx->pc = 0x257B8Cu;
label_257b8c:
    // 0x257b8c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x257b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257b90: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x257b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257b94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x257b94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_257b98:
    // 0x257b98: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x257b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x257b9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257ba4: 0x0  nop
    ctx->pc = 0x257ba4u;
    // NOP
    // 0x257ba8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257bac: 0x0  nop
    ctx->pc = 0x257bacu;
    // NOP
    // 0x257bb0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x257BB0u;
    {
        const bool branch_taken_0x257bb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257BB0u;
            // 0x257bb4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bb0) {
            ctx->pc = 0x257BCCu;
            goto label_257bcc;
        }
    }
    ctx->pc = 0x257BB8u;
    // 0x257bb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x257bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x257bbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257bc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x257BC4u;
    {
        const bool branch_taken_0x257bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257BC4u;
            // 0x257bc8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bc4) {
            ctx->pc = 0x257BF8u;
            goto label_257bf8;
        }
    }
    ctx->pc = 0x257BCCu;
label_257bcc:
    // 0x257bcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257bd4: 0x0  nop
    ctx->pc = 0x257bd4u;
    // NOP
    // 0x257bd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257bdc: 0x0  nop
    ctx->pc = 0x257bdcu;
    // NOP
    // 0x257be0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x257BE0u;
    {
        const bool branch_taken_0x257be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257BE0u;
            // 0x257be4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257be0) {
            ctx->pc = 0x257BF8u;
            goto label_257bf8;
        }
    }
    ctx->pc = 0x257BE8u;
    // 0x257be8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257bf0: 0x0  nop
    ctx->pc = 0x257bf0u;
    // NOP
    // 0x257bf4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x257bf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_257bf8:
    // 0x257bf8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x257bf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257bfc: 0x0  nop
    ctx->pc = 0x257bfcu;
    // NOP
    // 0x257c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257c04: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x257c04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x257c08: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x257c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x257c0c: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x257c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c10: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x257c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257c14: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x257c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257c18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257c1c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x257c1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x257c20: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x257c20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x257c24: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x257c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x257c28: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x257c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c2c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x257c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257c30: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x257c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257c38: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x257c38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x257c3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x257c3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x257c40: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x257c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x257c44: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x257c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c48: 0xe6000170  swc1        $f0, 0x170($s0)
    ctx->pc = 0x257c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x257c4c: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x257c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c50: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x257c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x257c54: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x257c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c58: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x257C58u;
    {
        const bool branch_taken_0x257c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257C58u;
            // 0x257c5c: 0xe6000178  swc1        $f0, 0x178($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c58) {
            ctx->pc = 0x257DF0u;
            goto label_257df0;
        }
    }
    ctx->pc = 0x257C60u;
label_257c60:
    // 0x257c60: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x257c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x257c64: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x257C64u;
    {
        const bool branch_taken_0x257c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257c64) {
            ctx->pc = 0x257D0Cu;
            goto label_257d0c;
        }
    }
    ctx->pc = 0x257C6Cu;
    // 0x257c6c: 0xc60200f0  lwc1        $f2, 0xF0($s0)
    ctx->pc = 0x257c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257c70: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x257c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x257c74: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x257c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257c78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257c80: 0x0  nop
    ctx->pc = 0x257c80u;
    // NOP
    // 0x257c84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x257c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x257c88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257c8c: 0x0  nop
    ctx->pc = 0x257c8cu;
    // NOP
    // 0x257c90: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x257C90u;
    {
        const bool branch_taken_0x257c90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257C90u;
            // 0x257c94: 0xe60100a0  swc1        $f1, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c90) {
            ctx->pc = 0x257CB4u;
            goto label_257cb4;
        }
    }
    ctx->pc = 0x257C98u;
    // 0x257c98: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x257c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x257c9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257ca4: 0x0  nop
    ctx->pc = 0x257ca4u;
    // NOP
    // 0x257ca8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x257cac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x257CACu;
    {
        const bool branch_taken_0x257cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257CACu;
            // 0x257cb0: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cac) {
            ctx->pc = 0x257CE8u;
            goto label_257ce8;
        }
    }
    ctx->pc = 0x257CB4u;
label_257cb4:
    // 0x257cb4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x257cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x257cb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257cc0: 0x0  nop
    ctx->pc = 0x257cc0u;
    // NOP
    // 0x257cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257cc8: 0x0  nop
    ctx->pc = 0x257cc8u;
    // NOP
    // 0x257ccc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x257CCCu;
    {
        const bool branch_taken_0x257ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257CCCu;
            // 0x257cd0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ccc) {
            ctx->pc = 0x257CE8u;
            goto label_257ce8;
        }
    }
    ctx->pc = 0x257CD4u;
    // 0x257cd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257cdc: 0x0  nop
    ctx->pc = 0x257cdcu;
    // NOP
    // 0x257ce0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257ce4: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x257ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_257ce8:
    // 0x257ce8: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x257ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257cec: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x257cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257cf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x257cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x257cf4: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x257cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x257cf8: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x257cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257cfc: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x257cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257d00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x257d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x257d04: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x257D04u;
    {
        const bool branch_taken_0x257d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D04u;
            // 0x257d08: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d04) {
            ctx->pc = 0x257DF0u;
            goto label_257df0;
        }
    }
    ctx->pc = 0x257D0Cu;
label_257d0c:
    // 0x257d0c: 0xc60200f0  lwc1        $f2, 0xF0($s0)
    ctx->pc = 0x257d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257d10: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x257d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x257d14: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x257d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257d18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257d20: 0x0  nop
    ctx->pc = 0x257d20u;
    // NOP
    // 0x257d24: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x257d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x257d28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257d28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257d2c: 0x0  nop
    ctx->pc = 0x257d2cu;
    // NOP
    // 0x257d30: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x257D30u;
    {
        const bool branch_taken_0x257d30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D30u;
            // 0x257d34: 0xe6010070  swc1        $f1, 0x70($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d30) {
            ctx->pc = 0x257D54u;
            goto label_257d54;
        }
    }
    ctx->pc = 0x257D38u;
    // 0x257d38: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x257d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x257d3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257d44: 0x0  nop
    ctx->pc = 0x257d44u;
    // NOP
    // 0x257d48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257d48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x257d4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x257D4Cu;
    {
        const bool branch_taken_0x257d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D4Cu;
            // 0x257d50: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d4c) {
            ctx->pc = 0x257D88u;
            goto label_257d88;
        }
    }
    ctx->pc = 0x257D54u;
label_257d54:
    // 0x257d54: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x257d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x257d58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257d60: 0x0  nop
    ctx->pc = 0x257d60u;
    // NOP
    // 0x257d64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x257d64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257d68: 0x0  nop
    ctx->pc = 0x257d68u;
    // NOP
    // 0x257d6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x257D6Cu;
    {
        const bool branch_taken_0x257d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257D6Cu;
            // 0x257d70: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d6c) {
            ctx->pc = 0x257D88u;
            goto label_257d88;
        }
    }
    ctx->pc = 0x257D74u;
    // 0x257d74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x257d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x257d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257d7c: 0x0  nop
    ctx->pc = 0x257d7cu;
    // NOP
    // 0x257d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257d84: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x257d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_257d88:
    // 0x257d88: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x257d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257d8c: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x257d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257d90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x257d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x257d94: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x257d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x257d98: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x257d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257d9c: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x257d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257da0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x257da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x257da4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x257da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x257da8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x257DA8u;
    SET_GPR_U32(ctx, 31, 0x257DB0u);
    ctx->pc = 0x257DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257DA8u;
            // 0x257dac: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257DB0u; }
        if (ctx->pc != 0x257DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257DB0u; }
        if (ctx->pc != 0x257DB0u) { return; }
    }
    ctx->pc = 0x257DB0u;
label_257db0:
    // 0x257db0: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x257db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257db4: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x257db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257db8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257dbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257dc0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x257dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x257dc4: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x257dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257dc8: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x257dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257dd0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x257dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x257dd4: 0xc047964  jal         func_11E590
    ctx->pc = 0x257DD4u;
    SET_GPR_U32(ctx, 31, 0x257DDCu);
    ctx->pc = 0x257DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257DD4u;
            // 0x257dd8: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257DDCu; }
        if (ctx->pc != 0x257DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257DDCu; }
        if (ctx->pc != 0x257DDCu) { return; }
    }
    ctx->pc = 0x257DDCu;
label_257ddc:
    // 0x257ddc: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x257ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257de0: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x257de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257de4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x257de8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x257de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257dec: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x257decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_257df0:
    // 0x257df0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x257df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x257df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257df8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257dfc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x257dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_257e00:
    // 0x257e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257e08: 0x3e00008  jr          $ra
    ctx->pc = 0x257E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257E08u;
            // 0x257e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257E10u;
}
