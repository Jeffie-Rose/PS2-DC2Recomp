#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcPosWorldCoordGyaku__FPf
// Address: 0x25d760 - 0x25d7d4
void CalcPosWorldCoordGyaku__FPf_0x25d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcPosWorldCoordGyaku__FPf_0x25d760");
#endif

    switch (ctx->pc) {
        case 0x25d7a0u: goto label_25d7a0;
        case 0x25d7b4u: goto label_25d7b4;
        case 0x25d7c4u: goto label_25d7c4;
        default: break;
    }

    ctx->pc = 0x25d760u;

    // 0x25d760: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25d764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d76c: 0x8f8397f4  lw          $v1, -0x680C($gp)
    ctx->pc = 0x25d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940660)));
    // 0x25d770: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25D770u;
    {
        const bool branch_taken_0x25d770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D770u;
            // 0x25d774: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d770) {
            ctx->pc = 0x25D7C4u;
            goto label_25d7c4;
        }
    }
    ctx->pc = 0x25D778u;
    // 0x25d778: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25d778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x25d77c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d780: 0xc420e444  lwc1        $f0, -0x1BBC($at)
    ctx->pc = 0x25d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d784: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x25d784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d788: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x25d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x25d78c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x25d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x25d790: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x25d790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x25d794: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25d794u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25d798: 0xc04c13c  jal         func_1304F0
    ctx->pc = 0x25D798u;
    SET_GPR_U32(ctx, 31, 0x25D7A0u);
    ctx->pc = 0x25D79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D798u;
            // 0x25d79c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1304F0u;
    if (runtime->hasFunction(0x1304F0u)) {
        auto targetFn = runtime->lookupFunction(0x1304F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7A0u; }
        if (ctx->pc != 0x25D7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRotMatrixXYZ__FPA4_fPf_0x1304f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7A0u; }
        if (ctx->pc != 0x25D7A0u) { return; }
    }
    ctx->pc = 0x25D7A0u;
label_25d7a0:
    // 0x25d7a0: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x25d7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x25d7a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25d7a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d7ac: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25D7ACu;
    SET_GPR_U32(ctx, 31, 0x25D7B4u);
    ctx->pc = 0x25D7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7ACu;
            // 0x25d7b0: 0x24c6e430  addiu       $a2, $a2, -0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7B4u; }
        if (ctx->pc != 0x25D7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7B4u; }
        if (ctx->pc != 0x25D7B4u) { return; }
    }
    ctx->pc = 0x25D7B4u;
label_25d7b4:
    // 0x25d7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d7b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x25d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25d7bc: 0xc097594  jal         func_25D650
    ctx->pc = 0x25D7BCu;
    SET_GPR_U32(ctx, 31, 0x25D7C4u);
    ctx->pc = 0x25D7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7BCu;
            // 0x25d7c0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D650u;
    if (runtime->hasFunction(0x25D650u)) {
        auto targetFn = runtime->lookupFunction(0x25D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7C4u; }
        if (ctx->pc != 0x25D7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x25d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D7C4u; }
        if (ctx->pc != 0x25D7C4u) { return; }
    }
    ctx->pc = 0x25D7C4u;
label_25d7c4:
    // 0x25d7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d7c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D7CCu;
            // 0x25d7d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D7D4u;
}
