#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: readBufBeginPut__FP7ReadBufPPUc
// Address: 0x29aef0 - 0x29af2c
void readBufBeginPut__FP7ReadBufPPUc_0x29aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufBeginPut__FP7ReadBufPPUc_0x29aef0");
#endif

    ctx->pc = 0x29aef0u;

    // 0x29aef0: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29aef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29aef4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29aef4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29aef8: 0x8c230008  lw          $v1, 0x8($at)
    ctx->pc = 0x29aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x29aefc: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29aefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29af00: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29af00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29af04: 0x8c220004  lw          $v0, 0x4($at)
    ctx->pc = 0x29af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x29af08: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x29af08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29af0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AF0Cu;
    {
        const bool branch_taken_0x29af0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF0Cu;
            // 0x29af10: 0x3c010005  lui         $at, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af0c) {
            ctx->pc = 0x29AF24u;
            goto label_29af24;
        }
    }
    ctx->pc = 0x29AF14u;
    // 0x29af14: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29af14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29af18: 0x8c230000  lw          $v1, 0x0($at)
    ctx->pc = 0x29af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x29af1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29af20: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29af20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_29af24:
    // 0x29af24: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AF2Cu;
}
