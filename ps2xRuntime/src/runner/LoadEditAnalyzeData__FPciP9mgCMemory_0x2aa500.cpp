#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadEditAnalyzeData__FPciP9mgCMemory
// Address: 0x2aa500 - 0x2aa564
void LoadEditAnalyzeData__FPciP9mgCMemory_0x2aa500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadEditAnalyzeData__FPciP9mgCMemory_0x2aa500");
#endif

    switch (ctx->pc) {
        case 0x2aa528u: goto label_2aa528;
        case 0x2aa538u: goto label_2aa538;
        case 0x2aa548u: goto label_2aa548;
        case 0x2aa550u: goto label_2aa550;
        default: break;
    }

    ctx->pc = 0x2aa500u;

    // 0x2aa500: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x2aa500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x2aa504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aa508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa50c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa514: 0xaf869a8c  sw          $a2, -0x6574($gp)
    ctx->pc = 0x2aa514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941324), GPR_U32(ctx, 6));
    // 0x2aa518: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2aa518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa51c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2aa51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa520: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x2AA520u;
    SET_GPR_U32(ctx, 31, 0x2AA528u);
    ctx->pc = 0x2AA524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA520u;
            // 0x2aa524: 0xaf809a84  sw          $zero, -0x657C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA528u; }
        if (ctx->pc != 0x2AA528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA528u; }
        if (ctx->pc != 0x2AA528u) { return; }
    }
    ctx->pc = 0x2AA528u;
label_2aa528:
    // 0x2aa528: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2aa528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2aa52c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2aa52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa530: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x2AA530u;
    SET_GPR_U32(ctx, 31, 0x2AA538u);
    ctx->pc = 0x2AA534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA530u;
            // 0x2aa534: 0x24a544b0  addiu       $a1, $a1, 0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA538u; }
        if (ctx->pc != 0x2AA538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA538u; }
        if (ctx->pc != 0x2AA538u) { return; }
    }
    ctx->pc = 0x2AA538u;
label_2aa538:
    // 0x2aa538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aa538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa53c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aa53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa540: 0xc051a60  jal         func_146980
    ctx->pc = 0x2AA540u;
    SET_GPR_U32(ctx, 31, 0x2AA548u);
    ctx->pc = 0x2AA544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA540u;
            // 0x2aa544: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA548u; }
        if (ctx->pc != 0x2AA548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA548u; }
        if (ctx->pc != 0x2AA548u) { return; }
    }
    ctx->pc = 0x2AA548u;
label_2aa548:
    // 0x2aa548: 0xc0519c8  jal         func_146720
    ctx->pc = 0x2AA548u;
    SET_GPR_U32(ctx, 31, 0x2AA550u);
    ctx->pc = 0x2AA54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA548u;
            // 0x2aa54c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA550u; }
        if (ctx->pc != 0x2AA550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA550u; }
        if (ctx->pc != 0x2AA550u) { return; }
    }
    ctx->pc = 0x2AA550u;
label_2aa550:
    // 0x2aa550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa55c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA55Cu;
            // 0x2aa560: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA564u;
}
