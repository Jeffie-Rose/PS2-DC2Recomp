#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ALPHA_P1__FP9SPI_STACKi
// Address: 0x182780 - 0x1827a8
void ps2___ALPHA_P1__FP9SPI_STACKi_0x182780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ALPHA_P1__FP9SPI_STACKi_0x182780");
#endif

    switch (ctx->pc) {
        case 0x182790u: goto label_182790;
        default: break;
    }

    ctx->pc = 0x182780u;

    // 0x182780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182788: 0xc05190c  jal         func_146430
    ctx->pc = 0x182788u;
    SET_GPR_U32(ctx, 31, 0x182790u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182790u; }
        if (ctx->pc != 0x182790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182790u; }
        if (ctx->pc != 0x182790u) { return; }
    }
    ctx->pc = 0x182790u;
label_182790:
    // 0x182790: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182798: 0xe460022c  swc1        $f0, 0x22C($v1)
    ctx->pc = 0x182798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 556), bits); }
    // 0x18279c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18279cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1827a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1827A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1827A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1827A0u;
            // 0x1827a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1827A8u;
}
