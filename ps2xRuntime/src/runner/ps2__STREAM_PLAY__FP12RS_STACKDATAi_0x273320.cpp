#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_PLAY__FP12RS_STACKDATAi
// Address: 0x273320 - 0x2733a0
void ps2__STREAM_PLAY__FP12RS_STACKDATAi_0x273320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_PLAY__FP12RS_STACKDATAi_0x273320");
#endif

    switch (ctx->pc) {
        case 0x273348u: goto label_273348;
        case 0x273370u: goto label_273370;
        case 0x273380u: goto label_273380;
        case 0x27338cu: goto label_27338c;
        default: break;
    }

    ctx->pc = 0x273320u;

    // 0x273320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x273324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x273328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27332c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27332cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273338: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x273338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27333c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27333cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273340: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273340u;
    SET_GPR_U32(ctx, 31, 0x273348u);
    ctx->pc = 0x273344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273340u;
            // 0x273344: 0xac22e564  sw          $v0, -0x1A9C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273348u; }
        if (ctx->pc != 0x273348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273348u; }
        if (ctx->pc != 0x273348u) { return; }
    }
    ctx->pc = 0x273348u;
label_273348:
    // 0x273348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27334c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27334Cu;
    {
        const bool branch_taken_0x27334c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x273350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27334Cu;
            // 0x273350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27334c) {
            ctx->pc = 0x273378u;
            goto label_273378;
        }
    }
    ctx->pc = 0x273354u;
    // 0x273354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273358: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273358u;
    {
        const bool branch_taken_0x273358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x27335Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273358u;
            // 0x27335c: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273358) {
            ctx->pc = 0x273368u;
            goto label_273368;
        }
    }
    ctx->pc = 0x273360u;
    // 0x273360: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x273360u;
    {
        const bool branch_taken_0x273360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273360u;
            // 0x273364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273360) {
            ctx->pc = 0x27338Cu;
            goto label_27338c;
        }
    }
    ctx->pc = 0x273368u;
label_273368:
    // 0x273368: 0xc09cc90  jal         func_273240
    ctx->pc = 0x273368u;
    SET_GPR_U32(ctx, 31, 0x273370u);
    ctx->pc = 0x273240u;
    if (runtime->hasFunction(0x273240u)) {
        auto targetFn = runtime->lookupFunction(0x273240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273370u; }
        if (ctx->pc != 0x273370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandStreamPlay__Fii_0x273240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273370u; }
        if (ctx->pc != 0x273370u) { return; }
    }
    ctx->pc = 0x273370u;
label_273370:
    // 0x273370: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x273370u;
    {
        const bool branch_taken_0x273370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273370u;
            // 0x273374: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273370) {
            ctx->pc = 0x273390u;
            goto label_273390;
        }
    }
    ctx->pc = 0x273378u;
label_273378:
    // 0x273378: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273378u;
    SET_GPR_U32(ctx, 31, 0x273380u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273380u; }
        if (ctx->pc != 0x273380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273380u; }
        if (ctx->pc != 0x273380u) { return; }
    }
    ctx->pc = 0x273380u;
label_273380:
    // 0x273380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273384: 0xc09cc90  jal         func_273240
    ctx->pc = 0x273384u;
    SET_GPR_U32(ctx, 31, 0x27338Cu);
    ctx->pc = 0x273388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273384u;
            // 0x273388: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273240u;
    if (runtime->hasFunction(0x273240u)) {
        auto targetFn = runtime->lookupFunction(0x273240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27338Cu; }
        if (ctx->pc != 0x27338Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandStreamPlay__Fii_0x273240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27338Cu; }
        if (ctx->pc != 0x27338Cu) { return; }
    }
    ctx->pc = 0x27338Cu;
label_27338c:
    // 0x27338c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_273390:
    // 0x273390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273398: 0x3e00008  jr          $ra
    ctx->pc = 0x273398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273398u;
            // 0x27339c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2733A0u;
}
