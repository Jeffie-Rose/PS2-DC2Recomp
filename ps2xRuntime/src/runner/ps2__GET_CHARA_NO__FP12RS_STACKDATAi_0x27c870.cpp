#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_NO__FP12RS_STACKDATAi
// Address: 0x27c870 - 0x27c8c0
void ps2__GET_CHARA_NO__FP12RS_STACKDATAi_0x27c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_NO__FP12RS_STACKDATAi_0x27c870");
#endif

    switch (ctx->pc) {
        case 0x27c894u: goto label_27c894;
        case 0x27c8a0u: goto label_27c8a0;
        case 0x27c8acu: goto label_27c8ac;
        default: break;
    }

    ctx->pc = 0x27c870u;

    // 0x27c870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c874: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27c87c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C87Cu;
    {
        const bool branch_taken_0x27c87c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C87Cu;
            // 0x27c880: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c87c) {
            ctx->pc = 0x27C88Cu;
            goto label_27c88c;
        }
    }
    ctx->pc = 0x27C884u;
    // 0x27c884: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27C884u;
    {
        const bool branch_taken_0x27c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C884u;
            // 0x27c888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c884) {
            ctx->pc = 0x27C8B0u;
            goto label_27c8b0;
        }
    }
    ctx->pc = 0x27C88Cu;
label_27c88c:
    // 0x27c88c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27C88Cu;
    SET_GPR_U32(ctx, 31, 0x27C894u);
    ctx->pc = 0x27C890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C88Cu;
            // 0x27c890: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C894u; }
        if (ctx->pc != 0x27C894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C894u; }
        if (ctx->pc != 0x27C894u) { return; }
    }
    ctx->pc = 0x27C894u;
label_27c894:
    // 0x27c894: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27c898: 0xc0a0ecc  jal         func_283B30
    ctx->pc = 0x27C898u;
    SET_GPR_U32(ctx, 31, 0x27C8A0u);
    ctx->pc = 0x27C89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C898u;
            // 0x27c89c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B30u;
    if (runtime->hasFunction(0x283B30u)) {
        auto targetFn = runtime->lookupFunction(0x283B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8A0u; }
        if (ctx->pc != 0x27C8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaNo__6CSceneFi_0x283b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8A0u; }
        if (ctx->pc != 0x27C8A0u) { return; }
    }
    ctx->pc = 0x27C8A0u;
label_27c8a0:
    // 0x27c8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8a4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27C8A4u;
    SET_GPR_U32(ctx, 31, 0x27C8ACu);
    ctx->pc = 0x27C8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8A4u;
            // 0x27c8a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8ACu; }
        if (ctx->pc != 0x27C8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8ACu; }
        if (ctx->pc != 0x27C8ACu) { return; }
    }
    ctx->pc = 0x27C8ACu;
label_27c8ac:
    // 0x27c8ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c8b0:
    // 0x27c8b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27C8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8B8u;
            // 0x27c8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27C8C0u;
}
