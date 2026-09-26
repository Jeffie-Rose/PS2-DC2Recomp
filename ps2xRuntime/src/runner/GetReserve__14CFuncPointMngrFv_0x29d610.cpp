#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetReserve__14CFuncPointMngrFv
// Address: 0x29d610 - 0x29d69c
void GetReserve__14CFuncPointMngrFv_0x29d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetReserve__14CFuncPointMngrFv_0x29d610");
#endif

    switch (ctx->pc) {
        case 0x29d648u: goto label_29d648;
        default: break;
    }

    ctx->pc = 0x29d610u;

    // 0x29d610: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d614: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D614u;
    {
        const bool branch_taken_0x29d614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d614) {
            ctx->pc = 0x29D624u;
            goto label_29d624;
        }
    }
    ctx->pc = 0x29D61Cu;
    // 0x29d61c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x29D61Cu;
    {
        const bool branch_taken_0x29d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D61Cu;
            // 0x29d620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d61c) {
            ctx->pc = 0x29D694u;
            goto label_29d694;
        }
    }
    ctx->pc = 0x29D624u;
label_29d624:
    // 0x29d624: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x29d624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29d628: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29D628u;
    {
        const bool branch_taken_0x29d628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d628) {
            ctx->pc = 0x29D670u;
            goto label_29d670;
        }
    }
    ctx->pc = 0x29D630u;
    // 0x29d630: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d634: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D634u;
    {
        const bool branch_taken_0x29d634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D634u;
            // 0x29d638: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d634) {
            ctx->pc = 0x29D640u;
            goto label_29d640;
        }
    }
    ctx->pc = 0x29D63Cu;
    // 0x29d63c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x29d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_29d640:
    // 0x29d640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29D640u;
    {
        const bool branch_taken_0x29d640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D640u;
            // 0x29d644: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d640) {
            ctx->pc = 0x29D64Cu;
            goto label_29d64c;
        }
    }
    ctx->pc = 0x29D648u;
label_29d648:
    // 0x29d648: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x29d648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d64c:
    // 0x29d64c: 0x0  nop
    ctx->pc = 0x29d64cu;
    // NOP
    // 0x29d650: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x29d650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29d654: 0x0  nop
    ctx->pc = 0x29d654u;
    // NOP
    // 0x29d658: 0x0  nop
    ctx->pc = 0x29d658u;
    // NOP
    // 0x29d65c: 0x0  nop
    ctx->pc = 0x29d65cu;
    // NOP
    // 0x29d660: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29D660u;
    {
        const bool branch_taken_0x29d660 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d660) {
            ctx->pc = 0x29D648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d648;
        }
    }
    ctx->pc = 0x29D668u;
    // 0x29d668: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29D668u;
    {
        const bool branch_taken_0x29d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D668u;
            // 0x29d66c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d668) {
            ctx->pc = 0x29D68Cu;
            goto label_29d68c;
        }
    }
    ctx->pc = 0x29D670u;
label_29d670:
    // 0x29d670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d674: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D674u;
    {
        const bool branch_taken_0x29d674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d674) {
            ctx->pc = 0x29D680u;
            goto label_29d680;
        }
    }
    ctx->pc = 0x29D67Cu;
    // 0x29d67c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29d680:
    // 0x29d680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d684: 0x0  nop
    ctx->pc = 0x29d684u;
    // NOP
    // 0x29d688: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29d688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_29d68c:
    // 0x29d68c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x29d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29d690: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29d690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_29d694:
    // 0x29d694: 0x3e00008  jr          $ra
    ctx->pc = 0x29D694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D69Cu;
}
