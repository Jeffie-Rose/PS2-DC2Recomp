#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _request_end
// Address: 0x112d40 - 0x112df4
void _request_end_0x112d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_end_0x112d40");
#endif

    switch (ctx->pc) {
        case 0x112d40u: goto label_112d40;
        case 0x112d44u: goto label_112d44;
        case 0x112d48u: goto label_112d48;
        case 0x112d4cu: goto label_112d4c;
        case 0x112d50u: goto label_112d50;
        case 0x112d54u: goto label_112d54;
        case 0x112d58u: goto label_112d58;
        case 0x112d5cu: goto label_112d5c;
        case 0x112d60u: goto label_112d60;
        case 0x112d64u: goto label_112d64;
        case 0x112d68u: goto label_112d68;
        case 0x112d6cu: goto label_112d6c;
        case 0x112d70u: goto label_112d70;
        case 0x112d74u: goto label_112d74;
        case 0x112d78u: goto label_112d78;
        case 0x112d7cu: goto label_112d7c;
        case 0x112d80u: goto label_112d80;
        case 0x112d84u: goto label_112d84;
        case 0x112d88u: goto label_112d88;
        case 0x112d8cu: goto label_112d8c;
        case 0x112d90u: goto label_112d90;
        case 0x112d94u: goto label_112d94;
        case 0x112d98u: goto label_112d98;
        case 0x112d9cu: goto label_112d9c;
        case 0x112da0u: goto label_112da0;
        case 0x112da4u: goto label_112da4;
        case 0x112da8u: goto label_112da8;
        case 0x112dacu: goto label_112dac;
        case 0x112db0u: goto label_112db0;
        case 0x112db4u: goto label_112db4;
        case 0x112db8u: goto label_112db8;
        case 0x112dbcu: goto label_112dbc;
        case 0x112dc0u: goto label_112dc0;
        case 0x112dc4u: goto label_112dc4;
        case 0x112dc8u: goto label_112dc8;
        case 0x112dccu: goto label_112dcc;
        case 0x112dd0u: goto label_112dd0;
        case 0x112dd4u: goto label_112dd4;
        case 0x112dd8u: goto label_112dd8;
        case 0x112ddcu: goto label_112ddc;
        case 0x112de0u: goto label_112de0;
        case 0x112de4u: goto label_112de4;
        case 0x112de8u: goto label_112de8;
        case 0x112decu: goto label_112dec;
        case 0x112df0u: goto label_112df0;
        default: break;
    }

    ctx->pc = 0x112d40u;

label_112d40:
    // 0x112d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x112d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_112d44:
    // 0x112d44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x112d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_112d48:
    // 0x112d48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x112d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_112d4c:
    // 0x112d4c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x112d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_112d50:
    // 0x112d50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x112d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_112d54:
    // 0x112d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112d58:
    // 0x112d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_112d5c:
    // 0x112d5c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x112d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_112d60:
    // 0x112d60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_112d64:
    if (ctx->pc == 0x112D64u) {
        ctx->pc = 0x112D64u;
            // 0x112d64: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x112D68u;
        goto label_112d68;
    }
    ctx->pc = 0x112D60u;
    {
        const bool branch_taken_0x112d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x112D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D60u;
            // 0x112d64: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d60) {
            ctx->pc = 0x112D88u;
            goto label_112d88;
        }
    }
    ctx->pc = 0x112D68u;
label_112d68:
    // 0x112d68: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_112d6c:
    if (ctx->pc == 0x112D6Cu) {
        ctx->pc = 0x112D6Cu;
            // 0x112d6c: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x112D70u;
        goto label_112d70;
    }
    ctx->pc = 0x112D68u;
    {
        const bool branch_taken_0x112d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d68) {
            ctx->pc = 0x112D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112D68u;
            // 0x112d6c: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DC0u;
            goto label_112dc0;
        }
    }
    ctx->pc = 0x112D70u;
label_112d70:
    // 0x112d70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x112d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_112d74:
    // 0x112d74: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x112d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_112d78:
    // 0x112d78: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_112d7c:
    if (ctx->pc == 0x112D7Cu) {
        ctx->pc = 0x112D7Cu;
            // 0x112d7c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x112D80u;
        goto label_112d80;
    }
    ctx->pc = 0x112D78u;
    {
        const bool branch_taken_0x112d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112d78) {
            ctx->pc = 0x112D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112D78u;
            // 0x112d7c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DA8u;
            goto label_112da8;
        }
    }
    ctx->pc = 0x112D80u;
label_112d80:
    // 0x112d80: 0x1000000f  b           . + 4 + (0xF << 2)
label_112d84:
    if (ctx->pc == 0x112D84u) {
        ctx->pc = 0x112D84u;
            // 0x112d84: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x112D88u;
        goto label_112d88;
    }
    ctx->pc = 0x112D80u;
    {
        const bool branch_taken_0x112d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D80u;
            // 0x112d84: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d80) {
            ctx->pc = 0x112DC0u;
            goto label_112dc0;
        }
    }
    ctx->pc = 0x112D88u;
label_112d88:
    // 0x112d88: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x112d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_112d8c:
    // 0x112d8c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_112d90:
    // 0x112d90: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_112d94:
    if (ctx->pc == 0x112D94u) {
        ctx->pc = 0x112D94u;
            // 0x112d94: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x112D98u;
        goto label_112d98;
    }
    ctx->pc = 0x112D90u;
    {
        const bool branch_taken_0x112d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d90) {
            ctx->pc = 0x112D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112D90u;
            // 0x112d94: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DC4u;
            goto label_112dc4;
        }
    }
    ctx->pc = 0x112D98u;
label_112d98:
    // 0x112d98: 0x40f809  jalr        $v0
label_112d9c:
    if (ctx->pc == 0x112D9Cu) {
        ctx->pc = 0x112D9Cu;
            // 0x112d9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x112DA0u;
        goto label_112da0;
    }
    ctx->pc = 0x112D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112DA0u);
        ctx->pc = 0x112D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D98u;
            // 0x112d9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x112DA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x112DA0u; }
            if (ctx->pc != 0x112DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x112DA0u;
label_112da0:
    // 0x112da0: 0x10000007  b           . + 4 + (0x7 << 2)
label_112da4:
    if (ctx->pc == 0x112DA4u) {
        ctx->pc = 0x112DA4u;
            // 0x112da4: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x112DA8u;
        goto label_112da8;
    }
    ctx->pc = 0x112DA0u;
    {
        const bool branch_taken_0x112da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DA0u;
            // 0x112da4: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112da0) {
            ctx->pc = 0x112DC0u;
            goto label_112dc0;
        }
    }
    ctx->pc = 0x112DA8u;
label_112da8:
    // 0x112da8: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x112da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_112dac:
    // 0x112dac: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x112dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_112db0:
    // 0x112db0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x112db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_112db4:
    // 0x112db4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x112db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_112db8:
    // 0x112db8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x112db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_112dbc:
    // 0x112dbc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x112dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_112dc0:
    // 0x112dc0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x112dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112dc4:
    // 0x112dc4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_112dc8:
    if (ctx->pc == 0x112DC8u) {
        ctx->pc = 0x112DCCu;
        goto label_112dcc;
    }
    ctx->pc = 0x112DC4u;
    {
        const bool branch_taken_0x112dc4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x112dc4) {
            ctx->pc = 0x112DD4u;
            goto label_112dd4;
        }
    }
    ctx->pc = 0x112DCCu;
label_112dcc:
    // 0x112dcc: 0xc044044  jal         func_110110
label_112dd0:
    if (ctx->pc == 0x112DD0u) {
        ctx->pc = 0x112DD4u;
        goto label_112dd4;
    }
    ctx->pc = 0x112DCCu;
    SET_GPR_U32(ctx, 31, 0x112DD4u);
    ctx->pc = 0x110110u;
    if (runtime->hasFunction(0x110110u)) {
        auto targetFn = runtime->lookupFunction(0x110110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112DD4u; }
        if (ctx->pc != 0x112DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x110110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112DD4u; }
        if (ctx->pc != 0x112DD4u) { return; }
    }
    ctx->pc = 0x112DD4u;
label_112dd4:
    // 0x112dd4: 0xc044b2c  jal         func_112CB0
label_112dd8:
    if (ctx->pc == 0x112DD8u) {
        ctx->pc = 0x112DD8u;
            // 0x112dd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x112DDCu;
        goto label_112ddc;
    }
    ctx->pc = 0x112DD4u;
    SET_GPR_U32(ctx, 31, 0x112DDCu);
    ctx->pc = 0x112DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112DD4u;
            // 0x112dd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112CB0u;
    if (runtime->hasFunction(0x112CB0u)) {
        auto targetFn = runtime->lookupFunction(0x112CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112DDCu; }
        if (ctx->pc != 0x112DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcFreePacket_0x112cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112DDCu; }
        if (ctx->pc != 0x112DDCu) { return; }
    }
    ctx->pc = 0x112DDCu;
label_112ddc:
    // 0x112ddc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x112ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_112de0:
    // 0x112de0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x112de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_112de4:
    // 0x112de4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_112de8:
    // 0x112de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112dec:
    // 0x112dec: 0x3e00008  jr          $ra
label_112df0:
    if (ctx->pc == 0x112DF0u) {
        ctx->pc = 0x112DF0u;
            // 0x112df0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x112DF4u;
        goto label_fallthrough_0x112dec;
    }
    ctx->pc = 0x112DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DECu;
            // 0x112df0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x112dec:
    ctx->pc = 0x112DF4u;
}
