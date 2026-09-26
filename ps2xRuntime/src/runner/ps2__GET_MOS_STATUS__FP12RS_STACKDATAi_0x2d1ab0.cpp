#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MOS_STATUS__FP12RS_STACKDATAi
// Address: 0x2d1ab0 - 0x2d1b4c
void ps2__GET_MOS_STATUS__FP12RS_STACKDATAi_0x2d1ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MOS_STATUS__FP12RS_STACKDATAi_0x2d1ab0");
#endif

    switch (ctx->pc) {
        case 0x2d1ab0u: goto label_2d1ab0;
        case 0x2d1ab4u: goto label_2d1ab4;
        case 0x2d1ab8u: goto label_2d1ab8;
        case 0x2d1abcu: goto label_2d1abc;
        case 0x2d1ac0u: goto label_2d1ac0;
        case 0x2d1ac4u: goto label_2d1ac4;
        case 0x2d1ac8u: goto label_2d1ac8;
        case 0x2d1accu: goto label_2d1acc;
        case 0x2d1ad0u: goto label_2d1ad0;
        case 0x2d1ad4u: goto label_2d1ad4;
        case 0x2d1ad8u: goto label_2d1ad8;
        case 0x2d1adcu: goto label_2d1adc;
        case 0x2d1ae0u: goto label_2d1ae0;
        case 0x2d1ae4u: goto label_2d1ae4;
        case 0x2d1ae8u: goto label_2d1ae8;
        case 0x2d1aecu: goto label_2d1aec;
        case 0x2d1af0u: goto label_2d1af0;
        case 0x2d1af4u: goto label_2d1af4;
        case 0x2d1af8u: goto label_2d1af8;
        case 0x2d1afcu: goto label_2d1afc;
        case 0x2d1b00u: goto label_2d1b00;
        case 0x2d1b04u: goto label_2d1b04;
        case 0x2d1b08u: goto label_2d1b08;
        case 0x2d1b0cu: goto label_2d1b0c;
        case 0x2d1b10u: goto label_2d1b10;
        case 0x2d1b14u: goto label_2d1b14;
        case 0x2d1b18u: goto label_2d1b18;
        case 0x2d1b1cu: goto label_2d1b1c;
        case 0x2d1b20u: goto label_2d1b20;
        case 0x2d1b24u: goto label_2d1b24;
        case 0x2d1b28u: goto label_2d1b28;
        case 0x2d1b2cu: goto label_2d1b2c;
        case 0x2d1b30u: goto label_2d1b30;
        case 0x2d1b34u: goto label_2d1b34;
        case 0x2d1b38u: goto label_2d1b38;
        case 0x2d1b3cu: goto label_2d1b3c;
        case 0x2d1b40u: goto label_2d1b40;
        case 0x2d1b44u: goto label_2d1b44;
        case 0x2d1b48u: goto label_2d1b48;
        default: break;
    }

    ctx->pc = 0x2d1ab0u;

label_2d1ab0:
    // 0x2d1ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d1ab4:
    // 0x2d1ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1ab8:
    // 0x2d1ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d1abc:
    // 0x2d1abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d1ac0:
    // 0x2d1ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d1ac4:
    // 0x2d1ac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d1ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ac8:
    // 0x2d1ac8: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_2d1acc:
    if (ctx->pc == 0x2D1ACCu) {
        ctx->pc = 0x2D1ACCu;
            // 0x2d1acc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AD0u;
        goto label_2d1ad0;
    }
    ctx->pc = 0x2D1AC8u;
    {
        const bool branch_taken_0x2d1ac8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AC8u;
            // 0x2d1acc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ac8) {
            ctx->pc = 0x2D1AECu;
            goto label_2d1aec;
        }
    }
    ctx->pc = 0x2D1AD0u;
label_2d1ad0:
    // 0x2d1ad0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2d1ad4:
    // 0x2d1ad4: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1ad8:
    // 0x2d1ad8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1adc:
    // 0x2d1adc: 0x8f390110  lw          $t9, 0x110($t9)
    ctx->pc = 0x2d1adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 272)));
label_2d1ae0:
    // 0x2d1ae0: 0x320f809  jalr        $t9
label_2d1ae4:
    if (ctx->pc == 0x2D1AE4u) {
        ctx->pc = 0x2D1AE4u;
            // 0x2d1ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AE8u;
        goto label_2d1ae8;
    }
    ctx->pc = 0x2D1AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1AE8u);
        ctx->pc = 0x2D1AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AE0u;
            // 0x2d1ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1AE8u; }
            if (ctx->pc != 0x2D1AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D1AE8u;
label_2d1ae8:
    // 0x2d1ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1aec:
    // 0x2d1aec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d1af0:
    // 0x2d1af0: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_2d1af4:
    if (ctx->pc == 0x2D1AF4u) {
        ctx->pc = 0x2D1AF4u;
            // 0x2d1af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AF8u;
        goto label_2d1af8;
    }
    ctx->pc = 0x2D1AF0u;
    {
        const bool branch_taken_0x2d1af0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AF0u;
            // 0x2d1af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1af0) {
            ctx->pc = 0x2D1B2Cu;
            goto label_2d1b2c;
        }
    }
    ctx->pc = 0x2D1AF8u;
label_2d1af8:
    // 0x2d1af8: 0xc0b37a8  jal         func_2CDEA0
label_2d1afc:
    if (ctx->pc == 0x2D1AFCu) {
        ctx->pc = 0x2D1AFCu;
            // 0x2d1afc: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2D1B00u;
        goto label_2d1b00;
    }
    ctx->pc = 0x2D1AF8u;
    SET_GPR_U32(ctx, 31, 0x2D1B00u);
    ctx->pc = 0x2D1AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AF8u;
            // 0x2d1afc: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B00u; }
        if (ctx->pc != 0x2D1B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B00u; }
        if (ctx->pc != 0x2D1B00u) { return; }
    }
    ctx->pc = 0x2D1B00u;
label_2d1b00:
    // 0x2d1b00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2d1b04:
    if (ctx->pc == 0x2D1B04u) {
        ctx->pc = 0x2D1B04u;
            // 0x2d1b04: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2D1B08u;
        goto label_2d1b08;
    }
    ctx->pc = 0x2D1B00u;
    {
        const bool branch_taken_0x2d1b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B00u;
            // 0x2d1b04: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b00) {
            ctx->pc = 0x2D1B10u;
            goto label_2d1b10;
        }
    }
    ctx->pc = 0x2D1B08u;
label_2d1b08:
    // 0x2d1b08: 0x1000000b  b           . + 4 + (0xB << 2)
label_2d1b0c:
    if (ctx->pc == 0x2D1B0Cu) {
        ctx->pc = 0x2D1B0Cu;
            // 0x2d1b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B10u;
        goto label_2d1b10;
    }
    ctx->pc = 0x2D1B08u;
    {
        const bool branch_taken_0x2d1b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B08u;
            // 0x2d1b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b08) {
            ctx->pc = 0x2D1B38u;
            goto label_2d1b38;
        }
    }
    ctx->pc = 0x2D1B10u;
label_2d1b10:
    // 0x2d1b10: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1b14:
    // 0x2d1b14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1b18:
    // 0x2d1b18: 0x8f390110  lw          $t9, 0x110($t9)
    ctx->pc = 0x2d1b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 272)));
label_2d1b1c:
    // 0x2d1b1c: 0x320f809  jalr        $t9
label_2d1b20:
    if (ctx->pc == 0x2D1B20u) {
        ctx->pc = 0x2D1B20u;
            // 0x2d1b20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B24u;
        goto label_2d1b24;
    }
    ctx->pc = 0x2D1B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1B24u);
        ctx->pc = 0x2D1B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B1Cu;
            // 0x2d1b20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1B24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B24u; }
            if (ctx->pc != 0x2D1B24u) { return; }
        }
        }
    }
    ctx->pc = 0x2D1B24u;
label_2d1b24:
    // 0x2d1b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1b28:
    // 0x2d1b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1b2c:
    // 0x2d1b2c: 0xc0b37ac  jal         func_2CDEB0
label_2d1b30:
    if (ctx->pc == 0x2D1B30u) {
        ctx->pc = 0x2D1B34u;
        goto label_2d1b34;
    }
    ctx->pc = 0x2D1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B34u);
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B34u; }
        if (ctx->pc != 0x2D1B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B34u; }
        if (ctx->pc != 0x2D1B34u) { return; }
    }
    ctx->pc = 0x2D1B34u;
label_2d1b34:
    // 0x2d1b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1b38:
    // 0x2d1b38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d1b3c:
    // 0x2d1b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d1b40:
    // 0x2d1b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1b44:
    // 0x2d1b44: 0x3e00008  jr          $ra
label_2d1b48:
    if (ctx->pc == 0x2D1B48u) {
        ctx->pc = 0x2D1B48u;
            // 0x2d1b48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D1B4Cu;
        goto label_fallthrough_0x2d1b44;
    }
    ctx->pc = 0x2D1B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B44u;
            // 0x2d1b48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d1b44:
    ctx->pc = 0x2D1B4Cu;
}
