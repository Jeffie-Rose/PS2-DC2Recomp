#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMesWinXYFromFukidashiXY__6ClsMesFv
// Address: 0x152450 - 0x15246c
void CalcMesWinXYFromFukidashiXY__6ClsMesFv_0x152450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMesWinXYFromFukidashiXY__6ClsMesFv_0x152450");
#endif

    ctx->pc = 0x152450u;

    // 0x152450: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x152450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x152454: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x152454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x152458: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x152458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
    // 0x15245c: 0x8c830140  lw          $v1, 0x140($a0)
    ctx->pc = 0x15245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x152460: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x152460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x152464: 0x3e00008  jr          $ra
    ctx->pc = 0x152464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152464u;
            // 0x152468: 0xac8300bc  sw          $v1, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15246Cu;
}
