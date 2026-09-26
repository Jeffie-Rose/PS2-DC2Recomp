#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_SCORE__FP12RS_STACKDATAi
// Address: 0x276680 - 0x276700
void ps2__SPHIDA_SET_SCORE__FP12RS_STACKDATAi_0x276680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_SCORE__FP12RS_STACKDATAi_0x276680");
#endif

    switch (ctx->pc) {
        case 0x276698u: goto label_276698;
        case 0x2766b0u: goto label_2766b0;
        case 0x2766ccu: goto label_2766cc;
        case 0x2766d8u: goto label_2766d8;
        case 0x2766e8u: goto label_2766e8;
        default: break;
    }

    ctx->pc = 0x276680u;

    // 0x276680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27668c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27668cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276690: 0xc064224  jal         func_190890
    ctx->pc = 0x276690u;
    SET_GPR_U32(ctx, 31, 0x276698u);
    ctx->pc = 0x276694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276690u;
            // 0x276694: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276698u; }
        if (ctx->pc != 0x276698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameSaveData__Fv_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276698u; }
        if (ctx->pc != 0x276698u) { return; }
    }
    ctx->pc = 0x276698u;
label_276698:
    // 0x276698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276698u;
    {
        const bool branch_taken_0x276698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27669Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276698u;
            // 0x27669c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276698) {
            ctx->pc = 0x2766A8u;
            goto label_2766a8;
        }
    }
    ctx->pc = 0x2766A0u;
    // 0x2766a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2766A0u;
    {
        const bool branch_taken_0x2766a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2766A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766A0u;
            // 0x2766a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766a0) {
            ctx->pc = 0x2766ECu;
            goto label_2766ec;
        }
    }
    ctx->pc = 0x2766A8u;
label_2766a8:
    // 0x2766a8: 0xc0bdc74  jal         func_2F71D0
    ctx->pc = 0x2766A8u;
    SET_GPR_U32(ctx, 31, 0x2766B0u);
    ctx->pc = 0x2F71D0u;
    if (runtime->hasFunction(0x2F71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766B0u; }
        if (ctx->pc != 0x2766B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaData__12CSubGameDataFv_0x2f71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766B0u; }
        if (ctx->pc != 0x2766B0u) { return; }
    }
    ctx->pc = 0x2766B0u;
label_2766b0:
    // 0x2766b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2766B0u;
    {
        const bool branch_taken_0x2766b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2766B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766B0u;
            // 0x2766b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766b0) {
            ctx->pc = 0x2766C0u;
            goto label_2766c0;
        }
    }
    ctx->pc = 0x2766B8u;
    // 0x2766b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2766B8u;
    {
        const bool branch_taken_0x2766b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2766BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766B8u;
            // 0x2766bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766b8) {
            ctx->pc = 0x2766ECu;
            goto label_2766ec;
        }
    }
    ctx->pc = 0x2766C0u;
label_2766c0:
    // 0x2766c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2766c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766c4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2766C4u;
    SET_GPR_U32(ctx, 31, 0x2766CCu);
    ctx->pc = 0x2766C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2766C4u;
            // 0x2766c8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766CCu; }
        if (ctx->pc != 0x2766CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766CCu; }
        if (ctx->pc != 0x2766CCu) { return; }
    }
    ctx->pc = 0x2766CCu;
label_2766cc:
    // 0x2766cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2766ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766d0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2766D0u;
    SET_GPR_U32(ctx, 31, 0x2766D8u);
    ctx->pc = 0x2766D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2766D0u;
            // 0x2766d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766D8u; }
        if (ctx->pc != 0x2766D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766D8u; }
        if (ctx->pc != 0x2766D8u) { return; }
    }
    ctx->pc = 0x2766D8u;
label_2766d8:
    // 0x2766d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2766d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2766dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766e0: 0xc0bdaf4  jal         func_2F6BD0
    ctx->pc = 0x2766E0u;
    SET_GPR_U32(ctx, 31, 0x2766E8u);
    ctx->pc = 0x2766E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2766E0u;
            // 0x2766e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD0u;
    if (runtime->hasFunction(0x2F6BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766E8u; }
        if (ctx->pc != 0x2766E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHorlScore__11CSphidaDataFii_0x2f6bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766E8u; }
        if (ctx->pc != 0x2766E8u) { return; }
    }
    ctx->pc = 0x2766E8u;
label_2766e8:
    // 0x2766e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2766e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2766ec:
    // 0x2766ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2766ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2766f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2766f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2766f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2766f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2766f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2766F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766F8u;
            // 0x2766fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276700u;
}
