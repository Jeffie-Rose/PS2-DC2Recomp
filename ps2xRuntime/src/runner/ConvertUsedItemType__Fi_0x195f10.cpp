#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertUsedItemType__Fi
// Address: 0x195f10 - 0x195fdc
void ConvertUsedItemType__Fi_0x195f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertUsedItemType__Fi_0x195f10");
#endif

    ctx->pc = 0x195f10u;

    // 0x195f10: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195F10u;
    {
        const bool branch_taken_0x195f10 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x195F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F10u;
            // 0x195f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f10) {
            ctx->pc = 0x195F2Cu;
            goto label_195f2c;
        }
    }
    ctx->pc = 0x195F18u;
    // 0x195f18: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x195f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x195f1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x195F1Cu;
    {
        const bool branch_taken_0x195f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F1Cu;
            // 0x195f20: 0x28830005  slti        $v1, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f1c) {
            ctx->pc = 0x195F30u;
            goto label_195f30;
        }
    }
    ctx->pc = 0x195F24u;
    // 0x195f24: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x195F24u;
    {
        const bool branch_taken_0x195f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F24u;
            // 0x195f28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f24) {
            ctx->pc = 0x195FA4u;
            goto label_195fa4;
        }
    }
    ctx->pc = 0x195F2Cu;
label_195f2c:
    // 0x195f2c: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x195f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_195f30:
    // 0x195f30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x195F30u;
    {
        const bool branch_taken_0x195f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F30u;
            // 0x195f34: 0x2881000c  slti        $at, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f30) {
            ctx->pc = 0x195F50u;
            goto label_195f50;
        }
    }
    ctx->pc = 0x195F38u;
    // 0x195f38: 0x2881000b  slti        $at, $a0, 0xB
    ctx->pc = 0x195f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x195f3c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195F3Cu;
    {
        const bool branch_taken_0x195f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f3c) {
            ctx->pc = 0x195F4Cu;
            goto label_195f4c;
        }
    }
    ctx->pc = 0x195F44u;
    // 0x195f44: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x195F44u;
    {
        const bool branch_taken_0x195f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F44u;
            // 0x195f48: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f44) {
            ctx->pc = 0x195FA4u;
            goto label_195fa4;
        }
    }
    ctx->pc = 0x195F4Cu;
label_195f4c:
    // 0x195f4c: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x195f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_195f50:
    // 0x195f50: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x195F50u;
    {
        const bool branch_taken_0x195f50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x195F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F50u;
            // 0x195f54: 0x28830010  slti        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f50) {
            ctx->pc = 0x195F6Cu;
            goto label_195f6c;
        }
    }
    ctx->pc = 0x195F58u;
    // 0x195f58: 0x28810010  slti        $at, $a0, 0x10
    ctx->pc = 0x195f58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x195f5c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195F5Cu;
    {
        const bool branch_taken_0x195f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f5c) {
            ctx->pc = 0x195F6Cu;
            goto label_195f6c;
        }
    }
    ctx->pc = 0x195F64u;
    // 0x195f64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x195F64u;
    {
        const bool branch_taken_0x195f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F64u;
            // 0x195f68: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f64) {
            ctx->pc = 0x195FA4u;
            goto label_195fa4;
        }
    }
    ctx->pc = 0x195F6Cu;
label_195f6c:
    // 0x195f6c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195F6Cu;
    {
        const bool branch_taken_0x195f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F6Cu;
            // 0x195f70: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f6c) {
            ctx->pc = 0x195F80u;
            goto label_195f80;
        }
    }
    ctx->pc = 0x195F74u;
    // 0x195f74: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x195f74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x195f78: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195F78u;
    {
        const bool branch_taken_0x195f78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195f78) {
            ctx->pc = 0x195F88u;
            goto label_195f88;
        }
    }
    ctx->pc = 0x195F80u;
label_195f80:
    // 0x195f80: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195F80u;
    {
        const bool branch_taken_0x195f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x195F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F80u;
            // 0x195f84: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f80) {
            ctx->pc = 0x195F90u;
            goto label_195f90;
        }
    }
    ctx->pc = 0x195F88u;
label_195f88:
    // 0x195f88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x195F88u;
    {
        const bool branch_taken_0x195f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F88u;
            // 0x195f8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f88) {
            ctx->pc = 0x195FA4u;
            goto label_195fa4;
        }
    }
    ctx->pc = 0x195F90u;
label_195f90:
    // 0x195f90: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195F90u;
    {
        const bool branch_taken_0x195f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F90u;
            // 0x195f94: 0x28830014  slti        $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f90) {
            ctx->pc = 0x195FA0u;
            goto label_195fa0;
        }
    }
    ctx->pc = 0x195F98u;
    // 0x195f98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195F98u;
    {
        const bool branch_taken_0x195f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F98u;
            // 0x195f9c: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f98) {
            ctx->pc = 0x195FA8u;
            goto label_195fa8;
        }
    }
    ctx->pc = 0x195FA0u;
label_195fa0:
    // 0x195fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195fa4:
    // 0x195fa4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x195fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_195fa8:
    // 0x195fa8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195FA8u;
    {
        const bool branch_taken_0x195fa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x195FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195FA8u;
            // 0x195fac: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fa8) {
            ctx->pc = 0x195FB8u;
            goto label_195fb8;
        }
    }
    ctx->pc = 0x195FB0u;
    // 0x195fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195FB0u;
    {
        const bool branch_taken_0x195fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195FB0u;
            // 0x195fb4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fb0) {
            ctx->pc = 0x195FD4u;
            goto label_195fd4;
        }
    }
    ctx->pc = 0x195FB8u;
label_195fb8:
    // 0x195fb8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195FB8u;
    {
        const bool branch_taken_0x195fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x195FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195FB8u;
            // 0x195fbc: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fb8) {
            ctx->pc = 0x195FC8u;
            goto label_195fc8;
        }
    }
    ctx->pc = 0x195FC0u;
    // 0x195fc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x195FC0u;
    {
        const bool branch_taken_0x195fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195FC0u;
            // 0x195fc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fc0) {
            ctx->pc = 0x195FD4u;
            goto label_195fd4;
        }
    }
    ctx->pc = 0x195FC8u;
label_195fc8:
    // 0x195fc8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x195FC8u;
    {
        const bool branch_taken_0x195fc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195fc8) {
            ctx->pc = 0x195FD4u;
            goto label_195fd4;
        }
    }
    ctx->pc = 0x195FD0u;
    // 0x195fd0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x195fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_195fd4:
    // 0x195fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x195FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195FDCu;
}
