#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __DecodeUnsignedNumber__FPcPUi
// Address: 0x100a30 - 0x100ad0
void ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___DecodeUnsignedNumber__FPcPUi_0x100a30");
#endif

    ctx->pc = 0x100a30u;

    // 0x100a30: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x100a30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100a34: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x100a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x100a38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100A38u;
    {
        const bool branch_taken_0x100a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100a38) {
            ctx->pc = 0x100A50u;
            goto label_100a50;
        }
    }
    ctx->pc = 0x100A40u;
    // 0x100a40: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x100a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x100a44: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x100a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x100a48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x100A48u;
    {
        const bool branch_taken_0x100a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A48u;
            // 0x100a4c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a48) {
            ctx->pc = 0x100AC8u;
            goto label_100ac8;
        }
    }
    ctx->pc = 0x100A50u;
label_100a50:
    // 0x100a50: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x100a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x100a54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100A54u;
    {
        const bool branch_taken_0x100a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A54u;
            // 0x100a58: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a54) {
            ctx->pc = 0x100A74u;
            goto label_100a74;
        }
    }
    ctx->pc = 0x100A5Cu;
    // 0x100a5c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x100a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x100a60: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x100a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x100a64: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x100a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x100a68: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x100a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x100a6c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x100A6Cu;
    {
        const bool branch_taken_0x100a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A6Cu;
            // 0x100a70: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a6c) {
            ctx->pc = 0x100AC8u;
            goto label_100ac8;
        }
    }
    ctx->pc = 0x100A74u;
label_100a74:
    // 0x100a74: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x100a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x100a78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x100A78u;
    {
        const bool branch_taken_0x100a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A78u;
            // 0x100a7c: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a78) {
            ctx->pc = 0x100AA0u;
            goto label_100aa0;
        }
    }
    ctx->pc = 0x100A80u;
    // 0x100a80: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x100a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x100a84: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x100a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x100a88: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x100a88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x100a8c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x100a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x100a90: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x100a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x100a94: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x100a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x100a98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x100A98u;
    {
        const bool branch_taken_0x100a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A98u;
            // 0x100a9c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a98) {
            ctx->pc = 0x100AC8u;
            goto label_100ac8;
        }
    }
    ctx->pc = 0x100AA0u;
label_100aa0:
    // 0x100aa0: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x100aa4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x100aa8: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x100aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x100aac: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x100aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x100ab0: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x100ab4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x100ab4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x100ab8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x100ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x100abc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x100abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x100ac0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x100ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x100ac4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x100ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_100ac8:
    // 0x100ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x100AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100AD0u;
}
