#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ALPHA_P2__FP9SPI_STACKi
// Address: 0x182810 - 0x182838
void ps2___ALPHA_P2__FP9SPI_STACKi_0x182810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ALPHA_P2__FP9SPI_STACKi_0x182810");
#endif

    switch (ctx->pc) {
        case 0x182820u: goto label_182820;
        default: break;
    }

    ctx->pc = 0x182810u;

    // 0x182810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182818: 0xc05190c  jal         func_146430
    ctx->pc = 0x182818u;
    SET_GPR_U32(ctx, 31, 0x182820u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182820u; }
        if (ctx->pc != 0x182820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182820u; }
        if (ctx->pc != 0x182820u) { return; }
    }
    ctx->pc = 0x182820u;
label_182820:
    // 0x182820: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182828: 0xe4600230  swc1        $f0, 0x230($v1)
    ctx->pc = 0x182828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 560), bits); }
    // 0x18282c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18282cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182830: 0x3e00008  jr          $ra
    ctx->pc = 0x182830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182830u;
            // 0x182834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182838u;
}
