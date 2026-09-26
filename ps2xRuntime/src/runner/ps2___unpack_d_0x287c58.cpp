#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __unpack_d
// Address: 0x287c58 - 0x287cf4
void ps2___unpack_d_0x287c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_d_0x287c58");
#endif

    ctx->pc = 0x287c58u;

    // 0x287c58: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x287c58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287c5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x287c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287c60: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x287c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x287c64: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x287c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x287c68: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x287c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x287c6c: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x287c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x287c70: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x287c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x287c74: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x287c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x287c78: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287C78u;
    {
        const bool branch_taken_0x287c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x287C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C78u;
            // 0x287c7c: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c78) {
            ctx->pc = 0x287C90u;
            goto label_287c90;
        }
    }
    ctx->pc = 0x287C80u;
    // 0x287c80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x287c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287c84: 0x3e00008  jr          $ra
    ctx->pc = 0x287C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C84u;
            // 0x287c88: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287C8Cu;
    // 0x287c8c: 0x0  nop
    ctx->pc = 0x287c8cu;
    // NOP
label_287c90:
    // 0x287c90: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x287C90u;
    {
        const bool branch_taken_0x287c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x287c90) {
            ctx->pc = 0x287C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287C90u;
            // 0x287c94: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287CD0u;
            goto label_287cd0;
        }
    }
    ctx->pc = 0x287C98u;
    // 0x287c98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x287C98u;
    {
        const bool branch_taken_0x287c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C98u;
            // 0x287c9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c98) {
            ctx->pc = 0x287CA8u;
            goto label_287ca8;
        }
    }
    ctx->pc = 0x287CA0u;
    // 0x287ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x287CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287CA0u;
            // 0x287ca4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287CA8u;
label_287ca8:
    // 0x287ca8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x287ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x287cac: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x287cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x287cb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x287cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x287cb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287CB4u;
    {
        const bool branch_taken_0x287cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287CB4u;
            // 0x287cb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cb4) {
            ctx->pc = 0x287CC4u;
            goto label_287cc4;
        }
    }
    ctx->pc = 0x287CBCu;
    // 0x287cbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287CBCu;
    {
        const bool branch_taken_0x287cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287CBCu;
            // 0x287cc0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cbc) {
            ctx->pc = 0x287CC8u;
            goto label_287cc8;
        }
    }
    ctx->pc = 0x287CC4u;
label_287cc4:
    // 0x287cc4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x287cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_287cc8:
    // 0x287cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x287CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287CC8u;
            // 0x287ccc: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287CD0u;
label_287cd0:
    // 0x287cd0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x287cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x287cd4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x287cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x287cd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x287cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287cdc: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x287cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x287ce0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287ce4: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x287ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x287ce8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x287ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x287cec: 0x3e00008  jr          $ra
    ctx->pc = 0x287CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287CECu;
            // 0x287cf0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287CF4u;
}
