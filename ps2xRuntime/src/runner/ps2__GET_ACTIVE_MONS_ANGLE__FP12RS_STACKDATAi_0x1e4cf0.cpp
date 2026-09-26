#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_MONS_ANGLE__FP12RS_STACKDATAi
// Address: 0x1e4cf0 - 0x1e4d68
void ps2__GET_ACTIVE_MONS_ANGLE__FP12RS_STACKDATAi_0x1e4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_MONS_ANGLE__FP12RS_STACKDATAi_0x1e4cf0");
#endif

    switch (ctx->pc) {
        case 0x1e4cf0u: goto label_1e4cf0;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4cf8u: goto label_1e4cf8;
        case 0x1e4cfcu: goto label_1e4cfc;
        case 0x1e4d00u: goto label_1e4d00;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d08u: goto label_1e4d08;
        case 0x1e4d0cu: goto label_1e4d0c;
        case 0x1e4d10u: goto label_1e4d10;
        case 0x1e4d14u: goto label_1e4d14;
        case 0x1e4d18u: goto label_1e4d18;
        case 0x1e4d1cu: goto label_1e4d1c;
        case 0x1e4d20u: goto label_1e4d20;
        case 0x1e4d24u: goto label_1e4d24;
        case 0x1e4d28u: goto label_1e4d28;
        case 0x1e4d2cu: goto label_1e4d2c;
        case 0x1e4d30u: goto label_1e4d30;
        case 0x1e4d34u: goto label_1e4d34;
        case 0x1e4d38u: goto label_1e4d38;
        case 0x1e4d3cu: goto label_1e4d3c;
        case 0x1e4d40u: goto label_1e4d40;
        case 0x1e4d44u: goto label_1e4d44;
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d4cu: goto label_1e4d4c;
        case 0x1e4d50u: goto label_1e4d50;
        case 0x1e4d54u: goto label_1e4d54;
        case 0x1e4d58u: goto label_1e4d58;
        case 0x1e4d5cu: goto label_1e4d5c;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d64u: goto label_1e4d64;
        default: break;
    }

    ctx->pc = 0x1e4cf0u;

label_1e4cf0:
    // 0x1e4cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4cf4:
    // 0x1e4cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4cf8:
    // 0x1e4cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e4cfc:
    // 0x1e4cfc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e4d00:
    if (ctx->pc == 0x1E4D00u) {
        ctx->pc = 0x1E4D00u;
            // 0x1e4d00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E4D04u;
        goto label_1e4d04;
    }
    ctx->pc = 0x1E4CFCu;
    {
        const bool branch_taken_0x1e4cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CFCu;
            // 0x1e4d00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cfc) {
            ctx->pc = 0x1E4D0Cu;
            goto label_1e4d0c;
        }
    }
    ctx->pc = 0x1E4D04u;
label_1e4d04:
    // 0x1e4d04: 0x10000014  b           . + 4 + (0x14 << 2)
label_1e4d08:
    if (ctx->pc == 0x1E4D08u) {
        ctx->pc = 0x1E4D08u;
            // 0x1e4d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D0Cu;
        goto label_1e4d0c;
    }
    ctx->pc = 0x1E4D04u;
    {
        const bool branch_taken_0x1e4d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D04u;
            // 0x1e4d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d04) {
            ctx->pc = 0x1E4D58u;
            goto label_1e4d58;
        }
    }
    ctx->pc = 0x1E4D0Cu;
label_1e4d0c:
    // 0x1e4d0c: 0xc07819c  jal         func_1E0670
label_1e4d10:
    if (ctx->pc == 0x1E4D10u) {
        ctx->pc = 0x1E4D10u;
            // 0x1e4d10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4D14u;
        goto label_1e4d14;
    }
    ctx->pc = 0x1E4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D14u);
    ctx->pc = 0x1E4D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D0Cu;
            // 0x1e4d10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D14u; }
        if (ctx->pc != 0x1E4D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D14u; }
        if (ctx->pc != 0x1E4D14u) { return; }
    }
    ctx->pc = 0x1E4D14u;
label_1e4d14:
    // 0x1e4d14: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e4d18:
    // 0x1e4d18: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1e4d1c:
    // 0x1e4d1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e4d20:
    // 0x1e4d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4d24:
    // 0x1e4d24: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1e4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1e4d28:
    // 0x1e4d28: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1e4d2c:
    if (ctx->pc == 0x1E4D2Cu) {
        ctx->pc = 0x1E4D2Cu;
            // 0x1e4d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D30u;
        goto label_1e4d30;
    }
    ctx->pc = 0x1E4D28u;
    {
        const bool branch_taken_0x1e4d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D28u;
            // 0x1e4d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d28) {
            ctx->pc = 0x1E4D38u;
            goto label_1e4d38;
        }
    }
    ctx->pc = 0x1E4D30u;
label_1e4d30:
    // 0x1e4d30: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e4d34:
    if (ctx->pc == 0x1E4D34u) {
        ctx->pc = 0x1E4D34u;
            // 0x1e4d34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1E4D38u;
        goto label_1e4d38;
    }
    ctx->pc = 0x1E4D30u;
    {
        const bool branch_taken_0x1e4d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D30u;
            // 0x1e4d34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d30) {
            ctx->pc = 0x1E4D5Cu;
            goto label_1e4d5c;
        }
    }
    ctx->pc = 0x1E4D38u;
label_1e4d38:
    // 0x1e4d38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4d3c:
    // 0x1e4d3c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e4d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e4d40:
    // 0x1e4d40: 0x320f809  jalr        $t9
label_1e4d44:
    if (ctx->pc == 0x1E4D44u) {
        ctx->pc = 0x1E4D44u;
            // 0x1e4d44: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E4D48u;
        goto label_1e4d48;
    }
    ctx->pc = 0x1E4D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4D48u);
        ctx->pc = 0x1E4D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D40u;
            // 0x1e4d44: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4D48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D48u; }
            if (ctx->pc != 0x1E4D48u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4D48u;
label_1e4d48:
    // 0x1e4d48: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e4d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4d4c:
    // 0x1e4d4c: 0xc0781c4  jal         func_1E0710
label_1e4d50:
    if (ctx->pc == 0x1E4D50u) {
        ctx->pc = 0x1E4D50u;
            // 0x1e4d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D54u;
        goto label_1e4d54;
    }
    ctx->pc = 0x1E4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D54u);
    ctx->pc = 0x1E4D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D4Cu;
            // 0x1e4d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D54u; }
        if (ctx->pc != 0x1E4D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D54u; }
        if (ctx->pc != 0x1E4D54u) { return; }
    }
    ctx->pc = 0x1E4D54u;
label_1e4d54:
    // 0x1e4d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4d58:
    // 0x1e4d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4d5c:
    // 0x1e4d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4d60:
    // 0x1e4d60: 0x3e00008  jr          $ra
label_1e4d64:
    if (ctx->pc == 0x1E4D64u) {
        ctx->pc = 0x1E4D64u;
            // 0x1e4d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4D68u;
        goto label_fallthrough_0x1e4d60;
    }
    ctx->pc = 0x1E4D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D60u;
            // 0x1e4d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4d60:
    ctx->pc = 0x1E4D68u;
}
