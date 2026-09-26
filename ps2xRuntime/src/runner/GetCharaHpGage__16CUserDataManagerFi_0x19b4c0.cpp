#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaHpGage__16CUserDataManagerFi
// Address: 0x19b4c0 - 0x19b510
void GetCharaHpGage__16CUserDataManagerFi_0x19b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaHpGage__16CUserDataManagerFi_0x19b4c0");
#endif

    ctx->pc = 0x19b4c0u;

    // 0x19b4c0: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x19b4c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19b4c4: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B4C4u;
    {
        const bool branch_taken_0x19b4c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4C4u;
            // 0x19b4c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4c4) {
            ctx->pc = 0x19B4DCu;
            goto label_19b4dc;
        }
    }
    ctx->pc = 0x19B4CCu;
    // 0x19b4cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b4d0: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B4D0u;
    {
        const bool branch_taken_0x19b4d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4D0u;
            // 0x19b4d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4d0) {
            ctx->pc = 0x19B4F8u;
            goto label_19b4f8;
        }
    }
    ctx->pc = 0x19B4D8u;
    // 0x19b4d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19b4dc:
    // 0x19b4dc: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B4DCu;
    {
        const bool branch_taken_0x19b4dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4DCu;
            // 0x19b4e0: 0x2402038c  addiu       $v0, $zero, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4dc) {
            ctx->pc = 0x19B4E8u;
            goto label_19b4e8;
        }
    }
    ctx->pc = 0x19B4E4u;
    // 0x19b4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b4e8:
    // 0x19b4e8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x19b4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b4ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19b4f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19B4F0u;
    {
        const bool branch_taken_0x19b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4F0u;
            // 0x19b4f4: 0x24423f48  addiu       $v0, $v0, 0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4f0) {
            ctx->pc = 0x19B508u;
            goto label_19b508;
        }
    }
    ctx->pc = 0x19B4F8u;
label_19b4f8:
    // 0x19b4f8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B4F8u;
    {
        const bool branch_taken_0x19b4f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4F8u;
            // 0x19b4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4f8) {
            ctx->pc = 0x19B508u;
            goto label_19b508;
        }
    }
    ctx->pc = 0x19B500u;
    // 0x19b500: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19B500u;
    {
        const bool branch_taken_0x19b500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B500u;
            // 0x19b504: 0x24824680  addiu       $v0, $a0, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b500) {
            ctx->pc = 0x19B508u;
            goto label_19b508;
        }
    }
    ctx->pc = 0x19B508u;
label_19b508:
    // 0x19b508: 0x3e00008  jr          $ra
    ctx->pc = 0x19B508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B510u;
}
