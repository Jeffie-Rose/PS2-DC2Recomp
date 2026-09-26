#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RegisterBtn__11CPadControlFiii
// Address: 0x2ed460 - 0x2ed49c
void RegisterBtn__11CPadControlFiii_0x2ed460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RegisterBtn__11CPadControlFiii_0x2ed460");
#endif

    ctx->pc = 0x2ed460u;

    // 0x2ed460: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED460u;
    {
        const bool branch_taken_0x2ed460 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2ED464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED460u;
            // 0x2ed464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed460) {
            ctx->pc = 0x2ED478u;
            goto label_2ed478;
        }
    }
    ctx->pc = 0x2ED468u;
    // 0x2ed468: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x2ed468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ed46c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED46Cu;
    {
        const bool branch_taken_0x2ed46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED46Cu;
            // 0x2ed470: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed46c) {
            ctx->pc = 0x2ED480u;
            goto label_2ed480;
        }
    }
    ctx->pc = 0x2ED474u;
    // 0x2ed474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed478:
    // 0x2ed478: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED478u;
    {
        const bool branch_taken_0x2ed478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed478) {
            ctx->pc = 0x2ED494u;
            goto label_2ed494;
        }
    }
    ctx->pc = 0x2ED480u;
label_2ed480:
    // 0x2ed480: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x2ed480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2ed484: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2ed484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ed488: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2ed488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2ed48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed490: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2ed490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2ed494:
    // 0x2ed494: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED49Cu;
}
