#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Check__9CEditGridFii
// Address: 0x2978b0 - 0x2978f8
void Check__9CEditGridFii_0x2978b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check__9CEditGridFii_0x2978b0");
#endif

    ctx->pc = 0x2978b0u;

    // 0x2978b0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2978B0u;
    {
        const bool branch_taken_0x2978b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2978B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978B0u;
            // 0x2978b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978b0) {
            ctx->pc = 0x2978CCu;
            goto label_2978cc;
        }
    }
    ctx->pc = 0x2978B8u;
    // 0x2978b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2978b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2978bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2978bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2978c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2978C0u;
    {
        const bool branch_taken_0x2978c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2978c0) {
            ctx->pc = 0x2978D4u;
            goto label_2978d4;
        }
    }
    ctx->pc = 0x2978C8u;
    // 0x2978c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2978c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2978cc:
    // 0x2978cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2978CCu;
    {
        const bool branch_taken_0x2978cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2978cc) {
            ctx->pc = 0x2978F0u;
            goto label_2978f0;
        }
    }
    ctx->pc = 0x2978D4u;
label_2978d4:
    // 0x2978d4: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2978D4u;
    {
        const bool branch_taken_0x2978d4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2978D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978D4u;
            // 0x2978d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978d4) {
            ctx->pc = 0x2978F0u;
            goto label_2978f0;
        }
    }
    ctx->pc = 0x2978DCu;
    // 0x2978dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2978dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2978e0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2978e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2978e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2978E4u;
    {
        const bool branch_taken_0x2978e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2978E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978E4u;
            // 0x2978e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978e4) {
            ctx->pc = 0x2978F0u;
            goto label_2978f0;
        }
    }
    ctx->pc = 0x2978ECu;
    // 0x2978ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2978ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2978f0:
    // 0x2978f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2978F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2978F8u;
}
