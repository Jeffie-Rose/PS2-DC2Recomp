#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_ROTATION__FP12RS_STACKDATAi
// Address: 0x271700 - 0x271850
void ps2__OBJS_ROTATION__FP12RS_STACKDATAi_0x271700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_ROTATION__FP12RS_STACKDATAi_0x271700");
#endif

    switch (ctx->pc) {
        case 0x271734u: goto label_271734;
        case 0x271758u: goto label_271758;
        case 0x2717c0u: goto label_2717c0;
        case 0x2717d0u: goto label_2717d0;
        case 0x2717dcu: goto label_2717dc;
        case 0x2717ecu: goto label_2717ec;
        case 0x2717fcu: goto label_2717fc;
        case 0x271808u: goto label_271808;
        case 0x271820u: goto label_271820;
        case 0x271838u: goto label_271838;
        default: break;
    }

    ctx->pc = 0x271700u;

    // 0x271700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x271700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x271704: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x271704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x271708: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27170c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271710: 0x10a20034  beq         $a1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x271710u;
    {
        const bool branch_taken_0x271710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x271714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271710u;
            // 0x271714: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271710) {
            ctx->pc = 0x2717E4u;
            goto label_2717e4;
        }
    }
    ctx->pc = 0x271718u;
    // 0x271718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27171c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27171Cu;
    {
        const bool branch_taken_0x27171c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27171c) {
            ctx->pc = 0x27172Cu;
            goto label_27172c;
        }
    }
    ctx->pc = 0x271724u;
    // 0x271724: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x271724u;
    {
        const bool branch_taken_0x271724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271724u;
            // 0x271728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271724) {
            ctx->pc = 0x271810u;
            goto label_271810;
        }
    }
    ctx->pc = 0x27172Cu;
label_27172c:
    // 0x27172c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27172Cu;
    SET_GPR_U32(ctx, 31, 0x271734u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271734u; }
        if (ctx->pc != 0x271734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271734u; }
        if (ctx->pc != 0x271734u) { return; }
    }
    ctx->pc = 0x271734u;
label_271734:
    // 0x271734: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x271734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x271738: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x271738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x27173c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27173Cu;
    {
        const bool branch_taken_0x27173c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27173Cu;
            // 0x271740: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27173c) {
            ctx->pc = 0x27174Cu;
            goto label_27174c;
        }
    }
    ctx->pc = 0x271744u;
    // 0x271744: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x271744u;
    {
        const bool branch_taken_0x271744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271744u;
            // 0x271748: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271744) {
            ctx->pc = 0x2717A8u;
            goto label_2717a8;
        }
    }
    ctx->pc = 0x27174Cu;
label_27174c:
    // 0x27174c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x27174cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x271750: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271750u;
    {
        const bool branch_taken_0x271750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271750u;
            // 0x271754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271750) {
            ctx->pc = 0x271780u;
            goto label_271780;
        }
    }
    ctx->pc = 0x271758u;
label_271758:
    // 0x271758: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x271758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27175c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27175Cu;
    {
        const bool branch_taken_0x27175c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27175c) {
            ctx->pc = 0x27178Cu;
            goto label_27178c;
        }
    }
    ctx->pc = 0x271764u;
    // 0x271764: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x271764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x271768: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271768u;
    {
        const bool branch_taken_0x271768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x271768) {
            ctx->pc = 0x271778u;
            goto label_271778;
        }
    }
    ctx->pc = 0x271770u;
    // 0x271770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271770u;
    {
        const bool branch_taken_0x271770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271770u;
            // 0x271774: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271770) {
            ctx->pc = 0x271780u;
            goto label_271780;
        }
    }
    ctx->pc = 0x271778u;
label_271778:
    // 0x271778: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271778u;
    {
        const bool branch_taken_0x271778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271778u;
            // 0x27177c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271778) {
            ctx->pc = 0x2717A8u;
            goto label_2717a8;
        }
    }
    ctx->pc = 0x271780u;
label_271780:
    // 0x271780: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x271780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271784: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x271784u;
    {
        const bool branch_taken_0x271784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271784) {
            ctx->pc = 0x271758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271758;
        }
    }
    ctx->pc = 0x27178Cu;
label_27178c:
    // 0x27178c: 0x0  nop
    ctx->pc = 0x27178cu;
    // NOP
    // 0x271790: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271790u;
    {
        const bool branch_taken_0x271790 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271790u;
            // 0x271794: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271790) {
            ctx->pc = 0x2717A0u;
            goto label_2717a0;
        }
    }
    ctx->pc = 0x271798u;
    // 0x271798: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271798u;
    {
        const bool branch_taken_0x271798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271798) {
            ctx->pc = 0x2717A8u;
            goto label_2717a8;
        }
    }
    ctx->pc = 0x2717A0u;
label_2717a0:
    // 0x2717a0: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x2717a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2717a4: 0x0  nop
    ctx->pc = 0x2717a4u;
    // NOP
label_2717a8:
    // 0x2717a8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2717A8u;
    {
        const bool branch_taken_0x2717a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2717ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717A8u;
            // 0x2717ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717a8) {
            ctx->pc = 0x2717B8u;
            goto label_2717b8;
        }
    }
    ctx->pc = 0x2717B0u;
    // 0x2717b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2717B0u;
    {
        const bool branch_taken_0x2717b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2717B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717B0u;
            // 0x2717b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717b0) {
            ctx->pc = 0x27183Cu;
            goto label_27183c;
        }
    }
    ctx->pc = 0x2717B8u;
label_2717b8:
    // 0x2717b8: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x2717B8u;
    SET_GPR_U32(ctx, 31, 0x2717C0u);
    ctx->pc = 0x2717BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2717B8u;
            // 0x2717bc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717C0u; }
        if (ctx->pc != 0x2717C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717C0u; }
        if (ctx->pc != 0x2717C0u) { return; }
    }
    ctx->pc = 0x2717C0u;
label_2717c0:
    // 0x2717c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2717c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2717c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2717c8: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x2717C8u;
    SET_GPR_U32(ctx, 31, 0x2717D0u);
    ctx->pc = 0x2717CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2717C8u;
            // 0x2717cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717D0u; }
        if (ctx->pc != 0x2717D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717D0u; }
        if (ctx->pc != 0x2717D0u) { return; }
    }
    ctx->pc = 0x2717D0u;
label_2717d0:
    // 0x2717d0: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x2717d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2717d4: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x2717D4u;
    SET_GPR_U32(ctx, 31, 0x2717DCu);
    ctx->pc = 0x2717D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2717D4u;
            // 0x2717d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717DCu; }
        if (ctx->pc != 0x2717DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717DCu; }
        if (ctx->pc != 0x2717DCu) { return; }
    }
    ctx->pc = 0x2717DCu;
label_2717dc:
    // 0x2717dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2717DCu;
    {
        const bool branch_taken_0x2717dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2717E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2717DCu;
            // 0x2717e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717dc) {
            ctx->pc = 0x271818u;
            goto label_271818;
        }
    }
    ctx->pc = 0x2717E4u;
label_2717e4:
    // 0x2717e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2717E4u;
    SET_GPR_U32(ctx, 31, 0x2717ECu);
    ctx->pc = 0x2717E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2717E4u;
            // 0x2717e8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717ECu; }
        if (ctx->pc != 0x2717ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717ECu; }
        if (ctx->pc != 0x2717ECu) { return; }
    }
    ctx->pc = 0x2717ECu;
label_2717ec:
    // 0x2717ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2717ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2717f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2717f4: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2717F4u;
    SET_GPR_U32(ctx, 31, 0x2717FCu);
    ctx->pc = 0x2717F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2717F4u;
            // 0x2717f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717FCu; }
        if (ctx->pc != 0x2717FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2717FCu; }
        if (ctx->pc != 0x2717FCu) { return; }
    }
    ctx->pc = 0x2717FCu;
label_2717fc:
    // 0x2717fc: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x2717fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x271800: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271800u;
    SET_GPR_U32(ctx, 31, 0x271808u);
    ctx->pc = 0x271804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271800u;
            // 0x271804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271808u; }
        if (ctx->pc != 0x271808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271808u; }
        if (ctx->pc != 0x271808u) { return; }
    }
    ctx->pc = 0x271808u;
label_271808:
    // 0x271808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271808u;
    {
        const bool branch_taken_0x271808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27180Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271808u;
            // 0x27180c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271808) {
            ctx->pc = 0x271818u;
            goto label_271818;
        }
    }
    ctx->pc = 0x271810u;
label_271810:
    // 0x271810: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271810u;
    {
        const bool branch_taken_0x271810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271810u;
            // 0x271814: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271810) {
            ctx->pc = 0x271840u;
            goto label_271840;
        }
    }
    ctx->pc = 0x271818u;
label_271818:
    // 0x271818: 0xc098a44  jal         func_262910
    ctx->pc = 0x271818u;
    SET_GPR_U32(ctx, 31, 0x271820u);
    ctx->pc = 0x27181Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271818u;
            // 0x27181c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271820u; }
        if (ctx->pc != 0x271820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271820u; }
        if (ctx->pc != 0x271820u) { return; }
    }
    ctx->pc = 0x271820u;
label_271820:
    // 0x271820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271820u;
    {
        const bool branch_taken_0x271820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271820u;
            // 0x271824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271820) {
            ctx->pc = 0x271830u;
            goto label_271830;
        }
    }
    ctx->pc = 0x271828u;
    // 0x271828: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271828u;
    {
        const bool branch_taken_0x271828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27182Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271828u;
            // 0x27182c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271828) {
            ctx->pc = 0x27183Cu;
            goto label_27183c;
        }
    }
    ctx->pc = 0x271830u;
label_271830:
    // 0x271830: 0xc097368  jal         func_25CDA0
    ctx->pc = 0x271830u;
    SET_GPR_U32(ctx, 31, 0x271838u);
    ctx->pc = 0x271834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271830u;
            // 0x271834: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CDA0u;
    if (runtime->hasFunction(0x25CDA0u)) {
        auto targetFn = runtime->lookupFunction(0x25CDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271838u; }
        if (ctx->pc != 0x271838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotation__12CSceneObjSeqFPfi_0x25cda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271838u; }
        if (ctx->pc != 0x271838u) { return; }
    }
    ctx->pc = 0x271838u;
label_271838:
    // 0x271838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27183c:
    // 0x27183c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_271840:
    // 0x271840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271848: 0x3e00008  jr          $ra
    ctx->pc = 0x271848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27184Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271848u;
            // 0x27184c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271850u;
}
