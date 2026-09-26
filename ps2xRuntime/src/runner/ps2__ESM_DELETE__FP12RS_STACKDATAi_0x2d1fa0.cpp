#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_DELETE__FP12RS_STACKDATAi
// Address: 0x2d1fa0 - 0x2d1ff0
void ps2__ESM_DELETE__FP12RS_STACKDATAi_0x2d1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_DELETE__FP12RS_STACKDATAi_0x2d1fa0");
#endif

    switch (ctx->pc) {
        case 0x2d1fb0u: goto label_2d1fb0;
        case 0x2d1fe0u: goto label_2d1fe0;
        default: break;
    }

    ctx->pc = 0x2d1fa0u;

    // 0x2d1fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1fa8: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D1FA8u;
    SET_GPR_U32(ctx, 31, 0x2D1FB0u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1FB0u; }
        if (ctx->pc != 0x2D1FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1FB0u; }
        if (ctx->pc != 0x2D1FB0u) { return; }
    }
    ctx->pc = 0x2D1FB0u;
label_2d1fb0:
    // 0x2d1fb0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1FB0u;
    {
        const bool branch_taken_0x2d1fb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D1FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1FB0u;
            // 0x2d1fb4: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fb0) {
            ctx->pc = 0x2D1FC0u;
            goto label_2d1fc0;
        }
    }
    ctx->pc = 0x2D1FB8u;
    // 0x2d1fb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D1FB8u;
    {
        const bool branch_taken_0x2d1fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1FB8u;
            // 0x2d1fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fb8) {
            ctx->pc = 0x2D1FE4u;
            goto label_2d1fe4;
        }
    }
    ctx->pc = 0x2D1FC0u;
label_2d1fc0:
    // 0x2d1fc0: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1fc4: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d1fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d1fc8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1FC8u;
    {
        const bool branch_taken_0x2d1fc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1FC8u;
            // 0x2d1fcc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fc8) {
            ctx->pc = 0x2D1FD8u;
            goto label_2d1fd8;
        }
    }
    ctx->pc = 0x2D1FD0u;
    // 0x2d1fd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1FD0u;
    {
        const bool branch_taken_0x2d1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1FD0u;
            // 0x2d1fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fd0) {
            ctx->pc = 0x2D1FE4u;
            goto label_2d1fe4;
        }
    }
    ctx->pc = 0x2D1FD8u;
label_2d1fd8:
    // 0x2d1fd8: 0xc0b853c  jal         func_2E14F0
    ctx->pc = 0x2D1FD8u;
    SET_GPR_U32(ctx, 31, 0x2D1FE0u);
    ctx->pc = 0x2D1FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1FD8u;
            // 0x2d1fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E14F0u;
    if (runtime->hasFunction(0x2E14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1FE0u; }
        if (ctx->pc != 0x2D1FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFii_0x2e14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1FE0u; }
        if (ctx->pc != 0x2D1FE0u) { return; }
    }
    ctx->pc = 0x2D1FE0u;
label_2d1fe0:
    // 0x2d1fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1fe4:
    // 0x2d1fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1FE8u;
            // 0x2d1fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1FF0u;
}
