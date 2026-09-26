#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9mgCVisualFPA4_fP14mgCDrawManager
// Address: 0x134360 - 0x134398
void Draw__9mgCVisualFPA4_fP14mgCDrawManager_0x134360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9mgCVisualFPA4_fP14mgCDrawManager_0x134360");
#endif

    switch (ctx->pc) {
        case 0x134360u: goto label_134360;
        case 0x134364u: goto label_134364;
        case 0x134368u: goto label_134368;
        case 0x13436cu: goto label_13436c;
        case 0x134370u: goto label_134370;
        case 0x134374u: goto label_134374;
        case 0x134378u: goto label_134378;
        case 0x13437cu: goto label_13437c;
        case 0x134380u: goto label_134380;
        case 0x134384u: goto label_134384;
        case 0x134388u: goto label_134388;
        case 0x13438cu: goto label_13438c;
        case 0x134390u: goto label_134390;
        case 0x134394u: goto label_134394;
        default: break;
    }

    ctx->pc = 0x134360u;

label_134360:
    // 0x134360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_134364:
    // 0x134364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_134368:
    // 0x134368: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x134368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13436c:
    // 0x13436c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x13436cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_134370:
    // 0x134370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x134370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134374:
    // 0x134374: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x134374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134378:
    // 0x134378: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x134378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_13437c:
    // 0x13437c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x13437cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_134380:
    // 0x134380: 0x320f809  jalr        $t9
label_134384:
    if (ctx->pc == 0x134384u) {
        ctx->pc = 0x134388u;
        goto label_134388;
    }
    ctx->pc = 0x134380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x134388u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x134388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x134388u; }
            if (ctx->pc != 0x134388u) { return; }
        }
        }
    }
    ctx->pc = 0x134388u;
label_134388:
    // 0x134388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13438c:
    // 0x13438c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13438cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_134390:
    // 0x134390: 0x3e00008  jr          $ra
label_134394:
    if (ctx->pc == 0x134394u) {
        ctx->pc = 0x134398u;
        goto label_fallthrough_0x134390;
    }
    ctx->pc = 0x134390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x134390:
    ctx->pc = 0x134398u;
}
