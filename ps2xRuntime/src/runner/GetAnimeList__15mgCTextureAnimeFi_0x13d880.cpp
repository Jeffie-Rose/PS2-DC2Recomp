#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAnimeList__15mgCTextureAnimeFi
// Address: 0x13d880 - 0x13d8bc
void GetAnimeList__15mgCTextureAnimeFi_0x13d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAnimeList__15mgCTextureAnimeFi_0x13d880");
#endif

    ctx->pc = 0x13d880u;

    // 0x13d880: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D880u;
    {
        const bool branch_taken_0x13d880 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x13d880) {
            ctx->pc = 0x13D898u;
            goto label_13d898;
        }
    }
    ctx->pc = 0x13D888u;
    // 0x13d888: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d88c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x13d88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13d890: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D890u;
    {
        const bool branch_taken_0x13d890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d890) {
            ctx->pc = 0x13D8A4u;
            goto label_13d8a4;
        }
    }
    ctx->pc = 0x13D898u;
label_13d898:
    // 0x13d898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d89c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D89Cu;
    {
        const bool branch_taken_0x13d89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d89c) {
            ctx->pc = 0x13D8B4u;
            goto label_13d8b4;
        }
    }
    ctx->pc = 0x13D8A4u;
label_13d8a4:
    // 0x13d8a4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d8a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13d8ac: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x13d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13d8b0: 0x0  nop
    ctx->pc = 0x13d8b0u;
    // NOP
label_13d8b4:
    // 0x13d8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D8BCu;
}
