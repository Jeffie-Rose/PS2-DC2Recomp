#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseStart__FP10PAUSE_INFO
// Address: 0x309ca0 - 0x309cf8
void PauseStart__FP10PAUSE_INFO_0x309ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseStart__FP10PAUSE_INFO_0x309ca0");
#endif

    ctx->pc = 0x309ca0u;

    // 0x309ca0: 0x8f82a1ac  lw          $v0, -0x5E54($gp)
    ctx->pc = 0x309ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943148)));
    // 0x309ca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309CA4u;
    {
        const bool branch_taken_0x309ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309CA4u;
            // 0x309ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ca4) {
            ctx->pc = 0x309CB4u;
            goto label_309cb4;
        }
    }
    ctx->pc = 0x309CACu;
    // 0x309cac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x309CACu;
    {
        const bool branch_taken_0x309cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309cac) {
            ctx->pc = 0x309CF0u;
            goto label_309cf0;
        }
    }
    ctx->pc = 0x309CB4u;
label_309cb4:
    // 0x309cb4: 0x8f82a1b0  lw          $v0, -0x5E50($gp)
    ctx->pc = 0x309cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943152)));
    // 0x309cb8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309CB8u;
    {
        const bool branch_taken_0x309cb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x309CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309CB8u;
            // 0x309cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cb8) {
            ctx->pc = 0x309CC8u;
            goto label_309cc8;
        }
    }
    ctx->pc = 0x309CC0u;
    // 0x309cc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x309CC0u;
    {
        const bool branch_taken_0x309cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309CC0u;
            // 0x309cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cc0) {
            ctx->pc = 0x309CF0u;
            goto label_309cf0;
        }
    }
    ctx->pc = 0x309CC8u;
label_309cc8:
    // 0x309cc8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x309cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x309ccc: 0xaf83a1b0  sw          $v1, -0x5E50($gp)
    ctx->pc = 0x309cccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943152), GPR_U32(ctx, 3));
    // 0x309cd0: 0xaf80a1c0  sw          $zero, -0x5E40($gp)
    ctx->pc = 0x309cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943168), GPR_U32(ctx, 0));
    // 0x309cd4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x309cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x309cd8: 0xaf82a1a8  sw          $v0, -0x5E58($gp)
    ctx->pc = 0x309cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943144), GPR_U32(ctx, 2));
    // 0x309cdc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x309cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x309ce0: 0xaf85a1b8  sw          $a1, -0x5E48($gp)
    ctx->pc = 0x309ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943160), GPR_U32(ctx, 5));
    // 0x309ce4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x309ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x309ce8: 0xaf84a1bc  sw          $a0, -0x5E44($gp)
    ctx->pc = 0x309ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943164), GPR_U32(ctx, 4));
    // 0x309cec: 0xaf83a1c4  sw          $v1, -0x5E3C($gp)
    ctx->pc = 0x309cecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943172), GPR_U32(ctx, 3));
label_309cf0:
    // 0x309cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x309CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309CF8u;
}
