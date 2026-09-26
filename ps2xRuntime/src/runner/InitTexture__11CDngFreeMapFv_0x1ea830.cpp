#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitTexture__11CDngFreeMapFv
// Address: 0x1ea830 - 0x1ea84c
void InitTexture__11CDngFreeMapFv_0x1ea830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTexture__11CDngFreeMapFv_0x1ea830");
#endif

    ctx->pc = 0x1ea830u;

    // 0x1ea830: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x1ea830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x1ea834: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ea834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea838: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x1ea838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x1ea83c: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1ea83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1ea840: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x1ea840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x1ea844: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA844u;
            // 0x1ea848: 0xa48300d0  sh          $v1, 0xD0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 208), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA84Cu;
}
