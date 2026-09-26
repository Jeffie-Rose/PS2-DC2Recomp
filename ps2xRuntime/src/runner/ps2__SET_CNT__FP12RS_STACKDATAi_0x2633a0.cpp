#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CNT__FP12RS_STACKDATAi
// Address: 0x2633a0 - 0x263404
void ps2__SET_CNT__FP12RS_STACKDATAi_0x2633a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CNT__FP12RS_STACKDATAi_0x2633a0");
#endif

    switch (ctx->pc) {
        case 0x2633b8u: goto label_2633b8;
        case 0x2633c4u: goto label_2633c4;
        case 0x2633ccu: goto label_2633cc;
        case 0x2633ecu: goto label_2633ec;
        default: break;
    }

    ctx->pc = 0x2633a0u;

    // 0x2633a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2633a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2633a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2633a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2633a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2633a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2633ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2633acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2633b0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2633B0u;
    SET_GPR_U32(ctx, 31, 0x2633B8u);
    ctx->pc = 0x2633B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2633B0u;
            // 0x2633b4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633B8u; }
        if (ctx->pc != 0x2633B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633B8u; }
        if (ctx->pc != 0x2633B8u) { return; }
    }
    ctx->pc = 0x2633B8u;
label_2633b8:
    // 0x2633b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2633b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633bc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2633BCu;
    SET_GPR_U32(ctx, 31, 0x2633C4u);
    ctx->pc = 0x2633C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2633BCu;
            // 0x2633c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633C4u; }
        if (ctx->pc != 0x2633C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633C4u; }
        if (ctx->pc != 0x2633C4u) { return; }
    }
    ctx->pc = 0x2633C4u;
label_2633c4:
    // 0x2633c4: 0xc064220  jal         func_190880
    ctx->pc = 0x2633C4u;
    SET_GPR_U32(ctx, 31, 0x2633CCu);
    ctx->pc = 0x2633C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2633C4u;
            // 0x2633c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633CCu; }
        if (ctx->pc != 0x2633CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633CCu; }
        if (ctx->pc != 0x2633CCu) { return; }
    }
    ctx->pc = 0x2633CCu;
label_2633cc:
    // 0x2633cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2633CCu;
    {
        const bool branch_taken_0x2633cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2633D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2633CCu;
            // 0x2633d0: 0x11343c  dsll32      $a2, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633cc) {
            ctx->pc = 0x2633DCu;
            goto label_2633dc;
        }
    }
    ctx->pc = 0x2633D4u;
    // 0x2633d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2633D4u;
    {
        const bool branch_taken_0x2633d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2633D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2633D4u;
            // 0x2633d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633d4) {
            ctx->pc = 0x2633F0u;
            goto label_2633f0;
        }
    }
    ctx->pc = 0x2633DCu;
label_2633dc:
    // 0x2633dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2633dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633e0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2633e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2633e4: 0xc0bd940  jal         func_2F6500
    ctx->pc = 0x2633E4u;
    SET_GPR_U32(ctx, 31, 0x2633ECu);
    ctx->pc = 0x2633E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2633E4u;
            // 0x2633e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6500u;
    if (runtime->hasFunction(0x2F6500u)) {
        auto targetFn = runtime->lookupFunction(0x2F6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633ECu; }
        if (ctx->pc != 0x2633ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetShortFlag__9CSaveDataFis_0x2f6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2633ECu; }
        if (ctx->pc != 0x2633ECu) { return; }
    }
    ctx->pc = 0x2633ECu;
label_2633ec:
    // 0x2633ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2633ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2633f0:
    // 0x2633f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2633f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2633f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2633f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2633f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2633f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2633fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2633FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2633FCu;
            // 0x263400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263404u;
}
