#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowModeLoadPartsID__12CMenuGeoramaFv
// Address: 0x1f9590 - 0x1f9600
void GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590");
#endif

    ctx->pc = 0x1f9590u;

    // 0x1f9590: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x1f9590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1f9594: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f959c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1f959cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1f95a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f95a4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f95a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f95a8: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F95A8u;
    {
        const bool branch_taken_0x1f95a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F95ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F95A8u;
            // 0x1f95ac: 0x8c23b7f4  lw          $v1, -0x480C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95a8) {
            ctx->pc = 0x1F95D0u;
            goto label_1f95d0;
        }
    }
    ctx->pc = 0x1F95B0u;
    // 0x1f95b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f95b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f95b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f95b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f95bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f95c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f95c4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f95c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f95c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F95C8u;
    {
        const bool branch_taken_0x1f95c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F95CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F95C8u;
            // 0x1f95cc: 0x8c22bbbc  lw          $v0, -0x4444($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95c8) {
            ctx->pc = 0x1F95F8u;
            goto label_1f95f8;
        }
    }
    ctx->pc = 0x1F95D0u;
label_1f95d0:
    // 0x1f95d0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F95D0u;
    {
        const bool branch_taken_0x1f95d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F95D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F95D0u;
            // 0x1f95d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95d0) {
            ctx->pc = 0x1F95F8u;
            goto label_1f95f8;
        }
    }
    ctx->pc = 0x1F95D8u;
    // 0x1f95d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f95dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f95dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f95e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f95e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f95e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f95ec: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f95ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f95f0: 0x8c220fc0  lw          $v0, 0xFC0($at)
    ctx->pc = 0x1f95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4032)));
    // 0x1f95f4: 0x0  nop
    ctx->pc = 0x1f95f4u;
    // NOP
label_1f95f8:
    // 0x1f95f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F95F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9600u;
}
