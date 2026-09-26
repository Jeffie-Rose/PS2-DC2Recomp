#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ZERO_VECTOR__FP12RS_STACKDATAi
// Address: 0x2767b0 - 0x2767e8
void ps2__ZERO_VECTOR__FP12RS_STACKDATAi_0x2767b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ZERO_VECTOR__FP12RS_STACKDATAi_0x2767b0");
#endif

    switch (ctx->pc) {
        case 0x2767c4u: goto label_2767c4;
        case 0x2767d0u: goto label_2767d0;
        case 0x2767d8u: goto label_2767d8;
        default: break;
    }

    ctx->pc = 0x2767b0u;

    // 0x2767b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2767b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2767b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2767b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2767b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2767b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2767bc: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2767BCu;
    SET_GPR_U32(ctx, 31, 0x2767C4u);
    ctx->pc = 0x2767C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2767BCu;
            // 0x2767c0: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2767C4u; }
        if (ctx->pc != 0x2767C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2767C4u; }
        if (ctx->pc != 0x2767C4u) { return; }
    }
    ctx->pc = 0x2767C4u;
label_2767c4:
    // 0x2767c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2767c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767c8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2767C8u;
    SET_GPR_U32(ctx, 31, 0x2767D0u);
    ctx->pc = 0x2767CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2767C8u;
            // 0x2767cc: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2767D0u; }
        if (ctx->pc != 0x2767D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2767D0u; }
        if (ctx->pc != 0x2767D0u) { return; }
    }
    ctx->pc = 0x2767D0u;
label_2767d0:
    // 0x2767d0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2767D0u;
    SET_GPR_U32(ctx, 31, 0x2767D8u);
    ctx->pc = 0x2767D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2767D0u;
            // 0x2767d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2767D8u; }
        if (ctx->pc != 0x2767D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2767D8u; }
        if (ctx->pc != 0x2767D8u) { return; }
    }
    ctx->pc = 0x2767D8u;
label_2767d8:
    // 0x2767d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2767d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2767dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2767dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2767e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2767E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2767E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2767E0u;
            // 0x2767e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2767E8u;
}
