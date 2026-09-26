#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGaijiH__5CFontFi
// Address: 0x2d5760 - 0x2d57ac
void GetGaijiH__5CFontFi_0x2d5760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGaijiH__5CFontFi_0x2d5760");
#endif

    ctx->pc = 0x2d5760u;

    // 0x2d5760: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x2d5760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x2d5764: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d5764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5768: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D5768u;
    {
        const bool branch_taken_0x2d5768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5768u;
            // 0x2d576c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5768) {
            ctx->pc = 0x2D57A4u;
            goto label_2d57a4;
        }
    }
    ctx->pc = 0x2D5770u;
    // 0x2d5770: 0x3401fd32  ori         $at, $zero, 0xFD32
    ctx->pc = 0x2d5770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64818);
    // 0x2d5774: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x2d5774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2d5778: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5778u;
    {
        const bool branch_taken_0x2d5778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5778u;
            // 0x2d577c: 0x24a38000  addiu       $v1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5778) {
            ctx->pc = 0x2D57A4u;
            goto label_2d57a4;
        }
    }
    ctx->pc = 0x2D5780u;
    // 0x2d5780: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d5780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d5784: 0x24648300  addiu       $a0, $v1, -0x7D00
    ctx->pc = 0x2d5784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935296));
    // 0x2d5788: 0x244265d0  addiu       $v0, $v0, 0x65D0
    ctx->pc = 0x2d5788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26064));
    // 0x2d578c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2d578cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d5790: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d5790u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5794: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d579c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2d579cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d57a0: 0x0  nop
    ctx->pc = 0x2d57a0u;
    // NOP
label_2d57a4:
    // 0x2d57a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D57A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D57ACu;
}
