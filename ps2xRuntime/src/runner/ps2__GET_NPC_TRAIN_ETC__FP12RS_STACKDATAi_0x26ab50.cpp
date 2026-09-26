#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NPC_TRAIN_ETC__FP12RS_STACKDATAi
// Address: 0x26ab50 - 0x26ac00
void ps2__GET_NPC_TRAIN_ETC__FP12RS_STACKDATAi_0x26ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NPC_TRAIN_ETC__FP12RS_STACKDATAi_0x26ab50");
#endif

    switch (ctx->pc) {
        case 0x26ab74u: goto label_26ab74;
        case 0x26abb0u: goto label_26abb0;
        case 0x26abc0u: goto label_26abc0;
        case 0x26abe8u: goto label_26abe8;
        default: break;
    }

    ctx->pc = 0x26ab50u;

    // 0x26ab50: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x26ab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x26ab54: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x26ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x26ab58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ab5c: 0x24c61cf0  addiu       $a2, $a2, 0x1CF0
    ctx->pc = 0x26ab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7408));
    // 0x26ab60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ab64: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26ab68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ab6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ab6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab70: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x26ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26ab74:
    // 0x26ab74: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x26ab74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26ab78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x26ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26ab7c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x26ab7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x26ab80: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x26ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x26ab84: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x26ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x26ab88: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x26ab88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x26ab8c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x26AB8Cu;
    {
        const bool branch_taken_0x26ab8c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x26AB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB8Cu;
            // 0x26ab90: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab8c) {
            ctx->pc = 0x26AB74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ab74;
        }
    }
    ctx->pc = 0x26AB94u;
    // 0x26ab94: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x26ab94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26ab98: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x26ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ab9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aba0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x26aba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26aba4: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x26aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x26aba8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26ABA8u;
    SET_GPR_U32(ctx, 31, 0x26ABB0u);
    ctx->pc = 0x26ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABA8u;
            // 0x26abac: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABB0u; }
        if (ctx->pc != 0x26ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABB0u; }
        if (ctx->pc != 0x26ABB0u) { return; }
    }
    ctx->pc = 0x26ABB0u;
label_26abb0:
    // 0x26abb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26abb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26abb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26abb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26abb8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26ABB8u;
    SET_GPR_U32(ctx, 31, 0x26ABC0u);
    ctx->pc = 0x26ABBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABB8u;
            // 0x26abbc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABC0u; }
        if (ctx->pc != 0x26ABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABC0u; }
        if (ctx->pc != 0x26ABC0u) { return; }
    }
    ctx->pc = 0x26ABC0u;
label_26abc0:
    // 0x26abc0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x26abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26abc4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x26abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x26abc8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x26abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26abcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26abd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26abd4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x26abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x26abd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26abdc: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x26abdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x26abe0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26ABE0u;
    SET_GPR_U32(ctx, 31, 0x26ABE8u);
    ctx->pc = 0x26ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABE0u;
            // 0x26abe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABE8u; }
        if (ctx->pc != 0x26ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABE8u; }
        if (ctx->pc != 0x26ABE8u) { return; }
    }
    ctx->pc = 0x26ABE8u;
label_26abe8:
    // 0x26abe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26abec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26abf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26abf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26abf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26abf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26abf8: 0x3e00008  jr          $ra
    ctx->pc = 0x26ABF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ABFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ABF8u;
            // 0x26abfc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AC00u;
}
