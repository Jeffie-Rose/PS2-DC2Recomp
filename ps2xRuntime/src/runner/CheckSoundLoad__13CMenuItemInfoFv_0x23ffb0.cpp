#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckSoundLoad__13CMenuItemInfoFv
// Address: 0x23ffb0 - 0x240020
void CheckSoundLoad__13CMenuItemInfoFv_0x23ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckSoundLoad__13CMenuItemInfoFv_0x23ffb0");
#endif

    switch (ctx->pc) {
        case 0x23ffccu: goto label_23ffcc;
        case 0x23ffd4u: goto label_23ffd4;
        case 0x240004u: goto label_240004;
        default: break;
    }

    ctx->pc = 0x23ffb0u;

    // 0x23ffb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ffb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23ffb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ffbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ffc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ffc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ffc4: 0xc090c40  jal         func_243100
    ctx->pc = 0x23FFC4u;
    SET_GPR_U32(ctx, 31, 0x23FFCCu);
    ctx->pc = 0x23FFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFC4u;
            // 0x23ffc8: 0xa080016e  sb          $zero, 0x16E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 366), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFCCu; }
        if (ctx->pc != 0x23FFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFCCu; }
        if (ctx->pc != 0x23FFCCu) { return; }
    }
    ctx->pc = 0x23FFCCu;
label_23ffcc:
    // 0x23ffcc: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x23FFCCu;
    SET_GPR_U32(ctx, 31, 0x23FFD4u);
    ctx->pc = 0x23FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFCCu;
            // 0x23ffd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFD4u; }
        if (ctx->pc != 0x23FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFD4u; }
        if (ctx->pc != 0x23FFD4u) { return; }
    }
    ctx->pc = 0x23FFD4u;
label_23ffd4:
    // 0x23ffd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FFD4u;
    {
        const bool branch_taken_0x23ffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFD4u;
            // 0x23ffd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffd4) {
            ctx->pc = 0x23FFE4u;
            goto label_23ffe4;
        }
    }
    ctx->pc = 0x23FFDCu;
    // 0x23ffdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23FFDCu;
    {
        const bool branch_taken_0x23ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFDCu;
            // 0x23ffe0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffdc) {
            ctx->pc = 0x240010u;
            goto label_240010;
        }
    }
    ctx->pc = 0x23FFE4u;
label_23ffe4:
    // 0x23ffe4: 0x9222016f  lbu         $v0, 0x16F($s1)
    ctx->pc = 0x23ffe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 367)));
    // 0x23ffe8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FFE8u;
    {
        const bool branch_taken_0x23ffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFE8u;
            // 0x23ffec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffe8) {
            ctx->pc = 0x24000Cu;
            goto label_24000c;
        }
    }
    ctx->pc = 0x23FFF0u;
    // 0x23fff0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23fff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fff8: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x23fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    // 0x23fffc: 0xc0ae7c8  jal         func_2B9F20
    ctx->pc = 0x23FFFCu;
    SET_GPR_U32(ctx, 31, 0x240004u);
    ctx->pc = 0x240000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FFFCu;
            // 0x240000: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9F20u;
    if (runtime->hasFunction(0x2B9F20u)) {
        auto targetFn = runtime->lookupFunction(0x2B9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240004u; }
        if (ctx->pc != 0x240004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundLoad__FP9mgCMemoryii_0x2b9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240004u; }
        if (ctx->pc != 0x240004u) { return; }
    }
    ctx->pc = 0x240004u;
label_240004:
    // 0x240004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240008: 0xa222016e  sb          $v0, 0x16E($s1)
    ctx->pc = 0x240008u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 366), (uint8_t)GPR_U32(ctx, 2));
label_24000c:
    // 0x24000c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24000cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_240010:
    // 0x240010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240018: 0x3e00008  jr          $ra
    ctx->pc = 0x240018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24001Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240018u;
            // 0x24001c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240020u;
}
