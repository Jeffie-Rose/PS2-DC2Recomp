#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_MOVE_POS__FP12RS_STACKDATAi
// Address: 0x270650 - 0x270774
void ps2__CMRS_MOVE_POS__FP12RS_STACKDATAi_0x270650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_MOVE_POS__FP12RS_STACKDATAi_0x270650");
#endif

    switch (ctx->pc) {
        case 0x270684u: goto label_270684;
        case 0x2706a8u: goto label_2706a8;
        case 0x270710u: goto label_270710;
        case 0x27071cu: goto label_27071c;
        case 0x270730u: goto label_270730;
        case 0x27073cu: goto label_27073c;
        case 0x270760u: goto label_270760;
        default: break;
    }

    ctx->pc = 0x270650u;

    // 0x270650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270654: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x270654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27065c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x27065cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270660: 0x10a20030  beq         $a1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x270660u;
    {
        const bool branch_taken_0x270660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x270664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270660u;
            // 0x270664: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270660) {
            ctx->pc = 0x270724u;
            goto label_270724;
        }
    }
    ctx->pc = 0x270668u;
    // 0x270668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27066c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27066Cu;
    {
        const bool branch_taken_0x27066c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27066c) {
            ctx->pc = 0x27067Cu;
            goto label_27067c;
        }
    }
    ctx->pc = 0x270674u;
    // 0x270674: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x270674u;
    {
        const bool branch_taken_0x270674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270674u;
            // 0x270678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270674) {
            ctx->pc = 0x270744u;
            goto label_270744;
        }
    }
    ctx->pc = 0x27067Cu;
label_27067c:
    // 0x27067c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27067Cu;
    SET_GPR_U32(ctx, 31, 0x270684u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270684u; }
        if (ctx->pc != 0x270684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270684u; }
        if (ctx->pc != 0x270684u) { return; }
    }
    ctx->pc = 0x270684u;
label_270684:
    // 0x270684: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x270684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x270688: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x270688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x27068c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27068Cu;
    {
        const bool branch_taken_0x27068c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27068Cu;
            // 0x270690: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27068c) {
            ctx->pc = 0x27069Cu;
            goto label_27069c;
        }
    }
    ctx->pc = 0x270694u;
    // 0x270694: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x270694u;
    {
        const bool branch_taken_0x270694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270694u;
            // 0x270698: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270694) {
            ctx->pc = 0x2706F8u;
            goto label_2706f8;
        }
    }
    ctx->pc = 0x27069Cu;
label_27069c:
    // 0x27069c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x27069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x2706a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2706A0u;
    {
        const bool branch_taken_0x2706a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2706A0u;
            // 0x2706a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706a0) {
            ctx->pc = 0x2706D0u;
            goto label_2706d0;
        }
    }
    ctx->pc = 0x2706A8u;
label_2706a8:
    // 0x2706a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2706a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2706ac: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2706ACu;
    {
        const bool branch_taken_0x2706ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2706ac) {
            ctx->pc = 0x2706DCu;
            goto label_2706dc;
        }
    }
    ctx->pc = 0x2706B4u;
    // 0x2706b4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x2706b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2706b8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2706B8u;
    {
        const bool branch_taken_0x2706b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706b8) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2706C0u;
    // 0x2706c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2706C0u;
    {
        const bool branch_taken_0x2706c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2706C0u;
            // 0x2706c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706c0) {
            ctx->pc = 0x2706D0u;
            goto label_2706d0;
        }
    }
    ctx->pc = 0x2706C8u;
label_2706c8:
    // 0x2706c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2706C8u;
    {
        const bool branch_taken_0x2706c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2706C8u;
            // 0x2706cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706c8) {
            ctx->pc = 0x2706F8u;
            goto label_2706f8;
        }
    }
    ctx->pc = 0x2706D0u;
label_2706d0:
    // 0x2706d0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2706d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2706d4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2706D4u;
    {
        const bool branch_taken_0x2706d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2706d4) {
            ctx->pc = 0x2706A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2706a8;
        }
    }
    ctx->pc = 0x2706DCu;
label_2706dc:
    // 0x2706dc: 0x0  nop
    ctx->pc = 0x2706dcu;
    // NOP
    // 0x2706e0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2706E0u;
    {
        const bool branch_taken_0x2706e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2706E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2706E0u;
            // 0x2706e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706e0) {
            ctx->pc = 0x2706F0u;
            goto label_2706f0;
        }
    }
    ctx->pc = 0x2706E8u;
    // 0x2706e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2706E8u;
    {
        const bool branch_taken_0x2706e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706e8) {
            ctx->pc = 0x2706F8u;
            goto label_2706f8;
        }
    }
    ctx->pc = 0x2706F0u;
label_2706f0:
    // 0x2706f0: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x2706f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2706f4: 0x0  nop
    ctx->pc = 0x2706f4u;
    // NOP
label_2706f8:
    // 0x2706f8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2706F8u;
    {
        const bool branch_taken_0x2706f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2706FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2706F8u;
            // 0x2706fc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706f8) {
            ctx->pc = 0x270708u;
            goto label_270708;
        }
    }
    ctx->pc = 0x270700u;
    // 0x270700: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x270700u;
    {
        const bool branch_taken_0x270700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270700u;
            // 0x270704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270700) {
            ctx->pc = 0x270764u;
            goto label_270764;
        }
    }
    ctx->pc = 0x270708u;
label_270708:
    // 0x270708: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x270708u;
    SET_GPR_U32(ctx, 31, 0x270710u);
    ctx->pc = 0x27070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270708u;
            // 0x27070c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270710u; }
        if (ctx->pc != 0x270710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270710u; }
        if (ctx->pc != 0x270710u) { return; }
    }
    ctx->pc = 0x270710u;
label_270710:
    // 0x270710: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x270710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x270714: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270714u;
    SET_GPR_U32(ctx, 31, 0x27071Cu);
    ctx->pc = 0x270718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270714u;
            // 0x270718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27071Cu; }
        if (ctx->pc != 0x27071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27071Cu; }
        if (ctx->pc != 0x27071Cu) { return; }
    }
    ctx->pc = 0x27071Cu;
label_27071c:
    // 0x27071c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27071Cu;
    {
        const bool branch_taken_0x27071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27071c) {
            ctx->pc = 0x27074Cu;
            goto label_27074c;
        }
    }
    ctx->pc = 0x270724u;
label_270724:
    // 0x270724: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x270724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270728: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x270728u;
    SET_GPR_U32(ctx, 31, 0x270730u);
    ctx->pc = 0x27072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270728u;
            // 0x27072c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270730u; }
        if (ctx->pc != 0x270730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270730u; }
        if (ctx->pc != 0x270730u) { return; }
    }
    ctx->pc = 0x270730u;
label_270730:
    // 0x270730: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x270730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x270734: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270734u;
    SET_GPR_U32(ctx, 31, 0x27073Cu);
    ctx->pc = 0x270738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270734u;
            // 0x270738: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27073Cu; }
        if (ctx->pc != 0x27073Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27073Cu; }
        if (ctx->pc != 0x27073Cu) { return; }
    }
    ctx->pc = 0x27073Cu;
label_27073c:
    // 0x27073c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27073Cu;
    {
        const bool branch_taken_0x27073c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27073c) {
            ctx->pc = 0x27074Cu;
            goto label_27074c;
        }
    }
    ctx->pc = 0x270744u;
label_270744:
    // 0x270744: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270744u;
    {
        const bool branch_taken_0x270744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270744u;
            // 0x270748: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270744) {
            ctx->pc = 0x270768u;
            goto label_270768;
        }
    }
    ctx->pc = 0x27074Cu;
label_27074c:
    // 0x27074c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x27074cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x270750: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x270750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270754: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x270754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x270758: 0xc0967b0  jal         func_259EC0
    ctx->pc = 0x270758u;
    SET_GPR_U32(ctx, 31, 0x270760u);
    ctx->pc = 0x27075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270758u;
            // 0x27075c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259EC0u;
    if (runtime->hasFunction(0x259EC0u)) {
        auto targetFn = runtime->lookupFunction(0x259EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270760u; }
        if (ctx->pc != 0x270760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MovePos__12CSceneCmrSeqFPfi_0x259ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270760u; }
        if (ctx->pc != 0x270760u) { return; }
    }
    ctx->pc = 0x270760u;
label_270760:
    // 0x270760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270764:
    // 0x270764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_270768:
    // 0x270768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27076c: 0x3e00008  jr          $ra
    ctx->pc = 0x27076Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27076Cu;
            // 0x270770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270774u;
}
