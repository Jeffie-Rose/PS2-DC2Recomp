#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartsType__14CEditPartsInfoFv
// Address: 0x1b5630 - 0x1b5668
void GetPartsType__14CEditPartsInfoFv_0x1b5630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartsType__14CEditPartsInfoFv_0x1b5630");
#endif

    ctx->pc = 0x1b5630u;

    // 0x1b5630: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b5630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b5634: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1b5634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1b5638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5638u;
    {
        const bool branch_taken_0x1b5638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5638u;
            // 0x1b563c: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5638) {
            ctx->pc = 0x1B5648u;
            goto label_1b5648;
        }
    }
    ctx->pc = 0x1B5640u;
    // 0x1b5640: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5640u;
    {
        const bool branch_taken_0x1b5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5640u;
            // 0x1b5644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5640) {
            ctx->pc = 0x1B5660u;
            goto label_1b5660;
        }
    }
    ctx->pc = 0x1B5648u;
label_1b5648:
    // 0x1b5648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5648u;
    {
        const bool branch_taken_0x1b5648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5648u;
            // 0x1b564c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5648) {
            ctx->pc = 0x1B5658u;
            goto label_1b5658;
        }
    }
    ctx->pc = 0x1B5650u;
    // 0x1b5650: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5650u;
    {
        const bool branch_taken_0x1b5650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5650) {
            ctx->pc = 0x1B5660u;
            goto label_1b5660;
        }
    }
    ctx->pc = 0x1B5658u;
label_1b5658:
    // 0x1b5658: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1b5658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b565c: 0x0  nop
    ctx->pc = 0x1b565cu;
    // NOP
label_1b5660:
    // 0x1b5660: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5668u;
}
