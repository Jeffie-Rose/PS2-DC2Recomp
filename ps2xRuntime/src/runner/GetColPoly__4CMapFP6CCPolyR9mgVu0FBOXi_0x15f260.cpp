#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetColPoly__4CMapFP6CCPolyR9mgVu0FBOXi
// Address: 0x15f260 - 0x15f284
void GetColPoly__4CMapFP6CCPolyR9mgVu0FBOXi_0x15f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetColPoly__4CMapFP6CCPolyR9mgVu0FBOXi_0x15f260");
#endif

    switch (ctx->pc) {
        case 0x15f260u: goto label_15f260;
        case 0x15f264u: goto label_15f264;
        case 0x15f268u: goto label_15f268;
        case 0x15f26cu: goto label_15f26c;
        case 0x15f270u: goto label_15f270;
        case 0x15f274u: goto label_15f274;
        case 0x15f278u: goto label_15f278;
        case 0x15f27cu: goto label_15f27c;
        case 0x15f280u: goto label_15f280;
        default: break;
    }

    ctx->pc = 0x15f260u;

label_15f260:
    // 0x15f260: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x15f260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_15f264:
    // 0x15f264: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15f264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15f268:
    // 0x15f268: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15f268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15f26c:
    // 0x15f26c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15f26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f270:
    // 0x15f270: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15f270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f274:
    // 0x15f274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f278:
    // 0x15f278: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x15f278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_15f27c:
    // 0x15f27c: 0x3200008  jr          $t9
label_15f280:
    if (ctx->pc == 0x15F280u) {
        ctx->pc = 0x15F284u;
        goto label_fallthrough_0x15f27c;
    }
    ctx->pc = 0x15F27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15f27c:
    ctx->pc = 0x15F284u;
}
