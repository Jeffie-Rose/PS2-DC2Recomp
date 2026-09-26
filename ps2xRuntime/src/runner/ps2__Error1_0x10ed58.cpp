#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _Error1
// Address: 0x10ed58 - 0x10ed8c
void ps2__Error1_0x10ed58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Error1_0x10ed58");
#endif

    switch (ctx->pc) {
        case 0x10ed70u: goto label_10ed70;
        case 0x10ed7cu: goto label_10ed7c;
        default: break;
    }

    ctx->pc = 0x10ed58u;

    // 0x10ed58: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x10ed58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x10ed5c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10ed5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10ed60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ed60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed64: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x10ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x10ed68: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x10ED68u;
    SET_GPR_U32(ctx, 31, 0x10ED70u);
    ctx->pc = 0x10ED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED68u;
            // 0x10ed6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED70u; }
        if (ctx->pc != 0x10ED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED70u; }
        if (ctx->pc != 0x10ED70u) { return; }
    }
    ctx->pc = 0x10ED70u;
label_10ed70:
    // 0x10ed70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ed70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed74: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10ED74u;
    SET_GPR_U32(ctx, 31, 0x10ED7Cu);
    ctx->pc = 0x10ED78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED74u;
            // 0x10ed78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED7Cu; }
        if (ctx->pc != 0x10ED7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED7Cu; }
        if (ctx->pc != 0x10ED7Cu) { return; }
    }
    ctx->pc = 0x10ED7Cu;
label_10ed7c:
    // 0x10ed7c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x10ed7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10ed80: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10ed80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10ed84: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED84u;
            // 0x10ed88: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10ED8Cu;
}
