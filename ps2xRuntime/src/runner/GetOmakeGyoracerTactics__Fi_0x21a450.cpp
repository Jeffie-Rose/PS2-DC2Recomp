#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOmakeGyoracerTactics__Fi
// Address: 0x21a450 - 0x21a48c
void GetOmakeGyoracerTactics__Fi_0x21a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOmakeGyoracerTactics__Fi_0x21a450");
#endif

    ctx->pc = 0x21a450u;

    // 0x21a450: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A450u;
    {
        const bool branch_taken_0x21a450 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x21A454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A450u;
            // 0x21a454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a450) {
            ctx->pc = 0x21A464u;
            goto label_21a464;
        }
    }
    ctx->pc = 0x21A458u;
    // 0x21a458: 0x28810006  slti        $at, $a0, 0x6
    ctx->pc = 0x21a458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21a45c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A45Cu;
    {
        const bool branch_taken_0x21a45c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a45c) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A464u;
label_21a464:
    // 0x21a464: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21A464u;
    {
        const bool branch_taken_0x21a464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a464) {
            ctx->pc = 0x21A484u;
            goto label_21a484;
        }
    }
    ctx->pc = 0x21A46Cu;
label_21a46c:
    // 0x21a46c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21a470: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x21a470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21a474: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x21a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x21a478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a47c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x21a47cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a480: 0x0  nop
    ctx->pc = 0x21a480u;
    // NOP
label_21a484:
    // 0x21a484: 0x3e00008  jr          $ra
    ctx->pc = 0x21A484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A48Cu;
}
