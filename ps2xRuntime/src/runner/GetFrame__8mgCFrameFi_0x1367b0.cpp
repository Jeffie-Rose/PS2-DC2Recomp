#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFrame__8mgCFrameFi
// Address: 0x1367b0 - 0x1367f4
void GetFrame__8mgCFrameFi_0x1367b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFrame__8mgCFrameFi_0x1367b0");
#endif

    ctx->pc = 0x1367b0u;

    // 0x1367b0: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1367B0u;
    {
        const bool branch_taken_0x1367b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1367B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1367B0u;
            // 0x1367b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367b0) {
            ctx->pc = 0x1367D8u;
            goto label_1367d8;
        }
    }
    ctx->pc = 0x1367B8u;
    // 0x1367b8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1367b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1367bc: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x1367bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1367c0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1367C0u;
    {
        const bool branch_taken_0x1367c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1367c0) {
            ctx->pc = 0x1367D4u;
            goto label_1367d4;
        }
    }
    ctx->pc = 0x1367C8u;
    // 0x1367c8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x1367c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1367cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1367CCu;
    {
        const bool branch_taken_0x1367cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1367D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1367CCu;
            // 0x1367d0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367cc) {
            ctx->pc = 0x1367E0u;
            goto label_1367e0;
        }
    }
    ctx->pc = 0x1367D4u;
label_1367d4:
    // 0x1367d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1367d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1367d8:
    // 0x1367d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1367D8u;
    {
        const bool branch_taken_0x1367d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1367d8) {
            ctx->pc = 0x1367ECu;
            goto label_1367ec;
        }
    }
    ctx->pc = 0x1367E0u;
label_1367e0:
    // 0x1367e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1367e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1367e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1367e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1367e8: 0x0  nop
    ctx->pc = 0x1367e8u;
    // NOP
label_1367ec:
    // 0x1367ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1367ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1367F4u;
}
