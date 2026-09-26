#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepMenuDl__Fi
// Address: 0x222480 - 0x2224c0
void StepMenuDl__Fi_0x222480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepMenuDl__Fi_0x222480");
#endif

    ctx->pc = 0x222480u;

    // 0x222480: 0x8f839398  lw          $v1, -0x6C68($gp)
    ctx->pc = 0x222480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939544)));
    // 0x222484: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x222484u;
    {
        const bool branch_taken_0x222484 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x222488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222484u;
            // 0x222488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222484) {
            ctx->pc = 0x222494u;
            goto label_222494;
        }
    }
    ctx->pc = 0x22248Cu;
    // 0x22248c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22248Cu;
    {
        const bool branch_taken_0x22248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22248c) {
            ctx->pc = 0x2224B8u;
            goto label_2224b8;
        }
    }
    ctx->pc = 0x222494u;
label_222494:
    // 0x222494: 0x8f82939c  lw          $v0, -0x6C64($gp)
    ctx->pc = 0x222494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939548)));
    // 0x222498: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x222498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22249c: 0xaf82939c  sw          $v0, -0x6C64($gp)
    ctx->pc = 0x22249cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939548), GPR_U32(ctx, 2));
    // 0x2224a0: 0x8f82939c  lw          $v0, -0x6C64($gp)
    ctx->pc = 0x2224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939548)));
    // 0x2224a4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2224a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2224a8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2224A8u;
    {
        const bool branch_taken_0x2224a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2224ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2224A8u;
            // 0x2224ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224a8) {
            ctx->pc = 0x2224B8u;
            goto label_2224b8;
        }
    }
    ctx->pc = 0x2224B0u;
    // 0x2224b0: 0xaf83939c  sw          $v1, -0x6C64($gp)
    ctx->pc = 0x2224b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939548), GPR_U32(ctx, 3));
    // 0x2224b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2224b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2224b8:
    // 0x2224b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2224B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2224C0u;
}
