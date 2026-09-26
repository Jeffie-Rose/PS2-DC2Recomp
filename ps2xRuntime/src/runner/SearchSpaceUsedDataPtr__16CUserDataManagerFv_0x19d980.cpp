#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSpaceUsedDataPtr__16CUserDataManagerFv
// Address: 0x19d980 - 0x19d9c8
void SearchSpaceUsedDataPtr__16CUserDataManagerFv_0x19d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSpaceUsedDataPtr__16CUserDataManagerFv_0x19d980");
#endif

    switch (ctx->pc) {
        case 0x19d994u: goto label_19d994;
        default: break;
    }

    ctx->pc = 0x19d980u;

    // 0x19d980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d98c: 0xc067610  jal         func_19D840
    ctx->pc = 0x19D98Cu;
    SET_GPR_U32(ctx, 31, 0x19D994u);
    ctx->pc = 0x19D990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D98Cu;
            // 0x19d990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D994u; }
        if (ctx->pc != 0x19D994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D994u; }
        if (ctx->pc != 0x19D994u) { return; }
    }
    ctx->pc = 0x19D994u;
label_19d994:
    // 0x19d994: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D994u;
    {
        const bool branch_taken_0x19d994 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19D998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D994u;
            // 0x19d998: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d994) {
            ctx->pc = 0x19D9A4u;
            goto label_19d9a4;
        }
    }
    ctx->pc = 0x19D99Cu;
    // 0x19d99c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19D99Cu;
    {
        const bool branch_taken_0x19d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D99Cu;
            // 0x19d9a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d99c) {
            ctx->pc = 0x19D9B8u;
            goto label_19d9b8;
        }
    }
    ctx->pc = 0x19D9A4u;
label_19d9a4:
    // 0x19d9a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d9a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d9ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d9b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d9b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19d9b8:
    // 0x19d9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9C0u;
            // 0x19d9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D9C8u;
}
