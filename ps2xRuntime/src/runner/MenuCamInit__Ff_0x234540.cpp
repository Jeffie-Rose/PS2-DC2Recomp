#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCamInit__Ff
// Address: 0x234540 - 0x234584
void MenuCamInit__Ff_0x234540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCamInit__Ff_0x234540");
#endif

    switch (ctx->pc) {
        case 0x234540u: goto label_234540;
        case 0x234544u: goto label_234544;
        case 0x234548u: goto label_234548;
        case 0x23454cu: goto label_23454c;
        case 0x234550u: goto label_234550;
        case 0x234554u: goto label_234554;
        case 0x234558u: goto label_234558;
        case 0x23455cu: goto label_23455c;
        case 0x234560u: goto label_234560;
        case 0x234564u: goto label_234564;
        case 0x234568u: goto label_234568;
        case 0x23456cu: goto label_23456c;
        case 0x234570u: goto label_234570;
        case 0x234574u: goto label_234574;
        case 0x234578u: goto label_234578;
        case 0x23457cu: goto label_23457c;
        case 0x234580u: goto label_234580;
        default: break;
    }

    ctx->pc = 0x234540u;

label_234540:
    // 0x234540: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x234540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_234544:
    // 0x234544: 0x8f8394f4  lw          $v1, -0x6B0C($gp)
    ctx->pc = 0x234544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_234548:
    // 0x234548: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x234548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
label_23454c:
    // 0x23454c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x23454cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_234550:
    // 0x234550: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x234550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_234554:
    // 0x234554: 0x7c640080  sq          $a0, 0x80($v1)
    ctx->pc = 0x234554u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), GPR_VEC(ctx, 4));
label_234558:
    // 0x234558: 0x24420a10  addiu       $v0, $v0, 0xA10
    ctx->pc = 0x234558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2576));
label_23455c:
    // 0x23455c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23455cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_234560:
    // 0x234560: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x234560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_234564:
    // 0x234564: 0x7c430090  sq          $v1, 0x90($v0)
    ctx->pc = 0x234564u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 3));
label_234568:
    // 0x234568: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x234568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_23456c:
    // 0x23456c: 0xe44c00a0  swc1        $f12, 0xA0($v0)
    ctx->pc = 0x23456cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
label_234570:
    // 0x234570: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x234570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_234574:
    // 0x234574: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x234574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_234578:
    // 0x234578: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x234578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23457c:
    // 0x23457c: 0x3200008  jr          $t9
label_234580:
    if (ctx->pc == 0x234580u) {
        ctx->pc = 0x234584u;
        goto label_fallthrough_0x23457c;
    }
    ctx->pc = 0x23457Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23457c:
    ctx->pc = 0x234584u;
}
