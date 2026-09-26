#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynCOLLISION__FP9SPI_STACKi
// Address: 0x17bcb0 - 0x17bde0
void dynCOLLISION__FP9SPI_STACKi_0x17bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynCOLLISION__FP9SPI_STACKi_0x17bcb0");
#endif

    switch (ctx->pc) {
        case 0x17bcb0u: goto label_17bcb0;
        case 0x17bcb4u: goto label_17bcb4;
        case 0x17bcb8u: goto label_17bcb8;
        case 0x17bcbcu: goto label_17bcbc;
        case 0x17bcc0u: goto label_17bcc0;
        case 0x17bcc4u: goto label_17bcc4;
        case 0x17bcc8u: goto label_17bcc8;
        case 0x17bcccu: goto label_17bccc;
        case 0x17bcd0u: goto label_17bcd0;
        case 0x17bcd4u: goto label_17bcd4;
        case 0x17bcd8u: goto label_17bcd8;
        case 0x17bcdcu: goto label_17bcdc;
        case 0x17bce0u: goto label_17bce0;
        case 0x17bce4u: goto label_17bce4;
        case 0x17bce8u: goto label_17bce8;
        case 0x17bcecu: goto label_17bcec;
        case 0x17bcf0u: goto label_17bcf0;
        case 0x17bcf4u: goto label_17bcf4;
        case 0x17bcf8u: goto label_17bcf8;
        case 0x17bcfcu: goto label_17bcfc;
        case 0x17bd00u: goto label_17bd00;
        case 0x17bd04u: goto label_17bd04;
        case 0x17bd08u: goto label_17bd08;
        case 0x17bd0cu: goto label_17bd0c;
        case 0x17bd10u: goto label_17bd10;
        case 0x17bd14u: goto label_17bd14;
        case 0x17bd18u: goto label_17bd18;
        case 0x17bd1cu: goto label_17bd1c;
        case 0x17bd20u: goto label_17bd20;
        case 0x17bd24u: goto label_17bd24;
        case 0x17bd28u: goto label_17bd28;
        case 0x17bd2cu: goto label_17bd2c;
        case 0x17bd30u: goto label_17bd30;
        case 0x17bd34u: goto label_17bd34;
        case 0x17bd38u: goto label_17bd38;
        case 0x17bd3cu: goto label_17bd3c;
        case 0x17bd40u: goto label_17bd40;
        case 0x17bd44u: goto label_17bd44;
        case 0x17bd48u: goto label_17bd48;
        case 0x17bd4cu: goto label_17bd4c;
        case 0x17bd50u: goto label_17bd50;
        case 0x17bd54u: goto label_17bd54;
        case 0x17bd58u: goto label_17bd58;
        case 0x17bd5cu: goto label_17bd5c;
        case 0x17bd60u: goto label_17bd60;
        case 0x17bd64u: goto label_17bd64;
        case 0x17bd68u: goto label_17bd68;
        case 0x17bd6cu: goto label_17bd6c;
        case 0x17bd70u: goto label_17bd70;
        case 0x17bd74u: goto label_17bd74;
        case 0x17bd78u: goto label_17bd78;
        case 0x17bd7cu: goto label_17bd7c;
        case 0x17bd80u: goto label_17bd80;
        case 0x17bd84u: goto label_17bd84;
        case 0x17bd88u: goto label_17bd88;
        case 0x17bd8cu: goto label_17bd8c;
        case 0x17bd90u: goto label_17bd90;
        case 0x17bd94u: goto label_17bd94;
        case 0x17bd98u: goto label_17bd98;
        case 0x17bd9cu: goto label_17bd9c;
        case 0x17bda0u: goto label_17bda0;
        case 0x17bda4u: goto label_17bda4;
        case 0x17bda8u: goto label_17bda8;
        case 0x17bdacu: goto label_17bdac;
        case 0x17bdb0u: goto label_17bdb0;
        case 0x17bdb4u: goto label_17bdb4;
        case 0x17bdb8u: goto label_17bdb8;
        case 0x17bdbcu: goto label_17bdbc;
        case 0x17bdc0u: goto label_17bdc0;
        case 0x17bdc4u: goto label_17bdc4;
        case 0x17bdc8u: goto label_17bdc8;
        case 0x17bdccu: goto label_17bdcc;
        case 0x17bdd0u: goto label_17bdd0;
        case 0x17bdd4u: goto label_17bdd4;
        case 0x17bdd8u: goto label_17bdd8;
        case 0x17bddcu: goto label_17bddc;
        default: break;
    }

    ctx->pc = 0x17bcb0u;

label_17bcb0:
    // 0x17bcb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17bcb4:
    // 0x17bcb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17bcb8:
    // 0x17bcb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17bcbc:
    // 0x17bcbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17bcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17bcc0:
    // 0x17bcc0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x17bcc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_17bcc4:
    // 0x17bcc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17bcc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17bcc8:
    // 0x17bcc8: 0xc05191c  jal         func_146470
label_17bccc:
    if (ctx->pc == 0x17BCCCu) {
        ctx->pc = 0x17BCCCu;
            // 0x17bccc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x17BCD0u;
        goto label_17bcd0;
    }
    ctx->pc = 0x17BCC8u;
    SET_GPR_U32(ctx, 31, 0x17BCD0u);
    ctx->pc = 0x17BCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCC8u;
            // 0x17bccc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCD0u; }
        if (ctx->pc != 0x17BCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCD0u; }
        if (ctx->pc != 0x17BCD0u) { return; }
    }
    ctx->pc = 0x17BCD0u;
label_17bcd0:
    // 0x17bcd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17bcd4:
    if (ctx->pc == 0x17BCD4u) {
        ctx->pc = 0x17BCD4u;
            // 0x17bcd4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x17BCD8u;
        goto label_17bcd8;
    }
    ctx->pc = 0x17BCD0u;
    {
        const bool branch_taken_0x17bcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCD0u;
            // 0x17bcd4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcd0) {
            ctx->pc = 0x17BCE0u;
            goto label_17bce0;
        }
    }
    ctx->pc = 0x17BCD8u;
label_17bcd8:
    // 0x17bcd8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_17bcdc:
    if (ctx->pc == 0x17BCDCu) {
        ctx->pc = 0x17BCDCu;
            // 0x17bcdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BCE0u;
        goto label_17bce0;
    }
    ctx->pc = 0x17BCD8u;
    {
        const bool branch_taken_0x17bcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCD8u;
            // 0x17bcdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcd8) {
            ctx->pc = 0x17BDC8u;
            goto label_17bdc8;
        }
    }
    ctx->pc = 0x17BCE0u;
label_17bce0:
    // 0x17bce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17bce4:
    // 0x17bce4: 0xc04a38a  jal         func_128E28
label_17bce8:
    if (ctx->pc == 0x17BCE8u) {
        ctx->pc = 0x17BCE8u;
            // 0x17bce8: 0x24a53bc0  addiu       $a1, $a1, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15296));
        ctx->pc = 0x17BCECu;
        goto label_17bcec;
    }
    ctx->pc = 0x17BCE4u;
    SET_GPR_U32(ctx, 31, 0x17BCECu);
    ctx->pc = 0x17BCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCE4u;
            // 0x17bce8: 0x24a53bc0  addiu       $a1, $a1, 0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCECu; }
        if (ctx->pc != 0x17BCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCECu; }
        if (ctx->pc != 0x17BCECu) { return; }
    }
    ctx->pc = 0x17BCECu;
label_17bcec:
    // 0x17bcec: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_17bcf0:
    if (ctx->pc == 0x17BCF0u) {
        ctx->pc = 0x17BCF0u;
            // 0x17bcf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BCF4u;
        goto label_17bcf4;
    }
    ctx->pc = 0x17BCECu;
    {
        const bool branch_taken_0x17bcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCECu;
            // 0x17bcf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcec) {
            ctx->pc = 0x17BDC8u;
            goto label_17bdc8;
        }
    }
    ctx->pc = 0x17BCF4u;
label_17bcf4:
    // 0x17bcf4: 0x8f848a14  lw          $a0, -0x75EC($gp)
    ctx->pc = 0x17bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
label_17bcf8:
    // 0x17bcf8: 0xc04e748  jal         func_139D20
label_17bcfc:
    if (ctx->pc == 0x17BCFCu) {
        ctx->pc = 0x17BCFCu;
            // 0x17bcfc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x17BD00u;
        goto label_17bd00;
    }
    ctx->pc = 0x17BCF8u;
    SET_GPR_U32(ctx, 31, 0x17BD00u);
    ctx->pc = 0x17BCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCF8u;
            // 0x17bcfc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD00u; }
        if (ctx->pc != 0x17BD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD00u; }
        if (ctx->pc != 0x17BD00u) { return; }
    }
    ctx->pc = 0x17BD00u;
label_17bd00:
    // 0x17bd00: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x17bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_17bd04:
    // 0x17bd04: 0xc04e638  jal         func_1398E0
label_17bd08:
    if (ctx->pc == 0x17BD08u) {
        ctx->pc = 0x17BD08u;
            // 0x17bd08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BD0Cu;
        goto label_17bd0c;
    }
    ctx->pc = 0x17BD04u;
    SET_GPR_U32(ctx, 31, 0x17BD0Cu);
    ctx->pc = 0x17BD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD04u;
            // 0x17bd08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD0Cu; }
        if (ctx->pc != 0x17BD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD0Cu; }
        if (ctx->pc != 0x17BD0Cu) { return; }
    }
    ctx->pc = 0x17BD0Cu;
label_17bd0c:
    // 0x17bd0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_17bd10:
    if (ctx->pc == 0x17BD10u) {
        ctx->pc = 0x17BD10u;
            // 0x17bd10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BD14u;
        goto label_17bd14;
    }
    ctx->pc = 0x17BD0Cu;
    {
        const bool branch_taken_0x17bd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD0Cu;
            // 0x17bd10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd0c) {
            ctx->pc = 0x17BD4Cu;
            goto label_17bd4c;
        }
    }
    ctx->pc = 0x17BD14u;
label_17bd14:
    // 0x17bd14: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17bd18:
    // 0x17bd18: 0x24425920  addiu       $v0, $v0, 0x5920
    ctx->pc = 0x17bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22816));
label_17bd1c:
    // 0x17bd1c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x17bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_17bd20:
    // 0x17bd20: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x17bd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_17bd24:
    // 0x17bd24: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_17bd28:
    // 0x17bd28: 0x320f809  jalr        $t9
label_17bd2c:
    if (ctx->pc == 0x17BD2Cu) {
        ctx->pc = 0x17BD2Cu;
            // 0x17bd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BD30u;
        goto label_17bd30;
    }
    ctx->pc = 0x17BD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BD30u);
        ctx->pc = 0x17BD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD28u;
            // 0x17bd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BD30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BD30u; }
            if (ctx->pc != 0x17BD30u) { return; }
        }
        }
    }
    ctx->pc = 0x17BD30u;
label_17bd30:
    // 0x17bd30: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17bd34:
    // 0x17bd34: 0x24425910  addiu       $v0, $v0, 0x5910
    ctx->pc = 0x17bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22800));
label_17bd38:
    // 0x17bd38: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x17bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_17bd3c:
    // 0x17bd3c: 0x8e1900c0  lw          $t9, 0xC0($s0)
    ctx->pc = 0x17bd3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_17bd40:
    // 0x17bd40: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x17bd40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_17bd44:
    // 0x17bd44: 0x320f809  jalr        $t9
label_17bd48:
    if (ctx->pc == 0x17BD48u) {
        ctx->pc = 0x17BD48u;
            // 0x17bd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BD4Cu;
        goto label_17bd4c;
    }
    ctx->pc = 0x17BD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BD4Cu);
        ctx->pc = 0x17BD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD44u;
            // 0x17bd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BD4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BD4Cu; }
            if (ctx->pc != 0x17BD4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17BD4Cu;
label_17bd4c:
    // 0x17bd4c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_17bd50:
    if (ctx->pc == 0x17BD50u) {
        ctx->pc = 0x17BD50u;
            // 0x17bd50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BD54u;
        goto label_17bd54;
    }
    ctx->pc = 0x17BD4Cu;
    {
        const bool branch_taken_0x17bd4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD4Cu;
            // 0x17bd50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd4c) {
            ctx->pc = 0x17BD5Cu;
            goto label_17bd5c;
        }
    }
    ctx->pc = 0x17BD54u;
label_17bd54:
    // 0x17bd54: 0x1000001c  b           . + 4 + (0x1C << 2)
label_17bd58:
    if (ctx->pc == 0x17BD58u) {
        ctx->pc = 0x17BD58u;
            // 0x17bd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BD5Cu;
        goto label_17bd5c;
    }
    ctx->pc = 0x17BD54u;
    {
        const bool branch_taken_0x17bd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD54u;
            // 0x17bd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd54) {
            ctx->pc = 0x17BDC8u;
            goto label_17bdc8;
        }
    }
    ctx->pc = 0x17BD5Cu;
label_17bd5c:
    // 0x17bd5c: 0xc0518f8  jal         func_1463E0
label_17bd60:
    if (ctx->pc == 0x17BD60u) {
        ctx->pc = 0x17BD60u;
            // 0x17bd60: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x17BD64u;
        goto label_17bd64;
    }
    ctx->pc = 0x17BD5Cu;
    SET_GPR_U32(ctx, 31, 0x17BD64u);
    ctx->pc = 0x17BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD5Cu;
            // 0x17bd60: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD64u; }
        if (ctx->pc != 0x17BD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD64u; }
        if (ctx->pc != 0x17BD64u) { return; }
    }
    ctx->pc = 0x17BD64u;
label_17bd64:
    // 0x17bd64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17bd68:
    // 0x17bd68: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x17bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_17bd6c:
    // 0x17bd6c: 0xc051928  jal         func_1464A0
label_17bd70:
    if (ctx->pc == 0x17BD70u) {
        ctx->pc = 0x17BD70u;
            // 0x17bd70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BD74u;
        goto label_17bd74;
    }
    ctx->pc = 0x17BD6Cu;
    SET_GPR_U32(ctx, 31, 0x17BD74u);
    ctx->pc = 0x17BD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD6Cu;
            // 0x17bd70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD74u; }
        if (ctx->pc != 0x17BD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD74u; }
        if (ctx->pc != 0x17BD74u) { return; }
    }
    ctx->pc = 0x17BD74u;
label_17bd74:
    // 0x17bd74: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x17bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_17bd78:
    // 0x17bd78: 0xc051928  jal         func_1464A0
label_17bd7c:
    if (ctx->pc == 0x17BD7Cu) {
        ctx->pc = 0x17BD7Cu;
            // 0x17bd7c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x17BD80u;
        goto label_17bd80;
    }
    ctx->pc = 0x17BD78u;
    SET_GPR_U32(ctx, 31, 0x17BD80u);
    ctx->pc = 0x17BD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD78u;
            // 0x17bd7c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD80u; }
        if (ctx->pc != 0x17BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD80u; }
        if (ctx->pc != 0x17BD80u) { return; }
    }
    ctx->pc = 0x17BD80u;
label_17bd80:
    // 0x17bd80: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x17bd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_17bd84:
    // 0x17bd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17bd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17bd88:
    // 0x17bd88: 0xc0518f8  jal         func_1463E0
label_17bd8c:
    if (ctx->pc == 0x17BD8Cu) {
        ctx->pc = 0x17BD8Cu;
            // 0x17bd8c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x17BD90u;
        goto label_17bd90;
    }
    ctx->pc = 0x17BD88u;
    SET_GPR_U32(ctx, 31, 0x17BD90u);
    ctx->pc = 0x17BD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD88u;
            // 0x17bd8c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD90u; }
        if (ctx->pc != 0x17BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD90u; }
        if (ctx->pc != 0x17BD90u) { return; }
    }
    ctx->pc = 0x17BD90u;
label_17bd90:
    // 0x17bd90: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x17bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_17bd94:
    // 0x17bd94: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x17bd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_17bd98:
    // 0x17bd98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_17bd9c:
    if (ctx->pc == 0x17BD9Cu) {
        ctx->pc = 0x17BD9Cu;
            // 0x17bd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BDA0u;
        goto label_17bda0;
    }
    ctx->pc = 0x17BD98u;
    {
        const bool branch_taken_0x17bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD98u;
            // 0x17bd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd98) {
            ctx->pc = 0x17BDACu;
            goto label_17bdac;
        }
    }
    ctx->pc = 0x17BDA0u;
label_17bda0:
    // 0x17bda0: 0xc05190c  jal         func_146430
label_17bda4:
    if (ctx->pc == 0x17BDA4u) {
        ctx->pc = 0x17BDA8u;
        goto label_17bda8;
    }
    ctx->pc = 0x17BDA0u;
    SET_GPR_U32(ctx, 31, 0x17BDA8u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDA8u; }
        if (ctx->pc != 0x17BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDA8u; }
        if (ctx->pc != 0x17BDA8u) { return; }
    }
    ctx->pc = 0x17BDA8u;
label_17bda8:
    // 0x17bda8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x17bda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_17bdac:
    // 0x17bdac: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x17bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_17bdb0:
    // 0x17bdb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17bdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bdb4:
    // 0x17bdb4: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
label_17bdb8:
    // 0x17bdb8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17bdbc:
    // 0x17bdbc: 0xc05eb1c  jal         func_17AC70
label_17bdc0:
    if (ctx->pc == 0x17BDC0u) {
        ctx->pc = 0x17BDC0u;
            // 0x17bdc0: 0xaf828a30  sw          $v0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 2));
        ctx->pc = 0x17BDC4u;
        goto label_17bdc4;
    }
    ctx->pc = 0x17BDBCu;
    SET_GPR_U32(ctx, 31, 0x17BDC4u);
    ctx->pc = 0x17BDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDBCu;
            // 0x17bdc0: 0xaf828a30  sw          $v0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AC70u;
    if (runtime->hasFunction(0x17AC70u)) {
        auto targetFn = runtime->lookupFunction(0x17AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDC4u; }
        if (ctx->pc != 0x17BDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCollision__13CDynamicAnimeFiP12CDACollision_0x17ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDC4u; }
        if (ctx->pc != 0x17BDC4u) { return; }
    }
    ctx->pc = 0x17BDC4u;
label_17bdc4:
    // 0x17bdc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bdc8:
    // 0x17bdc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17bdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17bdcc:
    // 0x17bdcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17bdccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17bdd0:
    // 0x17bdd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17bdd4:
    // 0x17bdd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bdd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17bdd8:
    // 0x17bdd8: 0x3e00008  jr          $ra
label_17bddc:
    if (ctx->pc == 0x17BDDCu) {
        ctx->pc = 0x17BDDCu;
            // 0x17bddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17BDE0u;
        goto label_fallthrough_0x17bdd8;
    }
    ctx->pc = 0x17BDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDD8u;
            // 0x17bddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17bdd8:
    ctx->pc = 0x17BDE0u;
}
