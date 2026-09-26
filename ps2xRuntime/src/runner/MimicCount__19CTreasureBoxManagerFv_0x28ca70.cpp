#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MimicCount__19CTreasureBoxManagerFv
// Address: 0x28ca70 - 0x28cac0
void MimicCount__19CTreasureBoxManagerFv_0x28ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MimicCount__19CTreasureBoxManagerFv_0x28ca70");
#endif

    switch (ctx->pc) {
        case 0x28ca80u: goto label_28ca80;
        default: break;
    }

    ctx->pc = 0x28ca70u;

    // 0x28ca70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ca70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ca74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28ca78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ca80:
    // 0x28ca80: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x28ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x28ca84: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x28ca84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28ca88: 0x80630064  lb          $v1, 0x64($v1)
    ctx->pc = 0x28ca88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x28ca8c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CA8Cu;
    {
        const bool branch_taken_0x28ca8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x28ca8c) {
            ctx->pc = 0x28CAA8u;
            goto label_28caa8;
        }
    }
    ctx->pc = 0x28CA94u;
    // 0x28ca94: 0x8ce30058  lw          $v1, 0x58($a3)
    ctx->pc = 0x28ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x28ca98: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x28ca98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x28ca9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CA9Cu;
    {
        const bool branch_taken_0x28ca9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ca9c) {
            ctx->pc = 0x28CAA8u;
            goto label_28caa8;
        }
    }
    ctx->pc = 0x28CAA4u;
    // 0x28caa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28caa8:
    // 0x28caa8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28caa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28caac: 0x28c30018  slti        $v1, $a2, 0x18
    ctx->pc = 0x28caacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x28cab0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x28CAB0u;
    {
        const bool branch_taken_0x28cab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CAB0u;
            // 0x28cab4: 0x25080070  addiu       $t0, $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cab0) {
            ctx->pc = 0x28CA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ca80;
        }
    }
    ctx->pc = 0x28CAB8u;
    // 0x28cab8: 0x3e00008  jr          $ra
    ctx->pc = 0x28CAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CAC0u;
}
