#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaterial__12mgCVisualMDTFi
// Address: 0x13ef60 - 0x13efac
void GetMaterial__12mgCVisualMDTFi_0x13ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaterial__12mgCVisualMDTFi_0x13ef60");
#endif

    ctx->pc = 0x13ef60u;

    // 0x13ef60: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x13ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x13ef64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EF64u;
    {
        const bool branch_taken_0x13ef64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF64u;
            // 0x13ef68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef64) {
            ctx->pc = 0x13EF74u;
            goto label_13ef74;
        }
    }
    ctx->pc = 0x13EF6Cu;
    // 0x13ef6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13EF6Cu;
    {
        const bool branch_taken_0x13ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ef6c) {
            ctx->pc = 0x13EFA4u;
            goto label_13efa4;
        }
    }
    ctx->pc = 0x13EF74u;
label_13ef74:
    // 0x13ef74: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EF74u;
    {
        const bool branch_taken_0x13ef74 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x13EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF74u;
            // 0x13ef78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef74) {
            ctx->pc = 0x13EF90u;
            goto label_13ef90;
        }
    }
    ctx->pc = 0x13EF7Cu;
    // 0x13ef7c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x13ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13ef80: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x13ef80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13ef84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EF84u;
    {
        const bool branch_taken_0x13ef84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF84u;
            // 0x13ef88: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef84) {
            ctx->pc = 0x13EF98u;
            goto label_13ef98;
        }
    }
    ctx->pc = 0x13EF8Cu;
    // 0x13ef8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ef8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ef90:
    // 0x13ef90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13EF90u;
    {
        const bool branch_taken_0x13ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ef90) {
            ctx->pc = 0x13EFA4u;
            goto label_13efa4;
        }
    }
    ctx->pc = 0x13EF98u;
label_13ef98:
    // 0x13ef98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13ef9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13efa0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13efa4:
    // 0x13efa4: 0x3e00008  jr          $ra
    ctx->pc = 0x13EFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EFACu;
}
