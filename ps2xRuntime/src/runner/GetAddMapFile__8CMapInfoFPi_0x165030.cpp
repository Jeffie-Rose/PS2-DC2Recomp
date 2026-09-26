#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAddMapFile__8CMapInfoFPi
// Address: 0x165030 - 0x165040
void GetAddMapFile__8CMapInfoFPi_0x165030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAddMapFile__8CMapInfoFPi_0x165030");
#endif

    ctx->pc = 0x165030u;

    // 0x165030: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x165034: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x165034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x165038: 0x3e00008  jr          $ra
    ctx->pc = 0x165038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165038u;
            // 0x16503c: 0x8c820090  lw          $v0, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165040u;
}
