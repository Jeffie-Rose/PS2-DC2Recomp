#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_GET_ROT__FP12RS_STACKDATAi
// Address: 0x2e4490 - 0x2e4518
void ps2__CHR_GET_ROT__FP12RS_STACKDATAi_0x2e4490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_GET_ROT__FP12RS_STACKDATAi_0x2e4490");
#endif

    switch (ctx->pc) {
        case 0x2e4490u: goto label_2e4490;
        case 0x2e4494u: goto label_2e4494;
        case 0x2e4498u: goto label_2e4498;
        case 0x2e449cu: goto label_2e449c;
        case 0x2e44a0u: goto label_2e44a0;
        case 0x2e44a4u: goto label_2e44a4;
        case 0x2e44a8u: goto label_2e44a8;
        case 0x2e44acu: goto label_2e44ac;
        case 0x2e44b0u: goto label_2e44b0;
        case 0x2e44b4u: goto label_2e44b4;
        case 0x2e44b8u: goto label_2e44b8;
        case 0x2e44bcu: goto label_2e44bc;
        case 0x2e44c0u: goto label_2e44c0;
        case 0x2e44c4u: goto label_2e44c4;
        case 0x2e44c8u: goto label_2e44c8;
        case 0x2e44ccu: goto label_2e44cc;
        case 0x2e44d0u: goto label_2e44d0;
        case 0x2e44d4u: goto label_2e44d4;
        case 0x2e44d8u: goto label_2e44d8;
        case 0x2e44dcu: goto label_2e44dc;
        case 0x2e44e0u: goto label_2e44e0;
        case 0x2e44e4u: goto label_2e44e4;
        case 0x2e44e8u: goto label_2e44e8;
        case 0x2e44ecu: goto label_2e44ec;
        case 0x2e44f0u: goto label_2e44f0;
        case 0x2e44f4u: goto label_2e44f4;
        case 0x2e44f8u: goto label_2e44f8;
        case 0x2e44fcu: goto label_2e44fc;
        case 0x2e4500u: goto label_2e4500;
        case 0x2e4504u: goto label_2e4504;
        case 0x2e4508u: goto label_2e4508;
        case 0x2e450cu: goto label_2e450c;
        case 0x2e4510u: goto label_2e4510;
        case 0x2e4514u: goto label_2e4514;
        default: break;
    }

    ctx->pc = 0x2e4490u;

label_2e4490:
    // 0x2e4490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4494:
    // 0x2e4494: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e4494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e4498:
    // 0x2e4498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e449c:
    // 0x2e449c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e44a0:
    // 0x2e44a0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2e44a4:
    if (ctx->pc == 0x2E44A4u) {
        ctx->pc = 0x2E44A4u;
            // 0x2e44a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E44A8u;
        goto label_2e44a8;
    }
    ctx->pc = 0x2E44A0u;
    {
        const bool branch_taken_0x2e44a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E44A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44A0u;
            // 0x2e44a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44a0) {
            ctx->pc = 0x2E44B0u;
            goto label_2e44b0;
        }
    }
    ctx->pc = 0x2E44A8u;
label_2e44a8:
    // 0x2e44a8: 0x10000017  b           . + 4 + (0x17 << 2)
label_2e44ac:
    if (ctx->pc == 0x2E44ACu) {
        ctx->pc = 0x2E44ACu;
            // 0x2e44ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E44B0u;
        goto label_2e44b0;
    }
    ctx->pc = 0x2E44A8u;
    {
        const bool branch_taken_0x2e44a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E44ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44A8u;
            // 0x2e44ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44a8) {
            ctx->pc = 0x2E4508u;
            goto label_2e4508;
        }
    }
    ctx->pc = 0x2E44B0u;
label_2e44b0:
    // 0x2e44b0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e44b4:
    // 0x2e44b4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e44b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e44b8:
    // 0x2e44b8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2e44bc:
    if (ctx->pc == 0x2E44BCu) {
        ctx->pc = 0x2E44BCu;
            // 0x2e44bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E44C0u;
        goto label_2e44c0;
    }
    ctx->pc = 0x2E44B8u;
    {
        const bool branch_taken_0x2e44b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E44BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44B8u;
            // 0x2e44bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44b8) {
            ctx->pc = 0x2E44C8u;
            goto label_2e44c8;
        }
    }
    ctx->pc = 0x2E44C0u;
label_2e44c0:
    // 0x2e44c0: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e44c4:
    if (ctx->pc == 0x2E44C4u) {
        ctx->pc = 0x2E44C4u;
            // 0x2e44c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2E44C8u;
        goto label_2e44c8;
    }
    ctx->pc = 0x2E44C0u;
    {
        const bool branch_taken_0x2e44c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E44C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44C0u;
            // 0x2e44c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44c0) {
            ctx->pc = 0x2E450Cu;
            goto label_2e450c;
        }
    }
    ctx->pc = 0x2E44C8u;
label_2e44c8:
    // 0x2e44c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e44c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e44cc:
    // 0x2e44cc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2e44ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2e44d0:
    // 0x2e44d0: 0x320f809  jalr        $t9
label_2e44d4:
    if (ctx->pc == 0x2E44D4u) {
        ctx->pc = 0x2E44D4u;
            // 0x2e44d4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E44D8u;
        goto label_2e44d8;
    }
    ctx->pc = 0x2E44D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E44D8u);
        ctx->pc = 0x2E44D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44D0u;
            // 0x2e44d4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E44D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E44D8u; }
            if (ctx->pc != 0x2E44D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E44D8u;
label_2e44d8:
    // 0x2e44d8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2e44d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e44dc:
    // 0x2e44dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e44dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e44e0:
    // 0x2e44e0: 0xc0b8cdc  jal         func_2E3370
label_2e44e4:
    if (ctx->pc == 0x2E44E4u) {
        ctx->pc = 0x2E44E4u;
            // 0x2e44e4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E44E8u;
        goto label_2e44e8;
    }
    ctx->pc = 0x2E44E0u;
    SET_GPR_U32(ctx, 31, 0x2E44E8u);
    ctx->pc = 0x2E44E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44E0u;
            // 0x2e44e4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E44E8u; }
        if (ctx->pc != 0x2E44E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E44E8u; }
        if (ctx->pc != 0x2E44E8u) { return; }
    }
    ctx->pc = 0x2E44E8u;
label_2e44e8:
    // 0x2e44e8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2e44e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e44ec:
    // 0x2e44ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e44ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e44f0:
    // 0x2e44f0: 0xc0b8cdc  jal         func_2E3370
label_2e44f4:
    if (ctx->pc == 0x2E44F4u) {
        ctx->pc = 0x2E44F4u;
            // 0x2e44f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E44F8u;
        goto label_2e44f8;
    }
    ctx->pc = 0x2E44F0u;
    SET_GPR_U32(ctx, 31, 0x2E44F8u);
    ctx->pc = 0x2E44F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44F0u;
            // 0x2e44f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E44F8u; }
        if (ctx->pc != 0x2E44F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E44F8u; }
        if (ctx->pc != 0x2E44F8u) { return; }
    }
    ctx->pc = 0x2E44F8u;
label_2e44f8:
    // 0x2e44f8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2e44f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e44fc:
    // 0x2e44fc: 0xc0b8cdc  jal         func_2E3370
label_2e4500:
    if (ctx->pc == 0x2E4500u) {
        ctx->pc = 0x2E4500u;
            // 0x2e4500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4504u;
        goto label_2e4504;
    }
    ctx->pc = 0x2E44FCu;
    SET_GPR_U32(ctx, 31, 0x2E4504u);
    ctx->pc = 0x2E4500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44FCu;
            // 0x2e4500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4504u; }
        if (ctx->pc != 0x2E4504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4504u; }
        if (ctx->pc != 0x2E4504u) { return; }
    }
    ctx->pc = 0x2E4504u;
label_2e4504:
    // 0x2e4504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4508:
    // 0x2e4508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e450c:
    // 0x2e450c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e450cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4510:
    // 0x2e4510: 0x3e00008  jr          $ra
label_2e4514:
    if (ctx->pc == 0x2E4514u) {
        ctx->pc = 0x2E4514u;
            // 0x2e4514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4518u;
        goto label_fallthrough_0x2e4510;
    }
    ctx->pc = 0x2E4510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4510u;
            // 0x2e4514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4510:
    ctx->pc = 0x2E4518u;
}
