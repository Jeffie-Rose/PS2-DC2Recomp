#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PhotoAddProjection__Fv
// Address: 0x30e520 - 0x30e550
void PhotoAddProjection__Fv_0x30e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PhotoAddProjection__Fv_0x30e520");
#endif

    switch (ctx->pc) {
        case 0x30e530u: goto label_30e530;
        default: break;
    }

    ctx->pc = 0x30e520u;

    // 0x30e520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e528: 0xc0c39a0  jal         func_30E680
    ctx->pc = 0x30E528u;
    SET_GPR_U32(ctx, 31, 0x30E530u);
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E530u; }
        if (ctx->pc != 0x30E530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E530u; }
        if (ctx->pc != 0x30E530u) { return; }
    }
    ctx->pc = 0x30E530u;
label_30e530:
    // 0x30e530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E530u;
    {
        const bool branch_taken_0x30e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e530) {
            ctx->pc = 0x30E540u;
            goto label_30e540;
        }
    }
    ctx->pc = 0x30E538u;
    // 0x30e538: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30E538u;
    {
        const bool branch_taken_0x30e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E538u;
            // 0x30e53c: 0xc780a224  lwc1        $f0, -0x5DDC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e538) {
            ctx->pc = 0x30E544u;
            goto label_30e544;
        }
    }
    ctx->pc = 0x30E540u;
label_30e540:
    // 0x30e540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30e540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30e544:
    // 0x30e544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e548: 0x3e00008  jr          $ra
    ctx->pc = 0x30E548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E548u;
            // 0x30e54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E550u;
}
