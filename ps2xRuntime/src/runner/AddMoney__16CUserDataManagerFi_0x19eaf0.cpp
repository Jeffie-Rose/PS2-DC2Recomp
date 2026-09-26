#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddMoney__16CUserDataManagerFi
// Address: 0x19eaf0 - 0x19eb64
void AddMoney__16CUserDataManagerFi_0x19eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddMoney__16CUserDataManagerFi_0x19eaf0");
#endif

    ctx->pc = 0x19eaf0u;

    // 0x19eaf0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x19eaf4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19eaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19eaf8: 0x34424d9c  ori         $v0, $v0, 0x4D9C
    ctx->pc = 0x19eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19868);
    // 0x19eafc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19eb00: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x19eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19eb04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19eb08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19eb0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19eb10: 0x8c224d9c  lw          $v0, 0x4D9C($at)
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
    // 0x19eb14: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EB14u;
    {
        const bool branch_taken_0x19eb14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19EB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB14u;
            // 0x19eb18: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb14) {
            ctx->pc = 0x19EB2Cu;
            goto label_19eb2c;
        }
    }
    ctx->pc = 0x19EB1Cu;
    // 0x19eb1c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19eb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19eb20: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19eb24: 0xac204d9c  sw          $zero, 0x4D9C($at)
    ctx->pc = 0x19eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19868), GPR_U32(ctx, 0));
    // 0x19eb28: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19eb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_19eb2c:
    // 0x19eb2c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x19eb30: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19eb34: 0x3463423f  ori         $v1, $v1, 0x423F
    ctx->pc = 0x19eb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16959);
    // 0x19eb38: 0x8c224d9c  lw          $v0, 0x4D9C($at)
    ctx->pc = 0x19eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
    // 0x19eb3c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19eb3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19eb40: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EB40u;
    {
        const bool branch_taken_0x19eb40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB40u;
            // 0x19eb44: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb40) {
            ctx->pc = 0x19EB58u;
            goto label_19eb58;
        }
    }
    ctx->pc = 0x19EB48u;
    // 0x19eb48: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19eb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19eb4c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19eb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19eb50: 0xac234d9c  sw          $v1, 0x4D9C($at)
    ctx->pc = 0x19eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19868), GPR_U32(ctx, 3));
    // 0x19eb54: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_19eb58:
    // 0x19eb58: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19eb58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19eb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB5Cu;
            // 0x19eb60: 0x8c224d9c  lw          $v0, 0x4D9C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EB64u;
}
