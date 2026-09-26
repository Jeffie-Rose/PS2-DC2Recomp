#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMenuReturnMsgCtrl__Fi
// Address: 0x2bfd30 - 0x2bfd60
void SetMenuReturnMsgCtrl__Fi_0x2bfd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMenuReturnMsgCtrl__Fi_0x2bfd30");
#endif

    ctx->pc = 0x2bfd30u;

    // 0x2bfd30: 0x4182b  sltu        $v1, $zero, $a0
    ctx->pc = 0x2bfd30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2bfd34: 0xa3839c60  sb          $v1, -0x63A0($gp)
    ctx->pc = 0x2bfd34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941792), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfd38: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2bfd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2bfd3c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BFD3Cu;
    {
        const bool branch_taken_0x2bfd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd3c) {
            ctx->pc = 0x2BFD48u;
            goto label_2bfd48;
        }
    }
    ctx->pc = 0x2BFD44u;
    // 0x2bfd44: 0xa3809c60  sb          $zero, -0x63A0($gp)
    ctx->pc = 0x2bfd44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941792), (uint8_t)GPR_U32(ctx, 0));
label_2bfd48:
    // 0x2bfd48: 0x8f839c5c  lw          $v1, -0x63A4($gp)
    ctx->pc = 0x2bfd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x2bfd4c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BFD4Cu;
    {
        const bool branch_taken_0x2bfd4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd4c) {
            ctx->pc = 0x2BFD58u;
            goto label_2bfd58;
        }
    }
    ctx->pc = 0x2BFD54u;
    // 0x2bfd54: 0xa3809c60  sb          $zero, -0x63A0($gp)
    ctx->pc = 0x2bfd54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941792), (uint8_t)GPR_U32(ctx, 0));
label_2bfd58:
    // 0x2bfd58: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFD60u;
}
