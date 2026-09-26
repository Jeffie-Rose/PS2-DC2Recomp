#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _search_svdata
// Address: 0x112fb0 - 0x112ffc
void _search_svdata_0x112fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_search_svdata_0x112fb0");
#endif

    switch (ctx->pc) {
        case 0x112fc0u: goto label_112fc0;
        case 0x112fd0u: goto label_112fd0;
        default: break;
    }

    ctx->pc = 0x112fb0u;

    // 0x112fb0: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x112fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x112fb4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x112FB4u;
    {
        const bool branch_taken_0x112fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x112fb4) {
            ctx->pc = 0x112FF4u;
            goto label_112ff4;
        }
    }
    ctx->pc = 0x112FBCu;
    // 0x112fbc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x112fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_112fc0:
    // 0x112fc0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x112FC0u;
    {
        const bool branch_taken_0x112fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112fc0) {
            ctx->pc = 0x112FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112FC0u;
            // 0x112fc4: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112FECu;
            goto label_112fec;
        }
    }
    ctx->pc = 0x112FC8u;
    // 0x112fc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x112fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112fcc: 0x0  nop
    ctx->pc = 0x112fccu;
    // NOP
label_112fd0:
    // 0x112fd0: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112FD0u;
    {
        const bool branch_taken_0x112fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x112fd0) {
            ctx->pc = 0x112FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112FD0u;
            // 0x112fd4: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112FE0u;
            goto label_112fe0;
        }
    }
    ctx->pc = 0x112FD8u;
    // 0x112fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x112FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112FD8u;
            // 0x112fdc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112FE0u;
label_112fe0:
    // 0x112fe0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x112FE0u;
    {
        const bool branch_taken_0x112fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112fe0) {
            ctx->pc = 0x112FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112FE0u;
            // 0x112fe4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112fd0;
        }
    }
    ctx->pc = 0x112FE8u;
    // 0x112fe8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x112fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_112fec:
    // 0x112fec: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x112FECu;
    {
        const bool branch_taken_0x112fec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x112fec) {
            ctx->pc = 0x112FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112FECu;
            // 0x112ff0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112fc0;
        }
    }
    ctx->pc = 0x112FF4u;
label_112ff4:
    // 0x112ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x112FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112FF4u;
            // 0x112ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112FFCu;
}
