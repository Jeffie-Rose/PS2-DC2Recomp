#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcReflectionVector__FPfPfPf
// Address: 0x2cbd00 - 0x2cbdc4
void CalcReflectionVector__FPfPfPf_0x2cbd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcReflectionVector__FPfPfPf_0x2cbd00");
#endif

    switch (ctx->pc) {
        case 0x2cbd20u: goto label_2cbd20;
        default: break;
    }

    ctx->pc = 0x2cbd00u;

    // 0x2cbd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cbd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cbd04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cbd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cbd08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbd0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cbd10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cbd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cbd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd18: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2CBD18u;
    SET_GPR_U32(ctx, 31, 0x2CBD20u);
    ctx->pc = 0x2CBD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD18u;
            // 0x2cbd1c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD20u; }
        if (ctx->pc != 0x2CBD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD20u; }
        if (ctx->pc != 0x2CBD20u) { return; }
    }
    ctx->pc = 0x2CBD20u;
label_2cbd20:
    // 0x2cbd20: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2cbd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbd24: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2cbd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2cbd28: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x2cbd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x2cbd2c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2cbd2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2cbd30: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2cbd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cbd34: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x2cbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2cbd38: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2cbd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cbd3c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x2cbd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2cbd40: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2cbd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2cbd44: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2cbd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cbd48: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x2cbd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2cbd4c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2cbd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbd50: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2cbd50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2cbd54: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x2cbd54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2cbd58: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2cbd58u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2cbd5c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2cbd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbd60: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2cbd60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2cbd64: 0x46062082  mul.s       $f2, $f4, $f6
    ctx->pc = 0x2cbd64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2cbd68: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2cbd68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cbd6c: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x2cbd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2cbd70: 0x4600285c  madd.s      $f1, $f5, $f0
    ctx->pc = 0x2cbd70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x2cbd74: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x2cbd74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2cbd78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbd7c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2cbd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2cbd80: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2cbd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2cbd84: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2cbd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbd88: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2cbd88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cbd8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbd8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbd90: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2cbd90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2cbd94: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2cbd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2cbd98: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2cbd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbd9c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2cbd9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2cbda0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbda0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbda4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2cbda4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2cbda8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2cbda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2cbdac: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x2cbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x2cbdb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cbdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbdb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbdb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBDBCu;
            // 0x2cbdc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBDC4u;
}
