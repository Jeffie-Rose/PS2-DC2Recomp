#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_SOUND_ID__FP12RS_STACKDATAi
// Address: 0x2753a0 - 0x2753e4
void ps2__EOH_SET_SOUND_ID__FP12RS_STACKDATAi_0x2753a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_SOUND_ID__FP12RS_STACKDATAi_0x2753a0");
#endif

    switch (ctx->pc) {
        case 0x2753b4u: goto label_2753b4;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753d4u: goto label_2753d4;
        default: break;
    }

    ctx->pc = 0x2753a0u;

    // 0x2753a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2753a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2753a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2753a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2753a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2753a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2753ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2753ACu;
    SET_GPR_U32(ctx, 31, 0x2753B4u);
    ctx->pc = 0x2753B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2753ACu;
            // 0x2753b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2753B4u; }
        if (ctx->pc != 0x2753B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2753B4u; }
        if (ctx->pc != 0x2753B4u) { return; }
    }
    ctx->pc = 0x2753B4u;
label_2753b4:
    // 0x2753b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2753b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753b8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2753B8u;
    SET_GPR_U32(ctx, 31, 0x2753C0u);
    ctx->pc = 0x2753BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2753B8u;
            // 0x2753bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2753C0u; }
        if (ctx->pc != 0x2753C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2753C0u; }
        if (ctx->pc != 0x2753C0u) { return; }
    }
    ctx->pc = 0x2753C0u;
label_2753c0:
    // 0x2753c0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2753c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2753c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2753c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753c8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2753c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2753cc: 0xc097cfc  jal         func_25F3F0
    ctx->pc = 0x2753CCu;
    SET_GPR_U32(ctx, 31, 0x2753D4u);
    ctx->pc = 0x2753D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2753CCu;
            // 0x2753d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F3F0u;
    if (runtime->hasFunction(0x25F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x25F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2753D4u; }
        if (ctx->pc != 0x2753D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSoundID__10CEohMotherFiUi_0x25f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2753D4u; }
        if (ctx->pc != 0x2753D4u) { return; }
    }
    ctx->pc = 0x2753D4u;
label_2753d4:
    // 0x2753d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2753d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2753d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2753d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2753dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2753DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2753E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2753DCu;
            // 0x2753e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2753E4u;
}
