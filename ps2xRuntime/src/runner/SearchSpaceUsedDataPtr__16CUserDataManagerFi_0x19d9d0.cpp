#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSpaceUsedDataPtr__16CUserDataManagerFi
// Address: 0x19d9d0 - 0x19da18
void SearchSpaceUsedDataPtr__16CUserDataManagerFi_0x19d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSpaceUsedDataPtr__16CUserDataManagerFi_0x19d9d0");
#endif

    switch (ctx->pc) {
        case 0x19d9e4u: goto label_19d9e4;
        default: break;
    }

    ctx->pc = 0x19d9d0u;

    // 0x19d9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d9dc: 0xc06762c  jal         func_19D8B0
    ctx->pc = 0x19D9DCu;
    SET_GPR_U32(ctx, 31, 0x19D9E4u);
    ctx->pc = 0x19D9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9DCu;
            // 0x19d9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D8B0u;
    if (runtime->hasFunction(0x19D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9E4u; }
        if (ctx->pc != 0x19D9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFi_0x19d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9E4u; }
        if (ctx->pc != 0x19D9E4u) { return; }
    }
    ctx->pc = 0x19D9E4u;
label_19d9e4:
    // 0x19d9e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D9E4u;
    {
        const bool branch_taken_0x19d9e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9E4u;
            // 0x19d9e8: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9e4) {
            ctx->pc = 0x19D9F4u;
            goto label_19d9f4;
        }
    }
    ctx->pc = 0x19D9ECu;
    // 0x19d9ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19D9ECu;
    {
        const bool branch_taken_0x19d9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9ECu;
            // 0x19d9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9ec) {
            ctx->pc = 0x19DA08u;
            goto label_19da08;
        }
    }
    ctx->pc = 0x19D9F4u;
label_19d9f4:
    // 0x19d9f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d9f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d9fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19da00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19da00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19da04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19da08:
    // 0x19da08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19da08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19da0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19da0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da10: 0x3e00008  jr          $ra
    ctx->pc = 0x19DA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA10u;
            // 0x19da14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DA18u;
}
