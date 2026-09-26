#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: VectMatMul__FPfPfPA4_f
// Address: 0x27e860 - 0x27e908
void VectMatMul__FPfPfPA4_f_0x27e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VectMatMul__FPfPfPA4_f_0x27e860");
#endif

    switch (ctx->pc) {
        case 0x27e8fcu: goto label_27e8fc;
        default: break;
    }

    ctx->pc = 0x27e860u;

    // 0x27e860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e864: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27e864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27e868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e86c: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x27e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27e870: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x27e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27e874: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x27e874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27e878: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x27e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e87c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x27e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e880: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x27e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e884: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x27e884u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x27e888: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27e888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x27e88c: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x27e88cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x27e890: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x27e890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x27e894: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x27e894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27e898: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x27e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27e89c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x27e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27e8a0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x27e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27e8a4: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x27e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e8a8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x27e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e8ac: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x27e8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e8b0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x27e8b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x27e8b4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27e8b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x27e8b8: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x27e8b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x27e8bc: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x27e8bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x27e8c0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x27e8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27e8c4: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x27e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27e8c8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x27e8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27e8cc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x27e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27e8d0: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x27e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e8d4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x27e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e8d8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x27e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e8dc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x27e8dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x27e8e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27e8e4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x27e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x27e8e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x27e8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x27e8ec: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x27e8ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x27e8f0: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x27e8f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x27e8f4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x27E8F4u;
    SET_GPR_U32(ctx, 31, 0x27E8FCu);
    ctx->pc = 0x27E8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8F4u;
            // 0x27e8f8: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E8FCu; }
        if (ctx->pc != 0x27E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E8FCu; }
        if (ctx->pc != 0x27E8FCu) { return; }
    }
    ctx->pc = 0x27E8FCu;
label_27e8fc:
    // 0x27e8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e900: 0x3e00008  jr          $ra
    ctx->pc = 0x27E900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E900u;
            // 0x27e904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27E908u;
}
