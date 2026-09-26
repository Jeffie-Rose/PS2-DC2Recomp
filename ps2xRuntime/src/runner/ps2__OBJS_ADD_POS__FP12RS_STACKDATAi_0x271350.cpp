#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_ADD_POS__FP12RS_STACKDATAi
// Address: 0x271350 - 0x2714d8
void ps2__OBJS_ADD_POS__FP12RS_STACKDATAi_0x271350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_ADD_POS__FP12RS_STACKDATAi_0x271350");
#endif

    switch (ctx->pc) {
        case 0x2713a0u: goto label_2713a0;
        case 0x2713c4u: goto label_2713c4;
        case 0x271430u: goto label_271430;
        case 0x271440u: goto label_271440;
        case 0x27144cu: goto label_27144c;
        case 0x271460u: goto label_271460;
        case 0x271470u: goto label_271470;
        case 0x271484u: goto label_271484;
        case 0x27149cu: goto label_27149c;
        case 0x2714b8u: goto label_2714b8;
        default: break;
    }

    ctx->pc = 0x271350u;

    // 0x271350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x271350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x271354: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x271358: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x271358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27135c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271364: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x271364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27136c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27136cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271374: 0x12620037  beq         $s3, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x271374u;
    {
        const bool branch_taken_0x271374 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x271378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271374u;
            // 0x271378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271374) {
            ctx->pc = 0x271454u;
            goto label_271454;
        }
    }
    ctx->pc = 0x27137Cu;
    // 0x27137c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271380: 0x12620034  beq         $s3, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x271380u;
    {
        const bool branch_taken_0x271380 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x271380) {
            ctx->pc = 0x271454u;
            goto label_271454;
        }
    }
    ctx->pc = 0x271388u;
    // 0x271388: 0x12720003  beq         $s3, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271388u;
    {
        const bool branch_taken_0x271388 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x271388) {
            ctx->pc = 0x271398u;
            goto label_271398;
        }
    }
    ctx->pc = 0x271390u;
    // 0x271390: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x271390u;
    {
        const bool branch_taken_0x271390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271390u;
            // 0x271394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271390) {
            ctx->pc = 0x27148Cu;
            goto label_27148c;
        }
    }
    ctx->pc = 0x271398u;
label_271398:
    // 0x271398: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271398u;
    SET_GPR_U32(ctx, 31, 0x2713A0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2713A0u; }
        if (ctx->pc != 0x2713A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2713A0u; }
        if (ctx->pc != 0x2713A0u) { return; }
    }
    ctx->pc = 0x2713A0u;
label_2713a0:
    // 0x2713a0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2713a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2713a4: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x2713a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x2713a8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2713A8u;
    {
        const bool branch_taken_0x2713a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2713ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713A8u;
            // 0x2713ac: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713a8) {
            ctx->pc = 0x2713B8u;
            goto label_2713b8;
        }
    }
    ctx->pc = 0x2713B0u;
    // 0x2713b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2713B0u;
    {
        const bool branch_taken_0x2713b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713B0u;
            // 0x2713b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713b0) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x2713B8u;
label_2713b8:
    // 0x2713b8: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x2713b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x2713bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2713BCu;
    {
        const bool branch_taken_0x2713bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713BCu;
            // 0x2713c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713bc) {
            ctx->pc = 0x2713F0u;
            goto label_2713f0;
        }
    }
    ctx->pc = 0x2713C4u;
label_2713c4:
    // 0x2713c4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2713c8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2713C8u;
    {
        const bool branch_taken_0x2713c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2713c8) {
            ctx->pc = 0x2713FCu;
            goto label_2713fc;
        }
    }
    ctx->pc = 0x2713D0u;
    // 0x2713d0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x2713d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2713d4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2713D4u;
    {
        const bool branch_taken_0x2713d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2713d4) {
            ctx->pc = 0x2713E4u;
            goto label_2713e4;
        }
    }
    ctx->pc = 0x2713DCu;
    // 0x2713dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2713DCu;
    {
        const bool branch_taken_0x2713dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713DCu;
            // 0x2713e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713dc) {
            ctx->pc = 0x2713F0u;
            goto label_2713f0;
        }
    }
    ctx->pc = 0x2713E4u;
label_2713e4:
    // 0x2713e4: 0x0  nop
    ctx->pc = 0x2713e4u;
    // NOP
    // 0x2713e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2713E8u;
    {
        const bool branch_taken_0x2713e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2713E8u;
            // 0x2713ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713e8) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x2713F0u;
label_2713f0:
    // 0x2713f0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2713f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2713f4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2713F4u;
    {
        const bool branch_taken_0x2713f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2713f4) {
            ctx->pc = 0x2713C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2713c4;
        }
    }
    ctx->pc = 0x2713FCu;
label_2713fc:
    // 0x2713fc: 0x0  nop
    ctx->pc = 0x2713fcu;
    // NOP
    // 0x271400: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271400u;
    {
        const bool branch_taken_0x271400 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271400u;
            // 0x271404: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271400) {
            ctx->pc = 0x271410u;
            goto label_271410;
        }
    }
    ctx->pc = 0x271408u;
    // 0x271408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271408u;
    {
        const bool branch_taken_0x271408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271408) {
            ctx->pc = 0x271418u;
            goto label_271418;
        }
    }
    ctx->pc = 0x271410u;
label_271410:
    // 0x271410: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x271410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271414: 0x0  nop
    ctx->pc = 0x271414u;
    // NOP
label_271418:
    // 0x271418: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271418u;
    {
        const bool branch_taken_0x271418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27141Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271418u;
            // 0x27141c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271418) {
            ctx->pc = 0x271428u;
            goto label_271428;
        }
    }
    ctx->pc = 0x271420u;
    // 0x271420: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x271420u;
    {
        const bool branch_taken_0x271420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271420u;
            // 0x271424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271420) {
            ctx->pc = 0x2714BCu;
            goto label_2714bc;
        }
    }
    ctx->pc = 0x271428u;
label_271428:
    // 0x271428: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271428u;
    SET_GPR_U32(ctx, 31, 0x271430u);
    ctx->pc = 0x27142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271428u;
            // 0x27142c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271430u; }
        if (ctx->pc != 0x271430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271430u; }
        if (ctx->pc != 0x271430u) { return; }
    }
    ctx->pc = 0x271430u;
label_271430:
    // 0x271430: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271434: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x271434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x271438: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x271438u;
    SET_GPR_U32(ctx, 31, 0x271440u);
    ctx->pc = 0x27143Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271438u;
            // 0x27143c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271440u; }
        if (ctx->pc != 0x271440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271440u; }
        if (ctx->pc != 0x271440u) { return; }
    }
    ctx->pc = 0x271440u;
label_271440:
    // 0x271440: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x271440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x271444: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271444u;
    SET_GPR_U32(ctx, 31, 0x27144Cu);
    ctx->pc = 0x271448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271444u;
            // 0x271448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27144Cu; }
        if (ctx->pc != 0x27144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27144Cu; }
        if (ctx->pc != 0x27144Cu) { return; }
    }
    ctx->pc = 0x27144Cu;
label_27144c:
    // 0x27144c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27144Cu;
    {
        const bool branch_taken_0x27144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27144Cu;
            // 0x271450: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27144c) {
            ctx->pc = 0x271494u;
            goto label_271494;
        }
    }
    ctx->pc = 0x271454u;
label_271454:
    // 0x271454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271458: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271458u;
    SET_GPR_U32(ctx, 31, 0x271460u);
    ctx->pc = 0x27145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271458u;
            // 0x27145c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271460u; }
        if (ctx->pc != 0x271460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271460u; }
        if (ctx->pc != 0x271460u) { return; }
    }
    ctx->pc = 0x271460u;
label_271460:
    // 0x271460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271464: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x271464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x271468: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x271468u;
    SET_GPR_U32(ctx, 31, 0x271470u);
    ctx->pc = 0x27146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271468u;
            // 0x27146c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271470u; }
        if (ctx->pc != 0x271470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271470u; }
        if (ctx->pc != 0x271470u) { return; }
    }
    ctx->pc = 0x271470u;
label_271470:
    // 0x271470: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x271470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x271474: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271474u;
    {
        const bool branch_taken_0x271474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271474u;
            // 0x271478: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271474) {
            ctx->pc = 0x271494u;
            goto label_271494;
        }
    }
    ctx->pc = 0x27147Cu;
    // 0x27147c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27147Cu;
    SET_GPR_U32(ctx, 31, 0x271484u);
    ctx->pc = 0x271480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27147Cu;
            // 0x271480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271484u; }
        if (ctx->pc != 0x271484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271484u; }
        if (ctx->pc != 0x271484u) { return; }
    }
    ctx->pc = 0x271484u;
label_271484:
    // 0x271484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271484u;
    {
        const bool branch_taken_0x271484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271484u;
            // 0x271488: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271484) {
            ctx->pc = 0x271494u;
            goto label_271494;
        }
    }
    ctx->pc = 0x27148Cu;
label_27148c:
    // 0x27148c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27148Cu;
    {
        const bool branch_taken_0x27148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27148Cu;
            // 0x271490: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27148c) {
            ctx->pc = 0x2714C0u;
            goto label_2714c0;
        }
    }
    ctx->pc = 0x271494u;
label_271494:
    // 0x271494: 0xc098a44  jal         func_262910
    ctx->pc = 0x271494u;
    SET_GPR_U32(ctx, 31, 0x27149Cu);
    ctx->pc = 0x271498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271494u;
            // 0x271498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27149Cu; }
        if (ctx->pc != 0x27149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27149Cu; }
        if (ctx->pc != 0x27149Cu) { return; }
    }
    ctx->pc = 0x27149Cu;
label_27149c:
    // 0x27149c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27149Cu;
    {
        const bool branch_taken_0x27149c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2714A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27149Cu;
            // 0x2714a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27149c) {
            ctx->pc = 0x2714ACu;
            goto label_2714ac;
        }
    }
    ctx->pc = 0x2714A4u;
    // 0x2714a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2714A4u;
    {
        const bool branch_taken_0x2714a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2714A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2714A4u;
            // 0x2714a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714a4) {
            ctx->pc = 0x2714BCu;
            goto label_2714bc;
        }
    }
    ctx->pc = 0x2714ACu;
label_2714ac:
    // 0x2714ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2714acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714b0: 0xc09731c  jal         func_25CC70
    ctx->pc = 0x2714B0u;
    SET_GPR_U32(ctx, 31, 0x2714B8u);
    ctx->pc = 0x2714B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2714B0u;
            // 0x2714b4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CC70u;
    if (runtime->hasFunction(0x25CC70u)) {
        auto targetFn = runtime->lookupFunction(0x25CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714B8u; }
        if (ctx->pc != 0x2714B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPos__12CSceneObjSeqFPfi_0x25cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2714B8u; }
        if (ctx->pc != 0x2714B8u) { return; }
    }
    ctx->pc = 0x2714B8u;
label_2714b8:
    // 0x2714b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2714b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2714bc:
    // 0x2714bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2714bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2714c0:
    // 0x2714c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2714c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2714c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2714c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2714c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2714c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2714cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2714ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2714d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2714D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2714D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2714D0u;
            // 0x2714d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2714D8u;
}
