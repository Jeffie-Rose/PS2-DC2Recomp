#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_TRIGGER_POWGAGE__FP12RS_STACKDATAi
// Address: 0x2760c0 - 0x276110
void ps2__SPHIDA_TRIGGER_POWGAGE__FP12RS_STACKDATAi_0x2760c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_TRIGGER_POWGAGE__FP12RS_STACKDATAi_0x2760c0");
#endif

    ctx->pc = 0x2760c0u;

    // 0x2760c0: 0x8f849ed4  lw          $a0, -0x612C($gp)
    ctx->pc = 0x2760c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x2760c4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2760C4u;
    {
        const bool branch_taken_0x2760c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2760C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2760C4u;
            // 0x2760c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760c4) {
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x2760CCu;
    // 0x2760cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2760CCu;
    {
        const bool branch_taken_0x2760cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760cc) {
            ctx->pc = 0x276108u;
            goto label_276108;
        }
    }
    ctx->pc = 0x2760D4u;
label_2760d4:
    // 0x2760d4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2760d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2760d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2760d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2760dc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2760DCu;
    {
        const bool branch_taken_0x2760dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2760E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2760DCu;
            // 0x2760e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760dc) {
            ctx->pc = 0x276100u;
            goto label_276100;
        }
    }
    ctx->pc = 0x2760E4u;
    // 0x2760e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2760e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2760e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2760E8u;
    {
        const bool branch_taken_0x2760e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2760ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2760E8u;
            // 0x2760ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760e8) {
            ctx->pc = 0x2760F8u;
            goto label_2760f8;
        }
    }
    ctx->pc = 0x2760F0u;
    // 0x2760f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2760F0u;
    {
        const bool branch_taken_0x2760f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2760F0u;
            // 0x2760f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760f0) {
            ctx->pc = 0x276108u;
            goto label_276108;
        }
    }
    ctx->pc = 0x2760F8u;
label_2760f8:
    // 0x2760f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2760F8u;
    {
        const bool branch_taken_0x2760f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2760F8u;
            // 0x2760fc: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760f8) {
            ctx->pc = 0x276104u;
            goto label_276104;
        }
    }
    ctx->pc = 0x276100u;
label_276100:
    // 0x276100: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x276100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_276104:
    // 0x276104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276108:
    // 0x276108: 0x3e00008  jr          $ra
    ctx->pc = 0x276108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276110u;
}
