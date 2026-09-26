#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MES_WINDOW_MODE__FP12RS_STACKDATAi
// Address: 0x26d2c0 - 0x26d30c
void ps2__GET_MES_WINDOW_MODE__FP12RS_STACKDATAi_0x26d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MES_WINDOW_MODE__FP12RS_STACKDATAi_0x26d2c0");
#endif

    switch (ctx->pc) {
        case 0x26d2d4u: goto label_26d2d4;
        case 0x26d2dcu: goto label_26d2dc;
        case 0x26d2f8u: goto label_26d2f8;
        default: break;
    }

    ctx->pc = 0x26d2c0u;

    // 0x26d2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26d2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d2cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D2CCu;
    SET_GPR_U32(ctx, 31, 0x26D2D4u);
    ctx->pc = 0x26D2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2CCu;
            // 0x26d2d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2D4u; }
        if (ctx->pc != 0x26D2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2D4u; }
        if (ctx->pc != 0x26D2D4u) { return; }
    }
    ctx->pc = 0x26D2D4u;
label_26d2d4:
    // 0x26d2d4: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D2D4u;
    SET_GPR_U32(ctx, 31, 0x26D2DCu);
    ctx->pc = 0x26D2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2D4u;
            // 0x26d2d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2DCu; }
        if (ctx->pc != 0x26D2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2DCu; }
        if (ctx->pc != 0x26D2DCu) { return; }
    }
    ctx->pc = 0x26D2DCu;
label_26d2dc:
    // 0x26d2dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D2DCu;
    {
        const bool branch_taken_0x26d2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d2dc) {
            ctx->pc = 0x26D2ECu;
            goto label_26d2ec;
        }
    }
    ctx->pc = 0x26D2E4u;
    // 0x26d2e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26D2E4u;
    {
        const bool branch_taken_0x26d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2E4u;
            // 0x26d2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2e4) {
            ctx->pc = 0x26D2FCu;
            goto label_26d2fc;
        }
    }
    ctx->pc = 0x26D2ECu;
label_26d2ec:
    // 0x26d2ec: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x26d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26d2f0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26D2F0u;
    SET_GPR_U32(ctx, 31, 0x26D2F8u);
    ctx->pc = 0x26D2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2F0u;
            // 0x26d2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2F8u; }
        if (ctx->pc != 0x26D2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2F8u; }
        if (ctx->pc != 0x26D2F8u) { return; }
    }
    ctx->pc = 0x26D2F8u;
label_26d2f8:
    // 0x26d2f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d2fc:
    // 0x26d2fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26d2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d304: 0x3e00008  jr          $ra
    ctx->pc = 0x26D304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D304u;
            // 0x26d308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D30Cu;
}
