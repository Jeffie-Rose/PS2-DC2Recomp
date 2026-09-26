#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_GET_STATUS__FP12RS_STACKDATAi
// Address: 0x273440 - 0x273480
void ps2__STREAM_GET_STATUS__FP12RS_STACKDATAi_0x273440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_GET_STATUS__FP12RS_STACKDATAi_0x273440");
#endif

    switch (ctx->pc) {
        case 0x273454u: goto label_273454;
        case 0x273460u: goto label_273460;
        case 0x27346cu: goto label_27346c;
        default: break;
    }

    ctx->pc = 0x273440u;

    // 0x273440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27344c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27344Cu;
    SET_GPR_U32(ctx, 31, 0x273454u);
    ctx->pc = 0x273450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27344Cu;
            // 0x273450: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273454u; }
        if (ctx->pc != 0x273454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273454u; }
        if (ctx->pc != 0x273454u) { return; }
    }
    ctx->pc = 0x273454u;
label_273454:
    // 0x273454: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x273454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x273458: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x273458u;
    SET_GPR_U32(ctx, 31, 0x273460u);
    ctx->pc = 0x27345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273458u;
            // 0x27345c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0B0u;
    if (runtime->hasFunction(0x18B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273460u; }
        if (ctx->pc != 0x273460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamGetState__6CSoundFi_0x18b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273460u; }
        if (ctx->pc != 0x273460u) { return; }
    }
    ctx->pc = 0x273460u;
label_273460:
    // 0x273460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273464: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x273464u;
    SET_GPR_U32(ctx, 31, 0x27346Cu);
    ctx->pc = 0x273468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273464u;
            // 0x273468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27346Cu; }
        if (ctx->pc != 0x27346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27346Cu; }
        if (ctx->pc != 0x27346Cu) { return; }
    }
    ctx->pc = 0x27346Cu;
label_27346c:
    // 0x27346c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27346cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273478: 0x3e00008  jr          $ra
    ctx->pc = 0x273478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273478u;
            // 0x27347c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273480u;
}
