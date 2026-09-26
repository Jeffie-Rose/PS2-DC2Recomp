#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_CLOSE__FP12RS_STACKDATAi
// Address: 0x273b50 - 0x273ba0
void ps2__STREAM_CLOSE__FP12RS_STACKDATAi_0x273b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_CLOSE__FP12RS_STACKDATAi_0x273b50");
#endif

    switch (ctx->pc) {
        case 0x273b64u: goto label_273b64;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b88u: goto label_273b88;
        default: break;
    }

    ctx->pc = 0x273b50u;

    // 0x273b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273b54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273b5c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273B5Cu;
    SET_GPR_U32(ctx, 31, 0x273B64u);
    ctx->pc = 0x273B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B5Cu;
            // 0x273b60: 0xac20e564  sw          $zero, -0x1A9C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B64u; }
        if (ctx->pc != 0x273B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B64u; }
        if (ctx->pc != 0x273B64u) { return; }
    }
    ctx->pc = 0x273B64u;
label_273b64:
    // 0x273b64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273b68: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x273b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x273b6c: 0x8c26e630  lw          $a2, -0x19D0($at)
    ctx->pc = 0x273b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960688)));
    // 0x273b70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273b74: 0xc062c28  jal         func_18B0A0
    ctx->pc = 0x273B74u;
    SET_GPR_U32(ctx, 31, 0x273B7Cu);
    ctx->pc = 0x273B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B74u;
            // 0x273b78: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0A0u;
    if (runtime->hasFunction(0x18B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B7Cu; }
        if (ctx->pc != 0x273B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamSetVol__6CSoundFiii_0x18b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B7Cu; }
        if (ctx->pc != 0x273B7Cu) { return; }
    }
    ctx->pc = 0x273B7Cu;
label_273b7c:
    // 0x273b7c: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x273b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x273b80: 0xc062bf8  jal         func_18AFE0
    ctx->pc = 0x273B80u;
    SET_GPR_U32(ctx, 31, 0x273B88u);
    ctx->pc = 0x273B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B80u;
            // 0x273b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B88u; }
        if (ctx->pc != 0x273B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B88u; }
        if (ctx->pc != 0x273B88u) { return; }
    }
    ctx->pc = 0x273B88u;
label_273b88:
    // 0x273b88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273b90: 0xac20e62c  sw          $zero, -0x19D4($at)
    ctx->pc = 0x273b90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960684), GPR_U32(ctx, 0));
    // 0x273b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273b98: 0x3e00008  jr          $ra
    ctx->pc = 0x273B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B98u;
            // 0x273b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273BA0u;
}
