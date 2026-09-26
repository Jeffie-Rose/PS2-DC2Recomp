#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__7CSphidaFv
// Address: 0x2e9580 - 0x2e9620
void ps2___ct__7CSphidaFv_0x2e9580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__7CSphidaFv_0x2e9580");
#endif

    switch (ctx->pc) {
        case 0x2e9580u: goto label_2e9580;
        case 0x2e9584u: goto label_2e9584;
        case 0x2e9588u: goto label_2e9588;
        case 0x2e958cu: goto label_2e958c;
        case 0x2e9590u: goto label_2e9590;
        case 0x2e9594u: goto label_2e9594;
        case 0x2e9598u: goto label_2e9598;
        case 0x2e959cu: goto label_2e959c;
        case 0x2e95a0u: goto label_2e95a0;
        case 0x2e95a4u: goto label_2e95a4;
        case 0x2e95a8u: goto label_2e95a8;
        case 0x2e95acu: goto label_2e95ac;
        case 0x2e95b0u: goto label_2e95b0;
        case 0x2e95b4u: goto label_2e95b4;
        case 0x2e95b8u: goto label_2e95b8;
        case 0x2e95bcu: goto label_2e95bc;
        case 0x2e95c0u: goto label_2e95c0;
        case 0x2e95c4u: goto label_2e95c4;
        case 0x2e95c8u: goto label_2e95c8;
        case 0x2e95ccu: goto label_2e95cc;
        case 0x2e95d0u: goto label_2e95d0;
        case 0x2e95d4u: goto label_2e95d4;
        case 0x2e95d8u: goto label_2e95d8;
        case 0x2e95dcu: goto label_2e95dc;
        case 0x2e95e0u: goto label_2e95e0;
        case 0x2e95e4u: goto label_2e95e4;
        case 0x2e95e8u: goto label_2e95e8;
        case 0x2e95ecu: goto label_2e95ec;
        case 0x2e95f0u: goto label_2e95f0;
        case 0x2e95f4u: goto label_2e95f4;
        case 0x2e95f8u: goto label_2e95f8;
        case 0x2e95fcu: goto label_2e95fc;
        case 0x2e9600u: goto label_2e9600;
        case 0x2e9604u: goto label_2e9604;
        case 0x2e9608u: goto label_2e9608;
        case 0x2e960cu: goto label_2e960c;
        case 0x2e9610u: goto label_2e9610;
        case 0x2e9614u: goto label_2e9614;
        case 0x2e9618u: goto label_2e9618;
        case 0x2e961cu: goto label_2e961c;
        default: break;
    }

    ctx->pc = 0x2e9580u;

label_2e9580:
    // 0x2e9580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e9584:
    // 0x2e9584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e9584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e9588:
    // 0x2e9588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e958c:
    // 0x2e958c: 0xc0ba3bc  jal         func_2E8EF0
label_2e9590:
    if (ctx->pc == 0x2E9590u) {
        ctx->pc = 0x2E9590u;
            // 0x2e9590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9594u;
        goto label_2e9594;
    }
    ctx->pc = 0x2E958Cu;
    SET_GPR_U32(ctx, 31, 0x2E9594u);
    ctx->pc = 0x2E9590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E958Cu;
            // 0x2e9590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8EF0u;
    if (runtime->hasFunction(0x2E8EF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E8EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9594u; }
        if (ctx->pc != 0x2E9594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8CPowGageFv_0x2e8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9594u; }
        if (ctx->pc != 0x2E9594u) { return; }
    }
    ctx->pc = 0x2E9594u;
label_2e9594:
    // 0x2e9594: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e9594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e9598:
    // 0x2e9598: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2e9598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2e959c:
    // 0x2e959c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2e959cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2e95a0:
    // 0x2e95a0: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x2e95a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e95a4:
    // 0x2e95a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e95a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e95a8:
    // 0x2e95a8: 0x320f809  jalr        $t9
label_2e95ac:
    if (ctx->pc == 0x2E95ACu) {
        ctx->pc = 0x2E95ACu;
            // 0x2e95ac: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x2E95B0u;
        goto label_2e95b0;
    }
    ctx->pc = 0x2E95A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E95B0u);
        ctx->pc = 0x2E95ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95A8u;
            // 0x2e95ac: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E95B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E95B0u; }
            if (ctx->pc != 0x2E95B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E95B0u;
label_2e95b0:
    // 0x2e95b0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e95b4:
    // 0x2e95b4: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2e95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2e95b8:
    // 0x2e95b8: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2e95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2e95bc:
    // 0x2e95bc: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x2e95bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e95c0:
    // 0x2e95c0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e95c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e95c4:
    // 0x2e95c4: 0x320f809  jalr        $t9
label_2e95c8:
    if (ctx->pc == 0x2E95C8u) {
        ctx->pc = 0x2E95C8u;
            // 0x2e95c8: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x2E95CCu;
        goto label_2e95cc;
    }
    ctx->pc = 0x2E95C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E95CCu);
        ctx->pc = 0x2E95C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95C4u;
            // 0x2e95c8: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E95CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E95CCu; }
            if (ctx->pc != 0x2E95CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2E95CCu;
label_2e95cc:
    // 0x2e95cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e95d0:
    // 0x2e95d0: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2e95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2e95d4:
    // 0x2e95d4: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2e95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2e95d8:
    // 0x2e95d8: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x2e95d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e95dc:
    // 0x2e95dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2e95dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2e95e0:
    // 0x2e95e0: 0x320f809  jalr        $t9
label_2e95e4:
    if (ctx->pc == 0x2E95E4u) {
        ctx->pc = 0x2E95E4u;
            // 0x2e95e4: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x2E95E8u;
        goto label_2e95e8;
    }
    ctx->pc = 0x2E95E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E95E8u);
        ctx->pc = 0x2E95E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95E0u;
            // 0x2e95e4: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E95E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E95E8u; }
            if (ctx->pc != 0x2E95E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E95E8u;
label_2e95e8:
    // 0x2e95e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2e95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2e95ec:
    // 0x2e95ec: 0x26040198  addiu       $a0, $s0, 0x198
    ctx->pc = 0x2e95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 408));
label_2e95f0:
    // 0x2e95f0: 0x24426140  addiu       $v0, $v0, 0x6140
    ctx->pc = 0x2e95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24896));
label_2e95f4:
    // 0x2e95f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2e95f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2e95f8:
    // 0x2e95f8: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2e95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2e95fc:
    // 0x2e95fc: 0xc049c86  jal         func_127218
label_2e9600:
    if (ctx->pc == 0x2E9600u) {
        ctx->pc = 0x2E9600u;
            // 0x2e9600: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2E9604u;
        goto label_2e9604;
    }
    ctx->pc = 0x2E95FCu;
    SET_GPR_U32(ctx, 31, 0x2E9604u);
    ctx->pc = 0x2E9600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E95FCu;
            // 0x2e9600: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9604u; }
        if (ctx->pc != 0x2E9604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9604u; }
        if (ctx->pc != 0x2E9604u) { return; }
    }
    ctx->pc = 0x2E9604u;
label_2e9604:
    // 0x2e9604: 0xc0ba588  jal         func_2E9620
label_2e9608:
    if (ctx->pc == 0x2E9608u) {
        ctx->pc = 0x2E9608u;
            // 0x2e9608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E960Cu;
        goto label_2e960c;
    }
    ctx->pc = 0x2E9604u;
    SET_GPR_U32(ctx, 31, 0x2E960Cu);
    ctx->pc = 0x2E9608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9604u;
            // 0x2e9608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9620u;
    if (runtime->hasFunction(0x2E9620u)) {
        auto targetFn = runtime->lookupFunction(0x2E9620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E960Cu; }
        if (ctx->pc != 0x2E960Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CSphidaFv_0x2e9620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E960Cu; }
        if (ctx->pc != 0x2E960Cu) { return; }
    }
    ctx->pc = 0x2E960Cu;
label_2e960c:
    // 0x2e960c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e960cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9610:
    // 0x2e9610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e9610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e9614:
    // 0x2e9614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9618:
    // 0x2e9618: 0x3e00008  jr          $ra
label_2e961c:
    if (ctx->pc == 0x2E961Cu) {
        ctx->pc = 0x2E961Cu;
            // 0x2e961c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E9620u;
        goto label_fallthrough_0x2e9618;
    }
    ctx->pc = 0x2E9618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9618u;
            // 0x2e961c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e9618:
    ctx->pc = 0x2E9620u;
}
