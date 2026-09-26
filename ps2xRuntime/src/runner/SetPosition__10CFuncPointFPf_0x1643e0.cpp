#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPosition__10CFuncPointFPf
// Address: 0x1643e0 - 0x1643fc
void SetPosition__10CFuncPointFPf_0x1643e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPosition__10CFuncPointFPf_0x1643e0");
#endif

    switch (ctx->pc) {
        case 0x1643e0u: goto label_1643e0;
        case 0x1643e4u: goto label_1643e4;
        case 0x1643e8u: goto label_1643e8;
        case 0x1643ecu: goto label_1643ec;
        case 0x1643f0u: goto label_1643f0;
        case 0x1643f4u: goto label_1643f4;
        case 0x1643f8u: goto label_1643f8;
        default: break;
    }

    ctx->pc = 0x1643e0u;

label_1643e0:
    // 0x1643e0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1643e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1643e4:
    // 0x1643e4: 0x7c820180  sq          $v0, 0x180($a0)
    ctx->pc = 0x1643e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 384), GPR_VEC(ctx, 2));
label_1643e8:
    // 0x1643e8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1643e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1643ec:
    // 0x1643ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1643ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1643f0:
    // 0x1643f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1643f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1643f4:
    // 0x1643f4: 0x3200008  jr          $t9
label_1643f8:
    if (ctx->pc == 0x1643F8u) {
        ctx->pc = 0x1643FCu;
        goto label_fallthrough_0x1643f4;
    }
    ctx->pc = 0x1643F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1643f4:
    ctx->pc = 0x1643FCu;
}
