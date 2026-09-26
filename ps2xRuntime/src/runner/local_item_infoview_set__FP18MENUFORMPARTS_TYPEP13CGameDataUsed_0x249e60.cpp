#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: local_item_infoview_set__FP18MENUFORMPARTS_TYPEP13CGameDataUsed
// Address: 0x249e60 - 0x249e84
void local_item_infoview_set__FP18MENUFORMPARTS_TYPEP13CGameDataUsed_0x249e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("local_item_infoview_set__FP18MENUFORMPARTS_TYPEP13CGameDataUsed_0x249e60");
#endif

    ctx->pc = 0x249e60u;

    // 0x249e60: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x249E60u;
    {
        const bool branch_taken_0x249e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249e60) {
            ctx->pc = 0x249E7Cu;
            goto label_249e7c;
        }
    }
    ctx->pc = 0x249E68u;
    // 0x249e68: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x249e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x249e6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x249e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249e70: 0x84a50002  lh          $a1, 0x2($a1)
    ctx->pc = 0x249e70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x249e74: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x249e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x249e78: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x249e78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
label_249e7c:
    // 0x249e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x249E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x249E84u;
}
