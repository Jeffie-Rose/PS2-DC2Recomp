#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DisableCharaChange__16CUserDataManagerFi
// Address: 0x19baf0 - 0x19bb40
void DisableCharaChange__16CUserDataManagerFi_0x19baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableCharaChange__16CUserDataManagerFi_0x19baf0");
#endif

    ctx->pc = 0x19baf0u;

    // 0x19baf0: 0x4a00011  bltz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BAF0u;
    {
        const bool branch_taken_0x19baf0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x19baf0) {
            ctx->pc = 0x19BB38u;
            goto label_19bb38;
        }
    }
    ctx->pc = 0x19BAF8u;
    // 0x19baf8: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x19baf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19bafc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BAFCu;
    {
        const bool branch_taken_0x19bafc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAFCu;
            // 0x19bb00: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bafc) {
            ctx->pc = 0x19BB10u;
            goto label_19bb10;
        }
    }
    ctx->pc = 0x19BB04u;
    // 0x19bb04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19BB04u;
    {
        const bool branch_taken_0x19bb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb04) {
            ctx->pc = 0x19BB38u;
            goto label_19bb38;
        }
    }
    ctx->pc = 0x19BB0Cu;
    // 0x19bb0c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19bb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_19bb10:
    // 0x19bb10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb14: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19bb18: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x19bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x19bb1c: 0x94234d92  lhu         $v1, 0x4D92($at)
    ctx->pc = 0x19bb1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19858)));
    // 0x19bb20: 0xa02827  not         $a1, $a1
    ctx->pc = 0x19bb20u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x19bb24: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x19bb24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19bb28: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19bb2c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x19bb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x19bb30: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19bb30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19bb34: 0xa4234d92  sh          $v1, 0x4D92($at)
    ctx->pc = 0x19bb34u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19858), (uint16_t)GPR_U32(ctx, 3));
label_19bb38:
    // 0x19bb38: 0x3e00008  jr          $ra
    ctx->pc = 0x19BB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BB40u;
}
