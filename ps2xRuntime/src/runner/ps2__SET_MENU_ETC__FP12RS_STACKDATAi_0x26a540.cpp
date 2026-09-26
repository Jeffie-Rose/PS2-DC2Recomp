#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MENU_ETC__FP12RS_STACKDATAi
// Address: 0x26a540 - 0x26a6e8
void ps2__SET_MENU_ETC__FP12RS_STACKDATAi_0x26a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MENU_ETC__FP12RS_STACKDATAi_0x26a540");
#endif

    switch (ctx->pc) {
        case 0x26a558u: goto label_26a558;
        case 0x26a56cu: goto label_26a56c;
        case 0x26a57cu: goto label_26a57c;
        case 0x26a588u: goto label_26a588;
        case 0x26a598u: goto label_26a598;
        case 0x26a5b0u: goto label_26a5b0;
        case 0x26a5b8u: goto label_26a5b8;
        case 0x26a5d0u: goto label_26a5d0;
        case 0x26a5f8u: goto label_26a5f8;
        case 0x26a600u: goto label_26a600;
        case 0x26a61cu: goto label_26a61c;
        case 0x26a638u: goto label_26a638;
        case 0x26a644u: goto label_26a644;
        case 0x26a654u: goto label_26a654;
        case 0x26a670u: goto label_26a670;
        case 0x26a688u: goto label_26a688;
        case 0x26a6a0u: goto label_26a6a0;
        case 0x26a6a8u: goto label_26a6a8;
        case 0x26a6d0u: goto label_26a6d0;
        default: break;
    }

    ctx->pc = 0x26a540u;

    // 0x26a540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a550: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A550u;
    SET_GPR_U32(ctx, 31, 0x26A558u);
    ctx->pc = 0x26A554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A550u;
            // 0x26a554: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A558u; }
        if (ctx->pc != 0x26A558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A558u; }
        if (ctx->pc != 0x26A558u) { return; }
    }
    ctx->pc = 0x26A558u;
label_26a558:
    // 0x26a558: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A558u;
    {
        const bool branch_taken_0x26a558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A558u;
            // 0x26a55c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a558) {
            ctx->pc = 0x26A5A0u;
            goto label_26a5a0;
        }
    }
    ctx->pc = 0x26A560u;
    // 0x26a560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a564: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26A564u;
    SET_GPR_U32(ctx, 31, 0x26A56Cu);
    ctx->pc = 0x26A568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A564u;
            // 0x26a568: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A56Cu; }
        if (ctx->pc != 0x26A56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A56Cu; }
        if (ctx->pc != 0x26A56Cu) { return; }
    }
    ctx->pc = 0x26A56Cu;
label_26a56c:
    // 0x26a56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a570: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a574: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26A574u;
    SET_GPR_U32(ctx, 31, 0x26A57Cu);
    ctx->pc = 0x26A578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A574u;
            // 0x26a578: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A57Cu; }
        if (ctx->pc != 0x26A57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A57Cu; }
        if (ctx->pc != 0x26A57Cu) { return; }
    }
    ctx->pc = 0x26A57Cu;
label_26a57c:
    // 0x26a57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a580: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A580u;
    SET_GPR_U32(ctx, 31, 0x26A588u);
    ctx->pc = 0x26A584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A580u;
            // 0x26a584: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A588u; }
        if (ctx->pc != 0x26A588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A588u; }
        if (ctx->pc != 0x26A588u) { return; }
    }
    ctx->pc = 0x26A588u;
label_26a588:
    // 0x26a588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a58c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26a58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a590: 0xc0c2984  jal         func_30A610
    ctx->pc = 0x26A590u;
    SET_GPR_U32(ctx, 31, 0x26A598u);
    ctx->pc = 0x26A594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A590u;
            // 0x26a594: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A610u;
    if (runtime->hasFunction(0x30A610u)) {
        auto targetFn = runtime->lookupFunction(0x30A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A598u; }
        if (ctx->pc != 0x26A598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventKeyword__FPcPci_0x30a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A598u; }
        if (ctx->pc != 0x26A598u) { return; }
    }
    ctx->pc = 0x26A598u;
label_26a598:
    // 0x26a598: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x26A598u;
    {
        const bool branch_taken_0x26a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A598u;
            // 0x26a59c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a598) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A5A0u;
label_26a5a0:
    // 0x26a5a0: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x26A5A0u;
    {
        const bool branch_taken_0x26a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x26A5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5A0u;
            // 0x26a5a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5a0) {
            ctx->pc = 0x26A5D8u;
            goto label_26a5d8;
        }
    }
    ctx->pc = 0x26A5A8u;
    // 0x26a5a8: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x26A5A8u;
    SET_GPR_U32(ctx, 31, 0x26A5B0u);
    ctx->pc = 0x1A1A80u;
    if (runtime->hasFunction(0x1A1A80u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5B0u; }
        if (ctx->pc != 0x26A5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AquaFishFatigueClear__Fv_0x1a1a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5B0u; }
        if (ctx->pc != 0x26A5B0u) { return; }
    }
    ctx->pc = 0x26A5B0u;
label_26a5b0:
    // 0x26a5b0: 0xc064220  jal         func_190880
    ctx->pc = 0x26A5B0u;
    SET_GPR_U32(ctx, 31, 0x26A5B8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5B8u; }
        if (ctx->pc != 0x26A5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5B8u; }
        if (ctx->pc != 0x26A5B8u) { return; }
    }
    ctx->pc = 0x26A5B8u;
label_26a5b8:
    // 0x26a5b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A5B8u;
    {
        const bool branch_taken_0x26a5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5B8u;
            // 0x26a5bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5b8) {
            ctx->pc = 0x26A5C8u;
            goto label_26a5c8;
        }
    }
    ctx->pc = 0x26A5C0u;
    // 0x26a5c0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x26A5C0u;
    {
        const bool branch_taken_0x26a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5C0u;
            // 0x26a5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5c0) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A5C8u;
label_26a5c8:
    // 0x26a5c8: 0xc0bdadc  jal         func_2F6B70
    ctx->pc = 0x26A5C8u;
    SET_GPR_U32(ctx, 31, 0x26A5D0u);
    ctx->pc = 0x2F6B70u;
    if (runtime->hasFunction(0x2F6B70u)) {
        auto targetFn = runtime->lookupFunction(0x2F6B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5D0u; }
        if (ctx->pc != 0x26A5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FinishTour__9CSaveDataFv_0x2f6b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5D0u; }
        if (ctx->pc != 0x26A5D0u) { return; }
    }
    ctx->pc = 0x26A5D0u;
label_26a5d0:
    // 0x26a5d0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x26A5D0u;
    {
        const bool branch_taken_0x26a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5D0u;
            // 0x26a5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5d0) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A5D8u;
label_26a5d8:
    // 0x26a5d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A5D8u;
    {
        const bool branch_taken_0x26a5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5D8u;
            // 0x26a5dc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5d8) {
            ctx->pc = 0x26A5E8u;
            goto label_26a5e8;
        }
    }
    ctx->pc = 0x26A5E0u;
    // 0x26a5e0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x26A5E0u;
    {
        const bool branch_taken_0x26a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5E0u;
            // 0x26a5e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5e0) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A5E8u;
label_26a5e8:
    // 0x26a5e8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A5E8u;
    {
        const bool branch_taken_0x26a5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5E8u;
            // 0x26a5ec: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5e8) {
            ctx->pc = 0x26A608u;
            goto label_26a608;
        }
    }
    ctx->pc = 0x26A5F0u;
    // 0x26a5f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A5F0u;
    SET_GPR_U32(ctx, 31, 0x26A5F8u);
    ctx->pc = 0x26A5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5F0u;
            // 0x26a5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5F8u; }
        if (ctx->pc != 0x26A5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A5F8u; }
        if (ctx->pc != 0x26A5F8u) { return; }
    }
    ctx->pc = 0x26A5F8u;
label_26a5f8:
    // 0x26a5f8: 0xc07d57c  jal         func_1F55F0
    ctx->pc = 0x26A5F8u;
    SET_GPR_U32(ctx, 31, 0x26A600u);
    ctx->pc = 0x26A5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5F8u;
            // 0x26a5fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F55F0u;
    if (runtime->hasFunction(0x1F55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A600u; }
        if (ctx->pc != 0x26A600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDownLoadAnaunceSwitch__Fi_0x1f55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A600u; }
        if (ctx->pc != 0x26A600u) { return; }
    }
    ctx->pc = 0x26A600u;
label_26a600:
    // 0x26a600: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x26A600u;
    {
        const bool branch_taken_0x26a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A600u;
            // 0x26a604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a600) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A608u;
label_26a608:
    // 0x26a608: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A608u;
    {
        const bool branch_taken_0x26a608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A608u;
            // 0x26a60c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a608) {
            ctx->pc = 0x26A624u;
            goto label_26a624;
        }
    }
    ctx->pc = 0x26A610u;
    // 0x26a610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26a610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a614: 0xc08891c  jal         func_222470
    ctx->pc = 0x26A614u;
    SET_GPR_U32(ctx, 31, 0x26A61Cu);
    ctx->pc = 0x26A618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A614u;
            // 0x26a618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A61Cu; }
        if (ctx->pc != 0x26A61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A61Cu; }
        if (ctx->pc != 0x26A61Cu) { return; }
    }
    ctx->pc = 0x26A61Cu;
label_26a61c:
    // 0x26a61c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26A61Cu;
    {
        const bool branch_taken_0x26a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A61Cu;
            // 0x26a620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a61c) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A624u;
label_26a624:
    // 0x26a624: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x26A624u;
    {
        const bool branch_taken_0x26a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A624u;
            // 0x26a628: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a624) {
            ctx->pc = 0x26A6B0u;
            goto label_26a6b0;
        }
    }
    ctx->pc = 0x26A62Cu;
    // 0x26a62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a630: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A630u;
    SET_GPR_U32(ctx, 31, 0x26A638u);
    ctx->pc = 0x26A634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A630u;
            // 0x26a634: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A638u; }
        if (ctx->pc != 0x26A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A638u; }
        if (ctx->pc != 0x26A638u) { return; }
    }
    ctx->pc = 0x26A638u;
label_26a638:
    // 0x26a638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a63c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A63Cu;
    SET_GPR_U32(ctx, 31, 0x26A644u);
    ctx->pc = 0x26A640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A63Cu;
            // 0x26a640: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A644u; }
        if (ctx->pc != 0x26A644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A644u; }
        if (ctx->pc != 0x26A644u) { return; }
    }
    ctx->pc = 0x26A644u;
label_26a644:
    // 0x26a644: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26a644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26a648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a64c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x26A64Cu;
    SET_GPR_U32(ctx, 31, 0x26A654u);
    ctx->pc = 0x26A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A64Cu;
            // 0x26a650: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A654u; }
        if (ctx->pc != 0x26A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A654u; }
        if (ctx->pc != 0x26A654u) { return; }
    }
    ctx->pc = 0x26A654u;
label_26a654:
    // 0x26a654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a658: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A658u;
    {
        const bool branch_taken_0x26a658 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A658u;
            // 0x26a65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a658) {
            ctx->pc = 0x26A668u;
            goto label_26a668;
        }
    }
    ctx->pc = 0x26A660u;
    // 0x26a660: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26A660u;
    {
        const bool branch_taken_0x26a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A660u;
            // 0x26a664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a660) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A668u;
label_26a668:
    // 0x26a668: 0xc07d518  jal         func_1F5460
    ctx->pc = 0x26A668u;
    SET_GPR_U32(ctx, 31, 0x26A670u);
    ctx->pc = 0x1F5460u;
    if (runtime->hasFunction(0x1F5460u)) {
        auto targetFn = runtime->lookupFunction(0x1F5460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A670u; }
        if (ctx->pc != 0x26A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDownLoadAnaunce__FP9mgCMemory_0x1f5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A670u; }
        if (ctx->pc != 0x26A670u) { return; }
    }
    ctx->pc = 0x26A670u;
label_26a670:
    // 0x26a670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a674: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26a674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26a67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a680: 0xc07d72c  jal         func_1F5CB0
    ctx->pc = 0x26A680u;
    SET_GPR_U32(ctx, 31, 0x26A688u);
    ctx->pc = 0x26A684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A680u;
            // 0x26a684: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5CB0u;
    if (runtime->hasFunction(0x1F5CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F5CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A688u; }
        if (ctx->pc != 0x26A688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeDownLoadAnaunce__FiP9mgCMemoryPiPiPi_0x1f5cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A688u; }
        if (ctx->pc != 0x26A688u) { return; }
    }
    ctx->pc = 0x26A688u;
label_26a688:
    // 0x26a688: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x26a688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x26a68c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26a690: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x26a690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x26a694: 0x24a5c920  addiu       $a1, $a1, -0x36E0
    ctx->pc = 0x26a694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953248));
    // 0x26a698: 0xc04b414  jal         func_12D050
    ctx->pc = 0x26A698u;
    SET_GPR_U32(ctx, 31, 0x26A6A0u);
    ctx->pc = 0x26A69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A698u;
            // 0x26a69c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6A0u; }
        if (ctx->pc != 0x26A6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6A0u; }
        if (ctx->pc != 0x26A6A0u) { return; }
    }
    ctx->pc = 0x26A6A0u;
label_26a6a0:
    // 0x26a6a0: 0xc07da98  jal         func_1F6A60
    ctx->pc = 0x26A6A0u;
    SET_GPR_U32(ctx, 31, 0x26A6A8u);
    ctx->pc = 0x26A6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6A0u;
            // 0x26a6a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A60u;
    if (runtime->hasFunction(0x1F6A60u)) {
        auto targetFn = runtime->lookupFunction(0x1F6A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6A8u; }
        if (ctx->pc != 0x26A6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl3__FP10mgCTexture_0x1f6a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6A8u; }
        if (ctx->pc != 0x26A6A8u) { return; }
    }
    ctx->pc = 0x26A6A8u;
label_26a6a8:
    // 0x26a6a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26A6A8u;
    {
        const bool branch_taken_0x26a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6A8u;
            // 0x26a6ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6a8) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A6B0u;
label_26a6b0:
    // 0x26a6b0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A6B0u;
    {
        const bool branch_taken_0x26a6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6B0u;
            // 0x26a6b4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6b0) {
            ctx->pc = 0x26A6C0u;
            goto label_26a6c0;
        }
    }
    ctx->pc = 0x26A6B8u;
    // 0x26a6b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A6B8u;
    {
        const bool branch_taken_0x26a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6B8u;
            // 0x26a6bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6b8) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A6C0u;
label_26a6c0:
    // 0x26a6c0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A6C0u;
    {
        const bool branch_taken_0x26a6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6C0u;
            // 0x26a6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6c0) {
            ctx->pc = 0x26A6D4u;
            goto label_26a6d4;
        }
    }
    ctx->pc = 0x26A6C8u;
    // 0x26a6c8: 0xc07d518  jal         func_1F5460
    ctx->pc = 0x26A6C8u;
    SET_GPR_U32(ctx, 31, 0x26A6D0u);
    ctx->pc = 0x26A6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6C8u;
            // 0x26a6cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5460u;
    if (runtime->hasFunction(0x1F5460u)) {
        auto targetFn = runtime->lookupFunction(0x1F5460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6D0u; }
        if (ctx->pc != 0x26A6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDownLoadAnaunce__FP9mgCMemory_0x1f5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6D0u; }
        if (ctx->pc != 0x26A6D0u) { return; }
    }
    ctx->pc = 0x26A6D0u;
label_26a6d0:
    // 0x26a6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a6d4:
    // 0x26a6d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a6d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26A6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A6E0u;
            // 0x26a6e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A6E8u;
}
