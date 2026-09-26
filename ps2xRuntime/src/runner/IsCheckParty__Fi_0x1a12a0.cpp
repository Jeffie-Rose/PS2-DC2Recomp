#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsCheckParty__Fi
// Address: 0x1a12a0 - 0x1a12dc
void IsCheckParty__Fi_0x1a12a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsCheckParty__Fi_0x1a12a0");
#endif

    switch (ctx->pc) {
        case 0x1a12b4u: goto label_1a12b4;
        case 0x1a12bcu: goto label_1a12bc;
        default: break;
    }

    ctx->pc = 0x1a12a0u;

    // 0x1a12a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a12a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a12a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a12a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a12a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a12ac: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A12ACu;
    SET_GPR_U32(ctx, 31, 0x1A12B4u);
    ctx->pc = 0x1A12B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12ACu;
            // 0x1a12b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12B4u; }
        if (ctx->pc != 0x1A12B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12B4u; }
        if (ctx->pc != 0x1A12B4u) { return; }
    }
    ctx->pc = 0x1A12B4u;
label_1a12b4:
    // 0x1a12b4: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x1A12B4u;
    SET_GPR_U32(ctx, 31, 0x1A12BCu);
    ctx->pc = 0x1A12B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12B4u;
            // 0x1a12b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12BCu; }
        if (ctx->pc != 0x1A12BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12BCu; }
        if (ctx->pc != 0x1A12BCu) { return; }
    }
    ctx->pc = 0x1A12BCu;
label_1a12bc:
    // 0x1a12bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a12c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a12c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a12c4: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a12c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a12c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a12cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a12ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a12d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a12d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a12d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A12D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A12D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12D4u;
            // 0x1a12d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A12DCu;
}
