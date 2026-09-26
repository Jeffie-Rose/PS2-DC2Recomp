#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_FRAME_ALPHA__FP12RS_STACKDATAi
// Address: 0x2756f0 - 0x275740
void ps2__EOH_SET_FRAME_ALPHA__FP12RS_STACKDATAi_0x2756f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_FRAME_ALPHA__FP12RS_STACKDATAi_0x2756f0");
#endif

    switch (ctx->pc) {
        case 0x275704u: goto label_275704;
        case 0x275714u: goto label_275714;
        case 0x275720u: goto label_275720;
        case 0x275730u: goto label_275730;
        default: break;
    }

    ctx->pc = 0x2756f0u;

    // 0x2756f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2756f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2756f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2756f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2756f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2756f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2756fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2756FCu;
    SET_GPR_U32(ctx, 31, 0x275704u);
    ctx->pc = 0x275700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2756FCu;
            // 0x275700: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275704u; }
        if (ctx->pc != 0x275704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275704u; }
        if (ctx->pc != 0x275704u) { return; }
    }
    ctx->pc = 0x275704u;
label_275704:
    // 0x275704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27570c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27570Cu;
    SET_GPR_U32(ctx, 31, 0x275714u);
    ctx->pc = 0x275710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27570Cu;
            // 0x275710: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275714u; }
        if (ctx->pc != 0x275714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275714u; }
        if (ctx->pc != 0x275714u) { return; }
    }
    ctx->pc = 0x275714u;
label_275714:
    // 0x275714: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275718: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275718u;
    SET_GPR_U32(ctx, 31, 0x275720u);
    ctx->pc = 0x27571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275718u;
            // 0x27571c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275720u; }
        if (ctx->pc != 0x275720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275720u; }
        if (ctx->pc != 0x275720u) { return; }
    }
    ctx->pc = 0x275720u;
label_275720:
    // 0x275720: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275724: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x275724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x275728: 0xc097dbc  jal         func_25F6F0
    ctx->pc = 0x275728u;
    SET_GPR_U32(ctx, 31, 0x275730u);
    ctx->pc = 0x27572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275728u;
            // 0x27572c: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F6F0u;
    if (runtime->hasFunction(0x25F6F0u)) {
        auto targetFn = runtime->lookupFunction(0x25F6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275730u; }
        if (ctx->pc != 0x275730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrameObjAlpha__10CEohMotherFiPcf_0x25f6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275730u; }
        if (ctx->pc != 0x275730u) { return; }
    }
    ctx->pc = 0x275730u;
label_275730:
    // 0x275730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275738: 0x3e00008  jr          $ra
    ctx->pc = 0x275738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27573Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275738u;
            // 0x27573c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275740u;
}
