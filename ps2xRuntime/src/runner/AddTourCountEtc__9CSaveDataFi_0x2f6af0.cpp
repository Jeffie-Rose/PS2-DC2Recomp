#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddTourCountEtc__9CSaveDataFi
// Address: 0x2f6af0 - 0x2f6b60
void AddTourCountEtc__9CSaveDataFi_0x2f6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddTourCountEtc__9CSaveDataFi_0x2f6af0");
#endif

    ctx->pc = 0x2f6af0u;

    // 0x2f6af0: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f6af4: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6af8: 0x344243db  ori         $v0, $v0, 0x43DB
    ctx->pc = 0x2f6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17371);
    // 0x2f6afc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6afcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b00: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2f6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f6b04: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2f6b04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6b08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f6b0c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2f6b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6b10: 0x802243db  lb          $v0, 0x43DB($at)
    ctx->pc = 0x2f6b10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17371)));
    // 0x2f6b14: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6B14u;
    {
        const bool branch_taken_0x2f6b14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F6B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6B14u;
            // 0x2f6b18: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b14) {
            ctx->pc = 0x2F6B2Cu;
            goto label_2f6b2c;
        }
    }
    ctx->pc = 0x2F6B1Cu;
    // 0x2f6b1c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6b20: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6b20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b24: 0xa02043db  sb          $zero, 0x43DB($at)
    ctx->pc = 0x2f6b24u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17371), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6b28: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2f6b2c:
    // 0x2f6b2c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b30: 0x802243db  lb          $v0, 0x43DB($at)
    ctx->pc = 0x2f6b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17371)));
    // 0x2f6b34: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x2f6b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2f6b38: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6B38u;
    {
        const bool branch_taken_0x2f6b38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6B38u;
            // 0x2f6b3c: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b38) {
            ctx->pc = 0x2F6B54u;
            goto label_2f6b54;
        }
    }
    ctx->pc = 0x2F6B40u;
    // 0x2f6b40: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6b44: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f6b48: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6b48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b4c: 0xa02243db  sb          $v0, 0x43DB($at)
    ctx->pc = 0x2f6b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17371), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6b50: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2f6b54:
    // 0x2f6b54: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6b54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b58: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6B58u;
            // 0x2f6b5c: 0x802243db  lb          $v0, 0x43DB($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17371)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6B60u;
}
