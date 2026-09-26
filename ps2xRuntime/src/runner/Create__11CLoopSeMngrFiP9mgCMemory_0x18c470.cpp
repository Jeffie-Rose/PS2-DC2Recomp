#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Create__11CLoopSeMngrFiP9mgCMemory
// Address: 0x18c470 - 0x18c528
void Create__11CLoopSeMngrFiP9mgCMemory_0x18c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__11CLoopSeMngrFiP9mgCMemory_0x18c470");
#endif

    switch (ctx->pc) {
        case 0x18c4c0u: goto label_18c4c0;
        case 0x18c4d8u: goto label_18c4d8;
        case 0x18c4f4u: goto label_18c4f4;
        default: break;
    }

    ctx->pc = 0x18c470u;

    // 0x18c470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18c480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c484: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C484u;
    {
        const bool branch_taken_0x18c484 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C484u;
            // 0x18c488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c484) {
            ctx->pc = 0x18C494u;
            goto label_18c494;
        }
    }
    ctx->pc = 0x18C48Cu;
    // 0x18c48c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18C48Cu;
    {
        const bool branch_taken_0x18c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C48Cu;
            // 0x18c490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c48c) {
            ctx->pc = 0x18C514u;
            goto label_18c514;
        }
    }
    ctx->pc = 0x18C494u;
label_18c494:
    // 0x18c494: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18c494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18c498: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18c49c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c4a0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x18c4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x18c4a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C4A4u;
    {
        const bool branch_taken_0x18c4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4A4u;
            // 0x18c4a8: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4a4) {
            ctx->pc = 0x18C4B4u;
            goto label_18c4b4;
        }
    }
    ctx->pc = 0x18C4ACu;
    // 0x18c4ac: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x18c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18c4b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18c4b4:
    // 0x18c4b4: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x18c4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18c4b8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x18C4B8u;
    SET_GPR_U32(ctx, 31, 0x18C4C0u);
    ctx->pc = 0x18C4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4B8u;
            // 0x18c4bc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4C0u; }
        if (ctx->pc != 0x18C4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4C0u; }
        if (ctx->pc != 0x18C4C0u) { return; }
    }
    ctx->pc = 0x18C4C0u;
label_18c4c0:
    // 0x18c4c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x18c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18c4c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18c4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4c8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x18c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18c4cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c4d0: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x18C4D0u;
    SET_GPR_U32(ctx, 31, 0x18C4D8u);
    ctx->pc = 0x18C4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4D0u;
            // 0x18c4d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4D8u; }
        if (ctx->pc != 0x18C4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4D8u; }
        if (ctx->pc != 0x18C4D8u) { return; }
    }
    ctx->pc = 0x18C4D8u;
label_18c4d8:
    // 0x18c4d8: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x18c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x18c4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4e0: 0x24a5c530  addiu       $a1, $a1, -0x3AD0
    ctx->pc = 0x18c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952240));
    // 0x18c4e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4e8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x18c4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c4ec: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x18C4ECu;
    SET_GPR_U32(ctx, 31, 0x18C4F4u);
    ctx->pc = 0x18C4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4ECu;
            // 0x18c4f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4F4u; }
        if (ctx->pc != 0x18C4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4F4u; }
        if (ctx->pc != 0x18C4F4u) { return; }
    }
    ctx->pc = 0x18C4F4u;
label_18c4f4:
    // 0x18c4f4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x18c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x18c4f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18c4fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C4FCu;
    {
        const bool branch_taken_0x18c4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4FCu;
            // 0x18c500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4fc) {
            ctx->pc = 0x18C50Cu;
            goto label_18c50c;
        }
    }
    ctx->pc = 0x18C504u;
    // 0x18c504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C504u;
    {
        const bool branch_taken_0x18c504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C504u;
            // 0x18c508: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c504) {
            ctx->pc = 0x18C518u;
            goto label_18c518;
        }
    }
    ctx->pc = 0x18C50Cu;
label_18c50c:
    // 0x18c50c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x18c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x18c510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c514:
    // 0x18c514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c518:
    // 0x18c518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c51c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c520: 0x3e00008  jr          $ra
    ctx->pc = 0x18C520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C520u;
            // 0x18c524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C528u;
}
