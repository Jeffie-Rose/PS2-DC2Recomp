#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecEndPut__FP8AudioDeci
// Address: 0x29bf10 - 0x29bf94
void audioDecEndPut__FP8AudioDeci_0x29bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecEndPut__FP8AudioDeci_0x29bf10");
#endif

    ctx->pc = 0x29bf10u;

    // 0x29bf10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29bf14: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29BF14u;
    {
        const bool branch_taken_0x29bf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bf14) {
            ctx->pc = 0x29BF58u;
            goto label_29bf58;
        }
    }
    ctx->pc = 0x29BF1Cu;
    // 0x29bf1c: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x29bf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29bf20: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x29bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x29bf24: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x29bf24u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29bf28: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x29bf28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x29bf2c: 0xa1300a  movz        $a2, $a1, $at
    ctx->pc = 0x29bf2cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5));
    // 0x29bf30: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x29bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29bf34: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x29bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29bf38: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x29bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x29bf3c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x29bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29bf40: 0x2c630028  sltiu       $v1, $v1, 0x28
    ctx->pc = 0x29bf40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x29bf44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BF44u;
    {
        const bool branch_taken_0x29bf44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bf44) {
            ctx->pc = 0x29BF54u;
            goto label_29bf54;
        }
    }
    ctx->pc = 0x29BF4Cu;
    // 0x29bf4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bf50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_29bf54:
    // 0x29bf54: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x29bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_29bf58:
    // 0x29bf58: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x29bf58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x29bf5c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x29bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x29bf60: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x29bf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29bf64: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29BF64u;
    {
        const bool branch_taken_0x29bf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF64u;
            // 0x29bf68: 0xc3001a  div         $zero, $a2, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf64) {
            ctx->pc = 0x29BF70u;
            goto label_29bf70;
        }
    }
    ctx->pc = 0x29BF6Cu;
    // 0x29bf6c: 0x1cd  break       0, 7
    ctx->pc = 0x29bf6cu;
    runtime->handleBreak(rdram, ctx);
label_29bf70:
    // 0x29bf70: 0x1810  mfhi        $v1
    ctx->pc = 0x29bf70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29bf74: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x29bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x29bf78: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x29bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x29bf7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29bf80: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x29bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x29bf84: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x29bf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x29bf88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29bf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF8Cu;
            // 0x29bf90: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BF94u;
}
