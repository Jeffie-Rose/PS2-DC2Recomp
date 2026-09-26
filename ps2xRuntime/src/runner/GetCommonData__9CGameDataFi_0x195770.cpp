#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCommonData__9CGameDataFi
// Address: 0x195770 - 0x1957d4
void GetCommonData__9CGameDataFi_0x195770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCommonData__9CGameDataFi_0x195770");
#endif

    ctx->pc = 0x195770u;

    // 0x195770: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195770u;
    {
        const bool branch_taken_0x195770 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x195774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195770u;
            // 0x195774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195770) {
            ctx->pc = 0x195784u;
            goto label_195784;
        }
    }
    ctx->pc = 0x195778u;
    // 0x195778: 0x28a10200  slti        $at, $a1, 0x200
    ctx->pc = 0x195778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x19577c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19577Cu;
    {
        const bool branch_taken_0x19577c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19577c) {
            ctx->pc = 0x19578Cu;
            goto label_19578c;
        }
    }
    ctx->pc = 0x195784u;
label_195784:
    // 0x195784: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x195784u;
    {
        const bool branch_taken_0x195784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195784) {
            ctx->pc = 0x1957CCu;
            goto label_1957cc;
        }
    }
    ctx->pc = 0x19578Cu;
label_19578c:
    // 0x19578c: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x19578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x195790: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x195790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x195794: 0x24421b70  addiu       $v0, $v0, 0x1B70
    ctx->pc = 0x195794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7024));
    // 0x195798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19579c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x19579cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1957a0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1957A0u;
    {
        const bool branch_taken_0x1957a0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1957A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1957A0u;
            // 0x1957a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957a0) {
            ctx->pc = 0x1957B0u;
            goto label_1957b0;
        }
    }
    ctx->pc = 0x1957A8u;
    // 0x1957a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1957A8u;
    {
        const bool branch_taken_0x1957a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1957a8) {
            ctx->pc = 0x1957CCu;
            goto label_1957cc;
        }
    }
    ctx->pc = 0x1957B0u;
label_1957b0:
    // 0x1957b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1957b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1957b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1957b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1957b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1957bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1957bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1957c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1957c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1957c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1957c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1957c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1957c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1957cc:
    // 0x1957cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1957CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1957D4u;
}
