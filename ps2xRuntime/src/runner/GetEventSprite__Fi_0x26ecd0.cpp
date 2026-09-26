#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEventSprite__Fi
// Address: 0x26ecd0 - 0x26ed04
void GetEventSprite__Fi_0x26ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEventSprite__Fi_0x26ecd0");
#endif

    ctx->pc = 0x26ecd0u;

    // 0x26ecd0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26ECD0u;
    {
        const bool branch_taken_0x26ecd0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x26ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ECD0u;
            // 0x26ecd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecd0) {
            ctx->pc = 0x26ECE8u;
            goto label_26ece8;
        }
    }
    ctx->pc = 0x26ECD8u;
    // 0x26ecd8: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x26ecd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x26ecdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26ECDCu;
    {
        const bool branch_taken_0x26ecdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ECDCu;
            // 0x26ece0: 0x3c0201f0  lui         $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecdc) {
            ctx->pc = 0x26ECF0u;
            goto label_26ecf0;
        }
    }
    ctx->pc = 0x26ECE4u;
    // 0x26ece4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ece4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ece8:
    // 0x26ece8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26ECE8u;
    {
        const bool branch_taken_0x26ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ece8) {
            ctx->pc = 0x26ECFCu;
            goto label_26ecfc;
        }
    }
    ctx->pc = 0x26ECF0u;
label_26ecf0:
    // 0x26ecf0: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x26ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x26ecf4: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x26ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
    // 0x26ecf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26ecfc:
    // 0x26ecfc: 0x3e00008  jr          $ra
    ctx->pc = 0x26ECFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26ED04u;
}
