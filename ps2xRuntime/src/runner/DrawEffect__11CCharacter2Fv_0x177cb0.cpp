#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEffect__11CCharacter2Fv
// Address: 0x177cb0 - 0x177e38
void DrawEffect__11CCharacter2Fv_0x177cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEffect__11CCharacter2Fv_0x177cb0");
#endif

    switch (ctx->pc) {
        case 0x177cb0u: goto label_177cb0;
        case 0x177cb4u: goto label_177cb4;
        case 0x177cb8u: goto label_177cb8;
        case 0x177cbcu: goto label_177cbc;
        case 0x177cc0u: goto label_177cc0;
        case 0x177cc4u: goto label_177cc4;
        case 0x177cc8u: goto label_177cc8;
        case 0x177cccu: goto label_177ccc;
        case 0x177cd0u: goto label_177cd0;
        case 0x177cd4u: goto label_177cd4;
        case 0x177cd8u: goto label_177cd8;
        case 0x177cdcu: goto label_177cdc;
        case 0x177ce0u: goto label_177ce0;
        case 0x177ce4u: goto label_177ce4;
        case 0x177ce8u: goto label_177ce8;
        case 0x177cecu: goto label_177cec;
        case 0x177cf0u: goto label_177cf0;
        case 0x177cf4u: goto label_177cf4;
        case 0x177cf8u: goto label_177cf8;
        case 0x177cfcu: goto label_177cfc;
        case 0x177d00u: goto label_177d00;
        case 0x177d04u: goto label_177d04;
        case 0x177d08u: goto label_177d08;
        case 0x177d0cu: goto label_177d0c;
        case 0x177d10u: goto label_177d10;
        case 0x177d14u: goto label_177d14;
        case 0x177d18u: goto label_177d18;
        case 0x177d1cu: goto label_177d1c;
        case 0x177d20u: goto label_177d20;
        case 0x177d24u: goto label_177d24;
        case 0x177d28u: goto label_177d28;
        case 0x177d2cu: goto label_177d2c;
        case 0x177d30u: goto label_177d30;
        case 0x177d34u: goto label_177d34;
        case 0x177d38u: goto label_177d38;
        case 0x177d3cu: goto label_177d3c;
        case 0x177d40u: goto label_177d40;
        case 0x177d44u: goto label_177d44;
        case 0x177d48u: goto label_177d48;
        case 0x177d4cu: goto label_177d4c;
        case 0x177d50u: goto label_177d50;
        case 0x177d54u: goto label_177d54;
        case 0x177d58u: goto label_177d58;
        case 0x177d5cu: goto label_177d5c;
        case 0x177d60u: goto label_177d60;
        case 0x177d64u: goto label_177d64;
        case 0x177d68u: goto label_177d68;
        case 0x177d6cu: goto label_177d6c;
        case 0x177d70u: goto label_177d70;
        case 0x177d74u: goto label_177d74;
        case 0x177d78u: goto label_177d78;
        case 0x177d7cu: goto label_177d7c;
        case 0x177d80u: goto label_177d80;
        case 0x177d84u: goto label_177d84;
        case 0x177d88u: goto label_177d88;
        case 0x177d8cu: goto label_177d8c;
        case 0x177d90u: goto label_177d90;
        case 0x177d94u: goto label_177d94;
        case 0x177d98u: goto label_177d98;
        case 0x177d9cu: goto label_177d9c;
        case 0x177da0u: goto label_177da0;
        case 0x177da4u: goto label_177da4;
        case 0x177da8u: goto label_177da8;
        case 0x177dacu: goto label_177dac;
        case 0x177db0u: goto label_177db0;
        case 0x177db4u: goto label_177db4;
        case 0x177db8u: goto label_177db8;
        case 0x177dbcu: goto label_177dbc;
        case 0x177dc0u: goto label_177dc0;
        case 0x177dc4u: goto label_177dc4;
        case 0x177dc8u: goto label_177dc8;
        case 0x177dccu: goto label_177dcc;
        case 0x177dd0u: goto label_177dd0;
        case 0x177dd4u: goto label_177dd4;
        case 0x177dd8u: goto label_177dd8;
        case 0x177ddcu: goto label_177ddc;
        case 0x177de0u: goto label_177de0;
        case 0x177de4u: goto label_177de4;
        case 0x177de8u: goto label_177de8;
        case 0x177decu: goto label_177dec;
        case 0x177df0u: goto label_177df0;
        case 0x177df4u: goto label_177df4;
        case 0x177df8u: goto label_177df8;
        case 0x177dfcu: goto label_177dfc;
        case 0x177e00u: goto label_177e00;
        case 0x177e04u: goto label_177e04;
        case 0x177e08u: goto label_177e08;
        case 0x177e0cu: goto label_177e0c;
        case 0x177e10u: goto label_177e10;
        case 0x177e14u: goto label_177e14;
        case 0x177e18u: goto label_177e18;
        case 0x177e1cu: goto label_177e1c;
        case 0x177e20u: goto label_177e20;
        case 0x177e24u: goto label_177e24;
        case 0x177e28u: goto label_177e28;
        case 0x177e2cu: goto label_177e2c;
        case 0x177e30u: goto label_177e30;
        case 0x177e34u: goto label_177e34;
        default: break;
    }

    ctx->pc = 0x177cb0u;

label_177cb0:
    // 0x177cb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x177cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_177cb4:
    // 0x177cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_177cb8:
    // 0x177cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_177cbc:
    // 0x177cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_177cc0:
    // 0x177cc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x177cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177cc4:
    // 0x177cc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_177cc8:
    // 0x177cc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x177cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177ccc:
    // 0x177ccc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177cd0:
    // 0x177cd0: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x177cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_177cd4:
    // 0x177cd4: 0x8c640570  lw          $a0, 0x570($v1)
    ctx->pc = 0x177cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1392)));
label_177cd8:
    // 0x177cd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_177cdc:
    if (ctx->pc == 0x177CDCu) {
        ctx->pc = 0x177CE0u;
        goto label_177ce0;
    }
    ctx->pc = 0x177CD8u;
    {
        const bool branch_taken_0x177cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177cd8) {
            ctx->pc = 0x177CE8u;
            goto label_177ce8;
        }
    }
    ctx->pc = 0x177CE0u;
label_177ce0:
    // 0x177ce0: 0xc0bd604  jal         func_2F5810
label_177ce4:
    if (ctx->pc == 0x177CE4u) {
        ctx->pc = 0x177CE8u;
        goto label_177ce8;
    }
    ctx->pc = 0x177CE0u;
    SET_GPR_U32(ctx, 31, 0x177CE8u);
    ctx->pc = 0x2F5810u;
    if (runtime->hasFunction(0x2F5810u)) {
        auto targetFn = runtime->lookupFunction(0x2F5810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CE8u; }
        if (ctx->pc != 0x177CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__17CSWordAfterEffectFv_0x2f5810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CE8u; }
        if (ctx->pc != 0x177CE8u) { return; }
    }
    ctx->pc = 0x177CE8u;
label_177ce8:
    // 0x177ce8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_177cec:
    // 0x177cec: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x177cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_177cf0:
    // 0x177cf0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_177cf4:
    if (ctx->pc == 0x177CF4u) {
        ctx->pc = 0x177CF4u;
            // 0x177cf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x177CF8u;
        goto label_177cf8;
    }
    ctx->pc = 0x177CF0u;
    {
        const bool branch_taken_0x177cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177CF0u;
            // 0x177cf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cf0) {
            ctx->pc = 0x177CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177cd0;
        }
    }
    ctx->pc = 0x177CF8u;
label_177cf8:
    // 0x177cf8: 0x8e3005e8  lw          $s0, 0x5E8($s1)
    ctx->pc = 0x177cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
label_177cfc:
    // 0x177cfc: 0x12000047  beqz        $s0, . + 4 + (0x47 << 2)
label_177d00:
    if (ctx->pc == 0x177D00u) {
        ctx->pc = 0x177D04u;
        goto label_177d04;
    }
    ctx->pc = 0x177CFCu;
    {
        const bool branch_taken_0x177cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x177cfc) {
            ctx->pc = 0x177E1Cu;
            goto label_177e1c;
        }
    }
    ctx->pc = 0x177D04u;
label_177d04:
    // 0x177d04: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x177d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_177d08:
    // 0x177d08: 0x27b2005c  addiu       $s2, $sp, 0x5C
    ctx->pc = 0x177d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_177d0c:
    // 0x177d0c: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x177d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_177d10:
    // 0x177d10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x177d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_177d14:
    // 0x177d14: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x177d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_177d18:
    // 0x177d18: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x177d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_177d1c:
    // 0x177d1c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x177d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_177d20:
    // 0x177d20: 0x320f809  jalr        $t9
label_177d24:
    if (ctx->pc == 0x177D24u) {
        ctx->pc = 0x177D28u;
        goto label_177d28;
    }
    ctx->pc = 0x177D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x177D28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x177D28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177D28u; }
            if (ctx->pc != 0x177D28u) { return; }
        }
        }
    }
    ctx->pc = 0x177D28u;
label_177d28:
    // 0x177d28: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x177d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_177d2c:
    // 0x177d2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x177d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_177d30:
    // 0x177d30: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x177d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_177d34:
    // 0x177d34: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x177d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_177d38:
    // 0x177d38: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x177d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_177d3c:
    // 0x177d3c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x177d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_177d40:
    // 0x177d40: 0x320f809  jalr        $t9
label_177d44:
    if (ctx->pc == 0x177D44u) {
        ctx->pc = 0x177D48u;
        goto label_177d48;
    }
    ctx->pc = 0x177D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x177D48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x177D48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177D48u; }
            if (ctx->pc != 0x177D48u) { return; }
        }
        }
    }
    ctx->pc = 0x177D48u;
label_177d48:
    // 0x177d48: 0xc04c050  jal         func_130140
label_177d4c:
    if (ctx->pc == 0x177D4Cu) {
        ctx->pc = 0x177D4Cu;
            // 0x177d4c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x177D50u;
        goto label_177d50;
    }
    ctx->pc = 0x177D48u;
    SET_GPR_U32(ctx, 31, 0x177D50u);
    ctx->pc = 0x177D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D48u;
            // 0x177d4c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D50u; }
        if (ctx->pc != 0x177D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D50u; }
        if (ctx->pc != 0x177D50u) { return; }
    }
    ctx->pc = 0x177D50u;
label_177d50:
    // 0x177d50: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x177d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_177d54:
    // 0x177d54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x177d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_177d58:
    // 0x177d58: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x177d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_177d5c:
    // 0x177d5c: 0x24a53988  addiu       $a1, $a1, 0x3988
    ctx->pc = 0x177d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14728));
label_177d60:
    // 0x177d60: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x177d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_177d64:
    // 0x177d64: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x177d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_177d68:
    // 0x177d68: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x177d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_177d6c:
    // 0x177d6c: 0xc04a38a  jal         func_128E28
label_177d70:
    if (ctx->pc == 0x177D70u) {
        ctx->pc = 0x177D70u;
            // 0x177d70: 0x2444019c  addiu       $a0, $v0, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
        ctx->pc = 0x177D74u;
        goto label_177d74;
    }
    ctx->pc = 0x177D6Cu;
    SET_GPR_U32(ctx, 31, 0x177D74u);
    ctx->pc = 0x177D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D6Cu;
            // 0x177d70: 0x2444019c  addiu       $a0, $v0, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D74u; }
        if (ctx->pc != 0x177D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D74u; }
        if (ctx->pc != 0x177D74u) { return; }
    }
    ctx->pc = 0x177D74u;
label_177d74:
    // 0x177d74: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_177d78:
    if (ctx->pc == 0x177D78u) {
        ctx->pc = 0x177D7Cu;
        goto label_177d7c;
    }
    ctx->pc = 0x177D74u;
    {
        const bool branch_taken_0x177d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177d74) {
            ctx->pc = 0x177DD0u;
            goto label_177dd0;
        }
    }
    ctx->pc = 0x177D7Cu;
label_177d7c:
    // 0x177d7c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x177d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_177d80:
    // 0x177d80: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x177d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_177d84:
    // 0x177d84: 0xc04ddb4  jal         func_1376D0
label_177d88:
    if (ctx->pc == 0x177D88u) {
        ctx->pc = 0x177D88u;
            // 0x177d88: 0x2445019c  addiu       $a1, $v0, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
        ctx->pc = 0x177D8Cu;
        goto label_177d8c;
    }
    ctx->pc = 0x177D84u;
    SET_GPR_U32(ctx, 31, 0x177D8Cu);
    ctx->pc = 0x177D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D84u;
            // 0x177d88: 0x2445019c  addiu       $a1, $v0, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D8Cu; }
        if (ctx->pc != 0x177D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D8Cu; }
        if (ctx->pc != 0x177D8Cu) { return; }
    }
    ctx->pc = 0x177D8Cu;
label_177d8c:
    // 0x177d8c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_177d90:
    if (ctx->pc == 0x177D90u) {
        ctx->pc = 0x177D90u;
            // 0x177d90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177D94u;
        goto label_177d94;
    }
    ctx->pc = 0x177D8Cu;
    {
        const bool branch_taken_0x177d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D8Cu;
            // 0x177d90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d8c) {
            ctx->pc = 0x177DD0u;
            goto label_177dd0;
        }
    }
    ctx->pc = 0x177D94u;
label_177d94:
    // 0x177d94: 0xc04de0c  jal         func_137830
label_177d98:
    if (ctx->pc == 0x177D98u) {
        ctx->pc = 0x177D98u;
            // 0x177d98: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x177D9Cu;
        goto label_177d9c;
    }
    ctx->pc = 0x177D94u;
    SET_GPR_U32(ctx, 31, 0x177D9Cu);
    ctx->pc = 0x177D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177D94u;
            // 0x177d98: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D9Cu; }
        if (ctx->pc != 0x177D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D9Cu; }
        if (ctx->pc != 0x177D9Cu) { return; }
    }
    ctx->pc = 0x177D9Cu;
label_177d9c:
    // 0x177d9c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x177d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_177da0:
    // 0x177da0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x177da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_177da4:
    // 0x177da4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177da8:
    // 0x177da8: 0xc041c50  jal         func_107140
label_177dac:
    if (ctx->pc == 0x177DACu) {
        ctx->pc = 0x177DACu;
            // 0x177dac: 0x244601e0  addiu       $a2, $v0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
        ctx->pc = 0x177DB0u;
        goto label_177db0;
    }
    ctx->pc = 0x177DA8u;
    SET_GPR_U32(ctx, 31, 0x177DB0u);
    ctx->pc = 0x177DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DA8u;
            // 0x177dac: 0x244601e0  addiu       $a2, $v0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107140u;
    if (runtime->hasFunction(0x107140u)) {
        auto targetFn = runtime->lookupFunction(0x107140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DB0u; }
        if (ctx->pc != 0x177DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x107140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DB0u; }
        if (ctx->pc != 0x177DB0u) { return; }
    }
    ctx->pc = 0x177DB0u;
label_177db0:
    // 0x177db0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x177db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_177db4:
    // 0x177db4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x177db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_177db8:
    // 0x177db8: 0xc041d20  jal         func_107480
label_177dbc:
    if (ctx->pc == 0x177DBCu) {
        ctx->pc = 0x177DBCu;
            // 0x177dbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177DC0u;
        goto label_177dc0;
    }
    ctx->pc = 0x177DB8u;
    SET_GPR_U32(ctx, 31, 0x177DC0u);
    ctx->pc = 0x177DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DB8u;
            // 0x177dbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107480u;
    if (runtime->hasFunction(0x107480u)) {
        auto targetFn = runtime->lookupFunction(0x107480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DC0u; }
        if (ctx->pc != 0x177DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrix_0x107480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DC0u; }
        if (ctx->pc != 0x177DC0u) { return; }
    }
    ctx->pc = 0x177DC0u;
label_177dc0:
    // 0x177dc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x177dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_177dc4:
    // 0x177dc4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x177dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_177dc8:
    // 0x177dc8: 0xc041c50  jal         func_107140
label_177dcc:
    if (ctx->pc == 0x177DCCu) {
        ctx->pc = 0x177DCCu;
            // 0x177dcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177DD0u;
        goto label_177dd0;
    }
    ctx->pc = 0x177DC8u;
    SET_GPR_U32(ctx, 31, 0x177DD0u);
    ctx->pc = 0x177DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DC8u;
            // 0x177dcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107140u;
    if (runtime->hasFunction(0x107140u)) {
        auto targetFn = runtime->lookupFunction(0x107140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DD0u; }
        if (ctx->pc != 0x177DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x107140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DD0u; }
        if (ctx->pc != 0x177DD0u) { return; }
    }
    ctx->pc = 0x177DD0u;
label_177dd0:
    // 0x177dd0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x177dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_177dd4:
    // 0x177dd4: 0x8c820198  lw          $v0, 0x198($a0)
    ctx->pc = 0x177dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_177dd8:
    // 0x177dd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_177ddc:
    if (ctx->pc == 0x177DDCu) {
        ctx->pc = 0x177DDCu;
            // 0x177ddc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x177DE0u;
        goto label_177de0;
    }
    ctx->pc = 0x177DD8u;
    {
        const bool branch_taken_0x177dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177DD8u;
            // 0x177ddc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177dd8) {
            ctx->pc = 0x177DFCu;
            goto label_177dfc;
        }
    }
    ctx->pc = 0x177DE0u;
label_177de0:
    // 0x177de0: 0xc05f504  jal         func_17D410
label_177de4:
    if (ctx->pc == 0x177DE4u) {
        ctx->pc = 0x177DE8u;
        goto label_177de8;
    }
    ctx->pc = 0x177DE0u;
    SET_GPR_U32(ctx, 31, 0x177DE8u);
    ctx->pc = 0x17D410u;
    if (runtime->hasFunction(0x17D410u)) {
        auto targetFn = runtime->lookupFunction(0x17D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DE8u; }
        if (ctx->pc != 0x177DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePacket__14CEffectManagerFP11mgC3DSprite_0x17d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DE8u; }
        if (ctx->pc != 0x177DE8u) { return; }
    }
    ctx->pc = 0x177DE8u;
label_177de8:
    // 0x177de8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x177de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_177dec:
    // 0x177dec: 0xc050c10  jal         func_143040
label_177df0:
    if (ctx->pc == 0x177DF0u) {
        ctx->pc = 0x177DF0u;
            // 0x177df0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x177DF4u;
        goto label_177df4;
    }
    ctx->pc = 0x177DECu;
    SET_GPR_U32(ctx, 31, 0x177DF4u);
    ctx->pc = 0x177DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177DECu;
            // 0x177df0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143040u;
    if (runtime->hasFunction(0x143040u)) {
        auto targetFn = runtime->lookupFunction(0x143040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DF4u; }
        if (ctx->pc != 0x177DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP9mgCVisualPA4_f_0x143040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DF4u; }
        if (ctx->pc != 0x177DF4u) { return; }
    }
    ctx->pc = 0x177DF4u;
label_177df4:
    // 0x177df4: 0x10000006  b           . + 4 + (0x6 << 2)
label_177df8:
    if (ctx->pc == 0x177DF8u) {
        ctx->pc = 0x177DFCu;
        goto label_177dfc;
    }
    ctx->pc = 0x177DF4u;
    {
        const bool branch_taken_0x177df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177df4) {
            ctx->pc = 0x177E10u;
            goto label_177e10;
        }
    }
    ctx->pc = 0x177DFCu;
label_177dfc:
    // 0x177dfc: 0x0  nop
    ctx->pc = 0x177dfcu;
    // NOP
label_177e00:
    // 0x177e00: 0xc060c30  jal         func_1830C0
label_177e04:
    if (ctx->pc == 0x177E04u) {
        ctx->pc = 0x177E04u;
            // 0x177e04: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x177E08u;
        goto label_177e08;
    }
    ctx->pc = 0x177E00u;
    SET_GPR_U32(ctx, 31, 0x177E08u);
    ctx->pc = 0x177E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E00u;
            // 0x177e04: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1830C0u;
    if (runtime->hasFunction(0x1830C0u)) {
        auto targetFn = runtime->lookupFunction(0x1830C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E08u; }
        if (ctx->pc != 0x177E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOrigin__14CEffectManagerFPf_0x1830c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E08u; }
        if (ctx->pc != 0x177E08u) { return; }
    }
    ctx->pc = 0x177E08u;
label_177e08:
    // 0x177e08: 0xc060b70  jal         func_182DC0
label_177e0c:
    if (ctx->pc == 0x177E0Cu) {
        ctx->pc = 0x177E0Cu;
            // 0x177e0c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x177E10u;
        goto label_177e10;
    }
    ctx->pc = 0x177E08u;
    SET_GPR_U32(ctx, 31, 0x177E10u);
    ctx->pc = 0x177E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E08u;
            // 0x177e0c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182DC0u;
    if (runtime->hasFunction(0x182DC0u)) {
        auto targetFn = runtime->lookupFunction(0x182DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E10u; }
        if (ctx->pc != 0x177E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CEffectManagerFv_0x182dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E10u; }
        if (ctx->pc != 0x177E10u) { return; }
    }
    ctx->pc = 0x177E10u;
label_177e10:
    // 0x177e10: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_177e14:
    // 0x177e14: 0x1600ffbb  bnez        $s0, . + 4 + (-0x45 << 2)
label_177e18:
    if (ctx->pc == 0x177E18u) {
        ctx->pc = 0x177E1Cu;
        goto label_177e1c;
    }
    ctx->pc = 0x177E14u;
    {
        const bool branch_taken_0x177e14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x177e14) {
            ctx->pc = 0x177D04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177d04;
        }
    }
    ctx->pc = 0x177E1Cu;
label_177e1c:
    // 0x177e1c: 0x0  nop
    ctx->pc = 0x177e1cu;
    // NOP
label_177e20:
    // 0x177e20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_177e24:
    // 0x177e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177e28:
    // 0x177e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177e2c:
    // 0x177e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_177e30:
    // 0x177e30: 0x3e00008  jr          $ra
label_177e34:
    if (ctx->pc == 0x177E34u) {
        ctx->pc = 0x177E34u;
            // 0x177e34: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x177E38u;
        goto label_fallthrough_0x177e30;
    }
    ctx->pc = 0x177E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177E30u;
            // 0x177e34: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x177e30:
    ctx->pc = 0x177E38u;
}
