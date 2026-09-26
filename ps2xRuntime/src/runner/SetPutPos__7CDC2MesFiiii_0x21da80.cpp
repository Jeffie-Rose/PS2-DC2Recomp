#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPutPos__7CDC2MesFiiii
// Address: 0x21da80 - 0x21dab8
void SetPutPos__7CDC2MesFiiii_0x21da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPutPos__7CDC2MesFiiii_0x21da80");
#endif

    ctx->pc = 0x21da80u;

    // 0x21da80: 0xac850190  sw          $a1, 0x190($a0)
    ctx->pc = 0x21da80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 5));
    // 0x21da84: 0xac860194  sw          $a2, 0x194($a0)
    ctx->pc = 0x21da84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 6));
    // 0x21da88: 0xac870198  sw          $a3, 0x198($a0)
    ctx->pc = 0x21da88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 7));
    // 0x21da8c: 0xac88019c  sw          $t0, 0x19C($a0)
    ctx->pc = 0x21da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 8));
    // 0x21da90: 0x808321e9  lb          $v1, 0x21E9($a0)
    ctx->pc = 0x21da90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8681)));
    // 0x21da94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21DA94u;
    {
        const bool branch_taken_0x21da94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21da94) {
            ctx->pc = 0x21DAB0u;
            goto label_21dab0;
        }
    }
    ctx->pc = 0x21DA9Cu;
    // 0x21da9c: 0x8c8500d8  lw          $a1, 0xD8($a0)
    ctx->pc = 0x21da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x21daa0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x21daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x21daa4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21daa8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21daa8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x21daac: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x21daacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
label_21dab0:
    // 0x21dab0: 0x3e00008  jr          $ra
    ctx->pc = 0x21DAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DAB8u;
}
