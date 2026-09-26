#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SKIP_FCOL__FP12RS_STACKDATAi
// Address: 0x279fb0 - 0x279ff0
void ps2__SET_SKIP_FCOL__FP12RS_STACKDATAi_0x279fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SKIP_FCOL__FP12RS_STACKDATAi_0x279fb0");
#endif

    switch (ctx->pc) {
        case 0x279fd8u: goto label_279fd8;
        default: break;
    }

    ctx->pc = 0x279fb0u;

    // 0x279fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279fb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x279fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279fb8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279FB8u;
    {
        const bool branch_taken_0x279fb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279FB8u;
            // 0x279fbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fb8) {
            ctx->pc = 0x279FC8u;
            goto label_279fc8;
        }
    }
    ctx->pc = 0x279FC0u;
    // 0x279fc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x279FC0u;
    {
        const bool branch_taken_0x279fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279FC0u;
            // 0x279fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fc0) {
            ctx->pc = 0x279FE4u;
            goto label_279fe4;
        }
    }
    ctx->pc = 0x279FC8u;
label_279fc8:
    // 0x279fc8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x279fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fcc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x279fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x279fd0: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x279FD0u;
    SET_GPR_U32(ctx, 31, 0x279FD8u);
    ctx->pc = 0x279FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279FD0u;
            // 0x279fd4: 0x2484e510  addiu       $a0, $a0, -0x1AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FD8u; }
        if (ctx->pc != 0x279FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FD8u; }
        if (ctx->pc != 0x279FD8u) { return; }
    }
    ctx->pc = 0x279FD8u;
label_279fd8:
    // 0x279fd8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x279fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x279fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279fe0: 0xac20e51c  sw          $zero, -0x1AE4($at)
    ctx->pc = 0x279fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960412), GPR_U32(ctx, 0));
label_279fe4:
    // 0x279fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x279FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279FE8u;
            // 0x279fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279FF0u;
}
