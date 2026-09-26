#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__7CRippleFv
// Address: 0x2819a0 - 0x2819d8
void Init__7CRippleFv_0x2819a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7CRippleFv_0x2819a0");
#endif

    switch (ctx->pc) {
        case 0x2819bcu: goto label_2819bc;
        default: break;
    }

    ctx->pc = 0x2819a0u;

    // 0x2819a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2819a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2819a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2819a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2819a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2819a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2819ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2819acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2819b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2819b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2819b4: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2819B4u;
    SET_GPR_U32(ctx, 31, 0x2819BCu);
    ctx->pc = 0x2819B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2819B4u;
            // 0x2819b8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819BCu; }
        if (ctx->pc != 0x2819BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819BCu; }
        if (ctx->pc != 0x2819BCu) { return; }
    }
    ctx->pc = 0x2819BCu;
label_2819bc:
    // 0x2819bc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2819bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2819c0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2819c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2819c4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2819c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2819c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2819c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2819cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2819ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2819d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2819D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2819D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819D0u;
            // 0x2819d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2819D8u;
}
