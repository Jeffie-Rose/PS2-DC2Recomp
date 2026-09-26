#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DngTreeMapDraw__Fv
// Address: 0x1f2460 - 0x1f24a0
void DngTreeMapDraw__Fv_0x1f2460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DngTreeMapDraw__Fv_0x1f2460");
#endif

    switch (ctx->pc) {
        case 0x1f247cu: goto label_1f247c;
        case 0x1f2494u: goto label_1f2494;
        default: break;
    }

    ctx->pc = 0x1f2460u;

    // 0x1f2460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2468: 0x87848f04  lh          $a0, -0x70FC($gp)
    ctx->pc = 0x1f2468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938372)));
    // 0x1f246c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F246Cu;
    {
        const bool branch_taken_0x1f246c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F246Cu;
            // 0x1f2470: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f246c) {
            ctx->pc = 0x1F2484u;
            goto label_1f2484;
        }
    }
    ctx->pc = 0x1F2474u;
    // 0x1f2474: 0xc07c548  jal         func_1F1520
    ctx->pc = 0x1F2474u;
    SET_GPR_U32(ctx, 31, 0x1F247Cu);
    ctx->pc = 0x1F2478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2474u;
            // 0x1f2478: 0x8f848f28  lw          $a0, -0x70D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1520u;
    if (runtime->hasFunction(0x1F1520u)) {
        auto targetFn = runtime->lookupFunction(0x1F1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F247Cu; }
        if (ctx->pc != 0x1F247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CMenuTreeMapFv_0x1f1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F247Cu; }
        if (ctx->pc != 0x1F247Cu) { return; }
    }
    ctx->pc = 0x1F247Cu;
label_1f247c:
    // 0x1f247c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F247Cu;
    {
        const bool branch_taken_0x1f247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F247Cu;
            // 0x1f2480: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f247c) {
            ctx->pc = 0x1F2498u;
            goto label_1f2498;
        }
    }
    ctx->pc = 0x1F2484u;
label_1f2484:
    // 0x1f2484: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2484u;
    {
        const bool branch_taken_0x1f2484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f2484) {
            ctx->pc = 0x1F2494u;
            goto label_1f2494;
        }
    }
    ctx->pc = 0x1F248Cu;
    // 0x1f248c: 0xc0b161c  jal         func_2C5870
    ctx->pc = 0x1F248Cu;
    SET_GPR_U32(ctx, 31, 0x1F2494u);
    ctx->pc = 0x2C5870u;
    if (runtime->hasFunction(0x2C5870u)) {
        auto targetFn = runtime->lookupFunction(0x2C5870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2494u; }
        if (ctx->pc != 0x1F2494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSaveDraw__Fv_0x2c5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2494u; }
        if (ctx->pc != 0x1F2494u) { return; }
    }
    ctx->pc = 0x1F2494u;
label_1f2494:
    // 0x1f2494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2498:
    // 0x1f2498: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2498u;
            // 0x1f249c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F24A0u;
}
