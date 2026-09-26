#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__4CEohFiP7CObjecti
// Address: 0x25d500 - 0x25d53c
void Set__4CEohFiP7CObjecti_0x25d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__4CEohFiP7CObjecti_0x25d500");
#endif

    ctx->pc = 0x25d500u;

    // 0x25d500: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D500u;
    {
        const bool branch_taken_0x25d500 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D500u;
            // 0x25d504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d500) {
            ctx->pc = 0x25D510u;
            goto label_25d510;
        }
    }
    ctx->pc = 0x25D508u;
    // 0x25d508: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25D508u;
    {
        const bool branch_taken_0x25d508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d508) {
            ctx->pc = 0x25D534u;
            goto label_25d534;
        }
    }
    ctx->pc = 0x25D510u;
label_25d510:
    // 0x25d510: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x25d510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x25d514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d518: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d51c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D51Cu;
    {
        const bool branch_taken_0x25d51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d51c) {
            ctx->pc = 0x25D52Cu;
            goto label_25d52c;
        }
    }
    ctx->pc = 0x25D524u;
    // 0x25d524: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D524u;
    {
        const bool branch_taken_0x25d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D524u;
            // 0x25d528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d524) {
            ctx->pc = 0x25D534u;
            goto label_25d534;
        }
    }
    ctx->pc = 0x25D52Cu;
label_25d52c:
    // 0x25d52c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x25d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x25d530: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x25d530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_25d534:
    // 0x25d534: 0x3e00008  jr          $ra
    ctx->pc = 0x25D534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D53Cu;
}
