#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __fpcmp_parts_f
// Address: 0x289010 - 0x289124
void ps2___fpcmp_parts_f_0x289010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_f_0x289010");
#endif

    switch (ctx->pc) {
        case 0x289058u: goto label_289058;
        case 0x2890c8u: goto label_2890c8;
        case 0x2890f4u: goto label_2890f4;
        default: break;
    }

    ctx->pc = 0x289010u;

    // 0x289010: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x289010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289014: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x289014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x289018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x289018u;
    {
        const bool branch_taken_0x289018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289018) {
            ctx->pc = 0x289030u;
            goto label_289030;
        }
    }
    ctx->pc = 0x289020u;
    // 0x289020: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x289020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289024: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x289024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x289028: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x289028u;
    {
        const bool branch_taken_0x289028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289028u;
            // 0x28902c: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289028) {
            ctx->pc = 0x289038u;
            goto label_289038;
        }
    }
    ctx->pc = 0x289030u;
label_289030:
    // 0x289030: 0x3e00008  jr          $ra
    ctx->pc = 0x289030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289030u;
            // 0x289034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289038u;
label_289038:
    // 0x289038: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x289038u;
    {
        const bool branch_taken_0x289038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28903Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289038u;
            // 0x28903c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289038) {
            ctx->pc = 0x289068u;
            goto label_289068;
        }
    }
    ctx->pc = 0x289040u;
    // 0x289040: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289040u;
    {
        const bool branch_taken_0x289040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289040) {
            ctx->pc = 0x289044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289040u;
            // 0x289044: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289058u;
            goto label_289058;
        }
    }
    ctx->pc = 0x289048u;
    // 0x289048: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x289048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28904c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x289050: 0x3e00008  jr          $ra
    ctx->pc = 0x289050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289050u;
            // 0x289054: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289058u;
label_289058:
    // 0x289058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28905c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289060: 0x3e00008  jr          $ra
    ctx->pc = 0x289060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289060u;
            // 0x289064: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289068u;
label_289068:
    // 0x289068: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289068u;
    {
        const bool branch_taken_0x289068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289068) {
            ctx->pc = 0x28906Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289068u;
            // 0x28906c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x289084u;
            goto label_289084;
        }
    }
    ctx->pc = 0x289070u;
    // 0x289070: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x289070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x289074: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x289074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28907c: 0x3e00008  jr          $ra
    ctx->pc = 0x28907Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28907Cu;
            // 0x289080: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289084u;
label_289084:
    // 0x289084: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x289084u;
    {
        const bool branch_taken_0x289084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289084u;
            // 0x289088: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289084) {
            ctx->pc = 0x2890ACu;
            goto label_2890ac;
        }
    }
    ctx->pc = 0x28908Cu;
    // 0x28908c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28908Cu;
    {
        const bool branch_taken_0x28908c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28908c) {
            ctx->pc = 0x289090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28908Cu;
            // 0x289090: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28909Cu;
            goto label_28909c;
        }
    }
    ctx->pc = 0x289094u;
    // 0x289094: 0x3e00008  jr          $ra
    ctx->pc = 0x289094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289094u;
            // 0x289098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28909Cu;
label_28909c:
    // 0x28909c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2890a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2890a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2890a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2890A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2890A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2890A4u;
            // 0x2890a8: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2890ACu;
label_2890ac:
    // 0x2890ac: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2890ACu;
    {
        const bool branch_taken_0x2890ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2890ac) {
            ctx->pc = 0x2890B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2890ACu;
            // 0x2890b0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289058;
        }
    }
    ctx->pc = 0x2890B4u;
    // 0x2890b4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2890b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2890b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2890b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2890bc: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2890BCu;
    {
        const bool branch_taken_0x2890bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2890bc) {
            ctx->pc = 0x2890C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2890BCu;
            // 0x2890c0: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2890D4u;
            goto label_2890d4;
        }
    }
    ctx->pc = 0x2890C4u;
    // 0x2890c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2890c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2890c8:
    // 0x2890c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2890c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2890cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2890CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2890D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2890CCu;
            // 0x2890d0: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2890D4u;
label_2890d4:
    // 0x2890d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2890d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2890d8: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2890d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2890dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2890DCu;
    {
        const bool branch_taken_0x2890dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2890dc) {
            ctx->pc = 0x2890E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2890DCu;
            // 0x2890e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2890C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2890c8;
        }
    }
    ctx->pc = 0x2890E4u;
    // 0x2890e4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2890e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2890e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2890E8u;
    {
        const bool branch_taken_0x2890e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2890e8) {
            ctx->pc = 0x2890ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2890E8u;
            // 0x2890ec: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289100u;
            goto label_289100;
        }
    }
    ctx->pc = 0x2890F0u;
    // 0x2890f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2890f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2890f4:
    // 0x2890f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2890f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2890f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2890F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2890FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2890F8u;
            // 0x2890fc: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289100u;
label_289100:
    // 0x289100: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x289100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x289104: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x289104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x289108: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x289108u;
    {
        const bool branch_taken_0x289108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289108) {
            ctx->pc = 0x28910Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289108u;
            // 0x28910c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2890C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2890c8;
        }
    }
    ctx->pc = 0x289110u;
    // 0x289110: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x289110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x289114: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x289114u;
    {
        const bool branch_taken_0x289114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289114u;
            // 0x289118: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289114) {
            ctx->pc = 0x2890F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2890f4;
        }
    }
    ctx->pc = 0x28911Cu;
    // 0x28911c: 0x3e00008  jr          $ra
    ctx->pc = 0x28911Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28911Cu;
            // 0x289120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289124u;
}
