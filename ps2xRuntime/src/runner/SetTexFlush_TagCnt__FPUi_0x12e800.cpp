#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexFlush_TagCnt__FPUi
// Address: 0x12e800 - 0x12e850
void SetTexFlush_TagCnt__FPUi_0x12e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexFlush_TagCnt__FPUi_0x12e800");
#endif

    ctx->pc = 0x12e800u;

    // 0x12e800: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E800u;
    {
        const bool branch_taken_0x12e800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e800) {
            ctx->pc = 0x12E814u;
            goto label_12e814;
        }
    }
    ctx->pc = 0x12E808u;
    // 0x12e808: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e80c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12E80Cu;
    {
        const bool branch_taken_0x12e80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e80c) {
            ctx->pc = 0x12E848u;
            goto label_12e848;
        }
    }
    ctx->pc = 0x12E814u;
label_12e814:
    // 0x12e814: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12e818: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x12e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x12e81c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x12e81cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e820: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12e820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12e824: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12e824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12e828: 0x24424010  addiu       $v0, $v0, 0x4010
    ctx->pc = 0x12e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16400));
    // 0x12e82c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x12e82cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e830: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x12e830u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x12e834: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12e834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12e838: 0x24424020  addiu       $v0, $v0, 0x4020
    ctx->pc = 0x12e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16416));
    // 0x12e83c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x12e83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e840: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x12e840u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x12e844: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12e848:
    // 0x12e848: 0x3e00008  jr          $ra
    ctx->pc = 0x12E848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E850u;
}
