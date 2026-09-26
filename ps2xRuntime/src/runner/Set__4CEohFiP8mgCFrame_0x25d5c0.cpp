#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__4CEohFiP8mgCFrame
// Address: 0x25d5c0 - 0x25d5fc
void Set__4CEohFiP8mgCFrame_0x25d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__4CEohFiP8mgCFrame_0x25d5c0");
#endif

    ctx->pc = 0x25d5c0u;

    // 0x25d5c0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D5C0u;
    {
        const bool branch_taken_0x25d5c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D5C0u;
            // 0x25d5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5c0) {
            ctx->pc = 0x25D5D0u;
            goto label_25d5d0;
        }
    }
    ctx->pc = 0x25D5C8u;
    // 0x25d5c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25D5C8u;
    {
        const bool branch_taken_0x25d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5c8) {
            ctx->pc = 0x25D5F4u;
            goto label_25d5f4;
        }
    }
    ctx->pc = 0x25D5D0u;
label_25d5d0:
    // 0x25d5d0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x25d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x25d5d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25d5d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d5dc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D5DCu;
    {
        const bool branch_taken_0x25d5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d5dc) {
            ctx->pc = 0x25D5ECu;
            goto label_25d5ec;
        }
    }
    ctx->pc = 0x25D5E4u;
    // 0x25d5e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D5E4u;
    {
        const bool branch_taken_0x25d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D5E4u;
            // 0x25d5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d5e4) {
            ctx->pc = 0x25D5F4u;
            goto label_25d5f4;
        }
    }
    ctx->pc = 0x25D5ECu;
label_25d5ec:
    // 0x25d5ec: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x25d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x25d5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d5f4:
    // 0x25d5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25D5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D5FCu;
}
