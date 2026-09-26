#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CMdsListSetFv
// Address: 0x1690d0 - 0x169148
void Initialize__11CMdsListSetFv_0x1690d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CMdsListSetFv_0x1690d0");
#endif

    switch (ctx->pc) {
        case 0x1690e4u: goto label_1690e4;
        case 0x16911cu: goto label_16911c;
        default: break;
    }

    ctx->pc = 0x1690d0u;

    // 0x1690d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1690d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1690d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1690d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1690d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1690dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1690DCu;
    {
        const bool branch_taken_0x1690dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690DCu;
            // 0x1690e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690dc) {
            ctx->pc = 0x1690F8u;
            goto label_1690f8;
        }
    }
    ctx->pc = 0x1690E4u;
label_1690e4:
    // 0x1690e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1690e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1690e8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1690e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1690ec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1690ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1690f0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1690f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1690f4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1690f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_1690f8:
    // 0x1690f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1690f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1690fc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1690fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x169100: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x169100u;
    {
        const bool branch_taken_0x169100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169100u;
            // 0x169104: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169100) {
            ctx->pc = 0x1690E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1690e4;
        }
    }
    ctx->pc = 0x169108u;
    // 0x169108: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x169108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16910c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169110: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x169110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x169114: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x169114u;
    {
        const bool branch_taken_0x169114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169114u;
            // 0x169118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169114) {
            ctx->pc = 0x16912Cu;
            goto label_16912c;
        }
    }
    ctx->pc = 0x16911Cu;
label_16911c:
    // 0x16911c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x169120: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x169120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
    // 0x169124: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x169124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x169128: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x169128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
label_16912c:
    // 0x16912c: 0x0  nop
    ctx->pc = 0x16912cu;
    // NOP
    // 0x169130: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x169130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x169134: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x169134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x169138: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x169138u;
    {
        const bool branch_taken_0x169138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16913Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169138u;
            // 0x16913c: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169138) {
            ctx->pc = 0x16911Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16911c;
        }
    }
    ctx->pc = 0x169140u;
    // 0x169140: 0x3e00008  jr          $ra
    ctx->pc = 0x169140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169148u;
}
