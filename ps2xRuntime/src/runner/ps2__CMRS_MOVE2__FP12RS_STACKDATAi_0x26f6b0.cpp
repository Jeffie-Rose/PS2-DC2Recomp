#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_MOVE2__FP12RS_STACKDATAi
// Address: 0x26f6b0 - 0x26f848
void ps2__CMRS_MOVE2__FP12RS_STACKDATAi_0x26f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_MOVE2__FP12RS_STACKDATAi_0x26f6b0");
#endif

    switch (ctx->pc) {
        case 0x26f6ecu: goto label_26f6ec;
        case 0x26f710u: goto label_26f710;
        case 0x26f778u: goto label_26f778;
        case 0x26f784u: goto label_26f784;
        case 0x26f794u: goto label_26f794;
        case 0x26f7a4u: goto label_26f7a4;
        case 0x26f7b0u: goto label_26f7b0;
        case 0x26f7c4u: goto label_26f7c4;
        case 0x26f7d0u: goto label_26f7d0;
        case 0x26f7e0u: goto label_26f7e0;
        case 0x26f7f0u: goto label_26f7f0;
        case 0x26f7fcu: goto label_26f7fc;
        case 0x26f82cu: goto label_26f82c;
        default: break;
    }

    ctx->pc = 0x26f6b0u;

    // 0x26f6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26f6b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26f6b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26f6bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26f6c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26f6c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26f6c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f6c8: 0x10a2003b  beq         $a1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26F6C8u;
    {
        const bool branch_taken_0x26f6c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6C8u;
            // 0x26f6cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6c8) {
            ctx->pc = 0x26F7B8u;
            goto label_26f7b8;
        }
    }
    ctx->pc = 0x26F6D0u;
    // 0x26f6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f6d4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F6D4u;
    {
        const bool branch_taken_0x26f6d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f6d4) {
            ctx->pc = 0x26F6E4u;
            goto label_26f6e4;
        }
    }
    ctx->pc = 0x26F6DCu;
    // 0x26f6dc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x26F6DCu;
    {
        const bool branch_taken_0x26f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6DCu;
            // 0x26f6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6dc) {
            ctx->pc = 0x26F804u;
            goto label_26f804;
        }
    }
    ctx->pc = 0x26F6E4u;
label_26f6e4:
    // 0x26f6e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F6E4u;
    SET_GPR_U32(ctx, 31, 0x26F6ECu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F6ECu; }
        if (ctx->pc != 0x26F6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F6ECu; }
        if (ctx->pc != 0x26F6ECu) { return; }
    }
    ctx->pc = 0x26F6ECu;
label_26f6ec:
    // 0x26f6ec: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26f6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26f6f0: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26f6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26f6f4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F6F4u;
    {
        const bool branch_taken_0x26f6f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6F4u;
            // 0x26f6f8: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6f4) {
            ctx->pc = 0x26F704u;
            goto label_26f704;
        }
    }
    ctx->pc = 0x26F6FCu;
    // 0x26f6fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26F6FCu;
    {
        const bool branch_taken_0x26f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6FCu;
            // 0x26f700: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6fc) {
            ctx->pc = 0x26F760u;
            goto label_26f760;
        }
    }
    ctx->pc = 0x26F704u;
label_26f704:
    // 0x26f704: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26f704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26f708: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F708u;
    {
        const bool branch_taken_0x26f708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F708u;
            // 0x26f70c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f708) {
            ctx->pc = 0x26F738u;
            goto label_26f738;
        }
    }
    ctx->pc = 0x26F710u;
label_26f710:
    // 0x26f710: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26f710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26f714: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26F714u;
    {
        const bool branch_taken_0x26f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f714) {
            ctx->pc = 0x26F744u;
            goto label_26f744;
        }
    }
    ctx->pc = 0x26F71Cu;
    // 0x26f71c: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26f71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26f720: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F720u;
    {
        const bool branch_taken_0x26f720 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f720) {
            ctx->pc = 0x26F730u;
            goto label_26f730;
        }
    }
    ctx->pc = 0x26F728u;
    // 0x26f728: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F728u;
    {
        const bool branch_taken_0x26f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F728u;
            // 0x26f72c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f728) {
            ctx->pc = 0x26F738u;
            goto label_26f738;
        }
    }
    ctx->pc = 0x26F730u;
label_26f730:
    // 0x26f730: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F730u;
    {
        const bool branch_taken_0x26f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F730u;
            // 0x26f734: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f730) {
            ctx->pc = 0x26F760u;
            goto label_26f760;
        }
    }
    ctx->pc = 0x26F738u;
label_26f738:
    // 0x26f738: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26f738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f73c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26F73Cu;
    {
        const bool branch_taken_0x26f73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f73c) {
            ctx->pc = 0x26F710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f710;
        }
    }
    ctx->pc = 0x26F744u;
label_26f744:
    // 0x26f744: 0x0  nop
    ctx->pc = 0x26f744u;
    // NOP
    // 0x26f748: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F748u;
    {
        const bool branch_taken_0x26f748 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F748u;
            // 0x26f74c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f748) {
            ctx->pc = 0x26F758u;
            goto label_26f758;
        }
    }
    ctx->pc = 0x26F750u;
    // 0x26f750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F750u;
    {
        const bool branch_taken_0x26f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f750) {
            ctx->pc = 0x26F760u;
            goto label_26f760;
        }
    }
    ctx->pc = 0x26F758u;
label_26f758:
    // 0x26f758: 0x8cd20004  lw          $s2, 0x4($a2)
    ctx->pc = 0x26f758u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26f75c: 0x0  nop
    ctx->pc = 0x26f75cu;
    // NOP
label_26f760:
    // 0x26f760: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F760u;
    {
        const bool branch_taken_0x26f760 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F760u;
            // 0x26f764: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f760) {
            ctx->pc = 0x26F770u;
            goto label_26f770;
        }
    }
    ctx->pc = 0x26F768u;
    // 0x26f768: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26F768u;
    {
        const bool branch_taken_0x26f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F768u;
            // 0x26f76c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f768) {
            ctx->pc = 0x26F830u;
            goto label_26f830;
        }
    }
    ctx->pc = 0x26F770u;
label_26f770:
    // 0x26f770: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26F770u;
    SET_GPR_U32(ctx, 31, 0x26F778u);
    ctx->pc = 0x26F774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F770u;
            // 0x26f774: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F778u; }
        if (ctx->pc != 0x26F778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F778u; }
        if (ctx->pc != 0x26F778u) { return; }
    }
    ctx->pc = 0x26F778u;
label_26f778:
    // 0x26f778: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26f77c: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26F77Cu;
    SET_GPR_U32(ctx, 31, 0x26F784u);
    ctx->pc = 0x26F780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F77Cu;
            // 0x26f780: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F784u; }
        if (ctx->pc != 0x26F784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F784u; }
        if (ctx->pc != 0x26F784u) { return; }
    }
    ctx->pc = 0x26F784u;
label_26f784:
    // 0x26f784: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x26f784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x26f788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f78c: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26F78Cu;
    SET_GPR_U32(ctx, 31, 0x26F794u);
    ctx->pc = 0x26F790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F78Cu;
            // 0x26f790: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F794u; }
        if (ctx->pc != 0x26F794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F794u; }
        if (ctx->pc != 0x26F794u) { return; }
    }
    ctx->pc = 0x26F794u;
label_26f794:
    // 0x26f794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f79c: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26F79Cu;
    SET_GPR_U32(ctx, 31, 0x26F7A4u);
    ctx->pc = 0x26F7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F79Cu;
            // 0x26f7a0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7A4u; }
        if (ctx->pc != 0x26F7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7A4u; }
        if (ctx->pc != 0x26F7A4u) { return; }
    }
    ctx->pc = 0x26F7A4u;
label_26f7a4:
    // 0x26f7a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7a8: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26F7A8u;
    SET_GPR_U32(ctx, 31, 0x26F7B0u);
    ctx->pc = 0x26F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7A8u;
            // 0x26f7ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7B0u; }
        if (ctx->pc != 0x26F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7B0u; }
        if (ctx->pc != 0x26F7B0u) { return; }
    }
    ctx->pc = 0x26F7B0u;
label_26f7b0:
    // 0x26f7b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26F7B0u;
    {
        const bool branch_taken_0x26f7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f7b0) {
            ctx->pc = 0x26F80Cu;
            goto label_26f80c;
        }
    }
    ctx->pc = 0x26F7B8u;
label_26f7b8:
    // 0x26f7b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26f7bc: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26F7BCu;
    SET_GPR_U32(ctx, 31, 0x26F7C4u);
    ctx->pc = 0x26F7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7BCu;
            // 0x26f7c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7C4u; }
        if (ctx->pc != 0x26F7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7C4u; }
        if (ctx->pc != 0x26F7C4u) { return; }
    }
    ctx->pc = 0x26F7C4u;
label_26f7c4:
    // 0x26f7c4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26f7c8: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26F7C8u;
    SET_GPR_U32(ctx, 31, 0x26F7D0u);
    ctx->pc = 0x26F7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7C8u;
            // 0x26f7cc: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7D0u; }
        if (ctx->pc != 0x26F7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7D0u; }
        if (ctx->pc != 0x26F7D0u) { return; }
    }
    ctx->pc = 0x26F7D0u;
label_26f7d0:
    // 0x26f7d0: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x26f7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x26f7d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F7D8u;
    SET_GPR_U32(ctx, 31, 0x26F7E0u);
    ctx->pc = 0x26F7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7D8u;
            // 0x26f7dc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7E0u; }
        if (ctx->pc != 0x26F7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7E0u; }
        if (ctx->pc != 0x26F7E0u) { return; }
    }
    ctx->pc = 0x26F7E0u;
label_26f7e0:
    // 0x26f7e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F7E8u;
    SET_GPR_U32(ctx, 31, 0x26F7F0u);
    ctx->pc = 0x26F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7E8u;
            // 0x26f7ec: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7F0u; }
        if (ctx->pc != 0x26F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7F0u; }
        if (ctx->pc != 0x26F7F0u) { return; }
    }
    ctx->pc = 0x26F7F0u;
label_26f7f0:
    // 0x26f7f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7f4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F7F4u;
    SET_GPR_U32(ctx, 31, 0x26F7FCu);
    ctx->pc = 0x26F7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7F4u;
            // 0x26f7f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7FCu; }
        if (ctx->pc != 0x26F7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7FCu; }
        if (ctx->pc != 0x26F7FCu) { return; }
    }
    ctx->pc = 0x26F7FCu;
label_26f7fc:
    // 0x26f7fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F7FCu;
    {
        const bool branch_taken_0x26f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f7fc) {
            ctx->pc = 0x26F80Cu;
            goto label_26f80c;
        }
    }
    ctx->pc = 0x26F804u;
label_26f804:
    // 0x26f804: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F804u;
    {
        const bool branch_taken_0x26f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F804u;
            // 0x26f808: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f804) {
            ctx->pc = 0x26F834u;
            goto label_26f834;
        }
    }
    ctx->pc = 0x26F80Cu;
label_26f80c:
    // 0x26f80c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f810: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26f810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f814: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x26f814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f818: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x26f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x26f81c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26f81cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26f820: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26f820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26f824: 0xc096770  jal         func_259DC0
    ctx->pc = 0x26F824u;
    SET_GPR_U32(ctx, 31, 0x26F82Cu);
    ctx->pc = 0x26F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F824u;
            // 0x26f828: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259DC0u;
    if (runtime->hasFunction(0x259DC0u)) {
        auto targetFn = runtime->lookupFunction(0x259DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F82Cu; }
        if (ctx->pc != 0x26F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Move2__12CSceneCmrSeqFPfPfiif_0x259dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F82Cu; }
        if (ctx->pc != 0x26F82Cu) { return; }
    }
    ctx->pc = 0x26F82Cu;
label_26f82c:
    // 0x26f82c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f830:
    // 0x26f830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26f830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26f834:
    // 0x26f834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26f834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f840: 0x3e00008  jr          $ra
    ctx->pc = 0x26F840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F840u;
            // 0x26f844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F848u;
}
