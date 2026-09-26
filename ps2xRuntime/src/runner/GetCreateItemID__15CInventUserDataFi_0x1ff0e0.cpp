#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCreateItemID__15CInventUserDataFi
// Address: 0x1ff0e0 - 0x1ff114
void GetCreateItemID__15CInventUserDataFi_0x1ff0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCreateItemID__15CInventUserDataFi_0x1ff0e0");
#endif

    ctx->pc = 0x1ff0e0u;

    // 0x1ff0e0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF0E0u;
    {
        const bool branch_taken_0x1ff0e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FF0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0E0u;
            // 0x1ff0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0e0) {
            ctx->pc = 0x1FF0F8u;
            goto label_1ff0f8;
        }
    }
    ctx->pc = 0x1FF0E8u;
    // 0x1ff0e8: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1ff0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ff0ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF0ECu;
    {
        const bool branch_taken_0x1ff0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0ECu;
            // 0x1ff0f0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0ec) {
            ctx->pc = 0x1FF100u;
            goto label_1ff100;
        }
    }
    ctx->pc = 0x1FF0F4u;
    // 0x1ff0f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff0f8:
    // 0x1ff0f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF0F8u;
    {
        const bool branch_taken_0x1ff0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0f8) {
            ctx->pc = 0x1FF10Cu;
            goto label_1ff10c;
        }
    }
    ctx->pc = 0x1FF100u;
label_1ff100:
    // 0x1ff100: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ff100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ff104: 0x844206d8  lh          $v0, 0x6D8($v0)
    ctx->pc = 0x1ff104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1752)));
    // 0x1ff108: 0x0  nop
    ctx->pc = 0x1ff108u;
    // NOP
label_1ff10c:
    // 0x1ff10c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF114u;
}
