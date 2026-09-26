#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgDrawSubGameMap__Fv
// Address: 0x3043d0 - 0x30441c
void sgDrawSubGameMap__Fv_0x3043d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgDrawSubGameMap__Fv_0x3043d0");
#endif

    switch (ctx->pc) {
        case 0x3043e0u: goto label_3043e0;
        case 0x304410u: goto label_304410;
        default: break;
    }

    ctx->pc = 0x3043d0u;

    // 0x3043d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3043d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3043d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3043d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3043d8: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x3043D8u;
    SET_GPR_U32(ctx, 31, 0x3043E0u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3043E0u; }
        if (ctx->pc != 0x3043E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3043E0u; }
        if (ctx->pc != 0x3043E0u) { return; }
    }
    ctx->pc = 0x3043E0u;
label_3043e0:
    // 0x3043e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3043E0u;
    {
        const bool branch_taken_0x3043e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3043E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3043E0u;
            // 0x3043e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043e0) {
            ctx->pc = 0x3043F0u;
            goto label_3043f0;
        }
    }
    ctx->pc = 0x3043E8u;
    // 0x3043e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3043E8u;
    {
        const bool branch_taken_0x3043e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3043E8u;
            // 0x3043ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043e8) {
            ctx->pc = 0x304414u;
            goto label_304414;
        }
    }
    ctx->pc = 0x3043F0u;
label_3043f0:
    // 0x3043f0: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x3043f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x3043f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3043f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3043f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3043F8u;
    {
        const bool branch_taken_0x3043f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3043FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3043F8u;
            // 0x3043fc: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043f8) {
            ctx->pc = 0x304408u;
            goto label_304408;
        }
    }
    ctx->pc = 0x304400u;
    // 0x304400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x304400u;
    {
        const bool branch_taken_0x304400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304400u;
            // 0x304404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304400) {
            ctx->pc = 0x304410u;
            goto label_304410;
        }
    }
    ctx->pc = 0x304408u;
label_304408:
    // 0x304408: 0xc0c1dc8  jal         func_307720
    ctx->pc = 0x304408u;
    SET_GPR_U32(ctx, 31, 0x304410u);
    ctx->pc = 0x30440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304408u;
            // 0x30440c: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307720u;
    if (runtime->hasFunction(0x307720u)) {
        auto targetFn = runtime->lookupFunction(0x307720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304410u; }
        if (ctx->pc != 0x304410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgMapDrawGyoRace__FP11SubGameInfo_0x307720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304410u; }
        if (ctx->pc != 0x304410u) { return; }
    }
    ctx->pc = 0x304410u;
label_304410:
    // 0x304410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304414:
    // 0x304414: 0x3e00008  jr          $ra
    ctx->pc = 0x304414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304414u;
            // 0x304418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30441Cu;
}
