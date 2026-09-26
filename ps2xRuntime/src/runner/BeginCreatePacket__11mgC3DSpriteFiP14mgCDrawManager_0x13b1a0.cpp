#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager
// Address: 0x13b1a0 - 0x13b1f4
void BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0");
#endif

    ctx->pc = 0x13b1a0u;

    // 0x13b1a0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B1A0u;
    {
        const bool branch_taken_0x13b1a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b1a0) {
            ctx->pc = 0x13B1B0u;
            goto label_13b1b0;
        }
    }
    ctx->pc = 0x13B1A8u;
    // 0x13b1a8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x13b1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x13b1ac: 0x24c620e0  addiu       $a2, $a2, 0x20E0
    ctx->pc = 0x13b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8416));
label_13b1b0:
    // 0x13b1b0: 0x8cc60060  lw          $a2, 0x60($a2)
    ctx->pc = 0x13b1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x13b1b4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13b1b8: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x13b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x13b1bc: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x13b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13b1c0: 0x8cc70024  lw          $a3, 0x24($a2)
    ctx->pc = 0x13b1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x13b1c4: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x13b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13b1c8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x13b1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x13b1cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13b1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13b1d0: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x13b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x13b1d4: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x13b1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13b1d8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x13b1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x13b1dc: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x13b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x13b1e0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x13b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x13b1e4: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x13b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x13b1e8: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x13b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x13b1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13B1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B1ECu;
            // 0x13b1f0: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B1F4u;
}
