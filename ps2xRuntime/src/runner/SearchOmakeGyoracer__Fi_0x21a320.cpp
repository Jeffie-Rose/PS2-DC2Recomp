#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchOmakeGyoracer__Fi
// Address: 0x21a320 - 0x21a388
void SearchOmakeGyoracer__Fi_0x21a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchOmakeGyoracer__Fi_0x21a320");
#endif

    switch (ctx->pc) {
        case 0x21a338u: goto label_21a338;
        default: break;
    }

    ctx->pc = 0x21a320u;

    // 0x21a320: 0x4810012  bgez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21A320u;
    {
        const bool branch_taken_0x21a320 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x21A324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A320u;
            // 0x21a324: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a320) {
            ctx->pc = 0x21A36Cu;
            goto label_21a36c;
        }
    }
    ctx->pc = 0x21A328u;
    // 0x21a328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a330: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x21a330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x21a334: 0x2484fea0  addiu       $a0, $a0, -0x160
    ctx->pc = 0x21a334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966944));
label_21a338:
    // 0x21a338: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x21a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21a33c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x21a33cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a340: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x21a340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x21a344: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A344u;
    {
        const bool branch_taken_0x21a344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a344) {
            ctx->pc = 0x21A354u;
            goto label_21a354;
        }
    }
    ctx->pc = 0x21A34Cu;
    // 0x21a34c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21A34Cu;
    {
        const bool branch_taken_0x21a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a34c) {
            ctx->pc = 0x21A380u;
            goto label_21a380;
        }
    }
    ctx->pc = 0x21A354u;
label_21a354:
    // 0x21a354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a358: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x21a358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21a35c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x21A35Cu;
    {
        const bool branch_taken_0x21a35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A35Cu;
            // 0x21a360: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a35c) {
            ctx->pc = 0x21A338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a338;
        }
    }
    ctx->pc = 0x21A364u;
    // 0x21a364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21A364u;
    {
        const bool branch_taken_0x21a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A364u;
            // 0x21a368: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a364) {
            ctx->pc = 0x21A380u;
            goto label_21a380;
        }
    }
    ctx->pc = 0x21A36Cu;
label_21a36c:
    // 0x21a36c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x21a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21a370: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x21a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
    // 0x21a374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a378: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x21a378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a37c: 0x0  nop
    ctx->pc = 0x21a37cu;
    // NOP
label_21a380:
    // 0x21a380: 0x3e00008  jr          $ra
    ctx->pc = 0x21A380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A388u;
}
