#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: get__9input_strFPi
// Address: 0x1463a0 - 0x1463d4
void get__9input_strFPi_0x1463a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get__9input_strFPi_0x1463a0");
#endif

    ctx->pc = 0x1463a0u;

    // 0x1463a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1463a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1463a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1463a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1463a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1463ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1463acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1463b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1463b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1463b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1463b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1463b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1463b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1463bc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1463bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1463c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1463c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1463c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1463c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1463c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1463c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1463cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1463CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1463D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1463CCu;
            // 0x1463d0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1463D4u;
}
