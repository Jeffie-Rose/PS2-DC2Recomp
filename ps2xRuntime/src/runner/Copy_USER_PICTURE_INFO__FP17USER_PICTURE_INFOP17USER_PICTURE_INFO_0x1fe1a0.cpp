#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy_USER_PICTURE_INFO__FP17USER_PICTURE_INFOP17USER_PICTURE_INFO
// Address: 0x1fe1a0 - 0x1fe1f8
void Copy_USER_PICTURE_INFO__FP17USER_PICTURE_INFOP17USER_PICTURE_INFO_0x1fe1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy_USER_PICTURE_INFO__FP17USER_PICTURE_INFOP17USER_PICTURE_INFO_0x1fe1a0");
#endif

    ctx->pc = 0x1fe1a0u;

    // 0x1fe1a0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE1A0u;
    {
        const bool branch_taken_0x1fe1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1a0) {
            ctx->pc = 0x1FE1F0u;
            goto label_1fe1f0;
        }
    }
    ctx->pc = 0x1FE1A8u;
    // 0x1fe1a8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE1A8u;
    {
        const bool branch_taken_0x1fe1a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1a8) {
            ctx->pc = 0x1FE1B8u;
            goto label_1fe1b8;
        }
    }
    ctx->pc = 0x1FE1B0u;
    // 0x1fe1b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FE1B0u;
    {
        const bool branch_taken_0x1fe1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1b0) {
            ctx->pc = 0x1FE1F0u;
            goto label_1fe1f0;
        }
    }
    ctx->pc = 0x1FE1B8u;
label_1fe1b8:
    // 0x1fe1b8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1fe1b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe1bc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1fe1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe1c0: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x1fe1c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1fe1c4: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1fe1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe1c8: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1fe1c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1fe1cc: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1fe1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe1d0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1fe1d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fe1d4: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1fe1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe1d8: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x1fe1d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fe1dc: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x1fe1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe1e0: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x1fe1e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1fe1e4: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x1fe1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe1e8: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x1fe1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1fe1ec: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x1fe1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
label_1fe1f0:
    // 0x1fe1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE1F8u;
}
