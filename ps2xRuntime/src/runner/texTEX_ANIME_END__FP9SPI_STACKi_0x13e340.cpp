#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texTEX_ANIME_END__FP9SPI_STACKi
// Address: 0x13e340 - 0x13e37c
void texTEX_ANIME_END__FP9SPI_STACKi_0x13e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texTEX_ANIME_END__FP9SPI_STACKi_0x13e340");
#endif

    switch (ctx->pc) {
        case 0x13e364u: goto label_13e364;
        default: break;
    }

    ctx->pc = 0x13e340u;

    // 0x13e340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e348: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13e348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e34c: 0xaf828734  sw          $v0, -0x78CC($gp)
    ctx->pc = 0x13e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936372), GPR_U32(ctx, 2));
    // 0x13e350: 0x8f84872c  lw          $a0, -0x78D4($gp)
    ctx->pc = 0x13e350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x13e354: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E354u;
    {
        const bool branch_taken_0x13e354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e354) {
            ctx->pc = 0x13E368u;
            goto label_13e368;
        }
    }
    ctx->pc = 0x13E35Cu;
    // 0x13e35c: 0xc04f4b4  jal         func_13D2D0
    ctx->pc = 0x13E35Cu;
    SET_GPR_U32(ctx, 31, 0x13E364u);
    ctx->pc = 0x13D2D0u;
    if (runtime->hasFunction(0x13D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E364u; }
        if (ctx->pc != 0x13E364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEmptyGroup__15mgCTextureAnimeFv_0x13d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E364u; }
        if (ctx->pc != 0x13E364u) { return; }
    }
    ctx->pc = 0x13E364u;
label_13e364:
    // 0x13e364: 0xaf828734  sw          $v0, -0x78CC($gp)
    ctx->pc = 0x13e364u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936372), GPR_U32(ctx, 2));
label_13e368:
    // 0x13e368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e370: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13e374: 0x3e00008  jr          $ra
    ctx->pc = 0x13E374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E37Cu;
}
