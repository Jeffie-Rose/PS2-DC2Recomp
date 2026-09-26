#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetIconDataSize__18CMemoryCardManagerFv
// Address: 0x2f1b90 - 0x2f1be8
void GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90");
#endif

    ctx->pc = 0x2f1b90u;

    // 0x2f1b90: 0x8c820944  lw          $v0, 0x944($a0)
    ctx->pc = 0x2f1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2372)));
    // 0x2f1b94: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x2f1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2f1b98: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1B98u;
    {
        const bool branch_taken_0x2f1b98 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F1B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1B98u;
            // 0x2f1b9c: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b98) {
            ctx->pc = 0x2F1BA8u;
            goto label_2f1ba8;
        }
    }
    ctx->pc = 0x2F1BA0u;
    // 0x2f1ba0: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x2f1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x2f1ba4: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x2f1ba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_2f1ba8:
    // 0x2f1ba8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2f1ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f1bac: 0x8c82096c  lw          $v0, 0x96C($a0)
    ctx->pc = 0x2f1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2412)));
    // 0x2f1bb0: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x2f1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2f1bb4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1BB4u;
    {
        const bool branch_taken_0x2f1bb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F1BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1BB4u;
            // 0x2f1bb8: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1bb4) {
            ctx->pc = 0x2F1BC4u;
            goto label_2f1bc4;
        }
    }
    ctx->pc = 0x2F1BBCu;
    // 0x2f1bbc: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x2f1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x2f1bc0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x2f1bc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_2f1bc4:
    // 0x2f1bc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2f1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f1bc8: 0x8c820994  lw          $v0, 0x994($a0)
    ctx->pc = 0x2f1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2452)));
    // 0x2f1bcc: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x2f1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2f1bd0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1BD0u;
    {
        const bool branch_taken_0x2f1bd0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F1BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1BD0u;
            // 0x2f1bd4: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1bd0) {
            ctx->pc = 0x2F1BE0u;
            goto label_2f1be0;
        }
    }
    ctx->pc = 0x2F1BD8u;
    // 0x2f1bd8: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x2f1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x2f1bdc: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x2f1bdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_2f1be0:
    // 0x2f1be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1BE0u;
            // 0x2f1be4: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1BE8u;
}
