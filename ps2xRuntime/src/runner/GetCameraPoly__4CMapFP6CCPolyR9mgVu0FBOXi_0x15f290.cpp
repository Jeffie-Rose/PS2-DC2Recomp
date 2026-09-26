#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraPoly__4CMapFP6CCPolyR9mgVu0FBOXi
// Address: 0x15f290 - 0x15f2b4
void GetCameraPoly__4CMapFP6CCPolyR9mgVu0FBOXi_0x15f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraPoly__4CMapFP6CCPolyR9mgVu0FBOXi_0x15f290");
#endif

    switch (ctx->pc) {
        case 0x15f290u: goto label_15f290;
        case 0x15f294u: goto label_15f294;
        case 0x15f298u: goto label_15f298;
        case 0x15f29cu: goto label_15f29c;
        case 0x15f2a0u: goto label_15f2a0;
        case 0x15f2a4u: goto label_15f2a4;
        case 0x15f2a8u: goto label_15f2a8;
        case 0x15f2acu: goto label_15f2ac;
        case 0x15f2b0u: goto label_15f2b0;
        default: break;
    }

    ctx->pc = 0x15f290u;

label_15f290:
    // 0x15f290: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x15f290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_15f294:
    // 0x15f294: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15f294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15f298:
    // 0x15f298: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15f298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15f29c:
    // 0x15f29c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15f29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f2a0:
    // 0x15f2a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15f2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f2a4:
    // 0x15f2a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15f2a8:
    // 0x15f2a8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x15f2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_15f2ac:
    // 0x15f2ac: 0x3200008  jr          $t9
label_15f2b0:
    if (ctx->pc == 0x15F2B0u) {
        ctx->pc = 0x15F2B4u;
        goto label_fallthrough_0x15f2ac;
    }
    ctx->pc = 0x15F2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15f2ac:
    ctx->pc = 0x15F2B4u;
}
