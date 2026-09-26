#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAnim__12CPalletAnimeFssssss
// Address: 0x1c1220 - 0x1c1240
void SetAnim__12CPalletAnimeFssssss_0x1c1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAnim__12CPalletAnimeFssssss_0x1c1220");
#endif

    ctx->pc = 0x1c1220u;

    // 0x1c1220: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x1c1220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c1224: 0xa4860002  sh          $a2, 0x2($a0)
    ctx->pc = 0x1c1224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c1228: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x1c1228u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1c122c: 0xa4880006  sh          $t0, 0x6($a0)
    ctx->pc = 0x1c122cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x1c1230: 0xa489000a  sh          $t1, 0xA($a0)
    ctx->pc = 0x1c1230u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 9));
    // 0x1c1234: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x1c1234u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c1238: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C123Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1238u;
            // 0x1c123c: 0xa48a000c  sh          $t2, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1240u;
}
