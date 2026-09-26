#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartyCharaStatus__16CUserDataManagerFi
// Address: 0x19c8f0 - 0x19c930
void GetPartyCharaStatus__16CUserDataManagerFi_0x19c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartyCharaStatus__16CUserDataManagerFi_0x19c8f0");
#endif

    ctx->pc = 0x19c8f0u;

    // 0x19c8f0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x19c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19c8f4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C8F4u;
    {
        const bool branch_taken_0x19c8f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x19C8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8F4u;
            // 0x19c8f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8f4) {
            ctx->pc = 0x19C90Cu;
            goto label_19c90c;
        }
    }
    ctx->pc = 0x19C8FCu;
    // 0x19c8fc: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x19c8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19c900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C900u;
    {
        const bool branch_taken_0x19c900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C900u;
            // 0x19c904: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c900) {
            ctx->pc = 0x19C914u;
            goto label_19c914;
        }
    }
    ctx->pc = 0x19C908u;
    // 0x19c908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c90c:
    // 0x19c90c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C90Cu;
    {
        const bool branch_taken_0x19c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c90c) {
            ctx->pc = 0x19C928u;
            goto label_19c928;
        }
    }
    ctx->pc = 0x19C914u;
label_19c914:
    // 0x19c914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c91c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19c920: 0x94427db2  lhu         $v0, 0x7DB2($v0)
    ctx->pc = 0x19c920u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32178)));
    // 0x19c924: 0x0  nop
    ctx->pc = 0x19c924u;
    // NOP
label_19c928:
    // 0x19c928: 0x3e00008  jr          $ra
    ctx->pc = 0x19C928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C930u;
}
