#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFLOOR__FP9SPI_STACKi
// Address: 0x1657f0 - 0x165818
void mapFLOOR__FP9SPI_STACKi_0x1657f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFLOOR__FP9SPI_STACKi_0x1657f0");
#endif

    switch (ctx->pc) {
        case 0x165800u: goto label_165800;
        default: break;
    }

    ctx->pc = 0x1657f0u;

    // 0x1657f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1657f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1657f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1657f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1657f8: 0xc05190c  jal         func_146430
    ctx->pc = 0x1657F8u;
    SET_GPR_U32(ctx, 31, 0x165800u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165800u; }
        if (ctx->pc != 0x165800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165800u; }
        if (ctx->pc != 0x165800u) { return; }
    }
    ctx->pc = 0x165800u;
label_165800:
    // 0x165800: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x165800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165808: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x165808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x16580c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16580cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165810: 0x3e00008  jr          $ra
    ctx->pc = 0x165810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165810u;
            // 0x165814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165818u;
}
