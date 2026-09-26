#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FLAG__FP12RS_STACKDATAi
// Address: 0x263340 - 0x26339c
void ps2__GET_FLAG__FP12RS_STACKDATAi_0x263340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FLAG__FP12RS_STACKDATAi_0x263340");
#endif

    switch (ctx->pc) {
        case 0x263358u: goto label_263358;
        case 0x263360u: goto label_263360;
        case 0x263378u: goto label_263378;
        case 0x263384u: goto label_263384;
        default: break;
    }

    ctx->pc = 0x263340u;

    // 0x263340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x263344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x263344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x263348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26334c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26334cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x263350: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263350u;
    SET_GPR_U32(ctx, 31, 0x263358u);
    ctx->pc = 0x263354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263350u;
            // 0x263354: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263358u; }
        if (ctx->pc != 0x263358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263358u; }
        if (ctx->pc != 0x263358u) { return; }
    }
    ctx->pc = 0x263358u;
label_263358:
    // 0x263358: 0xc064220  jal         func_190880
    ctx->pc = 0x263358u;
    SET_GPR_U32(ctx, 31, 0x263360u);
    ctx->pc = 0x26335Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263358u;
            // 0x26335c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263360u; }
        if (ctx->pc != 0x263360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263360u; }
        if (ctx->pc != 0x263360u) { return; }
    }
    ctx->pc = 0x263360u;
label_263360:
    // 0x263360: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263360u;
    {
        const bool branch_taken_0x263360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263360u;
            // 0x263364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263360) {
            ctx->pc = 0x263370u;
            goto label_263370;
        }
    }
    ctx->pc = 0x263368u;
    // 0x263368: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x263368u;
    {
        const bool branch_taken_0x263368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26336Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263368u;
            // 0x26336c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263368) {
            ctx->pc = 0x263388u;
            goto label_263388;
        }
    }
    ctx->pc = 0x263370u;
label_263370:
    // 0x263370: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x263370u;
    SET_GPR_U32(ctx, 31, 0x263378u);
    ctx->pc = 0x263374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263370u;
            // 0x263374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263378u; }
        if (ctx->pc != 0x263378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263378u; }
        if (ctx->pc != 0x263378u) { return; }
    }
    ctx->pc = 0x263378u;
label_263378:
    // 0x263378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26337c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26337Cu;
    SET_GPR_U32(ctx, 31, 0x263384u);
    ctx->pc = 0x263380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26337Cu;
            // 0x263380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263384u; }
        if (ctx->pc != 0x263384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263384u; }
        if (ctx->pc != 0x263384u) { return; }
    }
    ctx->pc = 0x263384u;
label_263384:
    // 0x263384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263388:
    // 0x263388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x263388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26338c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26338cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263394: 0x3e00008  jr          $ra
    ctx->pc = 0x263394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263394u;
            // 0x263398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26339Cu;
}
