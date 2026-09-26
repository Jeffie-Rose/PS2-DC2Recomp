#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_ID__FP12RS_STACKDATAi
// Address: 0x26aaa0 - 0x26aae0
void ps2__GET_CHARA_ID__FP12RS_STACKDATAi_0x26aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_ID__FP12RS_STACKDATAi_0x26aaa0");
#endif

    switch (ctx->pc) {
        case 0x26aab4u: goto label_26aab4;
        case 0x26aac0u: goto label_26aac0;
        case 0x26aaccu: goto label_26aacc;
        default: break;
    }

    ctx->pc = 0x26aaa0u;

    // 0x26aaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26aaa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26aaa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26aaac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AAACu;
    SET_GPR_U32(ctx, 31, 0x26AAB4u);
    ctx->pc = 0x26AAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAACu;
            // 0x26aab0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AAB4u; }
        if (ctx->pc != 0x26AAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AAB4u; }
        if (ctx->pc != 0x26AAB4u) { return; }
    }
    ctx->pc = 0x26AAB4u;
label_26aab4:
    // 0x26aab4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26aab8: 0xc0b25f0  jal         func_2C97C0
    ctx->pc = 0x26AAB8u;
    SET_GPR_U32(ctx, 31, 0x26AAC0u);
    ctx->pc = 0x26AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAB8u;
            // 0x26aabc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C97C0u;
    if (runtime->hasFunction(0x2C97C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C97C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AAC0u; }
        if (ctx->pc != 0x26AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCharaID__6CSceneFi_0x2c97c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AAC0u; }
        if (ctx->pc != 0x26AAC0u) { return; }
    }
    ctx->pc = 0x26AAC0u;
label_26aac0:
    // 0x26aac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26aac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aac4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26AAC4u;
    SET_GPR_U32(ctx, 31, 0x26AACCu);
    ctx->pc = 0x26AAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAC4u;
            // 0x26aac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AACCu; }
        if (ctx->pc != 0x26AACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AACCu; }
        if (ctx->pc != 0x26AACCu) { return; }
    }
    ctx->pc = 0x26AACCu;
label_26aacc:
    // 0x26aacc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26aaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26aad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26aad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26aad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aad8: 0x3e00008  jr          $ra
    ctx->pc = 0x26AAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAD8u;
            // 0x26aadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AAE0u;
}
