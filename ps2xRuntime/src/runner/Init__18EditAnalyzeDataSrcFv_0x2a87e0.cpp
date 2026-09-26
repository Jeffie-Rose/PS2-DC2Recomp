#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__18EditAnalyzeDataSrcFv
// Address: 0x2a87e0 - 0x2a8820
void Init__18EditAnalyzeDataSrcFv_0x2a87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__18EditAnalyzeDataSrcFv_0x2a87e0");
#endif

    ctx->pc = 0x2a87e0u;

    // 0x2a87e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a87e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a87e8: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x2a87e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a87ec: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x2a87ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a87f0: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x2a87f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a87f4: 0xa0830009  sb          $v1, 0x9($a0)
    ctx->pc = 0x2a87f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a87f8: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x2a87f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a87fc: 0xa083000b  sb          $v1, 0xB($a0)
    ctx->pc = 0x2a87fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a8800: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x2a8800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a8804: 0xa083000d  sb          $v1, 0xD($a0)
    ctx->pc = 0x2a8804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a8808: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x2a8808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a880c: 0xa083000f  sb          $v1, 0xF($a0)
    ctx->pc = 0x2a880cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a8810: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2a8810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2a8814: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2a8814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2a8818: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A881Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8818u;
            // 0x2a881c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8820u;
}
