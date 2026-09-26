#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSystemMessage__Fi
// Address: 0x196780 - 0x1967b8
void GetSystemMessage__Fi_0x196780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSystemMessage__Fi_0x196780");
#endif

    ctx->pc = 0x196780u;

    // 0x196780: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196784: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196784u;
    {
        const bool branch_taken_0x196784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x196788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196784u;
            // 0x196788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196784) {
            ctx->pc = 0x196798u;
            goto label_196798;
        }
    }
    ctx->pc = 0x19678Cu;
    // 0x19678c: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x196790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x196790u;
    {
        const bool branch_taken_0x196790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196790u;
            // 0x196794: 0x24428e80  addiu       $v0, $v0, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196790) {
            ctx->pc = 0x1967B0u;
            goto label_1967b0;
        }
    }
    ctx->pc = 0x196798u;
label_196798:
    // 0x196798: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196798u;
    {
        const bool branch_taken_0x196798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196798u;
            // 0x19679c: 0x3c0201e9  lui         $v0, 0x1E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)489 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196798) {
            ctx->pc = 0x1967ACu;
            goto label_1967ac;
        }
    }
    ctx->pc = 0x1967A0u;
    // 0x1967a0: 0x3c0201e9  lui         $v0, 0x1E9
    ctx->pc = 0x1967a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)489 << 16));
    // 0x1967a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1967A4u;
    {
        const bool branch_taken_0x1967a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1967A4u;
            // 0x1967a8: 0x24426ca0  addiu       $v0, $v0, 0x6CA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967a4) {
            ctx->pc = 0x1967B0u;
            goto label_1967b0;
        }
    }
    ctx->pc = 0x1967ACu;
label_1967ac:
    // 0x1967ac: 0x24424ac0  addiu       $v0, $v0, 0x4AC0
    ctx->pc = 0x1967acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19136));
label_1967b0:
    // 0x1967b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1967B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1967B8u;
}
