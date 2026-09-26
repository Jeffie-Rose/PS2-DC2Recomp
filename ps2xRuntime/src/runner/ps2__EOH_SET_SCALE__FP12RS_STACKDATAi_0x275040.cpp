#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_SCALE__FP12RS_STACKDATAi
// Address: 0x275040 - 0x2750a0
void ps2__EOH_SET_SCALE__FP12RS_STACKDATAi_0x275040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_SCALE__FP12RS_STACKDATAi_0x275040");
#endif

    switch (ctx->pc) {
        case 0x275054u: goto label_275054;
        case 0x275064u: goto label_275064;
        case 0x275074u: goto label_275074;
        case 0x275080u: goto label_275080;
        case 0x275090u: goto label_275090;
        default: break;
    }

    ctx->pc = 0x275040u;

    // 0x275040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27504c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27504Cu;
    SET_GPR_U32(ctx, 31, 0x275054u);
    ctx->pc = 0x275050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27504Cu;
            // 0x275050: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275054u; }
        if (ctx->pc != 0x275054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275054u; }
        if (ctx->pc != 0x275054u) { return; }
    }
    ctx->pc = 0x275054u;
label_275054:
    // 0x275054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27505c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27505Cu;
    SET_GPR_U32(ctx, 31, 0x275064u);
    ctx->pc = 0x275060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27505Cu;
            // 0x275060: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275064u; }
        if (ctx->pc != 0x275064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275064u; }
        if (ctx->pc != 0x275064u) { return; }
    }
    ctx->pc = 0x275064u;
label_275064:
    // 0x275064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275068: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x275068u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x27506c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27506Cu;
    SET_GPR_U32(ctx, 31, 0x275074u);
    ctx->pc = 0x275070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27506Cu;
            // 0x275070: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275074u; }
        if (ctx->pc != 0x275074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275074u; }
        if (ctx->pc != 0x275074u) { return; }
    }
    ctx->pc = 0x275074u;
label_275074:
    // 0x275074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275078: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275078u;
    SET_GPR_U32(ctx, 31, 0x275080u);
    ctx->pc = 0x27507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275078u;
            // 0x27507c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275080u; }
        if (ctx->pc != 0x275080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275080u; }
        if (ctx->pc != 0x275080u) { return; }
    }
    ctx->pc = 0x275080u;
label_275080:
    // 0x275080: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275084: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x275084u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x275088: 0xc097a0c  jal         func_25E830
    ctx->pc = 0x275088u;
    SET_GPR_U32(ctx, 31, 0x275090u);
    ctx->pc = 0x27508Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275088u;
            // 0x27508c: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E830u;
    if (runtime->hasFunction(0x25E830u)) {
        auto targetFn = runtime->lookupFunction(0x25E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275090u; }
        if (ctx->pc != 0x275090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__10CEohMotherFifff_0x25e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275090u; }
        if (ctx->pc != 0x275090u) { return; }
    }
    ctx->pc = 0x275090u;
label_275090:
    // 0x275090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275098: 0x3e00008  jr          $ra
    ctx->pc = 0x275098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275098u;
            // 0x27509c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2750A0u;
}
