#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_RATE__FP9SPI_STACKi
// Address: 0x1d5840 - 0x1d5868
void ps2__ROOM_RATE__FP9SPI_STACKi_0x1d5840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_RATE__FP9SPI_STACKi_0x1d5840");
#endif

    switch (ctx->pc) {
        case 0x1d5850u: goto label_1d5850;
        default: break;
    }

    ctx->pc = 0x1d5840u;

    // 0x1d5840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5848: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1D5848u;
    SET_GPR_U32(ctx, 31, 0x1D5850u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5850u; }
        if (ctx->pc != 0x1D5850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5850u; }
        if (ctx->pc != 0x1D5850u) { return; }
    }
    ctx->pc = 0x1D5850u;
label_1d5850:
    // 0x1d5850: 0x8f838e50  lw          $v1, -0x71B0($gp)
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1d5854: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1d5854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1d5858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d585c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5860: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5860u;
            // 0x1d5864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5868u;
}
