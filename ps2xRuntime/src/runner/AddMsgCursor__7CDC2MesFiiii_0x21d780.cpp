#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddMsgCursor__7CDC2MesFiiii
// Address: 0x21d780 - 0x21d7f0
void AddMsgCursor__7CDC2MesFiiii_0x21d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddMsgCursor__7CDC2MesFiiii_0x21d780");
#endif

    ctx->pc = 0x21d780u;

    // 0x21d780: 0x808921e1  lb          $t1, 0x21E1($a0)
    ctx->pc = 0x21d780u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8673)));
    // 0x21d784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d788: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x21d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x21d78c: 0x1502000b  bne         $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21D78Cu;
    {
        const bool branch_taken_0x21d78c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D78Cu;
            // 0x21d790: 0xa08321e1  sb          $v1, 0x21E1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8673), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d78c) {
            ctx->pc = 0x21D7BCu;
            goto label_21d7bc;
        }
    }
    ctx->pc = 0x21D794u;
    // 0x21d794: 0x808221e1  lb          $v0, 0x21E1($a0)
    ctx->pc = 0x21d794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8673)));
    // 0x21d798: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x21d798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21d79c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D79Cu;
    {
        const bool branch_taken_0x21d79c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D79Cu;
            // 0x21d7a0: 0xe2082a  slt         $at, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d79c) {
            ctx->pc = 0x21D7ACu;
            goto label_21d7ac;
        }
    }
    ctx->pc = 0x21D7A4u;
    // 0x21d7a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21D7A4u;
    {
        const bool branch_taken_0x21d7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7A4u;
            // 0x21d7a8: 0xa08721e1  sb          $a3, 0x21E1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8673), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7a4) {
            ctx->pc = 0x21D7E0u;
            goto label_21d7e0;
        }
    }
    ctx->pc = 0x21D7ACu;
label_21d7ac:
    // 0x21d7ac: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x21D7ACu;
    {
        const bool branch_taken_0x21d7ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d7ac) {
            ctx->pc = 0x21D7E0u;
            goto label_21d7e0;
        }
    }
    ctx->pc = 0x21D7B4u;
    // 0x21d7b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21D7B4u;
    {
        const bool branch_taken_0x21d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7B4u;
            // 0x21d7b8: 0xa08621e1  sb          $a2, 0x21E1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8673), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7b4) {
            ctx->pc = 0x21D7E0u;
            goto label_21d7e0;
        }
    }
    ctx->pc = 0x21D7BCu;
label_21d7bc:
    // 0x21d7bc: 0x808221e1  lb          $v0, 0x21E1($a0)
    ctx->pc = 0x21d7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8673)));
    // 0x21d7c0: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x21d7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21d7c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D7C4u;
    {
        const bool branch_taken_0x21d7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7C4u;
            // 0x21d7c8: 0xe2082a  slt         $at, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7c4) {
            ctx->pc = 0x21D7D4u;
            goto label_21d7d4;
        }
    }
    ctx->pc = 0x21D7CCu;
    // 0x21d7cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21D7CCu;
    {
        const bool branch_taken_0x21d7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7CCu;
            // 0x21d7d0: 0xa08621e1  sb          $a2, 0x21E1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8673), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7cc) {
            ctx->pc = 0x21D7E0u;
            goto label_21d7e0;
        }
    }
    ctx->pc = 0x21D7D4u;
label_21d7d4:
    // 0x21d7d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D7D4u;
    {
        const bool branch_taken_0x21d7d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d7d4) {
            ctx->pc = 0x21D7E0u;
            goto label_21d7e0;
        }
    }
    ctx->pc = 0x21D7DCu;
    // 0x21d7dc: 0xa08721e1  sb          $a3, 0x21E1($a0)
    ctx->pc = 0x21d7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8673), (uint8_t)GPR_U32(ctx, 7));
label_21d7e0:
    // 0x21d7e0: 0x808221e1  lb          $v0, 0x21E1($a0)
    ctx->pc = 0x21d7e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8673)));
    // 0x21d7e4: 0x1221026  xor         $v0, $t1, $v0
    ctx->pc = 0x21d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x21d7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7E8u;
            // 0x21d7ec: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D7F0u;
}
