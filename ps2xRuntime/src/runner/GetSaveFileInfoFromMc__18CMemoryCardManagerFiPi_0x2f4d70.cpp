#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSaveFileInfoFromMc__18CMemoryCardManagerFiPi
// Address: 0x2f4d70 - 0x2f5140
void GetSaveFileInfoFromMc__18CMemoryCardManagerFiPi_0x2f4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSaveFileInfoFromMc__18CMemoryCardManagerFiPi_0x2f4d70");
#endif

    switch (ctx->pc) {
        case 0x2f4df8u: goto label_2f4df8;
        case 0x2f4e0cu: goto label_2f4e0c;
        case 0x2f4e20u: goto label_2f4e20;
        case 0x2f4e2cu: goto label_2f4e2c;
        case 0x2f4e50u: goto label_2f4e50;
        case 0x2f4e64u: goto label_2f4e64;
        case 0x2f4e98u: goto label_2f4e98;
        case 0x2f4eb4u: goto label_2f4eb4;
        case 0x2f4ef0u: goto label_2f4ef0;
        case 0x2f4f00u: goto label_2f4f00;
        case 0x2f4f24u: goto label_2f4f24;
        case 0x2f4f44u: goto label_2f4f44;
        case 0x2f4f60u: goto label_2f4f60;
        case 0x2f4facu: goto label_2f4fac;
        case 0x2f4ff4u: goto label_2f4ff4;
        case 0x2f502cu: goto label_2f502c;
        case 0x2f5048u: goto label_2f5048;
        case 0x2f50acu: goto label_2f50ac;
        case 0x2f50c8u: goto label_2f50c8;
        case 0x2f5108u: goto label_2f5108;
        default: break;
    }

    ctx->pc = 0x2f4d70u;

    // 0x2f4d70: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2f4d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2f4d74: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x2f4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2f4d78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f4d7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4d80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f4d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f4d84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f4d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f4d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f4d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f4d8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f4d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4d94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f4d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4d9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f4d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4da0: 0x24500da0  addiu       $s0, $v0, 0xDA0
    ctx->pc = 0x2f4da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x2f4da4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f4da8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4DA8u;
    {
        const bool branch_taken_0x2f4da8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F4DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DA8u;
            // 0x2f4dac: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4da8) {
            ctx->pc = 0x2F4DBCu;
            goto label_2f4dbc;
        }
    }
    ctx->pc = 0x2F4DB0u;
    // 0x2f4db0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4DB0u;
    {
        const bool branch_taken_0x2f4db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DB0u;
            // 0x2f4db4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4db0) {
            ctx->pc = 0x2F4DC0u;
            goto label_2f4dc0;
        }
    }
    ctx->pc = 0x2F4DB8u;
    // 0x2f4db8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2f4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2f4dbc:
    // 0x2f4dbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f4dc0:
    // 0x2f4dc0: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2F4DC0u;
    {
        const bool branch_taken_0x2f4dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DC0u;
            // 0x2f4dc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4dc0) {
            ctx->pc = 0x2F5020u;
            goto label_2f5020;
        }
    }
    ctx->pc = 0x2F4DC8u;
    // 0x2f4dc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4dcc: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2F4DCCu;
    {
        const bool branch_taken_0x2f4dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DCCu;
            // 0x2f4dd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4dcc) {
            ctx->pc = 0x2F4F38u;
            goto label_2f4f38;
        }
    }
    ctx->pc = 0x2F4DD4u;
    // 0x2f4dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4dd8: 0x1064002d  beq         $v1, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F4DD8u;
    {
        const bool branch_taken_0x2f4dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F4DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DD8u;
            // 0x2f4ddc: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4dd8) {
            ctx->pc = 0x2F4E90u;
            goto label_2f4e90;
        }
    }
    ctx->pc = 0x2F4DE0u;
    // 0x2f4de0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4DE0u;
    {
        const bool branch_taken_0x2f4de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DE0u;
            // 0x2f4de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4de0) {
            ctx->pc = 0x2F4DF0u;
            goto label_2f4df0;
        }
    }
    ctx->pc = 0x2F4DE8u;
    // 0x2f4de8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2F4DE8u;
    {
        const bool branch_taken_0x2f4de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DE8u;
            // 0x2f4dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4de8) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F4DF0u;
label_2f4df0:
    // 0x2f4df0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4DF0u;
    SET_GPR_U32(ctx, 31, 0x2F4DF8u);
    ctx->pc = 0x2F4DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DF0u;
            // 0x2f4df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DF8u; }
        if (ctx->pc != 0x2F4DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DF8u; }
        if (ctx->pc != 0x2F4DF8u) { return; }
    }
    ctx->pc = 0x2F4DF8u;
label_2f4df8:
    // 0x2f4df8: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2F4DF8u;
    {
        const bool branch_taken_0x2f4df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DF8u;
            // 0x2f4dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4df8) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F4E00u;
    // 0x2f4e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e04: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F4E04u;
    SET_GPR_U32(ctx, 31, 0x2F4E0Cu);
    ctx->pc = 0x2F4E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E04u;
            // 0x2f4e08: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E0Cu; }
        if (ctx->pc != 0x2F4E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E0Cu; }
        if (ctx->pc != 0x2F4E0Cu) { return; }
    }
    ctx->pc = 0x2F4E0Cu;
label_2f4e0c:
    // 0x2f4e0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f4e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f4e10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f4e14: 0x24a517e0  addiu       $a1, $a1, 0x17E0
    ctx->pc = 0x2f4e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
    // 0x2f4e18: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F4E18u;
    SET_GPR_U32(ctx, 31, 0x2F4E20u);
    ctx->pc = 0x2F4E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E18u;
            // 0x2f4e1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E20u; }
        if (ctx->pc != 0x2F4E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E20u; }
        if (ctx->pc != 0x2F4E20u) { return; }
    }
    ctx->pc = 0x2F4E20u;
label_2f4e20:
    // 0x2f4e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f4e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e24: 0xc0bc62c  jal         func_2F18B0
    ctx->pc = 0x2F4E24u;
    SET_GPR_U32(ctx, 31, 0x2F4E2Cu);
    ctx->pc = 0x2F4E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E24u;
            // 0x2f4e28: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F18B0u;
    if (runtime->hasFunction(0x2F18B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F18B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E2Cu; }
        if (ctx->pc != 0x2F4E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOpenAttribute__18CMemoryCardManagerFPc_0x2f18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E2Cu; }
        if (ctx->pc != 0x2F4E2Cu) { return; }
    }
    ctx->pc = 0x2F4E2Cu;
label_2f4e2c:
    // 0x2f4e2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4E2Cu;
    {
        const bool branch_taken_0x2f4e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E2Cu;
            // 0x2f4e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e2c) {
            ctx->pc = 0x2F4E48u;
            goto label_2f4e48;
        }
    }
    ctx->pc = 0x2F4E34u;
    // 0x2f4e34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4e38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4e3c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2f4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2f4e40: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2F4E40u;
    {
        const bool branch_taken_0x2f4e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E40u;
            // 0x2f4e44: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e40) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F4E48u;
label_2f4e48:
    // 0x2f4e48: 0xc0bc50c  jal         func_2F1430
    ctx->pc = 0x2F4E48u;
    SET_GPR_U32(ctx, 31, 0x2F4E50u);
    ctx->pc = 0x2F4E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E48u;
            // 0x2f4e4c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1430u;
    if (runtime->hasFunction(0x2F1430u)) {
        auto targetFn = runtime->lookupFunction(0x2F1430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E50u; }
        if (ctx->pc != 0x2F4E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMemoryCardFileName__FiPc_0x2f1430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E50u; }
        if (ctx->pc != 0x2F4E50u) { return; }
    }
    ctx->pc = 0x2F4E50u;
label_2f4e50:
    // 0x2f4e50: 0x8e6404c8  lw          $a0, 0x4C8($s3)
    ctx->pc = 0x2f4e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1224)));
    // 0x2f4e54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4e58: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2f4e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f4e5c: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F4E5Cu;
    SET_GPR_U32(ctx, 31, 0x2F4E64u);
    ctx->pc = 0x2F4E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E5Cu;
            // 0x2f4e60: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E64u; }
        if (ctx->pc != 0x2F4E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E64u; }
        if (ctx->pc != 0x2F4E64u) { return; }
    }
    ctx->pc = 0x2F4E64u;
label_2f4e64:
    // 0x2f4e64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4E64u;
    {
        const bool branch_taken_0x2f4e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e64) {
            ctx->pc = 0x2F4E7Cu;
            goto label_2f4e7c;
        }
    }
    ctx->pc = 0x2F4E6Cu;
    // 0x2f4e6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4e70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4e74: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2F4E74u;
    {
        const bool branch_taken_0x2f4e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E74u;
            // 0x2f4e78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e74) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F4E7Cu;
label_2f4e7c:
    // 0x2f4e7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4e84: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2f4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2f4e88: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2F4E88u;
    {
        const bool branch_taken_0x2f4e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E88u;
            // 0x2f4e8c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e88) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F4E90u;
label_2f4e90:
    // 0x2f4e90: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4E90u;
    SET_GPR_U32(ctx, 31, 0x2F4E98u);
    ctx->pc = 0x2F4E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E90u;
            // 0x2f4e94: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E98u; }
        if (ctx->pc != 0x2F4E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E98u; }
        if (ctx->pc != 0x2F4E98u) { return; }
    }
    ctx->pc = 0x2F4E98u;
label_2f4e98:
    // 0x2f4e98: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2F4E98u;
    {
        const bool branch_taken_0x2f4e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e98) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F4EA0u;
    // 0x2f4ea0: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x2f4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2f4ea4: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4EA4u;
    {
        const bool branch_taken_0x2f4ea4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EA4u;
            // 0x2f4ea8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ea4) {
            ctx->pc = 0x2F4EC8u;
            goto label_2f4ec8;
        }
    }
    ctx->pc = 0x2F4EACu;
    // 0x2f4eac: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4EACu;
    SET_GPR_U32(ctx, 31, 0x2F4EB4u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EB4u; }
        if (ctx->pc != 0x2F4EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EB4u; }
        if (ctx->pc != 0x2F4EB4u) { return; }
    }
    ctx->pc = 0x2F4EB4u;
label_2f4eb4:
    // 0x2f4eb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4ebc: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2f4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2f4ec0: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2F4EC0u;
    {
        const bool branch_taken_0x2f4ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EC0u;
            // 0x2f4ec4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ec0) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F4EC8u;
label_2f4ec8:
    // 0x2f4ec8: 0xae65005c  sw          $a1, 0x5C($s3)
    ctx->pc = 0x2f4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 5));
    // 0x2f4ecc: 0x24022800  addiu       $v0, $zero, 0x2800
    ctx->pc = 0x2f4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x2f4ed0: 0xae600910  sw          $zero, 0x910($s3)
    ctx->pc = 0x2f4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2320), GPR_U32(ctx, 0));
    // 0x2f4ed4: 0xae60091c  sw          $zero, 0x91C($s3)
    ctx->pc = 0x2f4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2332), GPR_U32(ctx, 0));
    // 0x2f4ed8: 0xae620918  sw          $v0, 0x918($s3)
    ctx->pc = 0x2f4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2328), GPR_U32(ctx, 2));
    // 0x2f4edc: 0xae6004e0  sw          $zero, 0x4E0($s3)
    ctx->pc = 0x2f4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1248), GPR_U32(ctx, 0));
    // 0x2f4ee0: 0x8e6408ec  lw          $a0, 0x8EC($s3)
    ctx->pc = 0x2f4ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2284)));
    // 0x2f4ee4: 0x8e660918  lw          $a2, 0x918($s3)
    ctx->pc = 0x2f4ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x2f4ee8: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F4EE8u;
    SET_GPR_U32(ctx, 31, 0x2F4EF0u);
    ctx->pc = 0x2F4EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EE8u;
            // 0x2f4eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EF0u; }
        if (ctx->pc != 0x2F4EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EF0u; }
        if (ctx->pc != 0x2F4EF0u) { return; }
    }
    ctx->pc = 0x2F4EF0u;
label_2f4ef0:
    // 0x2f4ef0: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x2f4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2f4ef4: 0x8e660918  lw          $a2, 0x918($s3)
    ctx->pc = 0x2f4ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x2f4ef8: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F4EF8u;
    SET_GPR_U32(ctx, 31, 0x2F4F00u);
    ctx->pc = 0x2F4EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EF8u;
            // 0x2f4efc: 0x8e6508ec  lw          $a1, 0x8EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F00u; }
        if (ctx->pc != 0x2F4F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F00u; }
        if (ctx->pc != 0x2F4F00u) { return; }
    }
    ctx->pc = 0x2F4F00u;
label_2f4f00:
    // 0x2f4f00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4F00u;
    {
        const bool branch_taken_0x2f4f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f00) {
            ctx->pc = 0x2F4F18u;
            goto label_2f4f18;
        }
    }
    ctx->pc = 0x2F4F08u;
    // 0x2f4f08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4f0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4f10: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2F4F10u;
    {
        const bool branch_taken_0x2f4f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F10u;
            // 0x2f4f14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f10) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F4F18u;
label_2f4f18:
    // 0x2f4f18: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x2f4f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2f4f1c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2F4F24u);
    ctx->pc = 0x2F4F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F1Cu;
            // 0x2f4f20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F24u; }
        if (ctx->pc != 0x2F4F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F24u; }
        if (ctx->pc != 0x2F4F24u) { return; }
    }
    ctx->pc = 0x2F4F24u;
label_2f4f24:
    // 0x2f4f24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4f2c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2f4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2f4f30: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2F4F30u;
    {
        const bool branch_taken_0x2f4f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F30u;
            // 0x2f4f34: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f30) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F4F38u;
label_2f4f38:
    // 0x2f4f38: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2f4f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2f4f3c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F4F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F4F44u);
    ctx->pc = 0x2F4F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F3Cu;
            // 0x2f4f40: 0x2666091c  addiu       $a2, $s3, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F44u; }
        if (ctx->pc != 0x2F4F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F44u; }
        if (ctx->pc != 0x2F4F44u) { return; }
    }
    ctx->pc = 0x2F4F44u;
label_2f4f44:
    // 0x2f4f44: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2F4F44u;
    {
        const bool branch_taken_0x2f4f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f44) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F4F4Cu;
    // 0x2f4f4c: 0x8e65091c  lw          $a1, 0x91C($s3)
    ctx->pc = 0x2f4f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f4f50: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4F50u;
    {
        const bool branch_taken_0x2f4f50 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F4F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F50u;
            // 0x2f4f54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f50) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F58u;
    // 0x2f4f58: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F4F58u;
    SET_GPR_U32(ctx, 31, 0x2F4F60u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F60u; }
        if (ctx->pc != 0x2F4F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F60u; }
        if (ctx->pc != 0x2F4F60u) { return; }
    }
    ctx->pc = 0x2F4F60u;
label_2f4f60:
    // 0x2f4f60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4f68: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2f4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2f4f6c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2F4F6Cu;
    {
        const bool branch_taken_0x2f4f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F6Cu;
            // 0x2f4f70: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f6c) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F4F74u;
label_2f4f74:
    // 0x2f4f74: 0x8e620910  lw          $v0, 0x910($s3)
    ctx->pc = 0x2f4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2320)));
    // 0x2f4f78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f4f7c: 0xae620910  sw          $v0, 0x910($s3)
    ctx->pc = 0x2f4f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2320), GPR_U32(ctx, 2));
    // 0x2f4f80: 0x8e630914  lw          $v1, 0x914($s3)
    ctx->pc = 0x2f4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2324)));
    // 0x2f4f84: 0x8e62091c  lw          $v0, 0x91C($s3)
    ctx->pc = 0x2f4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f4f88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4f8c: 0xae620914  sw          $v0, 0x914($s3)
    ctx->pc = 0x2f4f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2324), GPR_U32(ctx, 2));
    // 0x2f4f90: 0x8e630910  lw          $v1, 0x910($s3)
    ctx->pc = 0x2f4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2320)));
    // 0x2f4f94: 0x8e620918  lw          $v0, 0x918($s3)
    ctx->pc = 0x2f4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x2f4f98: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2f4f98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f4f9c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2F4F9Cu;
    {
        const bool branch_taken_0x2f4f9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f9c) {
            ctx->pc = 0x2F4FD8u;
            goto label_2f4fd8;
        }
    }
    ctx->pc = 0x2F4FA4u;
    // 0x2f4fa4: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F4FA4u;
    SET_GPR_U32(ctx, 31, 0x2F4FACu);
    ctx->pc = 0x2F4FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FA4u;
            // 0x2f4fa8: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FACu; }
        if (ctx->pc != 0x2F4FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FACu; }
        if (ctx->pc != 0x2F4FACu) { return; }
    }
    ctx->pc = 0x2F4FACu;
label_2f4fac:
    // 0x2f4fac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4FACu;
    {
        const bool branch_taken_0x2f4fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4fac) {
            ctx->pc = 0x2F4FC4u;
            goto label_2f4fc4;
        }
    }
    ctx->pc = 0x2F4FB4u;
    // 0x2f4fb4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4fb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4FBCu;
    {
        const bool branch_taken_0x2f4fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FBCu;
            // 0x2f4fc0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fbc) {
            ctx->pc = 0x2F4FD8u;
            goto label_2f4fd8;
        }
    }
    ctx->pc = 0x2F4FC4u;
label_2f4fc4:
    // 0x2f4fc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4fc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4fcc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2f4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2f4fd0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2F4FD0u;
    {
        const bool branch_taken_0x2f4fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FD0u;
            // 0x2f4fd4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fd0) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F4FD8u;
label_2f4fd8:
    // 0x2f4fd8: 0x8e630910  lw          $v1, 0x910($s3)
    ctx->pc = 0x2f4fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2320)));
    // 0x2f4fdc: 0x8e620918  lw          $v0, 0x918($s3)
    ctx->pc = 0x2f4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x2f4fe0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f4fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f4fe4: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F4FE4u;
    {
        const bool branch_taken_0x2f4fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4fe4) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F4FECu;
    // 0x2f4fec: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F4FECu;
    SET_GPR_U32(ctx, 31, 0x2F4FF4u);
    ctx->pc = 0x2F4FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FECu;
            // 0x2f4ff0: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FF4u; }
        if (ctx->pc != 0x2F4FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FF4u; }
        if (ctx->pc != 0x2F4FF4u) { return; }
    }
    ctx->pc = 0x2F4FF4u;
label_2f4ff4:
    // 0x2f4ff4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4FF4u;
    {
        const bool branch_taken_0x2f4ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ff4) {
            ctx->pc = 0x2F500Cu;
            goto label_2f500c;
        }
    }
    ctx->pc = 0x2F4FFCu;
    // 0x2f4ffc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f5000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5004: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2F5004u;
    {
        const bool branch_taken_0x2f5004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5004u;
            // 0x2f5008: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5004) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F500Cu;
label_2f500c:
    // 0x2f500c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f5010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5014: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2f5014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2f5018: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2F5018u;
    {
        const bool branch_taken_0x2f5018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5018u;
            // 0x2f501c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5018) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F5020u;
label_2f5020:
    // 0x2f5020: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2f5020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2f5024: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F5024u;
    SET_GPR_U32(ctx, 31, 0x2F502Cu);
    ctx->pc = 0x2F5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5024u;
            // 0x2f5028: 0x27a6010c  addiu       $a2, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F502Cu; }
        if (ctx->pc != 0x2F502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F502Cu; }
        if (ctx->pc != 0x2F502Cu) { return; }
    }
    ctx->pc = 0x2F502Cu;
label_2f502c:
    // 0x2f502c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F502Cu;
    {
        const bool branch_taken_0x2f502c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f502c) {
            ctx->pc = 0x2F511Cu;
            goto label_2f511c;
        }
    }
    ctx->pc = 0x2F5034u;
    // 0x2f5034: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x2f5034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2f5038: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5038u;
    {
        const bool branch_taken_0x2f5038 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5038u;
            // 0x2f503c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5038) {
            ctx->pc = 0x2F505Cu;
            goto label_2f505c;
        }
    }
    ctx->pc = 0x2F5040u;
    // 0x2f5040: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F5040u;
    SET_GPR_U32(ctx, 31, 0x2F5048u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5048u; }
        if (ctx->pc != 0x2F5048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5048u; }
        if (ctx->pc != 0x2F5048u) { return; }
    }
    ctx->pc = 0x2F5048u;
label_2f5048:
    // 0x2f5048: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f5048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f504c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f5054: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2F5054u;
    {
        const bool branch_taken_0x2f5054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5054u;
            // 0x2f5058: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5054) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F505Cu;
label_2f505c:
    // 0x2f505c: 0x8e630910  lw          $v1, 0x910($s3)
    ctx->pc = 0x2f505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2320)));
    // 0x2f5060: 0x8e620918  lw          $v0, 0x918($s3)
    ctx->pc = 0x2f5060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x2f5064: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2f5064u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f5068: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2F5068u;
    {
        const bool branch_taken_0x2f5068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F506Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5068u;
            // 0x2f506c: 0x266404d0  addiu       $a0, $s3, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5068) {
            ctx->pc = 0x2F5098u;
            goto label_2f5098;
        }
    }
    ctx->pc = 0x2F5070u;
    // 0x2f5070: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f5070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f5074: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f5074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f5078: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2f5078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f507c: 0x8e6304cc  lw          $v1, 0x4CC($s3)
    ctx->pc = 0x2f507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1228)));
    // 0x2f5080: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5084: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f5084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f5088: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f5088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f508c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f508cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f5090: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F5090u;
    {
        const bool branch_taken_0x2f5090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5090u;
            // 0x2f5094: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5090) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F5098u;
label_2f5098:
    // 0x2f5098: 0x8e6408ec  lw          $a0, 0x8EC($s3)
    ctx->pc = 0x2f5098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2284)));
    // 0x2f509c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f509cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f50a0: 0x24a51808  addiu       $a1, $a1, 0x1808
    ctx->pc = 0x2f50a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6152));
    // 0x2f50a4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2F50A4u;
    SET_GPR_U32(ctx, 31, 0x2F50ACu);
    ctx->pc = 0x2F50A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50A4u;
            // 0x2f50a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50ACu; }
        if (ctx->pc != 0x2F50ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50ACu; }
        if (ctx->pc != 0x2F50ACu) { return; }
    }
    ctx->pc = 0x2F50ACu;
label_2f50ac:
    // 0x2f50ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F50ACu;
    {
        const bool branch_taken_0x2f50ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f50ac) {
            ctx->pc = 0x2F50B8u;
            goto label_2f50b8;
        }
    }
    ctx->pc = 0x2F50B4u;
    // 0x2f50b4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2f50b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f50b8:
    // 0x2f50b8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F50B8u;
    {
        const bool branch_taken_0x2f50b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F50BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50B8u;
            // 0x2f50bc: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50b8) {
            ctx->pc = 0x2F50C8u;
            goto label_2f50c8;
        }
    }
    ctx->pc = 0x2F50C0u;
    // 0x2f50c0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2F50C0u;
    SET_GPR_U32(ctx, 31, 0x2F50C8u);
    ctx->pc = 0x2F50C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50C0u;
            // 0x2f50c4: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50C8u; }
        if (ctx->pc != 0x2F50C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F50C8u; }
        if (ctx->pc != 0x2F50C8u) { return; }
    }
    ctx->pc = 0x2F50C8u;
label_2f50c8:
    // 0x2f50c8: 0x8e6208ec  lw          $v0, 0x8EC($s3)
    ctx->pc = 0x2f50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2284)));
    // 0x2f50cc: 0x80420045  lb          $v0, 0x45($v0)
    ctx->pc = 0x2f50ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 69)));
    // 0x2f50d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F50D0u;
    {
        const bool branch_taken_0x2f50d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f50d0) {
            ctx->pc = 0x2F50DCu;
            goto label_2f50dc;
        }
    }
    ctx->pc = 0x2F50D8u;
    // 0x2f50d8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2f50d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f50dc:
    // 0x2f50dc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F50DCu;
    {
        const bool branch_taken_0x2f50dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f50dc) {
            ctx->pc = 0x2F5108u;
            goto label_2f5108;
        }
    }
    ctx->pc = 0x2F50E4u;
    // 0x2f50e4: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F50E4u;
    {
        const bool branch_taken_0x2f50e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F50E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F50E4u;
            // 0x2f50e8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50e4) {
            ctx->pc = 0x2F5108u;
            goto label_2f5108;
        }
    }
    ctx->pc = 0x2F50ECu;
    // 0x2f50ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f50f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f50f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2f50f8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x2f50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x2f50fc: 0x8e6608ec  lw          $a2, 0x8EC($s3)
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2284)));
    // 0x2f5100: 0xc0bc7d0  jal         func_2F1F40
    ctx->pc = 0x2F5100u;
    SET_GPR_U32(ctx, 31, 0x2F5108u);
    ctx->pc = 0x2F5104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5100u;
            // 0x2f5104: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F40u;
    if (runtime->hasFunction(0x2F1F40u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5108u; }
        if (ctx->pc != 0x2F5108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateViewInfo__18CMemoryCardManagerFP13SAVEDATA_INFOP15SAVEDATA_FORMAT_0x2f1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5108u; }
        if (ctx->pc != 0x2F5108u) { return; }
    }
    ctx->pc = 0x2F5108u;
label_2f5108:
    // 0x2f5108: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f5108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f510c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f5114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5114u;
    {
        const bool branch_taken_0x2f5114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5114u;
            // 0x2f5118: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5114) {
            ctx->pc = 0x2F5120u;
            goto label_2f5120;
        }
    }
    ctx->pc = 0x2F511Cu;
label_2f511c:
    // 0x2f511c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f511cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5120:
    // 0x2f5120: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f5120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f5124: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f5124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f5128: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f5128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f512c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f512cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5138: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5138u;
            // 0x2f513c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5140u;
}
