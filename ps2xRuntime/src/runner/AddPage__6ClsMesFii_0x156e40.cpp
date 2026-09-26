#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPage__6ClsMesFii
// Address: 0x156e40 - 0x156f48
void AddPage__6ClsMesFii_0x156e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPage__6ClsMesFii_0x156e40");
#endif

    switch (ctx->pc) {
        case 0x156e74u: goto label_156e74;
        case 0x156f1cu: goto label_156f1c;
        default: break;
    }

    ctx->pc = 0x156e40u;

    // 0x156e40: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x156e40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x156e44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x156e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x156e48: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x156e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x156e4c: 0x18c0003c  blez        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x156E4Cu;
    {
        const bool branch_taken_0x156e4c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x156E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E4Cu;
            // 0x156e50: 0xac6500e8  sw          $a1, 0xE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e4c) {
            ctx->pc = 0x156F40u;
            goto label_156f40;
        }
    }
    ctx->pc = 0x156E54u;
    // 0x156e54: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x156e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x156e58: 0xe0082a  slt         $at, $a3, $zero
    ctx->pc = 0x156e58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x156e5c: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x156E5Cu;
    {
        const bool branch_taken_0x156e5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x156E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E5Cu;
            // 0x156e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e5c) {
            ctx->pc = 0x156F40u;
            goto label_156f40;
        }
    }
    ctx->pc = 0x156E64u;
    // 0x156e64: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x156e64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x156e68: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x156E68u;
    {
        const bool branch_taken_0x156e68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x156E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E68u;
            // 0x156e6c: 0x24c7fff7  addiu       $a3, $a2, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e68) {
            ctx->pc = 0x156F08u;
            goto label_156f08;
        }
    }
    ctx->pc = 0x156E70u;
    // 0x156e70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156e74:
    // 0x156e74: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x156e74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x156e78: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x156e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x156e7c: 0x8c6b00e8  lw          $t3, 0xE8($v1)
    ctx->pc = 0x156e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x156e80: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x156e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x156e84: 0x8d4c00e8  lw          $t4, 0xE8($t2)
    ctx->pc = 0x156e84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 232)));
    // 0x156e88: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x156e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x156e8c: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x156e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x156e90: 0xac6b00e8  sw          $t3, 0xE8($v1)
    ctx->pc = 0x156e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 11));
    // 0x156e94: 0x8d4c00ec  lw          $t4, 0xEC($t2)
    ctx->pc = 0x156e94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 236)));
    // 0x156e98: 0x8c6b00e8  lw          $t3, 0xE8($v1)
    ctx->pc = 0x156e98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x156e9c: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x156e9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x156ea0: 0xac6b00e8  sw          $t3, 0xE8($v1)
    ctx->pc = 0x156ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 11));
    // 0x156ea4: 0x8d4c00f0  lw          $t4, 0xF0($t2)
    ctx->pc = 0x156ea4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 240)));
    // 0x156ea8: 0x8c6b00e8  lw          $t3, 0xE8($v1)
    ctx->pc = 0x156ea8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x156eac: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x156eacu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x156eb0: 0xac6b00e8  sw          $t3, 0xE8($v1)
    ctx->pc = 0x156eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 11));
    // 0x156eb4: 0x8d4c00f4  lw          $t4, 0xF4($t2)
    ctx->pc = 0x156eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 244)));
    // 0x156eb8: 0x8c6b00e8  lw          $t3, 0xE8($v1)
    ctx->pc = 0x156eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x156ebc: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x156ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x156ec0: 0xac6b00e8  sw          $t3, 0xE8($v1)
    ctx->pc = 0x156ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 11));
    // 0x156ec4: 0x8d4c00f8  lw          $t4, 0xF8($t2)
    ctx->pc = 0x156ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 248)));
    // 0x156ec8: 0x8c6b00e8  lw          $t3, 0xE8($v1)
    ctx->pc = 0x156ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x156ecc: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x156eccu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x156ed0: 0xac6b00e8  sw          $t3, 0xE8($v1)
    ctx->pc = 0x156ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 11));
    // 0x156ed4: 0x8d4c00fc  lw          $t4, 0xFC($t2)
    ctx->pc = 0x156ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 252)));
    // 0x156ed8: 0x8c6b00e8  lw          $t3, 0xE8($v1)
    ctx->pc = 0x156ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x156edc: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x156edcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x156ee0: 0xac6b00e8  sw          $t3, 0xE8($v1)
    ctx->pc = 0x156ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 11));
    // 0x156ee4: 0x8d4c0100  lw          $t4, 0x100($t2)
    ctx->pc = 0x156ee4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 256)));
    // 0x156ee8: 0x8c6b00e8  lw          $t3, 0xE8($v1)
    ctx->pc = 0x156ee8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x156eec: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x156eecu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x156ef0: 0xac6b00e8  sw          $t3, 0xE8($v1)
    ctx->pc = 0x156ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 11));
    // 0x156ef4: 0x8d4b0104  lw          $t3, 0x104($t2)
    ctx->pc = 0x156ef4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 260)));
    // 0x156ef8: 0x8c6a00e8  lw          $t2, 0xE8($v1)
    ctx->pc = 0x156ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x156efc: 0x14b5023  subu        $t2, $t2, $t3
    ctx->pc = 0x156efcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x156f00: 0x1020ffdc  beqz        $at, . + 4 + (-0x24 << 2)
    ctx->pc = 0x156F00u;
    {
        const bool branch_taken_0x156f00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F00u;
            // 0x156f04: 0xac6a00e8  sw          $t2, 0xE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f00) {
            ctx->pc = 0x156E74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156e74;
        }
    }
    ctx->pc = 0x156F08u;
label_156f08:
    // 0x156f08: 0x24c8ffff  addiu       $t0, $a2, -0x1
    ctx->pc = 0x156f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x156f0c: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x156f0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x156f10: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x156F10u;
    {
        const bool branch_taken_0x156f10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x156F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F10u;
            // 0x156f14: 0x55080  sll         $t2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f10) {
            ctx->pc = 0x156F40u;
            goto label_156f40;
        }
    }
    ctx->pc = 0x156F18u;
    // 0x156f18: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x156f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_156f1c:
    // 0x156f1c: 0x8a3821  addu        $a3, $a0, $t2
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x156f20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x156f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x156f24: 0x8cc300e8  lw          $v1, 0xE8($a2)
    ctx->pc = 0x156f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 232)));
    // 0x156f28: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x156f28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x156f2c: 0x8ce700e8  lw          $a3, 0xE8($a3)
    ctx->pc = 0x156f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
    // 0x156f30: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x156f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x156f34: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x156f38: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x156F38u;
    {
        const bool branch_taken_0x156f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F38u;
            // 0x156f3c: 0xacc300e8  sw          $v1, 0xE8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f38) {
            ctx->pc = 0x156F1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156f1c;
        }
    }
    ctx->pc = 0x156F40u;
label_156f40:
    // 0x156f40: 0x3e00008  jr          $ra
    ctx->pc = 0x156F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156F48u;
}
