#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAATTACHINIT__FP9SPI_STACKi
// Address: 0x194ee0 - 0x194f14
void ps2__DATAATTACHINIT__FP9SPI_STACKi_0x194ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAATTACHINIT__FP9SPI_STACKi_0x194ee0");
#endif

    switch (ctx->pc) {
        case 0x194ef0u: goto label_194ef0;
        default: break;
    }

    ctx->pc = 0x194ee0u;

    // 0x194ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194ee8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194EE8u;
    SET_GPR_U32(ctx, 31, 0x194EF0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194EF0u; }
        if (ctx->pc != 0x194EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194EF0u; }
        if (ctx->pc != 0x194EF0u) { return; }
    }
    ctx->pc = 0x194EF0u;
label_194ef0:
    // 0x194ef0: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x194ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x194ef4: 0xa422959a  sh          $v0, -0x6A66($at)
    ctx->pc = 0x194ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294940058), (uint16_t)GPR_U32(ctx, 2));
    // 0x194ef8: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x194efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194f00: 0x8c239584  lw          $v1, -0x6A7C($at)
    ctx->pc = 0x194f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940036)));
    // 0x194f04: 0xaf838b6c  sw          $v1, -0x7494($gp)
    ctx->pc = 0x194f04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 3));
    // 0x194f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x194F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194F0Cu;
            // 0x194f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194F14u;
}
