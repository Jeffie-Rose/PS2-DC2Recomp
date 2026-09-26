#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DAMAGE_SCORE__FP12RS_STACKDATAi
// Address: 0x1e1d50 - 0x1e1e78
void ps2__SET_DAMAGE_SCORE__FP12RS_STACKDATAi_0x1e1d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DAMAGE_SCORE__FP12RS_STACKDATAi_0x1e1d50");
#endif

    switch (ctx->pc) {
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d54u: goto label_1e1d54;
        case 0x1e1d58u: goto label_1e1d58;
        case 0x1e1d5cu: goto label_1e1d5c;
        case 0x1e1d60u: goto label_1e1d60;
        case 0x1e1d64u: goto label_1e1d64;
        case 0x1e1d68u: goto label_1e1d68;
        case 0x1e1d6cu: goto label_1e1d6c;
        case 0x1e1d70u: goto label_1e1d70;
        case 0x1e1d74u: goto label_1e1d74;
        case 0x1e1d78u: goto label_1e1d78;
        case 0x1e1d7cu: goto label_1e1d7c;
        case 0x1e1d80u: goto label_1e1d80;
        case 0x1e1d84u: goto label_1e1d84;
        case 0x1e1d88u: goto label_1e1d88;
        case 0x1e1d8cu: goto label_1e1d8c;
        case 0x1e1d90u: goto label_1e1d90;
        case 0x1e1d94u: goto label_1e1d94;
        case 0x1e1d98u: goto label_1e1d98;
        case 0x1e1d9cu: goto label_1e1d9c;
        case 0x1e1da0u: goto label_1e1da0;
        case 0x1e1da4u: goto label_1e1da4;
        case 0x1e1da8u: goto label_1e1da8;
        case 0x1e1dacu: goto label_1e1dac;
        case 0x1e1db0u: goto label_1e1db0;
        case 0x1e1db4u: goto label_1e1db4;
        case 0x1e1db8u: goto label_1e1db8;
        case 0x1e1dbcu: goto label_1e1dbc;
        case 0x1e1dc0u: goto label_1e1dc0;
        case 0x1e1dc4u: goto label_1e1dc4;
        case 0x1e1dc8u: goto label_1e1dc8;
        case 0x1e1dccu: goto label_1e1dcc;
        case 0x1e1dd0u: goto label_1e1dd0;
        case 0x1e1dd4u: goto label_1e1dd4;
        case 0x1e1dd8u: goto label_1e1dd8;
        case 0x1e1ddcu: goto label_1e1ddc;
        case 0x1e1de0u: goto label_1e1de0;
        case 0x1e1de4u: goto label_1e1de4;
        case 0x1e1de8u: goto label_1e1de8;
        case 0x1e1decu: goto label_1e1dec;
        case 0x1e1df0u: goto label_1e1df0;
        case 0x1e1df4u: goto label_1e1df4;
        case 0x1e1df8u: goto label_1e1df8;
        case 0x1e1dfcu: goto label_1e1dfc;
        case 0x1e1e00u: goto label_1e1e00;
        case 0x1e1e04u: goto label_1e1e04;
        case 0x1e1e08u: goto label_1e1e08;
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e10u: goto label_1e1e10;
        case 0x1e1e14u: goto label_1e1e14;
        case 0x1e1e18u: goto label_1e1e18;
        case 0x1e1e1cu: goto label_1e1e1c;
        case 0x1e1e20u: goto label_1e1e20;
        case 0x1e1e24u: goto label_1e1e24;
        case 0x1e1e28u: goto label_1e1e28;
        case 0x1e1e2cu: goto label_1e1e2c;
        case 0x1e1e30u: goto label_1e1e30;
        case 0x1e1e34u: goto label_1e1e34;
        case 0x1e1e38u: goto label_1e1e38;
        case 0x1e1e3cu: goto label_1e1e3c;
        case 0x1e1e40u: goto label_1e1e40;
        case 0x1e1e44u: goto label_1e1e44;
        case 0x1e1e48u: goto label_1e1e48;
        case 0x1e1e4cu: goto label_1e1e4c;
        case 0x1e1e50u: goto label_1e1e50;
        case 0x1e1e54u: goto label_1e1e54;
        case 0x1e1e58u: goto label_1e1e58;
        case 0x1e1e5cu: goto label_1e1e5c;
        case 0x1e1e60u: goto label_1e1e60;
        case 0x1e1e64u: goto label_1e1e64;
        case 0x1e1e68u: goto label_1e1e68;
        case 0x1e1e6cu: goto label_1e1e6c;
        case 0x1e1e70u: goto label_1e1e70;
        case 0x1e1e74u: goto label_1e1e74;
        default: break;
    }

    ctx->pc = 0x1e1d50u;

label_1e1d50:
    // 0x1e1d50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e1d54:
    // 0x1e1d54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e1d58:
    // 0x1e1d58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e1d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e1d5c:
    // 0x1e1d5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e1d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e1d60:
    // 0x1e1d60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e1d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e1d64:
    // 0x1e1d64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e1d68:
    // 0x1e1d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1d6c:
    // 0x1e1d6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e1d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d70:
    // 0x1e1d70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e1d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d74:
    // 0x1e1d74: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_1e1d78:
    if (ctx->pc == 0x1E1D78u) {
        ctx->pc = 0x1E1D78u;
            // 0x1e1d78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E1D7Cu;
        goto label_1e1d7c;
    }
    ctx->pc = 0x1E1D74u;
    {
        const bool branch_taken_0x1e1d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D74u;
            // 0x1e1d78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d74) {
            ctx->pc = 0x1E1D90u;
            goto label_1e1d90;
        }
    }
    ctx->pc = 0x1E1D7Cu;
label_1e1d7c:
    // 0x1e1d7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1d80:
    // 0x1e1d80: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1e1d84:
    if (ctx->pc == 0x1E1D84u) {
        ctx->pc = 0x1E1D84u;
            // 0x1e1d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D88u;
        goto label_1e1d88;
    }
    ctx->pc = 0x1E1D80u;
    {
        const bool branch_taken_0x1e1d80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D80u;
            // 0x1e1d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d80) {
            ctx->pc = 0x1E1D94u;
            goto label_1e1d94;
        }
    }
    ctx->pc = 0x1E1D88u;
label_1e1d88:
    // 0x1e1d88: 0x10000033  b           . + 4 + (0x33 << 2)
label_1e1d8c:
    if (ctx->pc == 0x1E1D8Cu) {
        ctx->pc = 0x1E1D8Cu;
            // 0x1e1d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D90u;
        goto label_1e1d90;
    }
    ctx->pc = 0x1E1D88u;
    {
        const bool branch_taken_0x1e1d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D88u;
            // 0x1e1d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d88) {
            ctx->pc = 0x1E1E58u;
            goto label_1e1e58;
        }
    }
    ctx->pc = 0x1E1D90u;
label_1e1d90:
    // 0x1e1d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d94:
    // 0x1e1d94: 0xc07819c  jal         func_1E0670
label_1e1d98:
    if (ctx->pc == 0x1E1D98u) {
        ctx->pc = 0x1E1D98u;
            // 0x1e1d98: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E1D9Cu;
        goto label_1e1d9c;
    }
    ctx->pc = 0x1E1D94u;
    SET_GPR_U32(ctx, 31, 0x1E1D9Cu);
    ctx->pc = 0x1E1D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D94u;
            // 0x1e1d98: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D9Cu; }
        if (ctx->pc != 0x1E1D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D9Cu; }
        if (ctx->pc != 0x1E1D9Cu) { return; }
    }
    ctx->pc = 0x1E1D9Cu;
label_1e1d9c:
    // 0x1e1d9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e1da0:
    // 0x1e1da0: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_1e1da4:
    if (ctx->pc == 0x1E1DA4u) {
        ctx->pc = 0x1E1DA8u;
        goto label_1e1da8;
    }
    ctx->pc = 0x1E1DA0u;
    {
        const bool branch_taken_0x1e1da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1da0) {
            ctx->pc = 0x1E1DCCu;
            goto label_1e1dcc;
        }
    }
    ctx->pc = 0x1E1DA8u;
label_1e1da8:
    // 0x1e1da8: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e1dac:
    // 0x1e1dac: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1e1db0:
    // 0x1e1db0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e1db4:
    // 0x1e1db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1db8:
    // 0x1e1db8: 0x8c540484  lw          $s4, 0x484($v0)
    ctx->pc = 0x1e1db8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1e1dbc:
    // 0x1e1dbc: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_1e1dc0:
    if (ctx->pc == 0x1E1DC0u) {
        ctx->pc = 0x1E1DC0u;
            // 0x1e1dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DC4u;
        goto label_1e1dc4;
    }
    ctx->pc = 0x1E1DBCu;
    {
        const bool branch_taken_0x1e1dbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DBCu;
            // 0x1e1dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dbc) {
            ctx->pc = 0x1E1DD8u;
            goto label_1e1dd8;
        }
    }
    ctx->pc = 0x1E1DC4u;
label_1e1dc4:
    // 0x1e1dc4: 0x10000024  b           . + 4 + (0x24 << 2)
label_1e1dc8:
    if (ctx->pc == 0x1E1DC8u) {
        ctx->pc = 0x1E1DC8u;
            // 0x1e1dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DCCu;
        goto label_1e1dcc;
    }
    ctx->pc = 0x1E1DC4u;
    {
        const bool branch_taken_0x1e1dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DC4u;
            // 0x1e1dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dc4) {
            ctx->pc = 0x1E1E58u;
            goto label_1e1e58;
        }
    }
    ctx->pc = 0x1E1DCCu;
label_1e1dcc:
    // 0x1e1dcc: 0x8f948e70  lw          $s4, -0x7190($gp)
    ctx->pc = 0x1e1dccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e1dd0:
    // 0x1e1dd0: 0x0  nop
    ctx->pc = 0x1e1dd0u;
    // NOP
label_1e1dd4:
    // 0x1e1dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e1dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e1dd8:
    // 0x1e1dd8: 0xc07819c  jal         func_1E0670
label_1e1ddc:
    if (ctx->pc == 0x1E1DDCu) {
        ctx->pc = 0x1E1DDCu;
            // 0x1e1ddc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E1DE0u;
        goto label_1e1de0;
    }
    ctx->pc = 0x1E1DD8u;
    SET_GPR_U32(ctx, 31, 0x1E1DE0u);
    ctx->pc = 0x1E1DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DD8u;
            // 0x1e1ddc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DE0u; }
        if (ctx->pc != 0x1E1DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DE0u; }
        if (ctx->pc != 0x1E1DE0u) { return; }
    }
    ctx->pc = 0x1E1DE0u;
label_1e1de0:
    // 0x1e1de0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e1de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1de4:
    // 0x1e1de4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e1de8:
    // 0x1e1de8: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_1e1dec:
    if (ctx->pc == 0x1E1DECu) {
        ctx->pc = 0x1E1DECu;
            // 0x1e1dec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DF0u;
        goto label_1e1df0;
    }
    ctx->pc = 0x1E1DE8u;
    {
        const bool branch_taken_0x1e1de8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DE8u;
            // 0x1e1dec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1de8) {
            ctx->pc = 0x1E1DFCu;
            goto label_1e1dfc;
        }
    }
    ctx->pc = 0x1E1DF0u;
label_1e1df0:
    // 0x1e1df0: 0xc07819c  jal         func_1E0670
label_1e1df4:
    if (ctx->pc == 0x1E1DF4u) {
        ctx->pc = 0x1E1DF8u;
        goto label_1e1df8;
    }
    ctx->pc = 0x1E1DF0u;
    SET_GPR_U32(ctx, 31, 0x1E1DF8u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DF8u; }
        if (ctx->pc != 0x1E1DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DF8u; }
        if (ctx->pc != 0x1E1DF8u) { return; }
    }
    ctx->pc = 0x1E1DF8u;
label_1e1df8:
    // 0x1e1df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1dfc:
    // 0x1e1dfc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1e1dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e1e00:
    // 0x1e1e00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e1e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e04:
    // 0x1e1e04: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e1e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e1e08:
    // 0x1e1e08: 0x320f809  jalr        $t9
label_1e1e0c:
    if (ctx->pc == 0x1E1E0Cu) {
        ctx->pc = 0x1E1E0Cu;
            // 0x1e1e0c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E1E10u;
        goto label_1e1e10;
    }
    ctx->pc = 0x1E1E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1E10u);
        ctx->pc = 0x1E1E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E08u;
            // 0x1e1e0c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E1E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E10u; }
            if (ctx->pc != 0x1E1E10u) { return; }
        }
        }
    }
    ctx->pc = 0x1E1E10u;
label_1e1e10:
    // 0x1e1e10: 0xc6810110  lwc1        $f1, 0x110($s4)
    ctx->pc = 0x1e1e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e1e14:
    // 0x1e1e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1e18:
    // 0x1e1e18: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1e1e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e1e1c:
    // 0x1e1e1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e1e20:
    // 0x1e1e20: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1e1e24:
    if (ctx->pc == 0x1E1E24u) {
        ctx->pc = 0x1E1E24u;
            // 0x1e1e24: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x1E1E28u;
        goto label_1e1e28;
    }
    ctx->pc = 0x1E1E20u;
    {
        const bool branch_taken_0x1e1e20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E20u;
            // 0x1e1e24: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e20) {
            ctx->pc = 0x1E1E40u;
            goto label_1e1e40;
        }
    }
    ctx->pc = 0x1E1E28u;
label_1e1e28:
    // 0x1e1e28: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1e1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1e1e2c:
    // 0x1e1e2c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e1e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e1e30:
    // 0x1e1e30: 0x2484fa50  addiu       $a0, $a0, -0x5B0
    ctx->pc = 0x1e1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965840));
label_1e1e34:
    // 0x1e1e34: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e1e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e1e38:
    // 0x1e1e38: 0xc072a90  jal         func_1CAA40
label_1e1e3c:
    if (ctx->pc == 0x1E1E3Cu) {
        ctx->pc = 0x1E1E3Cu;
            // 0x1e1e3c: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x1E1E40u;
        goto label_1e1e40;
    }
    ctx->pc = 0x1E1E38u;
    SET_GPR_U32(ctx, 31, 0x1E1E40u);
    ctx->pc = 0x1E1E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E38u;
            // 0x1e1e3c: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAA40u;
    if (runtime->hasFunction(0x1CAA40u)) {
        auto targetFn = runtime->lookupFunction(0x1CAA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E40u; }
        if (ctx->pc != 0x1E1E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__12CDamageScoreFsss_0x1caa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E40u; }
        if (ctx->pc != 0x1E1E40u) { return; }
    }
    ctx->pc = 0x1E1E40u;
label_1e1e40:
    // 0x1e1e40: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1e1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1e1e44:
    // 0x1e1e44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e1e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e48:
    // 0x1e1e48: 0x2484fa50  addiu       $a0, $a0, -0x5B0
    ctx->pc = 0x1e1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965840));
label_1e1e4c:
    // 0x1e1e4c: 0xc072a68  jal         func_1CA9A0
label_1e1e50:
    if (ctx->pc == 0x1E1E50u) {
        ctx->pc = 0x1E1E50u;
            // 0x1e1e50: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E1E54u;
        goto label_1e1e54;
    }
    ctx->pc = 0x1E1E4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1E54u);
    ctx->pc = 0x1E1E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E4Cu;
            // 0x1e1e50: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA9A0u;
    if (runtime->hasFunction(0x1CA9A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E54u; }
        if (ctx->pc != 0x1E1E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__12CDamageScoreFPfi_0x1ca9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E54u; }
        if (ctx->pc != 0x1E1E54u) { return; }
    }
    ctx->pc = 0x1E1E54u;
label_1e1e54:
    // 0x1e1e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1e58:
    // 0x1e1e58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e1e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e1e5c:
    // 0x1e1e5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e1e5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1e60:
    // 0x1e1e60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e1e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1e64:
    // 0x1e1e64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e1e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1e68:
    // 0x1e1e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1e6c:
    // 0x1e1e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1e70:
    // 0x1e1e70: 0x3e00008  jr          $ra
label_1e1e74:
    if (ctx->pc == 0x1E1E74u) {
        ctx->pc = 0x1E1E74u;
            // 0x1e1e74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E1E78u;
        goto label_fallthrough_0x1e1e70;
    }
    ctx->pc = 0x1E1E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E70u;
            // 0x1e1e74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e1e70:
    ctx->pc = 0x1E1E78u;
}
