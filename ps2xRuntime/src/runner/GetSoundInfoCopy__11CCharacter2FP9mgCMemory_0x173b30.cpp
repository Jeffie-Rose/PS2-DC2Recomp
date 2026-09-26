#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSoundInfoCopy__11CCharacter2FP9mgCMemory
// Address: 0x173b30 - 0x173bbc
void GetSoundInfoCopy__11CCharacter2FP9mgCMemory_0x173b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSoundInfoCopy__11CCharacter2FP9mgCMemory_0x173b30");
#endif

    switch (ctx->pc) {
        case 0x173b7cu: goto label_173b7c;
        case 0x173b8cu: goto label_173b8c;
        case 0x173ba4u: goto label_173ba4;
        default: break;
    }

    ctx->pc = 0x173b30u;

    // 0x173b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x173b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173b40: 0x8c8205c4  lw          $v0, 0x5C4($a0)
    ctx->pc = 0x173b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1476)));
    // 0x173b44: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173B44u;
    {
        const bool branch_taken_0x173b44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x173B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B44u;
            // 0x173b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b44) {
            ctx->pc = 0x173B54u;
            goto label_173b54;
        }
    }
    ctx->pc = 0x173B4Cu;
    // 0x173b4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x173B4Cu;
    {
        const bool branch_taken_0x173b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B4Cu;
            // 0x173b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b4c) {
            ctx->pc = 0x173BA8u;
            goto label_173ba8;
        }
    }
    ctx->pc = 0x173B54u;
label_173b54:
    // 0x173b54: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x173b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173b58: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x173b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x173b5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173B5Cu;
    {
        const bool branch_taken_0x173b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B5Cu;
            // 0x173b60: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b5c) {
            ctx->pc = 0x173B6Cu;
            goto label_173b6c;
        }
    }
    ctx->pc = 0x173B64u;
    // 0x173b64: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x173b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x173b68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_173b6c:
    // 0x173b6c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x173b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x173b70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x173b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b74: 0xc04e748  jal         func_139D20
    ctx->pc = 0x173B74u;
    SET_GPR_U32(ctx, 31, 0x173B7Cu);
    ctx->pc = 0x173B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B74u;
            // 0x173b78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B7Cu; }
        if (ctx->pc != 0x173B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B7Cu; }
        if (ctx->pc != 0x173B7Cu) { return; }
    }
    ctx->pc = 0x173B7Cu;
label_173b7c:
    // 0x173b7c: 0x8e0305c4  lw          $v1, 0x5C4($s0)
    ctx->pc = 0x173b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1476)));
    // 0x173b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b84: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x173B84u;
    SET_GPR_U32(ctx, 31, 0x173B8Cu);
    ctx->pc = 0x173B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B84u;
            // 0x173b88: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B8Cu; }
        if (ctx->pc != 0x173B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B8Cu; }
        if (ctx->pc != 0x173B8Cu) { return; }
    }
    ctx->pc = 0x173B8Cu;
label_173b8c:
    // 0x173b8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x173b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b90: 0x8e0505a4  lw          $a1, 0x5A4($s0)
    ctx->pc = 0x173b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x173b94: 0x8e0205c4  lw          $v0, 0x5C4($s0)
    ctx->pc = 0x173b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1476)));
    // 0x173b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b9c: 0xc049c18  jal         func_127060
    ctx->pc = 0x173B9Cu;
    SET_GPR_U32(ctx, 31, 0x173BA4u);
    ctx->pc = 0x173BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B9Cu;
            // 0x173ba0: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BA4u; }
        if (ctx->pc != 0x173BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BA4u; }
        if (ctx->pc != 0x173BA4u) { return; }
    }
    ctx->pc = 0x173BA4u;
label_173ba4:
    // 0x173ba4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x173ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173ba8:
    // 0x173ba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x173BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173BB4u;
            // 0x173bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173BBCu;
}
