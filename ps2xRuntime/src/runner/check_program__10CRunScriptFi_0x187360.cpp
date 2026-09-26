#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: check_program__10CRunScriptFi
// Address: 0x187360 - 0x1873ac
void check_program__10CRunScriptFi_0x187360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("check_program__10CRunScriptFi_0x187360");
#endif

    switch (ctx->pc) {
        case 0x187378u: goto label_187378;
        default: break;
    }

    ctx->pc = 0x187360u;

    // 0x187360: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x187364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187368: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x187368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18736c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x18736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x187370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x187370u;
    {
        const bool branch_taken_0x187370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187370u;
            // 0x187374: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187370) {
            ctx->pc = 0x187394u;
            goto label_187394;
        }
    }
    ctx->pc = 0x187378u;
label_187378:
    // 0x187378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x187378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18737c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18737Cu;
    {
        const bool branch_taken_0x18737c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x187380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18737Cu;
            // 0x187380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18737c) {
            ctx->pc = 0x18738Cu;
            goto label_18738c;
        }
    }
    ctx->pc = 0x187384u;
    // 0x187384: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x187384u;
    {
        const bool branch_taken_0x187384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187384) {
            ctx->pc = 0x1873A4u;
            goto label_1873a4;
        }
    }
    ctx->pc = 0x18738Cu;
label_18738c:
    // 0x18738c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18738cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x187390: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x187390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_187394:
    // 0x187394: 0x0  nop
    ctx->pc = 0x187394u;
    // NOP
    // 0x187398: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x187398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18739c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18739Cu;
    {
        const bool branch_taken_0x18739c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1873A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18739Cu;
            // 0x1873a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18739c) {
            ctx->pc = 0x187378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_187378;
        }
    }
    ctx->pc = 0x1873A4u;
label_1873a4:
    // 0x1873a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1873A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1873ACu;
}
