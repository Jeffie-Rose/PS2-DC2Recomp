#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadAnalyzeInventFile__17CInventDataManageFPci
// Address: 0x2002d0 - 0x200350
void LoadAnalyzeInventFile__17CInventDataManageFPci_0x2002d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadAnalyzeInventFile__17CInventDataManageFPci_0x2002d0");
#endif

    switch (ctx->pc) {
        case 0x200310u: goto label_200310;
        case 0x200320u: goto label_200320;
        case 0x200330u: goto label_200330;
        case 0x200338u: goto label_200338;
        default: break;
    }

    ctx->pc = 0x2002d0u;

    // 0x2002d0: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x2002d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x2002d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2002d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2002d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2002d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2002dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2002dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2002e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2002e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002e4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2002E4u;
    {
        const bool branch_taken_0x2002e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2002E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2002E4u;
            // 0x2002e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002e4) {
            ctx->pc = 0x2002F4u;
            goto label_2002f4;
        }
    }
    ctx->pc = 0x2002ECu;
    // 0x2002ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2002ECu;
    {
        const bool branch_taken_0x2002ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2002ECu;
            // 0x2002f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002ec) {
            ctx->pc = 0x20033Cu;
            goto label_20033c;
        }
    }
    ctx->pc = 0x2002F4u;
label_2002f4:
    // 0x2002f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2002f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2002f8: 0xaf8490dc  sw          $a0, -0x6F24($gp)
    ctx->pc = 0x2002f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938844), GPR_U32(ctx, 4));
    // 0x2002fc: 0xac20b7c4  sw          $zero, -0x483C($at)
    ctx->pc = 0x2002fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948804), GPR_U32(ctx, 0));
    // 0x200300: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x200300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x200304: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x200304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x200308: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x200308u;
    SET_GPR_U32(ctx, 31, 0x200310u);
    ctx->pc = 0x20030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200308u;
            // 0x20030c: 0xac20b7bc  sw          $zero, -0x4844($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200310u; }
        if (ctx->pc != 0x200310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200310u; }
        if (ctx->pc != 0x200310u) { return; }
    }
    ctx->pc = 0x200310u;
label_200310:
    // 0x200310: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x200310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x200314: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x200314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x200318: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x200318u;
    SET_GPR_U32(ctx, 31, 0x200320u);
    ctx->pc = 0x20031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200318u;
            // 0x20031c: 0x24a5ee30  addiu       $a1, $a1, -0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200320u; }
        if (ctx->pc != 0x200320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200320u; }
        if (ctx->pc != 0x200320u) { return; }
    }
    ctx->pc = 0x200320u;
label_200320:
    // 0x200320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200324: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x200324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200328: 0xc051a60  jal         func_146980
    ctx->pc = 0x200328u;
    SET_GPR_U32(ctx, 31, 0x200330u);
    ctx->pc = 0x20032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200328u;
            // 0x20032c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200330u; }
        if (ctx->pc != 0x200330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200330u; }
        if (ctx->pc != 0x200330u) { return; }
    }
    ctx->pc = 0x200330u;
label_200330:
    // 0x200330: 0xc0519c8  jal         func_146720
    ctx->pc = 0x200330u;
    SET_GPR_U32(ctx, 31, 0x200338u);
    ctx->pc = 0x200334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200330u;
            // 0x200334: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200338u; }
        if (ctx->pc != 0x200338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200338u; }
        if (ctx->pc != 0x200338u) { return; }
    }
    ctx->pc = 0x200338u;
label_200338:
    // 0x200338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20033c:
    // 0x20033c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20033cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200348: 0x3e00008  jr          $ra
    ctx->pc = 0x200348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200348u;
            // 0x20034c: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200350u;
}
