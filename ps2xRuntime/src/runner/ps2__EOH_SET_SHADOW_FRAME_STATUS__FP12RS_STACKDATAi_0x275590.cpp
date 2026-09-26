#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_SHADOW_FRAME_STATUS__FP12RS_STACKDATAi
// Address: 0x275590 - 0x2755f0
void ps2__EOH_SET_SHADOW_FRAME_STATUS__FP12RS_STACKDATAi_0x275590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_SHADOW_FRAME_STATUS__FP12RS_STACKDATAi_0x275590");
#endif

    switch (ctx->pc) {
        case 0x2755a8u: goto label_2755a8;
        case 0x2755b8u: goto label_2755b8;
        case 0x2755c4u: goto label_2755c4;
        case 0x2755dcu: goto label_2755dc;
        default: break;
    }

    ctx->pc = 0x275590u;

    // 0x275590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27559c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27559cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2755a0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2755A0u;
    SET_GPR_U32(ctx, 31, 0x2755A8u);
    ctx->pc = 0x2755A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2755A0u;
            // 0x2755a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755A8u; }
        if (ctx->pc != 0x2755A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755A8u; }
        if (ctx->pc != 0x2755A8u) { return; }
    }
    ctx->pc = 0x2755A8u;
label_2755a8:
    // 0x2755a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2755a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2755acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755b0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2755B0u;
    SET_GPR_U32(ctx, 31, 0x2755B8u);
    ctx->pc = 0x2755B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2755B0u;
            // 0x2755b4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755B8u; }
        if (ctx->pc != 0x2755B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755B8u; }
        if (ctx->pc != 0x2755B8u) { return; }
    }
    ctx->pc = 0x2755B8u;
label_2755b8:
    // 0x2755b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2755b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755bc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2755BCu;
    SET_GPR_U32(ctx, 31, 0x2755C4u);
    ctx->pc = 0x2755C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2755BCu;
            // 0x2755c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755C4u; }
        if (ctx->pc != 0x2755C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755C4u; }
        if (ctx->pc != 0x2755C4u) { return; }
    }
    ctx->pc = 0x2755C4u;
label_2755c4:
    // 0x2755c4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2755c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2755c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2755c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2755ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755d0: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2755d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2755d4: 0xc097b88  jal         func_25EE20
    ctx->pc = 0x2755D4u;
    SET_GPR_U32(ctx, 31, 0x2755DCu);
    ctx->pc = 0x2755D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2755D4u;
            // 0x2755d8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EE20u;
    if (runtime->hasFunction(0x25EE20u)) {
        auto targetFn = runtime->lookupFunction(0x25EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755DCu; }
        if (ctx->pc != 0x2755DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetShadowFrameShow__10CEohMotherFiPci_0x25ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2755DCu; }
        if (ctx->pc != 0x2755DCu) { return; }
    }
    ctx->pc = 0x2755DCu;
label_2755dc:
    // 0x2755dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2755dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2755e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2755e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2755e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2755e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2755e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2755E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2755ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2755E8u;
            // 0x2755ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2755F0u;
}
