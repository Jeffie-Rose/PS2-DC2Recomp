#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CRandomCircleFPf
// Address: 0x28bd50 - 0x28be38
void Draw__13CRandomCircleFPf_0x28bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CRandomCircleFPf_0x28bd50");
#endif

    switch (ctx->pc) {
        case 0x28bd50u: goto label_28bd50;
        case 0x28bd54u: goto label_28bd54;
        case 0x28bd58u: goto label_28bd58;
        case 0x28bd5cu: goto label_28bd5c;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bd64u: goto label_28bd64;
        case 0x28bd68u: goto label_28bd68;
        case 0x28bd6cu: goto label_28bd6c;
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd74u: goto label_28bd74;
        case 0x28bd78u: goto label_28bd78;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd80u: goto label_28bd80;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd88u: goto label_28bd88;
        case 0x28bd8cu: goto label_28bd8c;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bd94u: goto label_28bd94;
        case 0x28bd98u: goto label_28bd98;
        case 0x28bd9cu: goto label_28bd9c;
        case 0x28bda0u: goto label_28bda0;
        case 0x28bda4u: goto label_28bda4;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdacu: goto label_28bdac;
        case 0x28bdb0u: goto label_28bdb0;
        case 0x28bdb4u: goto label_28bdb4;
        case 0x28bdb8u: goto label_28bdb8;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc0u: goto label_28bdc0;
        case 0x28bdc4u: goto label_28bdc4;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bdccu: goto label_28bdcc;
        case 0x28bdd0u: goto label_28bdd0;
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bdd8u: goto label_28bdd8;
        case 0x28bddcu: goto label_28bddc;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bde4u: goto label_28bde4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdecu: goto label_28bdec;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28bdf8u: goto label_28bdf8;
        case 0x28bdfcu: goto label_28bdfc;
        case 0x28be00u: goto label_28be00;
        case 0x28be04u: goto label_28be04;
        case 0x28be08u: goto label_28be08;
        case 0x28be0cu: goto label_28be0c;
        case 0x28be10u: goto label_28be10;
        case 0x28be14u: goto label_28be14;
        case 0x28be18u: goto label_28be18;
        case 0x28be1cu: goto label_28be1c;
        case 0x28be20u: goto label_28be20;
        case 0x28be24u: goto label_28be24;
        case 0x28be28u: goto label_28be28;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be30u: goto label_28be30;
        case 0x28be34u: goto label_28be34;
        default: break;
    }

    ctx->pc = 0x28bd50u;

label_28bd50:
    // 0x28bd50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28bd54:
    // 0x28bd54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_28bd58:
    // 0x28bd58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28bd5c:
    // 0x28bd5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28bd60:
    // 0x28bd60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28bd64:
    // 0x28bd64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28bd64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28bd68:
    // 0x28bd68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28bd6c:
    // 0x28bd6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28bd6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28bd70:
    // 0x28bd70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28bd74:
    // 0x28bd74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28bd74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bd78:
    // 0x28bd78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28bd7c:
    // 0x28bd7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28bd7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bd80:
    // 0x28bd80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28bd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bd84:
    // 0x28bd84: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x28bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_28bd88:
    // 0x28bd88: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x28bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_28bd8c:
    // 0x28bd8c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_28bd90:
    if (ctx->pc == 0x28BD90u) {
        ctx->pc = 0x28BD90u;
            // 0x28bd90: 0x292a821  addu        $s5, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->pc = 0x28BD94u;
        goto label_28bd94;
    }
    ctx->pc = 0x28BD8Cu;
    {
        const bool branch_taken_0x28bd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD8Cu;
            // 0x28bd90: 0x292a821  addu        $s5, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd8c) {
            ctx->pc = 0x28BDFCu;
            goto label_28bdfc;
        }
    }
    ctx->pc = 0x28BD94u;
label_28bd94:
    // 0x28bd94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28bd98:
    // 0x28bd98: 0xc04c018  jal         func_130060
label_28bd9c:
    if (ctx->pc == 0x28BD9Cu) {
        ctx->pc = 0x28BD9Cu;
            // 0x28bd9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28BDA0u;
        goto label_28bda0;
    }
    ctx->pc = 0x28BD98u;
    SET_GPR_U32(ctx, 31, 0x28BDA0u);
    ctx->pc = 0x28BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD98u;
            // 0x28bd9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDA0u; }
        if (ctx->pc != 0x28BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDA0u; }
        if (ctx->pc != 0x28BDA0u) { return; }
    }
    ctx->pc = 0x28BDA0u;
label_28bda0:
    // 0x28bda0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x28bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_28bda4:
    // 0x28bda4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28bda4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28bda8:
    // 0x28bda8: 0x0  nop
    ctx->pc = 0x28bda8u;
    // NOP
label_28bdac:
    // 0x28bdac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28bdacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bdb0:
    // 0x28bdb0: 0x0  nop
    ctx->pc = 0x28bdb0u;
    // NOP
label_28bdb4:
    // 0x28bdb4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_28bdb8:
    if (ctx->pc == 0x28BDB8u) {
        ctx->pc = 0x28BDBCu;
        goto label_28bdbc;
    }
    ctx->pc = 0x28BDB4u;
    {
        const bool branch_taken_0x28bdb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bdb4) {
            ctx->pc = 0x28BDFCu;
            goto label_28bdfc;
        }
    }
    ctx->pc = 0x28BDBCu;
label_28bdbc:
    // 0x28bdbc: 0x8e990040  lw          $t9, 0x40($s4)
    ctx->pc = 0x28bdbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_28bdc0:
    // 0x28bdc0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28bdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28bdc4:
    // 0x28bdc4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28bdc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28bdc8:
    // 0x28bdc8: 0x320f809  jalr        $t9
label_28bdcc:
    if (ctx->pc == 0x28BDCCu) {
        ctx->pc = 0x28BDCCu;
            // 0x28bdcc: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->pc = 0x28BDD0u;
        goto label_28bdd0;
    }
    ctx->pc = 0x28BDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BDD0u);
        ctx->pc = 0x28BDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDC8u;
            // 0x28bdcc: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BDD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BDD0u; }
            if (ctx->pc != 0x28BDD0u) { return; }
        }
        }
    }
    ctx->pc = 0x28BDD0u;
label_28bdd0:
    // 0x28bdd0: 0x8e990040  lw          $t9, 0x40($s4)
    ctx->pc = 0x28bdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_28bdd4:
    // 0x28bdd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28bdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28bdd8:
    // 0x28bdd8: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x28bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_28bddc:
    // 0x28bddc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28bddcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_28bde0:
    // 0x28bde0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x28bde0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_28bde4:
    // 0x28bde4: 0x320f809  jalr        $t9
label_28bde8:
    if (ctx->pc == 0x28BDE8u) {
        ctx->pc = 0x28BDE8u;
            // 0x28bde8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x28BDECu;
        goto label_28bdec;
    }
    ctx->pc = 0x28BDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BDECu);
        ctx->pc = 0x28BDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDE4u;
            // 0x28bde8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BDECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BDECu; }
            if (ctx->pc != 0x28BDECu) { return; }
        }
        }
    }
    ctx->pc = 0x28BDECu;
label_28bdec:
    // 0x28bdec: 0x8e990040  lw          $t9, 0x40($s4)
    ctx->pc = 0x28bdecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_28bdf0:
    // 0x28bdf0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x28bdf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_28bdf4:
    // 0x28bdf4: 0x320f809  jalr        $t9
label_28bdf8:
    if (ctx->pc == 0x28BDF8u) {
        ctx->pc = 0x28BDF8u;
            // 0x28bdf8: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->pc = 0x28BDFCu;
        goto label_28bdfc;
    }
    ctx->pc = 0x28BDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BDFCu);
        ctx->pc = 0x28BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDF4u;
            // 0x28bdf8: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BDFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BDFCu; }
            if (ctx->pc != 0x28BDFCu) { return; }
        }
        }
    }
    ctx->pc = 0x28BDFCu;
label_28bdfc:
    // 0x28bdfc: 0x0  nop
    ctx->pc = 0x28bdfcu;
    // NOP
label_28be00:
    // 0x28be00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28be00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28be04:
    // 0x28be04: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x28be04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_28be08:
    // 0x28be08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28be08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_28be0c:
    // 0x28be0c: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_28be10:
    if (ctx->pc == 0x28BE10u) {
        ctx->pc = 0x28BE10u;
            // 0x28be10: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x28BE14u;
        goto label_28be14;
    }
    ctx->pc = 0x28BE0Cu;
    {
        const bool branch_taken_0x28be0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE0Cu;
            // 0x28be10: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be0c) {
            ctx->pc = 0x28BD84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28bd84;
        }
    }
    ctx->pc = 0x28BE14u;
label_28be14:
    // 0x28be14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28be14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28be18:
    // 0x28be18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28be18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28be1c:
    // 0x28be1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28be1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28be20:
    // 0x28be20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28be20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28be24:
    // 0x28be24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28be24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28be28:
    // 0x28be28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28be28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28be2c:
    // 0x28be2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28be2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28be30:
    // 0x28be30: 0x3e00008  jr          $ra
label_28be34:
    if (ctx->pc == 0x28BE34u) {
        ctx->pc = 0x28BE34u;
            // 0x28be34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x28BE38u;
        goto label_fallthrough_0x28be30;
    }
    ctx->pc = 0x28BE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE30u;
            // 0x28be34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28be30:
    ctx->pc = 0x28BE38u;
}
