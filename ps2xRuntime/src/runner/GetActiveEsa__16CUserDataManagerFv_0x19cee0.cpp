#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveEsa__16CUserDataManagerFv
// Address: 0x19cee0 - 0x19cf10
void GetActiveEsa__16CUserDataManagerFv_0x19cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveEsa__16CUserDataManagerFv_0x19cee0");
#endif

    switch (ctx->pc) {
        case 0x19cef4u: goto label_19cef4;
        case 0x19cf00u: goto label_19cf00;
        default: break;
    }

    ctx->pc = 0x19cee0u;

    // 0x19cee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ceec: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x19CEECu;
    SET_GPR_U32(ctx, 31, 0x19CEF4u);
    ctx->pc = 0x19CEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEECu;
            // 0x19cef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEF4u; }
        if (ctx->pc != 0x19CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CEF4u; }
        if (ctx->pc != 0x19CEF4u) { return; }
    }
    ctx->pc = 0x19CEF4u;
label_19cef4:
    // 0x19cef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cef8: 0xc0673c4  jal         func_19CF10
    ctx->pc = 0x19CEF8u;
    SET_GPR_U32(ctx, 31, 0x19CF00u);
    ctx->pc = 0x19CEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEF8u;
            // 0x19cefc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF10u;
    if (runtime->hasFunction(0x19CF10u)) {
        auto targetFn = runtime->lookupFunction(0x19CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF00u; }
        if (ctx->pc != 0x19CF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFi_0x19cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CF00u; }
        if (ctx->pc != 0x19CF00u) { return; }
    }
    ctx->pc = 0x19CF00u;
label_19cf00:
    // 0x19cf00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf08: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF08u;
            // 0x19cf0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CF10u;
}
