#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: put_message
// Address: 0x123ca0 - 0x123d34
void put_message_0x123ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("put_message_0x123ca0");
#endif

    switch (ctx->pc) {
        case 0x123ca8u: goto label_123ca8;
        case 0x123d10u: goto label_123d10;
        default: break;
    }

    ctx->pc = 0x123ca0u;

    // 0x123ca0: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x123CA0u;
    {
        const bool branch_taken_0x123ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ca0) {
            ctx->pc = 0x123CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123CA0u;
            // 0x123ca4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123CB0u;
            goto label_123cb0;
        }
    }
    ctx->pc = 0x123CA8u;
label_123ca8:
    // 0x123ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x123CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CA8u;
            // 0x123cac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123CB0u;
label_123cb0:
    // 0x123cb0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x123cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123cb4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x123cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x123cb8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x123CB8u;
    {
        const bool branch_taken_0x123cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CB8u;
            // 0x123cbc: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cb8) {
            ctx->pc = 0x123CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123ca8;
        }
    }
    ctx->pc = 0x123CC0u;
    // 0x123cc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x123cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123cc4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x123cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x123cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123ccc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x123cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x123cd0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x123cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x123cd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x123cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123cd8: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x123cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x123cdc: 0x25030008  addiu       $v1, $t0, 0x8
    ctx->pc = 0x123cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x123ce0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x123ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x123ce4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x123CE4u;
    {
        const bool branch_taken_0x123ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CE4u;
            // 0x123ce8: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ce4) {
            ctx->pc = 0x123CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123ca8;
        }
    }
    ctx->pc = 0x123CECu;
    // 0x123cec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x123cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x123cf0: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x123cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x123cf4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x123cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x123cf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x123cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x123cfc: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123CFCu;
    {
        const bool branch_taken_0x123cfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x123D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CFCu;
            // 0x123d00: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cfc) {
            ctx->pc = 0x123D2Cu;
            goto label_123d2c;
        }
    }
    ctx->pc = 0x123D04u;
    // 0x123d04: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x123d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x123d08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x123d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x123d0c: 0x0  nop
    ctx->pc = 0x123d0cu;
    // NOP
label_123d10:
    // 0x123d10: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x123d10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123d14: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x123d18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x123d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x123d1c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x123d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x123d20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x123d24: 0x14e4fffa  bne         $a3, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123D24u;
    {
        const bool branch_taken_0x123d24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x123d24) {
            ctx->pc = 0x123D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123d10;
        }
    }
    ctx->pc = 0x123D2Cu;
label_123d2c:
    // 0x123d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x123D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D2Cu;
            // 0x123d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123D34u;
}
