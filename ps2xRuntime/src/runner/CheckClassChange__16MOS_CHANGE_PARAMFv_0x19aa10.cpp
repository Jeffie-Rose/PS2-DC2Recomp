#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckClassChange__16MOS_CHANGE_PARAMFv
// Address: 0x19aa10 - 0x19aa5c
void CheckClassChange__16MOS_CHANGE_PARAMFv_0x19aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckClassChange__16MOS_CHANGE_PARAMFv_0x19aa10");
#endif

    ctx->pc = 0x19aa10u;

    // 0x19aa10: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x19aa10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19aa14: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x19aa14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19aa18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AA18u;
    {
        const bool branch_taken_0x19aa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA18u;
            // 0x19aa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa18) {
            ctx->pc = 0x19AA28u;
            goto label_19aa28;
        }
    }
    ctx->pc = 0x19AA20u;
    // 0x19aa20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19AA20u;
    {
        const bool branch_taken_0x19aa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa20) {
            ctx->pc = 0x19AA54u;
            goto label_19aa54;
        }
    }
    ctx->pc = 0x19AA28u;
label_19aa28:
    // 0x19aa28: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x19aa28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19aa2c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x19aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x19aa30: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x19aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x19aa34: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x19aa34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19aa38: 0x0  nop
    ctx->pc = 0x19aa38u;
    // NOP
    // 0x19aa3c: 0x0  nop
    ctx->pc = 0x19aa3cu;
    // NOP
    // 0x19aa40: 0x1010  mfhi        $v0
    ctx->pc = 0x19aa40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19aa44: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x19aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x19aa48: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x19aa4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19aa50: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x19aa50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19aa54:
    // 0x19aa54: 0x3e00008  jr          $ra
    ctx->pc = 0x19AA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AA5Cu;
}
