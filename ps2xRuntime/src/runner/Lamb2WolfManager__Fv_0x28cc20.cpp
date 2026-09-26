#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Lamb2WolfManager__Fv
// Address: 0x28cc20 - 0x28cdbc
void Lamb2WolfManager__Fv_0x28cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Lamb2WolfManager__Fv_0x28cc20");
#endif

    switch (ctx->pc) {
        case 0x28cc20u: goto label_28cc20;
        case 0x28cc24u: goto label_28cc24;
        case 0x28cc28u: goto label_28cc28;
        case 0x28cc2cu: goto label_28cc2c;
        case 0x28cc30u: goto label_28cc30;
        case 0x28cc34u: goto label_28cc34;
        case 0x28cc38u: goto label_28cc38;
        case 0x28cc3cu: goto label_28cc3c;
        case 0x28cc40u: goto label_28cc40;
        case 0x28cc44u: goto label_28cc44;
        case 0x28cc48u: goto label_28cc48;
        case 0x28cc4cu: goto label_28cc4c;
        case 0x28cc50u: goto label_28cc50;
        case 0x28cc54u: goto label_28cc54;
        case 0x28cc58u: goto label_28cc58;
        case 0x28cc5cu: goto label_28cc5c;
        case 0x28cc60u: goto label_28cc60;
        case 0x28cc64u: goto label_28cc64;
        case 0x28cc68u: goto label_28cc68;
        case 0x28cc6cu: goto label_28cc6c;
        case 0x28cc70u: goto label_28cc70;
        case 0x28cc74u: goto label_28cc74;
        case 0x28cc78u: goto label_28cc78;
        case 0x28cc7cu: goto label_28cc7c;
        case 0x28cc80u: goto label_28cc80;
        case 0x28cc84u: goto label_28cc84;
        case 0x28cc88u: goto label_28cc88;
        case 0x28cc8cu: goto label_28cc8c;
        case 0x28cc90u: goto label_28cc90;
        case 0x28cc94u: goto label_28cc94;
        case 0x28cc98u: goto label_28cc98;
        case 0x28cc9cu: goto label_28cc9c;
        case 0x28cca0u: goto label_28cca0;
        case 0x28cca4u: goto label_28cca4;
        case 0x28cca8u: goto label_28cca8;
        case 0x28ccacu: goto label_28ccac;
        case 0x28ccb0u: goto label_28ccb0;
        case 0x28ccb4u: goto label_28ccb4;
        case 0x28ccb8u: goto label_28ccb8;
        case 0x28ccbcu: goto label_28ccbc;
        case 0x28ccc0u: goto label_28ccc0;
        case 0x28ccc4u: goto label_28ccc4;
        case 0x28ccc8u: goto label_28ccc8;
        case 0x28ccccu: goto label_28cccc;
        case 0x28ccd0u: goto label_28ccd0;
        case 0x28ccd4u: goto label_28ccd4;
        case 0x28ccd8u: goto label_28ccd8;
        case 0x28ccdcu: goto label_28ccdc;
        case 0x28cce0u: goto label_28cce0;
        case 0x28cce4u: goto label_28cce4;
        case 0x28cce8u: goto label_28cce8;
        case 0x28ccecu: goto label_28ccec;
        case 0x28ccf0u: goto label_28ccf0;
        case 0x28ccf4u: goto label_28ccf4;
        case 0x28ccf8u: goto label_28ccf8;
        case 0x28ccfcu: goto label_28ccfc;
        case 0x28cd00u: goto label_28cd00;
        case 0x28cd04u: goto label_28cd04;
        case 0x28cd08u: goto label_28cd08;
        case 0x28cd0cu: goto label_28cd0c;
        case 0x28cd10u: goto label_28cd10;
        case 0x28cd14u: goto label_28cd14;
        case 0x28cd18u: goto label_28cd18;
        case 0x28cd1cu: goto label_28cd1c;
        case 0x28cd20u: goto label_28cd20;
        case 0x28cd24u: goto label_28cd24;
        case 0x28cd28u: goto label_28cd28;
        case 0x28cd2cu: goto label_28cd2c;
        case 0x28cd30u: goto label_28cd30;
        case 0x28cd34u: goto label_28cd34;
        case 0x28cd38u: goto label_28cd38;
        case 0x28cd3cu: goto label_28cd3c;
        case 0x28cd40u: goto label_28cd40;
        case 0x28cd44u: goto label_28cd44;
        case 0x28cd48u: goto label_28cd48;
        case 0x28cd4cu: goto label_28cd4c;
        case 0x28cd50u: goto label_28cd50;
        case 0x28cd54u: goto label_28cd54;
        case 0x28cd58u: goto label_28cd58;
        case 0x28cd5cu: goto label_28cd5c;
        case 0x28cd60u: goto label_28cd60;
        case 0x28cd64u: goto label_28cd64;
        case 0x28cd68u: goto label_28cd68;
        case 0x28cd6cu: goto label_28cd6c;
        case 0x28cd70u: goto label_28cd70;
        case 0x28cd74u: goto label_28cd74;
        case 0x28cd78u: goto label_28cd78;
        case 0x28cd7cu: goto label_28cd7c;
        case 0x28cd80u: goto label_28cd80;
        case 0x28cd84u: goto label_28cd84;
        case 0x28cd88u: goto label_28cd88;
        case 0x28cd8cu: goto label_28cd8c;
        case 0x28cd90u: goto label_28cd90;
        case 0x28cd94u: goto label_28cd94;
        case 0x28cd98u: goto label_28cd98;
        case 0x28cd9cu: goto label_28cd9c;
        case 0x28cda0u: goto label_28cda0;
        case 0x28cda4u: goto label_28cda4;
        case 0x28cda8u: goto label_28cda8;
        case 0x28cdacu: goto label_28cdac;
        case 0x28cdb0u: goto label_28cdb0;
        case 0x28cdb4u: goto label_28cdb4;
        case 0x28cdb8u: goto label_28cdb8;
        default: break;
    }

    ctx->pc = 0x28cc20u;

label_28cc20:
    // 0x28cc20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28cc24:
    // 0x28cc24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28cc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28cc28:
    // 0x28cc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28cc2c:
    // 0x28cc2c: 0xc0683a8  jal         func_1A0EA0
label_28cc30:
    if (ctx->pc == 0x28CC30u) {
        ctx->pc = 0x28CC30u;
            // 0x28cc30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x28CC34u;
        goto label_28cc34;
    }
    ctx->pc = 0x28CC2Cu;
    SET_GPR_U32(ctx, 31, 0x28CC34u);
    ctx->pc = 0x28CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC2Cu;
            // 0x28cc30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC34u; }
        if (ctx->pc != 0x28CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC34u; }
        if (ctx->pc != 0x28CC34u) { return; }
    }
    ctx->pc = 0x28CC34u;
label_28cc34:
    // 0x28cc34: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x28cc34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_28cc38:
    // 0x28cc38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28cc3c:
    // 0x28cc3c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_28cc40:
    if (ctx->pc == 0x28CC40u) {
        ctx->pc = 0x28CC44u;
        goto label_28cc44;
    }
    ctx->pc = 0x28CC3Cu;
    {
        const bool branch_taken_0x28cc3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28cc3c) {
            ctx->pc = 0x28CC4Cu;
            goto label_28cc4c;
        }
    }
    ctx->pc = 0x28CC44u;
label_28cc44:
    // 0x28cc44: 0x10000058  b           . + 4 + (0x58 << 2)
label_28cc48:
    if (ctx->pc == 0x28CC48u) {
        ctx->pc = 0x28CC48u;
            // 0x28cc48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28CC4Cu;
        goto label_28cc4c;
    }
    ctx->pc = 0x28CC44u;
    {
        const bool branch_taken_0x28cc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC44u;
            // 0x28cc48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc44) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CC4Cu;
label_28cc4c:
    // 0x28cc4c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x28cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_28cc50:
    // 0x28cc50: 0x84700002  lh          $s0, 0x2($v1)
    ctx->pc = 0x28cc50u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_28cc54:
    // 0x28cc54: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x28cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_28cc58:
    // 0x28cc58: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_28cc5c:
    if (ctx->pc == 0x28CC5Cu) {
        ctx->pc = 0x28CC5Cu;
            // 0x28cc5c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x28CC60u;
        goto label_28cc60;
    }
    ctx->pc = 0x28CC58u;
    {
        const bool branch_taken_0x28cc58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC58u;
            // 0x28cc5c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc58) {
            ctx->pc = 0x28CC70u;
            goto label_28cc70;
        }
    }
    ctx->pc = 0x28CC60u;
label_28cc60:
    // 0x28cc60: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_28cc64:
    if (ctx->pc == 0x28CC64u) {
        ctx->pc = 0x28CC64u;
            // 0x28cc64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28CC68u;
        goto label_28cc68;
    }
    ctx->pc = 0x28CC60u;
    {
        const bool branch_taken_0x28cc60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC60u;
            // 0x28cc64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc60) {
            ctx->pc = 0x28CC70u;
            goto label_28cc70;
        }
    }
    ctx->pc = 0x28CC68u;
label_28cc68:
    // 0x28cc68: 0x10000050  b           . + 4 + (0x50 << 2)
label_28cc6c:
    if (ctx->pc == 0x28CC6Cu) {
        ctx->pc = 0x28CC6Cu;
            // 0x28cc6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x28CC70u;
        goto label_28cc70;
    }
    ctx->pc = 0x28CC68u;
    {
        const bool branch_taken_0x28cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC68u;
            // 0x28cc6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc68) {
            ctx->pc = 0x28CDACu;
            goto label_28cdac;
        }
    }
    ctx->pc = 0x28CC70u;
label_28cc70:
    // 0x28cc70: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28cc74:
    // 0x28cc74: 0xc0a0ed8  jal         func_283B60
label_28cc78:
    if (ctx->pc == 0x28CC78u) {
        ctx->pc = 0x28CC78u;
            // 0x28cc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CC7Cu;
        goto label_28cc7c;
    }
    ctx->pc = 0x28CC74u;
    SET_GPR_U32(ctx, 31, 0x28CC7Cu);
    ctx->pc = 0x28CC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC74u;
            // 0x28cc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC7Cu; }
        if (ctx->pc != 0x28CC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC7Cu; }
        if (ctx->pc != 0x28CC7Cu) { return; }
    }
    ctx->pc = 0x28CC7Cu;
label_28cc7c:
    // 0x28cc7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28cc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cc80:
    // 0x28cc80: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_28cc84:
    if (ctx->pc == 0x28CC84u) {
        ctx->pc = 0x28CC84u;
            // 0x28cc84: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x28CC88u;
        goto label_28cc88;
    }
    ctx->pc = 0x28CC80u;
    {
        const bool branch_taken_0x28cc80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC80u;
            // 0x28cc84: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc80) {
            ctx->pc = 0x28CC90u;
            goto label_28cc90;
        }
    }
    ctx->pc = 0x28CC88u;
label_28cc88:
    // 0x28cc88: 0x10000047  b           . + 4 + (0x47 << 2)
label_28cc8c:
    if (ctx->pc == 0x28CC8Cu) {
        ctx->pc = 0x28CC8Cu;
            // 0x28cc8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28CC90u;
        goto label_28cc90;
    }
    ctx->pc = 0x28CC88u;
    {
        const bool branch_taken_0x28cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC88u;
            // 0x28cc8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc88) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CC90u;
label_28cc90:
    // 0x28cc90: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
label_28cc94:
    if (ctx->pc == 0x28CC94u) {
        ctx->pc = 0x28CC94u;
            // 0x28cc94: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x28CC98u;
        goto label_28cc98;
    }
    ctx->pc = 0x28CC90u;
    {
        const bool branch_taken_0x28cc90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC90u;
            // 0x28cc94: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc90) {
            ctx->pc = 0x28CD10u;
            goto label_28cd10;
        }
    }
    ctx->pc = 0x28CC98u;
label_28cc98:
    // 0x28cc98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_28cc9c:
    // 0x28cc9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28cc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28cca0:
    // 0x28cca0: 0xc05af3c  jal         func_16BCF0
label_28cca4:
    if (ctx->pc == 0x28CCA4u) {
        ctx->pc = 0x28CCA4u;
            // 0x28cca4: 0x24a5d6e8  addiu       $a1, $a1, -0x2918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956776));
        ctx->pc = 0x28CCA8u;
        goto label_28cca8;
    }
    ctx->pc = 0x28CCA0u;
    SET_GPR_U32(ctx, 31, 0x28CCA8u);
    ctx->pc = 0x28CCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCA0u;
            // 0x28cca4: 0x24a5d6e8  addiu       $a1, $a1, -0x2918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCA8u; }
        if (ctx->pc != 0x28CCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCA8u; }
        if (ctx->pc != 0x28CCA8u) { return; }
    }
    ctx->pc = 0x28CCA8u;
label_28cca8:
    // 0x28cca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28cca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ccac:
    // 0x28ccac: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_28ccb0:
    if (ctx->pc == 0x28CCB0u) {
        ctx->pc = 0x28CCB0u;
            // 0x28ccb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CCB4u;
        goto label_28ccb4;
    }
    ctx->pc = 0x28CCACu;
    {
        const bool branch_taken_0x28ccac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCACu;
            // 0x28ccb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccac) {
            ctx->pc = 0x28CD08u;
            goto label_28cd08;
        }
    }
    ctx->pc = 0x28CCB4u;
label_28ccb4:
    // 0x28ccb4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28ccb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28ccb8:
    // 0x28ccb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ccbc:
    // 0x28ccbc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x28ccbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_28ccc0:
    // 0x28ccc0: 0x320f809  jalr        $t9
label_28ccc4:
    if (ctx->pc == 0x28CCC4u) {
        ctx->pc = 0x28CCC4u;
            // 0x28ccc4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28CCC8u;
        goto label_28ccc8;
    }
    ctx->pc = 0x28CCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28CCC8u);
        ctx->pc = 0x28CCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCC0u;
            // 0x28ccc4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28CCC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28CCC8u; }
            if (ctx->pc != 0x28CCC8u) { return; }
        }
        }
    }
    ctx->pc = 0x28CCC8u;
label_28ccc8:
    // 0x28ccc8: 0x27b10034  addiu       $s1, $sp, 0x34
    ctx->pc = 0x28ccc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_28cccc:
    // 0x28cccc: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x28ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
label_28ccd0:
    // 0x28ccd0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ccd4:
    // 0x28ccd4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x28ccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_28ccd8:
    // 0x28ccd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ccd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ccdc:
    // 0x28ccdc: 0x0  nop
    ctx->pc = 0x28ccdcu;
    // NOP
label_28cce0:
    // 0x28cce0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x28cce0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28cce4:
    // 0x28cce4: 0xc04c374  jal         func_130DD0
label_28cce8:
    if (ctx->pc == 0x28CCE8u) {
        ctx->pc = 0x28CCE8u;
            // 0x28cce8: 0xe62c0000  swc1        $f12, 0x0($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x28CCECu;
        goto label_28ccec;
    }
    ctx->pc = 0x28CCE4u;
    SET_GPR_U32(ctx, 31, 0x28CCECu);
    ctx->pc = 0x28CCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCE4u;
            // 0x28cce8: 0xe62c0000  swc1        $f12, 0x0($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCECu; }
        if (ctx->pc != 0x28CCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCECu; }
        if (ctx->pc != 0x28CCECu) { return; }
    }
    ctx->pc = 0x28CCECu;
label_28ccec:
    // 0x28ccec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_28ccf0:
    // 0x28ccf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ccf4:
    // 0x28ccf4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28ccf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28ccf8:
    // 0x28ccf8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x28ccf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_28ccfc:
    // 0x28ccfc: 0x320f809  jalr        $t9
label_28cd00:
    if (ctx->pc == 0x28CD00u) {
        ctx->pc = 0x28CD00u;
            // 0x28cd00: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28CD04u;
        goto label_28cd04;
    }
    ctx->pc = 0x28CCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28CD04u);
        ctx->pc = 0x28CD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCFCu;
            // 0x28cd00: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28CD04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28CD04u; }
            if (ctx->pc != 0x28CD04u) { return; }
        }
        }
    }
    ctx->pc = 0x28CD04u;
label_28cd04:
    // 0x28cd04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28cd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cd08:
    // 0x28cd08: 0x10000027  b           . + 4 + (0x27 << 2)
label_28cd0c:
    if (ctx->pc == 0x28CD0Cu) {
        ctx->pc = 0x28CD10u;
        goto label_28cd10;
    }
    ctx->pc = 0x28CD08u;
    {
        const bool branch_taken_0x28cd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd08) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CD10u;
label_28cd10:
    // 0x28cd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28cd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28cd14:
    // 0x28cd14: 0xc05af3c  jal         func_16BCF0
label_28cd18:
    if (ctx->pc == 0x28CD18u) {
        ctx->pc = 0x28CD18u;
            // 0x28cd18: 0x24a5d6f0  addiu       $a1, $a1, -0x2910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956784));
        ctx->pc = 0x28CD1Cu;
        goto label_28cd1c;
    }
    ctx->pc = 0x28CD14u;
    SET_GPR_U32(ctx, 31, 0x28CD1Cu);
    ctx->pc = 0x28CD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD14u;
            // 0x28cd18: 0x24a5d6f0  addiu       $a1, $a1, -0x2910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD1Cu; }
        if (ctx->pc != 0x28CD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD1Cu; }
        if (ctx->pc != 0x28CD1Cu) { return; }
    }
    ctx->pc = 0x28CD1Cu;
label_28cd1c:
    // 0x28cd1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28cd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28cd20:
    // 0x28cd20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_28cd24:
    // 0x28cd24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28cd24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cd28:
    // 0x28cd28: 0xc05af3c  jal         func_16BCF0
label_28cd2c:
    if (ctx->pc == 0x28CD2Cu) {
        ctx->pc = 0x28CD2Cu;
            // 0x28cd2c: 0x24a5d6f8  addiu       $a1, $a1, -0x2908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956792));
        ctx->pc = 0x28CD30u;
        goto label_28cd30;
    }
    ctx->pc = 0x28CD28u;
    SET_GPR_U32(ctx, 31, 0x28CD30u);
    ctx->pc = 0x28CD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD28u;
            // 0x28cd2c: 0x24a5d6f8  addiu       $a1, $a1, -0x2908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD30u; }
        if (ctx->pc != 0x28CD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD30u; }
        if (ctx->pc != 0x28CD30u) { return; }
    }
    ctx->pc = 0x28CD30u;
label_28cd30:
    // 0x28cd30: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_28cd34:
    if (ctx->pc == 0x28CD34u) {
        ctx->pc = 0x28CD34u;
            // 0x28cd34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CD38u;
        goto label_28cd38;
    }
    ctx->pc = 0x28CD30u;
    {
        const bool branch_taken_0x28cd30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD30u;
            // 0x28cd34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd30) {
            ctx->pc = 0x28CD40u;
            goto label_28cd40;
        }
    }
    ctx->pc = 0x28CD38u;
label_28cd38:
    // 0x28cd38: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_28cd3c:
    if (ctx->pc == 0x28CD3Cu) {
        ctx->pc = 0x28CD40u;
        goto label_28cd40;
    }
    ctx->pc = 0x28CD38u;
    {
        const bool branch_taken_0x28cd38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cd38) {
            ctx->pc = 0x28CD48u;
            goto label_28cd48;
        }
    }
    ctx->pc = 0x28CD40u;
label_28cd40:
    // 0x28cd40: 0x10000019  b           . + 4 + (0x19 << 2)
label_28cd44:
    if (ctx->pc == 0x28CD44u) {
        ctx->pc = 0x28CD44u;
            // 0x28cd44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28CD48u;
        goto label_28cd48;
    }
    ctx->pc = 0x28CD40u;
    {
        const bool branch_taken_0x28cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD40u;
            // 0x28cd44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd40) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CD48u;
label_28cd48:
    // 0x28cd48: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x28cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28cd4c:
    // 0x28cd4c: 0xc05831c  jal         func_160C70
label_28cd50:
    if (ctx->pc == 0x28CD50u) {
        ctx->pc = 0x28CD50u;
            // 0x28cd50: 0xc44c2f6c  lwc1        $f12, 0x2F6C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x28CD54u;
        goto label_28cd54;
    }
    ctx->pc = 0x28CD4Cu;
    SET_GPR_U32(ctx, 31, 0x28CD54u);
    ctx->pc = 0x28CD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD4Cu;
            // 0x28cd50: 0xc44c2f6c  lwc1        $f12, 0x2F6C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD54u; }
        if (ctx->pc != 0x28CD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD54u; }
        if (ctx->pc != 0x28CD54u) { return; }
    }
    ctx->pc = 0x28CD54u;
label_28cd54:
    // 0x28cd54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28cd58:
    // 0x28cd58: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_28cd5c:
    if (ctx->pc == 0x28CD5Cu) {
        ctx->pc = 0x28CD5Cu;
            // 0x28cd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CD60u;
        goto label_28cd60;
    }
    ctx->pc = 0x28CD58u;
    {
        const bool branch_taken_0x28cd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28CD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD58u;
            // 0x28cd5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd58) {
            ctx->pc = 0x28CD88u;
            goto label_28cd88;
        }
    }
    ctx->pc = 0x28CD60u;
label_28cd60:
    // 0x28cd60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28cd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28cd64:
    // 0x28cd64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28cd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cd68:
    // 0x28cd68: 0xc04df68  jal         func_137DA0
label_28cd6c:
    if (ctx->pc == 0x28CD6Cu) {
        ctx->pc = 0x28CD6Cu;
            // 0x28cd6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CD70u;
        goto label_28cd70;
    }
    ctx->pc = 0x28CD68u;
    SET_GPR_U32(ctx, 31, 0x28CD70u);
    ctx->pc = 0x28CD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD68u;
            // 0x28cd6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    if (runtime->hasFunction(0x137DA0u)) {
        auto targetFn = runtime->lookupFunction(0x137DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD70u; }
        if (ctx->pc != 0x28CD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamDraw__8mgCFrameFii_0x137da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD70u; }
        if (ctx->pc != 0x28CD70u) { return; }
    }
    ctx->pc = 0x28CD70u;
label_28cd70:
    // 0x28cd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cd74:
    // 0x28cd74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28cd78:
    // 0x28cd78: 0xc04df68  jal         func_137DA0
label_28cd7c:
    if (ctx->pc == 0x28CD7Cu) {
        ctx->pc = 0x28CD7Cu;
            // 0x28cd7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CD80u;
        goto label_28cd80;
    }
    ctx->pc = 0x28CD78u;
    SET_GPR_U32(ctx, 31, 0x28CD80u);
    ctx->pc = 0x28CD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD78u;
            // 0x28cd7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    if (runtime->hasFunction(0x137DA0u)) {
        auto targetFn = runtime->lookupFunction(0x137DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD80u; }
        if (ctx->pc != 0x28CD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamDraw__8mgCFrameFii_0x137da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD80u; }
        if (ctx->pc != 0x28CD80u) { return; }
    }
    ctx->pc = 0x28CD80u;
label_28cd80:
    // 0x28cd80: 0x10000009  b           . + 4 + (0x9 << 2)
label_28cd84:
    if (ctx->pc == 0x28CD84u) {
        ctx->pc = 0x28CD84u;
            // 0x28cd84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28CD88u;
        goto label_28cd88;
    }
    ctx->pc = 0x28CD80u;
    {
        const bool branch_taken_0x28cd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD80u;
            // 0x28cd84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd80) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CD88u;
label_28cd88:
    // 0x28cd88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28cd8c:
    // 0x28cd8c: 0xc04df68  jal         func_137DA0
label_28cd90:
    if (ctx->pc == 0x28CD90u) {
        ctx->pc = 0x28CD90u;
            // 0x28cd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CD94u;
        goto label_28cd94;
    }
    ctx->pc = 0x28CD8Cu;
    SET_GPR_U32(ctx, 31, 0x28CD94u);
    ctx->pc = 0x28CD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD8Cu;
            // 0x28cd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    if (runtime->hasFunction(0x137DA0u)) {
        auto targetFn = runtime->lookupFunction(0x137DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD94u; }
        if (ctx->pc != 0x28CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamDraw__8mgCFrameFii_0x137da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD94u; }
        if (ctx->pc != 0x28CD94u) { return; }
    }
    ctx->pc = 0x28CD94u;
label_28cd94:
    // 0x28cd94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cd98:
    // 0x28cd98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28cd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cd9c:
    // 0x28cd9c: 0xc04df68  jal         func_137DA0
label_28cda0:
    if (ctx->pc == 0x28CDA0u) {
        ctx->pc = 0x28CDA0u;
            // 0x28cda0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CDA4u;
        goto label_28cda4;
    }
    ctx->pc = 0x28CD9Cu;
    SET_GPR_U32(ctx, 31, 0x28CDA4u);
    ctx->pc = 0x28CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD9Cu;
            // 0x28cda0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DA0u;
    if (runtime->hasFunction(0x137DA0u)) {
        auto targetFn = runtime->lookupFunction(0x137DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDA4u; }
        if (ctx->pc != 0x28CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamDraw__8mgCFrameFii_0x137da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDA4u; }
        if (ctx->pc != 0x28CDA4u) { return; }
    }
    ctx->pc = 0x28CDA4u;
label_28cda4:
    // 0x28cda4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28cda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cda8:
    // 0x28cda8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28cdac:
    // 0x28cdac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28cdacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28cdb0:
    // 0x28cdb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28cdb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28cdb4:
    // 0x28cdb4: 0x3e00008  jr          $ra
label_28cdb8:
    if (ctx->pc == 0x28CDB8u) {
        ctx->pc = 0x28CDB8u;
            // 0x28cdb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28CDBCu;
        goto label_fallthrough_0x28cdb4;
    }
    ctx->pc = 0x28CDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDB4u;
            // 0x28cdb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28cdb4:
    ctx->pc = 0x28CDBCu;
}
