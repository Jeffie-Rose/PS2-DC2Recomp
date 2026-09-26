#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMenuAdd2__FPiii
// Address: 0x251650 - 0x2516c0
void CalcMenuAdd2__FPiii_0x251650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMenuAdd2__FPiii_0x251650");
#endif

    ctx->pc = 0x251650u;

    // 0x251650: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251650u;
    {
        const bool branch_taken_0x251650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251650u;
            // 0x251654: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251650) {
            ctx->pc = 0x251660u;
            goto label_251660;
        }
    }
    ctx->pc = 0x251658u;
    // 0x251658: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x251658u;
    {
        const bool branch_taken_0x251658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251658) {
            ctx->pc = 0x2516B8u;
            goto label_2516b8;
        }
    }
    ctx->pc = 0x251660u;
label_251660:
    // 0x251660: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x251660u;
    {
        const bool branch_taken_0x251660 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x251660) {
            ctx->pc = 0x251684u;
            goto label_251684;
        }
    }
    ctx->pc = 0x251668u;
    // 0x251668: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x251668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25166c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x251670: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x251670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x251674: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x251674u;
    {
        const bool branch_taken_0x251674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x251678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251674u;
            // 0x251678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251674) {
            ctx->pc = 0x251684u;
            goto label_251684;
        }
    }
    ctx->pc = 0x25167Cu;
    // 0x25167c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25167Cu;
    {
        const bool branch_taken_0x25167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25167c) {
            ctx->pc = 0x2516B8u;
            goto label_2516b8;
        }
    }
    ctx->pc = 0x251684u;
label_251684:
    // 0x251684: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x251684u;
    {
        const bool branch_taken_0x251684 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x251684) {
            ctx->pc = 0x2516A8u;
            goto label_2516a8;
        }
    }
    ctx->pc = 0x25168Cu;
    // 0x25168c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251690: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x251690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x251694: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x251694u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251698: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x251698u;
    {
        const bool branch_taken_0x251698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25169Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251698u;
            // 0x25169c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251698) {
            ctx->pc = 0x2516A8u;
            goto label_2516a8;
        }
    }
    ctx->pc = 0x2516A0u;
    // 0x2516a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2516A0u;
    {
        const bool branch_taken_0x2516a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2516a0) {
            ctx->pc = 0x2516B8u;
            goto label_2516b8;
        }
    }
    ctx->pc = 0x2516A8u;
label_2516a8:
    // 0x2516a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2516a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2516ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2516acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2516b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2516b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2516b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2516b8:
    // 0x2516b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2516B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2516C0u;
}
