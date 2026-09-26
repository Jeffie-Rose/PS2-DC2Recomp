#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_MOS_END__FP12RS_STACKDATAi
// Address: 0x1e6010 - 0x1e60a8
void ps2__CHECK_MOS_END__FP12RS_STACKDATAi_0x1e6010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_MOS_END__FP12RS_STACKDATAi_0x1e6010");
#endif

    switch (ctx->pc) {
        case 0x1e6010u: goto label_1e6010;
        case 0x1e6014u: goto label_1e6014;
        case 0x1e6018u: goto label_1e6018;
        case 0x1e601cu: goto label_1e601c;
        case 0x1e6020u: goto label_1e6020;
        case 0x1e6024u: goto label_1e6024;
        case 0x1e6028u: goto label_1e6028;
        case 0x1e602cu: goto label_1e602c;
        case 0x1e6030u: goto label_1e6030;
        case 0x1e6034u: goto label_1e6034;
        case 0x1e6038u: goto label_1e6038;
        case 0x1e603cu: goto label_1e603c;
        case 0x1e6040u: goto label_1e6040;
        case 0x1e6044u: goto label_1e6044;
        case 0x1e6048u: goto label_1e6048;
        case 0x1e604cu: goto label_1e604c;
        case 0x1e6050u: goto label_1e6050;
        case 0x1e6054u: goto label_1e6054;
        case 0x1e6058u: goto label_1e6058;
        case 0x1e605cu: goto label_1e605c;
        case 0x1e6060u: goto label_1e6060;
        case 0x1e6064u: goto label_1e6064;
        case 0x1e6068u: goto label_1e6068;
        case 0x1e606cu: goto label_1e606c;
        case 0x1e6070u: goto label_1e6070;
        case 0x1e6074u: goto label_1e6074;
        case 0x1e6078u: goto label_1e6078;
        case 0x1e607cu: goto label_1e607c;
        case 0x1e6080u: goto label_1e6080;
        case 0x1e6084u: goto label_1e6084;
        case 0x1e6088u: goto label_1e6088;
        case 0x1e608cu: goto label_1e608c;
        case 0x1e6090u: goto label_1e6090;
        case 0x1e6094u: goto label_1e6094;
        case 0x1e6098u: goto label_1e6098;
        case 0x1e609cu: goto label_1e609c;
        case 0x1e60a0u: goto label_1e60a0;
        case 0x1e60a4u: goto label_1e60a4;
        default: break;
    }

    ctx->pc = 0x1e6010u;

label_1e6010:
    // 0x1e6010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e6014:
    // 0x1e6014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6018:
    // 0x1e6018: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e601c:
    // 0x1e601c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6020:
    // 0x1e6020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6024:
    // 0x1e6024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e6024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6028:
    // 0x1e6028: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1e602c:
    if (ctx->pc == 0x1E602Cu) {
        ctx->pc = 0x1E602Cu;
            // 0x1e602c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6030u;
        goto label_1e6030;
    }
    ctx->pc = 0x1E6028u;
    {
        const bool branch_taken_0x1e6028 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E602Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6028u;
            // 0x1e602c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6028) {
            ctx->pc = 0x1E6048u;
            goto label_1e6048;
        }
    }
    ctx->pc = 0x1E6030u;
label_1e6030:
    // 0x1e6030: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e6034:
    // 0x1e6034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6038:
    // 0x1e6038: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x1e6038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_1e603c:
    // 0x1e603c: 0x320f809  jalr        $t9
label_1e6040:
    if (ctx->pc == 0x1E6040u) {
        ctx->pc = 0x1E6040u;
            // 0x1e6040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6044u;
        goto label_1e6044;
    }
    ctx->pc = 0x1E603Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6044u);
        ctx->pc = 0x1E6040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E603Cu;
            // 0x1e6040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6044u; }
            if (ctx->pc != 0x1E6044u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6044u;
label_1e6044:
    // 0x1e6044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6048:
    // 0x1e6048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e604c:
    // 0x1e604c: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_1e6050:
    if (ctx->pc == 0x1E6050u) {
        ctx->pc = 0x1E6050u;
            // 0x1e6050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6054u;
        goto label_1e6054;
    }
    ctx->pc = 0x1E604Cu;
    {
        const bool branch_taken_0x1e604c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E604Cu;
            // 0x1e6050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e604c) {
            ctx->pc = 0x1E6088u;
            goto label_1e6088;
        }
    }
    ctx->pc = 0x1E6054u;
label_1e6054:
    // 0x1e6054: 0xc0781b8  jal         func_1E06E0
label_1e6058:
    if (ctx->pc == 0x1E6058u) {
        ctx->pc = 0x1E6058u;
            // 0x1e6058: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1E605Cu;
        goto label_1e605c;
    }
    ctx->pc = 0x1E6054u;
    SET_GPR_U32(ctx, 31, 0x1E605Cu);
    ctx->pc = 0x1E6058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6054u;
            // 0x1e6058: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E605Cu; }
        if (ctx->pc != 0x1E605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E605Cu; }
        if (ctx->pc != 0x1E605Cu) { return; }
    }
    ctx->pc = 0x1E605Cu;
label_1e605c:
    // 0x1e605c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e6060:
    if (ctx->pc == 0x1E6060u) {
        ctx->pc = 0x1E6064u;
        goto label_1e6064;
    }
    ctx->pc = 0x1E605Cu;
    {
        const bool branch_taken_0x1e605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e605c) {
            ctx->pc = 0x1E606Cu;
            goto label_1e606c;
        }
    }
    ctx->pc = 0x1E6064u;
label_1e6064:
    // 0x1e6064: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e6068:
    if (ctx->pc == 0x1E6068u) {
        ctx->pc = 0x1E6068u;
            // 0x1e6068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E606Cu;
        goto label_1e606c;
    }
    ctx->pc = 0x1E6064u;
    {
        const bool branch_taken_0x1e6064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6064u;
            // 0x1e6068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6064) {
            ctx->pc = 0x1E6094u;
            goto label_1e6094;
        }
    }
    ctx->pc = 0x1E606Cu;
label_1e606c:
    // 0x1e606c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e6070:
    // 0x1e6070: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6074:
    // 0x1e6074: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x1e6074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_1e6078:
    // 0x1e6078: 0x320f809  jalr        $t9
label_1e607c:
    if (ctx->pc == 0x1E607Cu) {
        ctx->pc = 0x1E607Cu;
            // 0x1e607c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6080u;
        goto label_1e6080;
    }
    ctx->pc = 0x1E6078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6080u);
        ctx->pc = 0x1E607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6078u;
            // 0x1e607c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6080u; }
            if (ctx->pc != 0x1E6080u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6080u;
label_1e6080:
    // 0x1e6080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6084:
    // 0x1e6084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6088:
    // 0x1e6088: 0xc0781bc  jal         func_1E06F0
label_1e608c:
    if (ctx->pc == 0x1E608Cu) {
        ctx->pc = 0x1E6090u;
        goto label_1e6090;
    }
    ctx->pc = 0x1E6088u;
    SET_GPR_U32(ctx, 31, 0x1E6090u);
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6090u; }
        if (ctx->pc != 0x1E6090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6090u; }
        if (ctx->pc != 0x1E6090u) { return; }
    }
    ctx->pc = 0x1E6090u;
label_1e6090:
    // 0x1e6090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6094:
    // 0x1e6094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6098:
    // 0x1e6098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e609c:
    // 0x1e609c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e609cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e60a0:
    // 0x1e60a0: 0x3e00008  jr          $ra
label_1e60a4:
    if (ctx->pc == 0x1E60A4u) {
        ctx->pc = 0x1E60A4u;
            // 0x1e60a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E60A8u;
        goto label_fallthrough_0x1e60a0;
    }
    ctx->pc = 0x1E60A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E60A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60A0u;
            // 0x1e60a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e60a0:
    ctx->pc = 0x1E60A8u;
}
