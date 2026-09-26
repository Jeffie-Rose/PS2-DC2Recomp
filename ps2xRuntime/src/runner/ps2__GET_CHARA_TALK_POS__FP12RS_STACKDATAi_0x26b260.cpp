#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_TALK_POS__FP12RS_STACKDATAi
// Address: 0x26b260 - 0x26b2c4
void ps2__GET_CHARA_TALK_POS__FP12RS_STACKDATAi_0x26b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_TALK_POS__FP12RS_STACKDATAi_0x26b260");
#endif

    switch (ctx->pc) {
        case 0x26b274u: goto label_26b274;
        case 0x26b27cu: goto label_26b27c;
        case 0x26b294u: goto label_26b294;
        case 0x26b2a4u: goto label_26b2a4;
        case 0x26b2b0u: goto label_26b2b0;
        default: break;
    }

    ctx->pc = 0x26b260u;

    // 0x26b260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b26c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26B26Cu;
    SET_GPR_U32(ctx, 31, 0x26B274u);
    ctx->pc = 0x26B270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B26Cu;
            // 0x26b270: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B274u; }
        if (ctx->pc != 0x26B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B274u; }
        if (ctx->pc != 0x26B274u) { return; }
    }
    ctx->pc = 0x26B274u;
label_26b274:
    // 0x26b274: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26B274u;
    SET_GPR_U32(ctx, 31, 0x26B27Cu);
    ctx->pc = 0x26B278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B274u;
            // 0x26b278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B27Cu; }
        if (ctx->pc != 0x26B27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B27Cu; }
        if (ctx->pc != 0x26B27Cu) { return; }
    }
    ctx->pc = 0x26B27Cu;
label_26b27c:
    // 0x26b27c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B27Cu;
    {
        const bool branch_taken_0x26b27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B27Cu;
            // 0x26b280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b27c) {
            ctx->pc = 0x26B28Cu;
            goto label_26b28c;
        }
    }
    ctx->pc = 0x26B284u;
    // 0x26b284: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26B284u;
    {
        const bool branch_taken_0x26b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B284u;
            // 0x26b288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b284) {
            ctx->pc = 0x26B2B4u;
            goto label_26b2b4;
        }
    }
    ctx->pc = 0x26B28Cu;
label_26b28c:
    // 0x26b28c: 0xc05480c  jal         func_152030
    ctx->pc = 0x26B28Cu;
    SET_GPR_U32(ctx, 31, 0x26B294u);
    ctx->pc = 0x26B290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B28Cu;
            // 0x26b290: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152030u;
    if (runtime->hasFunction(0x152030u)) {
        auto targetFn = runtime->lookupFunction(0x152030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B294u; }
        if (ctx->pc != 0x26B294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPosFromChar__FP11CCharacter2Pi_0x152030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B294u; }
        if (ctx->pc != 0x26B294u) { return; }
    }
    ctx->pc = 0x26B294u;
label_26b294:
    // 0x26b294: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26b294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26b298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b29c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26B29Cu;
    SET_GPR_U32(ctx, 31, 0x26B2A4u);
    ctx->pc = 0x26B2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B29Cu;
            // 0x26b2a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2A4u; }
        if (ctx->pc != 0x26B2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2A4u; }
        if (ctx->pc != 0x26B2A4u) { return; }
    }
    ctx->pc = 0x26B2A4u;
label_26b2a4:
    // 0x26b2a4: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x26b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x26b2a8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26B2A8u;
    SET_GPR_U32(ctx, 31, 0x26B2B0u);
    ctx->pc = 0x26B2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2A8u;
            // 0x26b2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2B0u; }
        if (ctx->pc != 0x26B2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2B0u; }
        if (ctx->pc != 0x26B2B0u) { return; }
    }
    ctx->pc = 0x26B2B0u;
label_26b2b0:
    // 0x26b2b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b2b4:
    // 0x26b2b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x26B2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2BCu;
            // 0x26b2c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B2C4u;
}
