#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_FOOT_SOUND_ID__FP12RS_STACKDATAi
// Address: 0x275270 - 0x2752b4
void ps2__EOH_SET_FOOT_SOUND_ID__FP12RS_STACKDATAi_0x275270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_FOOT_SOUND_ID__FP12RS_STACKDATAi_0x275270");
#endif

    switch (ctx->pc) {
        case 0x275284u: goto label_275284;
        case 0x275290u: goto label_275290;
        case 0x2752a4u: goto label_2752a4;
        default: break;
    }

    ctx->pc = 0x275270u;

    // 0x275270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27527c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27527Cu;
    SET_GPR_U32(ctx, 31, 0x275284u);
    ctx->pc = 0x275280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27527Cu;
            // 0x275280: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275284u; }
        if (ctx->pc != 0x275284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275284u; }
        if (ctx->pc != 0x275284u) { return; }
    }
    ctx->pc = 0x275284u;
label_275284:
    // 0x275284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275288: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275288u;
    SET_GPR_U32(ctx, 31, 0x275290u);
    ctx->pc = 0x27528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275288u;
            // 0x27528c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275290u; }
        if (ctx->pc != 0x275290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275290u; }
        if (ctx->pc != 0x275290u) { return; }
    }
    ctx->pc = 0x275290u;
label_275290:
    // 0x275290: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275298: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x275298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x27529c: 0xc097cb8  jal         func_25F2E0
    ctx->pc = 0x27529Cu;
    SET_GPR_U32(ctx, 31, 0x2752A4u);
    ctx->pc = 0x2752A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27529Cu;
            // 0x2752a0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F2E0u;
    if (runtime->hasFunction(0x25F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x25F2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752A4u; }
        if (ctx->pc != 0x2752A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFootSoundID__10CEohMotherFii_0x25f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752A4u; }
        if (ctx->pc != 0x2752A4u) { return; }
    }
    ctx->pc = 0x2752A4u;
label_2752a4:
    // 0x2752a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2752a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2752a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2752a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2752ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2752ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2752B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2752ACu;
            // 0x2752b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2752B4u;
}
