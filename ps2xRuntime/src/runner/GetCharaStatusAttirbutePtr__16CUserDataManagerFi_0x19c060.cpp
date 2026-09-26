#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaStatusAttirbutePtr__16CUserDataManagerFi
// Address: 0x19c060 - 0x19c0b8
void GetCharaStatusAttirbutePtr__16CUserDataManagerFi_0x19c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaStatusAttirbutePtr__16CUserDataManagerFi_0x19c060");
#endif

    ctx->pc = 0x19c060u;

    // 0x19c060: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C060u;
    {
        const bool branch_taken_0x19c060 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19C064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C060u;
            // 0x19c064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c060) {
            ctx->pc = 0x19C074u;
            goto label_19c074;
        }
    }
    ctx->pc = 0x19C068u;
    // 0x19c068: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x19c068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19c06c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C06Cu;
    {
        const bool branch_taken_0x19c06c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C06Cu;
            // 0x19c070: 0x28a10002  slti        $at, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c06c) {
            ctx->pc = 0x19C07Cu;
            goto label_19c07c;
        }
    }
    ctx->pc = 0x19C074u;
label_19c074:
    // 0x19c074: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19C074u;
    {
        const bool branch_taken_0x19c074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c074) {
            ctx->pc = 0x19C0B0u;
            goto label_19c0b0;
        }
    }
    ctx->pc = 0x19C07Cu;
label_19c07c:
    // 0x19c07c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C07Cu;
    {
        const bool branch_taken_0x19c07c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C07Cu;
            // 0x19c080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c07c) {
            ctx->pc = 0x19C094u;
            goto label_19c094;
        }
    }
    ctx->pc = 0x19C084u;
    // 0x19c084: 0x2402038c  addiu       $v0, $zero, 0x38C
    ctx->pc = 0x19c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
    // 0x19c088: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x19c088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19c08c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19c090: 0x24423f50  addiu       $v0, $v0, 0x3F50
    ctx->pc = 0x19c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16208));
label_19c094:
    // 0x19c094: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c098: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C098u;
    {
        const bool branch_taken_0x19c098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C098u;
            // 0x19c09c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c098) {
            ctx->pc = 0x19C0A4u;
            goto label_19c0a4;
        }
    }
    ctx->pc = 0x19C0A0u;
    // 0x19c0a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c0a4:
    // 0x19c0a4: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C0A4u;
    {
        const bool branch_taken_0x19c0a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c0a4) {
            ctx->pc = 0x19C0B0u;
            goto label_19c0b0;
        }
    }
    ctx->pc = 0x19C0ACu;
    // 0x19c0ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c0b0:
    // 0x19c0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C0B8u;
}
