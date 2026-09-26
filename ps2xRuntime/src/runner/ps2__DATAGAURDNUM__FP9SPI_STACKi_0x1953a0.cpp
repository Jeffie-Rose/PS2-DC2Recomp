#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAGAURDNUM__FP9SPI_STACKi
// Address: 0x1953a0 - 0x1953c8
void ps2__DATAGAURDNUM__FP9SPI_STACKi_0x1953a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAGAURDNUM__FP9SPI_STACKi_0x1953a0");
#endif

    switch (ctx->pc) {
        case 0x1953b0u: goto label_1953b0;
        default: break;
    }

    ctx->pc = 0x1953a0u;

    // 0x1953a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1953a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1953a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1953a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1953a8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1953A8u;
    SET_GPR_U32(ctx, 31, 0x1953B0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953B0u; }
        if (ctx->pc != 0x1953B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953B0u; }
        if (ctx->pc != 0x1953B0u) { return; }
    }
    ctx->pc = 0x1953B0u;
label_1953b0:
    // 0x1953b0: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1953b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1953b4: 0xa4229598  sh          $v0, -0x6A68($at)
    ctx->pc = 0x1953b4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294940056), (uint16_t)GPR_U32(ctx, 2));
    // 0x1953b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1953b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1953bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1953bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1953c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1953C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1953C0u;
            // 0x1953c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1953C8u;
}
