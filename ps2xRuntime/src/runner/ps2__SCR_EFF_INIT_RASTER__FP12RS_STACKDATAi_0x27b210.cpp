#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCR_EFF_INIT_RASTER__FP12RS_STACKDATAi
// Address: 0x27b210 - 0x27b25c
void ps2__SCR_EFF_INIT_RASTER__FP12RS_STACKDATAi_0x27b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCR_EFF_INIT_RASTER__FP12RS_STACKDATAi_0x27b210");
#endif

    switch (ctx->pc) {
        case 0x27b220u: goto label_27b220;
        case 0x27b230u: goto label_27b230;
        case 0x27b23cu: goto label_27b23c;
        case 0x27b24cu: goto label_27b24c;
        default: break;
    }

    ctx->pc = 0x27b210u;

    // 0x27b210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b218: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B218u;
    SET_GPR_U32(ctx, 31, 0x27B220u);
    ctx->pc = 0x27B21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B218u;
            // 0x27b21c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B220u; }
        if (ctx->pc != 0x27B220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B220u; }
        if (ctx->pc != 0x27B220u) { return; }
    }
    ctx->pc = 0x27B220u;
label_27b220:
    // 0x27b220: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b224: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27b224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x27b228: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B228u;
    SET_GPR_U32(ctx, 31, 0x27B230u);
    ctx->pc = 0x27B22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B228u;
            // 0x27b22c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B230u; }
        if (ctx->pc != 0x27B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B230u; }
        if (ctx->pc != 0x27B230u) { return; }
    }
    ctx->pc = 0x27B230u;
label_27b230:
    // 0x27b230: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27b230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b234: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27B234u;
    SET_GPR_U32(ctx, 31, 0x27B23Cu);
    ctx->pc = 0x27B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B234u;
            // 0x27b238: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B23Cu; }
        if (ctx->pc != 0x27B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B23Cu; }
        if (ctx->pc != 0x27B23Cu) { return; }
    }
    ctx->pc = 0x27B23Cu;
label_27b23c:
    // 0x27b23c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27b240: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x27b240u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x27b244: 0xc098234  jal         func_2608D0
    ctx->pc = 0x27B244u;
    SET_GPR_U32(ctx, 31, 0x27B24Cu);
    ctx->pc = 0x27B248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B244u;
            // 0x27b248: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2608D0u;
    if (runtime->hasFunction(0x2608D0u)) {
        auto targetFn = runtime->lookupFunction(0x2608D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B24Cu; }
        if (ctx->pc != 0x27B24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitRaster__13CScreenEffectFfff_0x2608d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B24Cu; }
        if (ctx->pc != 0x27B24Cu) { return; }
    }
    ctx->pc = 0x27B24Cu;
label_27b24c:
    // 0x27b24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b254: 0x3e00008  jr          $ra
    ctx->pc = 0x27B254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B254u;
            // 0x27b258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B25Cu;
}
