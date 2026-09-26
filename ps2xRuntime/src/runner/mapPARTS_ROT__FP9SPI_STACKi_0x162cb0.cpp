#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPARTS_ROT__FP9SPI_STACKi
// Address: 0x162cb0 - 0x162cd8
void mapPARTS_ROT__FP9SPI_STACKi_0x162cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPARTS_ROT__FP9SPI_STACKi_0x162cb0");
#endif

    switch (ctx->pc) {
        case 0x162cc8u: goto label_162cc8;
        default: break;
    }

    ctx->pc = 0x162cb0u;

    // 0x162cb0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x162cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162cb8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x162cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x162cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162cc0: 0xc051928  jal         func_1464A0
    ctx->pc = 0x162CC0u;
    SET_GPR_U32(ctx, 31, 0x162CC8u);
    ctx->pc = 0x162CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162CC0u;
            // 0x162cc4: 0x248404b0  addiu       $a0, $a0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CC8u; }
        if (ctx->pc != 0x162CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CC8u; }
        if (ctx->pc != 0x162CC8u) { return; }
    }
    ctx->pc = 0x162CC8u;
label_162cc8:
    // 0x162cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x162CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162CD0u;
            // 0x162cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162CD8u;
}
