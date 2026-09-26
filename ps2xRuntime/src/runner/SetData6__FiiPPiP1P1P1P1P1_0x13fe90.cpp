#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetData6__FiiPPiP1P1P1P1P1
// Address: 0x13fe90 - 0x13feec
void SetData6__FiiPPiP1P1P1P1P1_0x13fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetData6__FiiPPiP1P1P1P1P1_0x13fe90");
#endif

    switch (ctx->pc) {
        case 0x13feb4u: goto label_13feb4;
        default: break;
    }

    ctx->pc = 0x13fe90u;

    // 0x13fe90: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x13fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x13fe94: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x13fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13fe98: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13fe9c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x13fea0: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13fea4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x13fea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fea8: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FEA8u;
    {
        const bool branch_taken_0x13fea8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13FEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEA8u;
            // 0x13feac: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fea8) {
            ctx->pc = 0x13FEDCu;
            goto label_13fedc;
        }
    }
    ctx->pc = 0x13FEB0u;
    // 0x13feb0: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x13feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_13feb4:
    // 0x13feb4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x13feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13feb8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13febc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13febcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13fec0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x13fec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x13fec4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x13fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x13fec8: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x13fec8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fecc: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x13feccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x13fed0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x13fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x13fed4: 0x1c80fff7  bgtz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13FED4u;
    {
        const bool branch_taken_0x13fed4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x13FED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FED4u;
            // 0x13fed8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fed4) {
            ctx->pc = 0x13FEB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13feb4;
        }
    }
    ctx->pc = 0x13FEDCu;
label_13fedc:
    // 0x13fedc: 0x0  nop
    ctx->pc = 0x13fedcu;
    // NOP
    // 0x13fee0: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x13fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x13fee4: 0x3e00008  jr          $ra
    ctx->pc = 0x13FEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEE4u;
            // 0x13fee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FEECu;
}
