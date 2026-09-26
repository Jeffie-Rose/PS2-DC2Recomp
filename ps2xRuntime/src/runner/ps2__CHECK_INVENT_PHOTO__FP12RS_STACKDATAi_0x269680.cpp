#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_INVENT_PHOTO__FP12RS_STACKDATAi
// Address: 0x269680 - 0x26972c
void ps2__CHECK_INVENT_PHOTO__FP12RS_STACKDATAi_0x269680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_INVENT_PHOTO__FP12RS_STACKDATAi_0x269680");
#endif

    switch (ctx->pc) {
        case 0x2696b4u: goto label_2696b4;
        case 0x2696c0u: goto label_2696c0;
        case 0x2696ccu: goto label_2696cc;
        case 0x2696dcu: goto label_2696dc;
        case 0x2696ecu: goto label_2696ec;
        case 0x2696f8u: goto label_2696f8;
        case 0x269704u: goto label_269704;
        default: break;
    }

    ctx->pc = 0x269680u;

    // 0x269680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x269680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x269684: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x269684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x269688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26968c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26968cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x269690: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x269690u;
    {
        const bool branch_taken_0x269690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x269694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269690u;
            // 0x269694: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269690) {
            ctx->pc = 0x2696D4u;
            goto label_2696d4;
        }
    }
    ctx->pc = 0x269698u;
    // 0x269698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x269698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26969c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26969Cu;
    {
        const bool branch_taken_0x26969c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2696A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26969Cu;
            // 0x2696a0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26969c) {
            ctx->pc = 0x2696ACu;
            goto label_2696ac;
        }
    }
    ctx->pc = 0x2696A4u;
    // 0x2696a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2696A4u;
    {
        const bool branch_taken_0x2696a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2696A4u;
            // 0x2696a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696a4) {
            ctx->pc = 0x26970Cu;
            goto label_26970c;
        }
    }
    ctx->pc = 0x2696ACu;
label_2696ac:
    // 0x2696ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2696ACu;
    SET_GPR_U32(ctx, 31, 0x2696B4u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696B4u; }
        if (ctx->pc != 0x2696B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696B4u; }
        if (ctx->pc != 0x2696B4u) { return; }
    }
    ctx->pc = 0x2696B4u;
label_2696b4:
    // 0x2696b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2696b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696b8: 0xc080174  jal         func_2005D0
    ctx->pc = 0x2696B8u;
    SET_GPR_U32(ctx, 31, 0x2696C0u);
    ctx->pc = 0x2696BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696B8u;
            // 0x2696bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2005D0u;
    if (runtime->hasFunction(0x2005D0u)) {
        auto targetFn = runtime->lookupFunction(0x2005D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696C0u; }
        if (ctx->pc != 0x2696C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInventPhoto__Fii_0x2005d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696C0u; }
        if (ctx->pc != 0x2696C0u) { return; }
    }
    ctx->pc = 0x2696C0u;
label_2696c0:
    // 0x2696c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2696c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696c4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2696C4u;
    SET_GPR_U32(ctx, 31, 0x2696CCu);
    ctx->pc = 0x2696C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696C4u;
            // 0x2696c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696CCu; }
        if (ctx->pc != 0x2696CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696CCu; }
        if (ctx->pc != 0x2696CCu) { return; }
    }
    ctx->pc = 0x2696CCu;
label_2696cc:
    // 0x2696cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2696CCu;
    {
        const bool branch_taken_0x2696cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2696CCu;
            // 0x2696d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696cc) {
            ctx->pc = 0x269718u;
            goto label_269718;
        }
    }
    ctx->pc = 0x2696D4u;
label_2696d4:
    // 0x2696d4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2696D4u;
    SET_GPR_U32(ctx, 31, 0x2696DCu);
    ctx->pc = 0x2696D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696D4u;
            // 0x2696d8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696DCu; }
        if (ctx->pc != 0x2696DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696DCu; }
        if (ctx->pc != 0x2696DCu) { return; }
    }
    ctx->pc = 0x2696DCu;
label_2696dc:
    // 0x2696dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2696dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2696e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2696E4u;
    SET_GPR_U32(ctx, 31, 0x2696ECu);
    ctx->pc = 0x2696E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696E4u;
            // 0x2696e8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696ECu; }
        if (ctx->pc != 0x2696ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696ECu; }
        if (ctx->pc != 0x2696ECu) { return; }
    }
    ctx->pc = 0x2696ECu;
label_2696ec:
    // 0x2696ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2696ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696f0: 0xc080174  jal         func_2005D0
    ctx->pc = 0x2696F0u;
    SET_GPR_U32(ctx, 31, 0x2696F8u);
    ctx->pc = 0x2696F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696F0u;
            // 0x2696f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2005D0u;
    if (runtime->hasFunction(0x2005D0u)) {
        auto targetFn = runtime->lookupFunction(0x2005D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696F8u; }
        if (ctx->pc != 0x2696F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInventPhoto__Fii_0x2005d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2696F8u; }
        if (ctx->pc != 0x2696F8u) { return; }
    }
    ctx->pc = 0x2696F8u;
label_2696f8:
    // 0x2696f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2696f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696fc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2696FCu;
    SET_GPR_U32(ctx, 31, 0x269704u);
    ctx->pc = 0x269700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2696FCu;
            // 0x269700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269704u; }
        if (ctx->pc != 0x269704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269704u; }
        if (ctx->pc != 0x269704u) { return; }
    }
    ctx->pc = 0x269704u;
label_269704:
    // 0x269704: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x269704u;
    {
        const bool branch_taken_0x269704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269704) {
            ctx->pc = 0x269714u;
            goto label_269714;
        }
    }
    ctx->pc = 0x26970Cu;
label_26970c:
    // 0x26970c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26970Cu;
    {
        const bool branch_taken_0x26970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26970Cu;
            // 0x269710: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26970c) {
            ctx->pc = 0x26971Cu;
            goto label_26971c;
        }
    }
    ctx->pc = 0x269714u;
label_269714:
    // 0x269714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269718:
    // 0x269718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26971c:
    // 0x26971c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26971cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269724: 0x3e00008  jr          $ra
    ctx->pc = 0x269724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269724u;
            // 0x269728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26972Cu;
}
