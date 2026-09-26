#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadExMotionStep__FP11SubGameInfoP9mgCMemory
// Address: 0x2fc680 - 0x2fc734
void LoadExMotionStep__FP11SubGameInfoP9mgCMemory_0x2fc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadExMotionStep__FP11SubGameInfoP9mgCMemory_0x2fc680");
#endif

    switch (ctx->pc) {
        case 0x2fc680u: goto label_2fc680;
        case 0x2fc684u: goto label_2fc684;
        case 0x2fc688u: goto label_2fc688;
        case 0x2fc68cu: goto label_2fc68c;
        case 0x2fc690u: goto label_2fc690;
        case 0x2fc694u: goto label_2fc694;
        case 0x2fc698u: goto label_2fc698;
        case 0x2fc69cu: goto label_2fc69c;
        case 0x2fc6a0u: goto label_2fc6a0;
        case 0x2fc6a4u: goto label_2fc6a4;
        case 0x2fc6a8u: goto label_2fc6a8;
        case 0x2fc6acu: goto label_2fc6ac;
        case 0x2fc6b0u: goto label_2fc6b0;
        case 0x2fc6b4u: goto label_2fc6b4;
        case 0x2fc6b8u: goto label_2fc6b8;
        case 0x2fc6bcu: goto label_2fc6bc;
        case 0x2fc6c0u: goto label_2fc6c0;
        case 0x2fc6c4u: goto label_2fc6c4;
        case 0x2fc6c8u: goto label_2fc6c8;
        case 0x2fc6ccu: goto label_2fc6cc;
        case 0x2fc6d0u: goto label_2fc6d0;
        case 0x2fc6d4u: goto label_2fc6d4;
        case 0x2fc6d8u: goto label_2fc6d8;
        case 0x2fc6dcu: goto label_2fc6dc;
        case 0x2fc6e0u: goto label_2fc6e0;
        case 0x2fc6e4u: goto label_2fc6e4;
        case 0x2fc6e8u: goto label_2fc6e8;
        case 0x2fc6ecu: goto label_2fc6ec;
        case 0x2fc6f0u: goto label_2fc6f0;
        case 0x2fc6f4u: goto label_2fc6f4;
        case 0x2fc6f8u: goto label_2fc6f8;
        case 0x2fc6fcu: goto label_2fc6fc;
        case 0x2fc700u: goto label_2fc700;
        case 0x2fc704u: goto label_2fc704;
        case 0x2fc708u: goto label_2fc708;
        case 0x2fc70cu: goto label_2fc70c;
        case 0x2fc710u: goto label_2fc710;
        case 0x2fc714u: goto label_2fc714;
        case 0x2fc718u: goto label_2fc718;
        case 0x2fc71cu: goto label_2fc71c;
        case 0x2fc720u: goto label_2fc720;
        case 0x2fc724u: goto label_2fc724;
        case 0x2fc728u: goto label_2fc728;
        case 0x2fc72cu: goto label_2fc72c;
        case 0x2fc730u: goto label_2fc730;
        default: break;
    }

    ctx->pc = 0x2fc680u;

label_2fc680:
    // 0x2fc680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fc684:
    // 0x2fc684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fc684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fc688:
    // 0x2fc688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fc68c:
    // 0x2fc68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc690:
    // 0x2fc690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc694:
    // 0x2fc694: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2fc694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2fc698:
    // 0x2fc698: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fc69c:
    if (ctx->pc == 0x2FC69Cu) {
        ctx->pc = 0x2FC69Cu;
            // 0x2fc69c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6A0u;
        goto label_2fc6a0;
    }
    ctx->pc = 0x2FC698u;
    {
        const bool branch_taken_0x2fc698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC698u;
            // 0x2fc69c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc698) {
            ctx->pc = 0x2FC6A8u;
            goto label_2fc6a8;
        }
    }
    ctx->pc = 0x2FC6A0u;
label_2fc6a0:
    // 0x2fc6a0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2fc6a4:
    if (ctx->pc == 0x2FC6A4u) {
        ctx->pc = 0x2FC6A4u;
            // 0x2fc6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6A8u;
        goto label_2fc6a8;
    }
    ctx->pc = 0x2FC6A0u;
    {
        const bool branch_taken_0x2fc6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC6A0u;
            // 0x2fc6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6a0) {
            ctx->pc = 0x2FC720u;
            goto label_2fc720;
        }
    }
    ctx->pc = 0x2FC6A8u;
label_2fc6a8:
    // 0x2fc6a8: 0xc05239c  jal         func_148E70
label_2fc6ac:
    if (ctx->pc == 0x2FC6ACu) {
        ctx->pc = 0x2FC6B0u;
        goto label_2fc6b0;
    }
    ctx->pc = 0x2FC6A8u;
    SET_GPR_U32(ctx, 31, 0x2FC6B0u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC6B0u; }
        if (ctx->pc != 0x2FC6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC6B0u; }
        if (ctx->pc != 0x2FC6B0u) { return; }
    }
    ctx->pc = 0x2FC6B0u;
label_2fc6b0:
    // 0x2fc6b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fc6b4:
    if (ctx->pc == 0x2FC6B4u) {
        ctx->pc = 0x2FC6B4u;
            // 0x2fc6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FC6B8u;
        goto label_2fc6b8;
    }
    ctx->pc = 0x2FC6B0u;
    {
        const bool branch_taken_0x2fc6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC6B0u;
            // 0x2fc6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6b0) {
            ctx->pc = 0x2FC6C0u;
            goto label_2fc6c0;
        }
    }
    ctx->pc = 0x2FC6B8u;
label_2fc6b8:
    // 0x2fc6b8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2fc6bc:
    if (ctx->pc == 0x2FC6BCu) {
        ctx->pc = 0x2FC6BCu;
            // 0x2fc6bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2FC6C0u;
        goto label_2fc6c0;
    }
    ctx->pc = 0x2FC6B8u;
    {
        const bool branch_taken_0x2fc6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC6B8u;
            // 0x2fc6bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6b8) {
            ctx->pc = 0x2FC724u;
            goto label_2fc724;
        }
    }
    ctx->pc = 0x2FC6C0u;
label_2fc6c0:
    // 0x2fc6c0: 0x8f82a024  lw          $v0, -0x5FDC($gp)
    ctx->pc = 0x2fc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942756)));
label_2fc6c4:
    // 0x2fc6c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fc6c8:
    if (ctx->pc == 0x2FC6C8u) {
        ctx->pc = 0x2FC6C8u;
            // 0x2fc6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6CCu;
        goto label_2fc6cc;
    }
    ctx->pc = 0x2FC6C4u;
    {
        const bool branch_taken_0x2fc6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC6C4u;
            // 0x2fc6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc6c4) {
            ctx->pc = 0x2FC6D4u;
            goto label_2fc6d4;
        }
    }
    ctx->pc = 0x2FC6CCu;
label_2fc6cc:
    // 0x2fc6cc: 0x10000014  b           . + 4 + (0x14 << 2)
label_2fc6d0:
    if (ctx->pc == 0x2FC6D0u) {
        ctx->pc = 0x2FC6D4u;
        goto label_2fc6d4;
    }
    ctx->pc = 0x2FC6CCu;
    {
        const bool branch_taken_0x2fc6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc6cc) {
            ctx->pc = 0x2FC720u;
            goto label_2fc720;
        }
    }
    ctx->pc = 0x2FC6D4u;
label_2fc6d4:
    // 0x2fc6d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fc6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fc6d8:
    // 0x2fc6d8: 0xc0a0ed8  jal         func_283B60
label_2fc6dc:
    if (ctx->pc == 0x2FC6DCu) {
        ctx->pc = 0x2FC6DCu;
            // 0x2fc6dc: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x2FC6E0u;
        goto label_2fc6e0;
    }
    ctx->pc = 0x2FC6D8u;
    SET_GPR_U32(ctx, 31, 0x2FC6E0u);
    ctx->pc = 0x2FC6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC6D8u;
            // 0x2fc6dc: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC6E0u; }
        if (ctx->pc != 0x2FC6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC6E0u; }
        if (ctx->pc != 0x2FC6E0u) { return; }
    }
    ctx->pc = 0x2FC6E0u;
label_2fc6e0:
    // 0x2fc6e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fc6e4:
    if (ctx->pc == 0x2FC6E4u) {
        ctx->pc = 0x2FC6E8u;
        goto label_2fc6e8;
    }
    ctx->pc = 0x2FC6E0u;
    {
        const bool branch_taken_0x2fc6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc6e0) {
            ctx->pc = 0x2FC718u;
            goto label_2fc718;
        }
    }
    ctx->pc = 0x2FC6E8u;
label_2fc6e8:
    // 0x2fc6e8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2fc6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fc6ec:
    // 0x2fc6ec: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fc6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fc6f0:
    // 0x2fc6f0: 0x8f85a070  lw          $a1, -0x5F90($gp)
    ctx->pc = 0x2fc6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942832)));
label_2fc6f4:
    // 0x2fc6f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fc6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fc6f8:
    // 0x2fc6f8: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fc6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fc6fc:
    // 0x2fc6fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2fc6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc700:
    // 0x2fc700: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2fc700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc704:
    // 0x2fc704: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2fc704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc708:
    // 0x2fc708: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2fc708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc70c:
    // 0x2fc70c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2fc70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2fc710:
    // 0x2fc710: 0x320f809  jalr        $t9
label_2fc714:
    if (ctx->pc == 0x2FC714u) {
        ctx->pc = 0x2FC714u;
            // 0x2fc714: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC718u;
        goto label_2fc718;
    }
    ctx->pc = 0x2FC710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC718u);
        ctx->pc = 0x2FC714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC710u;
            // 0x2fc714: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC718u; }
            if (ctx->pc != 0x2FC718u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC718u;
label_2fc718:
    // 0x2fc718: 0xaf80a024  sw          $zero, -0x5FDC($gp)
    ctx->pc = 0x2fc718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942756), GPR_U32(ctx, 0));
label_2fc71c:
    // 0x2fc71c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc720:
    // 0x2fc720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fc724:
    // 0x2fc724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc728:
    // 0x2fc728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc72c:
    // 0x2fc72c: 0x3e00008  jr          $ra
label_2fc730:
    if (ctx->pc == 0x2FC730u) {
        ctx->pc = 0x2FC730u;
            // 0x2fc730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FC734u;
        goto label_fallthrough_0x2fc72c;
    }
    ctx->pc = 0x2FC72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC72Cu;
            // 0x2fc730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fc72c:
    ctx->pc = 0x2FC734u;
}
