#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddYarikomiMedal__16CUserDataManagerFi
// Address: 0x19df70 - 0x19dfe0
void AddYarikomiMedal__16CUserDataManagerFi_0x19df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddYarikomiMedal__16CUserDataManagerFi_0x19df70");
#endif

    ctx->pc = 0x19df70u;

    // 0x19df70: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x19df74: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19df74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19df78: 0x34424da0  ori         $v0, $v0, 0x4DA0
    ctx->pc = 0x19df78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19872);
    // 0x19df7c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19df7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19df80: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x19df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19df84: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x19df84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19df88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19df88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19df8c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x19df8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19df90: 0x84224da0  lh          $v0, 0x4DA0($at)
    ctx->pc = 0x19df90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19872)));
    // 0x19df94: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19DF94u;
    {
        const bool branch_taken_0x19df94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19DF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DF94u;
            // 0x19df98: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df94) {
            ctx->pc = 0x19DFACu;
            goto label_19dfac;
        }
    }
    ctx->pc = 0x19DF9Cu;
    // 0x19df9c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19df9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19dfa0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19dfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19dfa4: 0xa4204da0  sh          $zero, 0x4DA0($at)
    ctx->pc = 0x19dfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19872), (uint16_t)GPR_U32(ctx, 0));
    // 0x19dfa8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19dfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_19dfac:
    // 0x19dfac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19dfacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19dfb0: 0x84224da0  lh          $v0, 0x4DA0($at)
    ctx->pc = 0x19dfb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19872)));
    // 0x19dfb4: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x19dfb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19dfb8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DFB8u;
    {
        const bool branch_taken_0x19dfb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFB8u;
            // 0x19dfbc: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfb8) {
            ctx->pc = 0x19DFD4u;
            goto label_19dfd4;
        }
    }
    ctx->pc = 0x19DFC0u;
    // 0x19dfc0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19dfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19dfc4: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x19dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x19dfc8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19dfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19dfcc: 0xa4224da0  sh          $v0, 0x4DA0($at)
    ctx->pc = 0x19dfccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19872), (uint16_t)GPR_U32(ctx, 2));
    // 0x19dfd0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19dfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_19dfd4:
    // 0x19dfd4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19dfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19dfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x19DFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DFD8u;
            // 0x19dfdc: 0x84224da0  lh          $v0, 0x4DA0($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19872)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DFE0u;
}
