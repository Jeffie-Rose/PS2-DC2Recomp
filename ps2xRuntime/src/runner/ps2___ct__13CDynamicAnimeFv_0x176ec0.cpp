#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13CDynamicAnimeFv
// Address: 0x176ec0 - 0x176ee8
void ps2___ct__13CDynamicAnimeFv_0x176ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13CDynamicAnimeFv_0x176ec0");
#endif

    switch (ctx->pc) {
        case 0x176ed4u: goto label_176ed4;
        default: break;
    }

    ctx->pc = 0x176ec0u;

    // 0x176ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176ecc: 0xc05e8a8  jal         func_17A2A0
    ctx->pc = 0x176ECCu;
    SET_GPR_U32(ctx, 31, 0x176ED4u);
    ctx->pc = 0x176ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176ECCu;
            // 0x176ed0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A2A0u;
    if (runtime->hasFunction(0x17A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x17A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176ED4u; }
        if (ctx->pc != 0x176ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CDynamicAnimeFv_0x17a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176ED4u; }
        if (ctx->pc != 0x176ED4u) { return; }
    }
    ctx->pc = 0x176ED4u;
label_176ed4:
    // 0x176ed4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x176ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x176EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176EE0u;
            // 0x176ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176EE8u;
}
