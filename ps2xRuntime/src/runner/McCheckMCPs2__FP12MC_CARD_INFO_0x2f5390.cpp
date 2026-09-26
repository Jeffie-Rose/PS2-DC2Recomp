#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: McCheckMCPs2__FP12MC_CARD_INFO
// Address: 0x2f5390 - 0x2f53c8
void McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390");
#endif

    ctx->pc = 0x2f5390u;

    // 0x2f5390: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5390u;
    {
        const bool branch_taken_0x2f5390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5390u;
            // 0x2f5394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5390) {
            ctx->pc = 0x2F53A0u;
            goto label_2f53a0;
        }
    }
    ctx->pc = 0x2F5398u;
    // 0x2f5398: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5398u;
    {
        const bool branch_taken_0x2f5398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5398) {
            ctx->pc = 0x2F53C0u;
            goto label_2f53c0;
        }
    }
    ctx->pc = 0x2F53A0u;
label_2f53a0:
    // 0x2f53a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f53a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F53A4u;
    {
        const bool branch_taken_0x2f53a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F53A4u;
            // 0x2f53a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53a4) {
            ctx->pc = 0x2F53C0u;
            goto label_2f53c0;
        }
    }
    ctx->pc = 0x2F53ACu;
    // 0x2f53ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f53acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f53b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f53b4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F53B4u;
    {
        const bool branch_taken_0x2f53b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F53B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F53B4u;
            // 0x2f53b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53b4) {
            ctx->pc = 0x2F53C0u;
            goto label_2f53c0;
        }
    }
    ctx->pc = 0x2F53BCu;
    // 0x2f53bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f53bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f53c0:
    // 0x2f53c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F53C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F53C8u;
}
