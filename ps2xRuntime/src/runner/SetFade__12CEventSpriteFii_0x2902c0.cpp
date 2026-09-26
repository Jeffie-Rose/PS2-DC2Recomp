#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFade__12CEventSpriteFii
// Address: 0x2902c0 - 0x2902f8
void SetFade__12CEventSpriteFii_0x2902c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFade__12CEventSpriteFii_0x2902c0");
#endif

    ctx->pc = 0x2902c0u;

    // 0x2902c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2902c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2902c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2902c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2902c8: 0xac870078  sw          $a3, 0x78($a0)
    ctx->pc = 0x2902c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 7));
    // 0x2902cc: 0xac87007c  sw          $a3, 0x7C($a0)
    ctx->pc = 0x2902ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 7));
    // 0x2902d0: 0xac870080  sw          $a3, 0x80($a0)
    ctx->pc = 0x2902d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 7));
    // 0x2902d4: 0xac870084  sw          $a3, 0x84($a0)
    ctx->pc = 0x2902d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 7));
    // 0x2902d8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2902D8u;
    {
        const bool branch_taken_0x2902d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902D8u;
            // 0x2902dc: 0xac830078  sw          $v1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902d8) {
            ctx->pc = 0x2902ECu;
            goto label_2902ec;
        }
    }
    ctx->pc = 0x2902E0u;
    // 0x2902e0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2902e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2902e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2902E4u;
    {
        const bool branch_taken_0x2902e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902E4u;
            // 0x2902e8: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902e4) {
            ctx->pc = 0x2902F0u;
            goto label_2902f0;
        }
    }
    ctx->pc = 0x2902ECu;
label_2902ec:
    // 0x2902ec: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x2902ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
label_2902f0:
    // 0x2902f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2902F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2902F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902F0u;
            // 0x2902f4: 0xac860080  sw          $a2, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2902F8u;
}
