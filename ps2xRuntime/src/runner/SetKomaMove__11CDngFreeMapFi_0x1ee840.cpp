#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetKomaMove__11CDngFreeMapFi
// Address: 0x1ee840 - 0x1ee868
void SetKomaMove__11CDngFreeMapFi_0x1ee840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetKomaMove__11CDngFreeMapFi_0x1ee840");
#endif

    ctx->pc = 0x1ee840u;

    // 0x1ee840: 0xa48500ec  sh          $a1, 0xEC($a0)
    ctx->pc = 0x1ee840u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 236), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ee844: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x1ee844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x1ee848: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x1ee848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
    // 0x1ee84c: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x1ee84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x1ee850: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE850u;
    {
        const bool branch_taken_0x1ee850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee850) {
            ctx->pc = 0x1EE860u;
            goto label_1ee860;
        }
    }
    ctx->pc = 0x1EE858u;
    // 0x1ee858: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1ee858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ee85c: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x1ee85cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
label_1ee860:
    // 0x1ee860: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE868u;
}
