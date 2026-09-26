#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_STEP__FP12RS_STACKDATAi
// Address: 0x274ec0 - 0x274f00
void ps2__EOH_SET_STEP__FP12RS_STACKDATAi_0x274ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_STEP__FP12RS_STACKDATAi_0x274ec0");
#endif

    switch (ctx->pc) {
        case 0x274ed4u: goto label_274ed4;
        case 0x274ee0u: goto label_274ee0;
        case 0x274ef0u: goto label_274ef0;
        default: break;
    }

    ctx->pc = 0x274ec0u;

    // 0x274ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274ecc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274ECCu;
    SET_GPR_U32(ctx, 31, 0x274ED4u);
    ctx->pc = 0x274ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274ECCu;
            // 0x274ed0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274ED4u; }
        if (ctx->pc != 0x274ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274ED4u; }
        if (ctx->pc != 0x274ED4u) { return; }
    }
    ctx->pc = 0x274ED4u;
label_274ed4:
    // 0x274ed4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x274ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ed8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x274ED8u;
    SET_GPR_U32(ctx, 31, 0x274EE0u);
    ctx->pc = 0x274EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274ED8u;
            // 0x274edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274EE0u; }
        if (ctx->pc != 0x274EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274EE0u; }
        if (ctx->pc != 0x274EE0u) { return; }
    }
    ctx->pc = 0x274EE0u;
label_274ee0:
    // 0x274ee0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274ee4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x274ee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x274ee8: 0xc097984  jal         func_25E610
    ctx->pc = 0x274EE8u;
    SET_GPR_U32(ctx, 31, 0x274EF0u);
    ctx->pc = 0x274EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274EE8u;
            // 0x274eec: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E610u;
    if (runtime->hasFunction(0x25E610u)) {
        auto targetFn = runtime->lookupFunction(0x25E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274EF0u; }
        if (ctx->pc != 0x274EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStep__10CEohMotherFif_0x25e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274EF0u; }
        if (ctx->pc != 0x274EF0u) { return; }
    }
    ctx->pc = 0x274EF0u;
label_274ef0:
    // 0x274ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x274EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274EF8u;
            // 0x274efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274F00u;
}
