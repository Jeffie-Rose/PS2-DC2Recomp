#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTextureBlock__17mgCTextureManagerFi
// Address: 0x12d070 - 0x12d0c0
void GetTextureBlock__17mgCTextureManagerFi_0x12d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTextureBlock__17mgCTextureManagerFi_0x12d070");
#endif

    ctx->pc = 0x12d070u;

    // 0x12d070: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x12d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12d074: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D074u;
    {
        const bool branch_taken_0x12d074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x12d074) {
            ctx->pc = 0x12D088u;
            goto label_12d088;
        }
    }
    ctx->pc = 0x12D07Cu;
    // 0x12d07c: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x12d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x12d080: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12D080u;
    {
        const bool branch_taken_0x12d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d080) {
            ctx->pc = 0x12D0B8u;
            goto label_12d0b8;
        }
    }
    ctx->pc = 0x12D088u;
label_12d088:
    // 0x12d088: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D088u;
    {
        const bool branch_taken_0x12d088 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x12d088) {
            ctx->pc = 0x12D0A0u;
            goto label_12d0a0;
        }
    }
    ctx->pc = 0x12D090u;
    // 0x12d090: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12d094: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x12d094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12d098: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D098u;
    {
        const bool branch_taken_0x12d098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d098) {
            ctx->pc = 0x12D0ACu;
            goto label_12d0ac;
        }
    }
    ctx->pc = 0x12D0A0u;
label_12d0a0:
    // 0x12d0a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D0A4u;
    {
        const bool branch_taken_0x12d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d0a4) {
            ctx->pc = 0x12D0B8u;
            goto label_12d0b8;
        }
    }
    ctx->pc = 0x12D0ACu;
label_12d0ac:
    // 0x12d0ac: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x12d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x12d0b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12d0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12d0b8:
    // 0x12d0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x12D0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D0C0u;
}
