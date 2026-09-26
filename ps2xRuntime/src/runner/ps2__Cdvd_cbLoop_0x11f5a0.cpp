#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _Cdvd_cbLoop
// Address: 0x11f5a0 - 0x11f65c
void ps2__Cdvd_cbLoop_0x11f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Cdvd_cbLoop_0x11f5a0");
#endif

    switch (ctx->pc) {
        case 0x11f5a0u: goto label_11f5a0;
        case 0x11f5a4u: goto label_11f5a4;
        case 0x11f5a8u: goto label_11f5a8;
        case 0x11f5acu: goto label_11f5ac;
        case 0x11f5b0u: goto label_11f5b0;
        case 0x11f5b4u: goto label_11f5b4;
        case 0x11f5b8u: goto label_11f5b8;
        case 0x11f5bcu: goto label_11f5bc;
        case 0x11f5c0u: goto label_11f5c0;
        case 0x11f5c4u: goto label_11f5c4;
        case 0x11f5c8u: goto label_11f5c8;
        case 0x11f5ccu: goto label_11f5cc;
        case 0x11f5d0u: goto label_11f5d0;
        case 0x11f5d4u: goto label_11f5d4;
        case 0x11f5d8u: goto label_11f5d8;
        case 0x11f5dcu: goto label_11f5dc;
        case 0x11f5e0u: goto label_11f5e0;
        case 0x11f5e4u: goto label_11f5e4;
        case 0x11f5e8u: goto label_11f5e8;
        case 0x11f5ecu: goto label_11f5ec;
        case 0x11f5f0u: goto label_11f5f0;
        case 0x11f5f4u: goto label_11f5f4;
        case 0x11f5f8u: goto label_11f5f8;
        case 0x11f5fcu: goto label_11f5fc;
        case 0x11f600u: goto label_11f600;
        case 0x11f604u: goto label_11f604;
        case 0x11f608u: goto label_11f608;
        case 0x11f60cu: goto label_11f60c;
        case 0x11f610u: goto label_11f610;
        case 0x11f614u: goto label_11f614;
        case 0x11f618u: goto label_11f618;
        case 0x11f61cu: goto label_11f61c;
        case 0x11f620u: goto label_11f620;
        case 0x11f624u: goto label_11f624;
        case 0x11f628u: goto label_11f628;
        case 0x11f62cu: goto label_11f62c;
        case 0x11f630u: goto label_11f630;
        case 0x11f634u: goto label_11f634;
        case 0x11f638u: goto label_11f638;
        case 0x11f63cu: goto label_11f63c;
        case 0x11f640u: goto label_11f640;
        case 0x11f644u: goto label_11f644;
        case 0x11f648u: goto label_11f648;
        case 0x11f64cu: goto label_11f64c;
        case 0x11f650u: goto label_11f650;
        case 0x11f654u: goto label_11f654;
        case 0x11f658u: goto label_11f658;
        default: break;
    }

    ctx->pc = 0x11f5a0u;

label_11f5a0:
    // 0x11f5a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_11f5a4:
    // 0x11f5a4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x11f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_11f5a8:
    // 0x11f5a8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_11f5ac:
    // 0x11f5ac: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x11f5acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
label_11f5b0:
    // 0x11f5b0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11f5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_11f5b4:
    // 0x11f5b4: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x11f5b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
label_11f5b8:
    // 0x11f5b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_11f5bc:
    // 0x11f5bc: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x11f5bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_11f5c0:
    // 0x11f5c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_11f5c4:
    // 0x11f5c4: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x11f5c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
label_11f5c8:
    // 0x11f5c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11f5cc:
    // 0x11f5cc: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x11f5ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
label_11f5d0:
    // 0x11f5d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11f5d4:
    // 0x11f5d4: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x11f5d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
label_11f5d8:
    // 0x11f5d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11f5dc:
    // 0x11f5dc: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x11f5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
label_11f5e0:
    // 0x11f5e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11f5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11f5e4:
    // 0x11f5e4: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x11f5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_11f5e8:
    // 0x11f5e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11f5ec:
    // 0x11f5ec: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11f5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_11f5f0:
    // 0x11f5f0: 0xc044048  jal         func_110120
label_11f5f4:
    if (ctx->pc == 0x11F5F4u) {
        ctx->pc = 0x11F5F4u;
            // 0x11f5f4: 0x8fc41de0  lw          $a0, 0x1DE0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7648)));
        ctx->pc = 0x11F5F8u;
        goto label_11f5f8;
    }
    ctx->pc = 0x11F5F0u;
    SET_GPR_U32(ctx, 31, 0x11F5F8u);
    ctx->pc = 0x11F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F5F0u;
            // 0x11f5f4: 0x8fc41de0  lw          $a0, 0x1DE0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 7648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F5F8u; }
        if (ctx->pc != 0x11F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F5F8u; }
        if (ctx->pc != 0x11F5F8u) { return; }
    }
    ctx->pc = 0x11F5F8u;
label_11f5f8:
    // 0x11f5f8: 0x8e631e14  lw          $v1, 0x1E14($s3)
    ctx->pc = 0x11f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7700)));
label_11f5fc:
    // 0x11f5fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f600:
    // 0x11f600: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_11f604:
    if (ctx->pc == 0x11F604u) {
        ctx->pc = 0x11F604u;
            // 0x11f604: 0x8ea21dd0  lw          $v0, 0x1DD0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7632)));
        ctx->pc = 0x11F608u;
        goto label_11f608;
    }
    ctx->pc = 0x11F600u;
    {
        const bool branch_taken_0x11f600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F600u;
            // 0x11f604: 0x8ea21dd0  lw          $v0, 0x1DD0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f600) {
            ctx->pc = 0x11F620u;
            goto label_11f620;
        }
    }
    ctx->pc = 0x11F608u;
label_11f608:
    // 0x11f608: 0xae401df0  sw          $zero, 0x1DF0($s2)
    ctx->pc = 0x11f608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7664), GPR_U32(ctx, 0));
label_11f60c:
    // 0x11f60c: 0xae601e14  sw          $zero, 0x1E14($s3)
    ctx->pc = 0x11f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7700), GPR_U32(ctx, 0));
label_11f610:
    // 0x11f610: 0xaee01dd4  sw          $zero, 0x1DD4($s7)
    ctx->pc = 0x11f610u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 7636), GPR_U32(ctx, 0));
label_11f614:
    // 0x11f614: 0xc043fc8  jal         func_10FF20
label_11f618:
    if (ctx->pc == 0x11F618u) {
        ctx->pc = 0x11F618u;
            // 0x11f618: 0xaec0e1cc  sw          $zero, -0x1E34($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294959564), GPR_U32(ctx, 0));
        ctx->pc = 0x11F61Cu;
        goto label_11f61c;
    }
    ctx->pc = 0x11F614u;
    SET_GPR_U32(ctx, 31, 0x11F61Cu);
    ctx->pc = 0x11F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F614u;
            // 0x11f618: 0xaec0e1cc  sw          $zero, -0x1E34($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294959564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F61Cu; }
        if (ctx->pc != 0x11F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExitDeleteThread_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F61Cu; }
        if (ctx->pc != 0x11F61Cu) { return; }
    }
    ctx->pc = 0x11F61Cu;
label_11f61c:
    // 0x11f61c: 0x8ea21dd0  lw          $v0, 0x1DD0($s5)
    ctx->pc = 0x11f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7632)));
label_11f620:
    // 0x11f620: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11f624:
    if (ctx->pc == 0x11F624u) {
        ctx->pc = 0x11F624u;
            // 0x11f624: 0x26841a28  addiu       $a0, $s4, 0x1A28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6696));
        ctx->pc = 0x11F628u;
        goto label_11f628;
    }
    ctx->pc = 0x11F620u;
    {
        const bool branch_taken_0x11f620 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F620u;
            // 0x11f624: 0x26841a28  addiu       $a0, $s4, 0x1A28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f620) {
            ctx->pc = 0x11F634u;
            goto label_11f634;
        }
    }
    ctx->pc = 0x11F628u;
label_11f628:
    // 0x11f628: 0x8e25e1c0  lw          $a1, -0x1E40($s1)
    ctx->pc = 0x11f628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959552)));
label_11f62c:
    // 0x11f62c: 0xc0448a6  jal         func_112298
label_11f630:
    if (ctx->pc == 0x11F630u) {
        ctx->pc = 0x11F630u;
            // 0x11f630: 0x8e061e18  lw          $a2, 0x1E18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7704)));
        ctx->pc = 0x11F634u;
        goto label_11f634;
    }
    ctx->pc = 0x11F62Cu;
    SET_GPR_U32(ctx, 31, 0x11F634u);
    ctx->pc = 0x11F630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F62Cu;
            // 0x11f630: 0x8e061e18  lw          $a2, 0x1E18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112298u;
    if (runtime->hasFunction(0x112298u)) {
        auto targetFn = runtime->lookupFunction(0x112298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F634u; }
        if (ctx->pc != 0x11F634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F634u; }
        if (ctx->pc != 0x11F634u) { return; }
    }
    ctx->pc = 0x11F634u;
label_11f634:
    // 0x11f634: 0x8e23e1c0  lw          $v1, -0x1E40($s1)
    ctx->pc = 0x11f634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959552)));
label_11f638:
    // 0x11f638: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_11f63c:
    if (ctx->pc == 0x11F63Cu) {
        ctx->pc = 0x11F640u;
        goto label_11f640;
    }
    ctx->pc = 0x11F638u;
    {
        const bool branch_taken_0x11f638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f638) {
            ctx->pc = 0x11F654u;
            goto label_11f654;
        }
    }
    ctx->pc = 0x11F640u;
label_11f640:
    // 0x11f640: 0x8e021e18  lw          $v0, 0x1E18($s0)
    ctx->pc = 0x11f640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7704)));
label_11f644:
    // 0x11f644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_11f648:
    if (ctx->pc == 0x11F648u) {
        ctx->pc = 0x11F64Cu;
        goto label_11f64c;
    }
    ctx->pc = 0x11F644u;
    {
        const bool branch_taken_0x11f644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f644) {
            ctx->pc = 0x11F654u;
            goto label_11f654;
        }
    }
    ctx->pc = 0x11F64Cu;
label_11f64c:
    // 0x11f64c: 0x60f809  jalr        $v1
label_11f650:
    if (ctx->pc == 0x11F650u) {
        ctx->pc = 0x11F650u;
            // 0x11f650: 0x8e041e18  lw          $a0, 0x1E18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7704)));
        ctx->pc = 0x11F654u;
        goto label_11f654;
    }
    ctx->pc = 0x11F64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F654u);
        ctx->pc = 0x11F650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F64Cu;
            // 0x11f650: 0x8e041e18  lw          $a0, 0x1E18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7704)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F654u; }
            if (ctx->pc != 0x11F654u) { return; }
        }
        }
    }
    ctx->pc = 0x11F654u;
label_11f654:
    // 0x11f654: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_11f658:
    if (ctx->pc == 0x11F658u) {
        ctx->pc = 0x11F658u;
            // 0x11f658: 0xae401df0  sw          $zero, 0x1DF0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7664), GPR_U32(ctx, 0));
        ctx->pc = 0x11F65Cu;
        goto label_fallthrough_0x11f654;
    }
    ctx->pc = 0x11F654u;
    {
        const bool branch_taken_0x11f654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F654u;
            // 0x11f658: 0xae401df0  sw          $zero, 0x1DF0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 7664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f654) {
            ctx->pc = 0x11F5F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11f5f0;
        }
    }
label_fallthrough_0x11f654:
    ctx->pc = 0x11F65Cu;
}
