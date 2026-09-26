#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScoopDataTable__Fi
// Address: 0x1ff270 - 0x1ff2bc
void GetScoopDataTable__Fi_0x1ff270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScoopDataTable__Fi_0x1ff270");
#endif

    switch (ctx->pc) {
        case 0x1ff280u: goto label_1ff280;
        default: break;
    }

    ctx->pc = 0x1ff270u;

    // 0x1ff270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff278: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1ff278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1ff27c: 0x2463e9c0  addiu       $v1, $v1, -0x1640
    ctx->pc = 0x1ff27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961600));
label_1ff280:
    // 0x1ff280: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1ff280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ff284: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1ff284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff288: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF288u;
    {
        const bool branch_taken_0x1ff288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF288u;
            // 0x1ff28c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff288) {
            ctx->pc = 0x1FF2A0u;
            goto label_1ff2a0;
        }
    }
    ctx->pc = 0x1FF290u;
    // 0x1ff290: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ff290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ff294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ff294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ff298: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF298u;
    {
        const bool branch_taken_0x1ff298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF298u;
            // 0x1ff29c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff298) {
            ctx->pc = 0x1FF2B4u;
            goto label_1ff2b4;
        }
    }
    ctx->pc = 0x1FF2A0u;
label_1ff2a0:
    // 0x1ff2a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff2a4: 0x28a20035  slti        $v0, $a1, 0x35
    ctx->pc = 0x1ff2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x1ff2a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FF2A8u;
    {
        const bool branch_taken_0x1ff2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2A8u;
            // 0x1ff2ac: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2a8) {
            ctx->pc = 0x1FF280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff280;
        }
    }
    ctx->pc = 0x1FF2B0u;
    // 0x1ff2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2b4:
    // 0x1ff2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF2BCu;
}
