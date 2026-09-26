#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPlayDataInfo__18CMemoryCardManagerFv
// Address: 0x2f1ed0 - 0x2f1f40
void InitPlayDataInfo__18CMemoryCardManagerFv_0x2f1ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPlayDataInfo__18CMemoryCardManagerFv_0x2f1ed0");
#endif

    switch (ctx->pc) {
        case 0x2f1ed8u: goto label_2f1ed8;
        case 0x2f1f18u: goto label_2f1f18;
        default: break;
    }

    ctx->pc = 0x2f1ed0u;

    // 0x2f1ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ed8:
    // 0x2f1ed8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2f1ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f1edc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f1edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f1ee0: 0xace00da0  sw          $zero, 0xDA0($a3)
    ctx->pc = 0x2f1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3488), GPR_U32(ctx, 0));
    // 0x2f1ee4: 0x28a30005  slti        $v1, $a1, 0x5
    ctx->pc = 0x2f1ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f1ee8: 0xace00de0  sw          $zero, 0xDE0($a3)
    ctx->pc = 0x2f1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3552), GPR_U32(ctx, 0));
    // 0x2f1eec: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x2f1eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x2f1ef0: 0xace00e20  sw          $zero, 0xE20($a3)
    ctx->pc = 0x2f1ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3616), GPR_U32(ctx, 0));
    // 0x2f1ef4: 0xace00e60  sw          $zero, 0xE60($a3)
    ctx->pc = 0x2f1ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3680), GPR_U32(ctx, 0));
    // 0x2f1ef8: 0xace00ea0  sw          $zero, 0xEA0($a3)
    ctx->pc = 0x2f1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3744), GPR_U32(ctx, 0));
    // 0x2f1efc: 0xace00ee0  sw          $zero, 0xEE0($a3)
    ctx->pc = 0x2f1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3808), GPR_U32(ctx, 0));
    // 0x2f1f00: 0xace00f20  sw          $zero, 0xF20($a3)
    ctx->pc = 0x2f1f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3872), GPR_U32(ctx, 0));
    // 0x2f1f04: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F1F04u;
    {
        const bool branch_taken_0x2f1f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1F04u;
            // 0x2f1f08: 0xace00f60  sw          $zero, 0xF60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 3936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f04) {
            ctx->pc = 0x2F1ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1ed8;
        }
    }
    ctx->pc = 0x2F1F0Cu;
    // 0x2f1f0c: 0x28a1000d  slti        $at, $a1, 0xD
    ctx->pc = 0x2f1f0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f1f10: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1F10u;
    {
        const bool branch_taken_0x2f1f10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1F10u;
            // 0x2f1f14: 0x53180  sll         $a2, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f10) {
            ctx->pc = 0x2F1F38u;
            goto label_2f1f38;
        }
    }
    ctx->pc = 0x2F1F18u;
label_2f1f18:
    // 0x2f1f18: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2f1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f1f1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f1f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f1f20: 0xac600da0  sw          $zero, 0xDA0($v1)
    ctx->pc = 0x2f1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3488), GPR_U32(ctx, 0));
    // 0x2f1f24: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2f1f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2f1f28: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x2f1f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f1f2c: 0x0  nop
    ctx->pc = 0x2f1f2cu;
    // NOP
    // 0x2f1f30: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F1F30u;
    {
        const bool branch_taken_0x2f1f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1f30) {
            ctx->pc = 0x2F1F18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1f18;
        }
    }
    ctx->pc = 0x2F1F38u;
label_2f1f38:
    // 0x2f1f38: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1F40u;
}
