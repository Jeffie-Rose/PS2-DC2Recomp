#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMonsterLanguage__Fi
// Address: 0x1e0540 - 0x1e05c0
void LoadMonsterLanguage__Fi_0x1e0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMonsterLanguage__Fi_0x1e0540");
#endif

    switch (ctx->pc) {
        case 0x1e0564u: goto label_1e0564;
        case 0x1e0578u: goto label_1e0578;
        case 0x1e0588u: goto label_1e0588;
        case 0x1e0598u: goto label_1e0598;
        case 0x1e05a8u: goto label_1e05a8;
        case 0x1e05b0u: goto label_1e05b0;
        default: break;
    }

    ctx->pc = 0x1e0540u;

    // 0x1e0540: 0x27bdb0c0  addiu       $sp, $sp, -0x4F40
    ctx->pc = 0x1e0540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294947008));
    // 0x1e0544: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e0544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e054c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1e054cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1e0550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0554: 0x27a44020  addiu       $a0, $sp, 0x4020
    ctx->pc = 0x1e0554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16416));
    // 0x1e0558: 0x24a57fe0  addiu       $a1, $a1, 0x7FE0
    ctx->pc = 0x1e0558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32736));
    // 0x1e055c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1E055Cu;
    SET_GPR_U32(ctx, 31, 0x1E0564u);
    ctx->pc = 0x1E0560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E055Cu;
            // 0x1e0560: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0564u; }
        if (ctx->pc != 0x1E0564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0564u; }
        if (ctx->pc != 0x1E0564u) { return; }
    }
    ctx->pc = 0x1E0564u;
label_1e0564:
    // 0x1e0564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0568: 0x27a44020  addiu       $a0, $sp, 0x4020
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16416));
    // 0x1e056c: 0x27a64f3c  addiu       $a2, $sp, 0x4F3C
    ctx->pc = 0x1e056cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20284));
    // 0x1e0570: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1E0570u;
    SET_GPR_U32(ctx, 31, 0x1E0578u);
    ctx->pc = 0x1E0574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0570u;
            // 0x1e0574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0578u; }
        if (ctx->pc != 0x1E0578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0578u; }
        if (ctx->pc != 0x1E0578u) { return; }
    }
    ctx->pc = 0x1E0578u;
label_1e0578:
    // 0x1e0578: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0578u;
    {
        const bool branch_taken_0x1e0578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0578u;
            // 0x1e057c: 0x27a44060  addiu       $a0, $sp, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0578) {
            ctx->pc = 0x1E05B0u;
            goto label_1e05b0;
        }
    }
    ctx->pc = 0x1E0580u;
    // 0x1e0580: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x1E0580u;
    SET_GPR_U32(ctx, 31, 0x1E0588u);
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0588u; }
        if (ctx->pc != 0x1E0588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0588u; }
        if (ctx->pc != 0x1E0588u) { return; }
    }
    ctx->pc = 0x1E0588u;
label_1e0588:
    // 0x1e0588: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1e0588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x1e058c: 0x27a44060  addiu       $a0, $sp, 0x4060
    ctx->pc = 0x1e058cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16480));
    // 0x1e0590: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x1E0590u;
    SET_GPR_U32(ctx, 31, 0x1E0598u);
    ctx->pc = 0x1E0594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0590u;
            // 0x1e0594: 0x24a5d2f0  addiu       $a1, $a1, -0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0598u; }
        if (ctx->pc != 0x1E0598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0598u; }
        if (ctx->pc != 0x1E0598u) { return; }
    }
    ctx->pc = 0x1E0598u;
label_1e0598:
    // 0x1e0598: 0x8fa64f3c  lw          $a2, 0x4F3C($sp)
    ctx->pc = 0x1e0598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20284)));
    // 0x1e059c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e059cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05a0: 0xc051a60  jal         func_146980
    ctx->pc = 0x1E05A0u;
    SET_GPR_U32(ctx, 31, 0x1E05A8u);
    ctx->pc = 0x1E05A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05A0u;
            // 0x1e05a4: 0x27a44060  addiu       $a0, $sp, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05A8u; }
        if (ctx->pc != 0x1E05A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05A8u; }
        if (ctx->pc != 0x1E05A8u) { return; }
    }
    ctx->pc = 0x1E05A8u;
label_1e05a8:
    // 0x1e05a8: 0xc0519c8  jal         func_146720
    ctx->pc = 0x1E05A8u;
    SET_GPR_U32(ctx, 31, 0x1E05B0u);
    ctx->pc = 0x1E05ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05A8u;
            // 0x1e05ac: 0x27a44060  addiu       $a0, $sp, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05B0u; }
        if (ctx->pc != 0x1E05B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05B0u; }
        if (ctx->pc != 0x1E05B0u) { return; }
    }
    ctx->pc = 0x1E05B0u;
label_1e05b0:
    // 0x1e05b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e05b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e05b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e05b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e05b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E05BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05B8u;
            // 0x1e05bc: 0x27bd4f40  addiu       $sp, $sp, 0x4F40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E05C0u;
}
