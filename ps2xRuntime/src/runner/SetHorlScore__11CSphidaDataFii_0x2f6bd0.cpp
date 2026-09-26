#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHorlScore__11CSphidaDataFii
// Address: 0x2f6bd0 - 0x2f6c14
void SetHorlScore__11CSphidaDataFii_0x2f6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHorlScore__11CSphidaDataFii_0x2f6bd0");
#endif

    ctx->pc = 0x2f6bd0u;

    // 0x2f6bd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6bd4: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6BD4u;
    {
        const bool branch_taken_0x2f6bd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6bd4) {
            ctx->pc = 0x2F6BE4u;
            goto label_2f6be4;
        }
    }
    ctx->pc = 0x2F6BDCu;
    // 0x2f6bdc: 0x84861478  lh          $a2, 0x1478($a0)
    ctx->pc = 0x2f6bdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5240)));
    // 0x2f6be0: 0x0  nop
    ctx->pc = 0x2f6be0u;
    // NOP
label_2f6be4:
    // 0x2f6be4: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6BE4u;
    {
        const bool branch_taken_0x2f6be4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2f6be4) {
            ctx->pc = 0x2F6C0Cu;
            goto label_2f6c0c;
        }
    }
    ctx->pc = 0x2F6BECu;
    // 0x2f6bec: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x2f6becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f6bf0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6BF0u;
    {
        const bool branch_taken_0x2f6bf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6BF0u;
            // 0x2f6bf4: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bf0) {
            ctx->pc = 0x2F6C04u;
            goto label_2f6c04;
        }
    }
    ctx->pc = 0x2F6BF8u;
    // 0x2f6bf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6BF8u;
    {
        const bool branch_taken_0x2f6bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6bf8) {
            ctx->pc = 0x2F6C0Cu;
            goto label_2f6c0c;
        }
    }
    ctx->pc = 0x2F6C00u;
    // 0x2f6c00: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2f6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2f6c04:
    // 0x2f6c04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f6c08: 0xa4651448  sh          $a1, 0x1448($v1)
    ctx->pc = 0x2f6c08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5192), (uint16_t)GPR_U32(ctx, 5));
label_2f6c0c:
    // 0x2f6c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6C14u;
}
