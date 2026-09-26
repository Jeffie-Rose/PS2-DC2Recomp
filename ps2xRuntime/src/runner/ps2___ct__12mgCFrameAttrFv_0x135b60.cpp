#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__12mgCFrameAttrFv
// Address: 0x135b60 - 0x135b90
void ps2___ct__12mgCFrameAttrFv_0x135b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__12mgCFrameAttrFv_0x135b60");
#endif

    switch (ctx->pc) {
        case 0x135b74u: goto label_135b74;
        case 0x135b7cu: goto label_135b7c;
        default: break;
    }

    ctx->pc = 0x135b60u;

    // 0x135b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135b6c: 0xc04f9fc  jal         func_13E7F0
    ctx->pc = 0x135B6Cu;
    SET_GPR_U32(ctx, 31, 0x135B74u);
    ctx->pc = 0x135B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B6Cu;
            // 0x135b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F0u;
    if (runtime->hasFunction(0x13E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B74u; }
        if (ctx->pc != 0x135B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13mgCVisualAttrFv_0x13e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B74u; }
        if (ctx->pc != 0x135B74u) { return; }
    }
    ctx->pc = 0x135B74u;
label_135b74:
    // 0x135b74: 0xc04d6b4  jal         func_135AD0
    ctx->pc = 0x135B74u;
    SET_GPR_U32(ctx, 31, 0x135B7Cu);
    ctx->pc = 0x135B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B74u;
            // 0x135b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135AD0u;
    if (runtime->hasFunction(0x135AD0u)) {
        auto targetFn = runtime->lookupFunction(0x135AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B7Cu; }
        if (ctx->pc != 0x135B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12mgCFrameAttrFv_0x135ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B7Cu; }
        if (ctx->pc != 0x135B7Cu) { return; }
    }
    ctx->pc = 0x135B7Cu;
label_135b7c:
    // 0x135b7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x135b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135b88: 0x3e00008  jr          $ra
    ctx->pc = 0x135B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135B88u;
            // 0x135b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135B90u;
}
