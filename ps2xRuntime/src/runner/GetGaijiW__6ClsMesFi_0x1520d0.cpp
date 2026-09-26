#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGaijiW__6ClsMesFi
// Address: 0x1520d0 - 0x15211c
void GetGaijiW__6ClsMesFi_0x1520d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGaijiW__6ClsMesFi_0x1520d0");
#endif

    ctx->pc = 0x1520d0u;

    // 0x1520d0: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x1520d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x1520d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1520d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1520d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1520D8u;
    {
        const bool branch_taken_0x1520d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520D8u;
            // 0x1520dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520d8) {
            ctx->pc = 0x152114u;
            goto label_152114;
        }
    }
    ctx->pc = 0x1520E0u;
    // 0x1520e0: 0x3401fd32  ori         $at, $zero, 0xFD32
    ctx->pc = 0x1520e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64818);
    // 0x1520e4: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1520e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1520e8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1520E8u;
    {
        const bool branch_taken_0x1520e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520E8u;
            // 0x1520ec: 0x24a38000  addiu       $v1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520e8) {
            ctx->pc = 0x152114u;
            goto label_152114;
        }
    }
    ctx->pc = 0x1520F0u;
    // 0x1520f0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1520f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1520f4: 0x24648300  addiu       $a0, $v1, -0x7D00
    ctx->pc = 0x1520f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935296));
    // 0x1520f8: 0x244265cc  addiu       $v0, $v0, 0x65CC
    ctx->pc = 0x1520f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26060));
    // 0x1520fc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1520fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x152100: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x152100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152104: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x152104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15210c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x15210cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152110: 0x0  nop
    ctx->pc = 0x152110u;
    // NOP
label_152114:
    // 0x152114: 0x3e00008  jr          $ra
    ctx->pc = 0x152114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15211Cu;
}
