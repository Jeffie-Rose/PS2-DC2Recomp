#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAnalyzeSrc__9CEditDataFi
// Address: 0x2aa0b0 - 0x2aa0f4
void GetAnalyzeSrc__9CEditDataFi_0x2aa0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAnalyzeSrc__9CEditDataFi_0x2aa0b0");
#endif

    ctx->pc = 0x2aa0b0u;

    // 0x2aa0b0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA0B0u;
    {
        const bool branch_taken_0x2aa0b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2AA0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA0B0u;
            // 0x2aa0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0b0) {
            ctx->pc = 0x2AA0C8u;
            goto label_2aa0c8;
        }
    }
    ctx->pc = 0x2AA0B8u;
    // 0x2aa0b8: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x2aa0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2aa0bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA0BCu;
    {
        const bool branch_taken_0x2aa0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA0BCu;
            // 0x2aa0c0: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0bc) {
            ctx->pc = 0x2AA0D0u;
            goto label_2aa0d0;
        }
    }
    ctx->pc = 0x2AA0C4u;
    // 0x2aa0c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0c8:
    // 0x2aa0c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA0C8u;
    {
        const bool branch_taken_0x2aa0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa0c8) {
            ctx->pc = 0x2AA0ECu;
            goto label_2aa0ec;
        }
    }
    ctx->pc = 0x2AA0D0u;
label_2aa0d0:
    // 0x2aa0d0: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2aa0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x2aa0d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2aa0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aa0d8: 0x24426300  addiu       $v0, $v0, 0x6300
    ctx->pc = 0x2aa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25344));
    // 0x2aa0dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aa0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aa0e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2aa0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aa0e4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2aa0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2aa0e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa0ec:
    // 0x2aa0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA0F4u;
}
