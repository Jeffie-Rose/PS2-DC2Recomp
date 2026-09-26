#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetProjection__Ff
// Address: 0x143620 - 0x14365c
void mgSetProjection__Ff_0x143620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetProjection__Ff_0x143620");
#endif

    switch (ctx->pc) {
        case 0x14363cu: goto label_14363c;
        case 0x143650u: goto label_143650;
        default: break;
    }

    ctx->pc = 0x143620u;

    // 0x143620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143624: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14362c: 0xc42d1d48  lwc1        $f13, 0x1D48($at)
    ctx->pc = 0x14362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x143630: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143634: 0xc050d80  jal         func_143600
    ctx->pc = 0x143634u;
    SET_GPR_U32(ctx, 31, 0x14363Cu);
    ctx->pc = 0x143638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143634u;
            // 0x143638: 0xc42e1d58  lwc1        $f14, 0x1D58($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (runtime->hasFunction(0x143600u)) {
        auto targetFn = runtime->lookupFunction(0x143600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14363Cu; }
        if (ctx->pc != 0x14363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRenderInfo__Ffff_0x143600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14363Cu; }
        if (ctx->pc != 0x14363Cu) { return; }
    }
    ctx->pc = 0x14363Cu;
label_14363c:
    // 0x14363c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x14363cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143640: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x143640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x143644: 0x24841060  addiu       $a0, $a0, 0x1060
    ctx->pc = 0x143644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4192));
    // 0x143648: 0xc050e28  jal         func_1438A0
    ctx->pc = 0x143648u;
    SET_GPR_U32(ctx, 31, 0x143650u);
    ctx->pc = 0x14364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143648u;
            // 0x14364c: 0x24a51260  addiu       $a1, $a1, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143650u; }
        if (ctx->pc != 0x143650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143650u; }
        if (ctx->pc != 0x143650u) { return; }
    }
    ctx->pc = 0x143650u;
label_143650:
    // 0x143650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143654: 0x3e00008  jr          $ra
    ctx->pc = 0x143654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143654u;
            // 0x143658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14365Cu;
}
