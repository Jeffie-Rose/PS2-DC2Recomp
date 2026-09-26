#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PhotoCheckEnd__15CInventUserDataFv
// Address: 0x1fea30 - 0x1feaa8
void PhotoCheckEnd__15CInventUserDataFv_0x1fea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PhotoCheckEnd__15CInventUserDataFv_0x1fea30");
#endif

    switch (ctx->pc) {
        case 0x1fea38u: goto label_1fea38;
        case 0x1fea80u: goto label_1fea80;
        default: break;
    }

    ctx->pc = 0x1fea30u;

    // 0x1fea30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fea30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fea34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fea38:
    // 0x1fea38: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1fea38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fea3c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1fea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1fea40: 0xa0e00409  sb          $zero, 0x409($a3)
    ctx->pc = 0x1fea40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1033), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea44: 0x28a30016  slti        $v1, $a1, 0x16
    ctx->pc = 0x1fea44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1fea48: 0xa0e00421  sb          $zero, 0x421($a3)
    ctx->pc = 0x1fea48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1057), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea4c: 0x24c600c0  addiu       $a2, $a2, 0xC0
    ctx->pc = 0x1fea4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x1fea50: 0xa0e00439  sb          $zero, 0x439($a3)
    ctx->pc = 0x1fea50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1081), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea54: 0xa0e00451  sb          $zero, 0x451($a3)
    ctx->pc = 0x1fea54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1105), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea58: 0xa0e00469  sb          $zero, 0x469($a3)
    ctx->pc = 0x1fea58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1129), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea5c: 0xa0e00481  sb          $zero, 0x481($a3)
    ctx->pc = 0x1fea5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1153), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea60: 0xa0e00499  sb          $zero, 0x499($a3)
    ctx->pc = 0x1fea60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1177), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea64: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FEA64u;
    {
        const bool branch_taken_0x1fea64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA64u;
            // 0x1fea68: 0xa0e004b1  sb          $zero, 0x4B1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1201), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea64) {
            ctx->pc = 0x1FEA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fea38;
        }
    }
    ctx->pc = 0x1FEA6Cu;
    // 0x1fea6c: 0x28a1001e  slti        $at, $a1, 0x1E
    ctx->pc = 0x1fea6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1fea70: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1FEA70u;
    {
        const bool branch_taken_0x1fea70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEA70u;
            // 0x1fea74: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea70) {
            ctx->pc = 0x1FEAA0u;
            goto label_1feaa0;
        }
    }
    ctx->pc = 0x1FEA78u;
    // 0x1fea78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fea7c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1fea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fea80:
    // 0x1fea80: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1fea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fea84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fea84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fea88: 0xa0600409  sb          $zero, 0x409($v1)
    ctx->pc = 0x1fea88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1033), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fea8c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x1fea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x1fea90: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x1fea90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1fea94: 0x0  nop
    ctx->pc = 0x1fea94u;
    // NOP
    // 0x1fea98: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FEA98u;
    {
        const bool branch_taken_0x1fea98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fea98) {
            ctx->pc = 0x1FEA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fea80;
        }
    }
    ctx->pc = 0x1FEAA0u;
label_1feaa0:
    // 0x1feaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEAA8u;
}
