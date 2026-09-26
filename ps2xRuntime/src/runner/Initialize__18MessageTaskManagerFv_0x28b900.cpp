#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__18MessageTaskManagerFv
// Address: 0x28b900 - 0x28b98c
void Initialize__18MessageTaskManagerFv_0x28b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__18MessageTaskManagerFv_0x28b900");
#endif

    ctx->pc = 0x28b900u;

    // 0x28b900: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x28b900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x28b904: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x28b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28b908: 0xac800368  sw          $zero, 0x368($a0)
    ctx->pc = 0x28b908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 872), GPR_U32(ctx, 0));
    // 0x28b90c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x28b910: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x28b910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x28b914: 0xa080008c  sb          $zero, 0x8C($a0)
    ctx->pc = 0x28b914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b918: 0xa480008e  sh          $zero, 0x8E($a0)
    ctx->pc = 0x28b918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 142), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b91c: 0xa4830092  sh          $v1, 0x92($a0)
    ctx->pc = 0x28b91cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x28b920: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x28b920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x28b924: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x28b924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x28b928: 0xa080011c  sb          $zero, 0x11C($a0)
    ctx->pc = 0x28b928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b92c: 0xa480011e  sh          $zero, 0x11E($a0)
    ctx->pc = 0x28b92cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 286), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b930: 0xa4830122  sh          $v1, 0x122($a0)
    ctx->pc = 0x28b930u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x28b934: 0xac800124  sw          $zero, 0x124($a0)
    ctx->pc = 0x28b934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
    // 0x28b938: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x28b938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
    // 0x28b93c: 0xa08001ac  sb          $zero, 0x1AC($a0)
    ctx->pc = 0x28b93cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 428), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b940: 0xa48001ae  sh          $zero, 0x1AE($a0)
    ctx->pc = 0x28b940u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 430), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b944: 0xa48301b2  sh          $v1, 0x1B2($a0)
    ctx->pc = 0x28b944u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 434), (uint16_t)GPR_U32(ctx, 3));
    // 0x28b948: 0xac8001b4  sw          $zero, 0x1B4($a0)
    ctx->pc = 0x28b948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 0));
    // 0x28b94c: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x28b94cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x28b950: 0xa080023c  sb          $zero, 0x23C($a0)
    ctx->pc = 0x28b950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b954: 0xa480023e  sh          $zero, 0x23E($a0)
    ctx->pc = 0x28b954u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 574), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b958: 0xa4830242  sh          $v1, 0x242($a0)
    ctx->pc = 0x28b958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x28b95c: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x28b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
    // 0x28b960: 0xac800248  sw          $zero, 0x248($a0)
    ctx->pc = 0x28b960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 0));
    // 0x28b964: 0xa08002cc  sb          $zero, 0x2CC($a0)
    ctx->pc = 0x28b964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 716), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b968: 0xa48002ce  sh          $zero, 0x2CE($a0)
    ctx->pc = 0x28b968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 718), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b96c: 0xa48302d2  sh          $v1, 0x2D2($a0)
    ctx->pc = 0x28b96cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 722), (uint16_t)GPR_U32(ctx, 3));
    // 0x28b970: 0xac8002d4  sw          $zero, 0x2D4($a0)
    ctx->pc = 0x28b970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 0));
    // 0x28b974: 0xac8002d8  sw          $zero, 0x2D8($a0)
    ctx->pc = 0x28b974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 0));
    // 0x28b978: 0xa080035c  sb          $zero, 0x35C($a0)
    ctx->pc = 0x28b978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 860), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b97c: 0xa480035e  sh          $zero, 0x35E($a0)
    ctx->pc = 0x28b97cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 862), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b980: 0xa4830362  sh          $v1, 0x362($a0)
    ctx->pc = 0x28b980u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 866), (uint16_t)GPR_U32(ctx, 3));
    // 0x28b984: 0x3e00008  jr          $ra
    ctx->pc = 0x28B984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B984u;
            // 0x28b988: 0xac800364  sw          $zero, 0x364($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B98Cu;
}
