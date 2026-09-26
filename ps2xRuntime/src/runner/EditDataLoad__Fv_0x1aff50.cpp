#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDataLoad__Fv
// Address: 0x1aff50 - 0x1b014c
void EditDataLoad__Fv_0x1aff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDataLoad__Fv_0x1aff50");
#endif

    switch (ctx->pc) {
        case 0x1aff50u: goto label_1aff50;
        case 0x1aff54u: goto label_1aff54;
        case 0x1aff58u: goto label_1aff58;
        case 0x1aff5cu: goto label_1aff5c;
        case 0x1aff60u: goto label_1aff60;
        case 0x1aff64u: goto label_1aff64;
        case 0x1aff68u: goto label_1aff68;
        case 0x1aff6cu: goto label_1aff6c;
        case 0x1aff70u: goto label_1aff70;
        case 0x1aff74u: goto label_1aff74;
        case 0x1aff78u: goto label_1aff78;
        case 0x1aff7cu: goto label_1aff7c;
        case 0x1aff80u: goto label_1aff80;
        case 0x1aff84u: goto label_1aff84;
        case 0x1aff88u: goto label_1aff88;
        case 0x1aff8cu: goto label_1aff8c;
        case 0x1aff90u: goto label_1aff90;
        case 0x1aff94u: goto label_1aff94;
        case 0x1aff98u: goto label_1aff98;
        case 0x1aff9cu: goto label_1aff9c;
        case 0x1affa0u: goto label_1affa0;
        case 0x1affa4u: goto label_1affa4;
        case 0x1affa8u: goto label_1affa8;
        case 0x1affacu: goto label_1affac;
        case 0x1affb0u: goto label_1affb0;
        case 0x1affb4u: goto label_1affb4;
        case 0x1affb8u: goto label_1affb8;
        case 0x1affbcu: goto label_1affbc;
        case 0x1affc0u: goto label_1affc0;
        case 0x1affc4u: goto label_1affc4;
        case 0x1affc8u: goto label_1affc8;
        case 0x1affccu: goto label_1affcc;
        case 0x1affd0u: goto label_1affd0;
        case 0x1affd4u: goto label_1affd4;
        case 0x1affd8u: goto label_1affd8;
        case 0x1affdcu: goto label_1affdc;
        case 0x1affe0u: goto label_1affe0;
        case 0x1affe4u: goto label_1affe4;
        case 0x1affe8u: goto label_1affe8;
        case 0x1affecu: goto label_1affec;
        case 0x1afff0u: goto label_1afff0;
        case 0x1afff4u: goto label_1afff4;
        case 0x1afff8u: goto label_1afff8;
        case 0x1afffcu: goto label_1afffc;
        case 0x1b0000u: goto label_1b0000;
        case 0x1b0004u: goto label_1b0004;
        case 0x1b0008u: goto label_1b0008;
        case 0x1b000cu: goto label_1b000c;
        case 0x1b0010u: goto label_1b0010;
        case 0x1b0014u: goto label_1b0014;
        case 0x1b0018u: goto label_1b0018;
        case 0x1b001cu: goto label_1b001c;
        case 0x1b0020u: goto label_1b0020;
        case 0x1b0024u: goto label_1b0024;
        case 0x1b0028u: goto label_1b0028;
        case 0x1b002cu: goto label_1b002c;
        case 0x1b0030u: goto label_1b0030;
        case 0x1b0034u: goto label_1b0034;
        case 0x1b0038u: goto label_1b0038;
        case 0x1b003cu: goto label_1b003c;
        case 0x1b0040u: goto label_1b0040;
        case 0x1b0044u: goto label_1b0044;
        case 0x1b0048u: goto label_1b0048;
        case 0x1b004cu: goto label_1b004c;
        case 0x1b0050u: goto label_1b0050;
        case 0x1b0054u: goto label_1b0054;
        case 0x1b0058u: goto label_1b0058;
        case 0x1b005cu: goto label_1b005c;
        case 0x1b0060u: goto label_1b0060;
        case 0x1b0064u: goto label_1b0064;
        case 0x1b0068u: goto label_1b0068;
        case 0x1b006cu: goto label_1b006c;
        case 0x1b0070u: goto label_1b0070;
        case 0x1b0074u: goto label_1b0074;
        case 0x1b0078u: goto label_1b0078;
        case 0x1b007cu: goto label_1b007c;
        case 0x1b0080u: goto label_1b0080;
        case 0x1b0084u: goto label_1b0084;
        case 0x1b0088u: goto label_1b0088;
        case 0x1b008cu: goto label_1b008c;
        case 0x1b0090u: goto label_1b0090;
        case 0x1b0094u: goto label_1b0094;
        case 0x1b0098u: goto label_1b0098;
        case 0x1b009cu: goto label_1b009c;
        case 0x1b00a0u: goto label_1b00a0;
        case 0x1b00a4u: goto label_1b00a4;
        case 0x1b00a8u: goto label_1b00a8;
        case 0x1b00acu: goto label_1b00ac;
        case 0x1b00b0u: goto label_1b00b0;
        case 0x1b00b4u: goto label_1b00b4;
        case 0x1b00b8u: goto label_1b00b8;
        case 0x1b00bcu: goto label_1b00bc;
        case 0x1b00c0u: goto label_1b00c0;
        case 0x1b00c4u: goto label_1b00c4;
        case 0x1b00c8u: goto label_1b00c8;
        case 0x1b00ccu: goto label_1b00cc;
        case 0x1b00d0u: goto label_1b00d0;
        case 0x1b00d4u: goto label_1b00d4;
        case 0x1b00d8u: goto label_1b00d8;
        case 0x1b00dcu: goto label_1b00dc;
        case 0x1b00e0u: goto label_1b00e0;
        case 0x1b00e4u: goto label_1b00e4;
        case 0x1b00e8u: goto label_1b00e8;
        case 0x1b00ecu: goto label_1b00ec;
        case 0x1b00f0u: goto label_1b00f0;
        case 0x1b00f4u: goto label_1b00f4;
        case 0x1b00f8u: goto label_1b00f8;
        case 0x1b00fcu: goto label_1b00fc;
        case 0x1b0100u: goto label_1b0100;
        case 0x1b0104u: goto label_1b0104;
        case 0x1b0108u: goto label_1b0108;
        case 0x1b010cu: goto label_1b010c;
        case 0x1b0110u: goto label_1b0110;
        case 0x1b0114u: goto label_1b0114;
        case 0x1b0118u: goto label_1b0118;
        case 0x1b011cu: goto label_1b011c;
        case 0x1b0120u: goto label_1b0120;
        case 0x1b0124u: goto label_1b0124;
        case 0x1b0128u: goto label_1b0128;
        case 0x1b012cu: goto label_1b012c;
        case 0x1b0130u: goto label_1b0130;
        case 0x1b0134u: goto label_1b0134;
        case 0x1b0138u: goto label_1b0138;
        case 0x1b013cu: goto label_1b013c;
        case 0x1b0140u: goto label_1b0140;
        case 0x1b0144u: goto label_1b0144;
        case 0x1b0148u: goto label_1b0148;
        default: break;
    }

    ctx->pc = 0x1aff50u;

label_1aff50:
    // 0x1aff50: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1aff54:
    // 0x1aff54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1aff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1aff58:
    // 0x1aff58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1aff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1aff5c:
    // 0x1aff5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1aff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1aff60:
    // 0x1aff60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1aff64:
    // 0x1aff64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1aff68:
    // 0x1aff68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aff6c:
    // 0x1aff6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1aff70:
    // 0x1aff70: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aff74:
    // 0x1aff74: 0xc0a0f58  jal         func_283D60
label_1aff78:
    if (ctx->pc == 0x1AFF78u) {
        ctx->pc = 0x1AFF78u;
            // 0x1aff78: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1AFF7Cu;
        goto label_1aff7c;
    }
    ctx->pc = 0x1AFF74u;
    SET_GPR_U32(ctx, 31, 0x1AFF7Cu);
    ctx->pc = 0x1AFF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF74u;
            // 0x1aff78: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF7Cu; }
        if (ctx->pc != 0x1AFF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF7Cu; }
        if (ctx->pc != 0x1AFF7Cu) { return; }
    }
    ctx->pc = 0x1AFF7Cu;
label_1aff7c:
    // 0x1aff7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1aff7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aff80:
    // 0x1aff80: 0x12600069  beqz        $s3, . + 4 + (0x69 << 2)
label_1aff84:
    if (ctx->pc == 0x1AFF84u) {
        ctx->pc = 0x1AFF88u;
        goto label_1aff88;
    }
    ctx->pc = 0x1AFF80u;
    {
        const bool branch_taken_0x1aff80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff80) {
            ctx->pc = 0x1B0128u;
            goto label_1b0128;
        }
    }
    ctx->pc = 0x1AFF88u;
label_1aff88:
    // 0x1aff88: 0xc064220  jal         func_190880
label_1aff8c:
    if (ctx->pc == 0x1AFF8Cu) {
        ctx->pc = 0x1AFF90u;
        goto label_1aff90;
    }
    ctx->pc = 0x1AFF88u;
    SET_GPR_U32(ctx, 31, 0x1AFF90u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF90u; }
        if (ctx->pc != 0x1AFF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF90u; }
        if (ctx->pc != 0x1AFF90u) { return; }
    }
    ctx->pc = 0x1AFF90u;
label_1aff90:
    // 0x1aff90: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1aff90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1aff94:
    // 0x1aff94: 0xc0bd9a4  jal         func_2F6690
label_1aff98:
    if (ctx->pc == 0x1AFF98u) {
        ctx->pc = 0x1AFF98u;
            // 0x1aff98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF9Cu;
        goto label_1aff9c;
    }
    ctx->pc = 0x1AFF94u;
    SET_GPR_U32(ctx, 31, 0x1AFF9Cu);
    ctx->pc = 0x1AFF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF94u;
            // 0x1aff98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF9Cu; }
        if (ctx->pc != 0x1AFF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF9Cu; }
        if (ctx->pc != 0x1AFF9Cu) { return; }
    }
    ctx->pc = 0x1AFF9Cu;
label_1aff9c:
    // 0x1aff9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aff9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1affa0:
    // 0x1affa0: 0x12000061  beqz        $s0, . + 4 + (0x61 << 2)
label_1affa4:
    if (ctx->pc == 0x1AFFA4u) {
        ctx->pc = 0x1AFFA8u;
        goto label_1affa8;
    }
    ctx->pc = 0x1AFFA0u;
    {
        const bool branch_taken_0x1affa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1affa0) {
            ctx->pc = 0x1B0128u;
            goto label_1b0128;
        }
    }
    ctx->pc = 0x1AFFA8u;
label_1affa8:
    // 0x1affa8: 0x8e790d00  lw          $t9, 0xD00($s3)
    ctx->pc = 0x1affa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3328)));
label_1affac:
    // 0x1affac: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1affacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1affb0:
    // 0x1affb0: 0x320f809  jalr        $t9
label_1affb4:
    if (ctx->pc == 0x1AFFB4u) {
        ctx->pc = 0x1AFFB4u;
            // 0x1affb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFB8u;
        goto label_1affb8;
    }
    ctx->pc = 0x1AFFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AFFB8u);
        ctx->pc = 0x1AFFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFB0u;
            // 0x1affb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AFFB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFB8u; }
            if (ctx->pc != 0x1AFFB8u) { return; }
        }
        }
    }
    ctx->pc = 0x1AFFB8u;
label_1affb8:
    // 0x1affb8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1affb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1affbc:
    // 0x1affbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1affbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1affc0:
    // 0x1affc0: 0xc04a38a  jal         func_128E28
label_1affc4:
    if (ctx->pc == 0x1AFFC4u) {
        ctx->pc = 0x1AFFC4u;
            // 0x1affc4: 0x24a56438  addiu       $a1, $a1, 0x6438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25656));
        ctx->pc = 0x1AFFC8u;
        goto label_1affc8;
    }
    ctx->pc = 0x1AFFC0u;
    SET_GPR_U32(ctx, 31, 0x1AFFC8u);
    ctx->pc = 0x1AFFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFC0u;
            // 0x1affc4: 0x24a56438  addiu       $a1, $a1, 0x6438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFC8u; }
        if (ctx->pc != 0x1AFFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFC8u; }
        if (ctx->pc != 0x1AFFC8u) { return; }
    }
    ctx->pc = 0x1AFFC8u;
label_1affc8:
    // 0x1affc8: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_1affcc:
    if (ctx->pc == 0x1AFFCCu) {
        ctx->pc = 0x1AFFD0u;
        goto label_1affd0;
    }
    ctx->pc = 0x1AFFC8u;
    {
        const bool branch_taken_0x1affc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1affc8) {
            ctx->pc = 0x1B0128u;
            goto label_1b0128;
        }
    }
    ctx->pc = 0x1AFFD0u;
label_1affd0:
    // 0x1affd0: 0x12600055  beqz        $s3, . + 4 + (0x55 << 2)
label_1affd4:
    if (ctx->pc == 0x1AFFD4u) {
        ctx->pc = 0x1AFFD4u;
            // 0x1affd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFD8u;
        goto label_1affd8;
    }
    ctx->pc = 0x1AFFD0u;
    {
        const bool branch_taken_0x1affd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFD0u;
            // 0x1affd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affd0) {
            ctx->pc = 0x1B0128u;
            goto label_1b0128;
        }
    }
    ctx->pc = 0x1AFFD8u;
label_1affd8:
    // 0x1affd8: 0xc06c118  jal         func_1B0460
label_1affdc:
    if (ctx->pc == 0x1AFFDCu) {
        ctx->pc = 0x1AFFE0u;
        goto label_1affe0;
    }
    ctx->pc = 0x1AFFD8u;
    SET_GPR_U32(ctx, 31, 0x1AFFE0u);
    ctx->pc = 0x1B0460u;
    if (runtime->hasFunction(0x1B0460u)) {
        auto targetFn = runtime->lookupFunction(0x1B0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFE0u; }
        if (ctx->pc != 0x1AFFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearAllParts__8CEditMapFv_0x1b0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFE0u; }
        if (ctx->pc != 0x1AFFE0u) { return; }
    }
    ctx->pc = 0x1AFFE0u;
label_1affe0:
    // 0x1affe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1affe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1affe4:
    // 0x1affe4: 0xc0aa444  jal         func_2A9110
label_1affe8:
    if (ctx->pc == 0x1AFFE8u) {
        ctx->pc = 0x1AFFE8u;
            // 0x1affe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFECu;
        goto label_1affec;
    }
    ctx->pc = 0x1AFFE4u;
    SET_GPR_U32(ctx, 31, 0x1AFFECu);
    ctx->pc = 0x1AFFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFE4u;
            // 0x1affe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9110u;
    if (runtime->hasFunction(0x2A9110u)) {
        auto targetFn = runtime->lookupFunction(0x2A9110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFECu; }
        if (ctx->pc != 0x1AFFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadData__8CEditMapFP9CEditData_0x2a9110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFECu; }
        if (ctx->pc != 0x1AFFECu) { return; }
    }
    ctx->pc = 0x1AFFECu;
label_1affec:
    // 0x1affec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1affecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afff0:
    // 0x1afff0: 0xc06c198  jal         func_1B0660
label_1afff4:
    if (ctx->pc == 0x1AFFF4u) {
        ctx->pc = 0x1AFFF4u;
            // 0x1afff4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFF8u;
        goto label_1afff8;
    }
    ctx->pc = 0x1AFFF0u;
    SET_GPR_U32(ctx, 31, 0x1AFFF8u);
    ctx->pc = 0x1AFFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFF0u;
            // 0x1afff4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0660u;
    if (runtime->hasFunction(0x1B0660u)) {
        auto targetFn = runtime->lookupFunction(0x1B0660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFF8u; }
        if (ctx->pc != 0x1AFFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitialPlaceParts__8CEditMapFP9CEditData_0x1b0660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFF8u; }
        if (ctx->pc != 0x1AFFF8u) { return; }
    }
    ctx->pc = 0x1AFFF8u;
label_1afff8:
    // 0x1afff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1afff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1afffc:
    // 0x1afffc: 0xc0bbc2c  jal         func_2EF0B0
label_1b0000:
    if (ctx->pc == 0x1B0000u) {
        ctx->pc = 0x1B0000u;
            // 0x1b0000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0004u;
        goto label_1b0004;
    }
    ctx->pc = 0x1AFFFCu;
    SET_GPR_U32(ctx, 31, 0x1B0004u);
    ctx->pc = 0x1B0000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFFCu;
            // 0x1b0000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF0B0u;
    if (runtime->hasFunction(0x2EF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0004u; }
        if (ctx->pc != 0x1B0004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GroundBalance__8CEditMapFi_0x2ef0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0004u; }
        if (ctx->pc != 0x1B0004u) { return; }
    }
    ctx->pc = 0x1B0004u;
label_1b0004:
    // 0x1b0004: 0xc0bbbb0  jal         func_2EEEC0
label_1b0008:
    if (ctx->pc == 0x1B0008u) {
        ctx->pc = 0x1B0008u;
            // 0x1b0008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B000Cu;
        goto label_1b000c;
    }
    ctx->pc = 0x1B0004u;
    SET_GPR_U32(ctx, 31, 0x1B000Cu);
    ctx->pc = 0x1B0008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0004u;
            // 0x1b0008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEEC0u;
    if (runtime->hasFunction(0x2EEEC0u)) {
        auto targetFn = runtime->lookupFunction(0x2EEEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B000Cu; }
        if (ctx->pc != 0x1B000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateHouse__8CEditMapFv_0x2eeec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B000Cu; }
        if (ctx->pc != 0x1B000Cu) { return; }
    }
    ctx->pc = 0x1B000Cu;
label_1b000c:
    // 0x1b000c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1b000cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1b0010:
    // 0x1b0010: 0x8c228078  lw          $v0, -0x7F88($at)
    ctx->pc = 0x1b0010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934648)));
label_1b0014:
    // 0x1b0014: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1b0018:
    if (ctx->pc == 0x1B0018u) {
        ctx->pc = 0x1B001Cu;
        goto label_1b001c;
    }
    ctx->pc = 0x1B0014u;
    {
        const bool branch_taken_0x1b0014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0014) {
            ctx->pc = 0x1B003Cu;
            goto label_1b003c;
        }
    }
    ctx->pc = 0x1B001Cu;
label_1b001c:
    // 0x1b001c: 0xc0b49b8  jal         func_2D26E0
label_1b0020:
    if (ctx->pc == 0x1B0020u) {
        ctx->pc = 0x1B0020u;
            // 0x1b0020: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->pc = 0x1B0024u;
        goto label_1b0024;
    }
    ctx->pc = 0x1B001Cu;
    SET_GPR_U32(ctx, 31, 0x1B0024u);
    ctx->pc = 0x1B0020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B001Cu;
            // 0x1b0020: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0024u; }
        if (ctx->pc != 0x1B0024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0024u; }
        if (ctx->pc != 0x1B0024u) { return; }
    }
    ctx->pc = 0x1B0024u;
label_1b0024:
    // 0x1b0024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0028:
    // 0x1b0028: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1b002c:
    if (ctx->pc == 0x1B002Cu) {
        ctx->pc = 0x1B0030u;
        goto label_1b0030;
    }
    ctx->pc = 0x1B0028u;
    {
        const bool branch_taken_0x1b0028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0028) {
            ctx->pc = 0x1B003Cu;
            goto label_1b003c;
        }
    }
    ctx->pc = 0x1B0030u;
label_1b0030:
    // 0x1b0030: 0x8f848c58  lw          $a0, -0x73A8($gp)
    ctx->pc = 0x1b0030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1b0034:
    // 0x1b0034: 0xc0c5a6c  jal         func_3169B0
label_1b0038:
    if (ctx->pc == 0x1B0038u) {
        ctx->pc = 0x1B0038u;
            // 0x1b0038: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B003Cu;
        goto label_1b003c;
    }
    ctx->pc = 0x1B0034u;
    SET_GPR_U32(ctx, 31, 0x1B003Cu);
    ctx->pc = 0x1B0038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0034u;
            // 0x1b0038: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3169B0u;
    if (runtime->hasFunction(0x3169B0u)) {
        auto targetFn = runtime->lookupFunction(0x3169B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B003Cu; }
        if (ctx->pc != 0x1B003Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeEditMap__FiP8CEditMap_0x3169b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B003Cu; }
        if (ctx->pc != 0x1B003Cu) { return; }
    }
    ctx->pc = 0x1B003Cu;
label_1b003c:
    // 0x1b003c: 0xc064220  jal         func_190880
label_1b0040:
    if (ctx->pc == 0x1B0040u) {
        ctx->pc = 0x1B0044u;
        goto label_1b0044;
    }
    ctx->pc = 0x1B003Cu;
    SET_GPR_U32(ctx, 31, 0x1B0044u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0044u; }
        if (ctx->pc != 0x1B0044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0044u; }
        if (ctx->pc != 0x1B0044u) { return; }
    }
    ctx->pc = 0x1B0044u;
label_1b0044:
    // 0x1b0044: 0x8f838c58  lw          $v1, -0x73A8($gp)
    ctx->pc = 0x1b0044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1b0048:
    // 0x1b0048: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_1b004c:
    if (ctx->pc == 0x1B004Cu) {
        ctx->pc = 0x1B004Cu;
            // 0x1b004c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0050u;
        goto label_1b0050;
    }
    ctx->pc = 0x1B0048u;
    {
        const bool branch_taken_0x1b0048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0048u;
            // 0x1b004c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0048) {
            ctx->pc = 0x1B0128u;
            goto label_1b0128;
        }
    }
    ctx->pc = 0x1B0050u;
label_1b0050:
    // 0x1b0050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0054:
    // 0x1b0054: 0xc0bd920  jal         func_2F6480
label_1b0058:
    if (ctx->pc == 0x1B0058u) {
        ctx->pc = 0x1B0058u;
            // 0x1b0058: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->pc = 0x1B005Cu;
        goto label_1b005c;
    }
    ctx->pc = 0x1B0054u;
    SET_GPR_U32(ctx, 31, 0x1B005Cu);
    ctx->pc = 0x1B0058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0054u;
            // 0x1b0058: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B005Cu; }
        if (ctx->pc != 0x1B005Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B005Cu; }
        if (ctx->pc != 0x1B005Cu) { return; }
    }
    ctx->pc = 0x1B005Cu;
label_1b005c:
    // 0x1b005c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1b0060:
    if (ctx->pc == 0x1B0060u) {
        ctx->pc = 0x1B0060u;
            // 0x1b0060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0064u;
        goto label_1b0064;
    }
    ctx->pc = 0x1B005Cu;
    {
        const bool branch_taken_0x1b005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B005Cu;
            // 0x1b0060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b005c) {
            ctx->pc = 0x1B0128u;
            goto label_1b0128;
        }
    }
    ctx->pc = 0x1B0064u;
label_1b0064:
    // 0x1b0064: 0xc0bd920  jal         func_2F6480
label_1b0068:
    if (ctx->pc == 0x1B0068u) {
        ctx->pc = 0x1B0068u;
            // 0x1b0068: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->pc = 0x1B006Cu;
        goto label_1b006c;
    }
    ctx->pc = 0x1B0064u;
    SET_GPR_U32(ctx, 31, 0x1B006Cu);
    ctx->pc = 0x1B0068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0064u;
            // 0x1b0068: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B006Cu; }
        if (ctx->pc != 0x1B006Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B006Cu; }
        if (ctx->pc != 0x1B006Cu) { return; }
    }
    ctx->pc = 0x1B006Cu;
label_1b006c:
    // 0x1b006c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_1b0070:
    if (ctx->pc == 0x1B0070u) {
        ctx->pc = 0x1B0070u;
            // 0x1b0070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0074u;
        goto label_1b0074;
    }
    ctx->pc = 0x1B006Cu;
    {
        const bool branch_taken_0x1b006c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B006Cu;
            // 0x1b0070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b006c) {
            ctx->pc = 0x1B0128u;
            goto label_1b0128;
        }
    }
    ctx->pc = 0x1B0074u;
label_1b0074:
    // 0x1b0074: 0xc06c2d4  jal         func_1B0B50
label_1b0078:
    if (ctx->pc == 0x1B0078u) {
        ctx->pc = 0x1B0078u;
            // 0x1b0078: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x1B007Cu;
        goto label_1b007c;
    }
    ctx->pc = 0x1B0074u;
    SET_GPR_U32(ctx, 31, 0x1B007Cu);
    ctx->pc = 0x1B0078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0074u;
            // 0x1b0078: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B007Cu; }
        if (ctx->pc != 0x1B007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B007Cu; }
        if (ctx->pc != 0x1B007Cu) { return; }
    }
    ctx->pc = 0x1B007Cu;
label_1b007c:
    // 0x1b007c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b007cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0080:
    // 0x1b0080: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1b0080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b0084:
    // 0x1b0084: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1b0088:
    // 0x1b0088: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1b0088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b008c:
    // 0x1b008c: 0x24426980  addiu       $v0, $v0, 0x6980
    ctx->pc = 0x1b008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
label_1b0090:
    // 0x1b0090: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0094:
    // 0x1b0094: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1b0094u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b0098:
    // 0x1b0098: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b0098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b009c:
    // 0x1b009c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x1b009cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1b00a0:
    // 0x1b00a0: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1b00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1b00a4:
    // 0x1b00a4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1b00a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_1b00a8:
    // 0x1b00a8: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x1b00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
label_1b00ac:
    // 0x1b00ac: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x1b00acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_1b00b0:
    // 0x1b00b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b00b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b00b4:
    // 0x1b00b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1b00b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1b00b8:
    // 0x1b00b8: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1b00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_1b00bc:
    // 0x1b00bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b00bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b00c0:
    // 0x1b00c0: 0x24550070  addiu       $s5, $v0, 0x70
    ctx->pc = 0x1b00c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1b00c4:
    // 0x1b00c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b00c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b00c8:
    // 0x1b00c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b00c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b00cc:
    // 0x1b00cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b00ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b00d0:
    // 0x1b00d0: 0xc06ca94  jal         func_1B2A50
label_1b00d4:
    if (ctx->pc == 0x1B00D4u) {
        ctx->pc = 0x1B00D4u;
            // 0x1b00d4: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1B00D8u;
        goto label_1b00d8;
    }
    ctx->pc = 0x1B00D0u;
    SET_GPR_U32(ctx, 31, 0x1B00D8u);
    ctx->pc = 0x1B00D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00D0u;
            // 0x1b00d4: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A50u;
    if (runtime->hasFunction(0x1B2A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B2A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00D8u; }
        if (ctx->pc != 0x1B00D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFO_0x1b2a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00D8u; }
        if (ctx->pc != 0x1B00D8u) { return; }
    }
    ctx->pc = 0x1B00D8u;
label_1b00d8:
    // 0x1b00d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b00dc:
    if (ctx->pc == 0x1B00DCu) {
        ctx->pc = 0x1B00DCu;
            // 0x1b00dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B00E0u;
        goto label_1b00e0;
    }
    ctx->pc = 0x1B00D8u;
    {
        const bool branch_taken_0x1b00d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00D8u;
            // 0x1b00dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00d8) {
            ctx->pc = 0x1B0108u;
            goto label_1b0108;
        }
    }
    ctx->pc = 0x1B00E0u;
label_1b00e0:
    // 0x1b00e0: 0xc06c528  jal         func_1B14A0
label_1b00e4:
    if (ctx->pc == 0x1B00E4u) {
        ctx->pc = 0x1B00E4u;
            // 0x1b00e4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x1B00E8u;
        goto label_1b00e8;
    }
    ctx->pc = 0x1B00E0u;
    SET_GPR_U32(ctx, 31, 0x1B00E8u);
    ctx->pc = 0x1B00E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00E0u;
            // 0x1b00e4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14A0u;
    if (runtime->hasFunction(0x1B14A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00E8u; }
        if (ctx->pc != 0x1B00E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildEditParts__8CEditMapFi_0x1b14a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B00E8u; }
        if (ctx->pc != 0x1B00E8u) { return; }
    }
    ctx->pc = 0x1B00E8u;
label_1b00e8:
    // 0x1b00e8: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_1b00ec:
    if (ctx->pc == 0x1B00ECu) {
        ctx->pc = 0x1B00ECu;
            // 0x1b00ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B00F0u;
        goto label_1b00f0;
    }
    ctx->pc = 0x1B00E8u;
    {
        const bool branch_taken_0x1b00e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B00ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00E8u;
            // 0x1b00ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00e8) {
            ctx->pc = 0x1B0108u;
            goto label_1b0108;
        }
    }
    ctx->pc = 0x1B00F0u;
label_1b00f0:
    // 0x1b00f0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1b00f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b00f4:
    // 0x1b00f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b00f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b00f8:
    // 0x1b00f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1b00f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b00fc:
    // 0x1b00fc: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x1b00fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b0100:
    // 0x1b0100: 0xc06c800  jal         func_1B2000
label_1b0104:
    if (ctx->pc == 0x1B0104u) {
        ctx->pc = 0x1B0104u;
            // 0x1b0104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0108u;
        goto label_1b0108;
    }
    ctx->pc = 0x1B0100u;
    SET_GPR_U32(ctx, 31, 0x1B0108u);
    ctx->pc = 0x1B0104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0100u;
            // 0x1b0104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2000u;
    if (runtime->hasFunction(0x1B2000u)) {
        auto targetFn = runtime->lookupFunction(0x1B2000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0108u; }
        if (ctx->pc != 0x1B0108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__8CEditMapFiP13EP_PLACE_INFOPfPfPi_0x1b2000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0108u; }
        if (ctx->pc != 0x1B0108u) { return; }
    }
    ctx->pc = 0x1B0108u;
label_1b0108:
    // 0x1b0108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b010c:
    // 0x1b010c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1b010cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b0110:
    // 0x1b0110: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1b0114:
    if (ctx->pc == 0x1B0114u) {
        ctx->pc = 0x1B0114u;
            // 0x1b0114: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x1B0118u;
        goto label_1b0118;
    }
    ctx->pc = 0x1B0110u;
    {
        const bool branch_taken_0x1b0110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0110u;
            // 0x1b0114: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0110) {
            ctx->pc = 0x1B00B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b00b8;
        }
    }
    ctx->pc = 0x1B0118u;
label_1b0118:
    // 0x1b0118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b011c:
    // 0x1b011c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1b011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1b0120:
    // 0x1b0120: 0xc0bd8f4  jal         func_2F63D0
label_1b0124:
    if (ctx->pc == 0x1B0124u) {
        ctx->pc = 0x1B0124u;
            // 0x1b0124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B0128u;
        goto label_1b0128;
    }
    ctx->pc = 0x1B0120u;
    SET_GPR_U32(ctx, 31, 0x1B0128u);
    ctx->pc = 0x1B0124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0120u;
            // 0x1b0124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0128u; }
        if (ctx->pc != 0x1B0128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0128u; }
        if (ctx->pc != 0x1B0128u) { return; }
    }
    ctx->pc = 0x1B0128u;
label_1b0128:
    // 0x1b0128: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b0128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b012c:
    // 0x1b012c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b012cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0130:
    // 0x1b0130: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0134:
    // 0x1b0134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0138:
    // 0x1b0138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b013c:
    // 0x1b013c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b013cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0140:
    // 0x1b0140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0144:
    // 0x1b0144: 0x3e00008  jr          $ra
label_1b0148:
    if (ctx->pc == 0x1B0148u) {
        ctx->pc = 0x1B0148u;
            // 0x1b0148: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1B014Cu;
        goto label_fallthrough_0x1b0144;
    }
    ctx->pc = 0x1B0144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0144u;
            // 0x1b0148: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b0144:
    ctx->pc = 0x1B014Cu;
}
