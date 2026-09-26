#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TARGET_DIST__FP12RS_STACKDATAi
// Address: 0x1e43c0 - 0x1e4454
void ps2__GET_TARGET_DIST__FP12RS_STACKDATAi_0x1e43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TARGET_DIST__FP12RS_STACKDATAi_0x1e43c0");
#endif

    switch (ctx->pc) {
        case 0x1e43c0u: goto label_1e43c0;
        case 0x1e43c4u: goto label_1e43c4;
        case 0x1e43c8u: goto label_1e43c8;
        case 0x1e43ccu: goto label_1e43cc;
        case 0x1e43d0u: goto label_1e43d0;
        case 0x1e43d4u: goto label_1e43d4;
        case 0x1e43d8u: goto label_1e43d8;
        case 0x1e43dcu: goto label_1e43dc;
        case 0x1e43e0u: goto label_1e43e0;
        case 0x1e43e4u: goto label_1e43e4;
        case 0x1e43e8u: goto label_1e43e8;
        case 0x1e43ecu: goto label_1e43ec;
        case 0x1e43f0u: goto label_1e43f0;
        case 0x1e43f4u: goto label_1e43f4;
        case 0x1e43f8u: goto label_1e43f8;
        case 0x1e43fcu: goto label_1e43fc;
        case 0x1e4400u: goto label_1e4400;
        case 0x1e4404u: goto label_1e4404;
        case 0x1e4408u: goto label_1e4408;
        case 0x1e440cu: goto label_1e440c;
        case 0x1e4410u: goto label_1e4410;
        case 0x1e4414u: goto label_1e4414;
        case 0x1e4418u: goto label_1e4418;
        case 0x1e441cu: goto label_1e441c;
        case 0x1e4420u: goto label_1e4420;
        case 0x1e4424u: goto label_1e4424;
        case 0x1e4428u: goto label_1e4428;
        case 0x1e442cu: goto label_1e442c;
        case 0x1e4430u: goto label_1e4430;
        case 0x1e4434u: goto label_1e4434;
        case 0x1e4438u: goto label_1e4438;
        case 0x1e443cu: goto label_1e443c;
        case 0x1e4440u: goto label_1e4440;
        case 0x1e4444u: goto label_1e4444;
        case 0x1e4448u: goto label_1e4448;
        case 0x1e444cu: goto label_1e444c;
        case 0x1e4450u: goto label_1e4450;
        default: break;
    }

    ctx->pc = 0x1e43c0u;

label_1e43c0:
    // 0x1e43c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e43c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e43c4:
    // 0x1e43c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e43c8:
    // 0x1e43c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e43cc:
    // 0x1e43cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e43ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e43d0:
    // 0x1e43d0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e43d4:
    if (ctx->pc == 0x1E43D4u) {
        ctx->pc = 0x1E43D4u;
            // 0x1e43d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E43D8u;
        goto label_1e43d8;
    }
    ctx->pc = 0x1E43D0u;
    {
        const bool branch_taken_0x1e43d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E43D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43D0u;
            // 0x1e43d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43d0) {
            ctx->pc = 0x1E43E0u;
            goto label_1e43e0;
        }
    }
    ctx->pc = 0x1E43D8u;
label_1e43d8:
    // 0x1e43d8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1e43dc:
    if (ctx->pc == 0x1E43DCu) {
        ctx->pc = 0x1E43DCu;
            // 0x1e43dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E43E0u;
        goto label_1e43e0;
    }
    ctx->pc = 0x1E43D8u;
    {
        const bool branch_taken_0x1e43d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43D8u;
            // 0x1e43dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43d8) {
            ctx->pc = 0x1E4444u;
            goto label_1e4444;
        }
    }
    ctx->pc = 0x1E43E0u;
label_1e43e0:
    // 0x1e43e0: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e43e4:
    // 0x1e43e4: 0x844512e2  lh          $a1, 0x12E2($v0)
    ctx->pc = 0x1e43e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4834)));
label_1e43e8:
    // 0x1e43e8: 0xc0a0ed8  jal         func_283B60
label_1e43ec:
    if (ctx->pc == 0x1E43ECu) {
        ctx->pc = 0x1E43ECu;
            // 0x1e43ec: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->pc = 0x1E43F0u;
        goto label_1e43f0;
    }
    ctx->pc = 0x1E43E8u;
    SET_GPR_U32(ctx, 31, 0x1E43F0u);
    ctx->pc = 0x1E43ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43E8u;
            // 0x1e43ec: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E43F0u; }
        if (ctx->pc != 0x1E43F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E43F0u; }
        if (ctx->pc != 0x1E43F0u) { return; }
    }
    ctx->pc = 0x1E43F0u;
label_1e43f0:
    // 0x1e43f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e43f4:
    if (ctx->pc == 0x1E43F4u) {
        ctx->pc = 0x1E43F8u;
        goto label_1e43f8;
    }
    ctx->pc = 0x1E43F0u;
    {
        const bool branch_taken_0x1e43f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e43f0) {
            ctx->pc = 0x1E4400u;
            goto label_1e4400;
        }
    }
    ctx->pc = 0x1E43F8u;
label_1e43f8:
    // 0x1e43f8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e43fc:
    if (ctx->pc == 0x1E43FCu) {
        ctx->pc = 0x1E43FCu;
            // 0x1e43fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4400u;
        goto label_1e4400;
    }
    ctx->pc = 0x1E43F8u;
    {
        const bool branch_taken_0x1e43f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43F8u;
            // 0x1e43fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43f8) {
            ctx->pc = 0x1E4444u;
            goto label_1e4444;
        }
    }
    ctx->pc = 0x1E4400u;
label_1e4400:
    // 0x1e4400: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e4400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4404:
    // 0x1e4404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4408:
    // 0x1e4408: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e440c:
    // 0x1e440c: 0x320f809  jalr        $t9
label_1e4410:
    if (ctx->pc == 0x1E4410u) {
        ctx->pc = 0x1E4410u;
            // 0x1e4410: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E4414u;
        goto label_1e4414;
    }
    ctx->pc = 0x1E440Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4414u);
        ctx->pc = 0x1E4410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E440Cu;
            // 0x1e4410: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4414u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4414u; }
            if (ctx->pc != 0x1E4414u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4414u;
label_1e4414:
    // 0x1e4414: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4418:
    // 0x1e4418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e441c:
    // 0x1e441c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e441cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4420:
    // 0x1e4420: 0x320f809  jalr        $t9
label_1e4424:
    if (ctx->pc == 0x1E4424u) {
        ctx->pc = 0x1E4424u;
            // 0x1e4424: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4428u;
        goto label_1e4428;
    }
    ctx->pc = 0x1E4420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4428u);
        ctx->pc = 0x1E4424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4420u;
            // 0x1e4424: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4428u; }
            if (ctx->pc != 0x1E4428u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4428u;
label_1e4428:
    // 0x1e4428: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e4428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e442c:
    // 0x1e442c: 0xc04c018  jal         func_130060
label_1e4430:
    if (ctx->pc == 0x1E4430u) {
        ctx->pc = 0x1E4430u;
            // 0x1e4430: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4434u;
        goto label_1e4434;
    }
    ctx->pc = 0x1E442Cu;
    SET_GPR_U32(ctx, 31, 0x1E4434u);
    ctx->pc = 0x1E4430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E442Cu;
            // 0x1e4430: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4434u; }
        if (ctx->pc != 0x1E4434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4434u; }
        if (ctx->pc != 0x1E4434u) { return; }
    }
    ctx->pc = 0x1E4434u;
label_1e4434:
    // 0x1e4434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4438:
    // 0x1e4438: 0xc0781c4  jal         func_1E0710
label_1e443c:
    if (ctx->pc == 0x1E443Cu) {
        ctx->pc = 0x1E443Cu;
            // 0x1e443c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E4440u;
        goto label_1e4440;
    }
    ctx->pc = 0x1E4438u;
    SET_GPR_U32(ctx, 31, 0x1E4440u);
    ctx->pc = 0x1E443Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4438u;
            // 0x1e443c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4440u; }
        if (ctx->pc != 0x1E4440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4440u; }
        if (ctx->pc != 0x1E4440u) { return; }
    }
    ctx->pc = 0x1E4440u;
label_1e4440:
    // 0x1e4440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4444:
    // 0x1e4444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4448:
    // 0x1e4448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e444c:
    // 0x1e444c: 0x3e00008  jr          $ra
label_1e4450:
    if (ctx->pc == 0x1E4450u) {
        ctx->pc = 0x1E4450u;
            // 0x1e4450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E4454u;
        goto label_fallthrough_0x1e444c;
    }
    ctx->pc = 0x1E444Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E444Cu;
            // 0x1e4450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e444c:
    ctx->pc = 0x1E4454u;
}
