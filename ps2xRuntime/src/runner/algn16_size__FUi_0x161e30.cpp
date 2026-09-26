#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: algn16_size__FUi
// Address: 0x161e30 - 0x161e4c
void algn16_size__FUi_0x161e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("algn16_size__FUi_0x161e30");
#endif

    ctx->pc = 0x161e30u;

    // 0x161e30: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x161e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x161e34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161E34u;
    {
        const bool branch_taken_0x161e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161E34u;
            // 0x161e38: 0x41102  srl         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e34) {
            ctx->pc = 0x161E44u;
            goto label_161e44;
        }
    }
    ctx->pc = 0x161E3Cu;
    // 0x161e3c: 0x41102  srl         $v0, $a0, 4
    ctx->pc = 0x161e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x161e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_161e44:
    // 0x161e44: 0x3e00008  jr          $ra
    ctx->pc = 0x161E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161E4Cu;
}
