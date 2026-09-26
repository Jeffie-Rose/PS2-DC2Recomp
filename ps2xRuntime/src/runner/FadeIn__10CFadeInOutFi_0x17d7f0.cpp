#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeIn__10CFadeInOutFi
// Address: 0x17d7f0 - 0x17d83c
void FadeIn__10CFadeInOutFi_0x17d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeIn__10CFadeInOutFi_0x17d7f0");
#endif

    switch (ctx->pc) {
        case 0x17d818u: goto label_17d818;
        case 0x17d830u: goto label_17d830;
        default: break;
    }

    ctx->pc = 0x17d7f0u;

    // 0x17d7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d7f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17d7fc: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D7FCu;
    {
        const bool branch_taken_0x17d7fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d7fc) {
            ctx->pc = 0x17D820u;
            goto label_17d820;
        }
    }
    ctx->pc = 0x17D804u;
    // 0x17d804: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17d804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d808: 0x0  nop
    ctx->pc = 0x17d808u;
    // NOP
    // 0x17d80c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17d80cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17d810: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17D810u;
    SET_GPR_U32(ctx, 31, 0x17D818u);
    ctx->pc = 0x17D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D810u;
            // 0x17d814: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (runtime->hasFunction(0x17D790u)) {
        auto targetFn = runtime->lookupFunction(0x17D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D818u; }
        if (ctx->pc != 0x17D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFifff_0x17d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D818u; }
        if (ctx->pc != 0x17D818u) { return; }
    }
    ctx->pc = 0x17D818u;
label_17d818:
    // 0x17d818: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17D818u;
    {
        const bool branch_taken_0x17d818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D818u;
            // 0x17d81c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d818) {
            ctx->pc = 0x17D834u;
            goto label_17d834;
        }
    }
    ctx->pc = 0x17D820u;
label_17d820:
    // 0x17d820: 0xc48d0004  lwc1        $f13, 0x4($a0)
    ctx->pc = 0x17d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17d824: 0xc48e0008  lwc1        $f14, 0x8($a0)
    ctx->pc = 0x17d824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x17d828: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17D828u;
    SET_GPR_U32(ctx, 31, 0x17D830u);
    ctx->pc = 0x17D82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D828u;
            // 0x17d82c: 0xc48c0000  lwc1        $f12, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (runtime->hasFunction(0x17D790u)) {
        auto targetFn = runtime->lookupFunction(0x17D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D830u; }
        if (ctx->pc != 0x17D830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFifff_0x17d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D830u; }
        if (ctx->pc != 0x17D830u) { return; }
    }
    ctx->pc = 0x17D830u;
label_17d830:
    // 0x17d830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d834:
    // 0x17d834: 0x3e00008  jr          $ra
    ctx->pc = 0x17D834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D834u;
            // 0x17d838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D83Cu;
}
