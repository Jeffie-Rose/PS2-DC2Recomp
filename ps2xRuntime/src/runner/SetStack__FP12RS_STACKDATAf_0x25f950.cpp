#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStack__FP12RS_STACKDATAf
// Address: 0x25f950 - 0x25f970
void SetStack__FP12RS_STACKDATAf_0x25f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStack__FP12RS_STACKDATAf_0x25f950");
#endif

    ctx->pc = 0x25f950u;

    // 0x25f950: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x25f950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25f954: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25f954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25f958: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F958u;
    {
        const bool branch_taken_0x25f958 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x25f958) {
            ctx->pc = 0x25F968u;
            goto label_25f968;
        }
    }
    ctx->pc = 0x25F960u;
    // 0x25f960: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25f960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25f964: 0xe46c0004  swc1        $f12, 0x4($v1)
    ctx->pc = 0x25f964u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25f968:
    // 0x25f968: 0x3e00008  jr          $ra
    ctx->pc = 0x25F968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F970u;
}
