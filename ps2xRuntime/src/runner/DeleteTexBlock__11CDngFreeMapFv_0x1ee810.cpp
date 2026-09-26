#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteTexBlock__11CDngFreeMapFv
// Address: 0x1ee810 - 0x1ee83c
void DeleteTexBlock__11CDngFreeMapFv_0x1ee810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteTexBlock__11CDngFreeMapFv_0x1ee810");
#endif

    switch (ctx->pc) {
        case 0x1ee830u: goto label_1ee830;
        default: break;
    }

    ctx->pc = 0x1ee810u;

    // 0x1ee810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ee814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee818: 0x848500d0  lh          $a1, 0xD0($a0)
    ctx->pc = 0x1ee818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1ee81c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ee81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1ee820: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE820u;
    {
        const bool branch_taken_0x1ee820 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1EE824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE820u;
            // 0x1ee824: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee820) {
            ctx->pc = 0x1EE830u;
            goto label_1ee830;
        }
    }
    ctx->pc = 0x1EE828u;
    // 0x1ee828: 0xc04b950  jal         func_12E540
    ctx->pc = 0x1EE828u;
    SET_GPR_U32(ctx, 31, 0x1EE830u);
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE830u; }
        if (ctx->pc != 0x1EE830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE830u; }
        if (ctx->pc != 0x1EE830u) { return; }
    }
    ctx->pc = 0x1EE830u;
label_1ee830:
    // 0x1ee830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee834: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE834u;
            // 0x1ee838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE83Cu;
}
