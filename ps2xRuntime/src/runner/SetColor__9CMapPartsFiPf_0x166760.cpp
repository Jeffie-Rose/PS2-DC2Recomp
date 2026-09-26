#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__9CMapPartsFiPf
// Address: 0x166760 - 0x1667a8
void SetColor__9CMapPartsFiPf_0x166760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__9CMapPartsFiPf_0x166760");
#endif

    ctx->pc = 0x166760u;

    // 0x166760: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x166760u;
    {
        const bool branch_taken_0x166760 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x166764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166760u;
            // 0x166764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166760) {
            ctx->pc = 0x16677Cu;
            goto label_16677c;
        }
    }
    ctx->pc = 0x166768u;
    // 0x166768: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x166768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x16676c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x16676cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x166770: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166770u;
    {
        const bool branch_taken_0x166770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166770) {
            ctx->pc = 0x166784u;
            goto label_166784;
        }
    }
    ctx->pc = 0x166778u;
    // 0x166778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16677c:
    // 0x16677c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16677Cu;
    {
        const bool branch_taken_0x16677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16677c) {
            ctx->pc = 0x1667A0u;
            goto label_1667a0;
        }
    }
    ctx->pc = 0x166784u;
label_166784:
    // 0x166784: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x166784u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166788: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x166788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x16678c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x166790: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x166790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x166794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166798: 0x7c8601f0  sq          $a2, 0x1F0($a0)
    ctx->pc = 0x166798u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 496), GPR_VEC(ctx, 6));
    // 0x16679c: 0xac8301fc  sw          $v1, 0x1FC($a0)
    ctx->pc = 0x16679cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 3));
label_1667a0:
    // 0x1667a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1667A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1667A8u;
}
