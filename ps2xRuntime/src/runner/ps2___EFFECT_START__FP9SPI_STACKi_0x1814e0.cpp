#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __EFFECT_START__FP9SPI_STACKi
// Address: 0x1814e0 - 0x18152c
void ps2___EFFECT_START__FP9SPI_STACKi_0x1814e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___EFFECT_START__FP9SPI_STACKi_0x1814e0");
#endif

    switch (ctx->pc) {
        case 0x1814f0u: goto label_1814f0;
        case 0x181500u: goto label_181500;
        case 0x181508u: goto label_181508;
        case 0x181518u: goto label_181518;
        default: break;
    }

    ctx->pc = 0x1814e0u;

    // 0x1814e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1814e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1814e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1814e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1814e8: 0xc05191c  jal         func_146470
    ctx->pc = 0x1814E8u;
    SET_GPR_U32(ctx, 31, 0x1814F0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814F0u; }
        if (ctx->pc != 0x1814F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814F0u; }
        if (ctx->pc != 0x1814F0u) { return; }
    }
    ctx->pc = 0x1814F0u;
label_1814f0:
    // 0x1814f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1814f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1814f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1814f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814f8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1814F8u;
    SET_GPR_U32(ctx, 31, 0x181500u);
    ctx->pc = 0x1814FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814F8u;
            // 0x1814fc: 0x248407b0  addiu       $a0, $a0, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181500u; }
        if (ctx->pc != 0x181500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181500u; }
        if (ctx->pc != 0x181500u) { return; }
    }
    ctx->pc = 0x181500u;
label_181500:
    // 0x181500: 0xc040174  jal         func_1005D0
    ctx->pc = 0x181500u;
    SET_GPR_U32(ctx, 31, 0x181508u);
    ctx->pc = 0x181504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181500u;
            // 0x181504: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1005D0u;
    if (runtime->hasFunction(0x1005D0u)) {
        auto targetFn = runtime->lookupFunction(0x1005D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181508u; }
        if (ctx->pc != 0x181508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUi_0x1005d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181508u; }
        if (ctx->pc != 0x181508u) { return; }
    }
    ctx->pc = 0x181508u;
label_181508:
    // 0x181508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181508u;
    {
        const bool branch_taken_0x181508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181508u;
            // 0x18150c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181508) {
            ctx->pc = 0x181518u;
            goto label_181518;
        }
    }
    ctx->pc = 0x181510u;
    // 0x181510: 0xc06004c  jal         func_180130
    ctx->pc = 0x181510u;
    SET_GPR_U32(ctx, 31, 0x181518u);
    ctx->pc = 0x180130u;
    if (runtime->hasFunction(0x180130u)) {
        auto targetFn = runtime->lookupFunction(0x180130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181518u; }
        if (ctx->pc != 0x181518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11CEffectCtrlFv_0x180130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181518u; }
        if (ctx->pc != 0x181518u) { return; }
    }
    ctx->pc = 0x181518u;
label_181518:
    // 0x181518: 0xaf828a5c  sw          $v0, -0x75A4($gp)
    ctx->pc = 0x181518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937180), GPR_U32(ctx, 2));
    // 0x18151c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18151cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181524: 0x3e00008  jr          $ra
    ctx->pc = 0x181524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181524u;
            // 0x181528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18152Cu;
}
