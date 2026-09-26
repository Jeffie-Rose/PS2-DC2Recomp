#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __pack_d
// Address: 0x287b28 - 0x287c54
void ps2___pack_d_0x287b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_d_0x287b28");
#endif

    ctx->pc = 0x287b28u;

    // 0x287b28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x287b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287b2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x287b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b30: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x287b30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x287b34: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x287b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x287b38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287B38u;
    {
        const bool branch_taken_0x287b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B38u;
            // 0x287b3c: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b38) {
            ctx->pc = 0x287B54u;
            goto label_287b54;
        }
    }
    ctx->pc = 0x287B40u;
    // 0x287b40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x287b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x287b44: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x287b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x287b48: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x287b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x287b4c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x287B4Cu;
    {
        const bool branch_taken_0x287b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B4Cu;
            // 0x287b50: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b4c) {
            ctx->pc = 0x287BF8u;
            goto label_287bf8;
        }
    }
    ctx->pc = 0x287B54u;
label_287b54:
    // 0x287b54: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x287b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x287b58: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x287B58u;
    {
        const bool branch_taken_0x287b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b58) {
            ctx->pc = 0x287B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287B58u;
            // 0x287b5c: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287BB4u;
            goto label_287bb4;
        }
    }
    ctx->pc = 0x287B60u;
    // 0x287b60: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x287b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x287b64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287B64u;
    {
        const bool branch_taken_0x287b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287b64) {
            ctx->pc = 0x287B74u;
            goto label_287b74;
        }
    }
    ctx->pc = 0x287B6Cu;
    // 0x287b6c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x287B6Cu;
    {
        const bool branch_taken_0x287b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B6Cu;
            // 0x287b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b6c) {
            ctx->pc = 0x287BF8u;
            goto label_287bf8;
        }
    }
    ctx->pc = 0x287B74u;
label_287b74:
    // 0x287b74: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x287B74u;
    {
        const bool branch_taken_0x287b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b74) {
            ctx->pc = 0x287BF8u;
            goto label_287bf8;
        }
    }
    ctx->pc = 0x287B7Cu;
    // 0x287b7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x287b80: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x287b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x287b84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287B84u;
    {
        const bool branch_taken_0x287b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B84u;
            // 0x287b88: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b84) {
            ctx->pc = 0x287BA4u;
            goto label_287ba4;
        }
    }
    ctx->pc = 0x287B8Cu;
    // 0x287b8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x287b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287b90: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x287b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x287b94: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x287B94u;
    {
        const bool branch_taken_0x287b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B94u;
            // 0x287b98: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b94) {
            ctx->pc = 0x287BF4u;
            goto label_287bf4;
        }
    }
    ctx->pc = 0x287B9Cu;
    // 0x287b9c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x287B9Cu;
    {
        const bool branch_taken_0x287b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B9Cu;
            // 0x287ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b9c) {
            ctx->pc = 0x287BF4u;
            goto label_287bf4;
        }
    }
    ctx->pc = 0x287BA4u;
label_287ba4:
    // 0x287ba4: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x287ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x287ba8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287BA8u;
    {
        const bool branch_taken_0x287ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287BA8u;
            // 0x287bac: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ba8) {
            ctx->pc = 0x287BBCu;
            goto label_287bbc;
        }
    }
    ctx->pc = 0x287BB0u;
    // 0x287bb0: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x287bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_287bb4:
    // 0x287bb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x287BB4u;
    {
        const bool branch_taken_0x287bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287BB4u;
            // 0x287bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bb4) {
            ctx->pc = 0x287BF8u;
            goto label_287bf8;
        }
    }
    ctx->pc = 0x287BBCu;
label_287bbc:
    // 0x287bbc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x287bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x287bc0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x287bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x287bc4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287BC4u;
    {
        const bool branch_taken_0x287bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x287bc4) {
            ctx->pc = 0x287BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287BC4u;
            // 0x287bc8: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287BD8u;
            goto label_287bd8;
        }
    }
    ctx->pc = 0x287BCCu;
    // 0x287bcc: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x287bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x287bd0: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x287bd0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x287bd4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x287bd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_287bd8:
    // 0x287bd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287bdc: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x287bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x287be0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x287be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x287be4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x287BE4u;
    {
        const bool branch_taken_0x287be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287be4) {
            ctx->pc = 0x287BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287BE4u;
            // 0x287be8: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287BF8u;
            goto label_287bf8;
        }
    }
    ctx->pc = 0x287BECu;
    // 0x287bec: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x287becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x287bf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x287bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_287bf4:
    // 0x287bf4: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x287bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_287bf8:
    // 0x287bf8: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x287bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x287bfc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x287bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x287c00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287c04: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x287c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x287c08: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x287c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x287c0c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x287c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x287c10: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x287c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x287c14: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x287c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x287c18: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x287c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x287c1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287c20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x287c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x287c24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287c28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x287c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x287c2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287c30: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x287c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x287c34: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x287c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x287c38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x287c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x287c3c: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x287c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x287c40: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x287c40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x287c44: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x287c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x287c48: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x287c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x287c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x287C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287C4Cu;
            // 0x287c50: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287C54u;
}
