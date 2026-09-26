#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DEL_EXT_MOTION__FP12RS_STACKDATAi
// Address: 0x263a80 - 0x263ac4
void ps2__DEL_EXT_MOTION__FP12RS_STACKDATAi_0x263a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DEL_EXT_MOTION__FP12RS_STACKDATAi_0x263a80");
#endif

    switch (ctx->pc) {
        case 0x263a90u: goto label_263a90;
        case 0x263a9cu: goto label_263a9c;
        case 0x263ab4u: goto label_263ab4;
        default: break;
    }

    ctx->pc = 0x263a80u;

    // 0x263a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263a88: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263A88u;
    SET_GPR_U32(ctx, 31, 0x263A90u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A90u; }
        if (ctx->pc != 0x263A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A90u; }
        if (ctx->pc != 0x263A90u) { return; }
    }
    ctx->pc = 0x263A90u;
label_263a90:
    // 0x263a90: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x263a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263a94: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x263A94u;
    SET_GPR_U32(ctx, 31, 0x263A9Cu);
    ctx->pc = 0x263A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263A94u;
            // 0x263a98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A9Cu; }
        if (ctx->pc != 0x263A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A9Cu; }
        if (ctx->pc != 0x263A9Cu) { return; }
    }
    ctx->pc = 0x263A9Cu;
label_263a9c:
    // 0x263a9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263A9Cu;
    {
        const bool branch_taken_0x263a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A9Cu;
            // 0x263aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a9c) {
            ctx->pc = 0x263AACu;
            goto label_263aac;
        }
    }
    ctx->pc = 0x263AA4u;
    // 0x263aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263AA4u;
    {
        const bool branch_taken_0x263aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263AA4u;
            // 0x263aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263aa4) {
            ctx->pc = 0x263AB8u;
            goto label_263ab8;
        }
    }
    ctx->pc = 0x263AACu;
label_263aac:
    // 0x263aac: 0xc05d31c  jal         func_174C70
    ctx->pc = 0x263AACu;
    SET_GPR_U32(ctx, 31, 0x263AB4u);
    ctx->pc = 0x174C70u;
    if (runtime->hasFunction(0x174C70u)) {
        auto targetFn = runtime->lookupFunction(0x174C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263AB4u; }
        if (ctx->pc != 0x263AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteExtMotion__11CCharacter2Fv_0x174c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263AB4u; }
        if (ctx->pc != 0x263AB4u) { return; }
    }
    ctx->pc = 0x263AB4u;
label_263ab4:
    // 0x263ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263ab8:
    // 0x263ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263abc: 0x3e00008  jr          $ra
    ctx->pc = 0x263ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263ABCu;
            // 0x263ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263AC4u;
}
