#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgDrawSubGameEffect__Fv
// Address: 0x304540 - 0x3045a8
void sgDrawSubGameEffect__Fv_0x304540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgDrawSubGameEffect__Fv_0x304540");
#endif

    switch (ctx->pc) {
        case 0x304550u: goto label_304550;
        case 0x30458cu: goto label_30458c;
        case 0x30459cu: goto label_30459c;
        default: break;
    }

    ctx->pc = 0x304540u;

    // 0x304540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304548: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x304548u;
    SET_GPR_U32(ctx, 31, 0x304550u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304550u; }
        if (ctx->pc != 0x304550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304550u; }
        if (ctx->pc != 0x304550u) { return; }
    }
    ctx->pc = 0x304550u;
label_304550:
    // 0x304550: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304550u;
    {
        const bool branch_taken_0x304550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304550u;
            // 0x304554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304550) {
            ctx->pc = 0x304560u;
            goto label_304560;
        }
    }
    ctx->pc = 0x304558u;
    // 0x304558: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x304558u;
    {
        const bool branch_taken_0x304558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30455Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304558u;
            // 0x30455c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304558) {
            ctx->pc = 0x3045A0u;
            goto label_3045a0;
        }
    }
    ctx->pc = 0x304560u;
label_304560:
    // 0x304560: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x304560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x304564: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x304564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x304568: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x304568u;
    {
        const bool branch_taken_0x304568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304568u;
            // 0x30456c: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304568) {
            ctx->pc = 0x304594u;
            goto label_304594;
        }
    }
    ctx->pc = 0x304570u;
    // 0x304570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x304570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x304574: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304574u;
    {
        const bool branch_taken_0x304574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304574u;
            // 0x304578: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304574) {
            ctx->pc = 0x304584u;
            goto label_304584;
        }
    }
    ctx->pc = 0x30457Cu;
    // 0x30457c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30457Cu;
    {
        const bool branch_taken_0x30457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30457Cu;
            // 0x304580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30457c) {
            ctx->pc = 0x30459Cu;
            goto label_30459c;
        }
    }
    ctx->pc = 0x304584u;
label_304584:
    // 0x304584: 0xc0c1eb4  jal         func_307AD0
    ctx->pc = 0x304584u;
    SET_GPR_U32(ctx, 31, 0x30458Cu);
    ctx->pc = 0x304588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304584u;
            // 0x304588: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307AD0u;
    if (runtime->hasFunction(0x307AD0u)) {
        auto targetFn = runtime->lookupFunction(0x307AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30458Cu; }
        if (ctx->pc != 0x30458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgEffectDrawGyoRace__FP11SubGameInfo_0x307ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30458Cu; }
        if (ctx->pc != 0x30458Cu) { return; }
    }
    ctx->pc = 0x30458Cu;
label_30458c:
    // 0x30458c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30458Cu;
    {
        const bool branch_taken_0x30458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30458c) {
            ctx->pc = 0x30459Cu;
            goto label_30459c;
        }
    }
    ctx->pc = 0x304594u;
label_304594:
    // 0x304594: 0xc0c5128  jal         func_3144A0
    ctx->pc = 0x304594u;
    SET_GPR_U32(ctx, 31, 0x30459Cu);
    ctx->pc = 0x304598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304594u;
            // 0x304598: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3144A0u;
    if (runtime->hasFunction(0x3144A0u)) {
        auto targetFn = runtime->lookupFunction(0x3144A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30459Cu; }
        if (ctx->pc != 0x30459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgEffectDrawBuggy__FP11SubGameInfo_0x3144a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30459Cu; }
        if (ctx->pc != 0x30459Cu) { return; }
    }
    ctx->pc = 0x30459Cu;
label_30459c:
    // 0x30459c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30459cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3045a0:
    // 0x3045a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3045A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3045A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3045A0u;
            // 0x3045a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3045A8u;
}
