#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MOS_STATUS__FP12RS_STACKDATAi
// Address: 0x1e6140 - 0x1e61d8
void ps2__GET_MOS_STATUS__FP12RS_STACKDATAi_0x1e6140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MOS_STATUS__FP12RS_STACKDATAi_0x1e6140");
#endif

    switch (ctx->pc) {
        case 0x1e6140u: goto label_1e6140;
        case 0x1e6144u: goto label_1e6144;
        case 0x1e6148u: goto label_1e6148;
        case 0x1e614cu: goto label_1e614c;
        case 0x1e6150u: goto label_1e6150;
        case 0x1e6154u: goto label_1e6154;
        case 0x1e6158u: goto label_1e6158;
        case 0x1e615cu: goto label_1e615c;
        case 0x1e6160u: goto label_1e6160;
        case 0x1e6164u: goto label_1e6164;
        case 0x1e6168u: goto label_1e6168;
        case 0x1e616cu: goto label_1e616c;
        case 0x1e6170u: goto label_1e6170;
        case 0x1e6174u: goto label_1e6174;
        case 0x1e6178u: goto label_1e6178;
        case 0x1e617cu: goto label_1e617c;
        case 0x1e6180u: goto label_1e6180;
        case 0x1e6184u: goto label_1e6184;
        case 0x1e6188u: goto label_1e6188;
        case 0x1e618cu: goto label_1e618c;
        case 0x1e6190u: goto label_1e6190;
        case 0x1e6194u: goto label_1e6194;
        case 0x1e6198u: goto label_1e6198;
        case 0x1e619cu: goto label_1e619c;
        case 0x1e61a0u: goto label_1e61a0;
        case 0x1e61a4u: goto label_1e61a4;
        case 0x1e61a8u: goto label_1e61a8;
        case 0x1e61acu: goto label_1e61ac;
        case 0x1e61b0u: goto label_1e61b0;
        case 0x1e61b4u: goto label_1e61b4;
        case 0x1e61b8u: goto label_1e61b8;
        case 0x1e61bcu: goto label_1e61bc;
        case 0x1e61c0u: goto label_1e61c0;
        case 0x1e61c4u: goto label_1e61c4;
        case 0x1e61c8u: goto label_1e61c8;
        case 0x1e61ccu: goto label_1e61cc;
        case 0x1e61d0u: goto label_1e61d0;
        case 0x1e61d4u: goto label_1e61d4;
        default: break;
    }

    ctx->pc = 0x1e6140u;

label_1e6140:
    // 0x1e6140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e6144:
    // 0x1e6144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6148:
    // 0x1e6148: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e614c:
    // 0x1e614c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6150:
    // 0x1e6150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6154:
    // 0x1e6154: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e6154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6158:
    // 0x1e6158: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1e615c:
    if (ctx->pc == 0x1E615Cu) {
        ctx->pc = 0x1E615Cu;
            // 0x1e615c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6160u;
        goto label_1e6160;
    }
    ctx->pc = 0x1E6158u;
    {
        const bool branch_taken_0x1e6158 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6158u;
            // 0x1e615c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6158) {
            ctx->pc = 0x1E6178u;
            goto label_1e6178;
        }
    }
    ctx->pc = 0x1E6160u;
label_1e6160:
    // 0x1e6160: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e6164:
    // 0x1e6164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6168:
    // 0x1e6168: 0x8f390110  lw          $t9, 0x110($t9)
    ctx->pc = 0x1e6168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 272)));
label_1e616c:
    // 0x1e616c: 0x320f809  jalr        $t9
label_1e6170:
    if (ctx->pc == 0x1E6170u) {
        ctx->pc = 0x1E6170u;
            // 0x1e6170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6174u;
        goto label_1e6174;
    }
    ctx->pc = 0x1E616Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6174u);
        ctx->pc = 0x1E6170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E616Cu;
            // 0x1e6170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6174u; }
            if (ctx->pc != 0x1E6174u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6174u;
label_1e6174:
    // 0x1e6174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6178:
    // 0x1e6178: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e617c:
    // 0x1e617c: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_1e6180:
    if (ctx->pc == 0x1E6180u) {
        ctx->pc = 0x1E6180u;
            // 0x1e6180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6184u;
        goto label_1e6184;
    }
    ctx->pc = 0x1E617Cu;
    {
        const bool branch_taken_0x1e617c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E617Cu;
            // 0x1e6180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e617c) {
            ctx->pc = 0x1E61B8u;
            goto label_1e61b8;
        }
    }
    ctx->pc = 0x1E6184u;
label_1e6184:
    // 0x1e6184: 0xc0781b8  jal         func_1E06E0
label_1e6188:
    if (ctx->pc == 0x1E6188u) {
        ctx->pc = 0x1E6188u;
            // 0x1e6188: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1E618Cu;
        goto label_1e618c;
    }
    ctx->pc = 0x1E6184u;
    SET_GPR_U32(ctx, 31, 0x1E618Cu);
    ctx->pc = 0x1E6188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6184u;
            // 0x1e6188: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E618Cu; }
        if (ctx->pc != 0x1E618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E618Cu; }
        if (ctx->pc != 0x1E618Cu) { return; }
    }
    ctx->pc = 0x1E618Cu;
label_1e618c:
    // 0x1e618c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e6190:
    if (ctx->pc == 0x1E6190u) {
        ctx->pc = 0x1E6194u;
        goto label_1e6194;
    }
    ctx->pc = 0x1E618Cu;
    {
        const bool branch_taken_0x1e618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e618c) {
            ctx->pc = 0x1E619Cu;
            goto label_1e619c;
        }
    }
    ctx->pc = 0x1E6194u;
label_1e6194:
    // 0x1e6194: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e6198:
    if (ctx->pc == 0x1E6198u) {
        ctx->pc = 0x1E6198u;
            // 0x1e6198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E619Cu;
        goto label_1e619c;
    }
    ctx->pc = 0x1E6194u;
    {
        const bool branch_taken_0x1e6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6194u;
            // 0x1e6198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6194) {
            ctx->pc = 0x1E61C4u;
            goto label_1e61c4;
        }
    }
    ctx->pc = 0x1E619Cu;
label_1e619c:
    // 0x1e619c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e61a0:
    // 0x1e61a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e61a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e61a4:
    // 0x1e61a4: 0x8f390110  lw          $t9, 0x110($t9)
    ctx->pc = 0x1e61a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 272)));
label_1e61a8:
    // 0x1e61a8: 0x320f809  jalr        $t9
label_1e61ac:
    if (ctx->pc == 0x1E61ACu) {
        ctx->pc = 0x1E61ACu;
            // 0x1e61ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E61B0u;
        goto label_1e61b0;
    }
    ctx->pc = 0x1E61A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E61B0u);
        ctx->pc = 0x1E61ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61A8u;
            // 0x1e61ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E61B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E61B0u; }
            if (ctx->pc != 0x1E61B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E61B0u;
label_1e61b0:
    // 0x1e61b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e61b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e61b4:
    // 0x1e61b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e61b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e61b8:
    // 0x1e61b8: 0xc0781bc  jal         func_1E06F0
label_1e61bc:
    if (ctx->pc == 0x1E61BCu) {
        ctx->pc = 0x1E61C0u;
        goto label_1e61c0;
    }
    ctx->pc = 0x1E61B8u;
    SET_GPR_U32(ctx, 31, 0x1E61C0u);
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E61C0u; }
        if (ctx->pc != 0x1E61C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E61C0u; }
        if (ctx->pc != 0x1E61C0u) { return; }
    }
    ctx->pc = 0x1E61C0u;
label_1e61c0:
    // 0x1e61c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e61c4:
    // 0x1e61c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e61c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e61c8:
    // 0x1e61c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e61c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e61cc:
    // 0x1e61cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e61ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e61d0:
    // 0x1e61d0: 0x3e00008  jr          $ra
label_1e61d4:
    if (ctx->pc == 0x1E61D4u) {
        ctx->pc = 0x1E61D4u;
            // 0x1e61d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E61D8u;
        goto label_fallthrough_0x1e61d0;
    }
    ctx->pc = 0x1E61D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E61D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61D0u;
            // 0x1e61d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e61d0:
    ctx->pc = 0x1E61D8u;
}
