#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ANGLE_CMP__FP12RS_STACKDATAi
// Address: 0x1e16b0 - 0x1e170c
void ps2__ANGLE_CMP__FP12RS_STACKDATAi_0x1e16b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ANGLE_CMP__FP12RS_STACKDATAi_0x1e16b0");
#endif

    switch (ctx->pc) {
        case 0x1e16c4u: goto label_1e16c4;
        case 0x1e16d4u: goto label_1e16d4;
        case 0x1e16e4u: goto label_1e16e4;
        case 0x1e16ecu: goto label_1e16ec;
        case 0x1e16f8u: goto label_1e16f8;
        default: break;
    }

    ctx->pc = 0x1e16b0u;

    // 0x1e16b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e16b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e16b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e16b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e16b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e16b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e16bc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E16BCu;
    SET_GPR_U32(ctx, 31, 0x1E16C4u);
    ctx->pc = 0x1E16C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16BCu;
            // 0x1e16c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16C4u; }
        if (ctx->pc != 0x1E16C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16C4u; }
        if (ctx->pc != 0x1E16C4u) { return; }
    }
    ctx->pc = 0x1E16C4u;
label_1e16c4:
    // 0x1e16c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e16c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e16c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e16cc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E16CCu;
    SET_GPR_U32(ctx, 31, 0x1E16D4u);
    ctx->pc = 0x1E16D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16CCu;
            // 0x1e16d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D4u; }
        if (ctx->pc != 0x1E16D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D4u; }
        if (ctx->pc != 0x1E16D4u) { return; }
    }
    ctx->pc = 0x1E16D4u;
label_1e16d4:
    // 0x1e16d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e16d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16d8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1e16d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1e16dc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E16DCu;
    SET_GPR_U32(ctx, 31, 0x1E16E4u);
    ctx->pc = 0x1E16E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16DCu;
            // 0x1e16e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16E4u; }
        if (ctx->pc != 0x1E16E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16E4u; }
        if (ctx->pc != 0x1E16E4u) { return; }
    }
    ctx->pc = 0x1E16E4u;
label_1e16e4:
    // 0x1e16e4: 0xc04c344  jal         func_130D10
    ctx->pc = 0x1E16E4u;
    SET_GPR_U32(ctx, 31, 0x1E16ECu);
    ctx->pc = 0x1E16E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16E4u;
            // 0x1e16e8: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16ECu; }
        if (ctx->pc != 0x1E16ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16ECu; }
        if (ctx->pc != 0x1E16ECu) { return; }
    }
    ctx->pc = 0x1E16ECu;
label_1e16ec:
    // 0x1e16ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e16ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16f0: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E16F0u;
    SET_GPR_U32(ctx, 31, 0x1E16F8u);
    ctx->pc = 0x1E16F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16F0u;
            // 0x1e16f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16F8u; }
        if (ctx->pc != 0x1E16F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16F8u; }
        if (ctx->pc != 0x1E16F8u) { return; }
    }
    ctx->pc = 0x1E16F8u;
label_1e16f8:
    // 0x1e16f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e16f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e16fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1704: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1704u;
            // 0x1e1708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E170Cu;
}
