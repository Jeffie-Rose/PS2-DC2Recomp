#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePlaceParts__8CEditMapFi
// Address: 0x1b0c40 - 0x1b0c98
void GetePlaceParts__8CEditMapFi_0x1b0c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePlaceParts__8CEditMapFi_0x1b0c40");
#endif

    ctx->pc = 0x1b0c40u;

    // 0x1b0c40: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0C40u;
    {
        const bool branch_taken_0x1b0c40 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B0C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C40u;
            // 0x1b0c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c40) {
            ctx->pc = 0x1B0C50u;
            goto label_1b0c50;
        }
    }
    ctx->pc = 0x1B0C48u;
    // 0x1b0c48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B0C48u;
    {
        const bool branch_taken_0x1b0c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c48) {
            ctx->pc = 0x1B0C90u;
            goto label_1b0c90;
        }
    }
    ctx->pc = 0x1B0C50u;
label_1b0c50:
    // 0x1b0c50: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0C50u;
    {
        const bool branch_taken_0x1b0c50 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C50u;
            // 0x1b0c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c50) {
            ctx->pc = 0x1B0C6Cu;
            goto label_1b0c6c;
        }
    }
    ctx->pc = 0x1B0C58u;
    // 0x1b0c58: 0x8c820d40  lw          $v0, 0xD40($a0)
    ctx->pc = 0x1b0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3392)));
    // 0x1b0c5c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b0c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0c60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0C60u;
    {
        const bool branch_taken_0x1b0c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c60) {
            ctx->pc = 0x1B0C74u;
            goto label_1b0c74;
        }
    }
    ctx->pc = 0x1B0C68u;
    // 0x1b0c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b0c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c6c:
    // 0x1b0c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0C6Cu;
    {
        const bool branch_taken_0x1b0c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c6c) {
            ctx->pc = 0x1B0C90u;
            goto label_1b0c90;
        }
    }
    ctx->pc = 0x1B0C74u;
label_1b0c74:
    // 0x1b0c74: 0x8c820d44  lw          $v0, 0xD44($a0)
    ctx->pc = 0x1b0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
    // 0x1b0c78: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1b0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b0c7c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1b0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b0c80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b0c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b0c84: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0c88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b0c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b0c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b0c90:
    // 0x1b0c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0C98u;
}
