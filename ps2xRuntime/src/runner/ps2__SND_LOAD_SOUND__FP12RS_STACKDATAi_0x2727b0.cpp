#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_LOAD_SOUND__FP12RS_STACKDATAi
// Address: 0x2727b0 - 0x272944
void ps2__SND_LOAD_SOUND__FP12RS_STACKDATAi_0x2727b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_LOAD_SOUND__FP12RS_STACKDATAi_0x2727b0");
#endif

    switch (ctx->pc) {
        case 0x2727fcu: goto label_2727fc;
        case 0x272850u: goto label_272850;
        case 0x272860u: goto label_272860;
        case 0x272880u: goto label_272880;
        case 0x2728d0u: goto label_2728d0;
        case 0x2728ecu: goto label_2728ec;
        case 0x2728fcu: goto label_2728fc;
        case 0x272908u: goto label_272908;
        default: break;
    }

    ctx->pc = 0x2727b0u;

    // 0x2727b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2727b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2727b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2727b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2727b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2727b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2727bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2727bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2727c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2727c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2727c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2727c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2727c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2727c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2727cc: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2727CCu;
    {
        const bool branch_taken_0x2727cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2727D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727CCu;
            // 0x2727d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727cc) {
            ctx->pc = 0x2727F4u;
            goto label_2727f4;
        }
    }
    ctx->pc = 0x2727D4u;
    // 0x2727d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2727d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2727d8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2727D8u;
    {
        const bool branch_taken_0x2727d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2727DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727D8u;
            // 0x2727dc: 0x3c1101ef  lui         $s1, 0x1EF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)495 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727d8) {
            ctx->pc = 0x2727E8u;
            goto label_2727e8;
        }
    }
    ctx->pc = 0x2727E0u;
    // 0x2727e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2727E0u;
    {
        const bool branch_taken_0x2727e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727E0u;
            // 0x2727e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727e0) {
            ctx->pc = 0x272820u;
            goto label_272820;
        }
    }
    ctx->pc = 0x2727E8u;
label_2727e8:
    // 0x2727e8: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2727e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2727ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2727ECu;
    {
        const bool branch_taken_0x2727ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2727ECu;
            // 0x2727f0: 0x263183a0  addiu       $s1, $s1, -0x7C60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727ec) {
            ctx->pc = 0x272828u;
            goto label_272828;
        }
    }
    ctx->pc = 0x2727F4u;
label_2727f4:
    // 0x2727f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2727F4u;
    SET_GPR_U32(ctx, 31, 0x2727FCu);
    ctx->pc = 0x2727F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2727F4u;
            // 0x2727f8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2727FCu; }
        if (ctx->pc != 0x2727FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2727FCu; }
        if (ctx->pc != 0x2727FCu) { return; }
    }
    ctx->pc = 0x2727FCu;
label_2727fc:
    // 0x2727fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2727fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272800: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x272800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x272804: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272804u;
    {
        const bool branch_taken_0x272804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x272808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272804u;
            // 0x272808: 0x3c1101ef  lui         $s1, 0x1EF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)495 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272804) {
            ctx->pc = 0x272818u;
            goto label_272818;
        }
    }
    ctx->pc = 0x27280Cu;
    // 0x27280c: 0x3c1101ef  lui         $s1, 0x1EF
    ctx->pc = 0x27280cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)495 << 16));
    // 0x272810: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x272810u;
    {
        const bool branch_taken_0x272810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272810u;
            // 0x272814: 0x263197e0  addiu       $s1, $s1, -0x6820 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272810) {
            ctx->pc = 0x272828u;
            goto label_272828;
        }
    }
    ctx->pc = 0x272818u;
label_272818:
    // 0x272818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272818u;
    {
        const bool branch_taken_0x272818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272818u;
            // 0x27281c: 0x263183a0  addiu       $s1, $s1, -0x7C60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272818) {
            ctx->pc = 0x272828u;
            goto label_272828;
        }
    }
    ctx->pc = 0x272820u;
label_272820:
    // 0x272820: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x272820u;
    {
        const bool branch_taken_0x272820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272820u;
            // 0x272824: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272820) {
            ctx->pc = 0x27292Cu;
            goto label_27292c;
        }
    }
    ctx->pc = 0x272828u;
label_272828:
    // 0x272828: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x272828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27282c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272830: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x272830u;
    {
        const bool branch_taken_0x272830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x272834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272830u;
            // 0x272834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272830) {
            ctx->pc = 0x272878u;
            goto label_272878;
        }
    }
    ctx->pc = 0x272838u;
    // 0x272838: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272838u;
    {
        const bool branch_taken_0x272838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272838u;
            // 0x27283c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272838) {
            ctx->pc = 0x272848u;
            goto label_272848;
        }
    }
    ctx->pc = 0x272840u;
    // 0x272840: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x272840u;
    {
        const bool branch_taken_0x272840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272840u;
            // 0x272844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272840) {
            ctx->pc = 0x272888u;
            goto label_272888;
        }
    }
    ctx->pc = 0x272848u;
label_272848:
    // 0x272848: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272848u;
    SET_GPR_U32(ctx, 31, 0x272850u);
    ctx->pc = 0x27284Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272848u;
            // 0x27284c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272850u; }
        if (ctx->pc != 0x272850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272850u; }
        if (ctx->pc != 0x272850u) { return; }
    }
    ctx->pc = 0x272850u;
label_272850:
    // 0x272850: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x272850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x272854: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272858: 0xc0a9b3c  jal         func_2A6CF0
    ctx->pc = 0x272858u;
    SET_GPR_U32(ctx, 31, 0x272860u);
    ctx->pc = 0x27285Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272858u;
            // 0x27285c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CF0u;
    if (runtime->hasFunction(0x2A6CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272860u; }
        if (ctx->pc != 0x272860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefEventSeFile__6CSceneFiPc_0x2a6cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272860u; }
        if (ctx->pc != 0x272860u) { return; }
    }
    ctx->pc = 0x272860u;
label_272860:
    // 0x272860: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272860u;
    {
        const bool branch_taken_0x272860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272860u;
            // 0x272864: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272860) {
            ctx->pc = 0x272870u;
            goto label_272870;
        }
    }
    ctx->pc = 0x272868u;
    // 0x272868: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x272868u;
    {
        const bool branch_taken_0x272868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272868u;
            // 0x27286c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272868) {
            ctx->pc = 0x272928u;
            goto label_272928;
        }
    }
    ctx->pc = 0x272870u;
label_272870:
    // 0x272870: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x272870u;
    {
        const bool branch_taken_0x272870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272870) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x272878u;
label_272878:
    // 0x272878: 0xc097e48  jal         func_25F920
    ctx->pc = 0x272878u;
    SET_GPR_U32(ctx, 31, 0x272880u);
    ctx->pc = 0x27287Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272878u;
            // 0x27287c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272880u; }
        if (ctx->pc != 0x272880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272880u; }
        if (ctx->pc != 0x272880u) { return; }
    }
    ctx->pc = 0x272880u;
label_272880:
    // 0x272880: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272880u;
    {
        const bool branch_taken_0x272880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272880) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x272888u;
label_272888:
    // 0x272888: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x272888u;
    {
        const bool branch_taken_0x272888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272888) {
            ctx->pc = 0x272928u;
            goto label_272928;
        }
    }
    ctx->pc = 0x272890u;
label_272890:
    // 0x272890: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272890u;
    {
        const bool branch_taken_0x272890 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x272894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272890u;
            // 0x272894: 0x2a01000c  slti        $at, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272890) {
            ctx->pc = 0x2728A0u;
            goto label_2728a0;
        }
    }
    ctx->pc = 0x272898u;
    // 0x272898: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x272898u;
    {
        const bool branch_taken_0x272898 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x272898) {
            ctx->pc = 0x2728A8u;
            goto label_2728a8;
        }
    }
    ctx->pc = 0x2728A0u;
label_2728a0:
    // 0x2728a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2728A0u;
    {
        const bool branch_taken_0x2728a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2728A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2728A0u;
            // 0x2728a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728a0) {
            ctx->pc = 0x272928u;
            goto label_272928;
        }
    }
    ctx->pc = 0x2728A8u;
label_2728a8:
    // 0x2728a8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2728a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2728ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2728ACu;
    {
        const bool branch_taken_0x2728ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2728ac) {
            ctx->pc = 0x2728C0u;
            goto label_2728c0;
        }
    }
    ctx->pc = 0x2728B4u;
    // 0x2728b4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2728b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2728b8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2728B8u;
    {
        const bool branch_taken_0x2728b8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2728BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2728B8u;
            // 0x2728bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728b8) {
            ctx->pc = 0x2728C8u;
            goto label_2728c8;
        }
    }
    ctx->pc = 0x2728C0u;
label_2728c0:
    // 0x2728c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2728C0u;
    {
        const bool branch_taken_0x2728c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2728C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2728C0u;
            // 0x2728c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728c0) {
            ctx->pc = 0x272928u;
            goto label_272928;
        }
    }
    ctx->pc = 0x2728C8u;
label_2728c8:
    // 0x2728c8: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x2728C8u;
    SET_GPR_U32(ctx, 31, 0x2728D0u);
    ctx->pc = 0x2728CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2728C8u;
            // 0x2728cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2728D0u; }
        if (ctx->pc != 0x2728D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2728D0u; }
        if (ctx->pc != 0x2728D0u) { return; }
    }
    ctx->pc = 0x2728D0u;
label_2728d0:
    // 0x2728d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2728d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728d4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2728D4u;
    {
        const bool branch_taken_0x2728d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2728D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2728D4u;
            // 0x2728d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728d4) {
            ctx->pc = 0x2728E4u;
            goto label_2728e4;
        }
    }
    ctx->pc = 0x2728DCu;
    // 0x2728dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2728DCu;
    {
        const bool branch_taken_0x2728dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2728E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2728DCu;
            // 0x2728e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728dc) {
            ctx->pc = 0x272928u;
            goto label_272928;
        }
    }
    ctx->pc = 0x2728E4u;
label_2728e4:
    // 0x2728e4: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2728E4u;
    SET_GPR_U32(ctx, 31, 0x2728ECu);
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2728ECu; }
        if (ctx->pc != 0x2728ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2728ECu; }
        if (ctx->pc != 0x2728ECu) { return; }
    }
    ctx->pc = 0x2728ECu;
label_2728ec:
    // 0x2728ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2728ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2728f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728f4: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x2728F4u;
    SET_GPR_U32(ctx, 31, 0x2728FCu);
    ctx->pc = 0x2728F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2728F4u;
            // 0x2728f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2728FCu; }
        if (ctx->pc != 0x2728FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2728FCu; }
        if (ctx->pc != 0x2728FCu) { return; }
    }
    ctx->pc = 0x2728FCu;
label_2728fc:
    // 0x2728fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2728fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272900: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x272900u;
    SET_GPR_U32(ctx, 31, 0x272908u);
    ctx->pc = 0x272904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272900u;
            // 0x272904: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272908u; }
        if (ctx->pc != 0x272908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272908u; }
        if (ctx->pc != 0x272908u) { return; }
    }
    ctx->pc = 0x272908u;
label_272908:
    // 0x272908: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x272908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x27290c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x27290cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x272910: 0x2463e524  addiu       $v1, $v1, -0x1ADC
    ctx->pc = 0x272910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960420));
    // 0x272914: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x272914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x272918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x272918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27291c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27291cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x272920: 0xac22e554  sw          $v0, -0x1AAC($at)
    ctx->pc = 0x272920u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960468), GPR_U32(ctx, 2));
    // 0x272924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272928:
    // 0x272928: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x272928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27292c:
    // 0x27292c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27292cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27293c: 0x3e00008  jr          $ra
    ctx->pc = 0x27293Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27293Cu;
            // 0x272940: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272944u;
}
