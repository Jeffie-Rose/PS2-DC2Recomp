#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_PRESET__FP12RS_STACKDATAi
// Address: 0x26cf40 - 0x26cfa0
void ps2__SET_MES_PRESET__FP12RS_STACKDATAi_0x26cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_PRESET__FP12RS_STACKDATAi_0x26cf40");
#endif

    switch (ctx->pc) {
        case 0x26cf58u: goto label_26cf58;
        case 0x26cf60u: goto label_26cf60;
        case 0x26cf7cu: goto label_26cf7c;
        case 0x26cf88u: goto label_26cf88;
        default: break;
    }

    ctx->pc = 0x26cf40u;

    // 0x26cf40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26cf44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cf48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cf4c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26cf4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cf50: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CF50u;
    SET_GPR_U32(ctx, 31, 0x26CF58u);
    ctx->pc = 0x26CF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF50u;
            // 0x26cf54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF58u; }
        if (ctx->pc != 0x26CF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF58u; }
        if (ctx->pc != 0x26CF58u) { return; }
    }
    ctx->pc = 0x26CF58u;
label_26cf58:
    // 0x26cf58: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CF58u;
    SET_GPR_U32(ctx, 31, 0x26CF60u);
    ctx->pc = 0x26CF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF58u;
            // 0x26cf5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF60u; }
        if (ctx->pc != 0x26CF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF60u; }
        if (ctx->pc != 0x26CF60u) { return; }
    }
    ctx->pc = 0x26CF60u;
label_26cf60:
    // 0x26cf60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf64: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CF64u;
    {
        const bool branch_taken_0x26cf64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF64u;
            // 0x26cf68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf64) {
            ctx->pc = 0x26CF74u;
            goto label_26cf74;
        }
    }
    ctx->pc = 0x26CF6Cu;
    // 0x26cf6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26CF6Cu;
    {
        const bool branch_taken_0x26cf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF6Cu;
            // 0x26cf70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf6c) {
            ctx->pc = 0x26CF8Cu;
            goto label_26cf8c;
        }
    }
    ctx->pc = 0x26CF74u;
label_26cf74:
    // 0x26cf74: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CF74u;
    SET_GPR_U32(ctx, 31, 0x26CF7Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF7Cu; }
        if (ctx->pc != 0x26CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF7Cu; }
        if (ctx->pc != 0x26CF7Cu) { return; }
    }
    ctx->pc = 0x26CF7Cu;
label_26cf7c:
    // 0x26cf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf80: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x26CF80u;
    SET_GPR_U32(ctx, 31, 0x26CF88u);
    ctx->pc = 0x26CF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF80u;
            // 0x26cf84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF88u; }
        if (ctx->pc != 0x26CF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CF88u; }
        if (ctx->pc != 0x26CF88u) { return; }
    }
    ctx->pc = 0x26CF88u;
label_26cf88:
    // 0x26cf88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cf8c:
    // 0x26cf8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26cf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cf90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cf90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cf94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cf98: 0x3e00008  jr          $ra
    ctx->pc = 0x26CF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CF98u;
            // 0x26cf9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CFA0u;
}
