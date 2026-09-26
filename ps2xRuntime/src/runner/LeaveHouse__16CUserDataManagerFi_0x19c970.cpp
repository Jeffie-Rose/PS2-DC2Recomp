#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LeaveHouse__16CUserDataManagerFi
// Address: 0x19c970 - 0x19c9dc
void LeaveHouse__16CUserDataManagerFi_0x19c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LeaveHouse__16CUserDataManagerFi_0x19c970");
#endif

    switch (ctx->pc) {
        case 0x19c990u: goto label_19c990;
        case 0x19c9b0u: goto label_19c9b0;
        case 0x19c9c4u: goto label_19c9c4;
        default: break;
    }

    ctx->pc = 0x19c970u;

    // 0x19c970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19c974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c980: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19c980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c984: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19c984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c988: 0xc06723c  jal         func_19C8F0
    ctx->pc = 0x19C988u;
    SET_GPR_U32(ctx, 31, 0x19C990u);
    ctx->pc = 0x19C98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C988u;
            // 0x19c98c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F0u;
    if (runtime->hasFunction(0x19C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C990u; }
        if (ctx->pc != 0x19C990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaStatus__16CUserDataManagerFi_0x19c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C990u; }
        if (ctx->pc != 0x19C990u) { return; }
    }
    ctx->pc = 0x19C990u;
label_19c990:
    // 0x19c990: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19c994: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C994u;
    {
        const bool branch_taken_0x19c994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C994u;
            // 0x19c998: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c994) {
            ctx->pc = 0x19C9A0u;
            goto label_19c9a0;
        }
    }
    ctx->pc = 0x19C99Cu;
    // 0x19c99c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19c99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c9a0:
    // 0x19c9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9a8: 0xc0671d4  jal         func_19C750
    ctx->pc = 0x19C9A8u;
    SET_GPR_U32(ctx, 31, 0x19C9B0u);
    ctx->pc = 0x19C9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9A8u;
            // 0x19c9ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9B0u; }
        if (ctx->pc != 0x19C9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9B0u; }
        if (ctx->pc != 0x19C9B0u) { return; }
    }
    ctx->pc = 0x19C9B0u;
label_19c9b0:
    // 0x19c9b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C9B0u;
    {
        const bool branch_taken_0x19c9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9B0u;
            // 0x19c9b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9b0) {
            ctx->pc = 0x19C9C4u;
            goto label_19c9c4;
        }
    }
    ctx->pc = 0x19C9B8u;
    // 0x19c9b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9bc: 0xc0671d4  jal         func_19C750
    ctx->pc = 0x19C9BCu;
    SET_GPR_U32(ctx, 31, 0x19C9C4u);
    ctx->pc = 0x19C9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9BCu;
            // 0x19c9c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9C4u; }
        if (ctx->pc != 0x19C9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9C4u; }
        if (ctx->pc != 0x19C9C4u) { return; }
    }
    ctx->pc = 0x19C9C4u;
label_19c9c4:
    // 0x19c9c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19c9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c9c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c9c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c9cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c9d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9D4u;
            // 0x19c9d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C9DCu;
}
