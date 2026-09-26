#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaDefaultWeapon__FiPi
// Address: 0x19ece0 - 0x19edc0
void GetCharaDefaultWeapon__FiPi_0x19ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaDefaultWeapon__FiPi_0x19ece0");
#endif

    ctx->pc = 0x19ece0u;

    // 0x19ece0: 0x8f8c8ad0  lw          $t4, -0x7530($gp)
    ctx->pc = 0x19ece0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x19ece4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19ece8: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x19ece8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ecec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x19ececu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x19ecf0: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x19ecf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19ecf4: 0x64840  sll         $t1, $a2, 1
    ctx->pc = 0x19ecf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x19ecf8: 0x24e40002  addiu       $a0, $a3, 0x2
    ctx->pc = 0x19ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x19ecfc: 0x44040  sll         $t0, $a0, 1
    ctx->pc = 0x19ecfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19ed00: 0x24636330  addiu       $v1, $v1, 0x6330
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25392));
    // 0x19ed04: 0x75040  sll         $t2, $a3, 1
    ctx->pc = 0x19ed04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19ed08: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x19ed08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x19ed0c: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x19ed0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x19ed10: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x19ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x19ed14: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x19ed14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x19ed18: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x19ed18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x19ed1c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x19ed1cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x19ed20: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x19ed20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19ed24: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x19ed24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x19ed28: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x19ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ed2c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x19ed2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x19ed30: 0x854a0000  lh          $t2, 0x0($t2)
    ctx->pc = 0x19ed30u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x19ed34: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x19ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x19ed38: 0x8f8b8ad0  lw          $t3, -0x7530($gp)
    ctx->pc = 0x19ed38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x19ed3c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x19ed3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x19ed40: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x19ed40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x19ed44: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x19ed44u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x19ed48: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x19ed48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x19ed4c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x19ed4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x19ed50: 0x85290000  lh          $t1, 0x0($t1)
    ctx->pc = 0x19ed50u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19ed54: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x19ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x19ed58: 0x8f8a8ad0  lw          $t2, -0x7530($gp)
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x19ed5c: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x19ed5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x19ed60: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x19ed64: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x19ed64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x19ed68: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19ed6c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x19ed6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x19ed70: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x19ed70u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19ed74: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x19ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x19ed78: 0x8f898ad0  lw          $t1, -0x7530($gp)
    ctx->pc = 0x19ed78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x19ed7c: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x19ed7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x19ed80: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x19ed80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x19ed84: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x19ed84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x19ed88: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x19ed88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19ed8c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x19ed8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x19ed90: 0x84e70000  lh          $a3, 0x0($a3)
    ctx->pc = 0x19ed90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19ed94: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x19ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x19ed98: 0x8f888ad0  lw          $t0, -0x7530($gp)
    ctx->pc = 0x19ed98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x19ed9c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x19ed9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x19eda0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x19eda4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x19eda8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19edac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19edacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19edb0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x19edb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19edb4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x19edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x19edb8: 0x3e00008  jr          $ra
    ctx->pc = 0x19EDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDB8u;
            // 0x19edbc: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EDC0u;
}
