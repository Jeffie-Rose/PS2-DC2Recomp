#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CrossFadeOut__10CFadeInOutFiif
// Address: 0x17d910 - 0x17d968
void CrossFadeOut__10CFadeInOutFiif_0x17d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CrossFadeOut__10CFadeInOutFiif_0x17d910");
#endif

    switch (ctx->pc) {
        case 0x17d944u: goto label_17d944;
        default: break;
    }

    ctx->pc = 0x17d910u;

    // 0x17d910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d914: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17d918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17d91c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d920: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17d920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17d924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d928: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x17d928u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x17d92c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x17d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x17d930: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17d930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d934: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17d934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d938: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17d938u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17d93c: 0xc05f610  jal         func_17D840
    ctx->pc = 0x17D93Cu;
    SET_GPR_U32(ctx, 31, 0x17D944u);
    ctx->pc = 0x17D940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D93Cu;
            // 0x17d940: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D944u; }
        if (ctx->pc != 0x17D944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D944u; }
        if (ctx->pc != 0x17D944u) { return; }
    }
    ctx->pc = 0x17D944u;
label_17d944:
    // 0x17d944: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x17d944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17d948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d94c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x17d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x17d950: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x17d950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17d954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d958: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17d95c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d960: 0x3e00008  jr          $ra
    ctx->pc = 0x17D960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D960u;
            // 0x17d964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D968u;
}
