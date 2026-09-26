#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_SE_PAUSE__FP12RS_STACKDATAi
// Address: 0x272a40 - 0x272a80
void ps2__SND_SE_PAUSE__FP12RS_STACKDATAi_0x272a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_SE_PAUSE__FP12RS_STACKDATAi_0x272a40");
#endif

    switch (ctx->pc) {
        case 0x272a54u: goto label_272a54;
        case 0x272a60u: goto label_272a60;
        case 0x272a6cu: goto label_272a6c;
        default: break;
    }

    ctx->pc = 0x272a40u;

    // 0x272a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272a4c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272A4Cu;
    SET_GPR_U32(ctx, 31, 0x272A54u);
    ctx->pc = 0x272A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272A4Cu;
            // 0x272a50: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A54u; }
        if (ctx->pc != 0x272A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A54u; }
        if (ctx->pc != 0x272A54u) { return; }
    }
    ctx->pc = 0x272A54u;
label_272a54:
    // 0x272a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a58: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272A58u;
    SET_GPR_U32(ctx, 31, 0x272A60u);
    ctx->pc = 0x272A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272A58u;
            // 0x272a5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A60u; }
        if (ctx->pc != 0x272A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A60u; }
        if (ctx->pc != 0x272A60u) { return; }
    }
    ctx->pc = 0x272A60u;
label_272a60:
    // 0x272a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a64: 0xc063884  jal         func_18E210
    ctx->pc = 0x272A64u;
    SET_GPR_U32(ctx, 31, 0x272A6Cu);
    ctx->pc = 0x272A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272A64u;
            // 0x272a68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E210u;
    if (runtime->hasFunction(0x18E210u)) {
        auto targetFn = runtime->lookupFunction(0x18E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A6Cu; }
        if (ctx->pc != 0x272A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePause__FUii_0x18e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272A6Cu; }
        if (ctx->pc != 0x272A6Cu) { return; }
    }
    ctx->pc = 0x272A6Cu;
label_272a6c:
    // 0x272a6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272a78: 0x3e00008  jr          $ra
    ctx->pc = 0x272A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272A78u;
            // 0x272a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272A80u;
}
