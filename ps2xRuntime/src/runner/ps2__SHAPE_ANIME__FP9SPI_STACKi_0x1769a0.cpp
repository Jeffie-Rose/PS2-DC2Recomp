#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SHAPE_ANIME__FP9SPI_STACKi
// Address: 0x1769a0 - 0x1769d8
void ps2__SHAPE_ANIME__FP9SPI_STACKi_0x1769a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SHAPE_ANIME__FP9SPI_STACKi_0x1769a0");
#endif

    switch (ctx->pc) {
        case 0x1769c0u: goto label_1769c0;
        default: break;
    }

    ctx->pc = 0x1769a0u;

    // 0x1769a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1769a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1769a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1769a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1769a8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1769A8u;
    {
        const bool branch_taken_0x1769a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1769ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769A8u;
            // 0x1769ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769a8) {
            ctx->pc = 0x1769B8u;
            goto label_1769b8;
        }
    }
    ctx->pc = 0x1769B0u;
    // 0x1769b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1769B0u;
    {
        const bool branch_taken_0x1769b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1769B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769B0u;
            // 0x1769b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769b0) {
            ctx->pc = 0x1769CCu;
            goto label_1769cc;
        }
    }
    ctx->pc = 0x1769B8u;
label_1769b8:
    // 0x1769b8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1769B8u;
    SET_GPR_U32(ctx, 31, 0x1769C0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769C0u; }
        if (ctx->pc != 0x1769C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769C0u; }
        if (ctx->pc != 0x1769C0u) { return; }
    }
    ctx->pc = 0x1769C0u;
label_1769c0:
    // 0x1769c0: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1769c4: 0xac620134  sw          $v0, 0x134($v1)
    ctx->pc = 0x1769c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
    // 0x1769c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1769c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1769cc:
    // 0x1769cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1769ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1769d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1769D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1769D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769D0u;
            // 0x1769d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1769D8u;
}
