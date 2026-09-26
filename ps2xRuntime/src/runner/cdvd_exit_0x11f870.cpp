#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cdvd_exit
// Address: 0x11f870 - 0x11f8f0
void cdvd_exit_0x11f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cdvd_exit_0x11f870");
#endif

    switch (ctx->pc) {
        case 0x11f8a0u: goto label_11f8a0;
        case 0x11f8b8u: goto label_11f8b8;
        case 0x11f8c4u: goto label_11f8c4;
        case 0x11f8ccu: goto label_11f8cc;
        case 0x11f8d4u: goto label_11f8d4;
        case 0x11f8e0u: goto label_11f8e0;
        default: break;
    }

    ctx->pc = 0x11f870u;

    // 0x11f870: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11f874: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f878: 0x8c431dd4  lw          $v1, 0x1DD4($v0)
    ctx->pc = 0x11f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7636)));
    // 0x11f87c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f880: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F880u;
    {
        const bool branch_taken_0x11f880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F880u;
            // 0x11f884: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f880) {
            ctx->pc = 0x11F8A8u;
            goto label_11f8a8;
        }
    }
    ctx->pc = 0x11F888u;
    // 0x11f888: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11f888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11f88c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f890: 0xac621e14  sw          $v0, 0x1E14($v1)
    ctx->pc = 0x11f890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7700), GPR_U32(ctx, 2));
    // 0x11f894: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11f894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11f898: 0xc044040  jal         func_110100
    ctx->pc = 0x11F898u;
    SET_GPR_U32(ctx, 31, 0x11F8A0u);
    ctx->pc = 0x11F89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F898u;
            // 0x11f89c: 0x8e041de0  lw          $a0, 0x1DE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8A0u; }
        if (ctx->pc != 0x11F8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8A0u; }
        if (ctx->pc != 0x11F8A0u) { return; }
    }
    ctx->pc = 0x11F8A0u;
label_11f8a0:
    // 0x11f8a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F8A0u;
    {
        const bool branch_taken_0x11f8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8A0u;
            // 0x11f8a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8a0) {
            ctx->pc = 0x11F8B0u;
            goto label_11f8b0;
        }
    }
    ctx->pc = 0x11F8A8u;
label_11f8a8:
    // 0x11f8a8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11f8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11f8ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_11f8b0:
    // 0x11f8b0: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x11F8B0u;
    SET_GPR_U32(ctx, 31, 0x11F8B8u);
    ctx->pc = 0x11F8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8B0u;
            // 0x11f8b4: 0x8c441de8  lw          $a0, 0x1DE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    if (runtime->hasFunction(0x1100F0u)) {
        auto targetFn = runtime->lookupFunction(0x1100F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8B8u; }
        if (ctx->pc != 0x11F8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1100f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8B8u; }
        if (ctx->pc != 0x11F8B8u) { return; }
    }
    ctx->pc = 0x11F8B8u;
label_11f8b8:
    // 0x11f8b8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11f8bc: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x11F8BCu;
    SET_GPR_U32(ctx, 31, 0x11F8C4u);
    ctx->pc = 0x11F8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8BCu;
            // 0x11f8c0: 0x8c641dec  lw          $a0, 0x1DEC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7660)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    if (runtime->hasFunction(0x1100F0u)) {
        auto targetFn = runtime->lookupFunction(0x1100F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8C4u; }
        if (ctx->pc != 0x11F8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1100f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8C4u; }
        if (ctx->pc != 0x11F8C4u) { return; }
    }
    ctx->pc = 0x11F8C4u;
label_11f8c4:
    // 0x11f8c4: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x11F8C4u;
    SET_GPR_U32(ctx, 31, 0x11F8CCu);
    ctx->pc = 0x11F8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8C4u;
            // 0x11f8c8: 0x8e041de0  lw          $a0, 0x1DE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    if (runtime->hasFunction(0x1100F0u)) {
        auto targetFn = runtime->lookupFunction(0x1100F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8CCu; }
        if (ctx->pc != 0x11F8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1100f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8CCu; }
        if (ctx->pc != 0x11F8CCu) { return; }
    }
    ctx->pc = 0x11F8CCu;
label_11f8cc:
    // 0x11f8cc: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x11F8CCu;
    SET_GPR_U32(ctx, 31, 0x11F8D4u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8D4u; }
        if (ctx->pc != 0x11F8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8D4u; }
        if (ctx->pc != 0x11F8D4u) { return; }
    }
    ctx->pc = 0x11F8D4u;
label_11f8d4:
    // 0x11f8d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11f8d8: 0xc0449a2  jal         func_112688
    ctx->pc = 0x11F8D8u;
    SET_GPR_U32(ctx, 31, 0x11F8E0u);
    ctx->pc = 0x11F8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8D8u;
            // 0x11f8dc: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
    ctx->pc = 0x112688u;
    if (runtime->hasFunction(0x112688u)) {
        auto targetFn = runtime->lookupFunction(0x112688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8E0u; }
        if (ctx->pc != 0x11F8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifRemoveCmdHandler_0x112688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8E0u; }
        if (ctx->pc != 0x11F8E0u) { return; }
    }
    ctx->pc = 0x11F8E0u;
label_11f8e0:
    // 0x11f8e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f8e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f8e8: 0x804630a  j           func_118C28
    ctx->pc = 0x11F8E8u;
    ctx->pc = 0x11F8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8E8u;
            // 0x11f8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x118c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11F8F0u;
}
