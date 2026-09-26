#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvStr__FPc
// Address: 0x1491f0 - 0x14923c
void ConvStr__FPc_0x1491f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvStr__FPc_0x1491f0");
#endif

    switch (ctx->pc) {
        case 0x1491f8u: goto label_1491f8;
        default: break;
    }

    ctx->pc = 0x1491f0u;

    // 0x1491f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1491F0u;
    {
        const bool branch_taken_0x1491f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491f0) {
            ctx->pc = 0x149224u;
            goto label_149224;
        }
    }
    ctx->pc = 0x1491F8u;
label_1491f8:
    // 0x1491f8: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1491f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1491fc: 0x28a30041  slti        $v1, $a1, 0x41
    ctx->pc = 0x1491fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x149200: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149200u;
    {
        const bool branch_taken_0x149200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149200u;
            // 0x149204: 0x28a1005b  slti        $at, $a1, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)91) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149200) {
            ctx->pc = 0x14921Cu;
            goto label_14921c;
        }
    }
    ctx->pc = 0x149208u;
    // 0x149208: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x149208u;
    {
        const bool branch_taken_0x149208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149208) {
            ctx->pc = 0x14921Cu;
            goto label_14921c;
        }
    }
    ctx->pc = 0x149210u;
    // 0x149210: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x149210u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149214: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x149214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x149218: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x149218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_14921c:
    // 0x14921c: 0x0  nop
    ctx->pc = 0x14921cu;
    // NOP
    // 0x149220: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x149220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_149224:
    // 0x149224: 0x0  nop
    ctx->pc = 0x149224u;
    // NOP
    // 0x149228: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x149228u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14922c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x14922Cu;
    {
        const bool branch_taken_0x14922c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14922Cu;
            // 0x149230: 0x32e3c  dsll32      $a1, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14922c) {
            ctx->pc = 0x1491F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1491f8;
        }
    }
    ctx->pc = 0x149234u;
    // 0x149234: 0x3e00008  jr          $ra
    ctx->pc = 0x149234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14923Cu;
}
