#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynVERTEX_START__FP9SPI_STACKi
// Address: 0x17b220 - 0x17b250
void dynVERTEX_START__FP9SPI_STACKi_0x17b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynVERTEX_START__FP9SPI_STACKi_0x17b220");
#endif

    switch (ctx->pc) {
        case 0x17b230u: goto label_17b230;
        case 0x17b240u: goto label_17b240;
        default: break;
    }

    ctx->pc = 0x17b220u;

    // 0x17b220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b228: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B228u;
    SET_GPR_U32(ctx, 31, 0x17B230u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B230u; }
        if (ctx->pc != 0x17B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B230u; }
        if (ctx->pc != 0x17B230u) { return; }
    }
    ctx->pc = 0x17B230u;
label_17b230:
    // 0x17b230: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b234: 0x8f868a14  lw          $a2, -0x75EC($gp)
    ctx->pc = 0x17b234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x17b238: 0xc05e914  jal         func_17A450
    ctx->pc = 0x17B238u;
    SET_GPR_U32(ctx, 31, 0x17B240u);
    ctx->pc = 0x17B23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B238u;
            // 0x17b23c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A450u;
    if (runtime->hasFunction(0x17A450u)) {
        auto targetFn = runtime->lookupFunction(0x17A450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B240u; }
        if (ctx->pc != 0x17B240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B240u; }
        if (ctx->pc != 0x17B240u) { return; }
    }
    ctx->pc = 0x17B240u;
label_17b240:
    // 0x17b240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b248: 0x3e00008  jr          $ra
    ctx->pc = 0x17B248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B248u;
            // 0x17b24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B250u;
}
