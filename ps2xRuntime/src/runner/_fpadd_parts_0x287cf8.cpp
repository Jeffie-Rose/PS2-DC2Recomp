#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _fpadd_parts
// Address: 0x287cf8 - 0x287f38
void _fpadd_parts_0x287cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fpadd_parts_0x287cf8");
#endif

    switch (ctx->pc) {
        case 0x287d0cu: goto label_287d0c;
        case 0x287d20u: goto label_287d20;
        case 0x287dd8u: goto label_287dd8;
        case 0x287e10u: goto label_287e10;
        case 0x287ec0u: goto label_287ec0;
        default: break;
    }

    ctx->pc = 0x287cf8u;

    // 0x287cf8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x287cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cfc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x287cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x287d00: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x287d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x287d04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287D04u;
    {
        const bool branch_taken_0x287d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287d04) {
            ctx->pc = 0x287D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287D04u;
            // 0x287d08: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287D14u;
            goto label_287d14;
        }
    }
    ctx->pc = 0x287D0Cu;
label_287d0c:
    // 0x287d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x287D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D0Cu;
            // 0x287d10: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287D14u;
label_287d14:
    // 0x287d14: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x287d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x287d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287D18u;
    {
        const bool branch_taken_0x287d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D18u;
            // 0x287d1c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d18) {
            ctx->pc = 0x287D28u;
            goto label_287d28;
        }
    }
    ctx->pc = 0x287D20u;
label_287d20:
    // 0x287d20: 0x3e00008  jr          $ra
    ctx->pc = 0x287D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D20u;
            // 0x287d24: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287D28u;
label_287d28:
    // 0x287d28: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287D28u;
    {
        const bool branch_taken_0x287d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D28u;
            // 0x287d2c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d28) {
            ctx->pc = 0x287D50u;
            goto label_287d50;
        }
    }
    ctx->pc = 0x287D30u;
    // 0x287d30: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x287D30u;
    {
        const bool branch_taken_0x287d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287d30) {
            ctx->pc = 0x287D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287d0c;
        }
    }
    ctx->pc = 0x287D38u;
    // 0x287d38: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x287d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x287d3c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x287d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x287d40: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x287D40u;
    {
        const bool branch_taken_0x287d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x287D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D40u;
            // 0x287d44: 0x3c0201f0  lui         $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d40) {
            ctx->pc = 0x287D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287d0c;
        }
    }
    ctx->pc = 0x287D48u;
    // 0x287d48: 0x3e00008  jr          $ra
    ctx->pc = 0x287D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D48u;
            // 0x287d4c: 0x24425200  addiu       $v0, $v0, 0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287D50u;
label_287d50:
    // 0x287d50: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x287D50u;
    {
        const bool branch_taken_0x287d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D50u;
            // 0x287d54: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d50) {
            ctx->pc = 0x287D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287d20;
        }
    }
    ctx->pc = 0x287D58u;
    // 0x287d58: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x287D58u;
    {
        const bool branch_taken_0x287d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D58u;
            // 0x287d5c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d58) {
            ctx->pc = 0x287D94u;
            goto label_287d94;
        }
    }
    ctx->pc = 0x287D60u;
    // 0x287d60: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x287D60u;
    {
        const bool branch_taken_0x287d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D60u;
            // 0x287d64: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d60) {
            ctx->pc = 0x287D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287d0c;
        }
    }
    ctx->pc = 0x287D68u;
    // 0x287d68: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x287d68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x287d6c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x287d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x287d70: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x287d70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x287d74: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x287d74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x287d78: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x287d78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x287d7c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x287d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x287d80: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x287d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x287d84: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x287d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x287d88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x287d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x287d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x287D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D8Cu;
            // 0x287d90: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287D94u;
label_287d94:
    // 0x287d94: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x287D94u;
    {
        const bool branch_taken_0x287d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287D94u;
            // 0x287d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d94) {
            ctx->pc = 0x287D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287d20;
        }
    }
    ctx->pc = 0x287D9Cu;
    // 0x287d9c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x287d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x287da0: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x287da0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x287da4: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x287da4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x287da8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x287da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x287dac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x287dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x287db0: 0x32023  negu        $a0, $v1
    ctx->pc = 0x287db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x287db4: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x287db4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x287db8: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x287db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x287dbc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x287DBCu;
    {
        const bool branch_taken_0x287dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287DBCu;
            // 0x287dc0: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dbc) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x287DC4u;
    // 0x287dc4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x287dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x287dc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x287DC8u;
    {
        const bool branch_taken_0x287dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287DC8u;
            // 0x287dcc: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dc8) {
            ctx->pc = 0x287DFCu;
            goto label_287dfc;
        }
    }
    ctx->pc = 0x287DD0u;
    // 0x287dd0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x287dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x287dd4: 0x0  nop
    ctx->pc = 0x287dd4u;
    // NOP
label_287dd8:
    // 0x287dd8: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x287dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x287ddc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x287ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x287de0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x287de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x287de4: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x287de4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x287de8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x287de8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287dec: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x287DECu;
    {
        const bool branch_taken_0x287dec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x287dec) {
            ctx->pc = 0x287DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287dd8;
        }
    }
    ctx->pc = 0x287DF4u;
    // 0x287df4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287DF4u;
    {
        const bool branch_taken_0x287df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287DF4u;
            // 0x287df8: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287df4) {
            ctx->pc = 0x287E04u;
            goto label_287e04;
        }
    }
    ctx->pc = 0x287DFCu;
label_287dfc:
    // 0x287dfc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x287dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x287e00: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x287e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_287e04:
    // 0x287e04: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x287E04u;
    {
        const bool branch_taken_0x287e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287e04) {
            ctx->pc = 0x287E58u;
            goto label_287e58;
        }
    }
    ctx->pc = 0x287E0Cu;
    // 0x287e0c: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x287e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_287e10:
    // 0x287e10: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x287e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x287e14: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x287e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x287e18: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x287e18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x287e1c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x287e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x287e20: 0x0  nop
    ctx->pc = 0x287e20u;
    // NOP
    // 0x287e24: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x287E24u;
    {
        const bool branch_taken_0x287e24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x287e24) {
            ctx->pc = 0x287E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287e10;
        }
    }
    ctx->pc = 0x287E2Cu;
    // 0x287e2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x287E2Cu;
    {
        const bool branch_taken_0x287e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E2Cu;
            // 0x287e30: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e2c) {
            ctx->pc = 0x287E58u;
            goto label_287e58;
        }
    }
    ctx->pc = 0x287E34u;
label_287e34:
    // 0x287e34: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x287e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x287e38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287E38u;
    {
        const bool branch_taken_0x287e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E38u;
            // 0x287e3c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e38) {
            ctx->pc = 0x287E4Cu;
            goto label_287e4c;
        }
    }
    ctx->pc = 0x287E40u;
    // 0x287e40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287e40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x287E44u;
    {
        const bool branch_taken_0x287e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E44u;
            // 0x287e48: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e44) {
            ctx->pc = 0x287E58u;
            goto label_287e58;
        }
    }
    ctx->pc = 0x287E4Cu;
label_287e4c:
    // 0x287e4c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x287e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e50: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x287e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x287e54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x287e54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287e58:
    // 0x287e58: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x287E58u;
    {
        const bool branch_taken_0x287e58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x287E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E58u;
            // 0x287e5c: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e58) {
            ctx->pc = 0x287EECu;
            goto label_287eec;
        }
    }
    ctx->pc = 0x287E60u;
    // 0x287e60: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287E60u;
    {
        const bool branch_taken_0x287e60 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E60u;
            // 0x287e64: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e60) {
            ctx->pc = 0x287E6Cu;
            goto label_287e6c;
        }
    }
    ctx->pc = 0x287E68u;
    // 0x287e68: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x287e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_287e6c:
    // 0x287e6c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287E6Cu;
    {
        const bool branch_taken_0x287e6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x287E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E6Cu;
            // 0x287e70: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e6c) {
            ctx->pc = 0x287E84u;
            goto label_287e84;
        }
    }
    ctx->pc = 0x287E74u;
    // 0x287e74: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x287e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x287e78: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x287e78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x287e7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x287E7Cu;
    {
        const bool branch_taken_0x287e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287E7Cu;
            // 0x287e80: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e7c) {
            ctx->pc = 0x287E94u;
            goto label_287e94;
        }
    }
    ctx->pc = 0x287E84u;
label_287e84:
    // 0x287e84: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x287e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x287e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287e8c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x287e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x287e90: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x287e90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_287e94:
    // 0x287e94: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x287e94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x287e98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287e9c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x287e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x287ea0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x287ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x287ea4: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x287ea4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x287ea8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x287ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x287eac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x287EACu;
    {
        const bool branch_taken_0x287eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287EACu;
            // 0x287eb0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287eac) {
            ctx->pc = 0x287EFCu;
            goto label_287efc;
        }
    }
    ctx->pc = 0x287EB4u;
    // 0x287eb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x287eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287eb8: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x287eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x287ebc: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x287ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_287ec0:
    // 0x287ec0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x287ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x287ec4: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x287ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x287ec8: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x287ec8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x287ecc: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x287eccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x287ed0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x287ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x287ed4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x287ed4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x287ed8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x287ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x287edc: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x287EDCu;
    {
        const bool branch_taken_0x287edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287EDCu;
            // 0x287ee0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287edc) {
            ctx->pc = 0x287EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287ec0;
        }
    }
    ctx->pc = 0x287EE4u;
    // 0x287ee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x287EE4u;
    {
        const bool branch_taken_0x287ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287EE4u;
            // 0x287ee8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ee4) {
            ctx->pc = 0x287EFCu;
            goto label_287efc;
        }
    }
    ctx->pc = 0x287EECu;
label_287eec:
    // 0x287eec: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x287eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x287ef0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x287ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x287ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ef8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x287ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_287efc:
    // 0x287efc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x287efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287f00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287f04: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x287f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x287f08: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x287f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x287f0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287F0Cu;
    {
        const bool branch_taken_0x287f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287F0Cu;
            // 0x287f10: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f0c) {
            ctx->pc = 0x287F30u;
            goto label_287f30;
        }
    }
    ctx->pc = 0x287F14u;
    // 0x287f14: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x287f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x287f18: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x287f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x287f1c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x287f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x287f20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x287f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287f28: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x287f28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x287f2c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x287f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_287f30:
    // 0x287f30: 0x3e00008  jr          $ra
    ctx->pc = 0x287F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287F30u;
            // 0x287f34: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287F38u;
}
