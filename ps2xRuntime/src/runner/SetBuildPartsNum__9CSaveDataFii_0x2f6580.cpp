#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBuildPartsNum__9CSaveDataFii
// Address: 0x2f6580 - 0x2f65dc
void SetBuildPartsNum__9CSaveDataFii_0x2f6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBuildPartsNum__9CSaveDataFii_0x2f6580");
#endif

    ctx->pc = 0x2f6580u;

    // 0x2f6580: 0x4a00014  bltz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F6580u;
    {
        const bool branch_taken_0x2f6580 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2f6580) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F6588u;
    // 0x2f6588: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x2f6588u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f658c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F658Cu;
    {
        const bool branch_taken_0x2f658c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F658Cu;
            // 0x2f6590: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f658c) {
            ctx->pc = 0x2F65A0u;
            goto label_2f65a0;
        }
    }
    ctx->pc = 0x2F6594u;
    // 0x2f6594: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F6594u;
    {
        const bool branch_taken_0x2f6594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6594) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F659Cu;
    // 0x2f659c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2f659cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2f65a0:
    // 0x2f65a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f65a4: 0xa4661a24  sh          $a2, 0x1A24($v1)
    ctx->pc = 0x2f65a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6692), (uint16_t)GPR_U32(ctx, 6));
    // 0x2f65a8: 0x24641a24  addiu       $a0, $v1, 0x1A24
    ctx->pc = 0x2f65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6692));
    // 0x2f65ac: 0x84631a24  lh          $v1, 0x1A24($v1)
    ctx->pc = 0x2f65acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6692)));
    // 0x2f65b0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F65B0u;
    {
        const bool branch_taken_0x2f65b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2f65b0) {
            ctx->pc = 0x2F65BCu;
            goto label_2f65bc;
        }
    }
    ctx->pc = 0x2F65B8u;
    // 0x2f65b8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x2f65b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_2f65bc:
    // 0x2f65bc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x2f65bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f65c0: 0x28612710  slti        $at, $v1, 0x2710
    ctx->pc = 0x2f65c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x2f65c4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F65C4u;
    {
        const bool branch_taken_0x2f65c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f65c4) {
            ctx->pc = 0x2F65D4u;
            goto label_2f65d4;
        }
    }
    ctx->pc = 0x2F65CCu;
    // 0x2f65cc: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x2f65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2f65d0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2f65d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_2f65d4:
    // 0x2f65d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F65D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F65DCu;
}
