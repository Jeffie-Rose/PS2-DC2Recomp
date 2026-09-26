#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartStackMode__9mgCMemoryFii
// Address: 0x139aa0 - 0x139bc4
void StartStackMode__9mgCMemoryFii_0x139aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartStackMode__9mgCMemoryFii_0x139aa0");
#endif

    switch (ctx->pc) {
        case 0x139ad8u: goto label_139ad8;
        default: break;
    }

    ctx->pc = 0x139aa0u;

    // 0x139aa0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x139aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x139aa4: 0x8c890018  lw          $t1, 0x18($a0)
    ctx->pc = 0x139aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x139aa8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139AA8u;
    {
        const bool branch_taken_0x139aa8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x139AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AA8u;
            // 0x139aac: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139aa8) {
            ctx->pc = 0x139AB8u;
            goto label_139ab8;
        }
    }
    ctx->pc = 0x139AB0u;
    // 0x139ab0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x139AB0u;
    {
        const bool branch_taken_0x139ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AB0u;
            // 0x139ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ab0) {
            ctx->pc = 0x139BBCu;
            goto label_139bbc;
        }
    }
    ctx->pc = 0x139AB8u;
label_139ab8:
    // 0x139ab8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x139ab8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139abc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x139abcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ac0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ac4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x139ac4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ac8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139acc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x139accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139ad0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x139AD0u;
    {
        const bool branch_taken_0x139ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AD0u;
            // 0x139ad4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ad0) {
            ctx->pc = 0x139B58u;
            goto label_139b58;
        }
    }
    ctx->pc = 0x139AD8u;
label_139ad8:
    // 0x139ad8: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x139ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x139adc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x139adcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x139ae0: 0x1286821  addu        $t5, $t1, $t0
    ctx->pc = 0x139ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x139ae4: 0x1ed4023  subu        $t0, $t7, $t5
    ctx->pc = 0x139ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x139ae8: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139AE8u;
    {
        const bool branch_taken_0x139ae8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x139AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AE8u;
            // 0x139aec: 0x87103  sra         $t6, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ae8) {
            ctx->pc = 0x139AF8u;
            goto label_139af8;
        }
    }
    ctx->pc = 0x139AF0u;
    // 0x139af0: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x139af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x139af4: 0x87103  sra         $t6, $t0, 4
    ctx->pc = 0x139af4u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 8), 4));
label_139af8:
    // 0x139af8: 0x14a70007  bne         $a1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x139AF8u;
    {
        const bool branch_taken_0x139af8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x139AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AF8u;
            // 0x139afc: 0x25c8ffff  addiu       $t0, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139af8) {
            ctx->pc = 0x139B18u;
            goto label_139b18;
        }
    }
    ctx->pc = 0x139B00u;
    // 0x139b00: 0x2dc10002  sltiu       $at, $t6, 0x2
    ctx->pc = 0x139b00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x139b04: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x139B04u;
    {
        const bool branch_taken_0x139b04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x139b04) {
            ctx->pc = 0x139B18u;
            goto label_139b18;
        }
    }
    ctx->pc = 0x139B0Cu;
    // 0x139b0c: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x139b0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x139B10u;
    {
        const bool branch_taken_0x139b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B10u;
            // 0x139b14: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b10) {
            ctx->pc = 0x139B64u;
            goto label_139b64;
        }
    }
    ctx->pc = 0x139B18u;
label_139b18:
    // 0x139b18: 0x14a60006  bne         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x139B18u;
    {
        const bool branch_taken_0x139b18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x139B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B18u;
            // 0x139b1c: 0x18e082b  sltu        $at, $t4, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b18) {
            ctx->pc = 0x139B34u;
            goto label_139b34;
        }
    }
    ctx->pc = 0x139B20u;
    // 0x139b20: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x139B20u;
    {
        const bool branch_taken_0x139b20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b20) {
            ctx->pc = 0x139B34u;
            goto label_139b34;
        }
    }
    ctx->pc = 0x139B28u;
    // 0x139b28: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x139b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b2c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x139b2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b30: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x139b30u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_139b34:
    // 0x139b34: 0x0  nop
    ctx->pc = 0x139b34u;
    // NOP
    // 0x139b38: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139B38u;
    {
        const bool branch_taken_0x139b38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x139B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B38u;
            // 0x139b3c: 0x4e082b  sltu        $at, $v0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b38) {
            ctx->pc = 0x139B54u;
            goto label_139b54;
        }
    }
    ctx->pc = 0x139B40u;
    // 0x139b40: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x139B40u;
    {
        const bool branch_taken_0x139b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b40) {
            ctx->pc = 0x139B54u;
            goto label_139b54;
        }
    }
    ctx->pc = 0x139B48u;
    // 0x139b48: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x139b48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139B4Cu;
    {
        const bool branch_taken_0x139b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B4Cu;
            // 0x139b50: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b4c) {
            ctx->pc = 0x139B64u;
            goto label_139b64;
        }
    }
    ctx->pc = 0x139B54u;
label_139b54:
    // 0x139b54: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x139b54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_139b58:
    // 0x139b58: 0x8d2f000c  lw          $t7, 0xC($t1)
    ctx->pc = 0x139b58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x139b5c: 0x15e0ffde  bnez        $t7, . + 4 + (-0x22 << 2)
    ctx->pc = 0x139B5Cu;
    {
        const bool branch_taken_0x139b5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x139b5c) {
            ctx->pc = 0x139AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139ad8;
        }
    }
    ctx->pc = 0x139B64u;
label_139b64:
    // 0x139b64: 0x0  nop
    ctx->pc = 0x139b64u;
    // NOP
    // 0x139b68: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x139B68u;
    {
        const bool branch_taken_0x139b68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B68u;
            // 0x139b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b68) {
            ctx->pc = 0x139BBCu;
            goto label_139bbc;
        }
    }
    ctx->pc = 0x139B70u;
    // 0x139b70: 0xac8a002c  sw          $t2, 0x2C($a0)
    ctx->pc = 0x139b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 10));
    // 0x139b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x139b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b78: 0x8d65000c  lw          $a1, 0xC($t3)
    ctx->pc = 0x139b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x139b7c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x139b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x139b80: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x139b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x139b84: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x139b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x139b88: 0xad62000c  sw          $v0, 0xC($t3)
    ctx->pc = 0x139b88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 2));
    // 0x139b8c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x139b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x139b90: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x139b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x139b94: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x139b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x139b98: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x139b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x139b9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x139b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x139ba0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x139ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x139ba4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139ba8: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x139ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x139bac: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x139bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x139bb0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x139bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x139bb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139bb8: 0x0  nop
    ctx->pc = 0x139bb8u;
    // NOP
label_139bbc:
    // 0x139bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x139BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139BC4u;
}
