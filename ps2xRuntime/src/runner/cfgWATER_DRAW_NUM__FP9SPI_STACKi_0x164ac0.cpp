#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgWATER_DRAW_NUM__FP9SPI_STACKi
// Address: 0x164ac0 - 0x164c10
void cfgWATER_DRAW_NUM__FP9SPI_STACKi_0x164ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgWATER_DRAW_NUM__FP9SPI_STACKi_0x164ac0");
#endif

    switch (ctx->pc) {
        case 0x164ac0u: goto label_164ac0;
        case 0x164ac4u: goto label_164ac4;
        case 0x164ac8u: goto label_164ac8;
        case 0x164accu: goto label_164acc;
        case 0x164ad0u: goto label_164ad0;
        case 0x164ad4u: goto label_164ad4;
        case 0x164ad8u: goto label_164ad8;
        case 0x164adcu: goto label_164adc;
        case 0x164ae0u: goto label_164ae0;
        case 0x164ae4u: goto label_164ae4;
        case 0x164ae8u: goto label_164ae8;
        case 0x164aecu: goto label_164aec;
        case 0x164af0u: goto label_164af0;
        case 0x164af4u: goto label_164af4;
        case 0x164af8u: goto label_164af8;
        case 0x164afcu: goto label_164afc;
        case 0x164b00u: goto label_164b00;
        case 0x164b04u: goto label_164b04;
        case 0x164b08u: goto label_164b08;
        case 0x164b0cu: goto label_164b0c;
        case 0x164b10u: goto label_164b10;
        case 0x164b14u: goto label_164b14;
        case 0x164b18u: goto label_164b18;
        case 0x164b1cu: goto label_164b1c;
        case 0x164b20u: goto label_164b20;
        case 0x164b24u: goto label_164b24;
        case 0x164b28u: goto label_164b28;
        case 0x164b2cu: goto label_164b2c;
        case 0x164b30u: goto label_164b30;
        case 0x164b34u: goto label_164b34;
        case 0x164b38u: goto label_164b38;
        case 0x164b3cu: goto label_164b3c;
        case 0x164b40u: goto label_164b40;
        case 0x164b44u: goto label_164b44;
        case 0x164b48u: goto label_164b48;
        case 0x164b4cu: goto label_164b4c;
        case 0x164b50u: goto label_164b50;
        case 0x164b54u: goto label_164b54;
        case 0x164b58u: goto label_164b58;
        case 0x164b5cu: goto label_164b5c;
        case 0x164b60u: goto label_164b60;
        case 0x164b64u: goto label_164b64;
        case 0x164b68u: goto label_164b68;
        case 0x164b6cu: goto label_164b6c;
        case 0x164b70u: goto label_164b70;
        case 0x164b74u: goto label_164b74;
        case 0x164b78u: goto label_164b78;
        case 0x164b7cu: goto label_164b7c;
        case 0x164b80u: goto label_164b80;
        case 0x164b84u: goto label_164b84;
        case 0x164b88u: goto label_164b88;
        case 0x164b8cu: goto label_164b8c;
        case 0x164b90u: goto label_164b90;
        case 0x164b94u: goto label_164b94;
        case 0x164b98u: goto label_164b98;
        case 0x164b9cu: goto label_164b9c;
        case 0x164ba0u: goto label_164ba0;
        case 0x164ba4u: goto label_164ba4;
        case 0x164ba8u: goto label_164ba8;
        case 0x164bacu: goto label_164bac;
        case 0x164bb0u: goto label_164bb0;
        case 0x164bb4u: goto label_164bb4;
        case 0x164bb8u: goto label_164bb8;
        case 0x164bbcu: goto label_164bbc;
        case 0x164bc0u: goto label_164bc0;
        case 0x164bc4u: goto label_164bc4;
        case 0x164bc8u: goto label_164bc8;
        case 0x164bccu: goto label_164bcc;
        case 0x164bd0u: goto label_164bd0;
        case 0x164bd4u: goto label_164bd4;
        case 0x164bd8u: goto label_164bd8;
        case 0x164bdcu: goto label_164bdc;
        case 0x164be0u: goto label_164be0;
        case 0x164be4u: goto label_164be4;
        case 0x164be8u: goto label_164be8;
        case 0x164becu: goto label_164bec;
        case 0x164bf0u: goto label_164bf0;
        case 0x164bf4u: goto label_164bf4;
        case 0x164bf8u: goto label_164bf8;
        case 0x164bfcu: goto label_164bfc;
        case 0x164c00u: goto label_164c00;
        case 0x164c04u: goto label_164c04;
        case 0x164c08u: goto label_164c08;
        case 0x164c0cu: goto label_164c0c;
        default: break;
    }

    ctx->pc = 0x164ac0u;

label_164ac0:
    // 0x164ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_164ac4:
    // 0x164ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_164ac8:
    // 0x164ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_164acc:
    // 0x164acc: 0xc0518f8  jal         func_1463E0
label_164ad0:
    if (ctx->pc == 0x164AD0u) {
        ctx->pc = 0x164AD0u;
            // 0x164ad0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x164AD4u;
        goto label_164ad4;
    }
    ctx->pc = 0x164ACCu;
    SET_GPR_U32(ctx, 31, 0x164AD4u);
    ctx->pc = 0x164AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164ACCu;
            // 0x164ad0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AD4u; }
        if (ctx->pc != 0x164AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164AD4u; }
        if (ctx->pc != 0x164AD4u) { return; }
    }
    ctx->pc = 0x164AD4u;
label_164ad4:
    // 0x164ad4: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x164ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164ad8:
    // 0x164ad8: 0xac620cf4  sw          $v0, 0xCF4($v1)
    ctx->pc = 0x164ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3316), GPR_U32(ctx, 2));
label_164adc:
    // 0x164adc: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164ae0:
    // 0x164ae0: 0x8c500cf4  lw          $s0, 0xCF4($v0)
    ctx->pc = 0x164ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3316)));
label_164ae4:
    // 0x164ae4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_164ae8:
    if (ctx->pc == 0x164AE8u) {
        ctx->pc = 0x164AE8u;
            // 0x164ae8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x164AECu;
        goto label_164aec;
    }
    ctx->pc = 0x164AE4u;
    {
        const bool branch_taken_0x164ae4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x164AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164AE4u;
            // 0x164ae8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ae4) {
            ctx->pc = 0x164AF4u;
            goto label_164af4;
        }
    }
    ctx->pc = 0x164AECu;
label_164aec:
    // 0x164aec: 0x10000043  b           . + 4 + (0x43 << 2)
label_164af0:
    if (ctx->pc == 0x164AF0u) {
        ctx->pc = 0x164AF0u;
            // 0x164af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164AF4u;
        goto label_164af4;
    }
    ctx->pc = 0x164AECu;
    {
        const bool branch_taken_0x164aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164AECu;
            // 0x164af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164aec) {
            ctx->pc = 0x164BFCu;
            goto label_164bfc;
        }
    }
    ctx->pc = 0x164AF4u;
label_164af4:
    // 0x164af4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_164af8:
    // 0x164af8: 0xc05878c  jal         func_161E30
label_164afc:
    if (ctx->pc == 0x164AFCu) {
        ctx->pc = 0x164AFCu;
            // 0x164afc: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->pc = 0x164B00u;
        goto label_164b00;
    }
    ctx->pc = 0x164AF8u;
    SET_GPR_U32(ctx, 31, 0x164B00u);
    ctx->pc = 0x164AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164AF8u;
            // 0x164afc: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B00u; }
        if (ctx->pc != 0x164B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B00u; }
        if (ctx->pc != 0x164B00u) { return; }
    }
    ctx->pc = 0x164B00u;
label_164b00:
    // 0x164b00: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x164b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_164b04:
    // 0x164b04: 0xc04e748  jal         func_139D20
label_164b08:
    if (ctx->pc == 0x164B08u) {
        ctx->pc = 0x164B08u;
            // 0x164b08: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x164B0Cu;
        goto label_164b0c;
    }
    ctx->pc = 0x164B04u;
    SET_GPR_U32(ctx, 31, 0x164B0Cu);
    ctx->pc = 0x164B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B04u;
            // 0x164b08: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B0Cu; }
        if (ctx->pc != 0x164B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B0Cu; }
        if (ctx->pc != 0x164B0Cu) { return; }
    }
    ctx->pc = 0x164B0Cu;
label_164b0c:
    // 0x164b0c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x164b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_164b10:
    // 0x164b10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164b14:
    // 0x164b14: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x164b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_164b18:
    // 0x164b18: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x164b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_164b1c:
    // 0x164b1c: 0xc04e63c  jal         func_1398F0
label_164b20:
    if (ctx->pc == 0x164B20u) {
        ctx->pc = 0x164B20u;
            // 0x164b20: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x164B24u;
        goto label_164b24;
    }
    ctx->pc = 0x164B1Cu;
    SET_GPR_U32(ctx, 31, 0x164B24u);
    ctx->pc = 0x164B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B1Cu;
            // 0x164b20: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B24u; }
        if (ctx->pc != 0x164B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B24u; }
        if (ctx->pc != 0x164B24u) { return; }
    }
    ctx->pc = 0x164B24u;
label_164b24:
    // 0x164b24: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x164b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
label_164b28:
    // 0x164b28: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x164b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164b2c:
    // 0x164b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x164b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164b30:
    // 0x164b30: 0x24a54c10  addiu       $a1, $a1, 0x4C10
    ctx->pc = 0x164b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
label_164b34:
    // 0x164b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164b38:
    // 0x164b38: 0xc0400bc  jal         func_1002F0
label_164b3c:
    if (ctx->pc == 0x164B3Cu) {
        ctx->pc = 0x164B3Cu;
            // 0x164b3c: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x164B40u;
        goto label_164b40;
    }
    ctx->pc = 0x164B38u;
    SET_GPR_U32(ctx, 31, 0x164B40u);
    ctx->pc = 0x164B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B38u;
            // 0x164b3c: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B40u; }
        if (ctx->pc != 0x164B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B40u; }
        if (ctx->pc != 0x164B40u) { return; }
    }
    ctx->pc = 0x164B40u;
label_164b40:
    // 0x164b40: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x164b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164b44:
    // 0x164b44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x164b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164b48:
    // 0x164b48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x164b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164b4c:
    // 0x164b4c: 0x10000026  b           . + 4 + (0x26 << 2)
label_164b50:
    if (ctx->pc == 0x164B50u) {
        ctx->pc = 0x164B50u;
            // 0x164b50: 0xac620cf8  sw          $v0, 0xCF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3320), GPR_U32(ctx, 2));
        ctx->pc = 0x164B54u;
        goto label_164b54;
    }
    ctx->pc = 0x164B4Cu;
    {
        const bool branch_taken_0x164b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164B4Cu;
            // 0x164b50: 0xac620cf8  sw          $v0, 0xCF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b4c) {
            ctx->pc = 0x164BE8u;
            goto label_164be8;
        }
    }
    ctx->pc = 0x164B54u;
label_164b54:
    // 0x164b54: 0x8c620cf8  lw          $v0, 0xCF8($v1)
    ctx->pc = 0x164b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3320)));
label_164b58:
    // 0x164b58: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x164b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_164b5c:
    // 0x164b5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x164b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_164b60:
    // 0x164b60: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x164b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_164b64:
    // 0x164b64: 0x320f809  jalr        $t9
label_164b68:
    if (ctx->pc == 0x164B68u) {
        ctx->pc = 0x164B6Cu;
        goto label_164b6c;
    }
    ctx->pc = 0x164B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x164B6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x164B6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164B6Cu; }
            if (ctx->pc != 0x164B6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x164B6Cu;
label_164b6c:
    // 0x164b6c: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164b70:
    // 0x164b70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_164b74:
    // 0x164b74: 0x8c420cf8  lw          $v0, 0xCF8($v0)
    ctx->pc = 0x164b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
label_164b78:
    // 0x164b78: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x164b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_164b7c:
    // 0x164b7c: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x164b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
label_164b80:
    // 0x164b80: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164b84:
    // 0x164b84: 0x8c420cf8  lw          $v0, 0xCF8($v0)
    ctx->pc = 0x164b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
label_164b88:
    // 0x164b88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x164b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_164b8c:
    // 0x164b8c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x164b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_164b90:
    // 0x164b90: 0xc05878c  jal         func_161E30
label_164b94:
    if (ctx->pc == 0x164B94u) {
        ctx->pc = 0x164B94u;
            // 0x164b94: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x164B98u;
        goto label_164b98;
    }
    ctx->pc = 0x164B90u;
    SET_GPR_U32(ctx, 31, 0x164B98u);
    ctx->pc = 0x164B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B90u;
            // 0x164b94: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B98u; }
        if (ctx->pc != 0x164B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B98u; }
        if (ctx->pc != 0x164B98u) { return; }
    }
    ctx->pc = 0x164B98u;
label_164b98:
    // 0x164b98: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x164b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_164b9c:
    // 0x164b9c: 0xc04e748  jal         func_139D20
label_164ba0:
    if (ctx->pc == 0x164BA0u) {
        ctx->pc = 0x164BA0u;
            // 0x164ba0: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x164BA4u;
        goto label_164ba4;
    }
    ctx->pc = 0x164B9Cu;
    SET_GPR_U32(ctx, 31, 0x164BA4u);
    ctx->pc = 0x164BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164B9Cu;
            // 0x164ba0: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BA4u; }
        if (ctx->pc != 0x164BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BA4u; }
        if (ctx->pc != 0x164BA4u) { return; }
    }
    ctx->pc = 0x164BA4u;
label_164ba4:
    // 0x164ba4: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x164ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164ba8:
    // 0x164ba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164bac:
    // 0x164bac: 0x8c620cf8  lw          $v0, 0xCF8($v1)
    ctx->pc = 0x164bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3320)));
label_164bb0:
    // 0x164bb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x164bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_164bb4:
    // 0x164bb4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x164bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_164bb8:
    // 0x164bb8: 0xc04e63c  jal         func_1398F0
label_164bbc:
    if (ctx->pc == 0x164BBCu) {
        ctx->pc = 0x164BBCu;
            // 0x164bbc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x164BC0u;
        goto label_164bc0;
    }
    ctx->pc = 0x164BB8u;
    SET_GPR_U32(ctx, 31, 0x164BC0u);
    ctx->pc = 0x164BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164BB8u;
            // 0x164bbc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BC0u; }
        if (ctx->pc != 0x164BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BC0u; }
        if (ctx->pc != 0x164BC0u) { return; }
    }
    ctx->pc = 0x164BC0u;
label_164bc0:
    // 0x164bc0: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x164bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164bc4:
    // 0x164bc4: 0x8c630cf8  lw          $v1, 0xCF8($v1)
    ctx->pc = 0x164bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3320)));
label_164bc8:
    // 0x164bc8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x164bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_164bcc:
    // 0x164bcc: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x164bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
label_164bd0:
    // 0x164bd0: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164bd4:
    // 0x164bd4: 0x8c420cf8  lw          $v0, 0xCF8($v0)
    ctx->pc = 0x164bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
label_164bd8:
    // 0x164bd8: 0xc05716c  jal         func_15C5B0
label_164bdc:
    if (ctx->pc == 0x164BDCu) {
        ctx->pc = 0x164BDCu;
            // 0x164bdc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x164BE0u;
        goto label_164be0;
    }
    ctx->pc = 0x164BD8u;
    SET_GPR_U32(ctx, 31, 0x164BE0u);
    ctx->pc = 0x164BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164BD8u;
            // 0x164bdc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C5B0u;
    if (runtime->hasFunction(0x15C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BE0u; }
        if (ctx->pc != 0x164BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__9CMapWaterFv_0x15c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BE0u; }
        if (ctx->pc != 0x164BE0u) { return; }
    }
    ctx->pc = 0x164BE0u;
label_164be0:
    // 0x164be0: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x164be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_164be4:
    // 0x164be4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x164be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_164be8:
    // 0x164be8: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x164be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164bec:
    // 0x164bec: 0x8c620cf4  lw          $v0, 0xCF4($v1)
    ctx->pc = 0x164becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3316)));
label_164bf0:
    // 0x164bf0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x164bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_164bf4:
    // 0x164bf4: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_164bf8:
    if (ctx->pc == 0x164BF8u) {
        ctx->pc = 0x164BF8u;
            // 0x164bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x164BFCu;
        goto label_164bfc;
    }
    ctx->pc = 0x164BF4u;
    {
        const bool branch_taken_0x164bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164BF4u;
            // 0x164bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bf4) {
            ctx->pc = 0x164B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164b54;
        }
    }
    ctx->pc = 0x164BFCu;
label_164bfc:
    // 0x164bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_164c00:
    // 0x164c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_164c04:
    // 0x164c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_164c08:
    // 0x164c08: 0x3e00008  jr          $ra
label_164c0c:
    if (ctx->pc == 0x164C0Cu) {
        ctx->pc = 0x164C0Cu;
            // 0x164c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x164C10u;
        goto label_fallthrough_0x164c08;
    }
    ctx->pc = 0x164C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164C08u;
            // 0x164c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x164c08:
    ctx->pc = 0x164C10u;
}
