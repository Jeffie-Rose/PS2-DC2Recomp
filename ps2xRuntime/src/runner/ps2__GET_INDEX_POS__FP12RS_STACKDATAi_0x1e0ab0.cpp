#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_INDEX_POS__FP12RS_STACKDATAi
// Address: 0x1e0ab0 - 0x1e0b78
void ps2__GET_INDEX_POS__FP12RS_STACKDATAi_0x1e0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_INDEX_POS__FP12RS_STACKDATAi_0x1e0ab0");
#endif

    switch (ctx->pc) {
        case 0x1e0ab0u: goto label_1e0ab0;
        case 0x1e0ab4u: goto label_1e0ab4;
        case 0x1e0ab8u: goto label_1e0ab8;
        case 0x1e0abcu: goto label_1e0abc;
        case 0x1e0ac0u: goto label_1e0ac0;
        case 0x1e0ac4u: goto label_1e0ac4;
        case 0x1e0ac8u: goto label_1e0ac8;
        case 0x1e0accu: goto label_1e0acc;
        case 0x1e0ad0u: goto label_1e0ad0;
        case 0x1e0ad4u: goto label_1e0ad4;
        case 0x1e0ad8u: goto label_1e0ad8;
        case 0x1e0adcu: goto label_1e0adc;
        case 0x1e0ae0u: goto label_1e0ae0;
        case 0x1e0ae4u: goto label_1e0ae4;
        case 0x1e0ae8u: goto label_1e0ae8;
        case 0x1e0aecu: goto label_1e0aec;
        case 0x1e0af0u: goto label_1e0af0;
        case 0x1e0af4u: goto label_1e0af4;
        case 0x1e0af8u: goto label_1e0af8;
        case 0x1e0afcu: goto label_1e0afc;
        case 0x1e0b00u: goto label_1e0b00;
        case 0x1e0b04u: goto label_1e0b04;
        case 0x1e0b08u: goto label_1e0b08;
        case 0x1e0b0cu: goto label_1e0b0c;
        case 0x1e0b10u: goto label_1e0b10;
        case 0x1e0b14u: goto label_1e0b14;
        case 0x1e0b18u: goto label_1e0b18;
        case 0x1e0b1cu: goto label_1e0b1c;
        case 0x1e0b20u: goto label_1e0b20;
        case 0x1e0b24u: goto label_1e0b24;
        case 0x1e0b28u: goto label_1e0b28;
        case 0x1e0b2cu: goto label_1e0b2c;
        case 0x1e0b30u: goto label_1e0b30;
        case 0x1e0b34u: goto label_1e0b34;
        case 0x1e0b38u: goto label_1e0b38;
        case 0x1e0b3cu: goto label_1e0b3c;
        case 0x1e0b40u: goto label_1e0b40;
        case 0x1e0b44u: goto label_1e0b44;
        case 0x1e0b48u: goto label_1e0b48;
        case 0x1e0b4cu: goto label_1e0b4c;
        case 0x1e0b50u: goto label_1e0b50;
        case 0x1e0b54u: goto label_1e0b54;
        case 0x1e0b58u: goto label_1e0b58;
        case 0x1e0b5cu: goto label_1e0b5c;
        case 0x1e0b60u: goto label_1e0b60;
        case 0x1e0b64u: goto label_1e0b64;
        case 0x1e0b68u: goto label_1e0b68;
        case 0x1e0b6cu: goto label_1e0b6c;
        case 0x1e0b70u: goto label_1e0b70;
        case 0x1e0b74u: goto label_1e0b74;
        default: break;
    }

    ctx->pc = 0x1e0ab0u;

label_1e0ab0:
    // 0x1e0ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e0ab4:
    // 0x1e0ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e0ab8:
    // 0x1e0ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e0abc:
    // 0x1e0abc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1e0abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e0ac0:
    // 0x1e0ac0: 0xc07819c  jal         func_1E0670
label_1e0ac4:
    if (ctx->pc == 0x1E0AC4u) {
        ctx->pc = 0x1E0AC4u;
            // 0x1e0ac4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E0AC8u;
        goto label_1e0ac8;
    }
    ctx->pc = 0x1E0AC0u;
    SET_GPR_U32(ctx, 31, 0x1E0AC8u);
    ctx->pc = 0x1E0AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AC0u;
            // 0x1e0ac4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AC8u; }
        if (ctx->pc != 0x1E0AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AC8u; }
        if (ctx->pc != 0x1E0AC8u) { return; }
    }
    ctx->pc = 0x1E0AC8u;
label_1e0ac8:
    // 0x1e0ac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0acc:
    // 0x1e0acc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e0accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1e0ad0:
    // 0x1e0ad0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e0ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e0ad4:
    // 0x1e0ad4: 0xc076dc0  jal         func_1DB700
label_1e0ad8:
    if (ctx->pc == 0x1E0AD8u) {
        ctx->pc = 0x1E0AD8u;
            // 0x1e0ad8: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1E0ADCu;
        goto label_1e0adc;
    }
    ctx->pc = 0x1E0AD4u;
    SET_GPR_U32(ctx, 31, 0x1E0ADCu);
    ctx->pc = 0x1E0AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AD4u;
            // 0x1e0ad8: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB700u;
    if (runtime->hasFunction(0x1DB700u)) {
        auto targetFn = runtime->lookupFunction(0x1DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0ADCu; }
        if (ctx->pc != 0x1E0ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterNum__11CMonsterManFf_0x1db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0ADCu; }
        if (ctx->pc != 0x1E0ADCu) { return; }
    }
    ctx->pc = 0x1E0ADCu;
label_1e0adc:
    // 0x1e0adc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e0adcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e0ae0:
    // 0x1e0ae0: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1e0ae4:
    if (ctx->pc == 0x1E0AE4u) {
        ctx->pc = 0x1E0AE4u;
            // 0x1e0ae4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AE8u;
        goto label_1e0ae8;
    }
    ctx->pc = 0x1E0AE0u;
    {
        const bool branch_taken_0x1e0ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AE0u;
            // 0x1e0ae4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ae0) {
            ctx->pc = 0x1E0B5Cu;
            goto label_1e0b5c;
        }
    }
    ctx->pc = 0x1E0AE8u;
label_1e0ae8:
    // 0x1e0ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0aec:
    // 0x1e0aec: 0x8f858db8  lw          $a1, -0x7248($gp)
    ctx->pc = 0x1e0aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e0af0:
    // 0x1e0af0: 0x0  nop
    ctx->pc = 0x1e0af0u;
    // NOP
label_1e0af4:
    // 0x1e0af4: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1e0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1e0af8:
    // 0x1e0af8: 0x8c640484  lw          $a0, 0x484($v1)
    ctx->pc = 0x1e0af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1e0afc:
    // 0x1e0afc: 0x84831156  lh          $v1, 0x1156($a0)
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4438)));
label_1e0b00:
    // 0x1e0b00: 0x14700012  bne         $v1, $s0, . + 4 + (0x12 << 2)
label_1e0b04:
    if (ctx->pc == 0x1E0B04u) {
        ctx->pc = 0x1E0B08u;
        goto label_1e0b08;
    }
    ctx->pc = 0x1E0B00u;
    {
        const bool branch_taken_0x1e0b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e0b00) {
            ctx->pc = 0x1E0B4Cu;
            goto label_1e0b4c;
        }
    }
    ctx->pc = 0x1E0B08u;
label_1e0b08:
    // 0x1e0b08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e0b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0b0c:
    // 0x1e0b0c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e0b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e0b10:
    // 0x1e0b10: 0x320f809  jalr        $t9
label_1e0b14:
    if (ctx->pc == 0x1E0B14u) {
        ctx->pc = 0x1E0B14u;
            // 0x1e0b14: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E0B18u;
        goto label_1e0b18;
    }
    ctx->pc = 0x1E0B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0B18u);
        ctx->pc = 0x1E0B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B10u;
            // 0x1e0b14: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B18u; }
            if (ctx->pc != 0x1E0B18u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0B18u;
label_1e0b18:
    // 0x1e0b18: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1e0b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e0b1c:
    // 0x1e0b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b20:
    // 0x1e0b20: 0xc0781c4  jal         func_1E0710
label_1e0b24:
    if (ctx->pc == 0x1E0B24u) {
        ctx->pc = 0x1E0B24u;
            // 0x1e0b24: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E0B28u;
        goto label_1e0b28;
    }
    ctx->pc = 0x1E0B20u;
    SET_GPR_U32(ctx, 31, 0x1E0B28u);
    ctx->pc = 0x1E0B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B20u;
            // 0x1e0b24: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B28u; }
        if (ctx->pc != 0x1E0B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B28u; }
        if (ctx->pc != 0x1E0B28u) { return; }
    }
    ctx->pc = 0x1E0B28u;
label_1e0b28:
    // 0x1e0b28: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1e0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e0b2c:
    // 0x1e0b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b30:
    // 0x1e0b30: 0xc0781c4  jal         func_1E0710
label_1e0b34:
    if (ctx->pc == 0x1E0B34u) {
        ctx->pc = 0x1E0B34u;
            // 0x1e0b34: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E0B38u;
        goto label_1e0b38;
    }
    ctx->pc = 0x1E0B30u;
    SET_GPR_U32(ctx, 31, 0x1E0B38u);
    ctx->pc = 0x1E0B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B30u;
            // 0x1e0b34: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B38u; }
        if (ctx->pc != 0x1E0B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B38u; }
        if (ctx->pc != 0x1E0B38u) { return; }
    }
    ctx->pc = 0x1E0B38u;
label_1e0b38:
    // 0x1e0b38: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1e0b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e0b3c:
    // 0x1e0b3c: 0xc0781c4  jal         func_1E0710
label_1e0b40:
    if (ctx->pc == 0x1E0B40u) {
        ctx->pc = 0x1E0B40u;
            // 0x1e0b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B44u;
        goto label_1e0b44;
    }
    ctx->pc = 0x1E0B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E0B44u);
    ctx->pc = 0x1E0B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B3Cu;
            // 0x1e0b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B44u; }
        if (ctx->pc != 0x1E0B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B44u; }
        if (ctx->pc != 0x1E0B44u) { return; }
    }
    ctx->pc = 0x1E0B44u;
label_1e0b44:
    // 0x1e0b44: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e0b48:
    if (ctx->pc == 0x1E0B48u) {
        ctx->pc = 0x1E0B48u;
            // 0x1e0b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E0B4Cu;
        goto label_1e0b4c;
    }
    ctx->pc = 0x1E0B44u;
    {
        const bool branch_taken_0x1e0b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B44u;
            // 0x1e0b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b44) {
            ctx->pc = 0x1E0B64u;
            goto label_1e0b64;
        }
    }
    ctx->pc = 0x1E0B4Cu;
label_1e0b4c:
    // 0x1e0b4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e0b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e0b50:
    // 0x1e0b50: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x1e0b50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e0b54:
    // 0x1e0b54: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_1e0b58:
    if (ctx->pc == 0x1E0B58u) {
        ctx->pc = 0x1E0B58u;
            // 0x1e0b58: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x1E0B5Cu;
        goto label_1e0b5c;
    }
    ctx->pc = 0x1E0B54u;
    {
        const bool branch_taken_0x1e0b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B54u;
            // 0x1e0b58: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b54) {
            ctx->pc = 0x1E0AF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e0af4;
        }
    }
    ctx->pc = 0x1E0B5Cu;
label_1e0b5c:
    // 0x1e0b5c: 0x0  nop
    ctx->pc = 0x1e0b5cu;
    // NOP
label_1e0b60:
    // 0x1e0b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b64:
    // 0x1e0b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0b68:
    // 0x1e0b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0b6c:
    // 0x1e0b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0b70:
    // 0x1e0b70: 0x3e00008  jr          $ra
label_1e0b74:
    if (ctx->pc == 0x1E0B74u) {
        ctx->pc = 0x1E0B74u;
            // 0x1e0b74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E0B78u;
        goto label_fallthrough_0x1e0b70;
    }
    ctx->pc = 0x1E0B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B70u;
            // 0x1e0b74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e0b70:
    ctx->pc = 0x1E0B78u;
}
