#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditOnGround__Fv
// Address: 0x1a4120 - 0x1a415c
void EditOnGround__Fv_0x1a4120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditOnGround__Fv_0x1a4120");
#endif

    ctx->pc = 0x1a4120u;

    // 0x1a4120: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x1a4120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1a4124: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4124u;
    {
        const bool branch_taken_0x1a4124 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A4128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4124u;
            // 0x1a4128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4124) {
            ctx->pc = 0x1A4134u;
            goto label_1a4134;
        }
    }
    ctx->pc = 0x1A412Cu;
    // 0x1a412c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A412Cu;
    {
        const bool branch_taken_0x1a412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a412c) {
            ctx->pc = 0x1A4154u;
            goto label_1a4154;
        }
    }
    ctx->pc = 0x1A4134u;
label_1a4134:
    // 0x1a4134: 0x8f828ba0  lw          $v0, -0x7460($gp)
    ctx->pc = 0x1a4134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937504)));
    // 0x1a4138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4138u;
    {
        const bool branch_taken_0x1a4138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4138u;
            // 0x1a413c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4138) {
            ctx->pc = 0x1A4148u;
            goto label_1a4148;
        }
    }
    ctx->pc = 0x1A4140u;
    // 0x1a4140: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4140u;
    {
        const bool branch_taken_0x1a4140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4140) {
            ctx->pc = 0x1A4154u;
            goto label_1a4154;
        }
    }
    ctx->pc = 0x1A4148u;
label_1a4148:
    // 0x1a4148: 0x8f828b98  lw          $v0, -0x7468($gp)
    ctx->pc = 0x1a4148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937496)));
    // 0x1a414c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a414cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a4150: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a4150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a4154:
    // 0x1a4154: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A415Cu;
}
