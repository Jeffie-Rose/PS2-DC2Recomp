#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12mgCVisualMDTFv
// Address: 0x13eac0 - 0x13eb14
void Initialize__12mgCVisualMDTFv_0x13eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12mgCVisualMDTFv_0x13eac0");
#endif

    ctx->pc = 0x13eac0u;

    // 0x13eac0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x13eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x13eac4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x13eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x13eac8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x13eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x13eacc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x13eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x13ead0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x13ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x13ead4: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x13ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x13ead8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x13ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x13eadc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x13eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x13eae0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x13eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x13eae4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x13eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x13eae8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x13eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x13eaec: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x13eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x13eaf0: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x13eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x13eaf4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x13eaf8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13eafc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13eb00: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x13eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x13eb04: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x13eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x13eb08: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x13eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x13eb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB0Cu;
            // 0x13eb10: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EB14u;
}
