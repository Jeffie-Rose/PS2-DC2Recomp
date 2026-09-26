#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveCameraRef__FPfPf
// Address: 0x27ebf0 - 0x27edbc
void MoveCameraRef__FPfPf_0x27ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveCameraRef__FPfPf_0x27ebf0");
#endif

    switch (ctx->pc) {
        case 0x27ec2cu: goto label_27ec2c;
        case 0x27ec44u: goto label_27ec44;
        case 0x27ec54u: goto label_27ec54;
        case 0x27ec64u: goto label_27ec64;
        case 0x27ec78u: goto label_27ec78;
        case 0x27eca0u: goto label_27eca0;
        case 0x27ecc4u: goto label_27ecc4;
        case 0x27ecd4u: goto label_27ecd4;
        case 0x27ece0u: goto label_27ece0;
        case 0x27ececu: goto label_27ecec;
        case 0x27ed04u: goto label_27ed04;
        case 0x27ed10u: goto label_27ed10;
        case 0x27ed2cu: goto label_27ed2c;
        case 0x27ed48u: goto label_27ed48;
        case 0x27ed58u: goto label_27ed58;
        case 0x27ed68u: goto label_27ed68;
        case 0x27ed7cu: goto label_27ed7c;
        case 0x27ed90u: goto label_27ed90;
        default: break;
    }

    ctx->pc = 0x27ebf0u;

    // 0x27ebf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27ebf4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27ebf8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x27ebfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x27ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x27ec00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27ec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27ec04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ec04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec08: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x27ec08u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27ec0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27ec0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec10: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x27ec10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27ec14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27ec18: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x27ec18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27ec1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ec1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec20: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27ec20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27ec24: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x27EC24u;
    SET_GPR_U32(ctx, 31, 0x27EC2Cu);
    ctx->pc = 0x27EC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC24u;
            // 0x27ec28: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC2Cu; }
        if (ctx->pc != 0x27EC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC2Cu; }
        if (ctx->pc != 0x27EC2Cu) { return; }
    }
    ctx->pc = 0x27EC2Cu;
label_27ec2c:
    // 0x27ec2c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x27ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ec30: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x27ec30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x27ec34: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ec38: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x27ec38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27ec3c: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x27EC3Cu;
    SET_GPR_U32(ctx, 31, 0x27EC44u);
    ctx->pc = 0x27EC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC3Cu;
            // 0x27ec40: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC44u; }
        if (ctx->pc != 0x27EC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC44u; }
        if (ctx->pc != 0x27EC44u) { return; }
    }
    ctx->pc = 0x27EC44u;
label_27ec44:
    // 0x27ec44: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x27ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27ec48: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x27ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ec4c: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x27EC4Cu;
    SET_GPR_U32(ctx, 31, 0x27EC54u);
    ctx->pc = 0x27EC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC4Cu;
            // 0x27ec50: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC54u; }
        if (ctx->pc != 0x27EC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC54u; }
        if (ctx->pc != 0x27EC54u) { return; }
    }
    ctx->pc = 0x27EC54u;
label_27ec54:
    // 0x27ec54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27ec58: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27ec58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27ec5c: 0xc052cc0  jal         func_14B300
    ctx->pc = 0x27EC5Cu;
    SET_GPR_U32(ctx, 31, 0x27EC64u);
    ctx->pc = 0x27EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC5Cu;
            // 0x27ec60: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC64u; }
        if (ctx->pc != 0x27EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC64u; }
        if (ctx->pc != 0x27EC64u) { return; }
    }
    ctx->pc = 0x27EC64u;
label_27ec64:
    // 0x27ec64: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27ec68: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27ec6c: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x27ec6cu;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
    // 0x27ec70: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27EC70u;
    SET_GPR_U32(ctx, 31, 0x27EC78u);
    ctx->pc = 0x27EC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC70u;
            // 0x27ec74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC78u; }
        if (ctx->pc != 0x27EC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC78u; }
        if (ctx->pc != 0x27EC78u) { return; }
    }
    ctx->pc = 0x27EC78u;
label_27ec78:
    // 0x27ec78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27EC78u;
    {
        const bool branch_taken_0x27ec78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC78u;
            // 0x27ec7c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec78) {
            ctx->pc = 0x27EC94u;
            goto label_27ec94;
        }
    }
    ctx->pc = 0x27EC80u;
    // 0x27ec80: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x27ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x27ec84: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x27ec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x27ec88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ec88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ec8c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x27ec8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x27ec90: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x27ec90u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27ec94:
    // 0x27ec94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27ec98: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27EC98u;
    SET_GPR_U32(ctx, 31, 0x27ECA0u);
    ctx->pc = 0x27EC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EC98u;
            // 0x27ec9c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECA0u; }
        if (ctx->pc != 0x27ECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECA0u; }
        if (ctx->pc != 0x27ECA0u) { return; }
    }
    ctx->pc = 0x27ECA0u;
label_27eca0:
    // 0x27eca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27ECA0u;
    {
        const bool branch_taken_0x27eca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECA0u;
            // 0x27eca4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eca0) {
            ctx->pc = 0x27ECBCu;
            goto label_27ecbc;
        }
    }
    ctx->pc = 0x27ECA8u;
    // 0x27eca8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x27eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x27ecac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x27ecacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x27ecb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ecb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ecb4: 0x0  nop
    ctx->pc = 0x27ecb4u;
    // NOP
    // 0x27ecb8: 0x46140582  mul.s       $f22, $f0, $f20
    ctx->pc = 0x27ecb8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_27ecbc:
    // 0x27ecbc: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x27ECBCu;
    SET_GPR_U32(ctx, 31, 0x27ECC4u);
    ctx->pc = 0x27ECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECBCu;
            // 0x27ecc0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECC4u; }
        if (ctx->pc != 0x27ECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECC4u; }
        if (ctx->pc != 0x27ECC4u) { return; }
    }
    ctx->pc = 0x27ECC4u;
label_27ecc4:
    // 0x27ecc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27ecc8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x27ecc8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x27eccc: 0xc052cd0  jal         func_14B340
    ctx->pc = 0x27ECCCu;
    SET_GPR_U32(ctx, 31, 0x27ECD4u);
    ctx->pc = 0x27ECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECCCu;
            // 0x27ecd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECD4u; }
        if (ctx->pc != 0x27ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECD4u; }
        if (ctx->pc != 0x27ECD4u) { return; }
    }
    ctx->pc = 0x27ECD4u;
label_27ecd4:
    // 0x27ecd4: 0x46000607  neg.s       $f24, $f0
    ctx->pc = 0x27ecd4u;
    ctx->f[24] = FPU_NEG_S(ctx->f[0]);
    // 0x27ecd8: 0xc047964  jal         func_11E590
    ctx->pc = 0x27ECD8u;
    SET_GPR_U32(ctx, 31, 0x27ECE0u);
    ctx->pc = 0x27ECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECD8u;
            // 0x27ecdc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECE0u; }
        if (ctx->pc != 0x27ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECE0u; }
        if (ctx->pc != 0x27ECE0u) { return; }
    }
    ctx->pc = 0x27ECE0u;
label_27ece0:
    // 0x27ece0: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x27ece0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x27ece4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x27ECE4u;
    SET_GPR_U32(ctx, 31, 0x27ECECu);
    ctx->pc = 0x27ECE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECE4u;
            // 0x27ece8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECECu; }
        if (ctx->pc != 0x27ECECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ECECu; }
        if (ctx->pc != 0x27ECECu) { return; }
    }
    ctx->pc = 0x27ECECu;
label_27ecec:
    // 0x27ecec: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x27ececu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x27ecf0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x27ecf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x27ecf4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27ecf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27ecf8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x27ecf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27ecfc: 0xc047964  jal         func_11E590
    ctx->pc = 0x27ECFCu;
    SET_GPR_U32(ctx, 31, 0x27ED04u);
    ctx->pc = 0x27ED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ECFCu;
            // 0x27ed00: 0xe7b70074  swc1        $f23, 0x74($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED04u; }
        if (ctx->pc != 0x27ED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED04u; }
        if (ctx->pc != 0x27ED04u) { return; }
    }
    ctx->pc = 0x27ED04u;
label_27ed04:
    // 0x27ed04: 0x4600c502  mul.s       $f20, $f24, $f0
    ctx->pc = 0x27ed04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x27ed08: 0xc047a42  jal         func_11E908
    ctx->pc = 0x27ED08u;
    SET_GPR_U32(ctx, 31, 0x27ED10u);
    ctx->pc = 0x27ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED08u;
            // 0x27ed0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED10u; }
        if (ctx->pc != 0x27ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED10u; }
        if (ctx->pc != 0x27ED10u) { return; }
    }
    ctx->pc = 0x27ED10u;
label_27ed10:
    // 0x27ed10: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x27ed10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x27ed14: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27ed18: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x27ed1c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27ed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27ed20: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x27ed20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x27ed24: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27ED24u;
    SET_GPR_U32(ctx, 31, 0x27ED2Cu);
    ctx->pc = 0x27ED28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED24u;
            // 0x27ed28: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED2Cu; }
        if (ctx->pc != 0x27ED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED2Cu; }
        if (ctx->pc != 0x27ED2Cu) { return; }
    }
    ctx->pc = 0x27ED2Cu;
label_27ed2c:
    // 0x27ed2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27ED2Cu;
    {
        const bool branch_taken_0x27ed2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED2Cu;
            // 0x27ed30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed2c) {
            ctx->pc = 0x27ED4Cu;
            goto label_27ed4c;
        }
    }
    ctx->pc = 0x27ED34u;
    // 0x27ed34: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x27ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x27ed38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27ed3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27ed3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ed40: 0xc041c4a  jal         func_107128
    ctx->pc = 0x27ED40u;
    SET_GPR_U32(ctx, 31, 0x27ED48u);
    ctx->pc = 0x27ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED40u;
            // 0x27ed44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED48u; }
        if (ctx->pc != 0x27ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED48u; }
        if (ctx->pc != 0x27ED48u) { return; }
    }
    ctx->pc = 0x27ED48u;
label_27ed48:
    // 0x27ed48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ed4c:
    // 0x27ed4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ed4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed50: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x27ED50u;
    SET_GPR_U32(ctx, 31, 0x27ED58u);
    ctx->pc = 0x27ED54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED50u;
            // 0x27ed54: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED58u; }
        if (ctx->pc != 0x27ED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED58u; }
        if (ctx->pc != 0x27ED58u) { return; }
    }
    ctx->pc = 0x27ED58u;
label_27ed58:
    // 0x27ed58: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27ed5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x27ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27ed60: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27ED60u;
    SET_GPR_U32(ctx, 31, 0x27ED68u);
    ctx->pc = 0x27ED64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED60u;
            // 0x27ed64: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED68u; }
        if (ctx->pc != 0x27ED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED68u; }
        if (ctx->pc != 0x27ED68u) { return; }
    }
    ctx->pc = 0x27ED68u;
label_27ed68:
    // 0x27ed68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27ED68u;
    {
        const bool branch_taken_0x27ed68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED68u;
            // 0x27ed6c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed68) {
            ctx->pc = 0x27ED90u;
            goto label_27ed90;
        }
    }
    ctx->pc = 0x27ED70u;
    // 0x27ed70: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x27ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27ed74: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27ED74u;
    SET_GPR_U32(ctx, 31, 0x27ED7Cu);
    ctx->pc = 0x27ED78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED74u;
            // 0x27ed78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED7Cu; }
        if (ctx->pc != 0x27ED7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED7Cu; }
        if (ctx->pc != 0x27ED7Cu) { return; }
    }
    ctx->pc = 0x27ED7Cu;
label_27ed7c:
    // 0x27ed7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED7Cu;
    {
        const bool branch_taken_0x27ed7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED7Cu;
            // 0x27ed80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed7c) {
            ctx->pc = 0x27ED90u;
            goto label_27ed90;
        }
    }
    ctx->pc = 0x27ED84u;
    // 0x27ed84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ed84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed88: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x27ED88u;
    SET_GPR_U32(ctx, 31, 0x27ED90u);
    ctx->pc = 0x27ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED88u;
            // 0x27ed8c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED90u; }
        if (ctx->pc != 0x27ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED90u; }
        if (ctx->pc != 0x27ED90u) { return; }
    }
    ctx->pc = 0x27ED90u;
label_27ed90:
    // 0x27ed90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27ed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ed94: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x27ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27ed98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x27ed98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ed9c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x27ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27eda0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x27eda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27eda4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x27eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27eda8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27eda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27edac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x27edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27edb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27edb4: 0x3e00008  jr          $ra
    ctx->pc = 0x27EDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDB4u;
            // 0x27edb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27EDBCu;
}
