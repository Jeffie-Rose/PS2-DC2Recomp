#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FarClip__7CObjectFfPf
// Address: 0x169ac0 - 0x169c0c
void FarClip__7CObjectFfPf_0x169ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FarClip__7CObjectFfPf_0x169ac0");
#endif

    ctx->pc = 0x169ac0u;

    // 0x169ac0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169ac4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x169ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x169ac8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x169ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169acc: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x169accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169ad0: 0xc482005c  lwc1        $f2, 0x5C($a0)
    ctx->pc = 0x169ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169ad4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x169ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169ad8: 0x0  nop
    ctx->pc = 0x169ad8u;
    // NOP
    // 0x169adc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x169ADCu;
    {
        const bool branch_taken_0x169adc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169ADCu;
            // 0x169ae0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169adc) {
            ctx->pc = 0x169AF8u;
            goto label_169af8;
        }
    }
    ctx->pc = 0x169AE4u;
    // 0x169ae4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x169ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169ae8: 0x0  nop
    ctx->pc = 0x169ae8u;
    // NOP
    // 0x169aec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x169AECu;
    {
        const bool branch_taken_0x169aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169aec) {
            ctx->pc = 0x169AF8u;
            goto label_169af8;
        }
    }
    ctx->pc = 0x169AF4u;
    // 0x169af4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x169af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169af8:
    // 0x169af8: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x169af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169afc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b00: 0x0  nop
    ctx->pc = 0x169b00u;
    // NOP
    // 0x169b04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x169b04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169b08: 0x0  nop
    ctx->pc = 0x169b08u;
    // NOP
    // 0x169b0c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x169B0Cu;
    {
        const bool branch_taken_0x169b0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169B0Cu;
            // 0x169b10: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b0c) {
            ctx->pc = 0x169B38u;
            goto label_169b38;
        }
    }
    ctx->pc = 0x169B14u;
    // 0x169b14: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x169b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169b18: 0x0  nop
    ctx->pc = 0x169b18u;
    // NOP
    // 0x169b1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x169B1Cu;
    {
        const bool branch_taken_0x169b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x169B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169B1Cu;
            // 0x169b20: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b1c) {
            ctx->pc = 0x169B34u;
            goto label_169b34;
        }
    }
    ctx->pc = 0x169B24u;
    // 0x169b24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x169b24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b2c: 0x0  nop
    ctx->pc = 0x169b2cu;
    // NOP
    // 0x169b30: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x169b30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_169b34:
    // 0x169b34: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x169b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_169b38:
    // 0x169b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169B38u;
    {
        const bool branch_taken_0x169b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b38) {
            ctx->pc = 0x169B48u;
            goto label_169b48;
        }
    }
    ctx->pc = 0x169B40u;
    // 0x169b40: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x169b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x169b44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x169b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_169b48:
    // 0x169b48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169B48u;
    {
        const bool branch_taken_0x169b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b48) {
            ctx->pc = 0x169B5Cu;
            goto label_169b5c;
        }
    }
    ctx->pc = 0x169B50u;
    // 0x169b50: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x169b54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x169b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x169b58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x169b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_169b5c:
    // 0x169b5c: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x169b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b64: 0x0  nop
    ctx->pc = 0x169b64u;
    // NOP
    // 0x169b68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x169b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169b6c: 0x0  nop
    ctx->pc = 0x169b6cu;
    // NOP
    // 0x169b70: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x169B70u;
    {
        const bool branch_taken_0x169b70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x169B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169B70u;
            // 0x169b74: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b70) {
            ctx->pc = 0x169B8Cu;
            goto label_169b8c;
        }
    }
    ctx->pc = 0x169B78u;
    // 0x169b78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169B78u;
    {
        const bool branch_taken_0x169b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169B78u;
            // 0x169b7c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b78) {
            ctx->pc = 0x169B88u;
            goto label_169b88;
        }
    }
    ctx->pc = 0x169B80u;
    // 0x169b80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169B80u;
    {
        const bool branch_taken_0x169b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169B80u;
            // 0x169b84: 0xac830058  sw          $v1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b80) {
            ctx->pc = 0x169B8Cu;
            goto label_169b8c;
        }
    }
    ctx->pc = 0x169B88u;
label_169b88:
    // 0x169b88: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x169b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_169b8c:
    // 0x169b8c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x169b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x169b90: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x169B90u;
    {
        const bool branch_taken_0x169b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b90) {
            ctx->pc = 0x169C04u;
            goto label_169c04;
        }
    }
    ctx->pc = 0x169B98u;
    // 0x169b98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x169B98u;
    {
        const bool branch_taken_0x169b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b98) {
            ctx->pc = 0x169BCCu;
            goto label_169bcc;
        }
    }
    ctx->pc = 0x169BA0u;
    // 0x169ba0: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x169ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169ba4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x169ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x169ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x169ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169bac: 0x0  nop
    ctx->pc = 0x169bacu;
    // NOP
    // 0x169bb0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x169bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x169bb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x169bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169bb8: 0x0  nop
    ctx->pc = 0x169bb8u;
    // NOP
    // 0x169bbc: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x169BBCu;
    {
        const bool branch_taken_0x169bbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169BBCu;
            // 0x169bc0: 0xe4810058  swc1        $f1, 0x58($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bbc) {
            ctx->pc = 0x169BFCu;
            goto label_169bfc;
        }
    }
    ctx->pc = 0x169BC4u;
    // 0x169bc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x169BC4u;
    {
        const bool branch_taken_0x169bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169BC4u;
            // 0x169bc8: 0xe4800058  swc1        $f0, 0x58($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bc4) {
            ctx->pc = 0x169BFCu;
            goto label_169bfc;
        }
    }
    ctx->pc = 0x169BCCu;
label_169bcc:
    // 0x169bcc: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x169bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169bd4: 0x0  nop
    ctx->pc = 0x169bd4u;
    // NOP
    // 0x169bd8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x169bd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x169bdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x169bdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169be0: 0x0  nop
    ctx->pc = 0x169be0u;
    // NOP
    // 0x169be4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x169BE4u;
    {
        const bool branch_taken_0x169be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x169BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169BE4u;
            // 0x169be8: 0xe4810058  swc1        $f1, 0x58($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169be4) {
            ctx->pc = 0x169BF8u;
            goto label_169bf8;
        }
    }
    ctx->pc = 0x169BECu;
    // 0x169bec: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x169becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x169bf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169BF0u;
    {
        const bool branch_taken_0x169bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169BF0u;
            // 0x169bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bf0) {
            ctx->pc = 0x169BFCu;
            goto label_169bfc;
        }
    }
    ctx->pc = 0x169BF8u;
label_169bf8:
    // 0x169bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169bfc:
    // 0x169bfc: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x169bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c00: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x169c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_169c04:
    // 0x169c04: 0x3e00008  jr          $ra
    ctx->pc = 0x169C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169C0Cu;
}
