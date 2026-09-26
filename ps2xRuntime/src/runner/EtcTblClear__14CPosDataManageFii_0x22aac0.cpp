#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EtcTblClear__14CPosDataManageFii
// Address: 0x22aac0 - 0x22ab18
void EtcTblClear__14CPosDataManageFii_0x22aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EtcTblClear__14CPosDataManageFii_0x22aac0");
#endif

    switch (ctx->pc) {
        case 0x22aaf4u: goto label_22aaf4;
        default: break;
    }

    ctx->pc = 0x22aac0u;

    // 0x22aac0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x22aac0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22aac4: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x22aac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22aac8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22AAC8u;
    {
        const bool branch_taken_0x22aac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aac8) {
            ctx->pc = 0x22AAD4u;
            goto label_22aad4;
        }
    }
    ctx->pc = 0x22AAD0u;
    // 0x22aad0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x22aad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22aad4:
    // 0x22aad4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22aad8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22aad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aadc: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x22aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22aae0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x22aae0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22aae4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x22aae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22aae8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22aae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22aaec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22AAECu;
    {
        const bool branch_taken_0x22aaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AAECu;
            // 0x22aaf0: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aaec) {
            ctx->pc = 0x22AB00u;
            goto label_22ab00;
        }
    }
    ctx->pc = 0x22AAF4u;
label_22aaf4:
    // 0x22aaf4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x22aaf8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22aaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22aafc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x22aafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_22ab00:
    // 0x22ab00: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x22ab00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22ab04: 0x0  nop
    ctx->pc = 0x22ab04u;
    // NOP
    // 0x22ab08: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22AB08u;
    {
        const bool branch_taken_0x22ab08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ab08) {
            ctx->pc = 0x22AAF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22aaf4;
        }
    }
    ctx->pc = 0x22AB10u;
    // 0x22ab10: 0x3e00008  jr          $ra
    ctx->pc = 0x22AB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AB18u;
}
