#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPhotoNameCheck__FP17USER_PICTURE_INFO
// Address: 0x1ffa60 - 0x1ffafc
void GetPhotoNameCheck__FP17USER_PICTURE_INFO_0x1ffa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPhotoNameCheck__FP17USER_PICTURE_INFO_0x1ffa60");
#endif

    switch (ctx->pc) {
        case 0x1ffa78u: goto label_1ffa78;
        case 0x1ffabcu: goto label_1ffabc;
        case 0x1ffaccu: goto label_1ffacc;
        case 0x1ffae0u: goto label_1ffae0;
        default: break;
    }

    ctx->pc = 0x1ffa60u;

    // 0x1ffa60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ffa64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ffa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ffa68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ffa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ffa6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ffa6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa70: 0xc07fe48  jal         func_1FF920
    ctx->pc = 0x1FFA70u;
    SET_GPR_U32(ctx, 31, 0x1FFA78u);
    ctx->pc = 0x1FFA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA70u;
            // 0x1ffa74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA78u; }
        if (ctx->pc != 0x1FFA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA78u; }
        if (ctx->pc != 0x1FFA78u) { return; }
    }
    ctx->pc = 0x1FFA78u;
label_1ffa78:
    // 0x1ffa78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ffa78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa7c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FFA7Cu;
    {
        const bool branch_taken_0x1ffa7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA7Cu;
            // 0x1ffa80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa7c) {
            ctx->pc = 0x1FFAE8u;
            goto label_1ffae8;
        }
    }
    ctx->pc = 0x1FFA84u;
    // 0x1ffa84: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1ffa88: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1ffa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ffa8c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FFA8Cu;
    {
        const bool branch_taken_0x1ffa8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA8Cu;
            // 0x1ffa90: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa8c) {
            ctx->pc = 0x1FFAD4u;
            goto label_1ffad4;
        }
    }
    ctx->pc = 0x1FFA94u;
    // 0x1ffa94: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x1ffa98: 0x284203e8  slti        $v0, $v0, 0x3E8
    ctx->pc = 0x1ffa98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1ffa9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFA9Cu;
    {
        const bool branch_taken_0x1ffa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA9Cu;
            // 0x1ffaa0: 0x8c25ee18  lw          $a1, -0x11E8($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa9c) {
            ctx->pc = 0x1FFAB0u;
            goto label_1ffab0;
        }
    }
    ctx->pc = 0x1FFAA4u;
    // 0x1ffaa4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x1ffaa8: 0x8c25ee1c  lw          $a1, -0x11E4($at)
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962716)));
    // 0x1ffaac: 0x0  nop
    ctx->pc = 0x1ffaacu;
    // NOP
label_1ffab0:
    // 0x1ffab0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1ffab4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1FFAB4u;
    SET_GPR_U32(ctx, 31, 0x1FFABCu);
    ctx->pc = 0x1FFAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFAB4u;
            // 0x1ffab8: 0x2484b770  addiu       $a0, $a0, -0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFABCu; }
        if (ctx->pc != 0x1FFABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFABCu; }
        if (ctx->pc != 0x1FFABCu) { return; }
    }
    ctx->pc = 0x1FFABCu;
label_1ffabc:
    // 0x1ffabc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1ffabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1ffac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ffac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffac4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1FFAC4u;
    SET_GPR_U32(ctx, 31, 0x1FFACCu);
    ctx->pc = 0x1FFAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFAC4u;
            // 0x1ffac8: 0x2484b770  addiu       $a0, $a0, -0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFACCu; }
        if (ctx->pc != 0x1FFACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFACCu; }
        if (ctx->pc != 0x1FFACCu) { return; }
    }
    ctx->pc = 0x1FFACCu;
label_1ffacc:
    // 0x1ffacc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFACCu;
    {
        const bool branch_taken_0x1ffacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffacc) {
            ctx->pc = 0x1FFAE0u;
            goto label_1ffae0;
        }
    }
    ctx->pc = 0x1FFAD4u;
label_1ffad4:
    // 0x1ffad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ffad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffad8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1FFAD8u;
    SET_GPR_U32(ctx, 31, 0x1FFAE0u);
    ctx->pc = 0x1FFADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFAD8u;
            // 0x1ffadc: 0x2484b770  addiu       $a0, $a0, -0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFAE0u; }
        if (ctx->pc != 0x1FFAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFAE0u; }
        if (ctx->pc != 0x1FFAE0u) { return; }
    }
    ctx->pc = 0x1FFAE0u;
label_1ffae0:
    // 0x1ffae0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1ffae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1ffae4: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x1ffae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
label_1ffae8:
    // 0x1ffae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ffae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffaec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ffaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffaf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFAF4u;
            // 0x1ffaf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFAFCu;
}
