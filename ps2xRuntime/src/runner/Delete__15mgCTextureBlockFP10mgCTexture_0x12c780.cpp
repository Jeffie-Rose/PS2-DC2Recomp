#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Delete__15mgCTextureBlockFP10mgCTexture
// Address: 0x12c780 - 0x12c7d8
void Delete__15mgCTextureBlockFP10mgCTexture_0x12c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Delete__15mgCTextureBlockFP10mgCTexture_0x12c780");
#endif

    switch (ctx->pc) {
        case 0x12c790u: goto label_12c790;
        default: break;
    }

    ctx->pc = 0x12c780u;

    // 0x12c780: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x12c780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12c784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c788: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12C788u;
    {
        const bool branch_taken_0x12c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c788) {
            ctx->pc = 0x12C7C4u;
            goto label_12c7c4;
        }
    }
    ctx->pc = 0x12C790u;
label_12c790:
    // 0x12c790: 0x14c50009  bne         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12C790u;
    {
        const bool branch_taken_0x12c790 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x12c790) {
            ctx->pc = 0x12C7B8u;
            goto label_12c7b8;
        }
    }
    ctx->pc = 0x12C798u;
    // 0x12c798: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C798u;
    {
        const bool branch_taken_0x12c798 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c798) {
            ctx->pc = 0x12C7B0u;
            goto label_12c7b0;
        }
    }
    ctx->pc = 0x12C7A0u;
    // 0x12c7a0: 0x8cc30068  lw          $v1, 0x68($a2)
    ctx->pc = 0x12c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x12c7a4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x12c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x12c7a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C7A8u;
    {
        const bool branch_taken_0x12c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c7a8) {
            ctx->pc = 0x12C7B8u;
            goto label_12c7b8;
        }
    }
    ctx->pc = 0x12C7B0u;
label_12c7b0:
    // 0x12c7b0: 0x8cc30068  lw          $v1, 0x68($a2)
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x12c7b4: 0xace30068  sw          $v1, 0x68($a3)
    ctx->pc = 0x12c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 3));
label_12c7b8:
    // 0x12c7b8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12c7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7bc: 0x8cc60068  lw          $a2, 0x68($a2)
    ctx->pc = 0x12c7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x12c7c0: 0x0  nop
    ctx->pc = 0x12c7c0u;
    // NOP
label_12c7c4:
    // 0x12c7c4: 0x0  nop
    ctx->pc = 0x12c7c4u;
    // NOP
    // 0x12c7c8: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x12C7C8u;
    {
        const bool branch_taken_0x12c7c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c7c8) {
            ctx->pc = 0x12C790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c790;
        }
    }
    ctx->pc = 0x12C7D0u;
    // 0x12c7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x12C7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C7D8u;
}
