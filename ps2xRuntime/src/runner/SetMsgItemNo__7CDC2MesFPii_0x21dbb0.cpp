#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgItemNo__7CDC2MesFPii
// Address: 0x21dbb0 - 0x21dc78
void SetMsgItemNo__7CDC2MesFPii_0x21dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgItemNo__7CDC2MesFPii_0x21dbb0");
#endif

    switch (ctx->pc) {
        case 0x21dbc4u: goto label_21dbc4;
        case 0x21dc24u: goto label_21dc24;
        default: break;
    }

    ctx->pc = 0x21dbb0u;

    // 0x21dbb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21dbb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21dbb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21dbb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbbc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21DBBCu;
    {
        const bool branch_taken_0x21dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DBBCu;
            // 0x21dbc0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbbc) {
            ctx->pc = 0x21DC58u;
            goto label_21dc58;
        }
    }
    ctx->pc = 0x21DBC4u;
label_21dbc4:
    // 0x21dbc4: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x21dbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x21dbc8: 0x246b0000  addiu       $t3, $v1, 0x0
    ctx->pc = 0x21dbc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x21dbcc: 0x250d1a04  addiu       $t5, $t0, 0x1A04
    ctx->pc = 0x21dbccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 6660));
    // 0x21dbd0: 0x8d031a04  lw          $v1, 0x1A04($t0)
    ctx->pc = 0x21dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6660)));
    // 0x21dbd4: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x21dbd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21dbd8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x21dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x21dbdc: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x21dbdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x21dbe0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x21dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x21dbe4: 0x11030002  beq         $t0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DBE4u;
    {
        const bool branch_taken_0x21dbe4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x21dbe4) {
            ctx->pc = 0x21DBF0u;
            goto label_21dbf0;
        }
    }
    ctx->pc = 0x21DBECu;
    // 0x21dbec: 0xa08721e0  sb          $a3, 0x21E0($a0)
    ctx->pc = 0x21dbecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8672), (uint8_t)GPR_U32(ctx, 7));
label_21dbf0:
    // 0x21dbf0: 0x5200005  bltz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DBF0u;
    {
        const bool branch_taken_0x21dbf0 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x21DBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DBF0u;
            // 0x21dbf4: 0x8d830000  lw          $v1, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbf0) {
            ctx->pc = 0x21DC08u;
            goto label_21dc08;
        }
    }
    ctx->pc = 0x21DBF8u;
    // 0x21dbf8: 0x29210010  slti        $at, $t1, 0x10
    ctx->pc = 0x21dbf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21dbfc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DBFCu;
    {
        const bool branch_taken_0x21dbfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dbfc) {
            ctx->pc = 0x21DC08u;
            goto label_21dc08;
        }
    }
    ctx->pc = 0x21DC04u;
    // 0x21dc04: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x21dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_21dc08:
    // 0x21dc08: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x21dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x21dc0c: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x21dc0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21dc10: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x21DC10u;
    {
        const bool branch_taken_0x21dc10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC10u;
            // 0x21dc14: 0x29210010  slti        $at, $t1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc10) {
            ctx->pc = 0x21DC50u;
            goto label_21dc50;
        }
    }
    ctx->pc = 0x21DC18u;
    // 0x21dc18: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x21DC18u;
    {
        const bool branch_taken_0x21dc18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC18u;
            // 0x21dc1c: 0x93080  sll         $a2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc18) {
            ctx->pc = 0x21DC6Cu;
            goto label_21dc6c;
        }
    }
    ctx->pc = 0x21DC20u;
    // 0x21dc20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21dc24:
    // 0x21dc24: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21DC24u;
    {
        const bool branch_taken_0x21dc24 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x21DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC24u;
            // 0x21dc28: 0x29210010  slti        $at, $t1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc24) {
            ctx->pc = 0x21DC38u;
            goto label_21dc38;
        }
    }
    ctx->pc = 0x21DC2Cu;
    // 0x21dc2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DC2Cu;
    {
        const bool branch_taken_0x21dc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC2Cu;
            // 0x21dc30: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc2c) {
            ctx->pc = 0x21DC38u;
            goto label_21dc38;
        }
    }
    ctx->pc = 0x21DC34u;
    // 0x21dc34: 0xac651a04  sw          $a1, 0x1A04($v1)
    ctx->pc = 0x21dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6660), GPR_U32(ctx, 5));
label_21dc38:
    // 0x21dc38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21dc38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21dc3c: 0x29230010  slti        $v1, $t1, 0x10
    ctx->pc = 0x21dc3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21dc40: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21DC40u;
    {
        const bool branch_taken_0x21dc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC40u;
            // 0x21dc44: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc40) {
            ctx->pc = 0x21DC24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21dc24;
        }
    }
    ctx->pc = 0x21DC48u;
    // 0x21dc48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21DC48u;
    {
        const bool branch_taken_0x21dc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dc48) {
            ctx->pc = 0x21DC6Cu;
            goto label_21dc6c;
        }
    }
    ctx->pc = 0x21DC50u;
label_21dc50:
    // 0x21dc50: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x21dc50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x21dc54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21dc54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21dc58:
    // 0x21dc58: 0x126082a  slt         $at, $t1, $a2
    ctx->pc = 0x21dc58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21dc5c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DC5Cu;
    {
        const bool branch_taken_0x21dc5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC5Cu;
            // 0x21dc60: 0x29230010  slti        $v1, $t1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc5c) {
            ctx->pc = 0x21DC6Cu;
            goto label_21dc6c;
        }
    }
    ctx->pc = 0x21DC64u;
    // 0x21dc64: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x21DC64u;
    {
        const bool branch_taken_0x21dc64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC64u;
            // 0x21dc68: 0x15d1821  addu        $v1, $t2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc64) {
            ctx->pc = 0x21DBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21dbc4;
        }
    }
    ctx->pc = 0x21DC6Cu;
label_21dc6c:
    // 0x21dc6c: 0x0  nop
    ctx->pc = 0x21dc6cu;
    // NOP
    // 0x21dc70: 0x3e00008  jr          $ra
    ctx->pc = 0x21DC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC70u;
            // 0x21dc74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DC78u;
}
