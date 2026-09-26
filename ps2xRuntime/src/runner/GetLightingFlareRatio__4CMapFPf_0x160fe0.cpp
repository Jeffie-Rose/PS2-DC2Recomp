#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightingFlareRatio__4CMapFPf
// Address: 0x160fe0 - 0x161008
void GetLightingFlareRatio__4CMapFPf_0x160fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightingFlareRatio__4CMapFPf_0x160fe0");
#endif

    switch (ctx->pc) {
        case 0x160ff4u: goto label_160ff4;
        default: break;
    }

    ctx->pc = 0x160fe0u;

    // 0x160fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160fec: 0xc05839c  jal         func_160E70
    ctx->pc = 0x160FECu;
    SET_GPR_U32(ctx, 31, 0x160FF4u);
    ctx->pc = 0x160FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160FECu;
            // 0x160ff0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160E70u;
    if (runtime->hasFunction(0x160E70u)) {
        auto targetFn = runtime->lookupFunction(0x160E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FF4u; }
        if (ctx->pc != 0x160FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingRatio__4CMapFPf_0x160e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FF4u; }
        if (ctx->pc != 0x160FF4u) { return; }
    }
    ctx->pc = 0x160FF4u;
label_160ff4:
    // 0x160ff4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x160ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x160ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161000: 0x3e00008  jr          $ra
    ctx->pc = 0x161000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161000u;
            // 0x161004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161008u;
}
