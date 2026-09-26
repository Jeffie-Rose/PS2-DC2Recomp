#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEnd__12CSceneObjSeqFv
// Address: 0x25c6a0 - 0x25c708
void CheckEnd__12CSceneObjSeqFv_0x25c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEnd__12CSceneObjSeqFv_0x25c6a0");
#endif

    ctx->pc = 0x25c6a0u;

    // 0x25c6a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25c6a4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25C6A4u;
    {
        const bool branch_taken_0x25c6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6A4u;
            // 0x25c6a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6a4) {
            ctx->pc = 0x25C700u;
            goto label_25c700;
        }
    }
    ctx->pc = 0x25C6ACu;
    // 0x25c6ac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x25c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25c6b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25C6B0u;
    {
        const bool branch_taken_0x25c6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c6b0) {
            ctx->pc = 0x25C6FCu;
            goto label_25c6fc;
        }
    }
    ctx->pc = 0x25C6B8u;
    // 0x25c6b8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x25c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x25c6bc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25C6BCu;
    {
        const bool branch_taken_0x25c6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c6bc) {
            ctx->pc = 0x25C6FCu;
            goto label_25c6fc;
        }
    }
    ctx->pc = 0x25C6C4u;
    // 0x25c6c4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25c6c8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25C6C8u;
    {
        const bool branch_taken_0x25c6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c6c8) {
            ctx->pc = 0x25C6FCu;
            goto label_25c6fc;
        }
    }
    ctx->pc = 0x25C6D0u;
    // 0x25c6d0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x25c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x25c6d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C6D4u;
    {
        const bool branch_taken_0x25c6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c6d4) {
            ctx->pc = 0x25C6FCu;
            goto label_25c6fc;
        }
    }
    ctx->pc = 0x25C6DCu;
    // 0x25c6dc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x25c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x25c6e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C6E0u;
    {
        const bool branch_taken_0x25c6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c6e0) {
            ctx->pc = 0x25C6FCu;
            goto label_25c6fc;
        }
    }
    ctx->pc = 0x25C6E8u;
    // 0x25c6e8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x25c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x25c6ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C6ECu;
    {
        const bool branch_taken_0x25c6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C6ECu;
            // 0x25c6f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6ec) {
            ctx->pc = 0x25C6FCu;
            goto label_25c6fc;
        }
    }
    ctx->pc = 0x25C6F4u;
    // 0x25c6f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25C6F4u;
    {
        const bool branch_taken_0x25c6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6f4) {
            ctx->pc = 0x25C700u;
            goto label_25c700;
        }
    }
    ctx->pc = 0x25C6FCu;
label_25c6fc:
    // 0x25c6fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c700:
    // 0x25c700: 0x3e00008  jr          $ra
    ctx->pc = 0x25C700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C708u;
}
