#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init_LightBoll__18CMapEffectsManegerFP9mgCMemoryi
// Address: 0x1c4770 - 0x1c48cc
void Init_LightBoll__18CMapEffectsManegerFP9mgCMemoryi_0x1c4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_LightBoll__18CMapEffectsManegerFP9mgCMemoryi_0x1c4770");
#endif

    switch (ctx->pc) {
        case 0x1c47c0u: goto label_1c47c0;
        case 0x1c47d8u: goto label_1c47d8;
        case 0x1c47f0u: goto label_1c47f0;
        case 0x1c4810u: goto label_1c4810;
        case 0x1c4894u: goto label_1c4894;
        default: break;
    }

    ctx->pc = 0x1c4770u;

    // 0x1c4770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4774: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1c4774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c4778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c477c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1c477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c4780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4784: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c4784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c478c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1c478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1c4790: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c4790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4798: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4798u;
    {
        const bool branch_taken_0x1c4798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4798u;
            // 0x1c479c: 0xac900008  sw          $s0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4798) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C47A0u;
    // 0x1c47a0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1c47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1c47a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C47A4u;
    {
        const bool branch_taken_0x1c47a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47A4u;
            // 0x1c47a8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47a4) {
            ctx->pc = 0x1C47B0u;
            goto label_1c47b0;
        }
    }
    ctx->pc = 0x1C47ACu;
label_1c47ac:
    // 0x1c47ac: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1c47acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1c47b0:
    // 0x1c47b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1c47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c47b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c47b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47b8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C47B8u;
    SET_GPR_U32(ctx, 31, 0x1C47C0u);
    ctx->pc = 0x1C47BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47B8u;
            // 0x1c47bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47C0u; }
        if (ctx->pc != 0x1C47C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47C0u; }
        if (ctx->pc != 0x1C47C0u) { return; }
    }
    ctx->pc = 0x1C47C0u;
label_1c47c0:
    // 0x1c47c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c47c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c47c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47c8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1c47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c47cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c47d0: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C47D0u;
    SET_GPR_U32(ctx, 31, 0x1C47D8u);
    ctx->pc = 0x1C47D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47D0u;
            // 0x1c47d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47D8u; }
        if (ctx->pc != 0x1C47D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47D8u; }
        if (ctx->pc != 0x1C47D8u) { return; }
    }
    ctx->pc = 0x1C47D8u;
label_1c47d8:
    // 0x1c47d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c47d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c47dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c47e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47e4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x1c47e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c47e8: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1C47E8u;
    SET_GPR_U32(ctx, 31, 0x1C47F0u);
    ctx->pc = 0x1C47ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47E8u;
            // 0x1c47ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47F0u; }
        if (ctx->pc != 0x1C47F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C47F0u; }
        if (ctx->pc != 0x1C47F0u) { return; }
    }
    ctx->pc = 0x1C47F0u;
label_1c47f0:
    // 0x1c47f0: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1c47f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c47f4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c47f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c47f8: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C47F8u;
    {
        const bool branch_taken_0x1c47f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47F8u;
            // 0x1c47fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47f8) {
            ctx->pc = 0x1C48B4u;
            goto label_1c48b4;
        }
    }
    ctx->pc = 0x1C4800u;
    // 0x1c4800: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x1c4800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c4804: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C4804u;
    {
        const bool branch_taken_0x1c4804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4804u;
            // 0x1c4808: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4804) {
            ctx->pc = 0x1C4880u;
            goto label_1c4880;
        }
    }
    ctx->pc = 0x1C480Cu;
    // 0x1c480c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c480cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4810:
    // 0x1c4810: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c4810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4814: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c4814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c4818: 0x66202a  slt         $a0, $v1, $a2
    ctx->pc = 0x1c4818u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c481c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c481cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c4820: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x1c4820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x1c4824: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c4824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4828: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c4828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c482c: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x1c482cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x1c4830: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c4830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4834: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c4838: 0xaca000d8  sw          $zero, 0xD8($a1)
    ctx->pc = 0x1c4838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 216), GPR_U32(ctx, 0));
    // 0x1c483c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4840: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c4840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c4844: 0xaca00128  sw          $zero, 0x128($a1)
    ctx->pc = 0x1c4844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
    // 0x1c4848: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c4848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c484c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c484cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c4850: 0xaca00178  sw          $zero, 0x178($a1)
    ctx->pc = 0x1c4850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 376), GPR_U32(ctx, 0));
    // 0x1c4854: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c4854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4858: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c4858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c485c: 0xaca001c8  sw          $zero, 0x1C8($a1)
    ctx->pc = 0x1c485cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 456), GPR_U32(ctx, 0));
    // 0x1c4860: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c4860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4864: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c4864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c4868: 0xaca00218  sw          $zero, 0x218($a1)
    ctx->pc = 0x1c4868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 536), GPR_U32(ctx, 0));
    // 0x1c486c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4870: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c4870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c4874: 0xaca00268  sw          $zero, 0x268($a1)
    ctx->pc = 0x1c4874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 616), GPR_U32(ctx, 0));
    // 0x1c4878: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C4878u;
    {
        const bool branch_taken_0x1c4878 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C487Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4878u;
            // 0x1c487c: 0x24e70280  addiu       $a3, $a3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4878) {
            ctx->pc = 0x1C4810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4810;
        }
    }
    ctx->pc = 0x1C4880u;
label_1c4880:
    // 0x1c4880: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x1c4880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c4884: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4884u;
    {
        const bool branch_taken_0x1c4884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4884u;
            // 0x1c4888: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4884) {
            ctx->pc = 0x1C48B4u;
            goto label_1c48b4;
        }
    }
    ctx->pc = 0x1C488Cu;
    // 0x1c488c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c4890: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1c4890u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1c4894:
    // 0x1c4894: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1c4894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4898: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c4898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c489c: 0x70202a  slt         $a0, $v1, $s0
    ctx->pc = 0x1c489cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c48a0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1c48a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c48a4: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x1c48a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x1c48a8: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x1c48a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x1c48ac: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C48ACu;
    {
        const bool branch_taken_0x1c48ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c48ac) {
            ctx->pc = 0x1C4894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4894;
        }
    }
    ctx->pc = 0x1C48B4u;
label_1c48b4:
    // 0x1c48b4: 0x0  nop
    ctx->pc = 0x1c48b4u;
    // NOP
    // 0x1c48b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c48b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c48bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c48bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c48c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c48c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c48c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48C4u;
            // 0x1c48c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C48CCu;
}
