#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMapName__FiP1
// Address: 0x2d2500 - 0x2d25a8
void LoadMapName__FiP1_0x2d2500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMapName__FiP1_0x2d2500");
#endif

    switch (ctx->pc) {
        case 0x2d2528u: goto label_2d2528;
        case 0x2d253cu: goto label_2d253c;
        case 0x2d254cu: goto label_2d254c;
        case 0x2d255cu: goto label_2d255c;
        case 0x2d256cu: goto label_2d256c;
        case 0x2d2574u: goto label_2d2574;
        default: break;
    }

    ctx->pc = 0x2d2500u;

    // 0x2d2500: 0x27bdf080  addiu       $sp, $sp, -0xF80
    ctx->pc = 0x2d2500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963328));
    // 0x2d2504: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d2504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d2508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d250c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2514: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d2514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2518: 0xaf809dc4  sw          $zero, -0x623C($gp)
    ctx->pc = 0x2d2518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942148), GPR_U32(ctx, 0));
    // 0x2d251c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d251cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2520: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D2520u;
    SET_GPR_U32(ctx, 31, 0x2D2528u);
    ctx->pc = 0x2D2524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2520u;
            // 0x2d2524: 0x24a50508  addiu       $a1, $a1, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2528u; }
        if (ctx->pc != 0x2D2528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2528u; }
        if (ctx->pc != 0x2D2528u) { return; }
    }
    ctx->pc = 0x2D2528u;
label_2d2528:
    // 0x2d2528: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d2528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d252c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d252cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2530: 0x27a60f7c  addiu       $a2, $sp, 0xF7C
    ctx->pc = 0x2d2530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3964));
    // 0x2d2534: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2D2534u;
    SET_GPR_U32(ctx, 31, 0x2D253Cu);
    ctx->pc = 0x2D2538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2534u;
            // 0x2d2538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D253Cu; }
        if (ctx->pc != 0x2D253Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D253Cu; }
        if (ctx->pc != 0x2D253Cu) { return; }
    }
    ctx->pc = 0x2D253Cu;
label_2d253c:
    // 0x2d253c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D253Cu;
    {
        const bool branch_taken_0x2d253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D253Cu;
            // 0x2d2540: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d253c) {
            ctx->pc = 0x2D2598u;
            goto label_2d2598;
        }
    }
    ctx->pc = 0x2D2544u;
    // 0x2d2544: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x2D2544u;
    SET_GPR_U32(ctx, 31, 0x2D254Cu);
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D254Cu; }
        if (ctx->pc != 0x2D254Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D254Cu; }
        if (ctx->pc != 0x2D254Cu) { return; }
    }
    ctx->pc = 0x2D254Cu;
label_2d254c:
    // 0x2d254c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2d254cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2d2550: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d2550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d2554: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x2D2554u;
    SET_GPR_U32(ctx, 31, 0x2D255Cu);
    ctx->pc = 0x2D2558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2554u;
            // 0x2d2558: 0x24a56500  addiu       $a1, $a1, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D255Cu; }
        if (ctx->pc != 0x2D255Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D255Cu; }
        if (ctx->pc != 0x2D255Cu) { return; }
    }
    ctx->pc = 0x2D255Cu;
label_2d255c:
    // 0x2d255c: 0x8fa60f7c  lw          $a2, 0xF7C($sp)
    ctx->pc = 0x2d255cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3964)));
    // 0x2d2560: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d2560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2564: 0xc051a60  jal         func_146980
    ctx->pc = 0x2D2564u;
    SET_GPR_U32(ctx, 31, 0x2D256Cu);
    ctx->pc = 0x2D2568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2564u;
            // 0x2d2568: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D256Cu; }
        if (ctx->pc != 0x2D256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D256Cu; }
        if (ctx->pc != 0x2D256Cu) { return; }
    }
    ctx->pc = 0x2D256Cu;
label_2d256c:
    // 0x2d256c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x2D256Cu;
    SET_GPR_U32(ctx, 31, 0x2D2574u);
    ctx->pc = 0x2D2570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D256Cu;
            // 0x2d2570: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2574u; }
        if (ctx->pc != 0x2D2574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2574u; }
        if (ctx->pc != 0x2D2574u) { return; }
    }
    ctx->pc = 0x2D2574u;
label_2d2574:
    // 0x2d2574: 0x8f849dd0  lw          $a0, -0x6230($gp)
    ctx->pc = 0x2d2574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942160)));
    // 0x2d2578: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2578u;
    {
        const bool branch_taken_0x2d2578 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2D257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2578u;
            // 0x2d257c: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2578) {
            ctx->pc = 0x2D2588u;
            goto label_2d2588;
        }
    }
    ctx->pc = 0x2D2580u;
    // 0x2d2580: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2d2580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d2584: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d2584u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_2d2588:
    // 0x2d2588: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2d2588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d258c: 0x8f839dcc  lw          $v1, -0x6234($gp)
    ctx->pc = 0x2d258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942156)));
    // 0x2d2590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2594: 0xaf839dcc  sw          $v1, -0x6234($gp)
    ctx->pc = 0x2d2594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942156), GPR_U32(ctx, 3));
label_2d2598:
    // 0x2d2598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d2598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d259c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d259cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d25a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D25A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D25A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D25A0u;
            // 0x2d25a4: 0x27bd0f80  addiu       $sp, $sp, 0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3968));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D25A8u;
}
