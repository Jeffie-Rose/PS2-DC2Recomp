#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcIntersectionPointSphereAndLine__FPffPfPfPfPf
// Address: 0x15bd90 - 0x15bedc
void CalcIntersectionPointSphereAndLine__FPffPfPfPfPf_0x15bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcIntersectionPointSphereAndLine__FPffPfPfPfPf_0x15bd90");
#endif

    switch (ctx->pc) {
        case 0x15bdd0u: goto label_15bdd0;
        case 0x15bde0u: goto label_15bde0;
        case 0x15be38u: goto label_15be38;
        case 0x15be68u: goto label_15be68;
        case 0x15be80u: goto label_15be80;
        case 0x15be98u: goto label_15be98;
        case 0x15beb0u: goto label_15beb0;
        default: break;
    }

    ctx->pc = 0x15bd90u;

    // 0x15bd90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15bd94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15bd98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15bd9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15bd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15bda0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15bda0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bda4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15bda8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15bda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15bdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15bdb0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x15bdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15bdb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15bdb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15bdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdbc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x15bdbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x15bdc0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x15bdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15bdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdc8: 0xc056ef4  jal         func_15BBD0
    ctx->pc = 0x15BDC8u;
    SET_GPR_U32(ctx, 31, 0x15BDD0u);
    ctx->pc = 0x15BDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDC8u;
            // 0x15bdcc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BBD0u;
    if (runtime->hasFunction(0x15BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDD0u; }
        if (ctx->pc != 0x15BDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Parametric__FPfPfPf_0x15bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDD0u; }
        if (ctx->pc != 0x15BDD0u) { return; }
    }
    ctx->pc = 0x15BDD0u;
label_15bdd0:
    // 0x15bdd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15bdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdd4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15bdd8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x15BDD8u;
    SET_GPR_U32(ctx, 31, 0x15BDE0u);
    ctx->pc = 0x15BDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDD8u;
            // 0x15bddc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDE0u; }
        if (ctx->pc != 0x15BDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BDE0u; }
        if (ctx->pc != 0x15BDE0u) { return; }
    }
    ctx->pc = 0x15BDE0u;
label_15bde0:
    // 0x15bde0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x15bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bde4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x15bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x15bde8: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x15bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15bdec: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x15bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x15bdf0: 0xc7a60078  lwc1        $f6, 0x78($sp)
    ctx->pc = 0x15bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15bdf4: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x15bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15bdf8: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x15bdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15bdfc: 0xc7a80068  lwc1        $f8, 0x68($sp)
    ctx->pc = 0x15bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15be00: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x15be00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x15be04: 0x46050882  mul.s       $f2, $f1, $f5
    ctx->pc = 0x15be04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x15be08: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x15be08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x15be0c: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x15be0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x15be10: 0x46043842  mul.s       $f1, $f7, $f4
    ctx->pc = 0x15be10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x15be14: 0x4608431c  madd.s      $f12, $f8, $f8
    ctx->pc = 0x15be14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
    // 0x15be18: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x15be18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x15be1c: 0x4606435c  madd.s      $f13, $f8, $f6
    ctx->pc = 0x15be1cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[6]));
    // 0x15be20: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x15be20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x15be24: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x15be24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x15be28: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15be28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15be2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x15be2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15be30: 0xc056f08  jal         func_15BC20
    ctx->pc = 0x15BE30u;
    SET_GPR_U32(ctx, 31, 0x15BE38u);
    ctx->pc = 0x15BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE30u;
            // 0x15be34: 0x4614a39d  msub.s      $f14, $f20, $f20 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BC20u;
    if (runtime->hasFunction(0x15BC20u)) {
        auto targetFn = runtime->lookupFunction(0x15BC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE38u; }
        if (ctx->pc != 0x15BE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Quadratic__FfffPfPf_0x15bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE38u; }
        if (ctx->pc != 0x15BE38u) { return; }
    }
    ctx->pc = 0x15BE38u;
label_15be38:
    // 0x15be38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15be38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15be40: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15BE40u;
    {
        const bool branch_taken_0x15be40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE40u;
            // 0x15be44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be40) {
            ctx->pc = 0x15BE88u;
            goto label_15be88;
        }
    }
    ctx->pc = 0x15BE48u;
    // 0x15be48: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BE48u;
    {
        const bool branch_taken_0x15be48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x15be48) {
            ctx->pc = 0x15BE58u;
            goto label_15be58;
        }
    }
    ctx->pc = 0x15BE50u;
    // 0x15be50: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15BE50u;
    {
        const bool branch_taken_0x15be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE50u;
            // 0x15be54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be50) {
            ctx->pc = 0x15BEBCu;
            goto label_15bebc;
        }
    }
    ctx->pc = 0x15BE58u;
label_15be58:
    // 0x15be58: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x15be58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15be5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be60: 0xc041c4a  jal         func_107128
    ctx->pc = 0x15BE60u;
    SET_GPR_U32(ctx, 31, 0x15BE68u);
    ctx->pc = 0x15BE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE60u;
            // 0x15be64: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE68u; }
        if (ctx->pc != 0x15BE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE68u; }
        if (ctx->pc != 0x15BE68u) { return; }
    }
    ctx->pc = 0x15BE68u;
label_15be68:
    // 0x15be68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15be6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15be6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be70: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x15be70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x15be74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15be74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be78: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x15BE78u;
    SET_GPR_U32(ctx, 31, 0x15BE80u);
    ctx->pc = 0x15BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE78u;
            // 0x15be7c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE80u; }
        if (ctx->pc != 0x15BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE80u; }
        if (ctx->pc != 0x15BE80u) { return; }
    }
    ctx->pc = 0x15BE80u;
label_15be80:
    // 0x15be80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15be80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15be84: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x15be84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_15be88:
    // 0x15be88: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x15be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15be8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15be8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be90: 0xc041c4a  jal         func_107128
    ctx->pc = 0x15BE90u;
    SET_GPR_U32(ctx, 31, 0x15BE98u);
    ctx->pc = 0x15BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE90u;
            // 0x15be94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE98u; }
        if (ctx->pc != 0x15BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE98u; }
        if (ctx->pc != 0x15BE98u) { return; }
    }
    ctx->pc = 0x15BE98u;
label_15be98:
    // 0x15be98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15be9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15be9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bea0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x15bea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15bea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bea8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x15BEA8u;
    SET_GPR_U32(ctx, 31, 0x15BEB0u);
    ctx->pc = 0x15BEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEA8u;
            // 0x15beac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BEB0u; }
        if (ctx->pc != 0x15BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BEB0u; }
        if (ctx->pc != 0x15BEB0u) { return; }
    }
    ctx->pc = 0x15BEB0u;
label_15beb0:
    // 0x15beb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15beb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15beb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15beb8: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x15beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_15bebc:
    // 0x15bebc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15bebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bec0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15bec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15bec4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15bec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15bec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15becc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15beccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bed0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15bed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bed4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BED4u;
            // 0x15bed8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BEDCu;
}
