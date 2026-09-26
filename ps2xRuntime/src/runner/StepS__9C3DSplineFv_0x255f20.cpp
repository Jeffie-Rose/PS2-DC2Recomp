#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepS__9C3DSplineFv
// Address: 0x255f20 - 0x256178
void StepS__9C3DSplineFv_0x255f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepS__9C3DSplineFv_0x255f20");
#endif

    switch (ctx->pc) {
        case 0x255f68u: goto label_255f68;
        case 0x2560bcu: goto label_2560bc;
        case 0x256138u: goto label_256138;
        default: break;
    }

    ctx->pc = 0x255f20u;

    // 0x255f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x255f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x255f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255f2c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x255f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x255f30: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x255f30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x255f34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x255F34u;
    {
        const bool branch_taken_0x255f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F34u;
            // 0x255f38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f34) {
            ctx->pc = 0x255F44u;
            goto label_255f44;
        }
    }
    ctx->pc = 0x255F3Cu;
    // 0x255f3c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x255F3Cu;
    {
        const bool branch_taken_0x255f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F3Cu;
            // 0x255f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f3c) {
            ctx->pc = 0x256168u;
            goto label_256168;
        }
    }
    ctx->pc = 0x255F44u;
label_255f44:
    // 0x255f44: 0xc6010398  lwc1        $f1, 0x398($s0)
    ctx->pc = 0x255f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255f48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x255f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255f4c: 0x0  nop
    ctx->pc = 0x255f4cu;
    // NOP
    // 0x255f50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255f54: 0x0  nop
    ctx->pc = 0x255f54u;
    // NOP
    // 0x255f58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x255F58u;
    {
        const bool branch_taken_0x255f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F58u;
            // 0x255f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f58) {
            ctx->pc = 0x255F68u;
            goto label_255f68;
        }
    }
    ctx->pc = 0x255F60u;
    // 0x255f60: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x255F60u;
    {
        const bool branch_taken_0x255f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F60u;
            // 0x255f64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f60) {
            ctx->pc = 0x25616Cu;
            goto label_25616c;
        }
    }
    ctx->pc = 0x255F68u;
label_255f68:
    // 0x255f68: 0xc6010388  lwc1        $f1, 0x388($s0)
    ctx->pc = 0x255f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255f6c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x255f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x255f70: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x255f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x255f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x255f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255f78: 0x0  nop
    ctx->pc = 0x255f78u;
    // NOP
    // 0x255f7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x255f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x255f80: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x255f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x255f84: 0x8e040384  lw          $a0, 0x384($s0)
    ctx->pc = 0x255f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x255f88: 0xc6000388  lwc1        $f0, 0x388($s0)
    ctx->pc = 0x255f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255f8c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x255f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x255f90: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x255f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x255f94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x255f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x255f98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x255f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x255f9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255fa0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x255fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255fa4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x255fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x255fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255fac: 0x0  nop
    ctx->pc = 0x255facu;
    // NOP
    // 0x255fb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x255fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x255fb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x255fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255fb8: 0x0  nop
    ctx->pc = 0x255fb8u;
    // NOP
    // 0x255fbc: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x255FBCu;
    {
        const bool branch_taken_0x255fbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x255FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255FBCu;
            // 0x255fc0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fbc) {
            ctx->pc = 0x25607Cu;
            goto label_25607c;
        }
    }
    ctx->pc = 0x255FC4u;
    // 0x255fc4: 0xae020384  sw          $v0, 0x384($s0)
    ctx->pc = 0x255fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
    // 0x255fc8: 0x8e020384  lw          $v0, 0x384($s0)
    ctx->pc = 0x255fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x255fcc: 0x8e040380  lw          $a0, 0x380($s0)
    ctx->pc = 0x255fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x255fd0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x255fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x255fd4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x255FD4u;
    {
        const bool branch_taken_0x255fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255FD4u;
            // 0x255fd8: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fd4) {
            ctx->pc = 0x25607Cu;
            goto label_25607c;
        }
    }
    ctx->pc = 0x255FDCu;
    // 0x255fdc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x255fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x255fe0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x255fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x255fe4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x255fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x255fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255fec: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x255fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x255ff0: 0xc481fff4  lwc1        $f1, -0xC($a0)
    ctx->pc = 0x255ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255ff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x255ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255ff8: 0x0  nop
    ctx->pc = 0x255ff8u;
    // NOP
    // 0x255ffc: 0xe601038c  swc1        $f1, 0x38C($s0)
    ctx->pc = 0x255ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x256000: 0x8e040380  lw          $a0, 0x380($s0)
    ctx->pc = 0x256000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x256004: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x256004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x256008: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x256008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25600c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25600cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256010: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x256010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x256014: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x256014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256018: 0xe6010390  swc1        $f1, 0x390($s0)
    ctx->pc = 0x256018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
    // 0x25601c: 0x8e040380  lw          $a0, 0x380($s0)
    ctx->pc = 0x25601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x256020: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x256020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x256024: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x256024u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256028: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x256028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25602c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x256030: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x256030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256034: 0xe6010394  swc1        $f1, 0x394($s0)
    ctx->pc = 0x256034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
    // 0x256038: 0x8e030380  lw          $v1, 0x380($s0)
    ctx->pc = 0x256038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x25603c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25603cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x256040: 0xae030384  sw          $v1, 0x384($s0)
    ctx->pc = 0x256040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
    // 0x256044: 0x8e040384  lw          $a0, 0x384($s0)
    ctx->pc = 0x256044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x256048: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x256048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x25604c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x25604cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256050: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x256050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256054: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x256054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x256058: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25605c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x25605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x256060: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x256060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x256064: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x256064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256068: 0x0  nop
    ctx->pc = 0x256068u;
    // NOP
    // 0x25606c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25606cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x256070: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x256070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x256074: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x256074u;
    {
        const bool branch_taken_0x256074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256074u;
            // 0x256078: 0xe6000388  swc1        $f0, 0x388($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256074) {
            ctx->pc = 0x256168u;
            goto label_256168;
        }
    }
    ctx->pc = 0x25607Cu;
label_25607c:
    // 0x25607c: 0x8e030384  lw          $v1, 0x384($s0)
    ctx->pc = 0x25607cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x256080: 0xc6020388  lwc1        $f2, 0x388($s0)
    ctx->pc = 0x256080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x256088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25608c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x25608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256090: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x256090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256094: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256098: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x256098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25609c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2560a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2560a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2560a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2560a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2560a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2560a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2560ac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2560acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2560b0: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x2560b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2560b4: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x2560b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2560b8: 0x46042982  mul.s       $f6, $f5, $f4
    ctx->pc = 0x2560b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_2560bc:
    // 0x2560bc: 0x0  nop
    ctx->pc = 0x2560bcu;
    // NOP
    // 0x2560c0: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x2560c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2560c4: 0xc440038c  lwc1        $f0, 0x38C($v0)
    ctx->pc = 0x2560c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2560c8: 0xfd2821  addu        $a1, $a3, $sp
    ctx->pc = 0x2560c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x2560cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2560ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2560d0: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x2560d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x2560d4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2560d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2560d8: 0x8e040384  lw          $a0, 0x384($s0)
    ctx->pc = 0x2560d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x2560dc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2560dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2560e0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2560e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2560e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2560e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2560e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2560e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2560ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2560ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2560f0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2560f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2560f4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2560f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2560f8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x2560f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2560fc: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2560fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256100: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x256100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256104: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x256104u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x256108: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x256108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x25610c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x25610cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x256110: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x256110u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x256114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x256114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x256118: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x256118u;
    {
        const bool branch_taken_0x256118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256118u;
            // 0x25611c: 0xe4a00030  swc1        $f0, 0x30($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256118) {
            ctx->pc = 0x2560BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2560bc;
        }
    }
    ctx->pc = 0x256120u;
    // 0x256120: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x256120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x256124: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x256124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x256128: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x256128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x25612c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25612cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x256130: 0xc04c018  jal         func_130060
    ctx->pc = 0x256130u;
    SET_GPR_U32(ctx, 31, 0x256138u);
    ctx->pc = 0x256134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256130u;
            // 0x256134: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256138u; }
        if (ctx->pc != 0x256138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256138u; }
        if (ctx->pc != 0x256138u) { return; }
    }
    ctx->pc = 0x256138u;
label_256138:
    // 0x256138: 0xc6010398  lwc1        $f1, 0x398($s0)
    ctx->pc = 0x256138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25613c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25613cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256140: 0x0  nop
    ctx->pc = 0x256140u;
    // NOP
    // 0x256144: 0x4501ff88  bc1t        . + 4 + (-0x78 << 2)
    ctx->pc = 0x256144u;
    {
        const bool branch_taken_0x256144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256144) {
            ctx->pc = 0x255F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255f68;
        }
    }
    ctx->pc = 0x25614Cu;
    // 0x25614c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x25614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256154: 0xe600038c  swc1        $f0, 0x38C($s0)
    ctx->pc = 0x256154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x256158: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x256158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25615c: 0xe6000390  swc1        $f0, 0x390($s0)
    ctx->pc = 0x25615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
    // 0x256160: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x256160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256164: 0xe6000394  swc1        $f0, 0x394($s0)
    ctx->pc = 0x256164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
label_256168:
    // 0x256168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25616c:
    // 0x25616c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25616cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256170: 0x3e00008  jr          $ra
    ctx->pc = 0x256170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256170u;
            // 0x256174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256178u;
}
