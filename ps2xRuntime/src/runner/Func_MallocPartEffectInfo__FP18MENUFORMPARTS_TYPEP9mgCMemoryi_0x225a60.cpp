#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Func_MallocPartEffectInfo__FP18MENUFORMPARTS_TYPEP9mgCMemoryi
// Address: 0x225a60 - 0x225ac0
void Func_MallocPartEffectInfo__FP18MENUFORMPARTS_TYPEP9mgCMemoryi_0x225a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Func_MallocPartEffectInfo__FP18MENUFORMPARTS_TYPEP9mgCMemoryi_0x225a60");
#endif

    switch (ctx->pc) {
        case 0x225aacu: goto label_225aac;
        default: break;
    }

    ctx->pc = 0x225a60u;

    // 0x225a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a70: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x225A70u;
    {
        const bool branch_taken_0x225a70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x225a70) {
            ctx->pc = 0x225AB0u;
            goto label_225ab0;
        }
    }
    ctx->pc = 0x225A78u;
    // 0x225a78: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x225a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x225a7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x225a80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x225a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225a84: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x225a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x225a88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225A88u;
    {
        const bool branch_taken_0x225a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A88u;
            // 0x225a8c: 0xa2060044  sb          $a2, 0x44($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a88) {
            ctx->pc = 0x225A9Cu;
            goto label_225a9c;
        }
    }
    ctx->pc = 0x225A90u;
    // 0x225a90: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x225a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x225a94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x225A94u;
    {
        const bool branch_taken_0x225a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A94u;
            // 0x225a98: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a94) {
            ctx->pc = 0x225AA0u;
            goto label_225aa0;
        }
    }
    ctx->pc = 0x225A9Cu;
label_225a9c:
    // 0x225a9c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x225a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_225aa0:
    // 0x225aa0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225aa4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x225AA4u;
    SET_GPR_U32(ctx, 31, 0x225AACu);
    ctx->pc = 0x225AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225AA4u;
            // 0x225aa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225AACu; }
        if (ctx->pc != 0x225AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225AACu; }
        if (ctx->pc != 0x225AACu) { return; }
    }
    ctx->pc = 0x225AACu;
label_225aac:
    // 0x225aac: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x225aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_225ab0:
    // 0x225ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x225AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225AB8u;
            // 0x225abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225AC0u;
}
