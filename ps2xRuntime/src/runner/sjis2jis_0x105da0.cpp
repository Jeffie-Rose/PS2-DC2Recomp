#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sjis2jis
// Address: 0x105da0 - 0x105e14
void sjis2jis_0x105da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sjis2jis_0x105da0");
#endif

    ctx->pc = 0x105da0u;

    // 0x105da0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x105da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x105da4: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x105da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x105da8: 0x2ca200a0  sltiu       $v0, $a1, 0xA0
    ctx->pc = 0x105da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x105dac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105DACu;
    {
        const bool branch_taken_0x105dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DACu;
            // 0x105db0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dac) {
            ctx->pc = 0x105DBCu;
            goto label_105dbc;
        }
    }
    ctx->pc = 0x105DB4u;
    // 0x105db4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105DB4u;
    {
        const bool branch_taken_0x105db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DB4u;
            // 0x105db8: 0x24a2ff8f  addiu       $v0, $a1, -0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105db4) {
            ctx->pc = 0x105DC0u;
            goto label_105dc0;
        }
    }
    ctx->pc = 0x105DBCu;
label_105dbc:
    // 0x105dbc: 0x24a2ff4f  addiu       $v0, $a1, -0xB1
    ctx->pc = 0x105dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967119));
label_105dc0:
    // 0x105dc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x105dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x105dc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x105dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x105dc8: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x105dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x105dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105dd0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105DD0u;
    {
        const bool branch_taken_0x105dd0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x105DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DD0u;
            // 0x105dd4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dd0) {
            ctx->pc = 0x105DE0u;
            goto label_105de0;
        }
    }
    ctx->pc = 0x105DD8u;
    // 0x105dd8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x105dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x105ddc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x105ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_105de0:
    // 0x105de0: 0x2c82009e  sltiu       $v0, $a0, 0x9E
    ctx->pc = 0x105de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)158) ? 1 : 0);
    // 0x105de4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x105DE4u;
    {
        const bool branch_taken_0x105de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105de4) {
            ctx->pc = 0x105DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105DE4u;
            // 0x105de8: 0x2482ffe1  addiu       $v0, $a0, -0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967265));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105E00u;
            goto label_105e00;
        }
    }
    ctx->pc = 0x105DECu;
    // 0x105dec: 0x2482ff83  addiu       $v0, $a0, -0x7D
    ctx->pc = 0x105decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967171));
    // 0x105df0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x105df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x105df4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x105df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x105df8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105DF8u;
    {
        const bool branch_taken_0x105df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DF8u;
            // 0x105dfc: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105df8) {
            ctx->pc = 0x105E04u;
            goto label_105e04;
        }
    }
    ctx->pc = 0x105E00u;
label_105e00:
    // 0x105e00: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x105e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_105e04:
    // 0x105e04: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x105e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x105e08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x105e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x105e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x105E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E0Cu;
            // 0x105e10: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105E14u;
}
