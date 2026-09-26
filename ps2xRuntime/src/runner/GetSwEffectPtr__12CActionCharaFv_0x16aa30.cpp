#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSwEffectPtr__12CActionCharaFv
// Address: 0x16aa30 - 0x16aa68
void GetSwEffectPtr__12CActionCharaFv_0x16aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSwEffectPtr__12CActionCharaFv_0x16aa30");
#endif

    switch (ctx->pc) {
        case 0x16aa38u: goto label_16aa38;
        default: break;
    }

    ctx->pc = 0x16aa30u;

    // 0x16aa30: 0x248207e4  addiu       $v0, $a0, 0x7E4
    ctx->pc = 0x16aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2020));
    // 0x16aa34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16aa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16aa38:
    // 0x16aa38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16aa3c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AA3Cu;
    {
        const bool branch_taken_0x16aa3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aa3c) {
            ctx->pc = 0x16AA4Cu;
            goto label_16aa4c;
        }
    }
    ctx->pc = 0x16AA44u;
    // 0x16aa44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16AA44u;
    {
        const bool branch_taken_0x16aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa44) {
            ctx->pc = 0x16AA60u;
            goto label_16aa60;
        }
    }
    ctx->pc = 0x16AA4Cu;
label_16aa4c:
    // 0x16aa4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16aa50: 0x28830009  slti        $v1, $a0, 0x9
    ctx->pc = 0x16aa50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x16aa54: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16AA54u;
    {
        const bool branch_taken_0x16aa54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA54u;
            // 0x16aa58: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa54) {
            ctx->pc = 0x16AA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16aa38;
        }
    }
    ctx->pc = 0x16AA5Cu;
    // 0x16aa5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16aa5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16aa60:
    // 0x16aa60: 0x3e00008  jr          $ra
    ctx->pc = 0x16AA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AA68u;
}
