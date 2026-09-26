#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMapFile__8CMapInfoFPi
// Address: 0x165020 - 0x165030
void GetMapFile__8CMapInfoFPi_0x165020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMapFile__8CMapInfoFPi_0x165020");
#endif

    ctx->pc = 0x165020u;

    // 0x165020: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x165020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x165024: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x165024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x165028: 0x3e00008  jr          $ra
    ctx->pc = 0x165028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165028u;
            // 0x16502c: 0x8c820088  lw          $v0, 0x88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165030u;
}
