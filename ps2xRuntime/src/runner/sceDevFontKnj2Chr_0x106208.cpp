#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevFontKnj2Chr
// Address: 0x106208 - 0x106238
void sceDevFontKnj2Chr_0x106208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontKnj2Chr_0x106208");
#endif

    ctx->pc = 0x106208u;

    // 0x106208: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x106208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x10620c: 0x3082ff00  andi        $v0, $a0, 0xFF00
    ctx->pc = 0x10620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x106210: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106210u;
    {
        const bool branch_taken_0x106210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106210u;
            // 0x106214: 0x2482dbdf  addiu       $v0, $a0, -0x2421 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106210) {
            ctx->pc = 0x106230u;
            goto label_106230;
        }
    }
    ctx->pc = 0x106218u;
    // 0x106218: 0x2c420053  sltiu       $v0, $v0, 0x53
    ctx->pc = 0x106218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)83) ? 1 : 0);
    // 0x10621c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10621Cu;
    {
        const bool branch_taken_0x10621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10621Cu;
            // 0x106220: 0x2482dc5f  addiu       $v0, $a0, -0x23A1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10621c) {
            ctx->pc = 0x10622Cu;
            goto label_10622c;
        }
    }
    ctx->pc = 0x106224u;
    // 0x106224: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106224u;
    {
        const bool branch_taken_0x106224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106224u;
            // 0x106228: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106224) {
            ctx->pc = 0x106230u;
            goto label_106230;
        }
    }
    ctx->pc = 0x10622Cu;
label_10622c:
    // 0x10622c: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_106230:
    // 0x106230: 0x3e00008  jr          $ra
    ctx->pc = 0x106230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106230u;
            // 0x106234: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106238u;
}
