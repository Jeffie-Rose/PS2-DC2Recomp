#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInsideScreen__FP9mgVu0FBOX
// Address: 0x135e90 - 0x135ed4
void mgInsideScreen__FP9mgVu0FBOX_0x135e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInsideScreen__FP9mgVu0FBOX_0x135e90");
#endif

    switch (ctx->pc) {
        case 0x135ea8u: goto label_135ea8;
        case 0x135eb8u: goto label_135eb8;
        case 0x135ec4u: goto label_135ec4;
        default: break;
    }

    ctx->pc = 0x135e90u;

    // 0x135e90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x135e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x135e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x135e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ea0: 0xc04c050  jal         func_130140
    ctx->pc = 0x135EA0u;
    SET_GPR_U32(ctx, 31, 0x135EA8u);
    ctx->pc = 0x135EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135EA0u;
            // 0x135ea4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135EA8u; }
        if (ctx->pc != 0x135EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135EA8u; }
        if (ctx->pc != 0x135EA8u) { return; }
    }
    ctx->pc = 0x135EA8u;
label_135ea8:
    // 0x135ea8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x135ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x135eac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135eb0: 0xc04bc74  jal         func_12F1D0
    ctx->pc = 0x135EB0u;
    SET_GPR_U32(ctx, 31, 0x135EB8u);
    ctx->pc = 0x135EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135EB0u;
            // 0x135eb4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F1D0u;
    if (runtime->hasFunction(0x12F1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135EB8u; }
        if (ctx->pc != 0x135EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateBox8__FPA4_fPfPf_0x12f1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135EB8u; }
        if (ctx->pc != 0x135EB8u) { return; }
    }
    ctx->pc = 0x135EB8u;
label_135eb8:
    // 0x135eb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x135eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x135ebc: 0xc04d7e0  jal         func_135F80
    ctx->pc = 0x135EBCu;
    SET_GPR_U32(ctx, 31, 0x135EC4u);
    ctx->pc = 0x135EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135EBCu;
            // 0x135ec0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F80u;
    if (runtime->hasFunction(0x135F80u)) {
        auto targetFn = runtime->lookupFunction(0x135F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135EC4u; }
        if (ctx->pc != 0x135EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FPA4_fPA4_f_0x135f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135EC4u; }
        if (ctx->pc != 0x135EC4u) { return; }
    }
    ctx->pc = 0x135EC4u;
label_135ec4:
    // 0x135ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x135ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135ECCu;
            // 0x135ed0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135ED4u;
}
