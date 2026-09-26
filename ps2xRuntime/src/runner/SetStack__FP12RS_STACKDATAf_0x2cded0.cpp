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
// Address: 0x2cded0 - 0x2cdef0
void SetStack__FP12RS_STACKDATAf_0x2cded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStack__FP12RS_STACKDATAf_0x2cded0");
#endif

    ctx->pc = 0x2cded0u;

    // 0x2cded0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2cded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cded4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cded4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cded8: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDED8u;
    {
        const bool branch_taken_0x2cded8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cded8) {
            ctx->pc = 0x2CDEE8u;
            goto label_2cdee8;
        }
    }
    ctx->pc = 0x2CDEE0u;
    // 0x2cdee0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cdee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cdee4: 0xe46c0004  swc1        $f12, 0x4($v1)
    ctx->pc = 0x2cdee4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2cdee8:
    // 0x2cdee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDEF0u;
}
