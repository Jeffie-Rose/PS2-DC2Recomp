#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO
// Address: 0x1fe170 - 0x1fe1a0
void Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170");
#endif

    ctx->pc = 0x1fe170u;

    // 0x1fe170: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE170u;
    {
        const bool branch_taken_0x1fe170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe170) {
            ctx->pc = 0x1FE198u;
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FE178u;
    // 0x1fe178: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1fe178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe17c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fe17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe180: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1fe180u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe184: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x1fe184u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe188: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x1fe188u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe18c: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x1fe18cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe190: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1fe190u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe194: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x1fe194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
label_1fe198:
    // 0x1fe198: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE1A0u;
}
