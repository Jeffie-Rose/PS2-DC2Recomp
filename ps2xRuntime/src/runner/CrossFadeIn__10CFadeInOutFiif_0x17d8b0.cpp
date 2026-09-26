#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CrossFadeIn__10CFadeInOutFiif
// Address: 0x17d8b0 - 0x17d904
void CrossFadeIn__10CFadeInOutFiif_0x17d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CrossFadeIn__10CFadeInOutFiif_0x17d8b0");
#endif

    switch (ctx->pc) {
        case 0x17d8e4u: goto label_17d8e4;
        default: break;
    }

    ctx->pc = 0x17d8b0u;

    // 0x17d8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d8b4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17d8b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17d8bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d8c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17d8c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17d8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8c8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x17d8c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x17d8cc: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x17d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x17d8d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17d8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d8d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17d8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17d8d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17d8dc: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17D8DCu;
    SET_GPR_U32(ctx, 31, 0x17D8E4u);
    ctx->pc = 0x17D8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8DCu;
            // 0x17d8e0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (runtime->hasFunction(0x17D790u)) {
        auto targetFn = runtime->lookupFunction(0x17D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8E4u; }
        if (ctx->pc != 0x17D8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFifff_0x17d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8E4u; }
        if (ctx->pc != 0x17D8E4u) { return; }
    }
    ctx->pc = 0x17D8E4u;
label_17d8e4:
    // 0x17d8e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d8e8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x17d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x17d8ec: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x17d8ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17d8f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d8f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17d8f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17D8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D8FCu;
            // 0x17d900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D904u;
}
