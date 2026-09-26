#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_MOTION__FP12RS_STACKDATAi
// Address: 0x2e4600 - 0x2e46d0
void ps2__CHR_SET_MOTION__FP12RS_STACKDATAi_0x2e4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_MOTION__FP12RS_STACKDATAi_0x2e4600");
#endif

    switch (ctx->pc) {
        case 0x2e4600u: goto label_2e4600;
        case 0x2e4604u: goto label_2e4604;
        case 0x2e4608u: goto label_2e4608;
        case 0x2e460cu: goto label_2e460c;
        case 0x2e4610u: goto label_2e4610;
        case 0x2e4614u: goto label_2e4614;
        case 0x2e4618u: goto label_2e4618;
        case 0x2e461cu: goto label_2e461c;
        case 0x2e4620u: goto label_2e4620;
        case 0x2e4624u: goto label_2e4624;
        case 0x2e4628u: goto label_2e4628;
        case 0x2e462cu: goto label_2e462c;
        case 0x2e4630u: goto label_2e4630;
        case 0x2e4634u: goto label_2e4634;
        case 0x2e4638u: goto label_2e4638;
        case 0x2e463cu: goto label_2e463c;
        case 0x2e4640u: goto label_2e4640;
        case 0x2e4644u: goto label_2e4644;
        case 0x2e4648u: goto label_2e4648;
        case 0x2e464cu: goto label_2e464c;
        case 0x2e4650u: goto label_2e4650;
        case 0x2e4654u: goto label_2e4654;
        case 0x2e4658u: goto label_2e4658;
        case 0x2e465cu: goto label_2e465c;
        case 0x2e4660u: goto label_2e4660;
        case 0x2e4664u: goto label_2e4664;
        case 0x2e4668u: goto label_2e4668;
        case 0x2e466cu: goto label_2e466c;
        case 0x2e4670u: goto label_2e4670;
        case 0x2e4674u: goto label_2e4674;
        case 0x2e4678u: goto label_2e4678;
        case 0x2e467cu: goto label_2e467c;
        case 0x2e4680u: goto label_2e4680;
        case 0x2e4684u: goto label_2e4684;
        case 0x2e4688u: goto label_2e4688;
        case 0x2e468cu: goto label_2e468c;
        case 0x2e4690u: goto label_2e4690;
        case 0x2e4694u: goto label_2e4694;
        case 0x2e4698u: goto label_2e4698;
        case 0x2e469cu: goto label_2e469c;
        case 0x2e46a0u: goto label_2e46a0;
        case 0x2e46a4u: goto label_2e46a4;
        case 0x2e46a8u: goto label_2e46a8;
        case 0x2e46acu: goto label_2e46ac;
        case 0x2e46b0u: goto label_2e46b0;
        case 0x2e46b4u: goto label_2e46b4;
        case 0x2e46b8u: goto label_2e46b8;
        case 0x2e46bcu: goto label_2e46bc;
        case 0x2e46c0u: goto label_2e46c0;
        case 0x2e46c4u: goto label_2e46c4;
        case 0x2e46c8u: goto label_2e46c8;
        case 0x2e46ccu: goto label_2e46cc;
        default: break;
    }

    ctx->pc = 0x2e4600u;

label_2e4600:
    // 0x2e4600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4604:
    // 0x2e4604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e4608:
    // 0x2e4608: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e460c:
    // 0x2e460c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e460cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e4610:
    // 0x2e4610: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4614:
    // 0x2e4614: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e4614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4618:
    // 0x2e4618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e461c:
    if (ctx->pc == 0x2E461Cu) {
        ctx->pc = 0x2E461Cu;
            // 0x2e461c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x2E4620u;
        goto label_2e4620;
    }
    ctx->pc = 0x2E4618u;
    {
        const bool branch_taken_0x2e4618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4618u;
            // 0x2e461c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4618) {
            ctx->pc = 0x2E4628u;
            goto label_2e4628;
        }
    }
    ctx->pc = 0x2E4620u;
label_2e4620:
    // 0x2e4620: 0x10000026  b           . + 4 + (0x26 << 2)
label_2e4624:
    if (ctx->pc == 0x2E4624u) {
        ctx->pc = 0x2E4624u;
            // 0x2e4624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4628u;
        goto label_2e4628;
    }
    ctx->pc = 0x2E4620u;
    {
        const bool branch_taken_0x2e4620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4620u;
            // 0x2e4624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4620) {
            ctx->pc = 0x2E46BCu;
            goto label_2e46bc;
        }
    }
    ctx->pc = 0x2E4628u;
label_2e4628:
    // 0x2e4628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e462c:
    // 0x2e462c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2e462cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e4630:
    // 0x2e4630: 0xc0b8cd0  jal         func_2E3340
label_2e4634:
    if (ctx->pc == 0x2E4634u) {
        ctx->pc = 0x2E4634u;
            // 0x2e4634: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4638u;
        goto label_2e4638;
    }
    ctx->pc = 0x2E4630u;
    SET_GPR_U32(ctx, 31, 0x2E4638u);
    ctx->pc = 0x2E4634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4630u;
            // 0x2e4634: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4638u; }
        if (ctx->pc != 0x2E4638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4638u; }
        if (ctx->pc != 0x2E4638u) { return; }
    }
    ctx->pc = 0x2E4638u;
label_2e4638:
    // 0x2e4638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e463c:
    // 0x2e463c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2e463cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_2e4640:
    // 0x2e4640: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2e4644:
    if (ctx->pc == 0x2E4644u) {
        ctx->pc = 0x2E4644u;
            // 0x2e4644: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->pc = 0x2E4648u;
        goto label_2e4648;
    }
    ctx->pc = 0x2E4640u;
    {
        const bool branch_taken_0x2e4640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4640u;
            // 0x2e4644: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4640) {
            ctx->pc = 0x2E465Cu;
            goto label_2e465c;
        }
    }
    ctx->pc = 0x2E4648u;
label_2e4648:
    // 0x2e4648: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e4648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e464c:
    // 0x2e464c: 0xc0b8cb0  jal         func_2E32C0
label_2e4650:
    if (ctx->pc == 0x2E4650u) {
        ctx->pc = 0x2E4650u;
            // 0x2e4650: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4654u;
        goto label_2e4654;
    }
    ctx->pc = 0x2E464Cu;
    SET_GPR_U32(ctx, 31, 0x2E4654u);
    ctx->pc = 0x2E4650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E464Cu;
            // 0x2e4650: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4654u; }
        if (ctx->pc != 0x2E4654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4654u; }
        if (ctx->pc != 0x2E4654u) { return; }
    }
    ctx->pc = 0x2E4654u;
label_2e4654:
    // 0x2e4654: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e4654u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e4658:
    // 0x2e4658: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2e4658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e465c:
    // 0x2e465c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2e4660:
    if (ctx->pc == 0x2E4660u) {
        ctx->pc = 0x2E4660u;
            // 0x2e4660: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4664u;
        goto label_2e4664;
    }
    ctx->pc = 0x2E465Cu;
    {
        const bool branch_taken_0x2e465c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E465Cu;
            // 0x2e4660: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e465c) {
            ctx->pc = 0x2E4670u;
            goto label_2e4670;
        }
    }
    ctx->pc = 0x2E4664u;
label_2e4664:
    // 0x2e4664: 0xc0b8ca0  jal         func_2E3280
label_2e4668:
    if (ctx->pc == 0x2E4668u) {
        ctx->pc = 0x2E466Cu;
        goto label_2e466c;
    }
    ctx->pc = 0x2E4664u;
    SET_GPR_U32(ctx, 31, 0x2E466Cu);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E466Cu; }
        if (ctx->pc != 0x2E466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E466Cu; }
        if (ctx->pc != 0x2E466Cu) { return; }
    }
    ctx->pc = 0x2E466Cu;
label_2e466c:
    // 0x2e466c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e466cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4670:
    // 0x2e4670: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4674:
    // 0x2e4674: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4678:
    // 0x2e4678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e467c:
    // 0x2e467c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2e467cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2e4680:
    // 0x2e4680: 0x320f809  jalr        $t9
label_2e4684:
    if (ctx->pc == 0x2E4684u) {
        ctx->pc = 0x2E4684u;
            // 0x2e4684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4688u;
        goto label_2e4688;
    }
    ctx->pc = 0x2E4680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4688u);
        ctx->pc = 0x2E4684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4680u;
            // 0x2e4684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4688u; }
            if (ctx->pc != 0x2E4688u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4688u;
label_2e4688:
    // 0x2e4688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e468c:
    // 0x2e468c: 0x0  nop
    ctx->pc = 0x2e468cu;
    // NOP
label_2e4690:
    // 0x2e4690: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e4690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e4694:
    // 0x2e4694: 0x0  nop
    ctx->pc = 0x2e4694u;
    // NOP
label_2e4698:
    // 0x2e4698: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2e469c:
    if (ctx->pc == 0x2E469Cu) {
        ctx->pc = 0x2E469Cu;
            // 0x2e469c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E46A0u;
        goto label_2e46a0;
    }
    ctx->pc = 0x2E4698u;
    {
        const bool branch_taken_0x2e4698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4698u;
            // 0x2e469c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4698) {
            ctx->pc = 0x2E46BCu;
            goto label_2e46bc;
        }
    }
    ctx->pc = 0x2E46A0u;
label_2e46a0:
    // 0x2e46a0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e46a4:
    // 0x2e46a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e46a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e46a8:
    // 0x2e46a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e46a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e46ac:
    // 0x2e46ac: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x2e46acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_2e46b0:
    // 0x2e46b0: 0x320f809  jalr        $t9
label_2e46b4:
    if (ctx->pc == 0x2E46B4u) {
        ctx->pc = 0x2E46B4u;
            // 0x2e46b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2E46B8u;
        goto label_2e46b8;
    }
    ctx->pc = 0x2E46B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E46B8u);
        ctx->pc = 0x2E46B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E46B0u;
            // 0x2e46b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E46B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E46B8u; }
            if (ctx->pc != 0x2E46B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E46B8u;
label_2e46b8:
    // 0x2e46b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e46bc:
    // 0x2e46bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e46bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e46c0:
    // 0x2e46c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e46c4:
    // 0x2e46c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e46c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e46c8:
    // 0x2e46c8: 0x3e00008  jr          $ra
label_2e46cc:
    if (ctx->pc == 0x2E46CCu) {
        ctx->pc = 0x2E46CCu;
            // 0x2e46cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E46D0u;
        goto label_fallthrough_0x2e46c8;
    }
    ctx->pc = 0x2E46C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E46CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E46C8u;
            // 0x2e46cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e46c8:
    ctx->pc = 0x2E46D0u;
}
