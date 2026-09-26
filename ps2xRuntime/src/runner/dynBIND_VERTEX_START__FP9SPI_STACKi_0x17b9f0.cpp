#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynBIND_VERTEX_START__FP9SPI_STACKi
// Address: 0x17b9f0 - 0x17ba20
void dynBIND_VERTEX_START__FP9SPI_STACKi_0x17b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynBIND_VERTEX_START__FP9SPI_STACKi_0x17b9f0");
#endif

    switch (ctx->pc) {
        case 0x17ba00u: goto label_17ba00;
        case 0x17ba10u: goto label_17ba10;
        default: break;
    }

    ctx->pc = 0x17b9f0u;

    // 0x17b9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b9f8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B9F8u;
    SET_GPR_U32(ctx, 31, 0x17BA00u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA00u; }
        if (ctx->pc != 0x17BA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA00u; }
        if (ctx->pc != 0x17BA00u) { return; }
    }
    ctx->pc = 0x17BA00u;
label_17ba00:
    // 0x17ba00: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17ba04: 0x8f868a14  lw          $a2, -0x75EC($gp)
    ctx->pc = 0x17ba04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x17ba08: 0xc05e9b8  jal         func_17A6E0
    ctx->pc = 0x17BA08u;
    SET_GPR_U32(ctx, 31, 0x17BA10u);
    ctx->pc = 0x17BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA08u;
            // 0x17ba0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A6E0u;
    if (runtime->hasFunction(0x17A6E0u)) {
        auto targetFn = runtime->lookupFunction(0x17A6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA10u; }
        if (ctx->pc != 0x17BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewBindVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA10u; }
        if (ctx->pc != 0x17BA10u) { return; }
    }
    ctx->pc = 0x17BA10u;
label_17ba10:
    // 0x17ba10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ba14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ba18: 0x3e00008  jr          $ra
    ctx->pc = 0x17BA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA18u;
            // 0x17ba1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BA20u;
}
