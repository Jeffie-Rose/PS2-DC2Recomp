#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckGiftPack__FP14CActiveMonsterP8CColPrim
// Address: 0x1de080 - 0x1de130
void CheckGiftPack__FP14CActiveMonsterP8CColPrim_0x1de080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckGiftPack__FP14CActiveMonsterP8CColPrim_0x1de080");
#endif

    switch (ctx->pc) {
        case 0x1de0a0u: goto label_1de0a0;
        case 0x1de0fcu: goto label_1de0fc;
        default: break;
    }

    ctx->pc = 0x1de080u;

    // 0x1de080: 0x8c831150  lw          $v1, 0x1150($a0)
    ctx->pc = 0x1de080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4432)));
    // 0x1de084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1de084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de088: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1de088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de08c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1de08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de090: 0x84660044  lh          $a2, 0x44($v1)
    ctx->pc = 0x1de090u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1de094: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1de094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x1de098: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE098u;
    {
        const bool branch_taken_0x1de098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE098u;
            // 0x1de09c: 0x2484d1e0  addiu       $a0, $a0, -0x2E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de098) {
            ctx->pc = 0x1DE0B0u;
            goto label_1de0b0;
        }
    }
    ctx->pc = 0x1DE0A0u;
label_1de0a0:
    // 0x1de0a0: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE0A0u;
    {
        const bool branch_taken_0x1de0a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de0a0) {
            ctx->pc = 0x1DE0C0u;
            goto label_1de0c0;
        }
    }
    ctx->pc = 0x1DE0A8u;
    // 0x1de0a8: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x1de0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1de0ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1de0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1de0b0:
    // 0x1de0b0: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1de0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1de0b4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1de0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1de0b8: 0x1462fff9  bne         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DE0B8u;
    {
        const bool branch_taken_0x1de0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de0b8) {
            ctx->pc = 0x1DE0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de0a0;
        }
    }
    ctx->pc = 0x1DE0C0u;
label_1de0c0:
    // 0x1de0c0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1de0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1de0c4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1de0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1de0c8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1de0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1de0cc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1de0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1de0d0: 0x2463d1e0  addiu       $v1, $v1, -0x2E20
    ctx->pc = 0x1de0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955488));
    // 0x1de0d4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1de0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de0d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1de0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de0dc: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x1de0dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1de0e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE0E0u;
    {
        const bool branch_taken_0x1de0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE0E0u;
            // 0x1de0e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0e0) {
            ctx->pc = 0x1DE0F0u;
            goto label_1de0f0;
        }
    }
    ctx->pc = 0x1DE0E8u;
    // 0x1de0e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DE0E8u;
    {
        const bool branch_taken_0x1de0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE0E8u;
            // 0x1de0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0e8) {
            ctx->pc = 0x1DE128u;
            goto label_1de128;
        }
    }
    ctx->pc = 0x1DE0F0u;
label_1de0f0:
    // 0x1de0f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0f4: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x1de0f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1de0f8: 0x0  nop
    ctx->pc = 0x1de0f8u;
    // NOP
label_1de0fc:
    // 0x1de0fc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1de0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1de100: 0x844200e0  lh          $v0, 0xE0($v0)
    ctx->pc = 0x1de100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1de104: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE104u;
    {
        const bool branch_taken_0x1de104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DE108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE104u;
            // 0x1de108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de104) {
            ctx->pc = 0x1DE114u;
            goto label_1de114;
        }
    }
    ctx->pc = 0x1DE10Cu;
    // 0x1de10c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE10Cu;
    {
        const bool branch_taken_0x1de10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de10c) {
            ctx->pc = 0x1DE128u;
            goto label_1de128;
        }
    }
    ctx->pc = 0x1DE114u;
label_1de114:
    // 0x1de114: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1de114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1de118: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1de118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1de11c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DE11Cu;
    {
        const bool branch_taken_0x1de11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE11Cu;
            // 0x1de120: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de11c) {
            ctx->pc = 0x1DE0FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de0fc;
        }
    }
    ctx->pc = 0x1DE124u;
    // 0x1de124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de128:
    // 0x1de128: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE130u;
}
