#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATACOMINIT__FP9SPI_STACKi
// Address: 0x194750 - 0x19479c
void ps2__DATACOMINIT__FP9SPI_STACKi_0x194750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATACOMINIT__FP9SPI_STACKi_0x194750");
#endif

    switch (ctx->pc) {
        case 0x194760u: goto label_194760;
        case 0x19478cu: goto label_19478c;
        default: break;
    }

    ctx->pc = 0x194750u;

    // 0x194750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194758: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194758u;
    SET_GPR_U32(ctx, 31, 0x194760u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194760u; }
        if (ctx->pc != 0x194760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194760u; }
        if (ctx->pc != 0x194760u) { return; }
    }
    ctx->pc = 0x194760u;
label_194760:
    // 0x194760: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x194760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x194764: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x194764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x194768: 0xa4229592  sh          $v0, -0x6A6E($at)
    ctx->pc = 0x194768u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294940050), (uint16_t)GPR_U32(ctx, 2));
    // 0x19476c: 0x24841b70  addiu       $a0, $a0, 0x1B70
    ctx->pc = 0x19476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
    // 0x194770: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x194770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x194774: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x194774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194778: 0x8c229574  lw          $v0, -0x6A8C($at)
    ctx->pc = 0x194778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940020)));
    // 0x19477c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x19477cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x194780: 0xaf808b60  sw          $zero, -0x74A0($gp)
    ctx->pc = 0x194780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 0));
    // 0x194784: 0xc049c86  jal         func_127218
    ctx->pc = 0x194784u;
    SET_GPR_U32(ctx, 31, 0x19478Cu);
    ctx->pc = 0x194788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194784u;
            // 0x194788: 0xaf828b5c  sw          $v0, -0x74A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19478Cu; }
        if (ctx->pc != 0x19478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19478Cu; }
        if (ctx->pc != 0x19478Cu) { return; }
    }
    ctx->pc = 0x19478Cu;
label_19478c:
    // 0x19478c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19478cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194794: 0x3e00008  jr          $ra
    ctx->pc = 0x194794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194794u;
            // 0x194798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19479Cu;
}
