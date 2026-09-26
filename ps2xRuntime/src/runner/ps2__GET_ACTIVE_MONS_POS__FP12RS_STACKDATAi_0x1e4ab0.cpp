#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_MONS_POS__FP12RS_STACKDATAi
// Address: 0x1e4ab0 - 0x1e4ba0
void ps2__GET_ACTIVE_MONS_POS__FP12RS_STACKDATAi_0x1e4ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_MONS_POS__FP12RS_STACKDATAi_0x1e4ab0");
#endif

    switch (ctx->pc) {
        case 0x1e4ab0u: goto label_1e4ab0;
        case 0x1e4ab4u: goto label_1e4ab4;
        case 0x1e4ab8u: goto label_1e4ab8;
        case 0x1e4abcu: goto label_1e4abc;
        case 0x1e4ac0u: goto label_1e4ac0;
        case 0x1e4ac4u: goto label_1e4ac4;
        case 0x1e4ac8u: goto label_1e4ac8;
        case 0x1e4accu: goto label_1e4acc;
        case 0x1e4ad0u: goto label_1e4ad0;
        case 0x1e4ad4u: goto label_1e4ad4;
        case 0x1e4ad8u: goto label_1e4ad8;
        case 0x1e4adcu: goto label_1e4adc;
        case 0x1e4ae0u: goto label_1e4ae0;
        case 0x1e4ae4u: goto label_1e4ae4;
        case 0x1e4ae8u: goto label_1e4ae8;
        case 0x1e4aecu: goto label_1e4aec;
        case 0x1e4af0u: goto label_1e4af0;
        case 0x1e4af4u: goto label_1e4af4;
        case 0x1e4af8u: goto label_1e4af8;
        case 0x1e4afcu: goto label_1e4afc;
        case 0x1e4b00u: goto label_1e4b00;
        case 0x1e4b04u: goto label_1e4b04;
        case 0x1e4b08u: goto label_1e4b08;
        case 0x1e4b0cu: goto label_1e4b0c;
        case 0x1e4b10u: goto label_1e4b10;
        case 0x1e4b14u: goto label_1e4b14;
        case 0x1e4b18u: goto label_1e4b18;
        case 0x1e4b1cu: goto label_1e4b1c;
        case 0x1e4b20u: goto label_1e4b20;
        case 0x1e4b24u: goto label_1e4b24;
        case 0x1e4b28u: goto label_1e4b28;
        case 0x1e4b2cu: goto label_1e4b2c;
        case 0x1e4b30u: goto label_1e4b30;
        case 0x1e4b34u: goto label_1e4b34;
        case 0x1e4b38u: goto label_1e4b38;
        case 0x1e4b3cu: goto label_1e4b3c;
        case 0x1e4b40u: goto label_1e4b40;
        case 0x1e4b44u: goto label_1e4b44;
        case 0x1e4b48u: goto label_1e4b48;
        case 0x1e4b4cu: goto label_1e4b4c;
        case 0x1e4b50u: goto label_1e4b50;
        case 0x1e4b54u: goto label_1e4b54;
        case 0x1e4b58u: goto label_1e4b58;
        case 0x1e4b5cu: goto label_1e4b5c;
        case 0x1e4b60u: goto label_1e4b60;
        case 0x1e4b64u: goto label_1e4b64;
        case 0x1e4b68u: goto label_1e4b68;
        case 0x1e4b6cu: goto label_1e4b6c;
        case 0x1e4b70u: goto label_1e4b70;
        case 0x1e4b74u: goto label_1e4b74;
        case 0x1e4b78u: goto label_1e4b78;
        case 0x1e4b7cu: goto label_1e4b7c;
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b84u: goto label_1e4b84;
        case 0x1e4b88u: goto label_1e4b88;
        case 0x1e4b8cu: goto label_1e4b8c;
        case 0x1e4b90u: goto label_1e4b90;
        case 0x1e4b94u: goto label_1e4b94;
        case 0x1e4b98u: goto label_1e4b98;
        case 0x1e4b9cu: goto label_1e4b9c;
        default: break;
    }

    ctx->pc = 0x1e4ab0u;

label_1e4ab0:
    // 0x1e4ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e4ab4:
    // 0x1e4ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e4ab8:
    // 0x1e4ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4abc:
    // 0x1e4abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4ac0:
    // 0x1e4ac0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ac4:
    // 0x1e4ac4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1e4ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e4ac8:
    // 0x1e4ac8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e4acc:
    if (ctx->pc == 0x1E4ACCu) {
        ctx->pc = 0x1E4ACCu;
            // 0x1e4acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4AD0u;
        goto label_1e4ad0;
    }
    ctx->pc = 0x1E4AC8u;
    {
        const bool branch_taken_0x1e4ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AC8u;
            // 0x1e4acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ac8) {
            ctx->pc = 0x1E4ADCu;
            goto label_1e4adc;
        }
    }
    ctx->pc = 0x1E4AD0u;
label_1e4ad0:
    // 0x1e4ad0: 0x2a010006  slti        $at, $s0, 0x6
    ctx->pc = 0x1e4ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e4ad4:
    // 0x1e4ad4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e4ad8:
    if (ctx->pc == 0x1E4AD8u) {
        ctx->pc = 0x1E4AD8u;
            // 0x1e4ad8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4ADCu;
        goto label_1e4adc;
    }
    ctx->pc = 0x1E4AD4u;
    {
        const bool branch_taken_0x1e4ad4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AD4u;
            // 0x1e4ad8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ad4) {
            ctx->pc = 0x1E4AE4u;
            goto label_1e4ae4;
        }
    }
    ctx->pc = 0x1E4ADCu;
label_1e4adc:
    // 0x1e4adc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1e4ae0:
    if (ctx->pc == 0x1E4AE0u) {
        ctx->pc = 0x1E4AE0u;
            // 0x1e4ae0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E4AE4u;
        goto label_1e4ae4;
    }
    ctx->pc = 0x1E4ADCu;
    {
        const bool branch_taken_0x1e4adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4ADCu;
            // 0x1e4ae0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4adc) {
            ctx->pc = 0x1E4B90u;
            goto label_1e4b90;
        }
    }
    ctx->pc = 0x1E4AE4u;
label_1e4ae4:
    // 0x1e4ae4: 0xc07819c  jal         func_1E0670
label_1e4ae8:
    if (ctx->pc == 0x1E4AE8u) {
        ctx->pc = 0x1E4AECu;
        goto label_1e4aec;
    }
    ctx->pc = 0x1E4AE4u;
    SET_GPR_U32(ctx, 31, 0x1E4AECu);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AECu; }
        if (ctx->pc != 0x1E4AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AECu; }
        if (ctx->pc != 0x1E4AECu) { return; }
    }
    ctx->pc = 0x1E4AECu;
label_1e4aec:
    // 0x1e4aec: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e4af0:
    // 0x1e4af0: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1e4af4:
    // 0x1e4af4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e4af8:
    // 0x1e4af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4afc:
    // 0x1e4afc: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1e4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1e4b00:
    // 0x1e4b00: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1e4b04:
    if (ctx->pc == 0x1E4B04u) {
        ctx->pc = 0x1E4B04u;
            // 0x1e4b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B08u;
        goto label_1e4b08;
    }
    ctx->pc = 0x1E4B00u;
    {
        const bool branch_taken_0x1e4b00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B00u;
            // 0x1e4b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b00) {
            ctx->pc = 0x1E4B10u;
            goto label_1e4b10;
        }
    }
    ctx->pc = 0x1E4B08u;
label_1e4b08:
    // 0x1e4b08: 0x10000020  b           . + 4 + (0x20 << 2)
label_1e4b0c:
    if (ctx->pc == 0x1E4B0Cu) {
        ctx->pc = 0x1E4B10u;
        goto label_1e4b10;
    }
    ctx->pc = 0x1E4B08u;
    {
        const bool branch_taken_0x1e4b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b08) {
            ctx->pc = 0x1E4B8Cu;
            goto label_1e4b8c;
        }
    }
    ctx->pc = 0x1E4B10u;
label_1e4b10:
    // 0x1e4b10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4b14:
    // 0x1e4b14: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4b18:
    // 0x1e4b18: 0x320f809  jalr        $t9
label_1e4b1c:
    if (ctx->pc == 0x1E4B1Cu) {
        ctx->pc = 0x1E4B1Cu;
            // 0x1e4b1c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4B20u;
        goto label_1e4b20;
    }
    ctx->pc = 0x1E4B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4B20u);
        ctx->pc = 0x1E4B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B18u;
            // 0x1e4b1c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4B20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B20u; }
            if (ctx->pc != 0x1E4B20u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4B20u;
label_1e4b20:
    // 0x1e4b20: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1e4b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4b24:
    // 0x1e4b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b28:
    // 0x1e4b28: 0xc0781c4  jal         func_1E0710
label_1e4b2c:
    if (ctx->pc == 0x1E4B2Cu) {
        ctx->pc = 0x1E4B2Cu;
            // 0x1e4b2c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4B30u;
        goto label_1e4b30;
    }
    ctx->pc = 0x1E4B28u;
    SET_GPR_U32(ctx, 31, 0x1E4B30u);
    ctx->pc = 0x1E4B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B28u;
            // 0x1e4b2c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B30u; }
        if (ctx->pc != 0x1E4B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B30u; }
        if (ctx->pc != 0x1E4B30u) { return; }
    }
    ctx->pc = 0x1E4B30u;
label_1e4b30:
    // 0x1e4b30: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1e4b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4b34:
    // 0x1e4b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b38:
    // 0x1e4b38: 0xc0781c4  jal         func_1E0710
label_1e4b3c:
    if (ctx->pc == 0x1E4B3Cu) {
        ctx->pc = 0x1E4B3Cu;
            // 0x1e4b3c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4B40u;
        goto label_1e4b40;
    }
    ctx->pc = 0x1E4B38u;
    SET_GPR_U32(ctx, 31, 0x1E4B40u);
    ctx->pc = 0x1E4B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B38u;
            // 0x1e4b3c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B40u; }
        if (ctx->pc != 0x1E4B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B40u; }
        if (ctx->pc != 0x1E4B40u) { return; }
    }
    ctx->pc = 0x1E4B40u;
label_1e4b40:
    // 0x1e4b40: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1e4b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4b44:
    // 0x1e4b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b48:
    // 0x1e4b48: 0xc0781c4  jal         func_1E0710
label_1e4b4c:
    if (ctx->pc == 0x1E4B4Cu) {
        ctx->pc = 0x1E4B4Cu;
            // 0x1e4b4c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4B50u;
        goto label_1e4b50;
    }
    ctx->pc = 0x1E4B48u;
    SET_GPR_U32(ctx, 31, 0x1E4B50u);
    ctx->pc = 0x1E4B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B48u;
            // 0x1e4b4c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B50u; }
        if (ctx->pc != 0x1E4B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B50u; }
        if (ctx->pc != 0x1E4B50u) { return; }
    }
    ctx->pc = 0x1E4B50u;
label_1e4b50:
    // 0x1e4b50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e4b54:
    // 0x1e4b54: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1e4b58:
    if (ctx->pc == 0x1E4B58u) {
        ctx->pc = 0x1E4B58u;
            // 0x1e4b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E4B5Cu;
        goto label_1e4b5c;
    }
    ctx->pc = 0x1E4B54u;
    {
        const bool branch_taken_0x1e4b54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B54u;
            // 0x1e4b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b54) {
            ctx->pc = 0x1E4B8Cu;
            goto label_1e4b8c;
        }
    }
    ctx->pc = 0x1E4B5Cu;
label_1e4b5c:
    // 0x1e4b5c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4b60:
    // 0x1e4b60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4b64:
    // 0x1e4b64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4b68:
    // 0x1e4b68: 0x320f809  jalr        $t9
label_1e4b6c:
    if (ctx->pc == 0x1E4B6Cu) {
        ctx->pc = 0x1E4B6Cu;
            // 0x1e4b6c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E4B70u;
        goto label_1e4b70;
    }
    ctx->pc = 0x1E4B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4B70u);
        ctx->pc = 0x1E4B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B68u;
            // 0x1e4b6c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B70u; }
            if (ctx->pc != 0x1E4B70u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4B70u;
label_1e4b70:
    // 0x1e4b70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e4b74:
    // 0x1e4b74: 0xc04c018  jal         func_130060
label_1e4b78:
    if (ctx->pc == 0x1E4B78u) {
        ctx->pc = 0x1E4B78u;
            // 0x1e4b78: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E4B7Cu;
        goto label_1e4b7c;
    }
    ctx->pc = 0x1E4B74u;
    SET_GPR_U32(ctx, 31, 0x1E4B7Cu);
    ctx->pc = 0x1E4B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B74u;
            // 0x1e4b78: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B7Cu; }
        if (ctx->pc != 0x1E4B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B7Cu; }
        if (ctx->pc != 0x1E4B7Cu) { return; }
    }
    ctx->pc = 0x1E4B7Cu;
label_1e4b7c:
    // 0x1e4b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b80:
    // 0x1e4b80: 0xc0781c4  jal         func_1E0710
label_1e4b84:
    if (ctx->pc == 0x1E4B84u) {
        ctx->pc = 0x1E4B84u;
            // 0x1e4b84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E4B88u;
        goto label_1e4b88;
    }
    ctx->pc = 0x1E4B80u;
    SET_GPR_U32(ctx, 31, 0x1E4B88u);
    ctx->pc = 0x1E4B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B80u;
            // 0x1e4b84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B88u; }
        if (ctx->pc != 0x1E4B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B88u; }
        if (ctx->pc != 0x1E4B88u) { return; }
    }
    ctx->pc = 0x1E4B88u;
label_1e4b88:
    // 0x1e4b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4b8c:
    // 0x1e4b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4b90:
    // 0x1e4b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4b94:
    // 0x1e4b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4b98:
    // 0x1e4b98: 0x3e00008  jr          $ra
label_1e4b9c:
    if (ctx->pc == 0x1E4B9Cu) {
        ctx->pc = 0x1E4B9Cu;
            // 0x1e4b9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E4BA0u;
        goto label_fallthrough_0x1e4b98;
    }
    ctx->pc = 0x1E4B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B98u;
            // 0x1e4b9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4b98:
    ctx->pc = 0x1E4BA0u;
}
