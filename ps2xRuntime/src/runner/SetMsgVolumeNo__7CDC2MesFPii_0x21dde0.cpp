#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgVolumeNo__7CDC2MesFPii
// Address: 0x21dde0 - 0x21de58
void SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgVolumeNo__7CDC2MesFPii_0x21dde0");
#endif

    switch (ctx->pc) {
        case 0x21ddf4u: goto label_21ddf4;
        default: break;
    }

    ctx->pc = 0x21dde0u;

    // 0x21dde0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21dde4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21dde4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dde8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21dde8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ddec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21DDECu;
    {
        const bool branch_taken_0x21ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DDECu;
            // 0x21ddf0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddec) {
            ctx->pc = 0x21DE34u;
            goto label_21de34;
        }
    }
    ctx->pc = 0x21DDF4u;
label_21ddf4:
    // 0x21ddf4: 0x8a6821  addu        $t5, $a0, $t2
    ctx->pc = 0x21ddf4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x21ddf8: 0x24680000  addiu       $t0, $v1, 0x0
    ctx->pc = 0x21ddf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x21ddfc: 0xaa5821  addu        $t3, $a1, $t2
    ctx->pc = 0x21ddfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21de00: 0x8da31a44  lw          $v1, 0x1A44($t5)
    ctx->pc = 0x21de00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 6724)));
    // 0x21de04: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x21de04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x21de08: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x21de08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21de0c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x21de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x21de10: 0x11030002  beq         $t0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DE10u;
    {
        const bool branch_taken_0x21de10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x21DE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE10u;
            // 0x21de14: 0x25ac1a44  addiu       $t4, $t5, 0x1A44 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 6724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de10) {
            ctx->pc = 0x21DE1Cu;
            goto label_21de1c;
        }
    }
    ctx->pc = 0x21DE18u;
    // 0x21de18: 0xa08721e0  sb          $a3, 0x21E0($a0)
    ctx->pc = 0x21de18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8672), (uint8_t)GPR_U32(ctx, 7));
label_21de1c:
    // 0x21de1c: 0x0  nop
    ctx->pc = 0x21de1cu;
    // NOP
    // 0x21de20: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x21de20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x21de24: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x21de24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x21de28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21de28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21de2c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x21de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x21de30: 0xada01a84  sw          $zero, 0x1A84($t5)
    ctx->pc = 0x21de30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6788), GPR_U32(ctx, 0));
label_21de34:
    // 0x21de34: 0x0  nop
    ctx->pc = 0x21de34u;
    // NOP
    // 0x21de38: 0x126082a  slt         $at, $t1, $a2
    ctx->pc = 0x21de38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21de3c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DE3Cu;
    {
        const bool branch_taken_0x21de3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE3Cu;
            // 0x21de40: 0x29230010  slti        $v1, $t1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de3c) {
            ctx->pc = 0x21DE4Cu;
            goto label_21de4c;
        }
    }
    ctx->pc = 0x21DE44u;
    // 0x21de44: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x21DE44u;
    {
        const bool branch_taken_0x21de44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE44u;
            // 0x21de48: 0x15d1821  addu        $v1, $t2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de44) {
            ctx->pc = 0x21DDF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ddf4;
        }
    }
    ctx->pc = 0x21DE4Cu;
label_21de4c:
    // 0x21de4c: 0x0  nop
    ctx->pc = 0x21de4cu;
    // NOP
    // 0x21de50: 0x3e00008  jr          $ra
    ctx->pc = 0x21DE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE50u;
            // 0x21de54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DE58u;
}
