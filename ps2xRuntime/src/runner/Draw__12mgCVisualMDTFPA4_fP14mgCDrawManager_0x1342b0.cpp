#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12mgCVisualMDTFPA4_fP14mgCDrawManager
// Address: 0x1342b0 - 0x1342e8
void Draw__12mgCVisualMDTFPA4_fP14mgCDrawManager_0x1342b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12mgCVisualMDTFPA4_fP14mgCDrawManager_0x1342b0");
#endif

    switch (ctx->pc) {
        case 0x1342b0u: goto label_1342b0;
        case 0x1342b4u: goto label_1342b4;
        case 0x1342b8u: goto label_1342b8;
        case 0x1342bcu: goto label_1342bc;
        case 0x1342c0u: goto label_1342c0;
        case 0x1342c4u: goto label_1342c4;
        case 0x1342c8u: goto label_1342c8;
        case 0x1342ccu: goto label_1342cc;
        case 0x1342d0u: goto label_1342d0;
        case 0x1342d4u: goto label_1342d4;
        case 0x1342d8u: goto label_1342d8;
        case 0x1342dcu: goto label_1342dc;
        case 0x1342e0u: goto label_1342e0;
        case 0x1342e4u: goto label_1342e4;
        default: break;
    }

    ctx->pc = 0x1342b0u;

label_1342b0:
    // 0x1342b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1342b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1342b4:
    // 0x1342b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1342b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1342b8:
    // 0x1342b8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1342b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1342bc:
    // 0x1342bc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1342bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1342c0:
    // 0x1342c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1342c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1342c4:
    // 0x1342c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1342c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1342c8:
    // 0x1342c8: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x1342c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1342cc:
    // 0x1342cc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1342ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1342d0:
    // 0x1342d0: 0x320f809  jalr        $t9
label_1342d4:
    if (ctx->pc == 0x1342D4u) {
        ctx->pc = 0x1342D8u;
        goto label_1342d8;
    }
    ctx->pc = 0x1342D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1342D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1342D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1342D8u; }
            if (ctx->pc != 0x1342D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1342D8u;
label_1342d8:
    // 0x1342d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1342d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1342dc:
    // 0x1342dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1342dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1342e0:
    // 0x1342e0: 0x3e00008  jr          $ra
label_1342e4:
    if (ctx->pc == 0x1342E4u) {
        ctx->pc = 0x1342E8u;
        goto label_fallthrough_0x1342e0;
    }
    ctx->pc = 0x1342E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1342e0:
    ctx->pc = 0x1342E8u;
}
