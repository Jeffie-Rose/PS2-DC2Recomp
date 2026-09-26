#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadGameDataAnalyze__FPc
// Address: 0x195470 - 0x195534
void LoadGameDataAnalyze__FPc_0x195470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadGameDataAnalyze__FPc_0x195470");
#endif

    switch (ctx->pc) {
        case 0x195494u: goto label_195494;
        case 0x1954a0u: goto label_1954a0;
        case 0x1954b4u: goto label_1954b4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954e0u: goto label_1954e0;
        case 0x1954f0u: goto label_1954f0;
        case 0x195500u: goto label_195500;
        case 0x195510u: goto label_195510;
        case 0x195518u: goto label_195518;
        default: break;
    }

    ctx->pc = 0x195470u;

    // 0x195470: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x195470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x195474: 0x342178b0  ori         $at, $at, 0x78B0
    ctx->pc = 0x195474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30896);
    // 0x195478: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x195478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x19547c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19548c: 0xc094430  jal         func_2510C0
    ctx->pc = 0x19548Cu;
    SET_GPR_U32(ctx, 31, 0x195494u);
    ctx->pc = 0x195490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19548Cu;
            // 0x195490: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195494u; }
        if (ctx->pc != 0x195494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195494u; }
        if (ctx->pc != 0x195494u) { return; }
    }
    ctx->pc = 0x195494u;
label_195494:
    // 0x195494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195498: 0xc0521d8  jal         func_148760
    ctx->pc = 0x195498u;
    SET_GPR_U32(ctx, 31, 0x1954A0u);
    ctx->pc = 0x19549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195498u;
            // 0x19549c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954A0u; }
        if (ctx->pc != 0x1954A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954A0u; }
        if (ctx->pc != 0x1954A0u) { return; }
    }
    ctx->pc = 0x1954A0u;
label_1954a0:
    // 0x1954a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1954a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1954a4: 0x27a47840  addiu       $a0, $sp, 0x7840
    ctx->pc = 0x1954a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30784));
    // 0x1954a8: 0x24a55390  addiu       $a1, $a1, 0x5390
    ctx->pc = 0x1954a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21392));
    // 0x1954ac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1954ACu;
    SET_GPR_U32(ctx, 31, 0x1954B4u);
    ctx->pc = 0x1954B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1954ACu;
            // 0x1954b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954B4u; }
        if (ctx->pc != 0x1954B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954B4u; }
        if (ctx->pc != 0x1954B4u) { return; }
    }
    ctx->pc = 0x1954B4u;
label_1954b4:
    // 0x1954b4: 0x27a47840  addiu       $a0, $sp, 0x7840
    ctx->pc = 0x1954b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30784));
    // 0x1954b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1954b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1954bc: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x1954bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1954c0: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1954C0u;
    SET_GPR_U32(ctx, 31, 0x1954C8u);
    ctx->pc = 0x1954C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1954C0u;
            // 0x1954c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954C8u; }
        if (ctx->pc != 0x1954C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954C8u; }
        if (ctx->pc != 0x1954C8u) { return; }
    }
    ctx->pc = 0x1954C8u;
label_1954c8:
    // 0x1954c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1954C8u;
    {
        const bool branch_taken_0x1954c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1954CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954C8u;
            // 0x1954cc: 0x27a47880  addiu       $a0, $sp, 0x7880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954c8) {
            ctx->pc = 0x1954E8u;
            goto label_1954e8;
        }
    }
    ctx->pc = 0x1954D0u;
    // 0x1954d0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1954d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1954d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1954d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1954d8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1954D8u;
    SET_GPR_U32(ctx, 31, 0x1954E0u);
    ctx->pc = 0x1954DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1954D8u;
            // 0x1954dc: 0x248453a0  addiu       $a0, $a0, 0x53A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954E0u; }
        if (ctx->pc != 0x1954E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954E0u; }
        if (ctx->pc != 0x1954E0u) { return; }
    }
    ctx->pc = 0x1954E0u;
label_1954e0:
    // 0x1954e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1954E0u;
    {
        const bool branch_taken_0x1954e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954E0u;
            // 0x1954e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954e0) {
            ctx->pc = 0x19551Cu;
            goto label_19551c;
        }
    }
    ctx->pc = 0x1954E8u;
label_1954e8:
    // 0x1954e8: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x1954E8u;
    SET_GPR_U32(ctx, 31, 0x1954F0u);
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954F0u; }
        if (ctx->pc != 0x1954F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954F0u; }
        if (ctx->pc != 0x1954F0u) { return; }
    }
    ctx->pc = 0x1954F0u;
label_1954f0:
    // 0x1954f0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1954f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1954f4: 0x27a47880  addiu       $a0, $sp, 0x7880
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30848));
    // 0x1954f8: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x1954F8u;
    SET_GPR_U32(ctx, 31, 0x195500u);
    ctx->pc = 0x1954FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1954F8u;
            // 0x1954fc: 0x24a559a0  addiu       $a1, $a1, 0x59A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195500u; }
        if (ctx->pc != 0x195500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195500u; }
        if (ctx->pc != 0x195500u) { return; }
    }
    ctx->pc = 0x195500u;
label_195500:
    // 0x195500: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x195500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x195504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195508: 0xc051a60  jal         func_146980
    ctx->pc = 0x195508u;
    SET_GPR_U32(ctx, 31, 0x195510u);
    ctx->pc = 0x19550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195508u;
            // 0x19550c: 0x27a47880  addiu       $a0, $sp, 0x7880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195510u; }
        if (ctx->pc != 0x195510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195510u; }
        if (ctx->pc != 0x195510u) { return; }
    }
    ctx->pc = 0x195510u;
label_195510:
    // 0x195510: 0xc0519c8  jal         func_146720
    ctx->pc = 0x195510u;
    SET_GPR_U32(ctx, 31, 0x195518u);
    ctx->pc = 0x195514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195510u;
            // 0x195514: 0x27a47880  addiu       $a0, $sp, 0x7880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 30848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195518u; }
        if (ctx->pc != 0x195518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195518u; }
        if (ctx->pc != 0x195518u) { return; }
    }
    ctx->pc = 0x195518u;
label_195518:
    // 0x195518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19551c:
    // 0x19551c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19551cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195520: 0x34018750  ori         $at, $zero, 0x8750
    ctx->pc = 0x195520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34640);
    // 0x195524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19552c: 0x3e00008  jr          $ra
    ctx->pc = 0x19552Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19552Cu;
            // 0x195530: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195534u;
}
