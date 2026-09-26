#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_FINISH__FP12RS_STACKDATAi
// Address: 0x2d1f40 - 0x2d1f94
void ps2__ESM_FINISH__FP12RS_STACKDATAi_0x2d1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_FINISH__FP12RS_STACKDATAi_0x2d1f40");
#endif

    switch (ctx->pc) {
        case 0x2d1f50u: goto label_2d1f50;
        case 0x2d1f84u: goto label_2d1f84;
        default: break;
    }

    ctx->pc = 0x2d1f40u;

    // 0x2d1f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1f48: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D1F48u;
    SET_GPR_U32(ctx, 31, 0x2D1F50u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F50u; }
        if (ctx->pc != 0x2D1F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F50u; }
        if (ctx->pc != 0x2D1F50u) { return; }
    }
    ctx->pc = 0x2D1F50u;
label_2d1f50:
    // 0x2d1f50: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1F50u;
    {
        const bool branch_taken_0x2d1f50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D1F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F50u;
            // 0x2d1f54: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f50) {
            ctx->pc = 0x2D1F60u;
            goto label_2d1f60;
        }
    }
    ctx->pc = 0x2D1F58u;
    // 0x2d1f58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D1F58u;
    {
        const bool branch_taken_0x2d1f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F58u;
            // 0x2d1f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f58) {
            ctx->pc = 0x2D1F88u;
            goto label_2d1f88;
        }
    }
    ctx->pc = 0x2D1F60u;
label_2d1f60:
    // 0x2d1f60: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1f64: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d1f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d1f68: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1F68u;
    {
        const bool branch_taken_0x2d1f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F68u;
            // 0x2d1f6c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f68) {
            ctx->pc = 0x2D1F78u;
            goto label_2d1f78;
        }
    }
    ctx->pc = 0x2D1F70u;
    // 0x2d1f70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F70u;
    {
        const bool branch_taken_0x2d1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F70u;
            // 0x2d1f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f70) {
            ctx->pc = 0x2D1F88u;
            goto label_2d1f88;
        }
    }
    ctx->pc = 0x2D1F78u;
label_2d1f78:
    // 0x2d1f78: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x2d1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2d1f7c: 0xc0b8854  jal         func_2E2150
    ctx->pc = 0x2D1F7Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F84u);
    ctx->pc = 0x2D1F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F7Cu;
            // 0x2d1f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2150u;
    if (runtime->hasFunction(0x2E2150u)) {
        auto targetFn = runtime->lookupFunction(0x2E2150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F84u; }
        if (ctx->pc != 0x2D1F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptProgNo__16CEffectScriptManFiii_0x2e2150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F84u; }
        if (ctx->pc != 0x2D1F84u) { return; }
    }
    ctx->pc = 0x2D1F84u;
label_2d1f84:
    // 0x2d1f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1f88:
    // 0x2d1f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F8Cu;
            // 0x2d1f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1F94u;
}
