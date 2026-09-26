#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9C3DSplineFv
// Address: 0x255bc0 - 0x255be8
void ps2___ct__9C3DSplineFv_0x255bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9C3DSplineFv_0x255bc0");
#endif

    switch (ctx->pc) {
        case 0x255bd4u: goto label_255bd4;
        default: break;
    }

    ctx->pc = 0x255bc0u;

    // 0x255bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255bcc: 0xc0956fc  jal         func_255BF0
    ctx->pc = 0x255BCCu;
    SET_GPR_U32(ctx, 31, 0x255BD4u);
    ctx->pc = 0x255BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255BCCu;
            // 0x255bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255BF0u;
    if (runtime->hasFunction(0x255BF0u)) {
        auto targetFn = runtime->lookupFunction(0x255BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255BD4u; }
        if (ctx->pc != 0x255BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9C3DSplineFv_0x255bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255BD4u; }
        if (ctx->pc != 0x255BD4u) { return; }
    }
    ctx->pc = 0x255BD4u;
label_255bd4:
    // 0x255bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x255bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x255bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255be0: 0x3e00008  jr          $ra
    ctx->pc = 0x255BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255BE0u;
            // 0x255be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255BE8u;
}
