#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuggyDamage__Fi
// Address: 0x3153f0 - 0x315428
void BuggyDamage__Fi_0x3153f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuggyDamage__Fi_0x3153f0");
#endif

    ctx->pc = 0x3153f0u;

    // 0x3153f0: 0x8f83a2e4  lw          $v1, -0x5D1C($gp)
    ctx->pc = 0x3153f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943460)));
    // 0x3153f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3153f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3153f8: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3153F8u;
    {
        const bool branch_taken_0x3153f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3153FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3153F8u;
            // 0x3153fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153f8) {
            ctx->pc = 0x315420u;
            goto label_315420;
        }
    }
    ctx->pc = 0x315400u;
    // 0x315400: 0xaf84a2fc  sw          $a0, -0x5D04($gp)
    ctx->pc = 0x315400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943484), GPR_U32(ctx, 4));
    // 0x315404: 0xaf83a2e4  sw          $v1, -0x5D1C($gp)
    ctx->pc = 0x315404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943460), GPR_U32(ctx, 3));
    // 0x315408: 0x8f838644  lw          $v1, -0x79BC($gp)
    ctx->pc = 0x315408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
    // 0x31540c: 0xaf80a2e8  sw          $zero, -0x5D18($gp)
    ctx->pc = 0x31540cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943464), GPR_U32(ctx, 0));
    // 0x315410: 0xaf85a2f4  sw          $a1, -0x5D0C($gp)
    ctx->pc = 0x315410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943476), GPR_U32(ctx, 5));
    // 0x315414: 0xaf85a310  sw          $a1, -0x5CF0($gp)
    ctx->pc = 0x315414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943504), GPR_U32(ctx, 5));
    // 0x315418: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x315418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31541c: 0xaf838644  sw          $v1, -0x79BC($gp)
    ctx->pc = 0x31541cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 3));
label_315420:
    // 0x315420: 0x3e00008  jr          $ra
    ctx->pc = 0x315420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x315428u;
}
