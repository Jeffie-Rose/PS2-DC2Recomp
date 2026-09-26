#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15CHitEffectImageFv
// Address: 0x1c5990 - 0x1c59cc
void ps2___ct__15CHitEffectImageFv_0x1c5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15CHitEffectImageFv_0x1c5990");
#endif

    switch (ctx->pc) {
        case 0x1c59b8u: goto label_1c59b8;
        default: break;
    }

    ctx->pc = 0x1c5990u;

    // 0x1c5990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c599c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c599cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c59a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c59a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c59a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c59a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c59acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59b0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1C59B0u;
    SET_GPR_U32(ctx, 31, 0x1C59B8u);
    ctx->pc = 0x1C59B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59B0u;
            // 0x1c59b4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C59B8u; }
        if (ctx->pc != 0x1C59B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C59B8u; }
        if (ctx->pc != 0x1C59B8u) { return; }
    }
    ctx->pc = 0x1C59B8u;
label_1c59b8:
    // 0x1c59b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c59b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c59bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c59c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c59c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c59c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C59C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C59C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59C4u;
            // 0x1c59c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C59CCu;
}
