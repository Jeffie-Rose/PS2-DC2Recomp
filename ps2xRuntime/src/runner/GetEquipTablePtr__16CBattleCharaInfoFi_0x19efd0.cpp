#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEquipTablePtr__16CBattleCharaInfoFi
// Address: 0x19efd0 - 0x19f010
void GetEquipTablePtr__16CBattleCharaInfoFi_0x19efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEquipTablePtr__16CBattleCharaInfoFi_0x19efd0");
#endif

    ctx->pc = 0x19efd0u;

    // 0x19efd0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EFD0u;
    {
        const bool branch_taken_0x19efd0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19EFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFD0u;
            // 0x19efd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efd0) {
            ctx->pc = 0x19EFE4u;
            goto label_19efe4;
        }
    }
    ctx->pc = 0x19EFD8u;
    // 0x19efd8: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x19efd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19efdc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EFDCu;
    {
        const bool branch_taken_0x19efdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efdc) {
            ctx->pc = 0x19EFECu;
            goto label_19efec;
        }
    }
    ctx->pc = 0x19EFE4u;
label_19efe4:
    // 0x19efe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19EFE4u;
    {
        const bool branch_taken_0x19efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19efe4) {
            ctx->pc = 0x19F008u;
            goto label_19f008;
        }
    }
    ctx->pc = 0x19EFECu;
label_19efec:
    // 0x19efec: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x19efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19eff0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x19eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19eff4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19eff8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19effc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19effcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f000: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19f000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19f008:
    // 0x19f008: 0x3e00008  jr          $ra
    ctx->pc = 0x19F008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F010u;
}
