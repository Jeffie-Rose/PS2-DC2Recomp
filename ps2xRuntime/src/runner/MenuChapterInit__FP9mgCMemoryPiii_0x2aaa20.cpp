#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuChapterInit__FP9mgCMemoryPiii
// Address: 0x2aaa20 - 0x2aad64
void MenuChapterInit__FP9mgCMemoryPiii_0x2aaa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuChapterInit__FP9mgCMemoryPiii_0x2aaa20");
#endif

    switch (ctx->pc) {
        case 0x2aaa60u: goto label_2aaa60;
        case 0x2aaa70u: goto label_2aaa70;
        case 0x2aaa84u: goto label_2aaa84;
        case 0x2aaa90u: goto label_2aaa90;
        case 0x2aaaa0u: goto label_2aaaa0;
        case 0x2aaab4u: goto label_2aaab4;
        case 0x2aaac0u: goto label_2aaac0;
        case 0x2aaad0u: goto label_2aaad0;
        case 0x2aab08u: goto label_2aab08;
        case 0x2aab14u: goto label_2aab14;
        case 0x2aab3cu: goto label_2aab3c;
        case 0x2aab5cu: goto label_2aab5c;
        case 0x2aab84u: goto label_2aab84;
        case 0x2aaba4u: goto label_2aaba4;
        case 0x2aabbcu: goto label_2aabbc;
        case 0x2aabd8u: goto label_2aabd8;
        case 0x2aabe4u: goto label_2aabe4;
        case 0x2aac08u: goto label_2aac08;
        case 0x2aac18u: goto label_2aac18;
        case 0x2aac24u: goto label_2aac24;
        case 0x2aac58u: goto label_2aac58;
        case 0x2aac7cu: goto label_2aac7c;
        case 0x2aac84u: goto label_2aac84;
        case 0x2aac94u: goto label_2aac94;
        case 0x2aacb4u: goto label_2aacb4;
        case 0x2aacc4u: goto label_2aacc4;
        case 0x2aacccu: goto label_2aaccc;
        case 0x2aacd4u: goto label_2aacd4;
        case 0x2aacdcu: goto label_2aacdc;
        case 0x2aad04u: goto label_2aad04;
        case 0x2aad0cu: goto label_2aad0c;
        case 0x2aad14u: goto label_2aad14;
        case 0x2aad1cu: goto label_2aad1c;
        case 0x2aad4cu: goto label_2aad4c;
        default: break;
    }

    ctx->pc = 0x2aaa20u;

    // 0x2aaa20: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2aaa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2aaa24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aaa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aaa28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aaa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aaa2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aaa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aaa30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aaa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aaa34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aaa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa38: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2aaa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2aaa3c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2aaa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa40: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2aaa40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2aaa44: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2aaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2aaa48: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2aaa48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aaa4c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2aaa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2aaa50: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aaa50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aaa54: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2aaa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aaa58: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2AAA58u;
    SET_GPR_U32(ctx, 31, 0x2AAA60u);
    ctx->pc = 0x2AAA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA58u;
            // 0x2aaa5c: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA60u; }
        if (ctx->pc != 0x2AAA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA60u; }
        if (ctx->pc != 0x2AAA60u) { return; }
    }
    ctx->pc = 0x2AAA60u;
label_2aaa60:
    // 0x2aaa60: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aaa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aaa64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2aaa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aaa68: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AAA68u;
    SET_GPR_U32(ctx, 31, 0x2AAA70u);
    ctx->pc = 0x2AAA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA68u;
            // 0x2aaa6c: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA70u; }
        if (ctx->pc != 0x2AAA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA70u; }
        if (ctx->pc != 0x2AAA70u) { return; }
    }
    ctx->pc = 0x2AAA70u;
label_2aaa70:
    // 0x2aaa70: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aaa70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aaa74: 0xaf829a94  sw          $v0, -0x656C($gp)
    ctx->pc = 0x2aaa74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941332), GPR_U32(ctx, 2));
    // 0x2aaa78: 0x2484a370  addiu       $a0, $a0, -0x5C90
    ctx->pc = 0x2aaa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
    // 0x2aaa7c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AAA7Cu;
    SET_GPR_U32(ctx, 31, 0x2AAA84u);
    ctx->pc = 0x2AAA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA7Cu;
            // 0x2aaa80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA84u; }
        if (ctx->pc != 0x2AAA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA84u; }
        if (ctx->pc != 0x2AAA84u) { return; }
    }
    ctx->pc = 0x2AAA84u;
label_2aaa84:
    // 0x2aaa84: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x2aaa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2aaa88: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2AAA88u;
    SET_GPR_U32(ctx, 31, 0x2AAA90u);
    ctx->pc = 0x2AAA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA88u;
            // 0x2aaa8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA90u; }
        if (ctx->pc != 0x2AAA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA90u; }
        if (ctx->pc != 0x2AAA90u) { return; }
    }
    ctx->pc = 0x2AAA90u;
label_2aaa90:
    // 0x2aaa90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAA90u;
    {
        const bool branch_taken_0x2aaa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA90u;
            // 0x2aaa94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa90) {
            ctx->pc = 0x2AAAA0u;
            goto label_2aaaa0;
        }
    }
    ctx->pc = 0x2AAA98u;
    // 0x2aaa98: 0xc08bed8  jal         func_22FB60
    ctx->pc = 0x2AAA98u;
    SET_GPR_U32(ctx, 31, 0x2AAAA0u);
    ctx->pc = 0x2AAA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA98u;
            // 0x2aaa9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB60u;
    if (runtime->hasFunction(0x22FB60u)) {
        auto targetFn = runtime->lookupFunction(0x22FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAA0u; }
        if (ctx->pc != 0x2AAAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMenuEffectFv_0x22fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAA0u; }
        if (ctx->pc != 0x2AAAA0u) { return; }
    }
    ctx->pc = 0x2AAAA0u;
label_2aaaa0:
    // 0x2aaaa0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aaaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aaaa4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2aaaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2aaaa8: 0x2484a370  addiu       $a0, $a0, -0x5C90
    ctx->pc = 0x2aaaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
    // 0x2aaaac: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AAAACu;
    SET_GPR_U32(ctx, 31, 0x2AAAB4u);
    ctx->pc = 0x2AAAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAACu;
            // 0x2aaab0: 0xaf929aa0  sw          $s2, -0x6560($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941344), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAB4u; }
        if (ctx->pc != 0x2AAAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAB4u; }
        if (ctx->pc != 0x2AAAB4u) { return; }
    }
    ctx->pc = 0x2AAAB4u;
label_2aaab4:
    // 0x2aaab4: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x2aaab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2aaab8: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2AAAB8u;
    SET_GPR_U32(ctx, 31, 0x2AAAC0u);
    ctx->pc = 0x2AAABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAB8u;
            // 0x2aaabc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAC0u; }
        if (ctx->pc != 0x2AAAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAC0u; }
        if (ctx->pc != 0x2AAAC0u) { return; }
    }
    ctx->pc = 0x2AAAC0u;
label_2aaac0:
    // 0x2aaac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAAC0u;
    {
        const bool branch_taken_0x2aaac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAC0u;
            // 0x2aaac4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaac0) {
            ctx->pc = 0x2AAAD0u;
            goto label_2aaad0;
        }
    }
    ctx->pc = 0x2AAAC8u;
    // 0x2aaac8: 0xc08bed8  jal         func_22FB60
    ctx->pc = 0x2AAAC8u;
    SET_GPR_U32(ctx, 31, 0x2AAAD0u);
    ctx->pc = 0x2AAACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAC8u;
            // 0x2aaacc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB60u;
    if (runtime->hasFunction(0x22FB60u)) {
        auto targetFn = runtime->lookupFunction(0x22FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAD0u; }
        if (ctx->pc != 0x2AAAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMenuEffectFv_0x22fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAD0u; }
        if (ctx->pc != 0x2AAAD0u) { return; }
    }
    ctx->pc = 0x2AAAD0u;
label_2aaad0:
    // 0x2aaad0: 0xaf929aa4  sw          $s2, -0x655C($gp)
    ctx->pc = 0x2aaad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941348), GPR_U32(ctx, 18));
    // 0x2aaad4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2aaad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2aaad8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2aaad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aaadc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2aaadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2aaae0: 0x8f829a94  lw          $v0, -0x656C($gp)
    ctx->pc = 0x2aaae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aaae4: 0x24a5e7b0  addiu       $a1, $a1, -0x1850
    ctx->pc = 0x2aaae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961072));
    // 0x2aaae8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aaae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaaec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2aaaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2aaaf0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2aaaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2aaaf4: 0x8f829a94  lw          $v0, -0x656C($gp)
    ctx->pc = 0x2aaaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aaaf8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2aaaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2aaafc: 0x8f829a94  lw          $v0, -0x656C($gp)
    ctx->pc = 0x2aaafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aab00: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2AAB00u;
    SET_GPR_U32(ctx, 31, 0x2AAB08u);
    ctx->pc = 0x2AAB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB00u;
            // 0x2aab04: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB08u; }
        if (ctx->pc != 0x2AAB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB08u; }
        if (ctx->pc != 0x2AAB08u) { return; }
    }
    ctx->pc = 0x2AAB08u;
label_2aab08:
    // 0x2aab08: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aab08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aab0c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2AAB0Cu;
    SET_GPR_U32(ctx, 31, 0x2AAB14u);
    ctx->pc = 0x2AAB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB0Cu;
            // 0x2aab10: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB14u; }
        if (ctx->pc != 0x2AAB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB14u; }
        if (ctx->pc != 0x2AAB14u) { return; }
    }
    ctx->pc = 0x2AAB14u;
label_2aab14:
    // 0x2aab14: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2aab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2aab18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2aab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2aab1c: 0x8c23a394  lw          $v1, -0x5C6C($at)
    ctx->pc = 0x2aab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943636)));
    // 0x2aab20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aab20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aab24: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2aab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2aab28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2aab28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2aab2c: 0x8c22a390  lw          $v0, -0x5C70($at)
    ctx->pc = 0x2aab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943632)));
    // 0x2aab30: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2aab30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aab34: 0xc094440  jal         func_251100
    ctx->pc = 0x2AAB34u;
    SET_GPR_U32(ctx, 31, 0x2AAB3Cu);
    ctx->pc = 0x2AAB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB34u;
            // 0x2aab38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB3Cu; }
        if (ctx->pc != 0x2AAB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB3Cu; }
        if (ctx->pc != 0x2AAB3Cu) { return; }
    }
    ctx->pc = 0x2AAB3Cu;
label_2aab3c:
    // 0x2aab3c: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2aab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x2aab40: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2aab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2aab44: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AAB44u;
    {
        const bool branch_taken_0x2aab44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2AAB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB44u;
            // 0x2aab48: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab44) {
            ctx->pc = 0x2AAB60u;
            goto label_2aab60;
        }
    }
    ctx->pc = 0x2AAB4Cu;
    // 0x2aab4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aab4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab50: 0x2484e7c0  addiu       $a0, $a0, -0x1840
    ctx->pc = 0x2aab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961088));
    // 0x2aab54: 0xc094440  jal         func_251100
    ctx->pc = 0x2AAB54u;
    SET_GPR_U32(ctx, 31, 0x2AAB5Cu);
    ctx->pc = 0x2AAB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB54u;
            // 0x2aab58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB5Cu; }
        if (ctx->pc != 0x2AAB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB5Cu; }
        if (ctx->pc != 0x2AAB5Cu) { return; }
    }
    ctx->pc = 0x2AAB5Cu;
label_2aab5c:
    // 0x2aab5c: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2aab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_2aab60:
    // 0x2aab60: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2aab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2aab64: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2aab64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2aab68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAB68u;
    {
        const bool branch_taken_0x2aab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB68u;
            // 0x2aab6c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab68) {
            ctx->pc = 0x2AAB78u;
            goto label_2aab78;
        }
    }
    ctx->pc = 0x2AAB70u;
    // 0x2aab70: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2aab70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2aab74: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2aab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2aab78:
    // 0x2aab78: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aab78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aab7c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AAB7Cu;
    SET_GPR_U32(ctx, 31, 0x2AAB84u);
    ctx->pc = 0x2AAB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB7Cu;
            // 0x2aab80: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB84u; }
        if (ctx->pc != 0x2AAB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB84u; }
        if (ctx->pc != 0x2AAB84u) { return; }
    }
    ctx->pc = 0x2AAB84u;
label_2aab84:
    // 0x2aab84: 0x8f829a94  lw          $v0, -0x656C($gp)
    ctx->pc = 0x2aab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aab88: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2aab88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2aab8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aab8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab90: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2aab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2aab94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aab94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab98: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2aab98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aab9c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2AAB9Cu;
    SET_GPR_U32(ctx, 31, 0x2AABA4u);
    ctx->pc = 0x2AABA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB9Cu;
            // 0x2aaba0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABA4u; }
        if (ctx->pc != 0x2AABA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABA4u; }
        if (ctx->pc != 0x2AABA4u) { return; }
    }
    ctx->pc = 0x2AABA4u;
label_2aaba4:
    // 0x2aaba4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2aaba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2aaba8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2aaba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2aabac: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2aabacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2aabb0: 0x24a5e7d0  addiu       $a1, $a1, -0x1830
    ctx->pc = 0x2aabb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961104));
    // 0x2aabb4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AABB4u;
    SET_GPR_U32(ctx, 31, 0x2AABBCu);
    ctx->pc = 0x2AABB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABB4u;
            // 0x2aabb8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABBCu; }
        if (ctx->pc != 0x2AABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABBCu; }
        if (ctx->pc != 0x2AABBCu) { return; }
    }
    ctx->pc = 0x2AABBCu;
label_2aabbc:
    // 0x2aabbc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2aabbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2aabc0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2aabc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2aabc4: 0xaf829a98  sw          $v0, -0x6568($gp)
    ctx->pc = 0x2aabc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941336), GPR_U32(ctx, 2));
    // 0x2aabc8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2aabc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2aabcc: 0x24a5e7d8  addiu       $a1, $a1, -0x1828
    ctx->pc = 0x2aabccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961112));
    // 0x2aabd0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2AABD0u;
    SET_GPR_U32(ctx, 31, 0x2AABD8u);
    ctx->pc = 0x2AABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABD0u;
            // 0x2aabd4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABD8u; }
        if (ctx->pc != 0x2AABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABD8u; }
        if (ctx->pc != 0x2AABD8u) { return; }
    }
    ctx->pc = 0x2AABD8u;
label_2aabd8:
    // 0x2aabd8: 0xaf829a9c  sw          $v0, -0x6564($gp)
    ctx->pc = 0x2aabd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941340), GPR_U32(ctx, 2));
    // 0x2aabdc: 0xc04e640  jal         func_139900
    ctx->pc = 0x2AABDCu;
    SET_GPR_U32(ctx, 31, 0x2AABE4u);
    ctx->pc = 0x2AABE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABDCu;
            // 0x2aabe0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABE4u; }
        if (ctx->pc != 0x2AABE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABE4u; }
        if (ctx->pc != 0x2AABE4u) { return; }
    }
    ctx->pc = 0x2AABE4u;
label_2aabe4:
    // 0x2aabe4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2aabe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2aabe8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2aabe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2aabec: 0x8c23a394  lw          $v1, -0x5C6C($at)
    ctx->pc = 0x2aabecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943636)));
    // 0x2aabf0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2aabf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2aabf4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2aabf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2aabf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2aabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2aabfc: 0x8c22a390  lw          $v0, -0x5C70($at)
    ctx->pc = 0x2aabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943632)));
    // 0x2aac00: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2AAC00u;
    SET_GPR_U32(ctx, 31, 0x2AAC08u);
    ctx->pc = 0x2AAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC00u;
            // 0x2aac04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC08u; }
        if (ctx->pc != 0x2AAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC08u; }
        if (ctx->pc != 0x2AAC08u) { return; }
    }
    ctx->pc = 0x2AAC08u;
label_2aac08:
    // 0x2aac08: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aac08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aac0c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2aac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2aac10: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AAC10u;
    SET_GPR_U32(ctx, 31, 0x2AAC18u);
    ctx->pc = 0x2AAC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC10u;
            // 0x2aac14: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC18u; }
        if (ctx->pc != 0x2AAC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC18u; }
        if (ctx->pc != 0x2AAC18u) { return; }
    }
    ctx->pc = 0x2AAC18u;
label_2aac18:
    // 0x2aac18: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aac18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aac1c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2AAC1Cu;
    SET_GPR_U32(ctx, 31, 0x2AAC24u);
    ctx->pc = 0x2AAC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC1Cu;
            // 0x2aac20: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC24u; }
        if (ctx->pc != 0x2AAC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC24u; }
        if (ctx->pc != 0x2AAC24u) { return; }
    }
    ctx->pc = 0x2AAC24u;
label_2aac24:
    // 0x2aac24: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2aac24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2aac28: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2aac28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2aac2c: 0x8c23a394  lw          $v1, -0x5C6C($at)
    ctx->pc = 0x2aac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943636)));
    // 0x2aac30: 0x2484e7f0  addiu       $a0, $a0, -0x1810
    ctx->pc = 0x2aac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961136));
    // 0x2aac34: 0x27a6015c  addiu       $a2, $sp, 0x15C
    ctx->pc = 0x2aac34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x2aac38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aac38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac3c: 0xaf809aac  sw          $zero, -0x6554($gp)
    ctx->pc = 0x2aac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941356), GPR_U32(ctx, 0));
    // 0x2aac40: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2aac40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2aac44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2aac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2aac48: 0x8c22a390  lw          $v0, -0x5C70($at)
    ctx->pc = 0x2aac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943632)));
    // 0x2aac4c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2aac4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aac50: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2AAC50u;
    SET_GPR_U32(ctx, 31, 0x2AAC58u);
    ctx->pc = 0x2AAC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC50u;
            // 0x2aac54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC58u; }
        if (ctx->pc != 0x2AAC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC58u; }
        if (ctx->pc != 0x2AAC58u) { return; }
    }
    ctx->pc = 0x2AAC58u;
label_2aac58:
    // 0x2aac58: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2aac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2aac5c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2aac5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2aac60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAC60u;
    {
        const bool branch_taken_0x2aac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC60u;
            // 0x2aac64: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac60) {
            ctx->pc = 0x2AAC70u;
            goto label_2aac70;
        }
    }
    ctx->pc = 0x2AAC68u;
    // 0x2aac68: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2aac68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2aac6c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2aac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2aac70:
    // 0x2aac70: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aac70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aac74: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AAC74u;
    SET_GPR_U32(ctx, 31, 0x2AAC7Cu);
    ctx->pc = 0x2AAC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC74u;
            // 0x2aac78: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC7Cu; }
        if (ctx->pc != 0x2AAC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC7Cu; }
        if (ctx->pc != 0x2AAC7Cu) { return; }
    }
    ctx->pc = 0x2AAC7Cu;
label_2aac7c:
    // 0x2aac7c: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2AAC7Cu;
    SET_GPR_U32(ctx, 31, 0x2AAC84u);
    ctx->pc = 0x2AAC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC7Cu;
            // 0x2aac80: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC84u; }
        if (ctx->pc != 0x2AAC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC84u; }
        if (ctx->pc != 0x2AAC84u) { return; }
    }
    ctx->pc = 0x2AAC84u;
label_2aac84:
    // 0x2aac84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aac84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac88: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2aac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2aac8c: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x2AAC8Cu;
    SET_GPR_U32(ctx, 31, 0x2AAC94u);
    ctx->pc = 0x2AAC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC8Cu;
            // 0x2aac90: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC94u; }
        if (ctx->pc != 0x2AAC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC94u; }
        if (ctx->pc != 0x2AAC94u) { return; }
    }
    ctx->pc = 0x2AAC94u;
label_2aac94:
    // 0x2aac94: 0xaf829aa8  sw          $v0, -0x6558($gp)
    ctx->pc = 0x2aac94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941352), GPR_U32(ctx, 2));
    // 0x2aac98: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2aac98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2aac9c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2aac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2aaca0: 0x24424500  addiu       $v0, $v0, 0x4500
    ctx->pc = 0x2aaca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17664));
    // 0x2aaca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aaca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aaca8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2aaca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aacac: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AACACu;
    SET_GPR_U32(ctx, 31, 0x2AACB4u);
    ctx->pc = 0x2AACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACACu;
            // 0x2aacb0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACB4u; }
        if (ctx->pc != 0x2AACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACB4u; }
        if (ctx->pc != 0x2AACB4u) { return; }
    }
    ctx->pc = 0x2AACB4u;
label_2aacb4:
    // 0x2aacb4: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2aacb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2aacb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aacb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aacbc: 0xc062bbc  jal         func_18AEF0
    ctx->pc = 0x2AACBCu;
    SET_GPR_U32(ctx, 31, 0x2AACC4u);
    ctx->pc = 0x2AACC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACBCu;
            // 0x2aacc0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEF0u;
    if (runtime->hasFunction(0x18AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACC4u; }
        if (ctx->pc != 0x2AACC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenFast__6CSoundFiPc_0x18aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACC4u; }
        if (ctx->pc != 0x2AACC4u) { return; }
    }
    ctx->pc = 0x2AACC4u;
label_2aacc4:
    // 0x2aacc4: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x2AACC4u;
    SET_GPR_U32(ctx, 31, 0x2AACCCu);
    ctx->pc = 0x2AACC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACC4u;
            // 0x2aacc8: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACCCu; }
        if (ctx->pc != 0x2AACCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACCCu; }
        if (ctx->pc != 0x2AACCCu) { return; }
    }
    ctx->pc = 0x2AACCCu;
label_2aaccc:
    // 0x2aaccc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AACCCu;
    {
        const bool branch_taken_0x2aaccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaccc) {
            ctx->pc = 0x2AACF4u;
            goto label_2aacf4;
        }
    }
    ctx->pc = 0x2AACD4u;
label_2aacd4:
    // 0x2aacd4: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x2AACD4u;
    SET_GPR_U32(ctx, 31, 0x2AACDCu);
    ctx->pc = 0x2AACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACD4u;
            // 0x2aacd8: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACDCu; }
        if (ctx->pc != 0x2AACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACDCu; }
        if (ctx->pc != 0x2AACDCu) { return; }
    }
    ctx->pc = 0x2AACDCu;
label_2aacdc:
    // 0x2aacdc: 0x0  nop
    ctx->pc = 0x2aacdcu;
    // NOP
    // 0x2aace0: 0x0  nop
    ctx->pc = 0x2aace0u;
    // NOP
    // 0x2aace4: 0x0  nop
    ctx->pc = 0x2aace4u;
    // NOP
    // 0x2aace8: 0x0  nop
    ctx->pc = 0x2aace8u;
    // NOP
    // 0x2aacec: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AACECu;
    {
        const bool branch_taken_0x2aacec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aacec) {
            ctx->pc = 0x2AACD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aacd4;
        }
    }
    ctx->pc = 0x2AACF4u;
label_2aacf4:
    // 0x2aacf4: 0x0  nop
    ctx->pc = 0x2aacf4u;
    // NOP
    // 0x2aacf8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2aacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2aacfc: 0xc062c3c  jal         func_18B0F0
    ctx->pc = 0x2AACFCu;
    SET_GPR_U32(ctx, 31, 0x2AAD04u);
    ctx->pc = 0x2AAD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACFCu;
            // 0x2aad00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0F0u;
    if (runtime->hasFunction(0x18B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD04u; }
        if (ctx->pc != 0x2AAD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamStandBy__6CSoundFi_0x18b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD04u; }
        if (ctx->pc != 0x2AAD04u) { return; }
    }
    ctx->pc = 0x2AAD04u;
label_2aad04:
    // 0x2aad04: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x2AAD04u;
    SET_GPR_U32(ctx, 31, 0x2AAD0Cu);
    ctx->pc = 0x2AAD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD04u;
            // 0x2aad08: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD0Cu; }
        if (ctx->pc != 0x2AAD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD0Cu; }
        if (ctx->pc != 0x2AAD0Cu) { return; }
    }
    ctx->pc = 0x2AAD0Cu;
label_2aad0c:
    // 0x2aad0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AAD0Cu;
    {
        const bool branch_taken_0x2aad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aad0c) {
            ctx->pc = 0x2AAD34u;
            goto label_2aad34;
        }
    }
    ctx->pc = 0x2AAD14u;
label_2aad14:
    // 0x2aad14: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x2AAD14u;
    SET_GPR_U32(ctx, 31, 0x2AAD1Cu);
    ctx->pc = 0x2AAD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD14u;
            // 0x2aad18: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD1Cu; }
        if (ctx->pc != 0x2AAD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD1Cu; }
        if (ctx->pc != 0x2AAD1Cu) { return; }
    }
    ctx->pc = 0x2AAD1Cu;
label_2aad1c:
    // 0x2aad1c: 0x0  nop
    ctx->pc = 0x2aad1cu;
    // NOP
    // 0x2aad20: 0x0  nop
    ctx->pc = 0x2aad20u;
    // NOP
    // 0x2aad24: 0x0  nop
    ctx->pc = 0x2aad24u;
    // NOP
    // 0x2aad28: 0x0  nop
    ctx->pc = 0x2aad28u;
    // NOP
    // 0x2aad2c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AAD2Cu;
    {
        const bool branch_taken_0x2aad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aad2c) {
            ctx->pc = 0x2AAD14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aad14;
        }
    }
    ctx->pc = 0x2AAD34u;
label_2aad34:
    // 0x2aad34: 0x0  nop
    ctx->pc = 0x2aad34u;
    // NOP
    // 0x2aad38: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2aad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2aad3c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2aad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2aad40: 0xaf809a90  sw          $zero, -0x6570($gp)
    ctx->pc = 0x2aad40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941328), GPR_U32(ctx, 0));
    // 0x2aad44: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2AAD44u;
    SET_GPR_U32(ctx, 31, 0x2AAD4Cu);
    ctx->pc = 0x2AAD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD44u;
            // 0x2aad48: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD4Cu; }
        if (ctx->pc != 0x2AAD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD4Cu; }
        if (ctx->pc != 0x2AAD4Cu) { return; }
    }
    ctx->pc = 0x2AAD4Cu;
label_2aad4c:
    // 0x2aad4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aad4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aad50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aad50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aad54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aad54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aad58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aad58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aad5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD5Cu;
            // 0x2aad60: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAD64u;
}
