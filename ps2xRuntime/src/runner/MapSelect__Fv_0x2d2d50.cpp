#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MapSelect__Fv
// Address: 0x2d2d50 - 0x2d3144
void MapSelect__Fv_0x2d2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MapSelect__Fv_0x2d2d50");
#endif

    switch (ctx->pc) {
        case 0x2d2db4u: goto label_2d2db4;
        case 0x2d2dd4u: goto label_2d2dd4;
        case 0x2d2df8u: goto label_2d2df8;
        case 0x2d2e1cu: goto label_2d2e1c;
        case 0x2d2f14u: goto label_2d2f14;
        case 0x2d2f2cu: goto label_2d2f2c;
        case 0x2d2f50u: goto label_2d2f50;
        case 0x2d2f74u: goto label_2d2f74;
        case 0x2d2f90u: goto label_2d2f90;
        case 0x2d2fa8u: goto label_2d2fa8;
        case 0x2d2fe0u: goto label_2d2fe0;
        case 0x2d2ff8u: goto label_2d2ff8;
        case 0x2d3010u: goto label_2d3010;
        case 0x2d3028u: goto label_2d3028;
        case 0x2d3040u: goto label_2d3040;
        case 0x2d3060u: goto label_2d3060;
        case 0x2d3078u: goto label_2d3078;
        case 0x2d3098u: goto label_2d3098;
        case 0x2d30acu: goto label_2d30ac;
        case 0x2d30bcu: goto label_2d30bc;
        case 0x2d30d4u: goto label_2d30d4;
        case 0x2d3110u: goto label_2d3110;
        default: break;
    }

    ctx->pc = 0x2d2d50u;

    // 0x2d2d50: 0x27bdf770  addiu       $sp, $sp, -0x890
    ctx->pc = 0x2d2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965104));
    // 0x2d2d54: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2d2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2d2d58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d2d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d2d5c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d2d60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d2d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d2d64: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d2d68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d2d6c: 0x24636520  addiu       $v1, $v1, 0x6520
    ctx->pc = 0x2d2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25888));
    // 0x2d2d70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d2d74: 0x24426560  addiu       $v0, $v0, 0x6560
    ctx->pc = 0x2d2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25952));
    // 0x2d2d78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d2d7c: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2d2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2d2d80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2d84: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2d2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2d2d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2d90: 0x8f869de4  lw          $a2, -0x621C($gp)
    ctx->pc = 0x2d2d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942180)));
    // 0x2d2d94: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2d2d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d2d98: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2d2d98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d2d9c: 0x668821  addu        $s1, $v1, $a2
    ctx->pc = 0x2d2d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d2da0: 0x469821  addu        $s3, $v0, $a2
    ctx->pc = 0x2d2da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d2da4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2da8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2dac: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D2DACu;
    SET_GPR_U32(ctx, 31, 0x2D2DB4u);
    ctx->pc = 0x2D2DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DACu;
            // 0x2d2db0: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DB4u; }
        if (ctx->pc != 0x2D2DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DB4u; }
        if (ctx->pc != 0x2D2DB4u) { return; }
    }
    ctx->pc = 0x2D2DB4u;
label_2d2db4:
    // 0x2d2db4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2DB4u;
    {
        const bool branch_taken_0x2d2db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DB4u;
            // 0x2d2db8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2db4) {
            ctx->pc = 0x2D2DC8u;
            goto label_2d2dc8;
        }
    }
    ctx->pc = 0x2D2DBCu;
    // 0x2d2dbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2dc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d2dc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d2dc8:
    // 0x2d2dc8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2d2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d2dcc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D2DCCu;
    SET_GPR_U32(ctx, 31, 0x2D2DD4u);
    ctx->pc = 0x2D2DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DCCu;
            // 0x2d2dd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DD4u; }
        if (ctx->pc != 0x2D2DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DD4u; }
        if (ctx->pc != 0x2D2DD4u) { return; }
    }
    ctx->pc = 0x2D2DD4u;
label_2d2dd4:
    // 0x2d2dd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2DD4u;
    {
        const bool branch_taken_0x2d2dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DD4u;
            // 0x2d2dd8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2dd4) {
            ctx->pc = 0x2D2DE8u;
            goto label_2d2de8;
        }
    }
    ctx->pc = 0x2D2DDCu;
    // 0x2d2ddc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2de0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2de4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d2de8:
    // 0x2d2de8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d2de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d2dec: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2d2decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2d2df0: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D2DF0u;
    SET_GPR_U32(ctx, 31, 0x2D2DF8u);
    ctx->pc = 0x2D2DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DF0u;
            // 0x2d2df4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DF8u; }
        if (ctx->pc != 0x2D2DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DF8u; }
        if (ctx->pc != 0x2D2DF8u) { return; }
    }
    ctx->pc = 0x2D2DF8u;
label_2d2df8:
    // 0x2d2df8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2DF8u;
    {
        const bool branch_taken_0x2d2df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DF8u;
            // 0x2d2dfc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2df8) {
            ctx->pc = 0x2D2E10u;
            goto label_2d2e10;
        }
    }
    ctx->pc = 0x2D2E00u;
    // 0x2d2e00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2e04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d2e04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e08: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2d2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2d2e0c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2d2e10:
    // 0x2d2e10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d2e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d2e14: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D2E14u;
    SET_GPR_U32(ctx, 31, 0x2D2E1Cu);
    ctx->pc = 0x2D2E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2E14u;
            // 0x2d2e18: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E1Cu; }
        if (ctx->pc != 0x2D2E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E1Cu; }
        if (ctx->pc != 0x2D2E1Cu) { return; }
    }
    ctx->pc = 0x2D2E1Cu;
label_2d2e1c:
    // 0x2d2e1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2E1Cu;
    {
        const bool branch_taken_0x2d2e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e1c) {
            ctx->pc = 0x2D2E34u;
            goto label_2d2e34;
        }
    }
    ctx->pc = 0x2D2E24u;
    // 0x2d2e24: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2e28: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d2e28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e2c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d2e30: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2d2e34:
    // 0x2d2e34: 0x8f849de4  lw          $a0, -0x621C($gp)
    ctx->pc = 0x2d2e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942180)));
    // 0x2d2e38: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2d2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2d2e3c: 0x24635860  addiu       $v1, $v1, 0x5860
    ctx->pc = 0x2d2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22624));
    // 0x2d2e40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2e44: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2e48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2e4c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2E4Cu;
    {
        const bool branch_taken_0x2d2e4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D2E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2E4Cu;
            // 0x2d2e50: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e4c) {
            ctx->pc = 0x2D2E58u;
            goto label_2d2e58;
        }
    }
    ctx->pc = 0x2D2E54u;
    // 0x2d2e54: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2d2e58:
    // 0x2d2e58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2e5c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2d2e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d2e60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2E60u;
    {
        const bool branch_taken_0x2d2e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2E60u;
            // 0x2d2e64: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e60) {
            ctx->pc = 0x2D2E6Cu;
            goto label_2d2e6c;
        }
    }
    ctx->pc = 0x2D2E68u;
    // 0x2d2e68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d2e6c:
    // 0x2d2e6c: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2E6Cu;
    {
        const bool branch_taken_0x2d2e6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e6c) {
            ctx->pc = 0x2D2EACu;
            goto label_2d2eac;
        }
    }
    ctx->pc = 0x2D2E74u;
    // 0x2d2e74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2e78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2e7c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2e80: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2d2e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d2e84: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2E84u;
    {
        const bool branch_taken_0x2d2e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2E84u;
            // 0x2d2e88: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e84) {
            ctx->pc = 0x2D2E90u;
            goto label_2d2e90;
        }
    }
    ctx->pc = 0x2D2E8Cu;
    // 0x2d2e8c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2d2e90:
    // 0x2d2e90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2e94: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2e98: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2d2e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d2e9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2E9Cu;
    {
        const bool branch_taken_0x2d2e9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e9c) {
            ctx->pc = 0x2D2EACu;
            goto label_2d2eac;
        }
    }
    ctx->pc = 0x2D2EA4u;
    // 0x2d2ea4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d2ea8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2d2eac:
    // 0x2d2eac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2eb0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d2eb4: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2d2eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d2eb8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2EB8u;
    {
        const bool branch_taken_0x2d2eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2EB8u;
            // 0x2d2ebc: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2eb8) {
            ctx->pc = 0x2D2EC4u;
            goto label_2d2ec4;
        }
    }
    ctx->pc = 0x2D2EC0u;
    // 0x2d2ec0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2d2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2d2ec4:
    // 0x2d2ec4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2ec8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2EC8u;
    {
        const bool branch_taken_0x2d2ec8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d2ec8) {
            ctx->pc = 0x2D2ED4u;
            goto label_2d2ed4;
        }
    }
    ctx->pc = 0x2D2ED0u;
    // 0x2d2ed0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2d2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2d2ed4:
    // 0x2d2ed4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2ED4u;
    {
        const bool branch_taken_0x2d2ed4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ed4) {
            ctx->pc = 0x2D2EE8u;
            goto label_2d2ee8;
        }
    }
    ctx->pc = 0x2D2EDCu;
    // 0x2d2edc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2ee0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2d2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2d2ee4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d2ee8:
    // 0x2d2ee8: 0x8f849de4  lw          $a0, -0x621C($gp)
    ctx->pc = 0x2d2ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942180)));
    // 0x2d2eec: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2d2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2d2ef0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2ef4: 0x24635840  addiu       $v1, $v1, 0x5840
    ctx->pc = 0x2d2ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22592));
    // 0x2d2ef8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2efc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2d2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2f00: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d2f04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2f0c: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2D2F0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2F14u);
    ctx->pc = 0x2D2F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F0Cu;
            // 0x2d2f10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F14u; }
        if (ctx->pc != 0x2D2F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F14u; }
        if (ctx->pc != 0x2D2F14u) { return; }
    }
    ctx->pc = 0x2D2F14u;
label_2d2f14:
    // 0x2d2f14: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2d2f14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f20: 0x24a50570  addiu       $a1, $a1, 0x570
    ctx->pc = 0x2d2f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1392));
    // 0x2d2f24: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2F24u;
    SET_GPR_U32(ctx, 31, 0x2D2F2Cu);
    ctx->pc = 0x2D2F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F24u;
            // 0x2d2f28: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F2Cu; }
        if (ctx->pc != 0x2D2F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F2Cu; }
        if (ctx->pc != 0x2D2F2Cu) { return; }
    }
    ctx->pc = 0x2D2F2Cu;
label_2d2f2c:
    // 0x2d2f2c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x2d2f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2f30: 0x26950008  addiu       $s5, $s4, 0x8
    ctx->pc = 0x2d2f30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2d2f34: 0x255082a  slt         $at, $s2, $s5
    ctx->pc = 0x2d2f34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d2f38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2F38u;
    {
        const bool branch_taken_0x2d2f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F38u;
            // 0x2d2f3c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f38) {
            ctx->pc = 0x2D2F44u;
            goto label_2d2f44;
        }
    }
    ctx->pc = 0x2D2F40u;
    // 0x2d2f40: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2d2f40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d2f44:
    // 0x2d2f44: 0x295082a  slt         $at, $s4, $s5
    ctx->pc = 0x2d2f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d2f48: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D2F48u;
    {
        const bool branch_taken_0x2d2f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F48u;
            // 0x2d2f4c: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f48) {
            ctx->pc = 0x2D308Cu;
            goto label_2d308c;
        }
    }
    ctx->pc = 0x2D2F50u;
label_2d2f50:
    // 0x2d2f50: 0x8f839de4  lw          $v1, -0x621C($gp)
    ctx->pc = 0x2d2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942180)));
    // 0x2d2f54: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2d2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2d2f58: 0x24425840  addiu       $v0, $v0, 0x5840
    ctx->pc = 0x2d2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22592));
    // 0x2d2f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2f60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2f64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2f68: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d2f6c: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2D2F6Cu;
    SET_GPR_U32(ctx, 31, 0x2D2F74u);
    ctx->pc = 0x2D2F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F6Cu;
            // 0x2d2f70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F74u; }
        if (ctx->pc != 0x2D2F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F74u; }
        if (ctx->pc != 0x2D2F74u) { return; }
    }
    ctx->pc = 0x2D2F74u;
label_2d2f74:
    // 0x2d2f74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d2f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2f7c: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2F7Cu;
    {
        const bool branch_taken_0x2d2f7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F7Cu;
            // 0x2d2f80: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f7c) {
            ctx->pc = 0x2D2F98u;
            goto label_2d2f98;
        }
    }
    ctx->pc = 0x2D2F84u;
    // 0x2d2f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f88: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2F88u;
    SET_GPR_U32(ctx, 31, 0x2D2F90u);
    ctx->pc = 0x2D2F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F88u;
            // 0x2d2f8c: 0x24a50548  addiu       $a1, $a1, 0x548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F90u; }
        if (ctx->pc != 0x2D2F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F90u; }
        if (ctx->pc != 0x2D2F90u) { return; }
    }
    ctx->pc = 0x2D2F90u;
label_2d2f90:
    // 0x2d2f90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2F90u;
    {
        const bool branch_taken_0x2d2f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F90u;
            // 0x2d2f94: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f90) {
            ctx->pc = 0x2D2FACu;
            goto label_2d2fac;
        }
    }
    ctx->pc = 0x2D2F98u;
label_2d2f98:
    // 0x2d2f98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fa0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2FA0u;
    SET_GPR_U32(ctx, 31, 0x2D2FA8u);
    ctx->pc = 0x2D2FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2FA0u;
            // 0x2d2fa4: 0x24a50550  addiu       $a1, $a1, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2FA8u; }
        if (ctx->pc != 0x2D2FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2FA8u; }
        if (ctx->pc != 0x2D2FA8u) { return; }
    }
    ctx->pc = 0x2D2FA8u;
label_2d2fa8:
    // 0x2d2fa8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d2fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d2fac:
    // 0x2d2fac: 0x0  nop
    ctx->pc = 0x2d2facu;
    // NOP
    // 0x2d2fb0: 0x8f839de4  lw          $v1, -0x621C($gp)
    ctx->pc = 0x2d2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942180)));
    // 0x2d2fb4: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2d2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2d2fb8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2fbc: 0x24425840  addiu       $v0, $v0, 0x5840
    ctx->pc = 0x2d2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22592));
    // 0x2d2fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2fc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2fcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2fd0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d2fd4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2d2fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2fd8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2FD8u;
    SET_GPR_U32(ctx, 31, 0x2D2FE0u);
    ctx->pc = 0x2D2FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2FD8u;
            // 0x2d2fdc: 0x24a50558  addiu       $a1, $a1, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2FE0u; }
        if (ctx->pc != 0x2D2FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2FE0u; }
        if (ctx->pc != 0x2D2FE0u) { return; }
    }
    ctx->pc = 0x2D2FE0u;
label_2d2fe0:
    // 0x2d2fe0: 0x6c10007  bgez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2FE0u;
    {
        const bool branch_taken_0x2d2fe0 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x2D2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2FE0u;
            // 0x2d2fe4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2fe0) {
            ctx->pc = 0x2D3000u;
            goto label_2d3000;
        }
    }
    ctx->pc = 0x2D2FE8u;
    // 0x2d2fe8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ff0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2FF0u;
    SET_GPR_U32(ctx, 31, 0x2D2FF8u);
    ctx->pc = 0x2D2FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2FF0u;
            // 0x2d2ff4: 0x24a50580  addiu       $a1, $a1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2FF8u; }
        if (ctx->pc != 0x2D2FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2FF8u; }
        if (ctx->pc != 0x2D2FF8u) { return; }
    }
    ctx->pc = 0x2D2FF8u;
label_2d2ff8:
    // 0x2d2ff8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2FF8u;
    {
        const bool branch_taken_0x2d2ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2FF8u;
            // 0x2d2ffc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ff8) {
            ctx->pc = 0x2D3014u;
            goto label_2d3014;
        }
    }
    ctx->pc = 0x2D3000u;
label_2d3000:
    // 0x2d3000: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d3004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3008: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3008u;
    SET_GPR_U32(ctx, 31, 0x2D3010u);
    ctx->pc = 0x2D300Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3008u;
            // 0x2d300c: 0x24a50588  addiu       $a1, $a1, 0x588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3010u; }
        if (ctx->pc != 0x2D3010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3010u; }
        if (ctx->pc != 0x2D3010u) { return; }
    }
    ctx->pc = 0x2D3010u;
label_2d3010:
    // 0x2d3010: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d3010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d3014:
    // 0x2d3014: 0x0  nop
    ctx->pc = 0x2d3014u;
    // NOP
    // 0x2d3018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d301c: 0x27a5088c  addiu       $a1, $sp, 0x88C
    ctx->pc = 0x2d301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2188));
    // 0x2d3020: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x2D3020u;
    SET_GPR_U32(ctx, 31, 0x2D3028u);
    ctx->pc = 0x2D3024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3020u;
            // 0x2d3024: 0xafa0088c  sw          $zero, 0x88C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3028u; }
        if (ctx->pc != 0x2D3028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3028u; }
        if (ctx->pc != 0x2D3028u) { return; }
    }
    ctx->pc = 0x2D3028u;
label_2d3028:
    // 0x2d3028: 0x8fa6088c  lw          $a2, 0x88C($sp)
    ctx->pc = 0x2d3028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2188)));
    // 0x2d302c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D302Cu;
    {
        const bool branch_taken_0x2d302c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D302Cu;
            // 0x2d3030: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d302c) {
            ctx->pc = 0x2D3044u;
            goto label_2d3044;
        }
    }
    ctx->pc = 0x2D3034u;
    // 0x2d3034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3038: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3038u;
    SET_GPR_U32(ctx, 31, 0x2D3040u);
    ctx->pc = 0x2D303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3038u;
            // 0x2d303c: 0x24a50558  addiu       $a1, $a1, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3040u; }
        if (ctx->pc != 0x2D3040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3040u; }
        if (ctx->pc != 0x2D3040u) { return; }
    }
    ctx->pc = 0x2D3040u;
label_2d3040:
    // 0x2d3040: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d3040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d3044:
    // 0x2d3044: 0x0  nop
    ctx->pc = 0x2d3044u;
    // NOP
    // 0x2d3048: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d3048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d304c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D304Cu;
    {
        const bool branch_taken_0x2d304c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D304Cu;
            // 0x2d3050: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d304c) {
            ctx->pc = 0x2D3064u;
            goto label_2d3064;
        }
    }
    ctx->pc = 0x2D3054u;
    // 0x2d3054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3058: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3058u;
    SET_GPR_U32(ctx, 31, 0x2D3060u);
    ctx->pc = 0x2D305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3058u;
            // 0x2d305c: 0x24a50560  addiu       $a1, $a1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3060u; }
        if (ctx->pc != 0x2D3060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3060u; }
        if (ctx->pc != 0x2D3060u) { return; }
    }
    ctx->pc = 0x2D3060u;
label_2d3060:
    // 0x2d3060: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d3060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d3064:
    // 0x2d3064: 0x0  nop
    ctx->pc = 0x2d3064u;
    // NOP
    // 0x2d3068: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d306c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3070: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3070u;
    SET_GPR_U32(ctx, 31, 0x2D3078u);
    ctx->pc = 0x2D3074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3070u;
            // 0x2d3074: 0x24a50568  addiu       $a1, $a1, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3078u; }
        if (ctx->pc != 0x2D3078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3078u; }
        if (ctx->pc != 0x2D3078u) { return; }
    }
    ctx->pc = 0x2D3078u;
label_2d3078:
    // 0x2d3078: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d3078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d307c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d307cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d3080: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x2d3080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d3084: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2D3084u;
    {
        const bool branch_taken_0x2d3084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3084u;
            // 0x2d3088: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3084) {
            ctx->pc = 0x2D2F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2f50;
        }
    }
    ctx->pc = 0x2D308Cu;
label_2d308c:
    // 0x2d308c: 0x0  nop
    ctx->pc = 0x2d308cu;
    // NOP
    // 0x2d3090: 0xc064210  jal         func_190840
    ctx->pc = 0x2D3090u;
    SET_GPR_U32(ctx, 31, 0x2D3098u);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3098u; }
        if (ctx->pc != 0x2D3098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3098u; }
        if (ctx->pc != 0x2D3098u) { return; }
    }
    ctx->pc = 0x2D3098u;
label_2d3098:
    // 0x2d3098: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2d3098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d309c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30a0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2d30a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d30a4: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2D30A4u;
    SET_GPR_U32(ctx, 31, 0x2D30ACu);
    ctx->pc = 0x2D30A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30A4u;
            // 0x2d30a8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30ACu; }
        if (ctx->pc != 0x2D30ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30ACu; }
        if (ctx->pc != 0x2D30ACu) { return; }
    }
    ctx->pc = 0x2D30ACu;
label_2d30ac:
    // 0x2d30ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d30acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d30b0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2d30b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d30b4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D30B4u;
    SET_GPR_U32(ctx, 31, 0x2D30BCu);
    ctx->pc = 0x2D30B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30B4u;
            // 0x2d30b8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30BCu; }
        if (ctx->pc != 0x2D30BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30BCu; }
        if (ctx->pc != 0x2D30BCu) { return; }
    }
    ctx->pc = 0x2D30BCu;
label_2d30bc:
    // 0x2d30bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D30BCu;
    {
        const bool branch_taken_0x2d30bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D30C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30BCu;
            // 0x2d30c0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30bc) {
            ctx->pc = 0x2D30C8u;
            goto label_2d30c8;
        }
    }
    ctx->pc = 0x2D30C4u;
    // 0x2d30c4: 0xaf809de0  sw          $zero, -0x6220($gp)
    ctx->pc = 0x2d30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942176), GPR_U32(ctx, 0));
label_2d30c8:
    // 0x2d30c8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d30c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d30cc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D30CCu;
    SET_GPR_U32(ctx, 31, 0x2D30D4u);
    ctx->pc = 0x2D30D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30CCu;
            // 0x2d30d0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30D4u; }
        if (ctx->pc != 0x2D30D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30D4u; }
        if (ctx->pc != 0x2D30D4u) { return; }
    }
    ctx->pc = 0x2D30D4u;
label_2d30d4:
    // 0x2d30d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D30D4u;
    {
        const bool branch_taken_0x2d30d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30d4) {
            ctx->pc = 0x2D3118u;
            goto label_2d3118;
        }
    }
    ctx->pc = 0x2D30DCu;
    // 0x2d30dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d30e0: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2d30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2d30e4: 0x8f869de4  lw          $a2, -0x621C($gp)
    ctx->pc = 0x2d30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942180)));
    // 0x2d30e8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2d30e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2d30ec: 0x24a55840  addiu       $a1, $a1, 0x5840
    ctx->pc = 0x2d30ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    // 0x2d30f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d30f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d30f8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d30fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d3100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3104: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d3104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3108: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2D3108u;
    SET_GPR_U32(ctx, 31, 0x2D3110u);
    ctx->pc = 0x2D310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3108u;
            // 0x2d310c: 0x24846400  addiu       $a0, $a0, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3110u; }
        if (ctx->pc != 0x2D3110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3110u; }
        if (ctx->pc != 0x2D3110u) { return; }
    }
    ctx->pc = 0x2D3110u;
label_2d3110:
    // 0x2d3110: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d3110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3114: 0xaf829de0  sw          $v0, -0x6220($gp)
    ctx->pc = 0x2d3114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942176), GPR_U32(ctx, 2));
label_2d3118:
    // 0x2d3118: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d3118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d311c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d311cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3120: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d3120u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3124: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d3124u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3128: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d3128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d312c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d312cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d3130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d313c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D313Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D313Cu;
            // 0x2d3140: 0x27bd0890  addiu       $sp, $sp, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3144u;
}
