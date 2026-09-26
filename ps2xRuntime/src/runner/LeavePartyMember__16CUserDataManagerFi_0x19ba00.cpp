#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LeavePartyMember__16CUserDataManagerFi
// Address: 0x19ba00 - 0x19ba50
void LeavePartyMember__16CUserDataManagerFi_0x19ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LeavePartyMember__16CUserDataManagerFi_0x19ba00");
#endif

    ctx->pc = 0x19ba00u;

    // 0x19ba00: 0x4a00011  bltz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BA00u;
    {
        const bool branch_taken_0x19ba00 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x19ba00) {
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19BA08u;
    // 0x19ba08: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x19ba08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19ba0c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BA0Cu;
    {
        const bool branch_taken_0x19ba0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA0Cu;
            // 0x19ba10: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba0c) {
            ctx->pc = 0x19BA20u;
            goto label_19ba20;
        }
    }
    ctx->pc = 0x19BA14u;
    // 0x19ba14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19BA14u;
    {
        const bool branch_taken_0x19ba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba14) {
            ctx->pc = 0x19BA48u;
            goto label_19ba48;
        }
    }
    ctx->pc = 0x19BA1Cu;
    // 0x19ba1c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_19ba20:
    // 0x19ba20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19ba20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ba24: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19ba24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19ba28: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x19ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x19ba2c: 0x94234d90  lhu         $v1, 0x4D90($at)
    ctx->pc = 0x19ba2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19856)));
    // 0x19ba30: 0xa02827  not         $a1, $a1
    ctx->pc = 0x19ba30u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x19ba34: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x19ba34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19ba38: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19ba3c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x19ba3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x19ba40: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19ba40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19ba44: 0xa4234d90  sh          $v1, 0x4D90($at)
    ctx->pc = 0x19ba44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19856), (uint16_t)GPR_U32(ctx, 3));
label_19ba48:
    // 0x19ba48: 0x3e00008  jr          $ra
    ctx->pc = 0x19BA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BA50u;
}
