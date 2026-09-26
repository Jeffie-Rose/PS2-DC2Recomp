#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepMenuDl2__Fi
// Address: 0x2224c0 - 0x2224f4
void StepMenuDl2__Fi_0x2224c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepMenuDl2__Fi_0x2224c0");
#endif

    ctx->pc = 0x2224c0u;

    // 0x2224c0: 0x8f829398  lw          $v0, -0x6C68($gp)
    ctx->pc = 0x2224c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939544)));
    // 0x2224c4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2224C4u;
    {
        const bool branch_taken_0x2224c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2224C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2224C4u;
            // 0x2224c8: 0x82082a  slt         $at, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224c4) {
            ctx->pc = 0x2224D4u;
            goto label_2224d4;
        }
    }
    ctx->pc = 0x2224CCu;
    // 0x2224cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2224CCu;
    {
        const bool branch_taken_0x2224cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2224CCu;
            // 0x2224d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224cc) {
            ctx->pc = 0x2224ECu;
            goto label_2224ec;
        }
    }
    ctx->pc = 0x2224D4u;
label_2224d4:
    // 0x2224d4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2224D4u;
    {
        const bool branch_taken_0x2224d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2224D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2224D4u;
            // 0x2224d8: 0xaf84939c  sw          $a0, -0x6C64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224d4) {
            ctx->pc = 0x2224E8u;
            goto label_2224e8;
        }
    }
    ctx->pc = 0x2224DCu;
    // 0x2224dc: 0xaf82939c  sw          $v0, -0x6C64($gp)
    ctx->pc = 0x2224dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939548), GPR_U32(ctx, 2));
    // 0x2224e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2224E0u;
    {
        const bool branch_taken_0x2224e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2224E0u;
            // 0x2224e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224e0) {
            ctx->pc = 0x2224ECu;
            goto label_2224ec;
        }
    }
    ctx->pc = 0x2224E8u;
label_2224e8:
    // 0x2224e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2224e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2224ec:
    // 0x2224ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2224ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2224F4u;
}
