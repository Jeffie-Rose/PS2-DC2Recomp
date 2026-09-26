#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _NOW_MOS_WAIT__FP12RS_STACKDATAi
// Address: 0x1e60b0 - 0x1e6140
void ps2__NOW_MOS_WAIT__FP12RS_STACKDATAi_0x1e60b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__NOW_MOS_WAIT__FP12RS_STACKDATAi_0x1e60b0");
#endif

    switch (ctx->pc) {
        case 0x1e60b0u: goto label_1e60b0;
        case 0x1e60b4u: goto label_1e60b4;
        case 0x1e60b8u: goto label_1e60b8;
        case 0x1e60bcu: goto label_1e60bc;
        case 0x1e60c0u: goto label_1e60c0;
        case 0x1e60c4u: goto label_1e60c4;
        case 0x1e60c8u: goto label_1e60c8;
        case 0x1e60ccu: goto label_1e60cc;
        case 0x1e60d0u: goto label_1e60d0;
        case 0x1e60d4u: goto label_1e60d4;
        case 0x1e60d8u: goto label_1e60d8;
        case 0x1e60dcu: goto label_1e60dc;
        case 0x1e60e0u: goto label_1e60e0;
        case 0x1e60e4u: goto label_1e60e4;
        case 0x1e60e8u: goto label_1e60e8;
        case 0x1e60ecu: goto label_1e60ec;
        case 0x1e60f0u: goto label_1e60f0;
        case 0x1e60f4u: goto label_1e60f4;
        case 0x1e60f8u: goto label_1e60f8;
        case 0x1e60fcu: goto label_1e60fc;
        case 0x1e6100u: goto label_1e6100;
        case 0x1e6104u: goto label_1e6104;
        case 0x1e6108u: goto label_1e6108;
        case 0x1e610cu: goto label_1e610c;
        case 0x1e6110u: goto label_1e6110;
        case 0x1e6114u: goto label_1e6114;
        case 0x1e6118u: goto label_1e6118;
        case 0x1e611cu: goto label_1e611c;
        case 0x1e6120u: goto label_1e6120;
        case 0x1e6124u: goto label_1e6124;
        case 0x1e6128u: goto label_1e6128;
        case 0x1e612cu: goto label_1e612c;
        case 0x1e6130u: goto label_1e6130;
        case 0x1e6134u: goto label_1e6134;
        case 0x1e6138u: goto label_1e6138;
        case 0x1e613cu: goto label_1e613c;
        default: break;
    }

    ctx->pc = 0x1e60b0u;

label_1e60b0:
    // 0x1e60b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e60b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e60b4:
    // 0x1e60b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e60b8:
    // 0x1e60b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e60b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e60bc:
    // 0x1e60bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e60c0:
    // 0x1e60c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e60c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e60c4:
    // 0x1e60c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e60c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e60c8:
    // 0x1e60c8: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_1e60cc:
    if (ctx->pc == 0x1E60CCu) {
        ctx->pc = 0x1E60CCu;
            // 0x1e60cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E60D0u;
        goto label_1e60d0;
    }
    ctx->pc = 0x1E60C8u;
    {
        const bool branch_taken_0x1e60c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E60CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60C8u;
            // 0x1e60cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60c8) {
            ctx->pc = 0x1E60E4u;
            goto label_1e60e4;
        }
    }
    ctx->pc = 0x1E60D0u;
label_1e60d0:
    // 0x1e60d0: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e60d4:
    // 0x1e60d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e60d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e60d8:
    // 0x1e60d8: 0x8f390104  lw          $t9, 0x104($t9)
    ctx->pc = 0x1e60d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 260)));
label_1e60dc:
    // 0x1e60dc: 0x320f809  jalr        $t9
label_1e60e0:
    if (ctx->pc == 0x1E60E0u) {
        ctx->pc = 0x1E60E0u;
            // 0x1e60e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E60E4u;
        goto label_1e60e4;
    }
    ctx->pc = 0x1E60DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E60E4u);
        ctx->pc = 0x1E60E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60DCu;
            // 0x1e60e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E60E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E60E4u; }
            if (ctx->pc != 0x1E60E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E60E4u;
label_1e60e4:
    // 0x1e60e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e60e8:
    // 0x1e60e8: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1e60ec:
    if (ctx->pc == 0x1E60ECu) {
        ctx->pc = 0x1E60ECu;
            // 0x1e60ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E60F0u;
        goto label_1e60f0;
    }
    ctx->pc = 0x1E60E8u;
    {
        const bool branch_taken_0x1e60e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E60ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60E8u;
            // 0x1e60ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60e8) {
            ctx->pc = 0x1E6120u;
            goto label_1e6120;
        }
    }
    ctx->pc = 0x1E60F0u;
label_1e60f0:
    // 0x1e60f0: 0xc0781b8  jal         func_1E06E0
label_1e60f4:
    if (ctx->pc == 0x1E60F4u) {
        ctx->pc = 0x1E60F4u;
            // 0x1e60f4: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1E60F8u;
        goto label_1e60f8;
    }
    ctx->pc = 0x1E60F0u;
    SET_GPR_U32(ctx, 31, 0x1E60F8u);
    ctx->pc = 0x1E60F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60F0u;
            // 0x1e60f4: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60F8u; }
        if (ctx->pc != 0x1E60F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60F8u; }
        if (ctx->pc != 0x1E60F8u) { return; }
    }
    ctx->pc = 0x1E60F8u;
label_1e60f8:
    // 0x1e60f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e60fc:
    if (ctx->pc == 0x1E60FCu) {
        ctx->pc = 0x1E6100u;
        goto label_1e6100;
    }
    ctx->pc = 0x1E60F8u;
    {
        const bool branch_taken_0x1e60f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e60f8) {
            ctx->pc = 0x1E6108u;
            goto label_1e6108;
        }
    }
    ctx->pc = 0x1E6100u;
label_1e6100:
    // 0x1e6100: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e6104:
    if (ctx->pc == 0x1E6104u) {
        ctx->pc = 0x1E6104u;
            // 0x1e6104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6108u;
        goto label_1e6108;
    }
    ctx->pc = 0x1E6100u;
    {
        const bool branch_taken_0x1e6100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6100u;
            // 0x1e6104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6100) {
            ctx->pc = 0x1E612Cu;
            goto label_1e612c;
        }
    }
    ctx->pc = 0x1E6108u;
label_1e6108:
    // 0x1e6108: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e610c:
    // 0x1e610c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6110:
    // 0x1e6110: 0x8f390104  lw          $t9, 0x104($t9)
    ctx->pc = 0x1e6110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 260)));
label_1e6114:
    // 0x1e6114: 0x320f809  jalr        $t9
label_1e6118:
    if (ctx->pc == 0x1E6118u) {
        ctx->pc = 0x1E6118u;
            // 0x1e6118: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E611Cu;
        goto label_1e611c;
    }
    ctx->pc = 0x1E6114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E611Cu);
        ctx->pc = 0x1E6118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6114u;
            // 0x1e6118: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E611Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E611Cu; }
            if (ctx->pc != 0x1E611Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E611Cu;
label_1e611c:
    // 0x1e611c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e611cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6120:
    // 0x1e6120: 0xc0781c4  jal         func_1E0710
label_1e6124:
    if (ctx->pc == 0x1E6124u) {
        ctx->pc = 0x1E6124u;
            // 0x1e6124: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E6128u;
        goto label_1e6128;
    }
    ctx->pc = 0x1E6120u;
    SET_GPR_U32(ctx, 31, 0x1E6128u);
    ctx->pc = 0x1E6124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6120u;
            // 0x1e6124: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6128u; }
        if (ctx->pc != 0x1E6128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6128u; }
        if (ctx->pc != 0x1E6128u) { return; }
    }
    ctx->pc = 0x1E6128u;
label_1e6128:
    // 0x1e6128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e612c:
    // 0x1e612c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e612cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6130:
    // 0x1e6130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6134:
    // 0x1e6134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6138:
    // 0x1e6138: 0x3e00008  jr          $ra
label_1e613c:
    if (ctx->pc == 0x1E613Cu) {
        ctx->pc = 0x1E613Cu;
            // 0x1e613c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E6140u;
        goto label_fallthrough_0x1e6138;
    }
    ctx->pc = 0x1E6138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E613Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6138u;
            // 0x1e613c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e6138:
    ctx->pc = 0x1E6140u;
}
