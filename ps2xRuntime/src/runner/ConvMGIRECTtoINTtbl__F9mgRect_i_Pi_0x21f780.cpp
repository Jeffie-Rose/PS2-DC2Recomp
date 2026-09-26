#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvMGIRECTtoINTtbl__F9mgRect<i>Pi
// Address: 0x21f780 - 0x21f7e0
void ConvMGIRECTtoINTtbl__F9mgRect_i_Pi_0x21f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvMGIRECTtoINTtbl__F9mgRect_i_Pi_0x21f780");
#endif

    ctx->pc = 0x21f780u;

    // 0x21f780: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x21f780u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f784: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f788: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x21f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x21f78c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x21f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x21f790: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21f790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f794: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x21f794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x21f798: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x21f798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21f79c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x21f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x21f7a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f7a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f7a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21f7ac: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x21f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x21f7b0: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x21f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x21f7b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f7b8: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x21f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x21f7bc: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x21f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21f7c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x21f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21f7c4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x21f7c8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x21f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21f7cc: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x21f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x21f7d0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x21f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x21f7d4: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x21f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x21f7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F7D8u;
            // 0x21f7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F7E0u;
}
