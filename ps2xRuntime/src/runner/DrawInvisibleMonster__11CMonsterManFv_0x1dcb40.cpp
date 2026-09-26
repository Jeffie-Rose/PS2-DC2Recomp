#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawInvisibleMonster__11CMonsterManFv
// Address: 0x1dcb40 - 0x1dccac
void DrawInvisibleMonster__11CMonsterManFv_0x1dcb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawInvisibleMonster__11CMonsterManFv_0x1dcb40");
#endif

    switch (ctx->pc) {
        case 0x1dcb40u: goto label_1dcb40;
        case 0x1dcb44u: goto label_1dcb44;
        case 0x1dcb48u: goto label_1dcb48;
        case 0x1dcb4cu: goto label_1dcb4c;
        case 0x1dcb50u: goto label_1dcb50;
        case 0x1dcb54u: goto label_1dcb54;
        case 0x1dcb58u: goto label_1dcb58;
        case 0x1dcb5cu: goto label_1dcb5c;
        case 0x1dcb60u: goto label_1dcb60;
        case 0x1dcb64u: goto label_1dcb64;
        case 0x1dcb68u: goto label_1dcb68;
        case 0x1dcb6cu: goto label_1dcb6c;
        case 0x1dcb70u: goto label_1dcb70;
        case 0x1dcb74u: goto label_1dcb74;
        case 0x1dcb78u: goto label_1dcb78;
        case 0x1dcb7cu: goto label_1dcb7c;
        case 0x1dcb80u: goto label_1dcb80;
        case 0x1dcb84u: goto label_1dcb84;
        case 0x1dcb88u: goto label_1dcb88;
        case 0x1dcb8cu: goto label_1dcb8c;
        case 0x1dcb90u: goto label_1dcb90;
        case 0x1dcb94u: goto label_1dcb94;
        case 0x1dcb98u: goto label_1dcb98;
        case 0x1dcb9cu: goto label_1dcb9c;
        case 0x1dcba0u: goto label_1dcba0;
        case 0x1dcba4u: goto label_1dcba4;
        case 0x1dcba8u: goto label_1dcba8;
        case 0x1dcbacu: goto label_1dcbac;
        case 0x1dcbb0u: goto label_1dcbb0;
        case 0x1dcbb4u: goto label_1dcbb4;
        case 0x1dcbb8u: goto label_1dcbb8;
        case 0x1dcbbcu: goto label_1dcbbc;
        case 0x1dcbc0u: goto label_1dcbc0;
        case 0x1dcbc4u: goto label_1dcbc4;
        case 0x1dcbc8u: goto label_1dcbc8;
        case 0x1dcbccu: goto label_1dcbcc;
        case 0x1dcbd0u: goto label_1dcbd0;
        case 0x1dcbd4u: goto label_1dcbd4;
        case 0x1dcbd8u: goto label_1dcbd8;
        case 0x1dcbdcu: goto label_1dcbdc;
        case 0x1dcbe0u: goto label_1dcbe0;
        case 0x1dcbe4u: goto label_1dcbe4;
        case 0x1dcbe8u: goto label_1dcbe8;
        case 0x1dcbecu: goto label_1dcbec;
        case 0x1dcbf0u: goto label_1dcbf0;
        case 0x1dcbf4u: goto label_1dcbf4;
        case 0x1dcbf8u: goto label_1dcbf8;
        case 0x1dcbfcu: goto label_1dcbfc;
        case 0x1dcc00u: goto label_1dcc00;
        case 0x1dcc04u: goto label_1dcc04;
        case 0x1dcc08u: goto label_1dcc08;
        case 0x1dcc0cu: goto label_1dcc0c;
        case 0x1dcc10u: goto label_1dcc10;
        case 0x1dcc14u: goto label_1dcc14;
        case 0x1dcc18u: goto label_1dcc18;
        case 0x1dcc1cu: goto label_1dcc1c;
        case 0x1dcc20u: goto label_1dcc20;
        case 0x1dcc24u: goto label_1dcc24;
        case 0x1dcc28u: goto label_1dcc28;
        case 0x1dcc2cu: goto label_1dcc2c;
        case 0x1dcc30u: goto label_1dcc30;
        case 0x1dcc34u: goto label_1dcc34;
        case 0x1dcc38u: goto label_1dcc38;
        case 0x1dcc3cu: goto label_1dcc3c;
        case 0x1dcc40u: goto label_1dcc40;
        case 0x1dcc44u: goto label_1dcc44;
        case 0x1dcc48u: goto label_1dcc48;
        case 0x1dcc4cu: goto label_1dcc4c;
        case 0x1dcc50u: goto label_1dcc50;
        case 0x1dcc54u: goto label_1dcc54;
        case 0x1dcc58u: goto label_1dcc58;
        case 0x1dcc5cu: goto label_1dcc5c;
        case 0x1dcc60u: goto label_1dcc60;
        case 0x1dcc64u: goto label_1dcc64;
        case 0x1dcc68u: goto label_1dcc68;
        case 0x1dcc6cu: goto label_1dcc6c;
        case 0x1dcc70u: goto label_1dcc70;
        case 0x1dcc74u: goto label_1dcc74;
        case 0x1dcc78u: goto label_1dcc78;
        case 0x1dcc7cu: goto label_1dcc7c;
        case 0x1dcc80u: goto label_1dcc80;
        case 0x1dcc84u: goto label_1dcc84;
        case 0x1dcc88u: goto label_1dcc88;
        case 0x1dcc8cu: goto label_1dcc8c;
        case 0x1dcc90u: goto label_1dcc90;
        case 0x1dcc94u: goto label_1dcc94;
        case 0x1dcc98u: goto label_1dcc98;
        case 0x1dcc9cu: goto label_1dcc9c;
        case 0x1dcca0u: goto label_1dcca0;
        case 0x1dcca4u: goto label_1dcca4;
        case 0x1dcca8u: goto label_1dcca8;
        default: break;
    }

    ctx->pc = 0x1dcb40u;

label_1dcb40:
    // 0x1dcb40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dcb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1dcb44:
    // 0x1dcb44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1dcb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1dcb48:
    // 0x1dcb48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1dcb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1dcb4c:
    // 0x1dcb4c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dcb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1dcb50:
    // 0x1dcb50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dcb50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb54:
    // 0x1dcb54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dcb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1dcb58:
    // 0x1dcb58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dcb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dcb5c:
    // 0x1dcb5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dcb5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb60:
    // 0x1dcb60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dcb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1dcb64:
    // 0x1dcb64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dcb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb68:
    // 0x1dcb68: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1dcb68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1dcb6c:
    // 0x1dcb6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dcb6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1dcb70:
    // 0x1dcb70: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x1dcb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_1dcb74:
    // 0x1dcb74: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1dcb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1dcb78:
    // 0x1dcb78: 0x8c650484  lw          $a1, 0x484($v1)
    ctx->pc = 0x1dcb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1dcb7c:
    // 0x1dcb7c: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_1dcb80:
    if (ctx->pc == 0x1DCB80u) {
        ctx->pc = 0x1DCB80u;
            // 0x1dcb80: 0x24730484  addiu       $s3, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->pc = 0x1DCB84u;
        goto label_1dcb84;
    }
    ctx->pc = 0x1DCB7Cu;
    {
        const bool branch_taken_0x1dcb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB7Cu;
            // 0x1dcb80: 0x24730484  addiu       $s3, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb7c) {
            ctx->pc = 0x1DCC78u;
            goto label_1dcc78;
        }
    }
    ctx->pc = 0x1DCB84u;
label_1dcb84:
    // 0x1dcb84: 0x84a4068a  lh          $a0, 0x68A($a1)
    ctx->pc = 0x1dcb84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1674)));
label_1dcb88:
    // 0x1dcb88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dcb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dcb8c:
    // 0x1dcb8c: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
label_1dcb90:
    if (ctx->pc == 0x1DCB90u) {
        ctx->pc = 0x1DCB94u;
        goto label_1dcb94;
    }
    ctx->pc = 0x1DCB8Cu;
    {
        const bool branch_taken_0x1dcb8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dcb8c) {
            ctx->pc = 0x1DCC78u;
            goto label_1dcc78;
        }
    }
    ctx->pc = 0x1DCB94u;
label_1dcb94:
    // 0x1dcb94: 0xc4b40100  lwc1        $f20, 0x100($a1)
    ctx->pc = 0x1dcb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dcb98:
    // 0x1dcb98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dcb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dcb9c:
    // 0x1dcb9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dcb9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dcba0:
    // 0x1dcba0: 0x0  nop
    ctx->pc = 0x1dcba0u;
    // NOP
label_1dcba4:
    // 0x1dcba4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1dcba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcba8:
    // 0x1dcba8: 0x0  nop
    ctx->pc = 0x1dcba8u;
    // NOP
label_1dcbac:
    // 0x1dcbac: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1dcbb0:
    if (ctx->pc == 0x1DCBB0u) {
        ctx->pc = 0x1DCBB0u;
            // 0x1dcbb0: 0x24a40100  addiu       $a0, $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
        ctx->pc = 0x1DCBB4u;
        goto label_1dcbb4;
    }
    ctx->pc = 0x1DCBACu;
    {
        const bool branch_taken_0x1dcbac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBACu;
            // 0x1dcbb0: 0x24a40100  addiu       $a0, $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbac) {
            ctx->pc = 0x1DCBDCu;
            goto label_1dcbdc;
        }
    }
    ctx->pc = 0x1DCBB4u;
label_1dcbb4:
    // 0x1dcbb4: 0xc4a012e8  lwc1        $f0, 0x12E8($a1)
    ctx->pc = 0x1dcbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcbb8:
    // 0x1dcbb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dcbb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcbbc:
    // 0x1dcbbc: 0x0  nop
    ctx->pc = 0x1dcbbcu;
    // NOP
label_1dcbc0:
    // 0x1dcbc0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1dcbc4:
    if (ctx->pc == 0x1DCBC4u) {
        ctx->pc = 0x1DCBC8u;
        goto label_1dcbc8;
    }
    ctx->pc = 0x1DCBC0u;
    {
        const bool branch_taken_0x1dcbc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcbc0) {
            ctx->pc = 0x1DCBDCu;
            goto label_1dcbdc;
        }
    }
    ctx->pc = 0x1DCBC8u;
label_1dcbc8:
    // 0x1dcbc8: 0xc4a012ec  lwc1        $f0, 0x12EC($a1)
    ctx->pc = 0x1dcbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcbcc:
    // 0x1dcbcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dcbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcbd0:
    // 0x1dcbd0: 0x0  nop
    ctx->pc = 0x1dcbd0u;
    // NOP
label_1dcbd4:
    // 0x1dcbd4: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_1dcbd8:
    if (ctx->pc == 0x1DCBD8u) {
        ctx->pc = 0x1DCBDCu;
        goto label_1dcbdc;
    }
    ctx->pc = 0x1DCBD4u;
    {
        const bool branch_taken_0x1dcbd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcbd4) {
            ctx->pc = 0x1DCC78u;
            goto label_1dcc78;
        }
    }
    ctx->pc = 0x1DCBDCu;
label_1dcbdc:
    // 0x1dcbdc: 0x0  nop
    ctx->pc = 0x1dcbdcu;
    // NOP
label_1dcbe0:
    // 0x1dcbe0: 0xc4a212e8  lwc1        $f2, 0x12E8($a1)
    ctx->pc = 0x1dcbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dcbe4:
    // 0x1dcbe4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dcbe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dcbe8:
    // 0x1dcbe8: 0x0  nop
    ctx->pc = 0x1dcbe8u;
    // NOP
label_1dcbec:
    // 0x1dcbec: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1dcbecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcbf0:
    // 0x1dcbf0: 0x0  nop
    ctx->pc = 0x1dcbf0u;
    // NOP
label_1dcbf4:
    // 0x1dcbf4: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_1dcbf8:
    if (ctx->pc == 0x1DCBF8u) {
        ctx->pc = 0x1DCBFCu;
        goto label_1dcbfc;
    }
    ctx->pc = 0x1DCBF4u;
    {
        const bool branch_taken_0x1dcbf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcbf4) {
            ctx->pc = 0x1DCC78u;
            goto label_1dcc78;
        }
    }
    ctx->pc = 0x1DCBFCu;
label_1dcbfc:
    // 0x1dcbfc: 0xc4a012ec  lwc1        $f0, 0x12EC($a1)
    ctx->pc = 0x1dcbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcc00:
    // 0x1dcc00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dcc00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcc04:
    // 0x1dcc04: 0x0  nop
    ctx->pc = 0x1dcc04u;
    // NOP
label_1dcc08:
    // 0x1dcc08: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_1dcc0c:
    if (ctx->pc == 0x1DCC0Cu) {
        ctx->pc = 0x1DCC10u;
        goto label_1dcc10;
    }
    ctx->pc = 0x1DCC08u;
    {
        const bool branch_taken_0x1dcc08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcc08) {
            ctx->pc = 0x1DCC78u;
            goto label_1dcc78;
        }
    }
    ctx->pc = 0x1DCC10u;
label_1dcc10:
    // 0x1dcc10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dcc14:
    // 0x1dcc14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dcc18:
    // 0x1dcc18: 0x0  nop
    ctx->pc = 0x1dcc18u;
    // NOP
label_1dcc1c:
    // 0x1dcc1c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1dcc1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcc20:
    // 0x1dcc20: 0x0  nop
    ctx->pc = 0x1dcc20u;
    // NOP
label_1dcc24:
    // 0x1dcc24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1dcc28:
    if (ctx->pc == 0x1DCC28u) {
        ctx->pc = 0x1DCC2Cu;
        goto label_1dcc2c;
    }
    ctx->pc = 0x1DCC24u;
    {
        const bool branch_taken_0x1dcc24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcc24) {
            ctx->pc = 0x1DCC30u;
            goto label_1dcc30;
        }
    }
    ctx->pc = 0x1DCC2Cu;
label_1dcc2c:
    // 0x1dcc2c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1dcc2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1dcc30:
    // 0x1dcc30: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1dcc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dcc34:
    // 0x1dcc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc38:
    // 0x1dcc38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dcc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc3c:
    // 0x1dcc3c: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1dcc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dcc40:
    // 0x1dcc40: 0xc44012ec  lwc1        $f0, 0x12EC($v0)
    ctx->pc = 0x1dcc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcc44:
    // 0x1dcc44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dcc44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1dcc48:
    // 0x1dcc48: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1dcc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1dcc4c:
    // 0x1dcc4c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1dcc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dcc50:
    // 0x1dcc50: 0x84421154  lh          $v0, 0x1154($v0)
    ctx->pc = 0x1dcc50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4436)));
label_1dcc54:
    // 0x1dcc54: 0xc04ba14  jal         func_12E850
label_1dcc58:
    if (ctx->pc == 0x1DCC58u) {
        ctx->pc = 0x1DCC58u;
            // 0x1dcc58: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1DCC5Cu;
        goto label_1dcc5c;
    }
    ctx->pc = 0x1DCC54u;
    SET_GPR_U32(ctx, 31, 0x1DCC5Cu);
    ctx->pc = 0x1DCC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC54u;
            // 0x1dcc58: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC5Cu; }
        if (ctx->pc != 0x1DCC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC5Cu; }
        if (ctx->pc != 0x1DCC5Cu) { return; }
    }
    ctx->pc = 0x1DCC5Cu;
label_1dcc5c:
    // 0x1dcc5c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1dcc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dcc60:
    // 0x1dcc60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dcc60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dcc64:
    // 0x1dcc64: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1dcc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1dcc68:
    // 0x1dcc68: 0x320f809  jalr        $t9
label_1dcc6c:
    if (ctx->pc == 0x1DCC6Cu) {
        ctx->pc = 0x1DCC70u;
        goto label_1dcc70;
    }
    ctx->pc = 0x1DCC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCC70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DCC70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC70u; }
            if (ctx->pc != 0x1DCC70u) { return; }
        }
        }
    }
    ctx->pc = 0x1DCC70u;
label_1dcc70:
    // 0x1dcc70: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dcc74:
    // 0x1dcc74: 0xe4740100  swc1        $f20, 0x100($v1)
    ctx->pc = 0x1dcc74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1dcc78:
    // 0x1dcc78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dcc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dcc7c:
    // 0x1dcc7c: 0x2a230018  slti        $v1, $s1, 0x18
    ctx->pc = 0x1dcc7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
label_1dcc80:
    // 0x1dcc80: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_1dcc84:
    if (ctx->pc == 0x1DCC84u) {
        ctx->pc = 0x1DCC84u;
            // 0x1dcc84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DCC88u;
        goto label_1dcc88;
    }
    ctx->pc = 0x1DCC80u;
    {
        const bool branch_taken_0x1dcc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC80u;
            // 0x1dcc84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc80) {
            ctx->pc = 0x1DCB74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcb74;
        }
    }
    ctx->pc = 0x1DCC88u;
label_1dcc88:
    // 0x1dcc88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1dcc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1dcc8c:
    // 0x1dcc8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dcc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dcc90:
    // 0x1dcc90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1dcc90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dcc94:
    // 0x1dcc94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dcc94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dcc98:
    // 0x1dcc98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dcc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dcc9c:
    // 0x1dcc9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dcc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dcca0:
    // 0x1dcca0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dcca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcca4:
    // 0x1dcca4: 0x3e00008  jr          $ra
label_1dcca8:
    if (ctx->pc == 0x1DCCA8u) {
        ctx->pc = 0x1DCCA8u;
            // 0x1dcca8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DCCACu;
        goto label_fallthrough_0x1dcca4;
    }
    ctx->pc = 0x1DCCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCA4u;
            // 0x1dcca8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dcca4:
    ctx->pc = 0x1DCCACu;
}
