#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreMesMake__FPcPc
// Address: 0x158d30 - 0x158e30
void PreMesMake__FPcPc_0x158d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreMesMake__FPcPc_0x158d30");
#endif

    switch (ctx->pc) {
        case 0x158d48u: goto label_158d48;
        default: break;
    }

    ctx->pc = 0x158d30u;

    // 0x158d30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x158d30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d34: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x158d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x158d38: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x158d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x158d3c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x158d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158d40: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x158d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x158d44: 0x240a005c  addiu       $t2, $zero, 0x5C
    ctx->pc = 0x158d44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_158d48:
    // 0x158d48: 0x808c0000  lb          $t4, 0x0($a0)
    ctx->pc = 0x158d48u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158d4c: 0x158a0008  bne         $t4, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x158D4Cu;
    {
        const bool branch_taken_0x158d4c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x158d4c) {
            ctx->pc = 0x158D70u;
            goto label_158d70;
        }
    }
    ctx->pc = 0x158D54u;
    // 0x158d54: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x158d54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x158d58: 0x14690005  bne         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158D58u;
    {
        const bool branch_taken_0x158d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x158D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D58u;
            // 0x158d5c: 0xab1821  addu        $v1, $a1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d58) {
            ctx->pc = 0x158D70u;
            goto label_158d70;
        }
    }
    ctx->pc = 0x158D60u;
    // 0x158d60: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x158d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x158d64: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x158d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x158d68: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x158D68u;
    {
        const bool branch_taken_0x158d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D68u;
            // 0x158d6c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d68) {
            ctx->pc = 0x158E08u;
            goto label_158e08;
        }
    }
    ctx->pc = 0x158D70u;
label_158d70:
    // 0x158d70: 0x1588000e  bne         $t4, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x158D70u;
    {
        const bool branch_taken_0x158d70 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 8));
        if (branch_taken_0x158d70) {
            ctx->pc = 0x158DACu;
            goto label_158dac;
        }
    }
    ctx->pc = 0x158D78u;
    // 0x158d78: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x158d7c: 0x14670007  bne         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x158D7Cu;
    {
        const bool branch_taken_0x158d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x158D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D7Cu;
            // 0x158d80: 0xab1821  addu        $v1, $a1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d7c) {
            ctx->pc = 0x158D9Cu;
            goto label_158d9c;
        }
    }
    ctx->pc = 0x158D84u;
    // 0x158d84: 0xab2021  addu        $a0, $a1, $t3
    ctx->pc = 0x158d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x158d88: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x158d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x158d8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x158d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x158d90: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x158d90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x158d94: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x158D94u;
    {
        const bool branch_taken_0x158d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D94u;
            // 0x158d98: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d94) {
            ctx->pc = 0x158E28u;
            goto label_158e28;
        }
    }
    ctx->pc = 0x158D9Cu;
label_158d9c:
    // 0x158d9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x158d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x158da0: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x158da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x158da4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x158DA4u;
    {
        const bool branch_taken_0x158da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158DA4u;
            // 0x158da8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158da4) {
            ctx->pc = 0x158E08u;
            goto label_158e08;
        }
    }
    ctx->pc = 0x158DACu;
label_158dac:
    // 0x158dac: 0x0  nop
    ctx->pc = 0x158dacu;
    // NOP
    // 0x158db0: 0x15860011  bne         $t4, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x158DB0u;
    {
        const bool branch_taken_0x158db0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 6));
        if (branch_taken_0x158db0) {
            ctx->pc = 0x158DF8u;
            goto label_158df8;
        }
    }
    ctx->pc = 0x158DB8u;
    // 0x158db8: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x158db8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x158dbc: 0x1468000e  bne         $v1, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x158DBCu;
    {
        const bool branch_taken_0x158dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x158dbc) {
            ctx->pc = 0x158DF8u;
            goto label_158df8;
        }
    }
    ctx->pc = 0x158DC4u;
    // 0x158dc4: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x158dc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x158dc8: 0x14670007  bne         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x158DC8u;
    {
        const bool branch_taken_0x158dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x158DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158DC8u;
            // 0x158dcc: 0xab1821  addu        $v1, $a1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158dc8) {
            ctx->pc = 0x158DE8u;
            goto label_158de8;
        }
    }
    ctx->pc = 0x158DD0u;
    // 0x158dd0: 0xab2021  addu        $a0, $a1, $t3
    ctx->pc = 0x158dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x158dd4: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x158dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x158dd8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x158dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x158ddc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x158ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x158de0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x158DE0u;
    {
        const bool branch_taken_0x158de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158DE0u;
            // 0x158de4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158de0) {
            ctx->pc = 0x158E28u;
            goto label_158e28;
        }
    }
    ctx->pc = 0x158DE8u;
label_158de8:
    // 0x158de8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x158de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x158dec: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x158decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x158df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x158DF0u;
    {
        const bool branch_taken_0x158df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158DF0u;
            // 0x158df4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158df0) {
            ctx->pc = 0x158E08u;
            goto label_158e08;
        }
    }
    ctx->pc = 0x158DF8u;
label_158df8:
    // 0x158df8: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x158df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x158dfc: 0xa06c0000  sb          $t4, 0x0($v1)
    ctx->pc = 0x158dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x158e00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x158e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x158e04: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x158e04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_158e08:
    // 0x158e08: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x158e08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158e0c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x158E0Cu;
    {
        const bool branch_taken_0x158e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E0Cu;
            // 0x158e10: 0x29630200  slti        $v1, $t3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e0c) {
            ctx->pc = 0x158E20u;
            goto label_158e20;
        }
    }
    ctx->pc = 0x158E14u;
    // 0x158e14: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x158e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x158e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158E18u;
    {
        const bool branch_taken_0x158e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E18u;
            // 0x158e1c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e18) {
            ctx->pc = 0x158E28u;
            goto label_158e28;
        }
    }
    ctx->pc = 0x158E20u;
label_158e20:
    // 0x158e20: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x158E20u;
    {
        const bool branch_taken_0x158e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e20) {
            ctx->pc = 0x158D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158d48;
        }
    }
    ctx->pc = 0x158E28u;
label_158e28:
    // 0x158e28: 0x3e00008  jr          $ra
    ctx->pc = 0x158E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158E30u;
}
