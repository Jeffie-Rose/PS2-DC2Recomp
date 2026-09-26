#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Data__11mgCDrawPrimFPi
// Address: 0x134ae0 - 0x134af8
void Data__11mgCDrawPrimFPi_0x134ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Data__11mgCDrawPrimFPi_0x134ae0");
#endif

    ctx->pc = 0x134ae0u;

    // 0x134ae0: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x134ae0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134ae4: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x134ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134ae8: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x134ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x134aec: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x134aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x134af0: 0x3e00008  jr          $ra
    ctx->pc = 0x134AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AF0u;
            // 0x134af4: 0x7ca60000  sq          $a2, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134AF8u;
}
