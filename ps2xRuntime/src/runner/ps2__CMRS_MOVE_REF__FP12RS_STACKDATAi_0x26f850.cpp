#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_MOVE_REF__FP12RS_STACKDATAi
// Address: 0x26f850 - 0x26f974
void ps2__CMRS_MOVE_REF__FP12RS_STACKDATAi_0x26f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_MOVE_REF__FP12RS_STACKDATAi_0x26f850");
#endif

    switch (ctx->pc) {
        case 0x26f884u: goto label_26f884;
        case 0x26f8a8u: goto label_26f8a8;
        case 0x26f910u: goto label_26f910;
        case 0x26f91cu: goto label_26f91c;
        case 0x26f930u: goto label_26f930;
        case 0x26f93cu: goto label_26f93c;
        case 0x26f960u: goto label_26f960;
        default: break;
    }

    ctx->pc = 0x26f850u;

    // 0x26f850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26f854: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26f858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f85c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26f85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f860: 0x10a20030  beq         $a1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26F860u;
    {
        const bool branch_taken_0x26f860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F860u;
            // 0x26f864: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f860) {
            ctx->pc = 0x26F924u;
            goto label_26f924;
        }
    }
    ctx->pc = 0x26F868u;
    // 0x26f868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f86c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F86Cu;
    {
        const bool branch_taken_0x26f86c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f86c) {
            ctx->pc = 0x26F87Cu;
            goto label_26f87c;
        }
    }
    ctx->pc = 0x26F874u;
    // 0x26f874: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x26F874u;
    {
        const bool branch_taken_0x26f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F874u;
            // 0x26f878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f874) {
            ctx->pc = 0x26F944u;
            goto label_26f944;
        }
    }
    ctx->pc = 0x26F87Cu;
label_26f87c:
    // 0x26f87c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F87Cu;
    SET_GPR_U32(ctx, 31, 0x26F884u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F884u; }
        if (ctx->pc != 0x26F884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F884u; }
        if (ctx->pc != 0x26F884u) { return; }
    }
    ctx->pc = 0x26F884u;
label_26f884:
    // 0x26f884: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26f884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26f888: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26f888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26f88c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F88Cu;
    {
        const bool branch_taken_0x26f88c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F88Cu;
            // 0x26f890: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f88c) {
            ctx->pc = 0x26F89Cu;
            goto label_26f89c;
        }
    }
    ctx->pc = 0x26F894u;
    // 0x26f894: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26F894u;
    {
        const bool branch_taken_0x26f894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F894u;
            // 0x26f898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f894) {
            ctx->pc = 0x26F8F8u;
            goto label_26f8f8;
        }
    }
    ctx->pc = 0x26F89Cu;
label_26f89c:
    // 0x26f89c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26f8a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F8A0u;
    {
        const bool branch_taken_0x26f8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8A0u;
            // 0x26f8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8a0) {
            ctx->pc = 0x26F8D0u;
            goto label_26f8d0;
        }
    }
    ctx->pc = 0x26F8A8u;
label_26f8a8:
    // 0x26f8a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26f8ac: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26F8ACu;
    {
        const bool branch_taken_0x26f8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f8ac) {
            ctx->pc = 0x26F8DCu;
            goto label_26f8dc;
        }
    }
    ctx->pc = 0x26F8B4u;
    // 0x26f8b4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26f8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26f8b8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F8B8u;
    {
        const bool branch_taken_0x26f8b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f8b8) {
            ctx->pc = 0x26F8C8u;
            goto label_26f8c8;
        }
    }
    ctx->pc = 0x26F8C0u;
    // 0x26f8c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F8C0u;
    {
        const bool branch_taken_0x26f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8C0u;
            // 0x26f8c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8c0) {
            ctx->pc = 0x26F8D0u;
            goto label_26f8d0;
        }
    }
    ctx->pc = 0x26F8C8u;
label_26f8c8:
    // 0x26f8c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F8C8u;
    {
        const bool branch_taken_0x26f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8C8u;
            // 0x26f8cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8c8) {
            ctx->pc = 0x26F8F8u;
            goto label_26f8f8;
        }
    }
    ctx->pc = 0x26F8D0u;
label_26f8d0:
    // 0x26f8d0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26f8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f8d4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26F8D4u;
    {
        const bool branch_taken_0x26f8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f8d4) {
            ctx->pc = 0x26F8A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f8a8;
        }
    }
    ctx->pc = 0x26F8DCu;
label_26f8dc:
    // 0x26f8dc: 0x0  nop
    ctx->pc = 0x26f8dcu;
    // NOP
    // 0x26f8e0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F8E0u;
    {
        const bool branch_taken_0x26f8e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8E0u;
            // 0x26f8e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8e0) {
            ctx->pc = 0x26F8F0u;
            goto label_26f8f0;
        }
    }
    ctx->pc = 0x26F8E8u;
    // 0x26f8e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F8E8u;
    {
        const bool branch_taken_0x26f8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f8e8) {
            ctx->pc = 0x26F8F8u;
            goto label_26f8f8;
        }
    }
    ctx->pc = 0x26F8F0u;
label_26f8f0:
    // 0x26f8f0: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x26f8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26f8f4: 0x0  nop
    ctx->pc = 0x26f8f4u;
    // NOP
label_26f8f8:
    // 0x26f8f8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F8F8u;
    {
        const bool branch_taken_0x26f8f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8F8u;
            // 0x26f8fc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8f8) {
            ctx->pc = 0x26F908u;
            goto label_26f908;
        }
    }
    ctx->pc = 0x26F900u;
    // 0x26f900: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26F900u;
    {
        const bool branch_taken_0x26f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F900u;
            // 0x26f904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f900) {
            ctx->pc = 0x26F964u;
            goto label_26f964;
        }
    }
    ctx->pc = 0x26F908u;
label_26f908:
    // 0x26f908: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26F908u;
    SET_GPR_U32(ctx, 31, 0x26F910u);
    ctx->pc = 0x26F90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F908u;
            // 0x26f90c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F910u; }
        if (ctx->pc != 0x26F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F910u; }
        if (ctx->pc != 0x26F910u) { return; }
    }
    ctx->pc = 0x26F910u;
label_26f910:
    // 0x26f910: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x26f910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x26f914: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26F914u;
    SET_GPR_U32(ctx, 31, 0x26F91Cu);
    ctx->pc = 0x26F918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F914u;
            // 0x26f918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F91Cu; }
        if (ctx->pc != 0x26F91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F91Cu; }
        if (ctx->pc != 0x26F91Cu) { return; }
    }
    ctx->pc = 0x26F91Cu;
label_26f91c:
    // 0x26f91c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F91Cu;
    {
        const bool branch_taken_0x26f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f91c) {
            ctx->pc = 0x26F94Cu;
            goto label_26f94c;
        }
    }
    ctx->pc = 0x26F924u;
label_26f924:
    // 0x26f924: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x26f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26f928: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26F928u;
    SET_GPR_U32(ctx, 31, 0x26F930u);
    ctx->pc = 0x26F92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F928u;
            // 0x26f92c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F930u; }
        if (ctx->pc != 0x26F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F930u; }
        if (ctx->pc != 0x26F930u) { return; }
    }
    ctx->pc = 0x26F930u;
label_26f930:
    // 0x26f930: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x26f930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x26f934: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F934u;
    SET_GPR_U32(ctx, 31, 0x26F93Cu);
    ctx->pc = 0x26F938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F934u;
            // 0x26f938: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F93Cu; }
        if (ctx->pc != 0x26F93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F93Cu; }
        if (ctx->pc != 0x26F93Cu) { return; }
    }
    ctx->pc = 0x26F93Cu;
label_26f93c:
    // 0x26f93c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F93Cu;
    {
        const bool branch_taken_0x26f93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f93c) {
            ctx->pc = 0x26F94Cu;
            goto label_26f94c;
        }
    }
    ctx->pc = 0x26F944u;
label_26f944:
    // 0x26f944: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26F944u;
    {
        const bool branch_taken_0x26f944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F944u;
            // 0x26f948: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f944) {
            ctx->pc = 0x26F968u;
            goto label_26f968;
        }
    }
    ctx->pc = 0x26F94Cu;
label_26f94c:
    // 0x26f94c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f950: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26f950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f954: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x26f954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x26f958: 0xc096798  jal         func_259E60
    ctx->pc = 0x26F958u;
    SET_GPR_U32(ctx, 31, 0x26F960u);
    ctx->pc = 0x26F95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F958u;
            // 0x26f95c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259E60u;
    if (runtime->hasFunction(0x259E60u)) {
        auto targetFn = runtime->lookupFunction(0x259E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F960u; }
        if (ctx->pc != 0x26F960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveRef__12CSceneCmrSeqFPfi_0x259e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F960u; }
        if (ctx->pc != 0x26F960u) { return; }
    }
    ctx->pc = 0x26F960u;
label_26f960:
    // 0x26f960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f964:
    // 0x26f964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26f968:
    // 0x26f968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f96c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F96Cu;
            // 0x26f970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F974u;
}
