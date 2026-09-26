#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaDataPtr__16CUserDataManagerFi
// Address: 0x19b490 - 0x19b4bc
void GetCharaDataPtr__16CUserDataManagerFi_0x19b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaDataPtr__16CUserDataManagerFi_0x19b490");
#endif

    ctx->pc = 0x19b490u;

    // 0x19b490: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B490u;
    {
        const bool branch_taken_0x19b490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B490u;
            // 0x19b494: 0x2402038c  addiu       $v0, $zero, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b490) {
            ctx->pc = 0x19B4A8u;
            goto label_19b4a8;
        }
    }
    ctx->pc = 0x19B498u;
    // 0x19b498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b49c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B49Cu;
    {
        const bool branch_taken_0x19b49c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B49Cu;
            // 0x19b4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b49c) {
            ctx->pc = 0x19B4B4u;
            goto label_19b4b4;
        }
    }
    ctx->pc = 0x19B4A4u;
    // 0x19b4a4: 0x2402038c  addiu       $v0, $zero, 0x38C
    ctx->pc = 0x19b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
label_19b4a8:
    // 0x19b4a8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x19b4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b4ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19b4b0: 0x24423f48  addiu       $v0, $v0, 0x3F48
    ctx->pc = 0x19b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
label_19b4b4:
    // 0x19b4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B4BCu;
}
