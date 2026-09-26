#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventTermination__Fv
// Address: 0x262870 - 0x2628d4
void EdEventTermination__Fv_0x262870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventTermination__Fv_0x262870");
#endif

    switch (ctx->pc) {
        case 0x26289cu: goto label_26289c;
        case 0x2628b4u: goto label_2628b4;
        case 0x2628c0u: goto label_2628c0;
        default: break;
    }

    ctx->pc = 0x262870u;

    // 0x262870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262874: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26287c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262880: 0xac20e564  sw          $zero, -0x1A9C($at)
    ctx->pc = 0x262880u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960484), GPR_U32(ctx, 0));
    // 0x262884: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262888: 0x8c22e568  lw          $v0, -0x1A98($at)
    ctx->pc = 0x262888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960488)));
    // 0x26288c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26288Cu;
    {
        const bool branch_taken_0x26288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x26288c) {
            ctx->pc = 0x26289Cu;
            goto label_26289c;
        }
    }
    ctx->pc = 0x262894u;
    // 0x262894: 0xc062c0c  jal         func_18B030
    ctx->pc = 0x262894u;
    SET_GPR_U32(ctx, 31, 0x26289Cu);
    ctx->pc = 0x262898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262894u;
            // 0x262898: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B030u;
    if (runtime->hasFunction(0x18B030u)) {
        auto targetFn = runtime->lookupFunction(0x18B030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26289Cu; }
        if (ctx->pc != 0x26289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamEND__6CSoundFi_0x18b030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26289Cu; }
        if (ctx->pc != 0x26289Cu) { return; }
    }
    ctx->pc = 0x26289Cu;
label_26289c:
    // 0x26289c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2628a0: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2628a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2628a4: 0x8c26e630  lw          $a2, -0x19D0($at)
    ctx->pc = 0x2628a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960688)));
    // 0x2628a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2628a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2628ac: 0xc062c28  jal         func_18B0A0
    ctx->pc = 0x2628ACu;
    SET_GPR_U32(ctx, 31, 0x2628B4u);
    ctx->pc = 0x2628B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2628ACu;
            // 0x2628b0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0A0u;
    if (runtime->hasFunction(0x18B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628B4u; }
        if (ctx->pc != 0x2628B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamSetVol__6CSoundFiii_0x18b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628B4u; }
        if (ctx->pc != 0x2628B4u) { return; }
    }
    ctx->pc = 0x2628B4u;
label_2628b4:
    // 0x2628b4: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2628b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2628b8: 0xc062bf8  jal         func_18AFE0
    ctx->pc = 0x2628B8u;
    SET_GPR_U32(ctx, 31, 0x2628C0u);
    ctx->pc = 0x2628BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2628B8u;
            // 0x2628bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628C0u; }
        if (ctx->pc != 0x2628C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628C0u; }
        if (ctx->pc != 0x2628C0u) { return; }
    }
    ctx->pc = 0x2628C0u;
label_2628c0:
    // 0x2628c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2628c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2628c4: 0xac20e62c  sw          $zero, -0x19D4($at)
    ctx->pc = 0x2628c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960684), GPR_U32(ctx, 0));
    // 0x2628c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2628c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2628cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2628CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2628D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2628CCu;
            // 0x2628d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2628D4u;
}
