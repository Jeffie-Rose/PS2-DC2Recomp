#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TARGET_ANGLE__FP12RS_STACKDATAi
// Address: 0x1e4460 - 0x1e4504
void ps2__GET_TARGET_ANGLE__FP12RS_STACKDATAi_0x1e4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TARGET_ANGLE__FP12RS_STACKDATAi_0x1e4460");
#endif

    switch (ctx->pc) {
        case 0x1e4460u: goto label_1e4460;
        case 0x1e4464u: goto label_1e4464;
        case 0x1e4468u: goto label_1e4468;
        case 0x1e446cu: goto label_1e446c;
        case 0x1e4470u: goto label_1e4470;
        case 0x1e4474u: goto label_1e4474;
        case 0x1e4478u: goto label_1e4478;
        case 0x1e447cu: goto label_1e447c;
        case 0x1e4480u: goto label_1e4480;
        case 0x1e4484u: goto label_1e4484;
        case 0x1e4488u: goto label_1e4488;
        case 0x1e448cu: goto label_1e448c;
        case 0x1e4490u: goto label_1e4490;
        case 0x1e4494u: goto label_1e4494;
        case 0x1e4498u: goto label_1e4498;
        case 0x1e449cu: goto label_1e449c;
        case 0x1e44a0u: goto label_1e44a0;
        case 0x1e44a4u: goto label_1e44a4;
        case 0x1e44a8u: goto label_1e44a8;
        case 0x1e44acu: goto label_1e44ac;
        case 0x1e44b0u: goto label_1e44b0;
        case 0x1e44b4u: goto label_1e44b4;
        case 0x1e44b8u: goto label_1e44b8;
        case 0x1e44bcu: goto label_1e44bc;
        case 0x1e44c0u: goto label_1e44c0;
        case 0x1e44c4u: goto label_1e44c4;
        case 0x1e44c8u: goto label_1e44c8;
        case 0x1e44ccu: goto label_1e44cc;
        case 0x1e44d0u: goto label_1e44d0;
        case 0x1e44d4u: goto label_1e44d4;
        case 0x1e44d8u: goto label_1e44d8;
        case 0x1e44dcu: goto label_1e44dc;
        case 0x1e44e0u: goto label_1e44e0;
        case 0x1e44e4u: goto label_1e44e4;
        case 0x1e44e8u: goto label_1e44e8;
        case 0x1e44ecu: goto label_1e44ec;
        case 0x1e44f0u: goto label_1e44f0;
        case 0x1e44f4u: goto label_1e44f4;
        case 0x1e44f8u: goto label_1e44f8;
        case 0x1e44fcu: goto label_1e44fc;
        case 0x1e4500u: goto label_1e4500;
        default: break;
    }

    ctx->pc = 0x1e4460u;

label_1e4460:
    // 0x1e4460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e4460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e4464:
    // 0x1e4464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4468:
    // 0x1e4468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e446c:
    // 0x1e446c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e446cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4470:
    // 0x1e4470: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e4474:
    if (ctx->pc == 0x1E4474u) {
        ctx->pc = 0x1E4474u;
            // 0x1e4474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4478u;
        goto label_1e4478;
    }
    ctx->pc = 0x1E4470u;
    {
        const bool branch_taken_0x1e4470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4470u;
            // 0x1e4474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4470) {
            ctx->pc = 0x1E4480u;
            goto label_1e4480;
        }
    }
    ctx->pc = 0x1E4478u;
label_1e4478:
    // 0x1e4478: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1e447c:
    if (ctx->pc == 0x1E447Cu) {
        ctx->pc = 0x1E447Cu;
            // 0x1e447c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4480u;
        goto label_1e4480;
    }
    ctx->pc = 0x1E4478u;
    {
        const bool branch_taken_0x1e4478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4478u;
            // 0x1e447c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4478) {
            ctx->pc = 0x1E44F4u;
            goto label_1e44f4;
        }
    }
    ctx->pc = 0x1E4480u;
label_1e4480:
    // 0x1e4480: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e4480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4484:
    // 0x1e4484: 0x844512e2  lh          $a1, 0x12E2($v0)
    ctx->pc = 0x1e4484u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4834)));
label_1e4488:
    // 0x1e4488: 0xc0a0ed8  jal         func_283B60
label_1e448c:
    if (ctx->pc == 0x1E448Cu) {
        ctx->pc = 0x1E448Cu;
            // 0x1e448c: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->pc = 0x1E4490u;
        goto label_1e4490;
    }
    ctx->pc = 0x1E4488u;
    SET_GPR_U32(ctx, 31, 0x1E4490u);
    ctx->pc = 0x1E448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4488u;
            // 0x1e448c: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4490u; }
        if (ctx->pc != 0x1E4490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4490u; }
        if (ctx->pc != 0x1E4490u) { return; }
    }
    ctx->pc = 0x1E4490u;
label_1e4490:
    // 0x1e4490: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e4494:
    if (ctx->pc == 0x1E4494u) {
        ctx->pc = 0x1E4498u;
        goto label_1e4498;
    }
    ctx->pc = 0x1E4490u;
    {
        const bool branch_taken_0x1e4490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4490) {
            ctx->pc = 0x1E44A0u;
            goto label_1e44a0;
        }
    }
    ctx->pc = 0x1E4498u;
label_1e4498:
    // 0x1e4498: 0x10000016  b           . + 4 + (0x16 << 2)
label_1e449c:
    if (ctx->pc == 0x1E449Cu) {
        ctx->pc = 0x1E449Cu;
            // 0x1e449c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E44A0u;
        goto label_1e44a0;
    }
    ctx->pc = 0x1E4498u;
    {
        const bool branch_taken_0x1e4498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4498u;
            // 0x1e449c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4498) {
            ctx->pc = 0x1E44F4u;
            goto label_1e44f4;
        }
    }
    ctx->pc = 0x1E44A0u;
label_1e44a0:
    // 0x1e44a0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e44a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e44a4:
    // 0x1e44a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e44a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e44a8:
    // 0x1e44a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e44a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e44ac:
    // 0x1e44ac: 0x320f809  jalr        $t9
label_1e44b0:
    if (ctx->pc == 0x1E44B0u) {
        ctx->pc = 0x1E44B0u;
            // 0x1e44b0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E44B4u;
        goto label_1e44b4;
    }
    ctx->pc = 0x1E44ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E44B4u);
        ctx->pc = 0x1E44B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E44ACu;
            // 0x1e44b0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E44B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E44B4u; }
            if (ctx->pc != 0x1E44B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E44B4u;
label_1e44b4:
    // 0x1e44b4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e44b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e44b8:
    // 0x1e44b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e44b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e44bc:
    // 0x1e44bc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e44bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e44c0:
    // 0x1e44c0: 0x320f809  jalr        $t9
label_1e44c4:
    if (ctx->pc == 0x1E44C4u) {
        ctx->pc = 0x1E44C4u;
            // 0x1e44c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E44C8u;
        goto label_1e44c8;
    }
    ctx->pc = 0x1E44C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E44C8u);
        ctx->pc = 0x1E44C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E44C0u;
            // 0x1e44c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E44C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E44C8u; }
            if (ctx->pc != 0x1E44C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E44C8u;
label_1e44c8:
    // 0x1e44c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e44c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e44cc:
    // 0x1e44cc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e44ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e44d0:
    // 0x1e44d0: 0xc041c3e  jal         func_1070F8
label_1e44d4:
    if (ctx->pc == 0x1E44D4u) {
        ctx->pc = 0x1E44D4u;
            // 0x1e44d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E44D8u;
        goto label_1e44d8;
    }
    ctx->pc = 0x1E44D0u;
    SET_GPR_U32(ctx, 31, 0x1E44D8u);
    ctx->pc = 0x1E44D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E44D0u;
            // 0x1e44d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E44D8u; }
        if (ctx->pc != 0x1E44D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E44D8u; }
        if (ctx->pc != 0x1E44D8u) { return; }
    }
    ctx->pc = 0x1E44D8u;
label_1e44d8:
    // 0x1e44d8: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x1e44d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e44dc:
    // 0x1e44dc: 0xc047c76  jal         func_11F1D8
label_1e44e0:
    if (ctx->pc == 0x1E44E0u) {
        ctx->pc = 0x1E44E0u;
            // 0x1e44e0: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E44E4u;
        goto label_1e44e4;
    }
    ctx->pc = 0x1E44DCu;
    SET_GPR_U32(ctx, 31, 0x1E44E4u);
    ctx->pc = 0x1E44E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E44DCu;
            // 0x1e44e0: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E44E4u; }
        if (ctx->pc != 0x1E44E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E44E4u; }
        if (ctx->pc != 0x1E44E4u) { return; }
    }
    ctx->pc = 0x1E44E4u;
label_1e44e4:
    // 0x1e44e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e44e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e44e8:
    // 0x1e44e8: 0xc0781c4  jal         func_1E0710
label_1e44ec:
    if (ctx->pc == 0x1E44ECu) {
        ctx->pc = 0x1E44ECu;
            // 0x1e44ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E44F0u;
        goto label_1e44f0;
    }
    ctx->pc = 0x1E44E8u;
    SET_GPR_U32(ctx, 31, 0x1E44F0u);
    ctx->pc = 0x1E44ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E44E8u;
            // 0x1e44ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E44F0u; }
        if (ctx->pc != 0x1E44F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E44F0u; }
        if (ctx->pc != 0x1E44F0u) { return; }
    }
    ctx->pc = 0x1E44F0u;
label_1e44f0:
    // 0x1e44f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e44f4:
    // 0x1e44f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e44f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e44f8:
    // 0x1e44f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e44f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e44fc:
    // 0x1e44fc: 0x3e00008  jr          $ra
label_1e4500:
    if (ctx->pc == 0x1E4500u) {
        ctx->pc = 0x1E4500u;
            // 0x1e4500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E4504u;
        goto label_fallthrough_0x1e44fc;
    }
    ctx->pc = 0x1E44FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E44FCu;
            // 0x1e4500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e44fc:
    ctx->pc = 0x1E4504u;
}
