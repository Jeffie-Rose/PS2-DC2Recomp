#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_FADE_FLAG__FP12RS_STACKDATAi
// Address: 0x275510 - 0x275554
void ps2__EOH_SET_FADE_FLAG__FP12RS_STACKDATAi_0x275510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_FADE_FLAG__FP12RS_STACKDATAi_0x275510");
#endif

    switch (ctx->pc) {
        case 0x275524u: goto label_275524;
        case 0x275530u: goto label_275530;
        case 0x275544u: goto label_275544;
        default: break;
    }

    ctx->pc = 0x275510u;

    // 0x275510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27551c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27551Cu;
    SET_GPR_U32(ctx, 31, 0x275524u);
    ctx->pc = 0x275520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27551Cu;
            // 0x275520: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275524u; }
        if (ctx->pc != 0x275524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275524u; }
        if (ctx->pc != 0x275524u) { return; }
    }
    ctx->pc = 0x275524u;
label_275524:
    // 0x275524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275528: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275528u;
    SET_GPR_U32(ctx, 31, 0x275530u);
    ctx->pc = 0x27552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275528u;
            // 0x27552c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275530u; }
        if (ctx->pc != 0x275530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275530u; }
        if (ctx->pc != 0x275530u) { return; }
    }
    ctx->pc = 0x275530u;
label_275530:
    // 0x275530: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275538: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x275538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x27553c: 0xc097d48  jal         func_25F520
    ctx->pc = 0x27553Cu;
    SET_GPR_U32(ctx, 31, 0x275544u);
    ctx->pc = 0x275540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27553Cu;
            // 0x275540: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F520u;
    if (runtime->hasFunction(0x25F520u)) {
        auto targetFn = runtime->lookupFunction(0x25F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275544u; }
        if (ctx->pc != 0x275544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFadeFlag__10CEohMotherFii_0x25f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275544u; }
        if (ctx->pc != 0x275544u) { return; }
    }
    ctx->pc = 0x275544u;
label_275544:
    // 0x275544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27554c: 0x3e00008  jr          $ra
    ctx->pc = 0x27554Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27554Cu;
            // 0x275550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275554u;
}
