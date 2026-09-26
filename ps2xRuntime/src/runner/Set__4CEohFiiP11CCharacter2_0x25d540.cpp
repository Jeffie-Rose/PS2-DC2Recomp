#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__4CEohFiiP11CCharacter2
// Address: 0x25d540 - 0x25d57c
void Set__4CEohFiiP11CCharacter2_0x25d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__4CEohFiiP11CCharacter2_0x25d540");
#endif

    ctx->pc = 0x25d540u;

    // 0x25d540: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D540u;
    {
        const bool branch_taken_0x25d540 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D540u;
            // 0x25d544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d540) {
            ctx->pc = 0x25D550u;
            goto label_25d550;
        }
    }
    ctx->pc = 0x25D548u;
    // 0x25d548: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25D548u;
    {
        const bool branch_taken_0x25d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d548) {
            ctx->pc = 0x25D574u;
            goto label_25d574;
        }
    }
    ctx->pc = 0x25D550u;
label_25d550:
    // 0x25d550: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x25d550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x25d554: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D558u;
    {
        const bool branch_taken_0x25d558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d558) {
            ctx->pc = 0x25D568u;
            goto label_25d568;
        }
    }
    ctx->pc = 0x25D560u;
    // 0x25d560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D560u;
    {
        const bool branch_taken_0x25d560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D560u;
            // 0x25d564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d560) {
            ctx->pc = 0x25D574u;
            goto label_25d574;
        }
    }
    ctx->pc = 0x25D568u;
label_25d568:
    // 0x25d568: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x25d568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x25d56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d570: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x25d570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_25d574:
    // 0x25d574: 0x3e00008  jr          $ra
    ctx->pc = 0x25D574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D57Cu;
}
