#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateBox__14CEditPartsInfoFv
// Address: 0x1b5670 - 0x1b56a0
void CreateBox__14CEditPartsInfoFv_0x1b5670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateBox__14CEditPartsInfoFv_0x1b5670");
#endif

    ctx->pc = 0x1b5670u;

    // 0x1b5670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5674: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1b5674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5678: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x1b5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1b567c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1b567cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b5680: 0x7c860050  sq          $a2, 0x50($a0)
    ctx->pc = 0x1b5680u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 6));
    // 0x1b5684: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1b5684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b5688: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x1b5688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x1b568c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b568cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b5690: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x1b5690u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x1b5694: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x1b5694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
    // 0x1b5698: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5698u;
            // 0x1b569c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B56A0u;
}
