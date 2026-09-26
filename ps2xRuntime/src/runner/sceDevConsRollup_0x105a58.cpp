#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsRollup
// Address: 0x105a58 - 0x105b04
void sceDevConsRollup_0x105a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsRollup_0x105a58");
#endif

    switch (ctx->pc) {
        case 0x105aa8u: goto label_105aa8;
        default: break;
    }

    ctx->pc = 0x105a58u;

    // 0x105a58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x105a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x105a5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105a60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105a64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x105a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x105a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x105a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105a78: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x105a78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x105a7c: 0x248102b  sltu        $v0, $s2, $t0
    ctx->pc = 0x105a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x105a80: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x105A80u;
    {
        const bool branch_taken_0x105a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A80u;
            // 0x105a84: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a80) {
            ctx->pc = 0x105AD8u;
            goto label_105ad8;
        }
    }
    ctx->pc = 0x105A88u;
    // 0x105a88: 0x1128023  subu        $s0, $t0, $s2
    ctx->pc = 0x105a88u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x105a8c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x105a8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a90: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x105a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a94: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x105a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105aa0: 0xc04163c  jal         func_1058F0
    ctx->pc = 0x105AA0u;
    SET_GPR_U32(ctx, 31, 0x105AA8u);
    ctx->pc = 0x105AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105AA0u;
            // 0x105aa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1058F0u;
    if (runtime->hasFunction(0x1058F0u)) {
        auto targetFn = runtime->lookupFunction(0x1058F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105AA8u; }
        if (ctx->pc != 0x105AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsMove_0x1058f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105AA8u; }
        if (ctx->pc != 0x105AA8u) { return; }
    }
    ctx->pc = 0x105AA8u;
label_105aa8:
    // 0x105aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105aac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x105aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ab0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x105ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ab4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x105ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ab8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x105ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ac0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105ac4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105ac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105ac8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ad0: 0x804160a  j           func_105828
    ctx->pc = 0x105AD0u;
    ctx->pc = 0x105AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105AD0u;
            // 0x105ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105828u;
    if (runtime->hasFunction(0x105828u)) {
        auto targetFn = runtime->lookupFunction(0x105828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDevConsClearBox_0x105828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x105AD8u;
label_105ad8:
    // 0x105ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105adc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x105adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ae0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x105ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ae8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105af0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105af4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105afc: 0x804160a  j           func_105828
    ctx->pc = 0x105AFCu;
    ctx->pc = 0x105B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105AFCu;
            // 0x105b00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105828u;
    if (runtime->hasFunction(0x105828u)) {
        auto targetFn = runtime->lookupFunction(0x105828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDevConsClearBox_0x105828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x105B04u;
}
