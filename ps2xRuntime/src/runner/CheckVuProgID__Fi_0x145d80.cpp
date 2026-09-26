#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckVuProgID__Fi
// Address: 0x145d80 - 0x145e14
void CheckVuProgID__Fi_0x145d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckVuProgID__Fi_0x145d80");
#endif

    ctx->pc = 0x145d80u;

    // 0x145d80: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x145d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x145d84: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x145D84u;
    {
        const bool branch_taken_0x145d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D84u;
            // 0x145d88: 0x28810100  slti        $at, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d84) {
            ctx->pc = 0x145DB0u;
            goto label_145db0;
        }
    }
    ctx->pc = 0x145D8Cu;
    // 0x145d8c: 0x28810000  slti        $at, $a0, 0x0
    ctx->pc = 0x145d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x145d90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x145D90u;
    {
        const bool branch_taken_0x145d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D90u;
            // 0x145d94: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d90) {
            ctx->pc = 0x145DA0u;
            goto label_145da0;
        }
    }
    ctx->pc = 0x145D98u;
    // 0x145d98: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x145D98u;
    {
        const bool branch_taken_0x145d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D98u;
            // 0x145d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d98) {
            ctx->pc = 0x145E0Cu;
            goto label_145e0c;
        }
    }
    ctx->pc = 0x145DA0u;
label_145da0:
    // 0x145da0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x145DA0u;
    {
        const bool branch_taken_0x145da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DA0u;
            // 0x145da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145da0) {
            ctx->pc = 0x145E0Cu;
            goto label_145e0c;
        }
    }
    ctx->pc = 0x145DA8u;
    // 0x145da8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x145DA8u;
    {
        const bool branch_taken_0x145da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DA8u;
            // 0x145dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145da8) {
            ctx->pc = 0x145E0Cu;
            goto label_145e0c;
        }
    }
    ctx->pc = 0x145DB0u;
label_145db0:
    // 0x145db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x145DB0u;
    {
        const bool branch_taken_0x145db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DB0u;
            // 0x145db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145db0) {
            ctx->pc = 0x145DC0u;
            goto label_145dc0;
        }
    }
    ctx->pc = 0x145DB8u;
    // 0x145db8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x145DB8u;
    {
        const bool branch_taken_0x145db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145db8) {
            ctx->pc = 0x145E0Cu;
            goto label_145e0c;
        }
    }
    ctx->pc = 0x145DC0u;
label_145dc0:
    // 0x145dc0: 0x8f828890  lw          $v0, -0x7770($gp)
    ctx->pc = 0x145dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
    // 0x145dc4: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x145dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x145dc8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x145dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145dcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145DCCu;
    {
        const bool branch_taken_0x145dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DCCu;
            // 0x145dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145dcc) {
            ctx->pc = 0x145DDCu;
            goto label_145ddc;
        }
    }
    ctx->pc = 0x145DD4u;
    // 0x145dd4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x145DD4u;
    {
        const bool branch_taken_0x145dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145dd4) {
            ctx->pc = 0x145E0Cu;
            goto label_145e0c;
        }
    }
    ctx->pc = 0x145DDCu;
label_145ddc:
    // 0x145ddc: 0x8f83888c  lw          $v1, -0x7774($gp)
    ctx->pc = 0x145ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936716)));
    // 0x145de0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145DE0u;
    {
        const bool branch_taken_0x145de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x145DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DE0u;
            // 0x145de4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145de0) {
            ctx->pc = 0x145DF0u;
            goto label_145df0;
        }
    }
    ctx->pc = 0x145DE8u;
    // 0x145de8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145DE8u;
    {
        const bool branch_taken_0x145de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DE8u;
            // 0x145dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145de8) {
            ctx->pc = 0x145E0Cu;
            goto label_145e0c;
        }
    }
    ctx->pc = 0x145DF0u;
label_145df0:
    // 0x145df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145df4: 0x8c42fc00  lw          $v0, -0x400($v0)
    ctx->pc = 0x145df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966272)));
    // 0x145df8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145DF8u;
    {
        const bool branch_taken_0x145df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DF8u;
            // 0x145dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145df8) {
            ctx->pc = 0x145E08u;
            goto label_145e08;
        }
    }
    ctx->pc = 0x145E00u;
    // 0x145e00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x145E00u;
    {
        const bool branch_taken_0x145e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145e00) {
            ctx->pc = 0x145E0Cu;
            goto label_145e0c;
        }
    }
    ctx->pc = 0x145E08u;
label_145e08:
    // 0x145e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145e0c:
    // 0x145e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x145E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145E14u;
}
