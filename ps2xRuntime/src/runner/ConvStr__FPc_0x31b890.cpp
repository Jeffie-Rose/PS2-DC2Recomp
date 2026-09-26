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
// Address: 0x31b890 - 0x31b8dc
void ConvStr__FPc_0x31b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvStr__FPc_0x31b890");
#endif

    switch (ctx->pc) {
        case 0x31b898u: goto label_31b898;
        default: break;
    }

    ctx->pc = 0x31b890u;

    // 0x31b890: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31B890u;
    {
        const bool branch_taken_0x31b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b890) {
            ctx->pc = 0x31B8C4u;
            goto label_31b8c4;
        }
    }
    ctx->pc = 0x31B898u;
label_31b898:
    // 0x31b898: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x31b898u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x31b89c: 0x28a30041  slti        $v1, $a1, 0x41
    ctx->pc = 0x31b89cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x31b8a0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B8A0u;
    {
        const bool branch_taken_0x31b8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8A0u;
            // 0x31b8a4: 0x28a1005b  slti        $at, $a1, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)91) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8a0) {
            ctx->pc = 0x31B8BCu;
            goto label_31b8bc;
        }
    }
    ctx->pc = 0x31B8A8u;
    // 0x31b8a8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B8A8u;
    {
        const bool branch_taken_0x31b8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b8a8) {
            ctx->pc = 0x31B8BCu;
            goto label_31b8bc;
        }
    }
    ctx->pc = 0x31B8B0u;
    // 0x31b8b0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x31b8b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b8b4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31b8b8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x31b8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_31b8bc:
    // 0x31b8bc: 0x0  nop
    ctx->pc = 0x31b8bcu;
    // NOP
    // 0x31b8c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31b8c4:
    // 0x31b8c4: 0x0  nop
    ctx->pc = 0x31b8c4u;
    // NOP
    // 0x31b8c8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x31b8c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b8cc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x31B8CCu;
    {
        const bool branch_taken_0x31b8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8CCu;
            // 0x31b8d0: 0x32e3c  dsll32      $a1, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8cc) {
            ctx->pc = 0x31B898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31b898;
        }
    }
    ctx->pc = 0x31B8D4u;
    // 0x31b8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31B8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B8DCu;
}
