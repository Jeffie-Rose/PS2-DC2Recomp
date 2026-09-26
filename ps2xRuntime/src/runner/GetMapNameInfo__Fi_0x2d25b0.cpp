#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMapNameInfo__Fi
// Address: 0x2d25b0 - 0x2d25f0
void GetMapNameInfo__Fi_0x2d25b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMapNameInfo__Fi_0x2d25b0");
#endif

    ctx->pc = 0x2d25b0u;

    // 0x2d25b0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D25B0u;
    {
        const bool branch_taken_0x2d25b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D25B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D25B0u;
            // 0x2d25b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25b0) {
            ctx->pc = 0x2D25CCu;
            goto label_2d25cc;
        }
    }
    ctx->pc = 0x2D25B8u;
    // 0x2d25b8: 0x8f829dc4  lw          $v0, -0x623C($gp)
    ctx->pc = 0x2d25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942148)));
    // 0x2d25bc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2d25bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d25c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D25C0u;
    {
        const bool branch_taken_0x2d25c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d25c0) {
            ctx->pc = 0x2D25D4u;
            goto label_2d25d4;
        }
    }
    ctx->pc = 0x2D25C8u;
    // 0x2d25c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d25c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d25cc:
    // 0x2d25cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D25CCu;
    {
        const bool branch_taken_0x2d25cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25cc) {
            ctx->pc = 0x2D25E8u;
            goto label_2d25e8;
        }
    }
    ctx->pc = 0x2D25D4u;
label_2d25d4:
    // 0x2d25d4: 0x8f829dc8  lw          $v0, -0x6238($gp)
    ctx->pc = 0x2d25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942152)));
    // 0x2d25d8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2d25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d25dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d25dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d25e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d25e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d25e8:
    // 0x2d25e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D25E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D25F0u;
}
