#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTextureBlockNo__11CMdsListSetFiPii
// Address: 0x168fd0 - 0x1690c8
void GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0");
#endif

    switch (ctx->pc) {
        case 0x168fe8u: goto label_168fe8;
        case 0x169078u: goto label_169078;
        default: break;
    }

    ctx->pc = 0x168fd0u;

    // 0x168fd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fd4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x168fd4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fd8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x168fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fe0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x168FE0u;
    {
        const bool branch_taken_0x168fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FE0u;
            // 0x168fe4: 0x55880  sll         $t3, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fe0) {
            ctx->pc = 0x1690B0u;
            goto label_1690b0;
        }
    }
    ctx->pc = 0x168FE8u;
label_168fe8:
    // 0x168fe8: 0x8d490094  lw          $t1, 0x94($t2)
    ctx->pc = 0x168fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 148)));
    // 0x168fec: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x168fecu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x168ff0: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x168ff0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x168ff4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x168ff4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x168ff8: 0x1520002a  bnez        $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x168FF8u;
    {
        const bool branch_taken_0x168ff8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x168ff8) {
            ctx->pc = 0x1690A4u;
            goto label_1690a4;
        }
    }
    ctx->pc = 0x169000u;
    // 0x169000: 0x8d4a0098  lw          $t2, 0x98($t2)
    ctx->pc = 0x169000u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 152)));
    // 0x169004: 0x11400027  beqz        $t2, . + 4 + (0x27 << 2)
    ctx->pc = 0x169004u;
    {
        const bool branch_taken_0x169004 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x169008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169004u;
            // 0x169008: 0xa0482a  slt         $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169004) {
            ctx->pc = 0x1690A4u;
            goto label_1690a4;
        }
    }
    ctx->pc = 0x16900Cu;
    // 0x16900c: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x16900cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x169010: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x169010u;
    {
        const bool branch_taken_0x169010 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x169010) {
            ctx->pc = 0x16901Cu;
            goto label_16901c;
        }
    }
    ctx->pc = 0x169018u;
    // 0x169018: 0x28a90020  slti        $t1, $a1, 0x20
    ctx->pc = 0x169018u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_16901c:
    // 0x16901c: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x16901cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x169020: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x169020u;
    {
        const bool branch_taken_0x169020 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x169024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169020u;
            // 0x169024: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169020) {
            ctx->pc = 0x169034u;
            goto label_169034;
        }
    }
    ctx->pc = 0x169028u;
    // 0x169028: 0x16a4821  addu        $t1, $t3, $t2
    ctx->pc = 0x169028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x16902c: 0x8d2e0000  lw          $t6, 0x0($t1)
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x169030: 0x0  nop
    ctx->pc = 0x169030u;
    // NOP
label_169034:
    // 0x169034: 0x5c0001b  bltz        $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x169034u;
    {
        const bool branch_taken_0x169034 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x169038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169034u;
            // 0x169038: 0xa0482a  slt         $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169034) {
            ctx->pc = 0x1690A4u;
            goto label_1690a4;
        }
    }
    ctx->pc = 0x16903Cu;
    // 0x16903c: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x16903cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x169040: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x169040u;
    {
        const bool branch_taken_0x169040 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x169040) {
            ctx->pc = 0x16904Cu;
            goto label_16904c;
        }
    }
    ctx->pc = 0x169048u;
    // 0x169048: 0x28a90020  slti        $t1, $a1, 0x20
    ctx->pc = 0x169048u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_16904c:
    // 0x16904c: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x16904cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x169050: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x169050u;
    {
        const bool branch_taken_0x169050 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x169054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169050u;
            // 0x169054: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169050) {
            ctx->pc = 0x169064u;
            goto label_169064;
        }
    }
    ctx->pc = 0x169058u;
    // 0x169058: 0x16a4821  addu        $t1, $t3, $t2
    ctx->pc = 0x169058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x16905c: 0x8d2f0080  lw          $t7, 0x80($t1)
    ctx->pc = 0x16905cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x169060: 0x0  nop
    ctx->pc = 0x169060u;
    // NOP
label_169064:
    // 0x169064: 0x19e0000f  blez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x169064u;
    {
        const bool branch_taken_0x169064 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x169068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169064u;
            // 0x169068: 0xf082a  slt         $at, $zero, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169064) {
            ctx->pc = 0x1690A4u;
            goto label_1690a4;
        }
    }
    ctx->pc = 0x16906Cu;
    // 0x16906c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x16906Cu;
    {
        const bool branch_taken_0x16906c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16906Cu;
            // 0x169070: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16906c) {
            ctx->pc = 0x1690A4u;
            goto label_1690a4;
        }
    }
    ctx->pc = 0x169074u;
    // 0x169074: 0x100c02d  daddu       $t8, $t0, $zero
    ctx->pc = 0x169074u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_169078:
    // 0x169078: 0x47082a  slt         $at, $v0, $a3
    ctx->pc = 0x169078u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x16907c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x16907Cu;
    {
        const bool branch_taken_0x16907c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16907Cu;
            // 0x169080: 0x1cd5021  addu        $t2, $t6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16907c) {
            ctx->pc = 0x1690A4u;
            goto label_1690a4;
        }
    }
    ctx->pc = 0x169084u;
    // 0x169084: 0xd84821  addu        $t1, $a2, $t8
    ctx->pc = 0x169084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x169088: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x169088u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x16908c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x16908cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x169090: 0x1af482a  slt         $t1, $t5, $t7
    ctx->pc = 0x169090u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x169094: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x169094u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x169098: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x169098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x16909c: 0x1520fff6  bnez        $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16909Cu;
    {
        const bool branch_taken_0x16909c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1690A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16909Cu;
            // 0x1690a0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16909c) {
            ctx->pc = 0x169078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_169078;
        }
    }
    ctx->pc = 0x1690A4u;
label_1690a4:
    // 0x1690a4: 0x0  nop
    ctx->pc = 0x1690a4u;
    // NOP
    // 0x1690a8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1690a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1690ac: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1690acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_1690b0:
    // 0x1690b0: 0x8c890090  lw          $t1, 0x90($a0)
    ctx->pc = 0x1690b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1690b4: 0x189482a  slt         $t1, $t4, $t1
    ctx->pc = 0x1690b4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1690b8: 0x1520ffcb  bnez        $t1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1690B8u;
    {
        const bool branch_taken_0x1690b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1690BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690B8u;
            // 0x1690bc: 0x835021  addu        $t2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690b8) {
            ctx->pc = 0x168FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168fe8;
        }
    }
    ctx->pc = 0x1690C0u;
    // 0x1690c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1690C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1690C8u;
}
