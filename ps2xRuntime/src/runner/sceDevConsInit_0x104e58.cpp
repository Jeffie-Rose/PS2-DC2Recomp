#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsInit
// Address: 0x104e58 - 0x104e8c
void sceDevConsInit_0x104e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsInit_0x104e58");
#endif

    switch (ctx->pc) {
        case 0x104e68u: goto label_104e68;
        default: break;
    }

    ctx->pc = 0x104e58u;

    // 0x104e58: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x104e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104e5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e60: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x104e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
    // 0x104e64: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x104e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_104e68:
    // 0x104e68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x104e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x104e6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x104e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x104e70: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x104e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x104e74: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x104e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x104e78: 0x0  nop
    ctx->pc = 0x104e78u;
    // NOP
    // 0x104e7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104E7Cu;
    {
        const bool branch_taken_0x104e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104e7c) {
            ctx->pc = 0x104E68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_104e68;
        }
    }
    ctx->pc = 0x104E84u;
    // 0x104e84: 0x3e00008  jr          $ra
    ctx->pc = 0x104E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104E8Cu;
}
