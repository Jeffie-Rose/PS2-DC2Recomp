#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SEARCH_CHARA_NO__FP12RS_STACKDATAi
// Address: 0x27c8c0 - 0x27c910
void ps2__SEARCH_CHARA_NO__FP12RS_STACKDATAi_0x27c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SEARCH_CHARA_NO__FP12RS_STACKDATAi_0x27c8c0");
#endif

    switch (ctx->pc) {
        case 0x27c8e4u: goto label_27c8e4;
        case 0x27c8f0u: goto label_27c8f0;
        case 0x27c8fcu: goto label_27c8fc;
        default: break;
    }

    ctx->pc = 0x27c8c0u;

    // 0x27c8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c8c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c8c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27c8cc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C8CCu;
    {
        const bool branch_taken_0x27c8cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8CCu;
            // 0x27c8d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8cc) {
            ctx->pc = 0x27C8DCu;
            goto label_27c8dc;
        }
    }
    ctx->pc = 0x27C8D4u;
    // 0x27c8d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27C8D4u;
    {
        const bool branch_taken_0x27c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8D4u;
            // 0x27c8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8d4) {
            ctx->pc = 0x27C900u;
            goto label_27c900;
        }
    }
    ctx->pc = 0x27C8DCu;
label_27c8dc:
    // 0x27c8dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27C8DCu;
    SET_GPR_U32(ctx, 31, 0x27C8E4u);
    ctx->pc = 0x27C8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8DCu;
            // 0x27c8e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8E4u; }
        if (ctx->pc != 0x27C8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8E4u; }
        if (ctx->pc != 0x27C8E4u) { return; }
    }
    ctx->pc = 0x27C8E4u;
label_27c8e4:
    // 0x27c8e4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27c8e8: 0xc0b25f0  jal         func_2C97C0
    ctx->pc = 0x27C8E8u;
    SET_GPR_U32(ctx, 31, 0x27C8F0u);
    ctx->pc = 0x27C8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8E8u;
            // 0x27c8ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C97C0u;
    if (runtime->hasFunction(0x2C97C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C97C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8F0u; }
        if (ctx->pc != 0x27C8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCharaID__6CSceneFi_0x2c97c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8F0u; }
        if (ctx->pc != 0x27C8F0u) { return; }
    }
    ctx->pc = 0x27C8F0u;
label_27c8f0:
    // 0x27c8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8f4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27C8F4u;
    SET_GPR_U32(ctx, 31, 0x27C8FCu);
    ctx->pc = 0x27C8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8F4u;
            // 0x27c8f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8FCu; }
        if (ctx->pc != 0x27C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C8FCu; }
        if (ctx->pc != 0x27C8FCu) { return; }
    }
    ctx->pc = 0x27C8FCu;
label_27c8fc:
    // 0x27c8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c900:
    // 0x27c900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c908: 0x3e00008  jr          $ra
    ctx->pc = 0x27C908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C908u;
            // 0x27c90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27C910u;
}
