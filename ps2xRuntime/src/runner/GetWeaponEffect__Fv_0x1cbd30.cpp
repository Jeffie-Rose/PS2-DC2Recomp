#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWeaponEffect__Fv
// Address: 0x1cbd30 - 0x1cbd6c
void GetWeaponEffect__Fv_0x1cbd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWeaponEffect__Fv_0x1cbd30");
#endif

    ctx->pc = 0x1cbd30u;

    // 0x1cbd30: 0x8f858df4  lw          $a1, -0x720C($gp)
    ctx->pc = 0x1cbd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938100)));
    // 0x1cbd34: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cbd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x1cbd38: 0x24847980  addiu       $a0, $a0, 0x7980
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31104));
    // 0x1cbd3c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1cbd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1cbd40: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cbd44: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cbd48: 0xaf828df4  sw          $v0, -0x720C($gp)
    ctx->pc = 0x1cbd48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 2));
    // 0x1cbd4c: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x1cbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1cbd50: 0x8f838df4  lw          $v1, -0x720C($gp)
    ctx->pc = 0x1cbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938100)));
    // 0x1cbd54: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1cbd54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cbd58: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBD58u;
    {
        const bool branch_taken_0x1cbd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD58u;
            // 0x1cbd5c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd58) {
            ctx->pc = 0x1CBD64u;
            goto label_1cbd64;
        }
    }
    ctx->pc = 0x1CBD60u;
    // 0x1cbd60: 0xaf808df4  sw          $zero, -0x720C($gp)
    ctx->pc = 0x1cbd60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 0));
label_1cbd64:
    // 0x1cbd64: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CBD6Cu;
}
