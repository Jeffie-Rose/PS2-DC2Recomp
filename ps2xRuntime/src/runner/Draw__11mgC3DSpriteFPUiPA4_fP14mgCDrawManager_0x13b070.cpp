#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11mgC3DSpriteFPUiPA4_fP14mgCDrawManager
// Address: 0x13b070 - 0x13b1a0
void Draw__11mgC3DSpriteFPUiPA4_fP14mgCDrawManager_0x13b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11mgC3DSpriteFPUiPA4_fP14mgCDrawManager_0x13b070");
#endif

    switch (ctx->pc) {
        case 0x13b070u: goto label_13b070;
        case 0x13b074u: goto label_13b074;
        case 0x13b078u: goto label_13b078;
        case 0x13b07cu: goto label_13b07c;
        case 0x13b080u: goto label_13b080;
        case 0x13b084u: goto label_13b084;
        case 0x13b088u: goto label_13b088;
        case 0x13b08cu: goto label_13b08c;
        case 0x13b090u: goto label_13b090;
        case 0x13b094u: goto label_13b094;
        case 0x13b098u: goto label_13b098;
        case 0x13b09cu: goto label_13b09c;
        case 0x13b0a0u: goto label_13b0a0;
        case 0x13b0a4u: goto label_13b0a4;
        case 0x13b0a8u: goto label_13b0a8;
        case 0x13b0acu: goto label_13b0ac;
        case 0x13b0b0u: goto label_13b0b0;
        case 0x13b0b4u: goto label_13b0b4;
        case 0x13b0b8u: goto label_13b0b8;
        case 0x13b0bcu: goto label_13b0bc;
        case 0x13b0c0u: goto label_13b0c0;
        case 0x13b0c4u: goto label_13b0c4;
        case 0x13b0c8u: goto label_13b0c8;
        case 0x13b0ccu: goto label_13b0cc;
        case 0x13b0d0u: goto label_13b0d0;
        case 0x13b0d4u: goto label_13b0d4;
        case 0x13b0d8u: goto label_13b0d8;
        case 0x13b0dcu: goto label_13b0dc;
        case 0x13b0e0u: goto label_13b0e0;
        case 0x13b0e4u: goto label_13b0e4;
        case 0x13b0e8u: goto label_13b0e8;
        case 0x13b0ecu: goto label_13b0ec;
        case 0x13b0f0u: goto label_13b0f0;
        case 0x13b0f4u: goto label_13b0f4;
        case 0x13b0f8u: goto label_13b0f8;
        case 0x13b0fcu: goto label_13b0fc;
        case 0x13b100u: goto label_13b100;
        case 0x13b104u: goto label_13b104;
        case 0x13b108u: goto label_13b108;
        case 0x13b10cu: goto label_13b10c;
        case 0x13b110u: goto label_13b110;
        case 0x13b114u: goto label_13b114;
        case 0x13b118u: goto label_13b118;
        case 0x13b11cu: goto label_13b11c;
        case 0x13b120u: goto label_13b120;
        case 0x13b124u: goto label_13b124;
        case 0x13b128u: goto label_13b128;
        case 0x13b12cu: goto label_13b12c;
        case 0x13b130u: goto label_13b130;
        case 0x13b134u: goto label_13b134;
        case 0x13b138u: goto label_13b138;
        case 0x13b13cu: goto label_13b13c;
        case 0x13b140u: goto label_13b140;
        case 0x13b144u: goto label_13b144;
        case 0x13b148u: goto label_13b148;
        case 0x13b14cu: goto label_13b14c;
        case 0x13b150u: goto label_13b150;
        case 0x13b154u: goto label_13b154;
        case 0x13b158u: goto label_13b158;
        case 0x13b15cu: goto label_13b15c;
        case 0x13b160u: goto label_13b160;
        case 0x13b164u: goto label_13b164;
        case 0x13b168u: goto label_13b168;
        case 0x13b16cu: goto label_13b16c;
        case 0x13b170u: goto label_13b170;
        case 0x13b174u: goto label_13b174;
        case 0x13b178u: goto label_13b178;
        case 0x13b17cu: goto label_13b17c;
        case 0x13b180u: goto label_13b180;
        case 0x13b184u: goto label_13b184;
        case 0x13b188u: goto label_13b188;
        case 0x13b18cu: goto label_13b18c;
        case 0x13b190u: goto label_13b190;
        case 0x13b194u: goto label_13b194;
        case 0x13b198u: goto label_13b198;
        case 0x13b19cu: goto label_13b19c;
        default: break;
    }

    ctx->pc = 0x13b070u;

label_13b070:
    // 0x13b070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13b074:
    // 0x13b074: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13b074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_13b078:
    // 0x13b078: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13b07c:
    // 0x13b07c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13b080:
    // 0x13b080: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13b080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13b084:
    // 0x13b084: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13b088:
    // 0x13b088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13b08c:
    // 0x13b08c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b08cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b090:
    // 0x13b090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13b094:
    // 0x13b094: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_13b098:
    if (ctx->pc == 0x13B098u) {
        ctx->pc = 0x13B098u;
            // 0x13b098: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13B09Cu;
        goto label_13b09c;
    }
    ctx->pc = 0x13B094u;
    {
        const bool branch_taken_0x13b094 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B094u;
            // 0x13b098: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b094) {
            ctx->pc = 0x13B0A4u;
            goto label_13b0a4;
        }
    }
    ctx->pc = 0x13B09Cu;
label_13b09c:
    // 0x13b09c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x13b09cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_13b0a0:
    // 0x13b0a0: 0x24e720e0  addiu       $a3, $a3, 0x20E0
    ctx->pc = 0x13b0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8416));
label_13b0a4:
    // 0x13b0a4: 0x8cf00064  lw          $s0, 0x64($a3)
    ctx->pc = 0x13b0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
label_13b0a8:
    // 0x13b0a8: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x13b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_13b0ac:
    // 0x13b0ac: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x13b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_13b0b0:
    // 0x13b0b0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x13b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_13b0b4:
    // 0x13b0b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13b0b8:
    if (ctx->pc == 0x13B0B8u) {
        ctx->pc = 0x13B0BCu;
        goto label_13b0bc;
    }
    ctx->pc = 0x13B0B4u;
    {
        const bool branch_taken_0x13b0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b0b4) {
            ctx->pc = 0x13B0C4u;
            goto label_13b0c4;
        }
    }
    ctx->pc = 0x13B0BCu;
label_13b0bc:
    // 0x13b0bc: 0x10000030  b           . + 4 + (0x30 << 2)
label_13b0c0:
    if (ctx->pc == 0x13B0C0u) {
        ctx->pc = 0x13B0C0u;
            // 0x13b0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13B0C4u;
        goto label_13b0c4;
    }
    ctx->pc = 0x13B0BCu;
    {
        const bool branch_taken_0x13b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B0BCu;
            // 0x13b0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0bc) {
            ctx->pc = 0x13B180u;
            goto label_13b180;
        }
    }
    ctx->pc = 0x13B0C4u;
label_13b0c4:
    // 0x13b0c4: 0x8cf30060  lw          $s3, 0x60($a3)
    ctx->pc = 0x13b0c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
label_13b0c8:
    // 0x13b0c8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x13b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_13b0cc:
    // 0x13b0cc: 0xc04e714  jal         func_139C50
label_13b0d0:
    if (ctx->pc == 0x13B0D0u) {
        ctx->pc = 0x13B0D0u;
            // 0x13b0d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13B0D4u;
        goto label_13b0d4;
    }
    ctx->pc = 0x13B0CCu;
    SET_GPR_U32(ctx, 31, 0x13B0D4u);
    ctx->pc = 0x13B0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B0CCu;
            // 0x13b0d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B0D4u; }
        if (ctx->pc != 0x13B0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B0D4u; }
        if (ctx->pc != 0x13B0D4u) { return; }
    }
    ctx->pc = 0x13B0D4u;
label_13b0d4:
    // 0x13b0d4: 0x8e59001c  lw          $t9, 0x1C($s2)
    ctx->pc = 0x13b0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13b0d8:
    // 0x13b0d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13b0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13b0dc:
    // 0x13b0dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13b0dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b0e0:
    // 0x13b0e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13b0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b0e4:
    // 0x13b0e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13b0e8:
    // 0x13b0e8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13b0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13b0ec:
    // 0x13b0ec: 0x320f809  jalr        $t9
label_13b0f0:
    if (ctx->pc == 0x13B0F0u) {
        ctx->pc = 0x13B0F0u;
            // 0x13b0f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13B0F4u;
        goto label_13b0f4;
    }
    ctx->pc = 0x13B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13B0F4u);
        ctx->pc = 0x13B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B0ECu;
            // 0x13b0f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13B0F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13B0F4u; }
            if (ctx->pc != 0x13B0F4u) { return; }
        }
        }
    }
    ctx->pc = 0x13B0F4u;
label_13b0f4:
    // 0x13b0f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13b0f8:
    // 0x13b0f8: 0xc04e748  jal         func_139D20
label_13b0fc:
    if (ctx->pc == 0x13B0FCu) {
        ctx->pc = 0x13B0FCu;
            // 0x13b0fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13B100u;
        goto label_13b100;
    }
    ctx->pc = 0x13B0F8u;
    SET_GPR_U32(ctx, 31, 0x13B100u);
    ctx->pc = 0x13B0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B0F8u;
            // 0x13b0fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B100u; }
        if (ctx->pc != 0x13B100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B100u; }
        if (ctx->pc != 0x13B100u) { return; }
    }
    ctx->pc = 0x13B100u;
label_13b100:
    // 0x13b100: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_13b104:
    if (ctx->pc == 0x13B104u) {
        ctx->pc = 0x13B104u;
            // 0x13b104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13B108u;
        goto label_13b108;
    }
    ctx->pc = 0x13B100u;
    {
        const bool branch_taken_0x13b100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B100u;
            // 0x13b104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b100) {
            ctx->pc = 0x13B180u;
            goto label_13b180;
        }
    }
    ctx->pc = 0x13B108u;
label_13b108:
    // 0x13b108: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_13b10c:
    // 0x13b10c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x13b10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_13b110:
    // 0x13b110: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13b110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_13b114:
    // 0x13b114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b118:
    // 0x13b118: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x13b118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
label_13b11c:
    // 0x13b11c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13b120:
    // 0x13b120: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x13b120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_13b124:
    // 0x13b124: 0xc0517a0  jal         func_145E80
label_13b128:
    if (ctx->pc == 0x13B128u) {
        ctx->pc = 0x13B128u;
            // 0x13b128: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x13B12Cu;
        goto label_13b12c;
    }
    ctx->pc = 0x13B124u;
    SET_GPR_U32(ctx, 31, 0x13B12Cu);
    ctx->pc = 0x13B128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B124u;
            // 0x13b128: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145E80u;
    if (runtime->hasFunction(0x145E80u)) {
        auto targetFn = runtime->lookupFunction(0x145E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B12Cu; }
        if (ctx->pc != 0x13B12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSendVuProg__FPUii_0x145e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B12Cu; }
        if (ctx->pc != 0x13B12Cu) { return; }
    }
    ctx->pc = 0x13B12Cu;
label_13b12c:
    // 0x13b12c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13b130:
    // 0x13b130: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13b130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_13b134:
    // 0x13b134: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x13b134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_13b138:
    // 0x13b138: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13b138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_13b13c:
    // 0x13b13c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x13b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_13b140:
    // 0x13b140: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x13b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_13b144:
    // 0x13b144: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x13b144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_13b148:
    // 0x13b148: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13b148u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_13b14c:
    // 0x13b14c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x13b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_13b150:
    // 0x13b150: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13b150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_13b154:
    // 0x13b154: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_13b158:
    if (ctx->pc == 0x13B158u) {
        ctx->pc = 0x13B158u;
            // 0x13b158: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x13B15Cu;
        goto label_13b15c;
    }
    ctx->pc = 0x13B154u;
    {
        const bool branch_taken_0x13b154 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13B158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B154u;
            // 0x13b158: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b154) {
            ctx->pc = 0x13B164u;
            goto label_13b164;
        }
    }
    ctx->pc = 0x13B15Cu;
label_13b15c:
    // 0x13b15c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_13b160:
    // 0x13b160: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13b160u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_13b164:
    // 0x13b164: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
label_13b168:
    if (ctx->pc == 0x13B168u) {
        ctx->pc = 0x13B168u;
            // 0x13b168: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x13B16Cu;
        goto label_13b16c;
    }
    ctx->pc = 0x13B164u;
    {
        const bool branch_taken_0x13b164 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B164u;
            // 0x13b168: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b164) {
            ctx->pc = 0x13B180u;
            goto label_13b180;
        }
    }
    ctx->pc = 0x13B16Cu;
label_13b16c:
    // 0x13b16c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_13b170:
    // 0x13b170: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13b170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13b174:
    // 0x13b174: 0x10000003  b           . + 4 + (0x3 << 2)
label_13b178:
    if (ctx->pc == 0x13B178u) {
        ctx->pc = 0x13B178u;
            // 0x13b178: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x13B17Cu;
        goto label_13b17c;
    }
    ctx->pc = 0x13B174u;
    {
        const bool branch_taken_0x13b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B174u;
            // 0x13b178: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b174) {
            ctx->pc = 0x13B184u;
            goto label_13b184;
        }
    }
    ctx->pc = 0x13B17Cu;
label_13b17c:
    // 0x13b17c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13b17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b180:
    // 0x13b180: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13b180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13b184:
    // 0x13b184: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13b184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13b188:
    // 0x13b188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13b18c:
    // 0x13b18c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13b190:
    // 0x13b190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13b194:
    // 0x13b194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13b198:
    // 0x13b198: 0x3e00008  jr          $ra
label_13b19c:
    if (ctx->pc == 0x13B19Cu) {
        ctx->pc = 0x13B19Cu;
            // 0x13b19c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x13B1A0u;
        goto label_fallthrough_0x13b198;
    }
    ctx->pc = 0x13B198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B198u;
            // 0x13b19c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13b198:
    ctx->pc = 0x13B1A0u;
}
