#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynFIX_VERTEX_START__FP9SPI_STACKi
// Address: 0x17b410 - 0x17b440
void dynFIX_VERTEX_START__FP9SPI_STACKi_0x17b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynFIX_VERTEX_START__FP9SPI_STACKi_0x17b410");
#endif

    switch (ctx->pc) {
        case 0x17b420u: goto label_17b420;
        case 0x17b430u: goto label_17b430;
        default: break;
    }

    ctx->pc = 0x17b410u;

    // 0x17b410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b418: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B418u;
    SET_GPR_U32(ctx, 31, 0x17B420u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B420u; }
        if (ctx->pc != 0x17B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B420u; }
        if (ctx->pc != 0x17B420u) { return; }
    }
    ctx->pc = 0x17B420u;
label_17b420:
    // 0x17b420: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b424: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x17b424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17b428: 0xc05e96c  jal         func_17A5B0
    ctx->pc = 0x17B428u;
    SET_GPR_U32(ctx, 31, 0x17B430u);
    ctx->pc = 0x17B42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B428u;
            // 0x17b42c: 0x8f868a14  lw          $a2, -0x75EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A5B0u;
    if (runtime->hasFunction(0x17A5B0u)) {
        auto targetFn = runtime->lookupFunction(0x17A5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B430u; }
        if (ctx->pc != 0x17B430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewFixVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B430u; }
        if (ctx->pc != 0x17B430u) { return; }
    }
    ctx->pc = 0x17B430u;
label_17b430:
    // 0x17b430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b438: 0x3e00008  jr          $ra
    ctx->pc = 0x17B438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B438u;
            // 0x17b43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B440u;
}
