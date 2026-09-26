#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetColor__9CMapPartsFiPf
// Address: 0x1667b0 - 0x1667ec
void GetColor__9CMapPartsFiPf_0x1667b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetColor__9CMapPartsFiPf_0x1667b0");
#endif

    ctx->pc = 0x1667b0u;

    // 0x1667b0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1667B0u;
    {
        const bool branch_taken_0x1667b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1667B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1667B0u;
            // 0x1667b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667b0) {
            ctx->pc = 0x1667CCu;
            goto label_1667cc;
        }
    }
    ctx->pc = 0x1667B8u;
    // 0x1667b8: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x1667b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x1667bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1667bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1667c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1667C0u;
    {
        const bool branch_taken_0x1667c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1667C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1667C0u;
            // 0x1667c4: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667c0) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x1667C8u;
    // 0x1667c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1667c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1667cc:
    // 0x1667cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1667CCu;
    {
        const bool branch_taken_0x1667cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1667cc) {
            ctx->pc = 0x1667E4u;
            goto label_1667e4;
        }
    }
    ctx->pc = 0x1667D4u;
label_1667d4:
    // 0x1667d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1667d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1667d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1667d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1667dc: 0x786301f0  lq          $v1, 0x1F0($v1)
    ctx->pc = 0x1667dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x1667e0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1667e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_1667e4:
    // 0x1667e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1667E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1667ECu;
}
