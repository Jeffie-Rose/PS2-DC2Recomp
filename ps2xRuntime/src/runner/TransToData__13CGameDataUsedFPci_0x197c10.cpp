#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TransToData__13CGameDataUsedFPci
// Address: 0x197c10 - 0x197d24
void TransToData__13CGameDataUsedFPci_0x197c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransToData__13CGameDataUsedFPci_0x197c10");
#endif

    switch (ctx->pc) {
        case 0x197c38u: goto label_197c38;
        default: break;
    }

    ctx->pc = 0x197c10u;

    // 0x197c10: 0x10a00041  beqz        $a1, . + 4 + (0x41 << 2)
    ctx->pc = 0x197C10u;
    {
        const bool branch_taken_0x197c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C10u;
            // 0x197c14: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c10) {
            ctx->pc = 0x197D18u;
            goto label_197d18;
        }
    }
    ctx->pc = 0x197C18u;
    // 0x197c18: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x197c18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197c1c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x197c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197c20: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197C20u;
    {
        const bool branch_taken_0x197c20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x197C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C20u;
            // 0x197c24: 0x27a80000  addiu       $t0, $sp, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c20) {
            ctx->pc = 0x197C30u;
            goto label_197c30;
        }
    }
    ctx->pc = 0x197C28u;
    // 0x197c28: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x197C28u;
    {
        const bool branch_taken_0x197c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C28u;
            // 0x197c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c28) {
            ctx->pc = 0x197D1Cu;
            goto label_197d1c;
        }
    }
    ctx->pc = 0x197C30u;
label_197c30:
    // 0x197c30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197C30u;
    {
        const bool branch_taken_0x197c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C30u;
            // 0x197c34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c30) {
            ctx->pc = 0x197C48u;
            goto label_197c48;
        }
    }
    ctx->pc = 0x197C38u;
label_197c38:
    // 0x197c38: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x197c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x197c3c: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x197c40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x197c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x197c44: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x197c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
label_197c48:
    // 0x197c48: 0x2921000e  slti        $at, $t1, 0xE
    ctx->pc = 0x197c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x197c4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x197C4Cu;
    {
        const bool branch_taken_0x197c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C4Cu;
            // 0x197c50: 0x126182a  slt         $v1, $t1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c4c) {
            ctx->pc = 0x197C5Cu;
            goto label_197c5c;
        }
    }
    ctx->pc = 0x197C54u;
    // 0x197c54: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x197C54u;
    {
        const bool branch_taken_0x197c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C54u;
            // 0x197c58: 0xa93821  addu        $a3, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c54) {
            ctx->pc = 0x197C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197c38;
        }
    }
    ctx->pc = 0x197C5Cu;
label_197c5c:
    // 0x197c5c: 0x0  nop
    ctx->pc = 0x197c5cu;
    // NOP
    // 0x197c60: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x197c60u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197c64: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x197c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x197c68: 0x27a80002  addiu       $t0, $sp, 0x2
    ctx->pc = 0x197c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x197c6c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x197c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x197c70: 0x27a5000a  addiu       $a1, $sp, 0xA
    ctx->pc = 0x197c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10));
    // 0x197c74: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x197c74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x197c78: 0xa4860002  sh          $a2, 0x2($a0)
    ctx->pc = 0x197c78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x197c7c: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x197c7cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x197c80: 0x637bc  dsll32      $a2, $a2, 30
    ctx->pc = 0x197c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 30));
    // 0x197c84: 0x637fe  dsrl32      $a2, $a2, 31
    ctx->pc = 0x197c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 31));
    // 0x197c88: 0xa0860025  sb          $a2, 0x25($a0)
    ctx->pc = 0x197c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 6));
    // 0x197c8c: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x197c8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x197c90: 0x6367c  dsll32      $a2, $a2, 25
    ctx->pc = 0x197c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 25));
    // 0x197c94: 0x636fe  dsrl32      $a2, $a2, 27
    ctx->pc = 0x197c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 27));
    // 0x197c98: 0xa086004a  sb          $a2, 0x4A($a0)
    ctx->pc = 0x197c98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 74), (uint8_t)GPR_U32(ctx, 6));
    // 0x197c9c: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x197c9cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x197ca0: 0x30c6007f  andi        $a2, $a2, 0x7F
    ctx->pc = 0x197ca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x197ca4: 0xa486003e  sh          $a2, 0x3E($a0)
    ctx->pc = 0x197ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 6));
    // 0x197ca8: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x197ca8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x197cac: 0x634bc  dsll32      $a2, $a2, 18
    ctx->pc = 0x197cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 18));
    // 0x197cb0: 0x6367e  dsrl32      $a2, $a2, 25
    ctx->pc = 0x197cb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 25));
    // 0x197cb4: 0xa486003c  sh          $a2, 0x3C($a0)
    ctx->pc = 0x197cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 6));
    // 0x197cb8: 0x97a60004  lhu         $a2, 0x4($sp)
    ctx->pc = 0x197cb8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x197cbc: 0x30c67fff  andi        $a2, $a2, 0x7FFF
    ctx->pc = 0x197cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x197cc0: 0xa4860028  sh          $a2, 0x28($a0)
    ctx->pc = 0x197cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x197cc4: 0x97a60006  lhu         $a2, 0x6($sp)
    ctx->pc = 0x197cc4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x197cc8: 0x30c67fff  andi        $a2, $a2, 0x7FFF
    ctx->pc = 0x197cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x197ccc: 0xa486002a  sh          $a2, 0x2A($a0)
    ctx->pc = 0x197cccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x197cd0: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x197cd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197cd4: 0x30c6007f  andi        $a2, $a2, 0x7F
    ctx->pc = 0x197cd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x197cd8: 0xa4860036  sh          $a2, 0x36($a0)
    ctx->pc = 0x197cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 6));
    // 0x197cdc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x197cdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197ce0: 0x31cbc  dsll32      $v1, $v1, 18
    ctx->pc = 0x197ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 18));
    // 0x197ce4: 0x31e7e  dsrl32      $v1, $v1, 25
    ctx->pc = 0x197ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 25));
    // 0x197ce8: 0xa4830038  sh          $v1, 0x38($a0)
    ctx->pc = 0x197ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x197cec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x197cecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197cf0: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x197cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x197cf4: 0xa483003a  sh          $v1, 0x3A($a0)
    ctx->pc = 0x197cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x197cf8: 0x93a30009  lbu         $v1, 0x9($sp)
    ctx->pc = 0x197cf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x197cfc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x197cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x197d00: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x197d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
    // 0x197d04: 0xa0830026  sb          $v1, 0x26($a0)
    ctx->pc = 0x197d04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x197d08: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x197d08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197d0c: 0x31c7c  dsll32      $v1, $v1, 17
    ctx->pc = 0x197d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 17));
    // 0x197d10: 0x31e3e  dsrl32      $v1, $v1, 24
    ctx->pc = 0x197d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 24));
    // 0x197d14: 0xa4830048  sh          $v1, 0x48($a0)
    ctx->pc = 0x197d14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 3));
label_197d18:
    // 0x197d18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_197d1c:
    // 0x197d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x197D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197D24u;
}
