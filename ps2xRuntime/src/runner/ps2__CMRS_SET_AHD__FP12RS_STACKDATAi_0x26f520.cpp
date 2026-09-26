#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_SET_AHD__FP12RS_STACKDATAi
// Address: 0x26f520 - 0x26f56c
void ps2__CMRS_SET_AHD__FP12RS_STACKDATAi_0x26f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_SET_AHD__FP12RS_STACKDATAi_0x26f520");
#endif

    switch (ctx->pc) {
        case 0x26f530u: goto label_26f530;
        case 0x26f540u: goto label_26f540;
        case 0x26f54cu: goto label_26f54c;
        case 0x26f55cu: goto label_26f55c;
        default: break;
    }

    ctx->pc = 0x26f520u;

    // 0x26f520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f528: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F528u;
    SET_GPR_U32(ctx, 31, 0x26F530u);
    ctx->pc = 0x26F52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F528u;
            // 0x26f52c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F530u; }
        if (ctx->pc != 0x26F530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F530u; }
        if (ctx->pc != 0x26F530u) { return; }
    }
    ctx->pc = 0x26F530u;
label_26f530:
    // 0x26f530: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26f530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f534: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26f534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26f538: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F538u;
    SET_GPR_U32(ctx, 31, 0x26F540u);
    ctx->pc = 0x26F53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F538u;
            // 0x26f53c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F540u; }
        if (ctx->pc != 0x26F540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F540u; }
        if (ctx->pc != 0x26F540u) { return; }
    }
    ctx->pc = 0x26F540u;
label_26f540:
    // 0x26f540: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f544: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F544u;
    SET_GPR_U32(ctx, 31, 0x26F54Cu);
    ctx->pc = 0x26F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F544u;
            // 0x26f548: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F54Cu; }
        if (ctx->pc != 0x26F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F54Cu; }
        if (ctx->pc != 0x26F54Cu) { return; }
    }
    ctx->pc = 0x26F54Cu;
label_26f54c:
    // 0x26f54c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f550: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x26f550u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x26f554: 0xc096878  jal         func_25A1E0
    ctx->pc = 0x26F554u;
    SET_GPR_U32(ctx, 31, 0x26F55Cu);
    ctx->pc = 0x26F558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F554u;
            // 0x26f558: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A1E0u;
    if (runtime->hasFunction(0x25A1E0u)) {
        auto targetFn = runtime->lookupFunction(0x25A1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F55Cu; }
        if (ctx->pc != 0x26F55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAHD__12CSceneCmrSeqFfff_0x25a1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F55Cu; }
        if (ctx->pc != 0x26F55Cu) { return; }
    }
    ctx->pc = 0x26F55Cu;
label_26f55c:
    // 0x26f55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f564: 0x3e00008  jr          $ra
    ctx->pc = 0x26F564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F564u;
            // 0x26f568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F56Cu;
}
