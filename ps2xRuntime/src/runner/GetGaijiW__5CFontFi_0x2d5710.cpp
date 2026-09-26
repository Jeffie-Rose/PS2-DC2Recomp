#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGaijiW__5CFontFi
// Address: 0x2d5710 - 0x2d575c
void GetGaijiW__5CFontFi_0x2d5710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGaijiW__5CFontFi_0x2d5710");
#endif

    ctx->pc = 0x2d5710u;

    // 0x2d5710: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x2d5710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x2d5714: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d5714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5718: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D5718u;
    {
        const bool branch_taken_0x2d5718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5718u;
            // 0x2d571c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5718) {
            ctx->pc = 0x2D5754u;
            goto label_2d5754;
        }
    }
    ctx->pc = 0x2D5720u;
    // 0x2d5720: 0x3401fd32  ori         $at, $zero, 0xFD32
    ctx->pc = 0x2d5720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64818);
    // 0x2d5724: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x2d5724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2d5728: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5728u;
    {
        const bool branch_taken_0x2d5728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5728u;
            // 0x2d572c: 0x24a38000  addiu       $v1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5728) {
            ctx->pc = 0x2D5754u;
            goto label_2d5754;
        }
    }
    ctx->pc = 0x2D5730u;
    // 0x2d5730: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d5730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d5734: 0x24648300  addiu       $a0, $v1, -0x7D00
    ctx->pc = 0x2d5734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935296));
    // 0x2d5738: 0x244265cc  addiu       $v0, $v0, 0x65CC
    ctx->pc = 0x2d5738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26060));
    // 0x2d573c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2d573cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d5740: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d5740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d574c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2d574cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5750: 0x0  nop
    ctx->pc = 0x2d5750u;
    // NOP
label_2d5754:
    // 0x2d5754: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D575Cu;
}
