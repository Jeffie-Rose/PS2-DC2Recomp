#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHaigouTankSex__13CFishAquariumFP13CGameDataUsed
// Address: 0x19a490 - 0x19a4e8
void CheckHaigouTankSex__13CFishAquariumFP13CGameDataUsed_0x19a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHaigouTankSex__13CFishAquariumFP13CGameDataUsed_0x19a490");
#endif

    switch (ctx->pc) {
        case 0x19a4a4u: goto label_19a4a4;
        default: break;
    }

    ctx->pc = 0x19a490u;

    // 0x19a490: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A490u;
    {
        const bool branch_taken_0x19a490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A490u;
            // 0x19a494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a490) {
            ctx->pc = 0x19A4A0u;
            goto label_19a4a0;
        }
    }
    ctx->pc = 0x19A498u;
    // 0x19a498: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A498u;
    {
        const bool branch_taken_0x19a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A498u;
            // 0x19a49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a498) {
            ctx->pc = 0x19A4E0u;
            goto label_19a4e0;
        }
    }
    ctx->pc = 0x19A4A0u;
label_19a4a0:
    // 0x19a4a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a4a4:
    // 0x19a4a4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x19a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x19a4a8: 0x8462043e  lh          $v0, 0x43E($v1)
    ctx->pc = 0x19a4a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1086)));
    // 0x19a4ac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A4ACu;
    {
        const bool branch_taken_0x19a4ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19a4ac) {
            ctx->pc = 0x19A4CCu;
            goto label_19a4cc;
        }
    }
    ctx->pc = 0x19A4B4u;
    // 0x19a4b4: 0x80630461  lb          $v1, 0x461($v1)
    ctx->pc = 0x19a4b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1121)));
    // 0x19a4b8: 0x80a20025  lb          $v0, 0x25($a1)
    ctx->pc = 0x19a4b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 37)));
    // 0x19a4bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A4BCu;
    {
        const bool branch_taken_0x19a4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4BCu;
            // 0x19a4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4bc) {
            ctx->pc = 0x19A4CCu;
            goto label_19a4cc;
        }
    }
    ctx->pc = 0x19A4C4u;
    // 0x19a4c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A4C4u;
    {
        const bool branch_taken_0x19a4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a4c4) {
            ctx->pc = 0x19A4E0u;
            goto label_19a4e0;
        }
    }
    ctx->pc = 0x19A4CCu;
label_19a4cc:
    // 0x19a4cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a4d0: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x19a4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a4d4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x19A4D4u;
    {
        const bool branch_taken_0x19a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4D4u;
            // 0x19a4d8: 0x24e7006c  addiu       $a3, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4d4) {
            ctx->pc = 0x19A4A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a4a4;
        }
    }
    ctx->pc = 0x19A4DCu;
    // 0x19a4dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a4e0:
    // 0x19a4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A4E8u;
}
