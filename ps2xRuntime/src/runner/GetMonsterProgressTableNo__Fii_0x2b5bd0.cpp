#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterProgressTableNo__Fii
// Address: 0x2b5bd0 - 0x2b5c1c
void GetMonsterProgressTableNo__Fii_0x2b5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterProgressTableNo__Fii_0x2b5bd0");
#endif

    switch (ctx->pc) {
        case 0x2b5be8u: goto label_2b5be8;
        default: break;
    }

    ctx->pc = 0x2b5bd0u;

    // 0x2b5bd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bd8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2b5bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2b5bdc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2b5bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b5be0: 0x24634640  addiu       $v1, $v1, 0x4640
    ctx->pc = 0x2b5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17984));
    // 0x2b5be4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2b5be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b5be8:
    // 0x2b5be8: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2b5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b5bec: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x2b5becu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b5bf0: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5BF0u;
    {
        const bool branch_taken_0x2b5bf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5bf0) {
            ctx->pc = 0x2B5C00u;
            goto label_2b5c00;
        }
    }
    ctx->pc = 0x2B5BF8u;
    // 0x2b5bf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5BF8u;
    {
        const bool branch_taken_0x2b5bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5bf8) {
            ctx->pc = 0x2B5C14u;
            goto label_2b5c14;
        }
    }
    ctx->pc = 0x2B5C00u;
label_2b5c00:
    // 0x2b5c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5c04: 0x28430013  slti        $v1, $v0, 0x13
    ctx->pc = 0x2b5c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2b5c08: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B5C08u;
    {
        const bool branch_taken_0x2b5c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C08u;
            // 0x2b5c0c: 0x24c6000a  addiu       $a2, $a2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c08) {
            ctx->pc = 0x2B5BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5be8;
        }
    }
    ctx->pc = 0x2B5C10u;
    // 0x2b5c10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5c14:
    // 0x2b5c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5C1Cu;
}
