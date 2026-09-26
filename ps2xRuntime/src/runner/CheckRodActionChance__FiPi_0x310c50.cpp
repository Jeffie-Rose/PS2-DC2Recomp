#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRodActionChance__FiPi
// Address: 0x310c50 - 0x310cb4
void CheckRodActionChance__FiPi_0x310c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRodActionChance__FiPi_0x310c50");
#endif

    ctx->pc = 0x310c50u;

    // 0x310c50: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x310c50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x310c54: 0x8f82a25c  lw          $v0, -0x5DA4($gp)
    ctx->pc = 0x310c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
    // 0x310c58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x310C58u;
    {
        const bool branch_taken_0x310c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310C58u;
            // 0x310c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c58) {
            ctx->pc = 0x310C6Cu;
            goto label_310c6c;
        }
    }
    ctx->pc = 0x310C60u;
    // 0x310c60: 0x8f83a27c  lw          $v1, -0x5D84($gp)
    ctx->pc = 0x310c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943356)));
    // 0x310c64: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x310C64u;
    {
        const bool branch_taken_0x310c64 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x310c64) {
            ctx->pc = 0x310C74u;
            goto label_310c74;
        }
    }
    ctx->pc = 0x310C6Cu;
label_310c6c:
    // 0x310c6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x310C6Cu;
    {
        const bool branch_taken_0x310c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c6c) {
            ctx->pc = 0x310CACu;
            goto label_310cac;
        }
    }
    ctx->pc = 0x310C74u;
label_310c74:
    // 0x310c74: 0x8f82a280  lw          $v0, -0x5D80($gp)
    ctx->pc = 0x310c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943360)));
    // 0x310c78: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x310c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x310c7c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310C7Cu;
    {
        const bool branch_taken_0x310c7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x310c7c) {
            ctx->pc = 0x310C8Cu;
            goto label_310c8c;
        }
    }
    ctx->pc = 0x310C84u;
    // 0x310c84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x310C84u;
    {
        const bool branch_taken_0x310c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310C84u;
            // 0x310c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c84) {
            ctx->pc = 0x310CACu;
            goto label_310cac;
        }
    }
    ctx->pc = 0x310C8Cu;
label_310c8c:
    // 0x310c8c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310C8Cu;
    {
        const bool branch_taken_0x310c8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x310C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310C8Cu;
            // 0x310c90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c8c) {
            ctx->pc = 0x310C9Cu;
            goto label_310c9c;
        }
    }
    ctx->pc = 0x310C94u;
    // 0x310c94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x310C94u;
    {
        const bool branch_taken_0x310c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c94) {
            ctx->pc = 0x310CACu;
            goto label_310cac;
        }
    }
    ctx->pc = 0x310C9Cu;
label_310c9c:
    // 0x310c9c: 0x3863001c  xori        $v1, $v1, 0x1C
    ctx->pc = 0x310c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)28);
    // 0x310ca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x310ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ca4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x310ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x310ca8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x310ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_310cac:
    // 0x310cac: 0x3e00008  jr          $ra
    ctx->pc = 0x310CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310CB4u;
}
