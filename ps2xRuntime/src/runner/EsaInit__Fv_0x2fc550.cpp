#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EsaInit__Fv
// Address: 0x2fc550 - 0x2fc580
void EsaInit__Fv_0x2fc550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EsaInit__Fv_0x2fc550");
#endif

    switch (ctx->pc) {
        case 0x2fc550u: goto label_2fc550;
        case 0x2fc554u: goto label_2fc554;
        case 0x2fc558u: goto label_2fc558;
        case 0x2fc55cu: goto label_2fc55c;
        case 0x2fc560u: goto label_2fc560;
        case 0x2fc564u: goto label_2fc564;
        case 0x2fc568u: goto label_2fc568;
        case 0x2fc56cu: goto label_2fc56c;
        case 0x2fc570u: goto label_2fc570;
        case 0x2fc574u: goto label_2fc574;
        case 0x2fc578u: goto label_2fc578;
        case 0x2fc57cu: goto label_2fc57c;
        default: break;
    }

    ctx->pc = 0x2fc550u;

label_2fc550:
    // 0x2fc550: 0x8f849f88  lw          $a0, -0x6078($gp)
    ctx->pc = 0x2fc550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942600)));
label_2fc554:
    // 0x2fc554: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fc554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fc558:
    // 0x2fc558: 0xaf809fa8  sw          $zero, -0x6058($gp)
    ctx->pc = 0x2fc558u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
label_2fc55c:
    // 0x2fc55c: 0xaf809fc0  sw          $zero, -0x6040($gp)
    ctx->pc = 0x2fc55cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942656), GPR_U32(ctx, 0));
label_2fc560:
    // 0x2fc560: 0xaf829ff8  sw          $v0, -0x6008($gp)
    ctx->pc = 0x2fc560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942712), GPR_U32(ctx, 2));
label_2fc564:
    // 0x2fc564: 0xaf829ffc  sw          $v0, -0x6004($gp)
    ctx->pc = 0x2fc564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942716), GPR_U32(ctx, 2));
label_2fc568:
    // 0x2fc568: 0xaf82a000  sw          $v0, -0x6000($gp)
    ctx->pc = 0x2fc568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942720), GPR_U32(ctx, 2));
label_2fc56c:
    // 0x2fc56c: 0xaf82a004  sw          $v0, -0x5FFC($gp)
    ctx->pc = 0x2fc56cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942724), GPR_U32(ctx, 2));
label_2fc570:
    // 0x2fc570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc574:
    // 0x2fc574: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fc574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fc578:
    // 0x2fc578: 0x3200008  jr          $t9
label_2fc57c:
    if (ctx->pc == 0x2FC57Cu) {
        ctx->pc = 0x2FC580u;
        goto label_fallthrough_0x2fc578;
    }
    ctx->pc = 0x2FC578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fc578:
    ctx->pc = 0x2FC580u;
}
