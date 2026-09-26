#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_STOP__FP12RS_STACKDATAi
// Address: 0x2733a0 - 0x273404
void ps2__STREAM_STOP__FP12RS_STACKDATAi_0x2733a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_STOP__FP12RS_STACKDATAi_0x2733a0");
#endif

    switch (ctx->pc) {
        case 0x2733b4u: goto label_2733b4;
        case 0x2733d0u: goto label_2733d0;
        case 0x2733e8u: goto label_2733e8;
        case 0x2733f4u: goto label_2733f4;
        default: break;
    }

    ctx->pc = 0x2733a0u;

    // 0x2733a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2733a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2733a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2733a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2733a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2733a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2733ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2733ACu;
    SET_GPR_U32(ctx, 31, 0x2733B4u);
    ctx->pc = 0x2733B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2733ACu;
            // 0x2733b0: 0xac20e564  sw          $zero, -0x1A9C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733B4u; }
        if (ctx->pc != 0x2733B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733B4u; }
        if (ctx->pc != 0x2733B4u) { return; }
    }
    ctx->pc = 0x2733B4u;
label_2733b4:
    // 0x2733b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2733b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2733b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2733b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2733bc: 0x8c22e568  lw          $v0, -0x1A98($at)
    ctx->pc = 0x2733bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960488)));
    // 0x2733c0: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2733C0u;
    {
        const bool branch_taken_0x2733c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2733C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733C0u;
            // 0x2733c4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733c0) {
            ctx->pc = 0x2733D8u;
            goto label_2733d8;
        }
    }
    ctx->pc = 0x2733C8u;
    // 0x2733c8: 0xc062c0c  jal         func_18B030
    ctx->pc = 0x2733C8u;
    SET_GPR_U32(ctx, 31, 0x2733D0u);
    ctx->pc = 0x2733CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2733C8u;
            // 0x2733cc: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B030u;
    if (runtime->hasFunction(0x18B030u)) {
        auto targetFn = runtime->lookupFunction(0x18B030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733D0u; }
        if (ctx->pc != 0x2733D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamEND__6CSoundFi_0x18b030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733D0u; }
        if (ctx->pc != 0x2733D0u) { return; }
    }
    ctx->pc = 0x2733D0u;
label_2733d0:
    // 0x2733d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2733D0u;
    {
        const bool branch_taken_0x2733d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733D0u;
            // 0x2733d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733d0) {
            ctx->pc = 0x2733F8u;
            goto label_2733f8;
        }
    }
    ctx->pc = 0x2733D8u;
label_2733d8:
    // 0x2733d8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2733d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2733dc: 0x8c26e630  lw          $a2, -0x19D0($at)
    ctx->pc = 0x2733dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960688)));
    // 0x2733e0: 0xc062c28  jal         func_18B0A0
    ctx->pc = 0x2733E0u;
    SET_GPR_U32(ctx, 31, 0x2733E8u);
    ctx->pc = 0x2733E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2733E0u;
            // 0x2733e4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0A0u;
    if (runtime->hasFunction(0x18B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733E8u; }
        if (ctx->pc != 0x2733E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamSetVol__6CSoundFiii_0x18b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733E8u; }
        if (ctx->pc != 0x2733E8u) { return; }
    }
    ctx->pc = 0x2733E8u;
label_2733e8:
    // 0x2733e8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2733e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2733ec: 0xc062bf8  jal         func_18AFE0
    ctx->pc = 0x2733ECu;
    SET_GPR_U32(ctx, 31, 0x2733F4u);
    ctx->pc = 0x2733F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2733ECu;
            // 0x2733f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733F4u; }
        if (ctx->pc != 0x2733F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733F4u; }
        if (ctx->pc != 0x2733F4u) { return; }
    }
    ctx->pc = 0x2733F4u;
label_2733f4:
    // 0x2733f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2733f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2733f8:
    // 0x2733f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2733f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2733fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2733FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733FCu;
            // 0x273400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273404u;
}
