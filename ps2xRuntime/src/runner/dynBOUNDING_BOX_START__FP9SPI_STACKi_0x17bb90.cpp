#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynBOUNDING_BOX_START__FP9SPI_STACKi
// Address: 0x17bb90 - 0x17bbc0
void dynBOUNDING_BOX_START__FP9SPI_STACKi_0x17bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynBOUNDING_BOX_START__FP9SPI_STACKi_0x17bb90");
#endif

    switch (ctx->pc) {
        case 0x17bba0u: goto label_17bba0;
        case 0x17bbb0u: goto label_17bbb0;
        default: break;
    }

    ctx->pc = 0x17bb90u;

    // 0x17bb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bb98: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17BB98u;
    SET_GPR_U32(ctx, 31, 0x17BBA0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBA0u; }
        if (ctx->pc != 0x17BBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBA0u; }
        if (ctx->pc != 0x17BBA0u) { return; }
    }
    ctx->pc = 0x17BBA0u;
label_17bba0:
    // 0x17bba0: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17bba4: 0x8f868a14  lw          $a2, -0x75EC($gp)
    ctx->pc = 0x17bba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x17bba8: 0xc05e9e0  jal         func_17A780
    ctx->pc = 0x17BBA8u;
    SET_GPR_U32(ctx, 31, 0x17BBB0u);
    ctx->pc = 0x17BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBA8u;
            // 0x17bbac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A780u;
    if (runtime->hasFunction(0x17A780u)) {
        auto targetFn = runtime->lookupFunction(0x17A780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBB0u; }
        if (ctx->pc != 0x17BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewBoundingBoxTable__13CDynamicAnimeFiP9mgCMemory_0x17a780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBB0u; }
        if (ctx->pc != 0x17BBB0u) { return; }
    }
    ctx->pc = 0x17BBB0u;
label_17bbb0:
    // 0x17bbb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBB8u;
            // 0x17bbbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BBC0u;
}
