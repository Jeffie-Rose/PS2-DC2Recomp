#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEsaInfo__Fi
// Address: 0x20cb00 - 0x20cb5c
void GetEsaInfo__Fi_0x20cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEsaInfo__Fi_0x20cb00");
#endif

    switch (ctx->pc) {
        case 0x20cb14u: goto label_20cb14;
        default: break;
    }

    ctx->pc = 0x20cb00u;

    // 0x20cb00: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x20cb04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20cb08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20CB0Cu;
    {
        const bool branch_taken_0x20cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CB0Cu;
            // 0x20cb10: 0x2463f7b0  addiu       $v1, $v1, -0x850 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb0c) {
            ctx->pc = 0x20CB40u;
            goto label_20cb40;
        }
    }
    ctx->pc = 0x20CB14u;
label_20cb14:
    // 0x20cb14: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CB14u;
    {
        const bool branch_taken_0x20cb14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20cb14) {
            ctx->pc = 0x20CB38u;
            goto label_20cb38;
        }
    }
    ctx->pc = 0x20CB1Cu;
    // 0x20cb1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20cb20: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x20cb24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20cb28: 0x2442f7b0  addiu       $v0, $v0, -0x850
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965168));
    // 0x20cb2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20cb30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20CB30u;
    {
        const bool branch_taken_0x20cb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CB30u;
            // 0x20cb34: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb30) {
            ctx->pc = 0x20CB54u;
            goto label_20cb54;
        }
    }
    ctx->pc = 0x20CB38u;
label_20cb38:
    // 0x20cb38: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x20cb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x20cb3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20cb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20cb40:
    // 0x20cb40: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20cb44: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x20cb44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cb48: 0x1c40fff2  bgtz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x20CB48u;
    {
        const bool branch_taken_0x20cb48 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20cb48) {
            ctx->pc = 0x20CB14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20cb14;
        }
    }
    ctx->pc = 0x20CB50u;
    // 0x20cb50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20cb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb54:
    // 0x20cb54: 0x3e00008  jr          $ra
    ctx->pc = 0x20CB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CB5Cu;
}
