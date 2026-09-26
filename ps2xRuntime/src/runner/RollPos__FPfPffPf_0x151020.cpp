#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RollPos__FPfPffPf
// Address: 0x151020 - 0x1510d0
void RollPos__FPfPffPf_0x151020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RollPos__FPfPffPf_0x151020");
#endif

    switch (ctx->pc) {
        case 0x151060u: goto label_151060;
        case 0x151070u: goto label_151070;
        case 0x15108cu: goto label_15108c;
        case 0x151098u: goto label_151098;
        default: break;
    }

    ctx->pc = 0x151020u;

    // 0x151020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x151028: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15102c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x15102cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x151030: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x151030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151034: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x151034u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x151038: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x151038u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x15103c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x15103cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x151040: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x151040u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x151044: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x151044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x151048: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x151048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15104c: 0xc4960004  lwc1        $f22, 0x4($a0)
    ctx->pc = 0x15104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x151050: 0xc4b40000  lwc1        $f20, 0x0($a1)
    ctx->pc = 0x151050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x151054: 0xc4b70004  lwc1        $f23, 0x4($a1)
    ctx->pc = 0x151054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x151058: 0xc047964  jal         func_11E590
    ctx->pc = 0x151058u;
    SET_GPR_U32(ctx, 31, 0x151060u);
    ctx->pc = 0x15105Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151058u;
            // 0x15105c: 0x46006646  mov.s       $f25, $f12 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151060u; }
        if (ctx->pc != 0x151060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151060u; }
        if (ctx->pc != 0x151060u) { return; }
    }
    ctx->pc = 0x151060u;
label_151060:
    // 0x151060: 0x4615a601  sub.s       $f24, $f20, $f21
    ctx->pc = 0x151060u;
    ctx->f[24] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x151064: 0x4600c502  mul.s       $f20, $f24, $f0
    ctx->pc = 0x151064u;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x151068: 0xc047a42  jal         func_11E908
    ctx->pc = 0x151068u;
    SET_GPR_U32(ctx, 31, 0x151070u);
    ctx->pc = 0x15106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151068u;
            // 0x15106c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151070u; }
        if (ctx->pc != 0x151070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151070u; }
        if (ctx->pc != 0x151070u) { return; }
    }
    ctx->pc = 0x151070u;
label_151070:
    // 0x151070: 0x4616bdc1  sub.s       $f23, $f23, $f22
    ctx->pc = 0x151070u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x151074: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x151074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x151078: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x151078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x15107c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x15107cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x151080: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x151080u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x151084: 0xc047a42  jal         func_11E908
    ctx->pc = 0x151084u;
    SET_GPR_U32(ctx, 31, 0x15108Cu);
    ctx->pc = 0x151088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151084u;
            // 0x151088: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15108Cu; }
        if (ctx->pc != 0x15108Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15108Cu; }
        if (ctx->pc != 0x15108Cu) { return; }
    }
    ctx->pc = 0x15108Cu;
label_15108c:
    // 0x15108c: 0x4600c502  mul.s       $f20, $f24, $f0
    ctx->pc = 0x15108cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x151090: 0xc047964  jal         func_11E590
    ctx->pc = 0x151090u;
    SET_GPR_U32(ctx, 31, 0x151098u);
    ctx->pc = 0x151094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151090u;
            // 0x151094: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151098u; }
        if (ctx->pc != 0x151098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151098u; }
        if (ctx->pc != 0x151098u) { return; }
    }
    ctx->pc = 0x151098u;
label_151098:
    // 0x151098: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x151098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x15109c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x15109cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1510a0: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x1510a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1510a4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1510a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1510a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1510a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1510ac: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1510acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1510b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1510b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1510b4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1510b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1510b8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1510b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1510bc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1510bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1510c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1510c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1510c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1510c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1510c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1510C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1510CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1510C8u;
            // 0x1510cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1510D0u;
}
