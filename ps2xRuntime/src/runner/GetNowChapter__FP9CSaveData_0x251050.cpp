#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowChapter__FP9CSaveData
// Address: 0x251050 - 0x2510c0
void GetNowChapter__FP9CSaveData_0x251050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowChapter__FP9CSaveData_0x251050");
#endif

    ctx->pc = 0x251050u;

    // 0x251050: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251050u;
    {
        const bool branch_taken_0x251050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251050u;
            // 0x251054: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251050) {
            ctx->pc = 0x251060u;
            goto label_251060;
        }
    }
    ctx->pc = 0x251058u;
    // 0x251058: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x251058u;
    {
        const bool branch_taken_0x251058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251058) {
            ctx->pc = 0x2510B8u;
            goto label_2510b8;
        }
    }
    ctx->pc = 0x251060u;
label_251060:
    // 0x251060: 0x8c831a08  lw          $v1, 0x1A08($a0)
    ctx->pc = 0x251060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6664)));
    // 0x251064: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x251064u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x251068: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x251068u;
    {
        const bool branch_taken_0x251068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251068u;
            // 0x25106c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251068) {
            ctx->pc = 0x251078u;
            goto label_251078;
        }
    }
    ctx->pc = 0x251070u;
    // 0x251070: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x251070u;
    {
        const bool branch_taken_0x251070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251070u;
            // 0x251074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251070) {
            ctx->pc = 0x2510B8u;
            goto label_2510b8;
        }
    }
    ctx->pc = 0x251078u;
label_251078:
    // 0x251078: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251078u;
    {
        const bool branch_taken_0x251078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25107Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251078u;
            // 0x25107c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251078) {
            ctx->pc = 0x251090u;
            goto label_251090;
        }
    }
    ctx->pc = 0x251080u;
    // 0x251080: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x251080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x251084: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251084u;
    {
        const bool branch_taken_0x251084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x251088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251084u;
            // 0x251088: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251084) {
            ctx->pc = 0x251098u;
            goto label_251098;
        }
    }
    ctx->pc = 0x25108Cu;
    // 0x25108c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251090:
    // 0x251090: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x251090u;
    {
        const bool branch_taken_0x251090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251090) {
            ctx->pc = 0x2510B8u;
            goto label_2510b8;
        }
    }
    ctx->pc = 0x251098u;
label_251098:
    // 0x251098: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251098u;
    {
        const bool branch_taken_0x251098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25109Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251098u;
            // 0x25109c: 0x28620064  slti        $v0, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251098) {
            ctx->pc = 0x2510A8u;
            goto label_2510a8;
        }
    }
    ctx->pc = 0x2510A0u;
    // 0x2510a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2510A0u;
    {
        const bool branch_taken_0x2510a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2510A0u;
            // 0x2510a4: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510a0) {
            ctx->pc = 0x2510B8u;
            goto label_2510b8;
        }
    }
    ctx->pc = 0x2510A8u;
label_2510a8:
    // 0x2510a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2510A8u;
    {
        const bool branch_taken_0x2510a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2510ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2510A8u;
            // 0x2510ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510a8) {
            ctx->pc = 0x2510B8u;
            goto label_2510b8;
        }
    }
    ctx->pc = 0x2510B0u;
    // 0x2510b0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2510B0u;
    {
        const bool branch_taken_0x2510b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2510B0u;
            // 0x2510b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510b0) {
            ctx->pc = 0x2510B8u;
            goto label_2510b8;
        }
    }
    ctx->pc = 0x2510B8u;
label_2510b8:
    // 0x2510b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2510B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2510C0u;
}
