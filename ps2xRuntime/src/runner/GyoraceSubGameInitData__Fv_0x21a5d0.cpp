#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GyoraceSubGameInitData__Fv
// Address: 0x21a5d0 - 0x21a638
void GyoraceSubGameInitData__Fv_0x21a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GyoraceSubGameInitData__Fv_0x21a5d0");
#endif

    ctx->pc = 0x21a5d0u;

    // 0x21a5d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a5d4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a5d8: 0xa423fea0  sh          $v1, -0x160($at)
    ctx->pc = 0x21a5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966944), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a5dc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a5e0: 0xa423feb0  sh          $v1, -0x150($at)
    ctx->pc = 0x21a5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966960), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a5e4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a5e8: 0xa423fea2  sh          $v1, -0x15E($at)
    ctx->pc = 0x21a5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966946), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a5ec: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a5f0: 0xa423feb2  sh          $v1, -0x14E($at)
    ctx->pc = 0x21a5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966962), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a5f4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a5f8: 0xa423fea4  sh          $v1, -0x15C($at)
    ctx->pc = 0x21a5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966948), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a5fc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a600: 0xa423feb4  sh          $v1, -0x14C($at)
    ctx->pc = 0x21a600u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966964), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a604: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a608: 0xa423fea6  sh          $v1, -0x15A($at)
    ctx->pc = 0x21a608u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966950), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a60c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a610: 0xa423feb6  sh          $v1, -0x14A($at)
    ctx->pc = 0x21a610u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966966), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a614: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a618: 0xa423fea8  sh          $v1, -0x158($at)
    ctx->pc = 0x21a618u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966952), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a61c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a620: 0xa423feb8  sh          $v1, -0x148($at)
    ctx->pc = 0x21a620u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966968), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a624: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a628: 0xa423feaa  sh          $v1, -0x156($at)
    ctx->pc = 0x21a628u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966954), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a62c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x21a62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x21a630: 0x3e00008  jr          $ra
    ctx->pc = 0x21A630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A630u;
            // 0x21a634: 0xa423feba  sh          $v1, -0x146($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294966970), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A638u;
}
