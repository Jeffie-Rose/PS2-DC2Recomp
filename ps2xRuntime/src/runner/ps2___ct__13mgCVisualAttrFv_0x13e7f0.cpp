#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13mgCVisualAttrFv
// Address: 0x13e7f0 - 0x13e818
void ps2___ct__13mgCVisualAttrFv_0x13e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13mgCVisualAttrFv_0x13e7f0");
#endif

    switch (ctx->pc) {
        case 0x13e804u: goto label_13e804;
        default: break;
    }

    ctx->pc = 0x13e7f0u;

    // 0x13e7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e7f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e7f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e7fc: 0xc04f9ec  jal         func_13E7B0
    ctx->pc = 0x13E7FCu;
    SET_GPR_U32(ctx, 31, 0x13E804u);
    ctx->pc = 0x13E800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7FCu;
            // 0x13e800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7B0u;
    if (runtime->hasFunction(0x13E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E804u; }
        if (ctx->pc != 0x13E804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13mgCVisualAttrFv_0x13e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E804u; }
        if (ctx->pc != 0x13E804u) { return; }
    }
    ctx->pc = 0x13E804u;
label_13e804:
    // 0x13e804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e810: 0x3e00008  jr          $ra
    ctx->pc = 0x13E810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E810u;
            // 0x13e814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E818u;
}
