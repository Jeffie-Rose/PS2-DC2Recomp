#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlayEnable__12CSubGameDataFii
// Address: 0x2f7190 - 0x2f71c4
void PlayEnable__12CSubGameDataFii_0x2f7190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlayEnable__12CSubGameDataFii_0x2f7190");
#endif

    ctx->pc = 0x2f7190u;

    // 0x2f7190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7194: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7194u;
    {
        const bool branch_taken_0x2f7194 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7194) {
            ctx->pc = 0x2F71ACu;
            goto label_2f71ac;
        }
    }
    ctx->pc = 0x2F719Cu;
    // 0x2f719c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2f719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f71a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2f71a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2f71a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F71A4u;
    {
        const bool branch_taken_0x2f71a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F71A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F71A4u;
            // 0x2f71a8: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71a4) {
            ctx->pc = 0x2F71BCu;
            goto label_2f71bc;
        }
    }
    ctx->pc = 0x2F71ACu;
label_2f71ac:
    // 0x2f71ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2f71acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f71b0: 0xa02827  not         $a1, $a1
    ctx->pc = 0x2f71b0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2f71b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2f71b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2f71b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f71b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2f71bc:
    // 0x2f71bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F71BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F71C4u;
}
