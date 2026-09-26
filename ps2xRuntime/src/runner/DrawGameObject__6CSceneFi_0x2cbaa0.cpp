#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawGameObject__6CSceneFi
// Address: 0x2cbaa0 - 0x2cbcfc
void DrawGameObject__6CSceneFi_0x2cbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawGameObject__6CSceneFi_0x2cbaa0");
#endif

    switch (ctx->pc) {
        case 0x2cbaa0u: goto label_2cbaa0;
        case 0x2cbaa4u: goto label_2cbaa4;
        case 0x2cbaa8u: goto label_2cbaa8;
        case 0x2cbaacu: goto label_2cbaac;
        case 0x2cbab0u: goto label_2cbab0;
        case 0x2cbab4u: goto label_2cbab4;
        case 0x2cbab8u: goto label_2cbab8;
        case 0x2cbabcu: goto label_2cbabc;
        case 0x2cbac0u: goto label_2cbac0;
        case 0x2cbac4u: goto label_2cbac4;
        case 0x2cbac8u: goto label_2cbac8;
        case 0x2cbaccu: goto label_2cbacc;
        case 0x2cbad0u: goto label_2cbad0;
        case 0x2cbad4u: goto label_2cbad4;
        case 0x2cbad8u: goto label_2cbad8;
        case 0x2cbadcu: goto label_2cbadc;
        case 0x2cbae0u: goto label_2cbae0;
        case 0x2cbae4u: goto label_2cbae4;
        case 0x2cbae8u: goto label_2cbae8;
        case 0x2cbaecu: goto label_2cbaec;
        case 0x2cbaf0u: goto label_2cbaf0;
        case 0x2cbaf4u: goto label_2cbaf4;
        case 0x2cbaf8u: goto label_2cbaf8;
        case 0x2cbafcu: goto label_2cbafc;
        case 0x2cbb00u: goto label_2cbb00;
        case 0x2cbb04u: goto label_2cbb04;
        case 0x2cbb08u: goto label_2cbb08;
        case 0x2cbb0cu: goto label_2cbb0c;
        case 0x2cbb10u: goto label_2cbb10;
        case 0x2cbb14u: goto label_2cbb14;
        case 0x2cbb18u: goto label_2cbb18;
        case 0x2cbb1cu: goto label_2cbb1c;
        case 0x2cbb20u: goto label_2cbb20;
        case 0x2cbb24u: goto label_2cbb24;
        case 0x2cbb28u: goto label_2cbb28;
        case 0x2cbb2cu: goto label_2cbb2c;
        case 0x2cbb30u: goto label_2cbb30;
        case 0x2cbb34u: goto label_2cbb34;
        case 0x2cbb38u: goto label_2cbb38;
        case 0x2cbb3cu: goto label_2cbb3c;
        case 0x2cbb40u: goto label_2cbb40;
        case 0x2cbb44u: goto label_2cbb44;
        case 0x2cbb48u: goto label_2cbb48;
        case 0x2cbb4cu: goto label_2cbb4c;
        case 0x2cbb50u: goto label_2cbb50;
        case 0x2cbb54u: goto label_2cbb54;
        case 0x2cbb58u: goto label_2cbb58;
        case 0x2cbb5cu: goto label_2cbb5c;
        case 0x2cbb60u: goto label_2cbb60;
        case 0x2cbb64u: goto label_2cbb64;
        case 0x2cbb68u: goto label_2cbb68;
        case 0x2cbb6cu: goto label_2cbb6c;
        case 0x2cbb70u: goto label_2cbb70;
        case 0x2cbb74u: goto label_2cbb74;
        case 0x2cbb78u: goto label_2cbb78;
        case 0x2cbb7cu: goto label_2cbb7c;
        case 0x2cbb80u: goto label_2cbb80;
        case 0x2cbb84u: goto label_2cbb84;
        case 0x2cbb88u: goto label_2cbb88;
        case 0x2cbb8cu: goto label_2cbb8c;
        case 0x2cbb90u: goto label_2cbb90;
        case 0x2cbb94u: goto label_2cbb94;
        case 0x2cbb98u: goto label_2cbb98;
        case 0x2cbb9cu: goto label_2cbb9c;
        case 0x2cbba0u: goto label_2cbba0;
        case 0x2cbba4u: goto label_2cbba4;
        case 0x2cbba8u: goto label_2cbba8;
        case 0x2cbbacu: goto label_2cbbac;
        case 0x2cbbb0u: goto label_2cbbb0;
        case 0x2cbbb4u: goto label_2cbbb4;
        case 0x2cbbb8u: goto label_2cbbb8;
        case 0x2cbbbcu: goto label_2cbbbc;
        case 0x2cbbc0u: goto label_2cbbc0;
        case 0x2cbbc4u: goto label_2cbbc4;
        case 0x2cbbc8u: goto label_2cbbc8;
        case 0x2cbbccu: goto label_2cbbcc;
        case 0x2cbbd0u: goto label_2cbbd0;
        case 0x2cbbd4u: goto label_2cbbd4;
        case 0x2cbbd8u: goto label_2cbbd8;
        case 0x2cbbdcu: goto label_2cbbdc;
        case 0x2cbbe0u: goto label_2cbbe0;
        case 0x2cbbe4u: goto label_2cbbe4;
        case 0x2cbbe8u: goto label_2cbbe8;
        case 0x2cbbecu: goto label_2cbbec;
        case 0x2cbbf0u: goto label_2cbbf0;
        case 0x2cbbf4u: goto label_2cbbf4;
        case 0x2cbbf8u: goto label_2cbbf8;
        case 0x2cbbfcu: goto label_2cbbfc;
        case 0x2cbc00u: goto label_2cbc00;
        case 0x2cbc04u: goto label_2cbc04;
        case 0x2cbc08u: goto label_2cbc08;
        case 0x2cbc0cu: goto label_2cbc0c;
        case 0x2cbc10u: goto label_2cbc10;
        case 0x2cbc14u: goto label_2cbc14;
        case 0x2cbc18u: goto label_2cbc18;
        case 0x2cbc1cu: goto label_2cbc1c;
        case 0x2cbc20u: goto label_2cbc20;
        case 0x2cbc24u: goto label_2cbc24;
        case 0x2cbc28u: goto label_2cbc28;
        case 0x2cbc2cu: goto label_2cbc2c;
        case 0x2cbc30u: goto label_2cbc30;
        case 0x2cbc34u: goto label_2cbc34;
        case 0x2cbc38u: goto label_2cbc38;
        case 0x2cbc3cu: goto label_2cbc3c;
        case 0x2cbc40u: goto label_2cbc40;
        case 0x2cbc44u: goto label_2cbc44;
        case 0x2cbc48u: goto label_2cbc48;
        case 0x2cbc4cu: goto label_2cbc4c;
        case 0x2cbc50u: goto label_2cbc50;
        case 0x2cbc54u: goto label_2cbc54;
        case 0x2cbc58u: goto label_2cbc58;
        case 0x2cbc5cu: goto label_2cbc5c;
        case 0x2cbc60u: goto label_2cbc60;
        case 0x2cbc64u: goto label_2cbc64;
        case 0x2cbc68u: goto label_2cbc68;
        case 0x2cbc6cu: goto label_2cbc6c;
        case 0x2cbc70u: goto label_2cbc70;
        case 0x2cbc74u: goto label_2cbc74;
        case 0x2cbc78u: goto label_2cbc78;
        case 0x2cbc7cu: goto label_2cbc7c;
        case 0x2cbc80u: goto label_2cbc80;
        case 0x2cbc84u: goto label_2cbc84;
        case 0x2cbc88u: goto label_2cbc88;
        case 0x2cbc8cu: goto label_2cbc8c;
        case 0x2cbc90u: goto label_2cbc90;
        case 0x2cbc94u: goto label_2cbc94;
        case 0x2cbc98u: goto label_2cbc98;
        case 0x2cbc9cu: goto label_2cbc9c;
        case 0x2cbca0u: goto label_2cbca0;
        case 0x2cbca4u: goto label_2cbca4;
        case 0x2cbca8u: goto label_2cbca8;
        case 0x2cbcacu: goto label_2cbcac;
        case 0x2cbcb0u: goto label_2cbcb0;
        case 0x2cbcb4u: goto label_2cbcb4;
        case 0x2cbcb8u: goto label_2cbcb8;
        case 0x2cbcbcu: goto label_2cbcbc;
        case 0x2cbcc0u: goto label_2cbcc0;
        case 0x2cbcc4u: goto label_2cbcc4;
        case 0x2cbcc8u: goto label_2cbcc8;
        case 0x2cbcccu: goto label_2cbccc;
        case 0x2cbcd0u: goto label_2cbcd0;
        case 0x2cbcd4u: goto label_2cbcd4;
        case 0x2cbcd8u: goto label_2cbcd8;
        case 0x2cbcdcu: goto label_2cbcdc;
        case 0x2cbce0u: goto label_2cbce0;
        case 0x2cbce4u: goto label_2cbce4;
        case 0x2cbce8u: goto label_2cbce8;
        case 0x2cbcecu: goto label_2cbcec;
        case 0x2cbcf0u: goto label_2cbcf0;
        case 0x2cbcf4u: goto label_2cbcf4;
        case 0x2cbcf8u: goto label_2cbcf8;
        default: break;
    }

    ctx->pc = 0x2cbaa0u;

label_2cbaa0:
    // 0x2cbaa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2cbaa4:
    // 0x2cbaa4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2cbaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2cbaa8:
    // 0x2cbaa8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2cbaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2cbaac:
    // 0x2cbaac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cbaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2cbab0:
    // 0x2cbab0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2cbab0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cbab4:
    // 0x2cbab4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cbab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2cbab8:
    // 0x2cbab8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cbab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2cbabc:
    // 0x2cbabc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cbabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cbac0:
    // 0x2cbac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cbac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cbac4:
    // 0x2cbac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cbac8:
    // 0x2cbac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cbacc:
    // 0x2cbacc: 0x8c832e5c  lw          $v1, 0x2E5C($a0)
    ctx->pc = 0x2cbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_2cbad0:
    // 0x2cbad0: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
label_2cbad4:
    if (ctx->pc == 0x2CBAD4u) {
        ctx->pc = 0x2CBAD4u;
            // 0x2cbad4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAD8u;
        goto label_2cbad8;
    }
    ctx->pc = 0x2CBAD0u;
    {
        const bool branch_taken_0x2cbad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBAD0u;
            // 0x2cbad4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbad0) {
            ctx->pc = 0x2CBCD0u;
            goto label_2cbcd0;
        }
    }
    ctx->pc = 0x2CBAD8u;
label_2cbad8:
    // 0x2cbad8: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x2cbad8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
label_2cbadc:
    // 0x2cbadc: 0x26105390  addiu       $s0, $s0, 0x5390
    ctx->pc = 0x2cbadcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
label_2cbae0:
    // 0x2cbae0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cbae4:
    // 0x2cbae4: 0x460007a  bltz        $v1, . + 4 + (0x7A << 2)
label_2cbae8:
    if (ctx->pc == 0x2CBAE8u) {
        ctx->pc = 0x2CBAECu;
        goto label_2cbaec;
    }
    ctx->pc = 0x2CBAE4u;
    {
        const bool branch_taken_0x2cbae4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2cbae4) {
            ctx->pc = 0x2CBCD0u;
            goto label_2cbcd0;
        }
    }
    ctx->pc = 0x2CBAECu;
label_2cbaec:
    // 0x2cbaec: 0x14770076  bne         $v1, $s7, . + 4 + (0x76 << 2)
label_2cbaf0:
    if (ctx->pc == 0x2CBAF0u) {
        ctx->pc = 0x2CBAF4u;
        goto label_2cbaf4;
    }
    ctx->pc = 0x2CBAECu;
    {
        const bool branch_taken_0x2cbaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x2cbaec) {
            ctx->pc = 0x2CBCC8u;
            goto label_2cbcc8;
        }
    }
    ctx->pc = 0x2CBAF4u;
label_2cbaf4:
    // 0x2cbaf4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2cbaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cbaf8:
    // 0x2cbaf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cbafc:
    // 0x2cbafc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cbafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb00:
    // 0x2cbb00: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_2cbb04:
    if (ctx->pc == 0x2CBB04u) {
        ctx->pc = 0x2CBB04u;
            // 0x2cbb04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB08u;
        goto label_2cbb08;
    }
    ctx->pc = 0x2CBB00u;
    {
        const bool branch_taken_0x2cbb00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB00u;
            // 0x2cbb04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb00) {
            ctx->pc = 0x2CBB70u;
            goto label_2cbb70;
        }
    }
    ctx->pc = 0x2CBB08u;
label_2cbb08:
    // 0x2cbb08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbb0c:
    // 0x2cbb0c: 0x10850018  beq         $a0, $a1, . + 4 + (0x18 << 2)
label_2cbb10:
    if (ctx->pc == 0x2CBB10u) {
        ctx->pc = 0x2CBB10u;
            // 0x2cbb10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2CBB14u;
        goto label_2cbb14;
    }
    ctx->pc = 0x2CBB0Cu;
    {
        const bool branch_taken_0x2cbb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CBB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB0Cu;
            // 0x2cbb10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb0c) {
            ctx->pc = 0x2CBB70u;
            goto label_2cbb70;
        }
    }
    ctx->pc = 0x2CBB14u;
label_2cbb14:
    // 0x2cbb14: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2cbb18:
    if (ctx->pc == 0x2CBB18u) {
        ctx->pc = 0x2CBB1Cu;
        goto label_2cbb1c;
    }
    ctx->pc = 0x2CBB14u;
    {
        const bool branch_taken_0x2cbb14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbb14) {
            ctx->pc = 0x2CBB24u;
            goto label_2cbb24;
        }
    }
    ctx->pc = 0x2CBB1Cu;
label_2cbb1c:
    // 0x2cbb1c: 0x10000026  b           . + 4 + (0x26 << 2)
label_2cbb20:
    if (ctx->pc == 0x2CBB20u) {
        ctx->pc = 0x2CBB24u;
        goto label_2cbb24;
    }
    ctx->pc = 0x2CBB1Cu;
    {
        const bool branch_taken_0x2cbb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb1c) {
            ctx->pc = 0x2CBBB8u;
            goto label_2cbbb8;
        }
    }
    ctx->pc = 0x2CBB24u;
label_2cbb24:
    // 0x2cbb24: 0x0  nop
    ctx->pc = 0x2cbb24u;
    // NOP
label_2cbb28:
    // 0x2cbb28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cbb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb2c:
    // 0x2cbb2c: 0xc0a11a4  jal         func_284690
label_2cbb30:
    if (ctx->pc == 0x2CBB30u) {
        ctx->pc = 0x2CBB30u;
            // 0x2cbb30: 0x2406007a  addiu       $a2, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->pc = 0x2CBB34u;
        goto label_2cbb34;
    }
    ctx->pc = 0x2CBB2Cu;
    SET_GPR_U32(ctx, 31, 0x2CBB34u);
    ctx->pc = 0x2CBB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB2Cu;
            // 0x2cbb30: 0x2406007a  addiu       $a2, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB34u; }
        if (ctx->pc != 0x2CBB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB34u; }
        if (ctx->pc != 0x2CBB34u) { return; }
    }
    ctx->pc = 0x2CBB34u;
label_2cbb34:
    // 0x2cbb34: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2cbb38:
    if (ctx->pc == 0x2CBB38u) {
        ctx->pc = 0x2CBB38u;
            // 0x2cbb38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB3Cu;
        goto label_2cbb3c;
    }
    ctx->pc = 0x2CBB34u;
    {
        const bool branch_taken_0x2cbb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB34u;
            // 0x2cbb38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb34) {
            ctx->pc = 0x2CBBB8u;
            goto label_2cbbb8;
        }
    }
    ctx->pc = 0x2CBB3Cu;
label_2cbb3c:
    // 0x2cbb3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbb40:
    // 0x2cbb40: 0xc0a11a4  jal         func_284690
label_2cbb44:
    if (ctx->pc == 0x2CBB44u) {
        ctx->pc = 0x2CBB44u;
            // 0x2cbb44: 0x2406007b  addiu       $a2, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x2CBB48u;
        goto label_2cbb48;
    }
    ctx->pc = 0x2CBB40u;
    SET_GPR_U32(ctx, 31, 0x2CBB48u);
    ctx->pc = 0x2CBB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB40u;
            // 0x2cbb44: 0x2406007b  addiu       $a2, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB48u; }
        if (ctx->pc != 0x2CBB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB48u; }
        if (ctx->pc != 0x2CBB48u) { return; }
    }
    ctx->pc = 0x2CBB48u;
label_2cbb48:
    // 0x2cbb48: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2cbb4c:
    if (ctx->pc == 0x2CBB4Cu) {
        ctx->pc = 0x2CBB4Cu;
            // 0x2cbb4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB50u;
        goto label_2cbb50;
    }
    ctx->pc = 0x2CBB48u;
    {
        const bool branch_taken_0x2cbb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB48u;
            // 0x2cbb4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb48) {
            ctx->pc = 0x2CBBB8u;
            goto label_2cbbb8;
        }
    }
    ctx->pc = 0x2CBB50u;
label_2cbb50:
    // 0x2cbb50: 0xc0a0ed8  jal         func_283B60
label_2cbb54:
    if (ctx->pc == 0x2CBB54u) {
        ctx->pc = 0x2CBB54u;
            // 0x2cbb54: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->pc = 0x2CBB58u;
        goto label_2cbb58;
    }
    ctx->pc = 0x2CBB50u;
    SET_GPR_U32(ctx, 31, 0x2CBB58u);
    ctx->pc = 0x2CBB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB50u;
            // 0x2cbb54: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB58u; }
        if (ctx->pc != 0x2CBB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB58u; }
        if (ctx->pc != 0x2CBB58u) { return; }
    }
    ctx->pc = 0x2CBB58u;
label_2cbb58:
    // 0x2cbb58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cbb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb5c:
    // 0x2cbb5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cbb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb60:
    // 0x2cbb60: 0xc0a0ed8  jal         func_283B60
label_2cbb64:
    if (ctx->pc == 0x2CBB64u) {
        ctx->pc = 0x2CBB64u;
            // 0x2cbb64: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->pc = 0x2CBB68u;
        goto label_2cbb68;
    }
    ctx->pc = 0x2CBB60u;
    SET_GPR_U32(ctx, 31, 0x2CBB68u);
    ctx->pc = 0x2CBB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB60u;
            // 0x2cbb64: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB68u; }
        if (ctx->pc != 0x2CBB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB68u; }
        if (ctx->pc != 0x2CBB68u) { return; }
    }
    ctx->pc = 0x2CBB68u;
label_2cbb68:
    // 0x2cbb68: 0x10000013  b           . + 4 + (0x13 << 2)
label_2cbb6c:
    if (ctx->pc == 0x2CBB6Cu) {
        ctx->pc = 0x2CBB6Cu;
            // 0x2cbb6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB70u;
        goto label_2cbb70;
    }
    ctx->pc = 0x2CBB68u;
    {
        const bool branch_taken_0x2cbb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB68u;
            // 0x2cbb6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb68) {
            ctx->pc = 0x2CBBB8u;
            goto label_2cbbb8;
        }
    }
    ctx->pc = 0x2CBB70u;
label_2cbb70:
    // 0x2cbb70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cbb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb74:
    // 0x2cbb74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbb78:
    // 0x2cbb78: 0xc0a11a4  jal         func_284690
label_2cbb7c:
    if (ctx->pc == 0x2CBB7Cu) {
        ctx->pc = 0x2CBB7Cu;
            // 0x2cbb7c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x2CBB80u;
        goto label_2cbb80;
    }
    ctx->pc = 0x2CBB78u;
    SET_GPR_U32(ctx, 31, 0x2CBB80u);
    ctx->pc = 0x2CBB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB78u;
            // 0x2cbb7c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB80u; }
        if (ctx->pc != 0x2CBB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB80u; }
        if (ctx->pc != 0x2CBB80u) { return; }
    }
    ctx->pc = 0x2CBB80u;
label_2cbb80:
    // 0x2cbb80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2cbb84:
    if (ctx->pc == 0x2CBB84u) {
        ctx->pc = 0x2CBB84u;
            // 0x2cbb84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB88u;
        goto label_2cbb88;
    }
    ctx->pc = 0x2CBB80u;
    {
        const bool branch_taken_0x2cbb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB80u;
            // 0x2cbb84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb80) {
            ctx->pc = 0x2CBBB8u;
            goto label_2cbbb8;
        }
    }
    ctx->pc = 0x2CBB88u;
label_2cbb88:
    // 0x2cbb88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbb8c:
    // 0x2cbb8c: 0xc0a11a4  jal         func_284690
label_2cbb90:
    if (ctx->pc == 0x2CBB90u) {
        ctx->pc = 0x2CBB90u;
            // 0x2cbb90: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->pc = 0x2CBB94u;
        goto label_2cbb94;
    }
    ctx->pc = 0x2CBB8Cu;
    SET_GPR_U32(ctx, 31, 0x2CBB94u);
    ctx->pc = 0x2CBB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB8Cu;
            // 0x2cbb90: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB94u; }
        if (ctx->pc != 0x2CBB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBB94u; }
        if (ctx->pc != 0x2CBB94u) { return; }
    }
    ctx->pc = 0x2CBB94u;
label_2cbb94:
    // 0x2cbb94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cbb98:
    if (ctx->pc == 0x2CBB98u) {
        ctx->pc = 0x2CBB98u;
            // 0x2cbb98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB9Cu;
        goto label_2cbb9c;
    }
    ctx->pc = 0x2CBB94u;
    {
        const bool branch_taken_0x2cbb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB94u;
            // 0x2cbb98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb94) {
            ctx->pc = 0x2CBBB8u;
            goto label_2cbbb8;
        }
    }
    ctx->pc = 0x2CBB9Cu;
label_2cbb9c:
    // 0x2cbb9c: 0xc0a0ed8  jal         func_283B60
label_2cbba0:
    if (ctx->pc == 0x2CBBA0u) {
        ctx->pc = 0x2CBBA0u;
            // 0x2cbba0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x2CBBA4u;
        goto label_2cbba4;
    }
    ctx->pc = 0x2CBB9Cu;
    SET_GPR_U32(ctx, 31, 0x2CBBA4u);
    ctx->pc = 0x2CBBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBB9Cu;
            // 0x2cbba0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBBA4u; }
        if (ctx->pc != 0x2CBBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBBA4u; }
        if (ctx->pc != 0x2CBBA4u) { return; }
    }
    ctx->pc = 0x2CBBA4u;
label_2cbba4:
    // 0x2cbba4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cbba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbba8:
    // 0x2cbba8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cbba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cbbac:
    // 0x2cbbac: 0xc0a0ed8  jal         func_283B60
label_2cbbb0:
    if (ctx->pc == 0x2CBBB0u) {
        ctx->pc = 0x2CBBB0u;
            // 0x2cbbb0: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->pc = 0x2CBBB4u;
        goto label_2cbbb4;
    }
    ctx->pc = 0x2CBBACu;
    SET_GPR_U32(ctx, 31, 0x2CBBB4u);
    ctx->pc = 0x2CBBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBACu;
            // 0x2cbbb0: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBBB4u; }
        if (ctx->pc != 0x2CBBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBBB4u; }
        if (ctx->pc != 0x2CBBB4u) { return; }
    }
    ctx->pc = 0x2CBBB4u;
label_2cbbb4:
    // 0x2cbbb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cbbb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbbb8:
    // 0x2cbbb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cbbb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbbbc:
    // 0x2cbbbc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2cbbc0:
    if (ctx->pc == 0x2CBBC0u) {
        ctx->pc = 0x2CBBC0u;
            // 0x2cbbc0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBC4u;
        goto label_2cbbc4;
    }
    ctx->pc = 0x2CBBBCu;
    {
        const bool branch_taken_0x2cbbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBBCu;
            // 0x2cbbc0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbbc) {
            ctx->pc = 0x2CBCB8u;
            goto label_2cbcb8;
        }
    }
    ctx->pc = 0x2CBBC4u;
label_2cbbc4:
    // 0x2cbbc4: 0x0  nop
    ctx->pc = 0x2cbbc4u;
    // NOP
label_2cbbc8:
    // 0x2cbbc8: 0x214a821  addu        $s5, $s0, $s4
    ctx->pc = 0x2cbbc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2cbbcc:
    // 0x2cbbcc: 0x7aa70010  lq          $a3, 0x10($s5)
    ctx->pc = 0x2cbbccu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_2cbbd0:
    // 0x2cbbd0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2cbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cbbd4:
    // 0x2cbbd4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2cbbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2cbbd8:
    // 0x2cbbd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2cbbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2cbbdc:
    // 0x2cbbdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbbe0:
    // 0x2cbbe0: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x2cbbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
label_2cbbe4:
    // 0x2cbbe4: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x2cbbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
label_2cbbe8:
    // 0x2cbbe8: 0x7aa50010  lq          $a1, 0x10($s5)
    ctx->pc = 0x2cbbe8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_2cbbec:
    // 0x2cbbec: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2cbbecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2cbbf0:
    // 0x2cbbf0: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x2cbbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_2cbbf4:
    // 0x2cbbf4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2cbbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cbbf8:
    // 0x2cbbf8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2cbbfc:
    if (ctx->pc == 0x2CBBFCu) {
        ctx->pc = 0x2CBBFCu;
            // 0x2cbbfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CBC00u;
        goto label_2cbc00;
    }
    ctx->pc = 0x2CBBF8u;
    {
        const bool branch_taken_0x2cbbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBF8u;
            // 0x2cbbfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbf8) {
            ctx->pc = 0x2CBC08u;
            goto label_2cbc08;
        }
    }
    ctx->pc = 0x2CBC00u;
label_2cbc00:
    // 0x2cbc00: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_2cbc04:
    if (ctx->pc == 0x2CBC04u) {
        ctx->pc = 0x2CBC08u;
        goto label_2cbc08;
    }
    ctx->pc = 0x2CBC00u;
    {
        const bool branch_taken_0x2cbc00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cbc00) {
            ctx->pc = 0x2CBC20u;
            goto label_2cbc20;
        }
    }
    ctx->pc = 0x2CBC08u;
label_2cbc08:
    // 0x2cbc08: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2cbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_2cbc0c:
    // 0x2cbc0c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2cbc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cbc10:
    // 0x2cbc10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cbc10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cbc14:
    // 0x2cbc14: 0x0  nop
    ctx->pc = 0x2cbc14u;
    // NOP
label_2cbc18:
    // 0x2cbc18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cbc18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cbc1c:
    // 0x2cbc1c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2cbc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2cbc20:
    // 0x2cbc20: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_2cbc24:
    if (ctx->pc == 0x2CBC24u) {
        ctx->pc = 0x2CBC28u;
        goto label_2cbc28;
    }
    ctx->pc = 0x2CBC20u;
    {
        const bool branch_taken_0x2cbc20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc20) {
            ctx->pc = 0x2CBC68u;
            goto label_2cbc68;
        }
    }
    ctx->pc = 0x2CBC28u;
label_2cbc28:
    // 0x2cbc28: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2cbc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbc2c:
    // 0x2cbc2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cbc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc30:
    // 0x2cbc30: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cbc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cbc34:
    // 0x2cbc34: 0x320f809  jalr        $t9
label_2cbc38:
    if (ctx->pc == 0x2CBC38u) {
        ctx->pc = 0x2CBC38u;
            // 0x2cbc38: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2CBC3Cu;
        goto label_2cbc3c;
    }
    ctx->pc = 0x2CBC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBC3Cu);
        ctx->pc = 0x2CBC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC34u;
            // 0x2cbc38: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBC3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBC3Cu; }
            if (ctx->pc != 0x2CBC3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CBC3Cu;
label_2cbc3c:
    // 0x2cbc3c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2cbc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbc40:
    // 0x2cbc40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cbc40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cbc44:
    // 0x2cbc44: 0xc6ad001c  lwc1        $f13, 0x1C($s5)
    ctx->pc = 0x2cbc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2cbc48:
    // 0x2cbc48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cbc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc4c:
    // 0x2cbc4c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2cbc4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2cbc50:
    // 0x2cbc50: 0x320f809  jalr        $t9
label_2cbc54:
    if (ctx->pc == 0x2CBC54u) {
        ctx->pc = 0x2CBC54u;
            // 0x2cbc54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2CBC58u;
        goto label_2cbc58;
    }
    ctx->pc = 0x2CBC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBC58u);
        ctx->pc = 0x2CBC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC50u;
            // 0x2cbc54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBC58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBC58u; }
            if (ctx->pc != 0x2CBC58u) { return; }
        }
        }
    }
    ctx->pc = 0x2CBC58u;
label_2cbc58:
    // 0x2cbc58: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2cbc58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbc5c:
    // 0x2cbc5c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2cbc5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2cbc60:
    // 0x2cbc60: 0x320f809  jalr        $t9
label_2cbc64:
    if (ctx->pc == 0x2CBC64u) {
        ctx->pc = 0x2CBC64u;
            // 0x2cbc64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC68u;
        goto label_2cbc68;
    }
    ctx->pc = 0x2CBC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBC68u);
        ctx->pc = 0x2CBC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC60u;
            // 0x2cbc64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBC68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBC68u; }
            if (ctx->pc != 0x2CBC68u) { return; }
        }
        }
    }
    ctx->pc = 0x2CBC68u;
label_2cbc68:
    // 0x2cbc68: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_2cbc6c:
    if (ctx->pc == 0x2CBC6Cu) {
        ctx->pc = 0x2CBC70u;
        goto label_2cbc70;
    }
    ctx->pc = 0x2CBC68u;
    {
        const bool branch_taken_0x2cbc68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc68) {
            ctx->pc = 0x2CBCB0u;
            goto label_2cbcb0;
        }
    }
    ctx->pc = 0x2CBC70u;
label_2cbc70:
    // 0x2cbc70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2cbc70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cbc74:
    // 0x2cbc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc78:
    // 0x2cbc78: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cbc78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cbc7c:
    // 0x2cbc7c: 0x320f809  jalr        $t9
label_2cbc80:
    if (ctx->pc == 0x2CBC80u) {
        ctx->pc = 0x2CBC80u;
            // 0x2cbc80: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2CBC84u;
        goto label_2cbc84;
    }
    ctx->pc = 0x2CBC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBC84u);
        ctx->pc = 0x2CBC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC7Cu;
            // 0x2cbc80: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBC84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBC84u; }
            if (ctx->pc != 0x2CBC84u) { return; }
        }
        }
    }
    ctx->pc = 0x2CBC84u;
label_2cbc84:
    // 0x2cbc84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2cbc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cbc88:
    // 0x2cbc88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cbc88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cbc8c:
    // 0x2cbc8c: 0xc6ad001c  lwc1        $f13, 0x1C($s5)
    ctx->pc = 0x2cbc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2cbc90:
    // 0x2cbc90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc94:
    // 0x2cbc94: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2cbc94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2cbc98:
    // 0x2cbc98: 0x320f809  jalr        $t9
label_2cbc9c:
    if (ctx->pc == 0x2CBC9Cu) {
        ctx->pc = 0x2CBC9Cu;
            // 0x2cbc9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2CBCA0u;
        goto label_2cbca0;
    }
    ctx->pc = 0x2CBC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBCA0u);
        ctx->pc = 0x2CBC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC98u;
            // 0x2cbc9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBCA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCA0u; }
            if (ctx->pc != 0x2CBCA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CBCA0u;
label_2cbca0:
    // 0x2cbca0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2cbca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cbca4:
    // 0x2cbca4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2cbca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2cbca8:
    // 0x2cbca8: 0x320f809  jalr        $t9
label_2cbcac:
    if (ctx->pc == 0x2CBCACu) {
        ctx->pc = 0x2CBCACu;
            // 0x2cbcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCB0u;
        goto label_2cbcb0;
    }
    ctx->pc = 0x2CBCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBCB0u);
        ctx->pc = 0x2CBCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCA8u;
            // 0x2cbcac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CBCB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCB0u; }
            if (ctx->pc != 0x2CBCB0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CBCB0u;
label_2cbcb0:
    // 0x2cbcb0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2cbcb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2cbcb4:
    // 0x2cbcb4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2cbcb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2cbcb8:
    // 0x2cbcb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2cbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cbcbc:
    // 0x2cbcbc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2cbcbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2cbcc0:
    // 0x2cbcc0: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_2cbcc4:
    if (ctx->pc == 0x2CBCC4u) {
        ctx->pc = 0x2CBCC8u;
        goto label_2cbcc8;
    }
    ctx->pc = 0x2CBCC0u;
    {
        const bool branch_taken_0x2cbcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbcc0) {
            ctx->pc = 0x2CBBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbbc4;
        }
    }
    ctx->pc = 0x2CBCC8u;
label_2cbcc8:
    // 0x2cbcc8: 0x1000ff85  b           . + 4 + (-0x7B << 2)
label_2cbccc:
    if (ctx->pc == 0x2CBCCCu) {
        ctx->pc = 0x2CBCCCu;
            // 0x2cbccc: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x2CBCD0u;
        goto label_2cbcd0;
    }
    ctx->pc = 0x2CBCC8u;
    {
        const bool branch_taken_0x2cbcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCC8u;
            // 0x2cbccc: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcc8) {
            ctx->pc = 0x2CBAE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbae0;
        }
    }
    ctx->pc = 0x2CBCD0u;
label_2cbcd0:
    // 0x2cbcd0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2cbcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2cbcd4:
    // 0x2cbcd4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cbcd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cbcd8:
    // 0x2cbcd8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cbcd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cbcdc:
    // 0x2cbcdc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cbcdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cbce0:
    // 0x2cbce0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cbce0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cbce4:
    // 0x2cbce4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cbce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cbce8:
    // 0x2cbce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cbce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cbcec:
    // 0x2cbcec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cbcf0:
    // 0x2cbcf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbcf4:
    // 0x2cbcf4: 0x3e00008  jr          $ra
label_2cbcf8:
    if (ctx->pc == 0x2CBCF8u) {
        ctx->pc = 0x2CBCF8u;
            // 0x2cbcf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2CBCFCu;
        goto label_fallthrough_0x2cbcf4;
    }
    ctx->pc = 0x2CBCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCF4u;
            // 0x2cbcf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cbcf4:
    ctx->pc = 0x2CBCFCu;
}
