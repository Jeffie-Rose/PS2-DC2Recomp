#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchTransPalletNo__18CMenuPosDataManageFv
// Address: 0x22caa0 - 0x22cb0c
void SearchTransPalletNo__18CMenuPosDataManageFv_0x22caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchTransPalletNo__18CMenuPosDataManageFv_0x22caa0");
#endif

    switch (ctx->pc) {
        case 0x22caacu: goto label_22caac;
        case 0x22cac4u: goto label_22cac4;
        default: break;
    }

    ctx->pc = 0x22caa0u;

    // 0x22caa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22caa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22caa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22caa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22caa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22caa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22caac:
    // 0x22caac: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x22caacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22cab0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x22cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x22cab4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22CAB4u;
    {
        const bool branch_taken_0x22cab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cab4) {
            ctx->pc = 0x22CAF0u;
            goto label_22caf0;
        }
    }
    ctx->pc = 0x22CABCu;
    // 0x22cabc: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x22cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x22cac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22cac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cac4:
    // 0x22cac4: 0x0  nop
    ctx->pc = 0x22cac4u;
    // NOP
    // 0x22cac8: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x22cac8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x22cacc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CACCu;
    {
        const bool branch_taken_0x22cacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CACCu;
            // 0x22cad0: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cacc) {
            ctx->pc = 0x22CADCu;
            goto label_22cadc;
        }
    }
    ctx->pc = 0x22CAD4u;
    // 0x22cad4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22CAD4u;
    {
        const bool branch_taken_0x22cad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAD4u;
            // 0x22cad8: 0xa4670038  sh          $a3, 0x38($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cad4) {
            ctx->pc = 0x22CAF0u;
            goto label_22caf0;
        }
    }
    ctx->pc = 0x22CADCu;
label_22cadc:
    // 0x22cadc: 0x0  nop
    ctx->pc = 0x22cadcu;
    // NOP
    // 0x22cae0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22cae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22cae4: 0x28e30100  slti        $v1, $a3, 0x100
    ctx->pc = 0x22cae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x22cae8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x22CAE8u;
    {
        const bool branch_taken_0x22cae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAE8u;
            // 0x22caec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cae8) {
            ctx->pc = 0x22CAC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22cac4;
        }
    }
    ctx->pc = 0x22CAF0u;
label_22caf0:
    // 0x22caf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22caf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22caf4: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x22caf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22caf8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x22caf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x22cafc: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22CAFCu;
    {
        const bool branch_taken_0x22cafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAFCu;
            // 0x22cb00: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cafc) {
            ctx->pc = 0x22CAACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22caac;
        }
    }
    ctx->pc = 0x22CB04u;
    // 0x22cb04: 0x3e00008  jr          $ra
    ctx->pc = 0x22CB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CB0Cu;
}
