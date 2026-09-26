#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RelationGlid__16CDngFloorManagerFv
// Address: 0x2f9e40 - 0x2f9f30
void RelationGlid__16CDngFloorManagerFv_0x2f9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RelationGlid__16CDngFloorManagerFv_0x2f9e40");
#endif

    switch (ctx->pc) {
        case 0x2f9e4cu: goto label_2f9e4c;
        case 0x2f9e60u: goto label_2f9e60;
        default: break;
    }

    ctx->pc = 0x2f9e40u;

    // 0x2f9e40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f9e40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e44: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F9E44u;
    {
        const bool branch_taken_0x2f9e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E44u;
            // 0x2f9e48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e44) {
            ctx->pc = 0x2F9F18u;
            goto label_2f9f18;
        }
    }
    ctx->pc = 0x2F9E4Cu;
label_2f9e4c:
    // 0x2f9e4c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2f9e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f9e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e58: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F9E58u;
    {
        const bool branch_taken_0x2f9e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9E58u;
            // 0x2f9e5c: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e58) {
            ctx->pc = 0x2F9F00u;
            goto label_2f9f00;
        }
    }
    ctx->pc = 0x2F9E60u;
label_2f9e60:
    // 0x2f9e60: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x2f9e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f9e64: 0x1275821  addu        $t3, $t1, $a3
    ctx->pc = 0x2f9e64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2f9e68: 0x11660023  beq         $t3, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F9E68u;
    {
        const bool branch_taken_0x2f9e68 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 6));
        if (branch_taken_0x2f9e68) {
            ctx->pc = 0x2F9EF8u;
            goto label_2f9ef8;
        }
    }
    ctx->pc = 0x2F9E70u;
    // 0x2f9e70: 0x84ca0002  lh          $t2, 0x2($a2)
    ctx->pc = 0x2f9e70u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2f9e74: 0x85690002  lh          $t1, 0x2($t3)
    ctx->pc = 0x2f9e74u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2f9e78: 0x1549000e  bne         $t2, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9E78u;
    {
        const bool branch_taken_0x2f9e78 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x2f9e78) {
            ctx->pc = 0x2F9EB4u;
            goto label_2f9eb4;
        }
    }
    ctx->pc = 0x2F9E80u;
    // 0x2f9e80: 0x84c90004  lh          $t1, 0x4($a2)
    ctx->pc = 0x2f9e80u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f9e84: 0x856a0004  lh          $t2, 0x4($t3)
    ctx->pc = 0x2f9e84u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2f9e88: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2f9e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2f9e8c: 0x15490002  bne         $t2, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9E8Cu;
    {
        const bool branch_taken_0x2f9e8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x2f9e8c) {
            ctx->pc = 0x2F9E98u;
            goto label_2f9e98;
        }
    }
    ctx->pc = 0x2F9E94u;
    // 0x2f9e94: 0xaccb000c  sw          $t3, 0xC($a2)
    ctx->pc = 0x2f9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
label_2f9e98:
    // 0x2f9e98: 0x84c90004  lh          $t1, 0x4($a2)
    ctx->pc = 0x2f9e98u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f9e9c: 0x856a0004  lh          $t2, 0x4($t3)
    ctx->pc = 0x2f9e9cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2f9ea0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2f9ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2f9ea4: 0x15490003  bne         $t2, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9EA4u;
    {
        const bool branch_taken_0x2f9ea4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x2f9ea4) {
            ctx->pc = 0x2F9EB4u;
            goto label_2f9eb4;
        }
    }
    ctx->pc = 0x2F9EACu;
    // 0x2f9eac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F9EACu;
    {
        const bool branch_taken_0x2f9eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9EACu;
            // 0x2f9eb0: 0xaccb0010  sw          $t3, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9eac) {
            ctx->pc = 0x2F9F10u;
            goto label_2f9f10;
        }
    }
    ctx->pc = 0x2F9EB4u;
label_2f9eb4:
    // 0x2f9eb4: 0x0  nop
    ctx->pc = 0x2f9eb4u;
    // NOP
    // 0x2f9eb8: 0x84ca0004  lh          $t2, 0x4($a2)
    ctx->pc = 0x2f9eb8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f9ebc: 0x85690004  lh          $t1, 0x4($t3)
    ctx->pc = 0x2f9ebcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2f9ec0: 0x1549000d  bne         $t2, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F9EC0u;
    {
        const bool branch_taken_0x2f9ec0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x2f9ec0) {
            ctx->pc = 0x2F9EF8u;
            goto label_2f9ef8;
        }
    }
    ctx->pc = 0x2F9EC8u;
    // 0x2f9ec8: 0x84c90002  lh          $t1, 0x2($a2)
    ctx->pc = 0x2f9ec8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2f9ecc: 0x856a0002  lh          $t2, 0x2($t3)
    ctx->pc = 0x2f9eccu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2f9ed0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2f9ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2f9ed4: 0x15490002  bne         $t2, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9ED4u;
    {
        const bool branch_taken_0x2f9ed4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x2f9ed4) {
            ctx->pc = 0x2F9EE0u;
            goto label_2f9ee0;
        }
    }
    ctx->pc = 0x2F9EDCu;
    // 0x2f9edc: 0xaccb0014  sw          $t3, 0x14($a2)
    ctx->pc = 0x2f9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 11));
label_2f9ee0:
    // 0x2f9ee0: 0x84c90002  lh          $t1, 0x2($a2)
    ctx->pc = 0x2f9ee0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2f9ee4: 0x856a0002  lh          $t2, 0x2($t3)
    ctx->pc = 0x2f9ee4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2f9ee8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2f9ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2f9eec: 0x15490002  bne         $t2, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9EECu;
    {
        const bool branch_taken_0x2f9eec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x2f9eec) {
            ctx->pc = 0x2F9EF8u;
            goto label_2f9ef8;
        }
    }
    ctx->pc = 0x2F9EF4u;
    // 0x2f9ef4: 0xaccb0018  sw          $t3, 0x18($a2)
    ctx->pc = 0x2f9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 11));
label_2f9ef8:
    // 0x2f9ef8: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x2f9ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x2f9efc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f9efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f9f00:
    // 0x2f9f00: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x2f9f00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f9f04: 0xa9482a  slt         $t1, $a1, $t1
    ctx->pc = 0x2f9f04u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2f9f08: 0x1520ffd5  bnez        $t1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2F9F08u;
    {
        const bool branch_taken_0x2f9f08 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f08) {
            ctx->pc = 0x2F9E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9e60;
        }
    }
    ctx->pc = 0x2F9F10u;
label_2f9f10:
    // 0x2f9f10: 0x25080070  addiu       $t0, $t0, 0x70
    ctx->pc = 0x2f9f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x2f9f14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f9f18:
    // 0x2f9f18: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2f9f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f9f1c: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x2f9f1cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f9f20: 0x14a0ffca  bnez        $a1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2F9F20u;
    {
        const bool branch_taken_0x2f9f20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f20) {
            ctx->pc = 0x2F9E4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9e4c;
        }
    }
    ctx->pc = 0x2F9F28u;
    // 0x2f9f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9F30u;
}
