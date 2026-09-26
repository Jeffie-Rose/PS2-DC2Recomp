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
// Address: 0x25d650 - 0x25d6f8
void VectMatMul__FPfPfPA4_f_0x25d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VectMatMul__FPfPfPA4_f_0x25d650");
#endif

    switch (ctx->pc) {
        case 0x25d6ecu: goto label_25d6ec;
        default: break;
    }

    ctx->pc = 0x25d650u;

    // 0x25d650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d654: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d65c: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x25d65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25d660: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x25d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d664: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x25d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d668: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x25d668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d66c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d670: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x25d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d674: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x25d674u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x25d678: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x25d678u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25d67c: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x25d67cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x25d680: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x25d680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x25d684: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x25d684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25d688: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x25d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25d68c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x25d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d690: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x25d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d694: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x25d694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d698: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25d698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d69c: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x25d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6a0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x25d6a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x25d6a4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x25d6a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25d6a8: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x25d6a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x25d6ac: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x25d6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x25d6b0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25d6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25d6b4: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x25d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25d6b8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x25d6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d6bc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x25d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d6c0: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x25d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d6c4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d6c8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x25d6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6cc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x25d6ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x25d6d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25d6d4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x25d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x25d6d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x25d6d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25d6dc: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x25d6dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x25d6e0: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x25d6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x25d6e4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25D6E4u;
    SET_GPR_U32(ctx, 31, 0x25D6ECu);
    ctx->pc = 0x25D6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D6E4u;
            // 0x25d6e8: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D6ECu; }
        if (ctx->pc != 0x25D6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D6ECu; }
        if (ctx->pc != 0x25D6ECu) { return; }
    }
    ctx->pc = 0x25D6ECu;
label_25d6ec:
    // 0x25d6ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D6F0u;
            // 0x25d6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D6F8u;
}
