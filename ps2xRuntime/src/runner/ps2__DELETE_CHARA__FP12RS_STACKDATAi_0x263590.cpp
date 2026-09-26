#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DELETE_CHARA__FP12RS_STACKDATAi
// Address: 0x263590 - 0x263690
void ps2__DELETE_CHARA__FP12RS_STACKDATAi_0x263590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DELETE_CHARA__FP12RS_STACKDATAi_0x263590");
#endif

    switch (ctx->pc) {
        case 0x2635b8u: goto label_2635b8;
        case 0x2635d0u: goto label_2635d0;
        case 0x2635e0u: goto label_2635e0;
        case 0x2635fcu: goto label_2635fc;
        case 0x263608u: goto label_263608;
        case 0x263620u: goto label_263620;
        default: break;
    }

    ctx->pc = 0x263590u;

    // 0x263590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x263590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x263594: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x263594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x263598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x263598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26359c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2635a0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2635a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2635a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2635a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2635a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2635a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2635acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2635b0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2635B0u;
    SET_GPR_U32(ctx, 31, 0x2635B8u);
    ctx->pc = 0x2635B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2635B0u;
            // 0x2635b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635B8u; }
        if (ctx->pc != 0x2635B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635B8u; }
        if (ctx->pc != 0x2635B8u) { return; }
    }
    ctx->pc = 0x2635B8u;
label_2635b8:
    // 0x2635b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2635b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635bc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2635bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2635c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2635C0u;
    {
        const bool branch_taken_0x2635c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2635C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635C0u;
            // 0x2635c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635c0) {
            ctx->pc = 0x2635D4u;
            goto label_2635d4;
        }
    }
    ctx->pc = 0x2635C8u;
    // 0x2635c8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2635C8u;
    SET_GPR_U32(ctx, 31, 0x2635D0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635D0u; }
        if (ctx->pc != 0x2635D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635D0u; }
        if (ctx->pc != 0x2635D0u) { return; }
    }
    ctx->pc = 0x2635D0u;
label_2635d0:
    // 0x2635d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2635d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2635d4:
    // 0x2635d4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2635d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2635d8: 0xc0a1240  jal         func_284900
    ctx->pc = 0x2635D8u;
    SET_GPR_U32(ctx, 31, 0x2635E0u);
    ctx->pc = 0x2635DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2635D8u;
            // 0x2635dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635E0u; }
        if (ctx->pc != 0x2635E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635E0u; }
        if (ctx->pc != 0x2635E0u) { return; }
    }
    ctx->pc = 0x2635E0u;
label_2635e0:
    // 0x2635e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2635E0u;
    {
        const bool branch_taken_0x2635e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2635E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635E0u;
            // 0x2635e4: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635e0) {
            ctx->pc = 0x2635FCu;
            goto label_2635fc;
        }
    }
    ctx->pc = 0x2635E8u;
    // 0x2635e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2635e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2635ec: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2635ECu;
    {
        const bool branch_taken_0x2635ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2635F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635ECu;
            // 0x2635f0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635ec) {
            ctx->pc = 0x2635FCu;
            goto label_2635fc;
        }
    }
    ctx->pc = 0x2635F4u;
    // 0x2635f4: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2635F4u;
    SET_GPR_U32(ctx, 31, 0x2635FCu);
    ctx->pc = 0x2635F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2635F4u;
            // 0x2635f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635FCu; }
        if (ctx->pc != 0x2635FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635FCu; }
        if (ctx->pc != 0x2635FCu) { return; }
    }
    ctx->pc = 0x2635FCu;
label_2635fc:
    // 0x2635fc: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2635fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263600: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x263600u;
    SET_GPR_U32(ctx, 31, 0x263608u);
    ctx->pc = 0x263604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263600u;
            // 0x263604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263608u; }
        if (ctx->pc != 0x263608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263608u; }
        if (ctx->pc != 0x263608u) { return; }
    }
    ctx->pc = 0x263608u;
label_263608:
    // 0x263608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x263608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26360c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26360cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263610: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x263610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x263614: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x263614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26361c: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x26361cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_263620:
    // 0x263620: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x263620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x263624: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x263624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x263628: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x263628u;
    {
        const bool branch_taken_0x263628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263628) {
            ctx->pc = 0x26365Cu;
            goto label_26365c;
        }
    }
    ctx->pc = 0x263630u;
    // 0x263630: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x263630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x263634: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263634u;
    {
        const bool branch_taken_0x263634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x263638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263634u;
            // 0x263638: 0x25090004  addiu       $t1, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263634) {
            ctx->pc = 0x26365Cu;
            goto label_26365c;
        }
    }
    ctx->pc = 0x26363Cu;
    // 0x26363c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x26363cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x263640: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x263640u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x263644: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x263644u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x263648: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x263648u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x26364c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x26364cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x263650: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x263650u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x263654: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x263654u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x263658: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x263658u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_26365c:
    // 0x26365c: 0x0  nop
    ctx->pc = 0x26365cu;
    // NOP
    // 0x263660: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x263660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x263664: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x263664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x263668: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x263668u;
    {
        const bool branch_taken_0x263668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26366Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263668u;
            // 0x26366c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263668) {
            ctx->pc = 0x263620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263620;
        }
    }
    ctx->pc = 0x263670u;
    // 0x263670: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x263670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x263678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26367c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26367cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263688: 0x3e00008  jr          $ra
    ctx->pc = 0x263688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263688u;
            // 0x26368c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263690u;
}
