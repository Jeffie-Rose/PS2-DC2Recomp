#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveCharaIDForItemCmd__13CMenuItemInfoFv
// Address: 0x243080 - 0x2430f8
void GetActiveCharaIDForItemCmd__13CMenuItemInfoFv_0x243080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveCharaIDForItemCmd__13CMenuItemInfoFv_0x243080");
#endif

    ctx->pc = 0x243080u;

    // 0x243080: 0x84840110  lh          $a0, 0x110($a0)
    ctx->pc = 0x243080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x243084: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243084u;
    {
        const bool branch_taken_0x243084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x243088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243084u;
            // 0x243088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243084) {
            ctx->pc = 0x243094u;
            goto label_243094;
        }
    }
    ctx->pc = 0x24308Cu;
    // 0x24308c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24308Cu;
    {
        const bool branch_taken_0x24308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24308Cu;
            // 0x243090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24308c) {
            ctx->pc = 0x2430F0u;
            goto label_2430f0;
        }
    }
    ctx->pc = 0x243094u;
label_243094:
    // 0x243094: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243094u;
    {
        const bool branch_taken_0x243094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x243094) {
            ctx->pc = 0x2430A4u;
            goto label_2430a4;
        }
    }
    ctx->pc = 0x24309Cu;
    // 0x24309c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24309Cu;
    {
        const bool branch_taken_0x24309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24309c) {
            ctx->pc = 0x2430F0u;
            goto label_2430f0;
        }
    }
    ctx->pc = 0x2430A4u;
label_2430a4:
    // 0x2430a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2430a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2430a8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2430A8u;
    {
        const bool branch_taken_0x2430a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2430ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430A8u;
            // 0x2430ac: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430a8) {
            ctx->pc = 0x2430B8u;
            goto label_2430b8;
        }
    }
    ctx->pc = 0x2430B0u;
    // 0x2430b0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2430B0u;
    {
        const bool branch_taken_0x2430b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2430B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430B0u;
            // 0x2430b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430b0) {
            ctx->pc = 0x2430CCu;
            goto label_2430cc;
        }
    }
    ctx->pc = 0x2430B8u;
label_2430b8:
    // 0x2430b8: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x2430b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2430bc: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2430bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2430c0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2430c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2430c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2430C4u;
    {
        const bool branch_taken_0x2430c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430C4u;
            // 0x2430c8: 0x84224d96  lh          $v0, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430c4) {
            ctx->pc = 0x2430F0u;
            goto label_2430f0;
        }
    }
    ctx->pc = 0x2430CCu;
label_2430cc:
    // 0x2430cc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2430CCu;
    {
        const bool branch_taken_0x2430cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2430cc) {
            ctx->pc = 0x2430DCu;
            goto label_2430dc;
        }
    }
    ctx->pc = 0x2430D4u;
    // 0x2430d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2430D4u;
    {
        const bool branch_taken_0x2430d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2430d4) {
            ctx->pc = 0x2430F0u;
            goto label_2430f0;
        }
    }
    ctx->pc = 0x2430DCu;
label_2430dc:
    // 0x2430dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2430dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2430e0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2430E0u;
    {
        const bool branch_taken_0x2430e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2430E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430E0u;
            // 0x2430e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430e0) {
            ctx->pc = 0x2430F0u;
            goto label_2430f0;
        }
    }
    ctx->pc = 0x2430E8u;
    // 0x2430e8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2430E8u;
    {
        const bool branch_taken_0x2430e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430E8u;
            // 0x2430ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430e8) {
            ctx->pc = 0x2430F0u;
            goto label_2430f0;
        }
    }
    ctx->pc = 0x2430F0u;
label_2430f0:
    // 0x2430f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2430F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2430F8u;
}
