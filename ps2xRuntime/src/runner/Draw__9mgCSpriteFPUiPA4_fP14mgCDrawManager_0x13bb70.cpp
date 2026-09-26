#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9mgCSpriteFPUiPA4_fP14mgCDrawManager
// Address: 0x13bb70 - 0x13bc60
void Draw__9mgCSpriteFPUiPA4_fP14mgCDrawManager_0x13bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9mgCSpriteFPUiPA4_fP14mgCDrawManager_0x13bb70");
#endif

    switch (ctx->pc) {
        case 0x13bb70u: goto label_13bb70;
        case 0x13bb74u: goto label_13bb74;
        case 0x13bb78u: goto label_13bb78;
        case 0x13bb7cu: goto label_13bb7c;
        case 0x13bb80u: goto label_13bb80;
        case 0x13bb84u: goto label_13bb84;
        case 0x13bb88u: goto label_13bb88;
        case 0x13bb8cu: goto label_13bb8c;
        case 0x13bb90u: goto label_13bb90;
        case 0x13bb94u: goto label_13bb94;
        case 0x13bb98u: goto label_13bb98;
        case 0x13bb9cu: goto label_13bb9c;
        case 0x13bba0u: goto label_13bba0;
        case 0x13bba4u: goto label_13bba4;
        case 0x13bba8u: goto label_13bba8;
        case 0x13bbacu: goto label_13bbac;
        case 0x13bbb0u: goto label_13bbb0;
        case 0x13bbb4u: goto label_13bbb4;
        case 0x13bbb8u: goto label_13bbb8;
        case 0x13bbbcu: goto label_13bbbc;
        case 0x13bbc0u: goto label_13bbc0;
        case 0x13bbc4u: goto label_13bbc4;
        case 0x13bbc8u: goto label_13bbc8;
        case 0x13bbccu: goto label_13bbcc;
        case 0x13bbd0u: goto label_13bbd0;
        case 0x13bbd4u: goto label_13bbd4;
        case 0x13bbd8u: goto label_13bbd8;
        case 0x13bbdcu: goto label_13bbdc;
        case 0x13bbe0u: goto label_13bbe0;
        case 0x13bbe4u: goto label_13bbe4;
        case 0x13bbe8u: goto label_13bbe8;
        case 0x13bbecu: goto label_13bbec;
        case 0x13bbf0u: goto label_13bbf0;
        case 0x13bbf4u: goto label_13bbf4;
        case 0x13bbf8u: goto label_13bbf8;
        case 0x13bbfcu: goto label_13bbfc;
        case 0x13bc00u: goto label_13bc00;
        case 0x13bc04u: goto label_13bc04;
        case 0x13bc08u: goto label_13bc08;
        case 0x13bc0cu: goto label_13bc0c;
        case 0x13bc10u: goto label_13bc10;
        case 0x13bc14u: goto label_13bc14;
        case 0x13bc18u: goto label_13bc18;
        case 0x13bc1cu: goto label_13bc1c;
        case 0x13bc20u: goto label_13bc20;
        case 0x13bc24u: goto label_13bc24;
        case 0x13bc28u: goto label_13bc28;
        case 0x13bc2cu: goto label_13bc2c;
        case 0x13bc30u: goto label_13bc30;
        case 0x13bc34u: goto label_13bc34;
        case 0x13bc38u: goto label_13bc38;
        case 0x13bc3cu: goto label_13bc3c;
        case 0x13bc40u: goto label_13bc40;
        case 0x13bc44u: goto label_13bc44;
        case 0x13bc48u: goto label_13bc48;
        case 0x13bc4cu: goto label_13bc4c;
        case 0x13bc50u: goto label_13bc50;
        case 0x13bc54u: goto label_13bc54;
        case 0x13bc58u: goto label_13bc58;
        case 0x13bc5cu: goto label_13bc5c;
        default: break;
    }

    ctx->pc = 0x13bb70u;

label_13bb70:
    // 0x13bb70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13bb74:
    // 0x13bb74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_13bb78:
    // 0x13bb78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13bb7c:
    // 0x13bb7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13bb80:
    // 0x13bb80: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x13bb80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13bb84:
    // 0x13bb84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13bb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13bb88:
    // 0x13bb88: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x13bb88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13bb8c:
    // 0x13bb8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13bb90:
    // 0x13bb90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13bb94:
    // 0x13bb94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13bb98:
    // 0x13bb98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13bb98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13bb9c:
    // 0x13bb9c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_13bba0:
    if (ctx->pc == 0x13BBA0u) {
        ctx->pc = 0x13BBA0u;
            // 0x13bba0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13BBA4u;
        goto label_13bba4;
    }
    ctx->pc = 0x13BB9Cu;
    {
        const bool branch_taken_0x13bb9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB9Cu;
            // 0x13bba0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb9c) {
            ctx->pc = 0x13BBACu;
            goto label_13bbac;
        }
    }
    ctx->pc = 0x13BBA4u;
label_13bba4:
    // 0x13bba4: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x13bba4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
label_13bba8:
    // 0x13bba8: 0x269420e0  addiu       $s4, $s4, 0x20E0
    ctx->pc = 0x13bba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8416));
label_13bbac:
    // 0x13bbac: 0x8e920064  lw          $s2, 0x64($s4)
    ctx->pc = 0x13bbacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_13bbb0:
    // 0x13bbb0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x13bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_13bbb4:
    // 0x13bbb4: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x13bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_13bbb8:
    // 0x13bbb8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x13bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_13bbbc:
    // 0x13bbbc: 0x8e930060  lw          $s3, 0x60($s4)
    ctx->pc = 0x13bbbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_13bbc0:
    // 0x13bbc0: 0xc04e714  jal         func_139C50
label_13bbc4:
    if (ctx->pc == 0x13BBC4u) {
        ctx->pc = 0x13BBC4u;
            // 0x13bbc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13BBC8u;
        goto label_13bbc8;
    }
    ctx->pc = 0x13BBC0u;
    SET_GPR_U32(ctx, 31, 0x13BBC8u);
    ctx->pc = 0x13BBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBC0u;
            // 0x13bbc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBC8u; }
        if (ctx->pc != 0x13BBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBC8u; }
        if (ctx->pc != 0x13BBC8u) { return; }
    }
    ctx->pc = 0x13BBC8u;
label_13bbc8:
    // 0x13bbc8: 0x8e39001c  lw          $t9, 0x1C($s1)
    ctx->pc = 0x13bbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13bbcc:
    // 0x13bbcc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x13bbccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13bbd0:
    // 0x13bbd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13bbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13bbd4:
    // 0x13bbd4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13bbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13bbd8:
    // 0x13bbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13bbdc:
    // 0x13bbdc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13bbdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13bbe0:
    // 0x13bbe0: 0x320f809  jalr        $t9
label_13bbe4:
    if (ctx->pc == 0x13BBE4u) {
        ctx->pc = 0x13BBE4u;
            // 0x13bbe4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13BBE8u;
        goto label_13bbe8;
    }
    ctx->pc = 0x13BBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13BBE8u);
        ctx->pc = 0x13BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBE0u;
            // 0x13bbe4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13BBE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13BBE8u; }
            if (ctx->pc != 0x13BBE8u) { return; }
        }
        }
    }
    ctx->pc = 0x13BBE8u;
label_13bbe8:
    // 0x13bbe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13bbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13bbec:
    // 0x13bbec: 0xc04e748  jal         func_139D20
label_13bbf0:
    if (ctx->pc == 0x13BBF0u) {
        ctx->pc = 0x13BBF0u;
            // 0x13bbf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13BBF4u;
        goto label_13bbf4;
    }
    ctx->pc = 0x13BBECu;
    SET_GPR_U32(ctx, 31, 0x13BBF4u);
    ctx->pc = 0x13BBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBECu;
            // 0x13bbf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBF4u; }
        if (ctx->pc != 0x13BBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBF4u; }
        if (ctx->pc != 0x13BBF4u) { return; }
    }
    ctx->pc = 0x13BBF4u;
label_13bbf4:
    // 0x13bbf4: 0x8e39001c  lw          $t9, 0x1C($s1)
    ctx->pc = 0x13bbf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13bbf8:
    // 0x13bbf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13bbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13bbfc:
    // 0x13bbfc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x13bbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_13bc00:
    // 0x13bc00: 0x320f809  jalr        $t9
label_13bc04:
    if (ctx->pc == 0x13BC04u) {
        ctx->pc = 0x13BC04u;
            // 0x13bc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13BC08u;
        goto label_13bc08;
    }
    ctx->pc = 0x13BC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13BC08u);
        ctx->pc = 0x13BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC00u;
            // 0x13bc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13BC08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13BC08u; }
            if (ctx->pc != 0x13BC08u) { return; }
        }
        }
    }
    ctx->pc = 0x13BC08u;
label_13bc08:
    // 0x13bc08: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_13bc0c:
    if (ctx->pc == 0x13BC0Cu) {
        ctx->pc = 0x13BC0Cu;
            // 0x13bc0c: 0x3c035000  lui         $v1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
        ctx->pc = 0x13BC10u;
        goto label_13bc10;
    }
    ctx->pc = 0x13BC08u;
    {
        const bool branch_taken_0x13bc08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC08u;
            // 0x13bc0c: 0x3c035000  lui         $v1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc08) {
            ctx->pc = 0x13BC38u;
            goto label_13bc38;
        }
    }
    ctx->pc = 0x13BC10u;
label_13bc10:
    // 0x13bc10: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x13bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_13bc14:
    // 0x13bc14: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x13bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_13bc18:
    // 0x13bc18: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_13bc1c:
    // 0x13bc1c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x13bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_13bc20:
    // 0x13bc20: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x13bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_13bc24:
    // 0x13bc24: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x13bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_13bc28:
    // 0x13bc28: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x13bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_13bc2c:
    // 0x13bc2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13bc30:
    // 0x13bc30: 0x10000002  b           . + 4 + (0x2 << 2)
label_13bc34:
    if (ctx->pc == 0x13BC34u) {
        ctx->pc = 0x13BC34u;
            // 0x13bc34: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x13BC38u;
        goto label_13bc38;
    }
    ctx->pc = 0x13BC30u;
    {
        const bool branch_taken_0x13bc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC30u;
            // 0x13bc34: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc30) {
            ctx->pc = 0x13BC3Cu;
            goto label_13bc3c;
        }
    }
    ctx->pc = 0x13BC38u;
label_13bc38:
    // 0x13bc38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bc3c:
    // 0x13bc3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13bc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13bc40:
    // 0x13bc40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13bc40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13bc44:
    // 0x13bc44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13bc44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13bc48:
    // 0x13bc48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13bc4c:
    // 0x13bc4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bc4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13bc50:
    // 0x13bc50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13bc54:
    // 0x13bc54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13bc58:
    // 0x13bc58: 0x3e00008  jr          $ra
label_13bc5c:
    if (ctx->pc == 0x13BC5Cu) {
        ctx->pc = 0x13BC5Cu;
            // 0x13bc5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x13BC60u;
        goto label_fallthrough_0x13bc58;
    }
    ctx->pc = 0x13BC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC58u;
            // 0x13bc5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13bc58:
    ctx->pc = 0x13BC60u;
}
