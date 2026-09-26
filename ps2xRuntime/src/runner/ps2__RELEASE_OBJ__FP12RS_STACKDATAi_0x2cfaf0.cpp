#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RELEASE_OBJ__FP12RS_STACKDATAi
// Address: 0x2cfaf0 - 0x2cfdd4
void ps2__RELEASE_OBJ__FP12RS_STACKDATAi_0x2cfaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RELEASE_OBJ__FP12RS_STACKDATAi_0x2cfaf0");
#endif

    switch (ctx->pc) {
        case 0x2cfaf0u: goto label_2cfaf0;
        case 0x2cfaf4u: goto label_2cfaf4;
        case 0x2cfaf8u: goto label_2cfaf8;
        case 0x2cfafcu: goto label_2cfafc;
        case 0x2cfb00u: goto label_2cfb00;
        case 0x2cfb04u: goto label_2cfb04;
        case 0x2cfb08u: goto label_2cfb08;
        case 0x2cfb0cu: goto label_2cfb0c;
        case 0x2cfb10u: goto label_2cfb10;
        case 0x2cfb14u: goto label_2cfb14;
        case 0x2cfb18u: goto label_2cfb18;
        case 0x2cfb1cu: goto label_2cfb1c;
        case 0x2cfb20u: goto label_2cfb20;
        case 0x2cfb24u: goto label_2cfb24;
        case 0x2cfb28u: goto label_2cfb28;
        case 0x2cfb2cu: goto label_2cfb2c;
        case 0x2cfb30u: goto label_2cfb30;
        case 0x2cfb34u: goto label_2cfb34;
        case 0x2cfb38u: goto label_2cfb38;
        case 0x2cfb3cu: goto label_2cfb3c;
        case 0x2cfb40u: goto label_2cfb40;
        case 0x2cfb44u: goto label_2cfb44;
        case 0x2cfb48u: goto label_2cfb48;
        case 0x2cfb4cu: goto label_2cfb4c;
        case 0x2cfb50u: goto label_2cfb50;
        case 0x2cfb54u: goto label_2cfb54;
        case 0x2cfb58u: goto label_2cfb58;
        case 0x2cfb5cu: goto label_2cfb5c;
        case 0x2cfb60u: goto label_2cfb60;
        case 0x2cfb64u: goto label_2cfb64;
        case 0x2cfb68u: goto label_2cfb68;
        case 0x2cfb6cu: goto label_2cfb6c;
        case 0x2cfb70u: goto label_2cfb70;
        case 0x2cfb74u: goto label_2cfb74;
        case 0x2cfb78u: goto label_2cfb78;
        case 0x2cfb7cu: goto label_2cfb7c;
        case 0x2cfb80u: goto label_2cfb80;
        case 0x2cfb84u: goto label_2cfb84;
        case 0x2cfb88u: goto label_2cfb88;
        case 0x2cfb8cu: goto label_2cfb8c;
        case 0x2cfb90u: goto label_2cfb90;
        case 0x2cfb94u: goto label_2cfb94;
        case 0x2cfb98u: goto label_2cfb98;
        case 0x2cfb9cu: goto label_2cfb9c;
        case 0x2cfba0u: goto label_2cfba0;
        case 0x2cfba4u: goto label_2cfba4;
        case 0x2cfba8u: goto label_2cfba8;
        case 0x2cfbacu: goto label_2cfbac;
        case 0x2cfbb0u: goto label_2cfbb0;
        case 0x2cfbb4u: goto label_2cfbb4;
        case 0x2cfbb8u: goto label_2cfbb8;
        case 0x2cfbbcu: goto label_2cfbbc;
        case 0x2cfbc0u: goto label_2cfbc0;
        case 0x2cfbc4u: goto label_2cfbc4;
        case 0x2cfbc8u: goto label_2cfbc8;
        case 0x2cfbccu: goto label_2cfbcc;
        case 0x2cfbd0u: goto label_2cfbd0;
        case 0x2cfbd4u: goto label_2cfbd4;
        case 0x2cfbd8u: goto label_2cfbd8;
        case 0x2cfbdcu: goto label_2cfbdc;
        case 0x2cfbe0u: goto label_2cfbe0;
        case 0x2cfbe4u: goto label_2cfbe4;
        case 0x2cfbe8u: goto label_2cfbe8;
        case 0x2cfbecu: goto label_2cfbec;
        case 0x2cfbf0u: goto label_2cfbf0;
        case 0x2cfbf4u: goto label_2cfbf4;
        case 0x2cfbf8u: goto label_2cfbf8;
        case 0x2cfbfcu: goto label_2cfbfc;
        case 0x2cfc00u: goto label_2cfc00;
        case 0x2cfc04u: goto label_2cfc04;
        case 0x2cfc08u: goto label_2cfc08;
        case 0x2cfc0cu: goto label_2cfc0c;
        case 0x2cfc10u: goto label_2cfc10;
        case 0x2cfc14u: goto label_2cfc14;
        case 0x2cfc18u: goto label_2cfc18;
        case 0x2cfc1cu: goto label_2cfc1c;
        case 0x2cfc20u: goto label_2cfc20;
        case 0x2cfc24u: goto label_2cfc24;
        case 0x2cfc28u: goto label_2cfc28;
        case 0x2cfc2cu: goto label_2cfc2c;
        case 0x2cfc30u: goto label_2cfc30;
        case 0x2cfc34u: goto label_2cfc34;
        case 0x2cfc38u: goto label_2cfc38;
        case 0x2cfc3cu: goto label_2cfc3c;
        case 0x2cfc40u: goto label_2cfc40;
        case 0x2cfc44u: goto label_2cfc44;
        case 0x2cfc48u: goto label_2cfc48;
        case 0x2cfc4cu: goto label_2cfc4c;
        case 0x2cfc50u: goto label_2cfc50;
        case 0x2cfc54u: goto label_2cfc54;
        case 0x2cfc58u: goto label_2cfc58;
        case 0x2cfc5cu: goto label_2cfc5c;
        case 0x2cfc60u: goto label_2cfc60;
        case 0x2cfc64u: goto label_2cfc64;
        case 0x2cfc68u: goto label_2cfc68;
        case 0x2cfc6cu: goto label_2cfc6c;
        case 0x2cfc70u: goto label_2cfc70;
        case 0x2cfc74u: goto label_2cfc74;
        case 0x2cfc78u: goto label_2cfc78;
        case 0x2cfc7cu: goto label_2cfc7c;
        case 0x2cfc80u: goto label_2cfc80;
        case 0x2cfc84u: goto label_2cfc84;
        case 0x2cfc88u: goto label_2cfc88;
        case 0x2cfc8cu: goto label_2cfc8c;
        case 0x2cfc90u: goto label_2cfc90;
        case 0x2cfc94u: goto label_2cfc94;
        case 0x2cfc98u: goto label_2cfc98;
        case 0x2cfc9cu: goto label_2cfc9c;
        case 0x2cfca0u: goto label_2cfca0;
        case 0x2cfca4u: goto label_2cfca4;
        case 0x2cfca8u: goto label_2cfca8;
        case 0x2cfcacu: goto label_2cfcac;
        case 0x2cfcb0u: goto label_2cfcb0;
        case 0x2cfcb4u: goto label_2cfcb4;
        case 0x2cfcb8u: goto label_2cfcb8;
        case 0x2cfcbcu: goto label_2cfcbc;
        case 0x2cfcc0u: goto label_2cfcc0;
        case 0x2cfcc4u: goto label_2cfcc4;
        case 0x2cfcc8u: goto label_2cfcc8;
        case 0x2cfcccu: goto label_2cfccc;
        case 0x2cfcd0u: goto label_2cfcd0;
        case 0x2cfcd4u: goto label_2cfcd4;
        case 0x2cfcd8u: goto label_2cfcd8;
        case 0x2cfcdcu: goto label_2cfcdc;
        case 0x2cfce0u: goto label_2cfce0;
        case 0x2cfce4u: goto label_2cfce4;
        case 0x2cfce8u: goto label_2cfce8;
        case 0x2cfcecu: goto label_2cfcec;
        case 0x2cfcf0u: goto label_2cfcf0;
        case 0x2cfcf4u: goto label_2cfcf4;
        case 0x2cfcf8u: goto label_2cfcf8;
        case 0x2cfcfcu: goto label_2cfcfc;
        case 0x2cfd00u: goto label_2cfd00;
        case 0x2cfd04u: goto label_2cfd04;
        case 0x2cfd08u: goto label_2cfd08;
        case 0x2cfd0cu: goto label_2cfd0c;
        case 0x2cfd10u: goto label_2cfd10;
        case 0x2cfd14u: goto label_2cfd14;
        case 0x2cfd18u: goto label_2cfd18;
        case 0x2cfd1cu: goto label_2cfd1c;
        case 0x2cfd20u: goto label_2cfd20;
        case 0x2cfd24u: goto label_2cfd24;
        case 0x2cfd28u: goto label_2cfd28;
        case 0x2cfd2cu: goto label_2cfd2c;
        case 0x2cfd30u: goto label_2cfd30;
        case 0x2cfd34u: goto label_2cfd34;
        case 0x2cfd38u: goto label_2cfd38;
        case 0x2cfd3cu: goto label_2cfd3c;
        case 0x2cfd40u: goto label_2cfd40;
        case 0x2cfd44u: goto label_2cfd44;
        case 0x2cfd48u: goto label_2cfd48;
        case 0x2cfd4cu: goto label_2cfd4c;
        case 0x2cfd50u: goto label_2cfd50;
        case 0x2cfd54u: goto label_2cfd54;
        case 0x2cfd58u: goto label_2cfd58;
        case 0x2cfd5cu: goto label_2cfd5c;
        case 0x2cfd60u: goto label_2cfd60;
        case 0x2cfd64u: goto label_2cfd64;
        case 0x2cfd68u: goto label_2cfd68;
        case 0x2cfd6cu: goto label_2cfd6c;
        case 0x2cfd70u: goto label_2cfd70;
        case 0x2cfd74u: goto label_2cfd74;
        case 0x2cfd78u: goto label_2cfd78;
        case 0x2cfd7cu: goto label_2cfd7c;
        case 0x2cfd80u: goto label_2cfd80;
        case 0x2cfd84u: goto label_2cfd84;
        case 0x2cfd88u: goto label_2cfd88;
        case 0x2cfd8cu: goto label_2cfd8c;
        case 0x2cfd90u: goto label_2cfd90;
        case 0x2cfd94u: goto label_2cfd94;
        case 0x2cfd98u: goto label_2cfd98;
        case 0x2cfd9cu: goto label_2cfd9c;
        case 0x2cfda0u: goto label_2cfda0;
        case 0x2cfda4u: goto label_2cfda4;
        case 0x2cfda8u: goto label_2cfda8;
        case 0x2cfdacu: goto label_2cfdac;
        case 0x2cfdb0u: goto label_2cfdb0;
        case 0x2cfdb4u: goto label_2cfdb4;
        case 0x2cfdb8u: goto label_2cfdb8;
        case 0x2cfdbcu: goto label_2cfdbc;
        case 0x2cfdc0u: goto label_2cfdc0;
        case 0x2cfdc4u: goto label_2cfdc4;
        case 0x2cfdc8u: goto label_2cfdc8;
        case 0x2cfdccu: goto label_2cfdcc;
        case 0x2cfdd0u: goto label_2cfdd0;
        default: break;
    }

    ctx->pc = 0x2cfaf0u;

label_2cfaf0:
    // 0x2cfaf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2cfaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2cfaf4:
    // 0x2cfaf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfaf8:
    // 0x2cfaf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cfaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cfafc:
    // 0x2cfafc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cfafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2cfb00:
    // 0x2cfb00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cfb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2cfb04:
    // 0x2cfb04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cfb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cfb08:
    // 0x2cfb08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2cfb08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2cfb0c:
    // 0x2cfb0c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_2cfb10:
    if (ctx->pc == 0x2CFB10u) {
        ctx->pc = 0x2CFB10u;
            // 0x2cfb10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB14u;
        goto label_2cfb14;
    }
    ctx->pc = 0x2CFB0Cu;
    {
        const bool branch_taken_0x2cfb0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CFB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB0Cu;
            // 0x2cfb10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb0c) {
            ctx->pc = 0x2CFB20u;
            goto label_2cfb20;
        }
    }
    ctx->pc = 0x2CFB14u;
label_2cfb14:
    // 0x2cfb14: 0xc0b378c  jal         func_2CDE30
label_2cfb18:
    if (ctx->pc == 0x2CFB18u) {
        ctx->pc = 0x2CFB1Cu;
        goto label_2cfb1c;
    }
    ctx->pc = 0x2CFB14u;
    SET_GPR_U32(ctx, 31, 0x2CFB1Cu);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB1Cu; }
        if (ctx->pc != 0x2CFB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB1Cu; }
        if (ctx->pc != 0x2CFB1Cu) { return; }
    }
    ctx->pc = 0x2CFB1Cu;
label_2cfb1c:
    // 0x2cfb1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cfb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfb20:
    // 0x2cfb20: 0x8f829da4  lw          $v0, -0x625C($gp)
    ctx->pc = 0x2cfb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_2cfb24:
    // 0x2cfb24: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2cfb28:
    if (ctx->pc == 0x2CFB28u) {
        ctx->pc = 0x2CFB2Cu;
        goto label_2cfb2c;
    }
    ctx->pc = 0x2CFB24u;
    {
        const bool branch_taken_0x2cfb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb24) {
            ctx->pc = 0x2CFB64u;
            goto label_2cfb64;
        }
    }
    ctx->pc = 0x2CFB2Cu;
label_2cfb2c:
    // 0x2cfb2c: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x2cfb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_2cfb30:
    // 0x2cfb30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2cfb34:
    if (ctx->pc == 0x2CFB34u) {
        ctx->pc = 0x2CFB38u;
        goto label_2cfb38;
    }
    ctx->pc = 0x2CFB30u;
    {
        const bool branch_taken_0x2cfb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb30) {
            ctx->pc = 0x2CFB64u;
            goto label_2cfb64;
        }
    }
    ctx->pc = 0x2CFB38u;
label_2cfb38:
    // 0x2cfb38: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2cfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2cfb3c:
    // 0x2cfb3c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2cfb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2cfb40:
    // 0x2cfb40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2cfb44:
    if (ctx->pc == 0x2CFB44u) {
        ctx->pc = 0x2CFB48u;
        goto label_2cfb48;
    }
    ctx->pc = 0x2CFB40u;
    {
        const bool branch_taken_0x2cfb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb40) {
            ctx->pc = 0x2CFB64u;
            goto label_2cfb64;
        }
    }
    ctx->pc = 0x2CFB48u;
label_2cfb48:
    // 0x2cfb48: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfb4c:
    // 0x2cfb4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cfb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfb50:
    // 0x2cfb50: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cfb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfb54:
    // 0x2cfb54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cfb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cfb58:
    // 0x2cfb58: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x2cfb58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_2cfb5c:
    // 0x2cfb5c: 0x320f809  jalr        $t9
label_2cfb60:
    if (ctx->pc == 0x2CFB60u) {
        ctx->pc = 0x2CFB60u;
            // 0x2cfb60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFB64u;
        goto label_2cfb64;
    }
    ctx->pc = 0x2CFB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CFB64u);
        ctx->pc = 0x2CFB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB5Cu;
            // 0x2cfb60: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CFB64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB64u; }
            if (ctx->pc != 0x2CFB64u) { return; }
        }
        }
    }
    ctx->pc = 0x2CFB64u;
label_2cfb64:
    // 0x2cfb64: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfb68:
    // 0x2cfb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfb6c:
    // 0x2cfb6c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cfb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfb70:
    // 0x2cfb70: 0x8483071c  lh          $v1, 0x71C($a0)
    ctx->pc = 0x2cfb70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1820)));
label_2cfb74:
    // 0x2cfb74: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2cfb78:
    if (ctx->pc == 0x2CFB78u) {
        ctx->pc = 0x2CFB7Cu;
        goto label_2cfb7c;
    }
    ctx->pc = 0x2CFB74u;
    {
        const bool branch_taken_0x2cfb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfb74) {
            ctx->pc = 0x2CFB8Cu;
            goto label_2cfb8c;
        }
    }
    ctx->pc = 0x2CFB7Cu;
label_2cfb7c:
    // 0x2cfb7c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2cfb80:
    if (ctx->pc == 0x2CFB80u) {
        ctx->pc = 0x2CFB84u;
        goto label_2cfb84;
    }
    ctx->pc = 0x2CFB7Cu;
    {
        const bool branch_taken_0x2cfb7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb7c) {
            ctx->pc = 0x2CFB8Cu;
            goto label_2cfb8c;
        }
    }
    ctx->pc = 0x2CFB84u;
label_2cfb84:
    // 0x2cfb84: 0xc05acf0  jal         func_16B3C0
label_2cfb88:
    if (ctx->pc == 0x2CFB88u) {
        ctx->pc = 0x2CFB8Cu;
        goto label_2cfb8c;
    }
    ctx->pc = 0x2CFB84u;
    SET_GPR_U32(ctx, 31, 0x2CFB8Cu);
    ctx->pc = 0x16B3C0u;
    if (runtime->hasFunction(0x16B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x16B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB8Cu; }
        if (ctx->pc != 0x2CFB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveThrowItem__12CActionCharaFv_0x16b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFB8Cu; }
        if (ctx->pc != 0x2CFB8Cu) { return; }
    }
    ctx->pc = 0x2CFB8Cu;
label_2cfb8c:
    // 0x2cfb8c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfb90:
    // 0x2cfb90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cfb94:
    // 0x2cfb94: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cfb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfb98:
    // 0x2cfb98: 0x8463071c  lh          $v1, 0x71C($v1)
    ctx->pc = 0x2cfb98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1820)));
label_2cfb9c:
    // 0x2cfb9c: 0x14620074  bne         $v1, $v0, . + 4 + (0x74 << 2)
label_2cfba0:
    if (ctx->pc == 0x2CFBA0u) {
        ctx->pc = 0x2CFBA0u;
            // 0x2cfba0: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2CFBA4u;
        goto label_2cfba4;
    }
    ctx->pc = 0x2CFB9Cu;
    {
        const bool branch_taken_0x2cfb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CFBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFB9Cu;
            // 0x2cfba0: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb9c) {
            ctx->pc = 0x2CFD70u;
            goto label_2cfd70;
        }
    }
    ctx->pc = 0x2CFBA4u;
label_2cfba4:
    // 0x2cfba4: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x2cfba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_2cfba8:
    // 0x2cfba8: 0xc0a0ed8  jal         func_283B60
label_2cfbac:
    if (ctx->pc == 0x2CFBACu) {
        ctx->pc = 0x2CFBACu;
            // 0x2cfbac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFBB0u;
        goto label_2cfbb0;
    }
    ctx->pc = 0x2CFBA8u;
    SET_GPR_U32(ctx, 31, 0x2CFBB0u);
    ctx->pc = 0x2CFBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFBA8u;
            // 0x2cfbac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBB0u; }
        if (ctx->pc != 0x2CFBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBB0u; }
        if (ctx->pc != 0x2CFBB0u) { return; }
    }
    ctx->pc = 0x2CFBB0u;
label_2cfbb0:
    // 0x2cfbb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cfbb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfbb4:
    // 0x2cfbb4: 0x1240006a  beqz        $s2, . + 4 + (0x6A << 2)
label_2cfbb8:
    if (ctx->pc == 0x2CFBB8u) {
        ctx->pc = 0x2CFBBCu;
        goto label_2cfbbc;
    }
    ctx->pc = 0x2CFBB4u;
    {
        const bool branch_taken_0x2cfbb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbb4) {
            ctx->pc = 0x2CFD60u;
            goto label_2cfd60;
        }
    }
    ctx->pc = 0x2CFBBCu;
label_2cfbbc:
    // 0x2cfbbc: 0x86430730  lh          $v1, 0x730($s2)
    ctx->pc = 0x2cfbbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1840)));
label_2cfbc0:
    // 0x2cfbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfbc4:
    // 0x2cfbc4: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
label_2cfbc8:
    if (ctx->pc == 0x2CFBC8u) {
        ctx->pc = 0x2CFBCCu;
        goto label_2cfbcc;
    }
    ctx->pc = 0x2CFBC4u;
    {
        const bool branch_taken_0x2cfbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfbc4) {
            ctx->pc = 0x2CFD60u;
            goto label_2cfd60;
        }
    }
    ctx->pc = 0x2CFBCCu;
label_2cfbcc:
    // 0x2cfbcc: 0x8e44072c  lw          $a0, 0x72C($s2)
    ctx->pc = 0x2cfbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1836)));
label_2cfbd0:
    // 0x2cfbd0: 0xc04de0c  jal         func_137830
label_2cfbd4:
    if (ctx->pc == 0x2CFBD4u) {
        ctx->pc = 0x2CFBD4u;
            // 0x2cfbd4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2CFBD8u;
        goto label_2cfbd8;
    }
    ctx->pc = 0x2CFBD0u;
    SET_GPR_U32(ctx, 31, 0x2CFBD8u);
    ctx->pc = 0x2CFBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFBD0u;
            // 0x2cfbd4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBD8u; }
        if (ctx->pc != 0x2CFBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBD8u; }
        if (ctx->pc != 0x2CFBD8u) { return; }
    }
    ctx->pc = 0x2CFBD8u;
label_2cfbd8:
    // 0x2cfbd8: 0xc04db18  jal         func_136C60
label_2cfbdc:
    if (ctx->pc == 0x2CFBDCu) {
        ctx->pc = 0x2CFBDCu;
            // 0x2cfbdc: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x2CFBE0u;
        goto label_2cfbe0;
    }
    ctx->pc = 0x2CFBD8u;
    SET_GPR_U32(ctx, 31, 0x2CFBE0u);
    ctx->pc = 0x2CFBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFBD8u;
            // 0x2cfbdc: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBE0u; }
        if (ctx->pc != 0x2CFBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBE0u; }
        if (ctx->pc != 0x2CFBE0u) { return; }
    }
    ctx->pc = 0x2CFBE0u;
label_2cfbe0:
    // 0x2cfbe0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2cfbe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cfbe4:
    // 0x2cfbe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cfbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cfbe8:
    // 0x2cfbe8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cfbe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cfbec:
    // 0x2cfbec: 0x320f809  jalr        $t9
label_2cfbf0:
    if (ctx->pc == 0x2CFBF0u) {
        ctx->pc = 0x2CFBF0u;
            // 0x2cfbf0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2CFBF4u;
        goto label_2cfbf4;
    }
    ctx->pc = 0x2CFBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CFBF4u);
        ctx->pc = 0x2CFBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFBECu;
            // 0x2cfbf0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CFBF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CFBF4u; }
            if (ctx->pc != 0x2CFBF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2CFBF4u;
label_2cfbf4:
    // 0x2cfbf4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2cfbf8:
    if (ctx->pc == 0x2CFBF8u) {
        ctx->pc = 0x2CFBFCu;
        goto label_2cfbfc;
    }
    ctx->pc = 0x2CFBF4u;
    {
        const bool branch_taken_0x2cfbf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbf4) {
            ctx->pc = 0x2CFC18u;
            goto label_2cfc18;
        }
    }
    ctx->pc = 0x2CFBFCu;
label_2cfbfc:
    // 0x2cfbfc: 0xae40072c  sw          $zero, 0x72C($s2)
    ctx->pc = 0x2cfbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1836), GPR_U32(ctx, 0));
label_2cfc00:
    // 0x2cfc00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2cfc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2cfc04:
    // 0x2cfc04: 0xa6400730  sh          $zero, 0x730($s2)
    ctx->pc = 0x2cfc04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1840), (uint16_t)GPR_U32(ctx, 0));
label_2cfc08:
    // 0x2cfc08: 0x240204b0  addiu       $v0, $zero, 0x4B0
    ctx->pc = 0x2cfc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_2cfc0c:
    // 0x2cfc0c: 0xa6430732  sh          $v1, 0x732($s2)
    ctx->pc = 0x2cfc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1842), (uint16_t)GPR_U32(ctx, 3));
label_2cfc10:
    // 0x2cfc10: 0x10000053  b           . + 4 + (0x53 << 2)
label_2cfc14:
    if (ctx->pc == 0x2CFC14u) {
        ctx->pc = 0x2CFC14u;
            // 0x2cfc14: 0xa6421158  sh          $v0, 0x1158($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4440), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2CFC18u;
        goto label_2cfc18;
    }
    ctx->pc = 0x2CFC10u;
    {
        const bool branch_taken_0x2cfc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC10u;
            // 0x2cfc14: 0xa6421158  sh          $v0, 0x1158($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4440), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc10) {
            ctx->pc = 0x2CFD60u;
            goto label_2cfd60;
        }
    }
    ctx->pc = 0x2CFC18u;
label_2cfc18:
    // 0x2cfc18: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfc1c:
    // 0x2cfc1c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cfc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfc20:
    // 0x2cfc20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cfc20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cfc24:
    // 0x2cfc24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2cfc24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2cfc28:
    // 0x2cfc28: 0x320f809  jalr        $t9
label_2cfc2c:
    if (ctx->pc == 0x2CFC2Cu) {
        ctx->pc = 0x2CFC2Cu;
            // 0x2cfc2c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CFC30u;
        goto label_2cfc30;
    }
    ctx->pc = 0x2CFC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CFC30u);
        ctx->pc = 0x2CFC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC28u;
            // 0x2cfc2c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CFC30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC30u; }
            if (ctx->pc != 0x2CFC30u) { return; }
        }
        }
    }
    ctx->pc = 0x2CFC30u;
label_2cfc30:
    // 0x2cfc30: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfc34:
    // 0x2cfc34: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cfc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cfc38:
    // 0x2cfc38: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfc3c:
    // 0x2cfc3c: 0xc041c5c  jal         func_107170
label_2cfc40:
    if (ctx->pc == 0x2CFC40u) {
        ctx->pc = 0x2CFC40u;
            // 0x2cfc40: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->pc = 0x2CFC44u;
        goto label_2cfc44;
    }
    ctx->pc = 0x2CFC3Cu;
    SET_GPR_U32(ctx, 31, 0x2CFC44u);
    ctx->pc = 0x2CFC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC3Cu;
            // 0x2cfc40: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC44u; }
        if (ctx->pc != 0x2CFC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC44u; }
        if (ctx->pc != 0x2CFC44u) { return; }
    }
    ctx->pc = 0x2CFC44u;
label_2cfc44:
    // 0x2cfc44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cfc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2cfc48:
    // 0x2cfc48: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2cfc4c:
    // 0x2cfc4c: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x2cfc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
label_2cfc50:
    // 0x2cfc50: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfc54:
    // 0x2cfc54: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cfc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfc58:
    // 0x2cfc58: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2cfc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cfc5c:
    // 0x2cfc5c: 0x84620772  lh          $v0, 0x772($v1)
    ctx->pc = 0x2cfc5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1906)));
label_2cfc60:
    // 0x2cfc60: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2cfc64:
    if (ctx->pc == 0x2CFC64u) {
        ctx->pc = 0x2CFC68u;
        goto label_2cfc68;
    }
    ctx->pc = 0x2CFC60u;
    {
        const bool branch_taken_0x2cfc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc60) {
            ctx->pc = 0x2CFCC8u;
            goto label_2cfcc8;
        }
    }
    ctx->pc = 0x2CFC68u;
label_2cfc68:
    // 0x2cfc68: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x2cfc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_2cfc6c:
    // 0x2cfc6c: 0xc0a0ed8  jal         func_283B60
label_2cfc70:
    if (ctx->pc == 0x2CFC70u) {
        ctx->pc = 0x2CFC70u;
            // 0x2cfc70: 0x84650770  lh          $a1, 0x770($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1904)));
        ctx->pc = 0x2CFC74u;
        goto label_2cfc74;
    }
    ctx->pc = 0x2CFC6Cu;
    SET_GPR_U32(ctx, 31, 0x2CFC74u);
    ctx->pc = 0x2CFC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC6Cu;
            // 0x2cfc70: 0x84650770  lh          $a1, 0x770($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC74u; }
        if (ctx->pc != 0x2CFC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC74u; }
        if (ctx->pc != 0x2CFC74u) { return; }
    }
    ctx->pc = 0x2CFC74u;
label_2cfc74:
    // 0x2cfc74: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2cfc78:
    if (ctx->pc == 0x2CFC78u) {
        ctx->pc = 0x2CFC78u;
            // 0x2cfc78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC7Cu;
        goto label_2cfc7c;
    }
    ctx->pc = 0x2CFC74u;
    {
        const bool branch_taken_0x2cfc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC74u;
            // 0x2cfc78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc74) {
            ctx->pc = 0x2CFCC8u;
            goto label_2cfcc8;
        }
    }
    ctx->pc = 0x2CFC7Cu;
label_2cfc7c:
    // 0x2cfc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cfc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc80:
    // 0x2cfc80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfc80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc84:
    // 0x2cfc84: 0xc05d420  jal         func_175080
label_2cfc88:
    if (ctx->pc == 0x2CFC88u) {
        ctx->pc = 0x2CFC88u;
            // 0x2cfc88: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2CFC8Cu;
        goto label_2cfc8c;
    }
    ctx->pc = 0x2CFC84u;
    SET_GPR_U32(ctx, 31, 0x2CFC8Cu);
    ctx->pc = 0x2CFC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC84u;
            // 0x2cfc88: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC8Cu; }
        if (ctx->pc != 0x2CFC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC8Cu; }
        if (ctx->pc != 0x2CFC8Cu) { return; }
    }
    ctx->pc = 0x2CFC8Cu;
label_2cfc8c:
    // 0x2cfc8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cfc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cfc90:
    // 0x2cfc90: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2cfc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cfc94:
    // 0x2cfc94: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2cfc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_2cfc98:
    // 0x2cfc98: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2cfc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2cfc9c:
    // 0x2cfc9c: 0xc04c018  jal         func_130060
label_2cfca0:
    if (ctx->pc == 0x2CFCA0u) {
        ctx->pc = 0x2CFCA0u;
            // 0x2cfca0: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x2CFCA4u;
        goto label_2cfca4;
    }
    ctx->pc = 0x2CFC9Cu;
    SET_GPR_U32(ctx, 31, 0x2CFCA4u);
    ctx->pc = 0x2CFCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC9Cu;
            // 0x2cfca0: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCA4u; }
        if (ctx->pc != 0x2CFCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCA4u; }
        if (ctx->pc != 0x2CFCA4u) { return; }
    }
    ctx->pc = 0x2CFCA4u;
label_2cfca4:
    // 0x2cfca4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cfca4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2cfca8:
    // 0x2cfca8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2cfca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2cfcac:
    // 0x2cfcac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfcacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cfcb0:
    // 0x2cfcb0: 0x0  nop
    ctx->pc = 0x2cfcb0u;
    // NOP
label_2cfcb4:
    // 0x2cfcb4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2cfcb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cfcb8:
    // 0x2cfcb8: 0x0  nop
    ctx->pc = 0x2cfcb8u;
    // NOP
label_2cfcbc:
    // 0x2cfcbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2cfcc0:
    if (ctx->pc == 0x2CFCC0u) {
        ctx->pc = 0x2CFCC4u;
        goto label_2cfcc4;
    }
    ctx->pc = 0x2CFCBCu;
    {
        const bool branch_taken_0x2cfcbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfcbc) {
            ctx->pc = 0x2CFCC8u;
            goto label_2cfcc8;
        }
    }
    ctx->pc = 0x2CFCC4u;
label_2cfcc4:
    // 0x2cfcc4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cfcc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2cfcc8:
    // 0x2cfcc8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cfcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cfccc:
    // 0x2cfccc: 0xc041be0  jal         func_106F80
label_2cfcd0:
    if (ctx->pc == 0x2CFCD0u) {
        ctx->pc = 0x2CFCD0u;
            // 0x2cfcd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCD4u;
        goto label_2cfcd4;
    }
    ctx->pc = 0x2CFCCCu;
    SET_GPR_U32(ctx, 31, 0x2CFCD4u);
    ctx->pc = 0x2CFCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCCCu;
            // 0x2cfcd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCD4u; }
        if (ctx->pc != 0x2CFCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCD4u; }
        if (ctx->pc != 0x2CFCD4u) { return; }
    }
    ctx->pc = 0x2CFCD4u;
label_2cfcd4:
    // 0x2cfcd4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cfcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cfcd8:
    // 0x2cfcd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cfcd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2cfcdc:
    // 0x2cfcdc: 0xc041e96  jal         func_107A58
label_2cfce0:
    if (ctx->pc == 0x2CFCE0u) {
        ctx->pc = 0x2CFCE0u;
            // 0x2cfce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCE4u;
        goto label_2cfce4;
    }
    ctx->pc = 0x2CFCDCu;
    SET_GPR_U32(ctx, 31, 0x2CFCE4u);
    ctx->pc = 0x2CFCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCDCu;
            // 0x2cfce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCE4u; }
        if (ctx->pc != 0x2CFCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCE4u; }
        if (ctx->pc != 0x2CFCE4u) { return; }
    }
    ctx->pc = 0x2CFCE4u;
label_2cfce4:
    // 0x2cfce4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cfce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cfce8:
    // 0x2cfce8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2cfce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cfcec:
    // 0x2cfcec: 0xc041c38  jal         func_1070E0
label_2cfcf0:
    if (ctx->pc == 0x2CFCF0u) {
        ctx->pc = 0x2CFCF0u;
            // 0x2cfcf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCF4u;
        goto label_2cfcf4;
    }
    ctx->pc = 0x2CFCECu;
    SET_GPR_U32(ctx, 31, 0x2CFCF4u);
    ctx->pc = 0x2CFCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFCECu;
            // 0x2cfcf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCF4u; }
        if (ctx->pc != 0x2CFCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFCF4u; }
        if (ctx->pc != 0x2CFCF4u) { return; }
    }
    ctx->pc = 0x2CFCF4u;
label_2cfcf4:
    // 0x2cfcf4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2cfcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_2cfcf8:
    // 0x2cfcf8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2cfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2cfcfc:
    // 0x2cfcfc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2cfcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_2cfd00:
    // 0x2cfd00: 0x26440f40  addiu       $a0, $s2, 0xF40
    ctx->pc = 0x2cfd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
label_2cfd04:
    // 0x2cfd04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2cfd04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cfd08:
    // 0x2cfd08: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2cfd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2cfd0c:
    // 0x2cfd0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2cfd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2cfd10:
    // 0x2cfd10: 0xc0b376c  jal         func_2CDDB0
label_2cfd14:
    if (ctx->pc == 0x2CFD14u) {
        ctx->pc = 0x2CFD14u;
            // 0x2cfd14: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2CFD18u;
        goto label_2cfd18;
    }
    ctx->pc = 0x2CFD10u;
    SET_GPR_U32(ctx, 31, 0x2CFD18u);
    ctx->pc = 0x2CFD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFD10u;
            // 0x2cfd14: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDB0u;
    if (runtime->hasFunction(0x2CDDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD18u; }
        if (ctx->pc != 0x2CFD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParabolicInitialVector__FPfPfPfff_0x2cddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD18u; }
        if (ctx->pc != 0x2CFD18u) { return; }
    }
    ctx->pc = 0x2CFD18u;
label_2cfd18:
    // 0x2cfd18: 0xae40072c  sw          $zero, 0x72C($s2)
    ctx->pc = 0x2cfd18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1836), GPR_U32(ctx, 0));
label_2cfd1c:
    // 0x2cfd1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cfd20:
    // 0x2cfd20: 0xa6420730  sh          $v0, 0x730($s2)
    ctx->pc = 0x2cfd20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1840), (uint16_t)GPR_U32(ctx, 2));
label_2cfd24:
    // 0x2cfd24: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2cfd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2cfd28:
    // 0x2cfd28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2cfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2cfd2c:
    // 0x2cfd2c: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x2cfd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_2cfd30:
    // 0x2cfd30: 0xa6420732  sh          $v0, 0x732($s2)
    ctx->pc = 0x2cfd30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1842), (uint16_t)GPR_U32(ctx, 2));
label_2cfd34:
    // 0x2cfd34: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cfd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2cfd38:
    // 0x2cfd38: 0xae420bdc  sw          $v0, 0xBDC($s2)
    ctx->pc = 0x2cfd38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3036), GPR_U32(ctx, 2));
label_2cfd3c:
    // 0x2cfd3c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2cfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2cfd40:
    // 0x2cfd40: 0x244260d0  addiu       $v0, $v0, 0x60D0
    ctx->pc = 0x2cfd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24784));
label_2cfd44:
    // 0x2cfd44: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2cfd44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2cfd48:
    // 0x2cfd48: 0xc041c5c  jal         func_107170
label_2cfd4c:
    if (ctx->pc == 0x2CFD4Cu) {
        ctx->pc = 0x2CFD4Cu;
            // 0x2cfd4c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x2CFD50u;
        goto label_2cfd50;
    }
    ctx->pc = 0x2CFD48u;
    SET_GPR_U32(ctx, 31, 0x2CFD50u);
    ctx->pc = 0x2CFD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFD48u;
            // 0x2cfd4c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD50u; }
        if (ctx->pc != 0x2CFD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFD50u; }
        if (ctx->pc != 0x2CFD50u) { return; }
    }
    ctx->pc = 0x2CFD50u;
label_2cfd50:
    // 0x2cfd50: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfd54:
    // 0x2cfd54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cfd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cfd58:
    // 0x2cfd58: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfd5c:
    // 0x2cfd5c: 0xa4430728  sh          $v1, 0x728($v0)
    ctx->pc = 0x2cfd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1832), (uint16_t)GPR_U32(ctx, 3));
label_2cfd60:
    // 0x2cfd60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cfd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cfd64:
    // 0x2cfd64: 0x2a210030  slti        $at, $s1, 0x30
    ctx->pc = 0x2cfd64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
label_2cfd68:
    // 0x2cfd68: 0x1420ff8e  bnez        $at, . + 4 + (-0x72 << 2)
label_2cfd6c:
    if (ctx->pc == 0x2CFD6Cu) {
        ctx->pc = 0x2CFD70u;
        goto label_2cfd70;
    }
    ctx->pc = 0x2CFD68u;
    {
        const bool branch_taken_0x2cfd68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd68) {
            ctx->pc = 0x2CFBA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfba4;
        }
    }
    ctx->pc = 0x2CFD70u;
label_2cfd70:
    // 0x2cfd70: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfd74:
    // 0x2cfd74: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cfd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfd78:
    // 0x2cfd78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cfd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cfd7c:
    // 0x2cfd7c: 0x8483071c  lh          $v1, 0x71C($a0)
    ctx->pc = 0x2cfd7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1820)));
label_2cfd80:
    // 0x2cfd80: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2cfd84:
    if (ctx->pc == 0x2CFD84u) {
        ctx->pc = 0x2CFD88u;
        goto label_2cfd88;
    }
    ctx->pc = 0x2CFD80u;
    {
        const bool branch_taken_0x2cfd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfd80) {
            ctx->pc = 0x2CFDA8u;
            goto label_2cfda8;
        }
    }
    ctx->pc = 0x2CFD88u;
label_2cfd88:
    // 0x2cfd88: 0xac800720  sw          $zero, 0x720($a0)
    ctx->pc = 0x2cfd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1824), GPR_U32(ctx, 0));
label_2cfd8c:
    // 0x2cfd8c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfd90:
    // 0x2cfd90: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfd94:
    // 0x2cfd94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cfd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cfd98:
    // 0x2cfd98: 0xac400724  sw          $zero, 0x724($v0)
    ctx->pc = 0x2cfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1828), GPR_U32(ctx, 0));
label_2cfd9c:
    // 0x2cfd9c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfda0:
    // 0x2cfda0: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfda4:
    // 0x2cfda4: 0xa4430728  sh          $v1, 0x728($v0)
    ctx->pc = 0x2cfda4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1832), (uint16_t)GPR_U32(ctx, 3));
label_2cfda8:
    // 0x2cfda8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cfda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cfdac:
    // 0x2cfdac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfdb0:
    // 0x2cfdb0: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cfdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cfdb4:
    // 0x2cfdb4: 0xa460071c  sh          $zero, 0x71C($v1)
    ctx->pc = 0x2cfdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1820), (uint16_t)GPR_U32(ctx, 0));
label_2cfdb8:
    // 0x2cfdb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cfdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfdbc:
    // 0x2cfdbc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cfdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cfdc0:
    // 0x2cfdc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cfdc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cfdc4:
    // 0x2cfdc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cfdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfdc8:
    // 0x2cfdc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cfdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfdcc:
    // 0x2cfdcc: 0x3e00008  jr          $ra
label_2cfdd0:
    if (ctx->pc == 0x2CFDD0u) {
        ctx->pc = 0x2CFDD0u;
            // 0x2cfdd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2CFDD4u;
        goto label_fallthrough_0x2cfdcc;
    }
    ctx->pc = 0x2CFDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFDCCu;
            // 0x2cfdd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cfdcc:
    ctx->pc = 0x2CFDD4u;
}
