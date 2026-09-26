#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__11dbgCJISFontFv
// Address: 0x186260 - 0x186288
void ps2___ct__11dbgCJISFontFv_0x186260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__11dbgCJISFontFv_0x186260");
#endif

    switch (ctx->pc) {
        case 0x186274u: goto label_186274;
        default: break;
    }

    ctx->pc = 0x186260u;

    // 0x186260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18626c: 0xc0618a4  jal         func_186290
    ctx->pc = 0x18626Cu;
    SET_GPR_U32(ctx, 31, 0x186274u);
    ctx->pc = 0x186270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18626Cu;
            // 0x186270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186290u;
    if (runtime->hasFunction(0x186290u)) {
        auto targetFn = runtime->lookupFunction(0x186290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186274u; }
        if (ctx->pc != 0x186274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11dbgCJISFontFv_0x186290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186274u; }
        if (ctx->pc != 0x186274u) { return; }
    }
    ctx->pc = 0x186274u;
label_186274:
    // 0x186274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18627c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18627cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186280: 0x3e00008  jr          $ra
    ctx->pc = 0x186280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186280u;
            // 0x186284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186288u;
}
