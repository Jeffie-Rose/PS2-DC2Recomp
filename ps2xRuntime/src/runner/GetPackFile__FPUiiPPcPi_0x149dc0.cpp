#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPackFile__FPUiiPPcPi
// Address: 0x149dc0 - 0x149e1c
void GetPackFile__FPUiiPPcPi_0x149dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPackFile__FPUiiPPcPi_0x149dc0");
#endif

    switch (ctx->pc) {
        case 0x149dd8u: goto label_149dd8;
        default: break;
    }

    ctx->pc = 0x149dc0u;

    // 0x149dc0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149DC0u;
    {
        const bool branch_taken_0x149dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x149DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149DC0u;
            // 0x149dc4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149dc0) {
            ctx->pc = 0x149DD0u;
            goto label_149dd0;
        }
    }
    ctx->pc = 0x149DC8u;
    // 0x149dc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x149DC8u;
    {
        const bool branch_taken_0x149dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149DC8u;
            // 0x149dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149dc8) {
            ctx->pc = 0x149E14u;
            goto label_149e14;
        }
    }
    ctx->pc = 0x149DD0u;
label_149dd0:
    // 0x149dd0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x149DD0u;
    {
        const bool branch_taken_0x149dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149dd0) {
            ctx->pc = 0x149E08u;
            goto label_149e08;
        }
    }
    ctx->pc = 0x149DD8u;
label_149dd8:
    // 0x149dd8: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x149DD8u;
    {
        const bool branch_taken_0x149dd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x149dd8) {
            ctx->pc = 0x149DFCu;
            goto label_149dfc;
        }
    }
    ctx->pc = 0x149DE0u;
    // 0x149de0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x149de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x149de4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x149DE4u;
    {
        const bool branch_taken_0x149de4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x149DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149DE4u;
            // 0x149de8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149de4) {
            ctx->pc = 0x149DF4u;
            goto label_149df4;
        }
    }
    ctx->pc = 0x149DECu;
    // 0x149dec: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x149decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x149df0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x149df0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_149df4:
    // 0x149df4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149DF4u;
    {
        const bool branch_taken_0x149df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149DF4u;
            // 0x149df8: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149df4) {
            ctx->pc = 0x149E14u;
            goto label_149e14;
        }
    }
    ctx->pc = 0x149DFCu;
label_149dfc:
    // 0x149dfc: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x149dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x149e00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149e04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x149e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_149e08:
    // 0x149e08: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x149e08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149e0c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x149E0Cu;
    {
        const bool branch_taken_0x149e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149E0Cu;
            // 0x149e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e0c) {
            ctx->pc = 0x149DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149dd8;
        }
    }
    ctx->pc = 0x149E14u;
label_149e14:
    // 0x149e14: 0x3e00008  jr          $ra
    ctx->pc = 0x149E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149E1Cu;
}
