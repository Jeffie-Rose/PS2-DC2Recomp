#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DisableCharaChangeMask__16CUserDataManagerFi
// Address: 0x19bf30 - 0x19bf60
void DisableCharaChangeMask__16CUserDataManagerFi_0x19bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableCharaChangeMask__16CUserDataManagerFi_0x19bf30");
#endif

    ctx->pc = 0x19bf30u;

    // 0x19bf30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bf34: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19bf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19bf38: 0xa32804  sllv        $a1, $v1, $a1
    ctx->pc = 0x19bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x19bf3c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19bf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19bf40: 0x90234d94  lbu         $v1, 0x4D94($at)
    ctx->pc = 0x19bf40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19860)));
    // 0x19bf44: 0xa02827  not         $a1, $a1
    ctx->pc = 0x19bf44u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x19bf48: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x19bf48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19bf4c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19bf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19bf50: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x19bf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x19bf54: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19bf54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19bf58: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF58u;
            // 0x19bf5c: 0xa0234d94  sb          $v1, 0x4D94($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19860), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BF60u;
}
