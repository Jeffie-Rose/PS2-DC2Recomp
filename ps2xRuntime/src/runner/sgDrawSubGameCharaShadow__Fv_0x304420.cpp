#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgDrawSubGameCharaShadow__Fv
// Address: 0x304420 - 0x304498
void sgDrawSubGameCharaShadow__Fv_0x304420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgDrawSubGameCharaShadow__Fv_0x304420");
#endif

    switch (ctx->pc) {
        case 0x304430u: goto label_304430;
        case 0x304480u: goto label_304480;
        default: break;
    }

    ctx->pc = 0x304420u;

    // 0x304420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304428: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x304428u;
    SET_GPR_U32(ctx, 31, 0x304430u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304430u; }
        if (ctx->pc != 0x304430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304430u; }
        if (ctx->pc != 0x304430u) { return; }
    }
    ctx->pc = 0x304430u;
label_304430:
    // 0x304430: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304430u;
    {
        const bool branch_taken_0x304430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304430u;
            // 0x304434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304430) {
            ctx->pc = 0x304440u;
            goto label_304440;
        }
    }
    ctx->pc = 0x304438u;
    // 0x304438: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x304438u;
    {
        const bool branch_taken_0x304438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304438u;
            // 0x30443c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304438) {
            ctx->pc = 0x304490u;
            goto label_304490;
        }
    }
    ctx->pc = 0x304440u;
label_304440:
    // 0x304440: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x304440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x304444: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304448: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x304448u;
    {
        const bool branch_taken_0x304448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304448u;
            // 0x30444c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304448) {
            ctx->pc = 0x30448Cu;
            goto label_30448c;
        }
    }
    ctx->pc = 0x304450u;
    // 0x304450: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x304450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x304454: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x304454u;
    {
        const bool branch_taken_0x304454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304454u;
            // 0x304458: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304454) {
            ctx->pc = 0x304478u;
            goto label_304478;
        }
    }
    ctx->pc = 0x30445Cu;
    // 0x30445c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x304460: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x304460u;
    {
        const bool branch_taken_0x304460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304460u;
            // 0x304464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304460) {
            ctx->pc = 0x304488u;
            goto label_304488;
        }
    }
    ctx->pc = 0x304468u;
    // 0x304468: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304468u;
    {
        const bool branch_taken_0x304468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304468) {
            ctx->pc = 0x304488u;
            goto label_304488;
        }
    }
    ctx->pc = 0x304470u;
    // 0x304470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x304470u;
    {
        const bool branch_taken_0x304470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304470) {
            ctx->pc = 0x304488u;
            goto label_304488;
        }
    }
    ctx->pc = 0x304478u;
label_304478:
    // 0x304478: 0xc0c514c  jal         func_314530
    ctx->pc = 0x304478u;
    SET_GPR_U32(ctx, 31, 0x304480u);
    ctx->pc = 0x30447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304478u;
            // 0x30447c: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (runtime->hasFunction(0x314530u)) {
        auto targetFn = runtime->lookupFunction(0x314530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304480u; }
        if (ctx->pc != 0x304480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawShadowBuggy__FP11SubGameInfo_0x314530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304480u; }
        if (ctx->pc != 0x304480u) { return; }
    }
    ctx->pc = 0x304480u;
label_304480:
    // 0x304480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x304480u;
    {
        const bool branch_taken_0x304480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304480) {
            ctx->pc = 0x30448Cu;
            goto label_30448c;
        }
    }
    ctx->pc = 0x304488u;
label_304488:
    // 0x304488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30448c:
    // 0x30448c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30448cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304490:
    // 0x304490: 0x3e00008  jr          $ra
    ctx->pc = 0x304490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304490u;
            // 0x304494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304498u;
}
