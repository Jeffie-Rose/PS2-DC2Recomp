#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEvent__9CGeoStoneFPf
// Address: 0x28bca0 - 0x28bd20
void CheckEvent__9CGeoStoneFPf_0x28bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEvent__9CGeoStoneFPf_0x28bca0");
#endif

    switch (ctx->pc) {
        case 0x28bca0u: goto label_28bca0;
        case 0x28bca4u: goto label_28bca4;
        case 0x28bca8u: goto label_28bca8;
        case 0x28bcacu: goto label_28bcac;
        case 0x28bcb0u: goto label_28bcb0;
        case 0x28bcb4u: goto label_28bcb4;
        case 0x28bcb8u: goto label_28bcb8;
        case 0x28bcbcu: goto label_28bcbc;
        case 0x28bcc0u: goto label_28bcc0;
        case 0x28bcc4u: goto label_28bcc4;
        case 0x28bcc8u: goto label_28bcc8;
        case 0x28bcccu: goto label_28bccc;
        case 0x28bcd0u: goto label_28bcd0;
        case 0x28bcd4u: goto label_28bcd4;
        case 0x28bcd8u: goto label_28bcd8;
        case 0x28bcdcu: goto label_28bcdc;
        case 0x28bce0u: goto label_28bce0;
        case 0x28bce4u: goto label_28bce4;
        case 0x28bce8u: goto label_28bce8;
        case 0x28bcecu: goto label_28bcec;
        case 0x28bcf0u: goto label_28bcf0;
        case 0x28bcf4u: goto label_28bcf4;
        case 0x28bcf8u: goto label_28bcf8;
        case 0x28bcfcu: goto label_28bcfc;
        case 0x28bd00u: goto label_28bd00;
        case 0x28bd04u: goto label_28bd04;
        case 0x28bd08u: goto label_28bd08;
        case 0x28bd0cu: goto label_28bd0c;
        case 0x28bd10u: goto label_28bd10;
        case 0x28bd14u: goto label_28bd14;
        case 0x28bd18u: goto label_28bd18;
        case 0x28bd1cu: goto label_28bd1c;
        default: break;
    }

    ctx->pc = 0x28bca0u;

label_28bca0:
    // 0x28bca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28bca4:
    // 0x28bca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28bca8:
    // 0x28bca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28bcac:
    // 0x28bcac: 0x8c820660  lw          $v0, 0x660($a0)
    ctx->pc = 0x28bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1632)));
label_28bcb0:
    // 0x28bcb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28bcb4:
    if (ctx->pc == 0x28BCB4u) {
        ctx->pc = 0x28BCB4u;
            // 0x28bcb4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28BCB8u;
        goto label_28bcb8;
    }
    ctx->pc = 0x28BCB0u;
    {
        const bool branch_taken_0x28bcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCB0u;
            // 0x28bcb4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcb0) {
            ctx->pc = 0x28BCC0u;
            goto label_28bcc0;
        }
    }
    ctx->pc = 0x28BCB8u;
label_28bcb8:
    // 0x28bcb8: 0x10000015  b           . + 4 + (0x15 << 2)
label_28bcbc:
    if (ctx->pc == 0x28BCBCu) {
        ctx->pc = 0x28BCBCu;
            // 0x28bcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28BCC0u;
        goto label_28bcc0;
    }
    ctx->pc = 0x28BCB8u;
    {
        const bool branch_taken_0x28bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCB8u;
            // 0x28bcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcb8) {
            ctx->pc = 0x28BD10u;
            goto label_28bd10;
        }
    }
    ctx->pc = 0x28BCC0u;
label_28bcc0:
    // 0x28bcc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28bcc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28bcc4:
    // 0x28bcc4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28bcc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28bcc8:
    // 0x28bcc8: 0x320f809  jalr        $t9
label_28bccc:
    if (ctx->pc == 0x28BCCCu) {
        ctx->pc = 0x28BCCCu;
            // 0x28bccc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x28BCD0u;
        goto label_28bcd0;
    }
    ctx->pc = 0x28BCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BCD0u);
        ctx->pc = 0x28BCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCC8u;
            // 0x28bccc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BCD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BCD0u; }
            if (ctx->pc != 0x28BCD0u) { return; }
        }
        }
    }
    ctx->pc = 0x28BCD0u;
label_28bcd0:
    // 0x28bcd0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bcd4:
    // 0x28bcd4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x28bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_28bcd8:
    // 0x28bcd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28bcdc:
    // 0x28bcdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bce0:
    // 0x28bce0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x28bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28bce4:
    // 0x28bce4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28bce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28bce8:
    // 0x28bce8: 0xc04c018  jal         func_130060
label_28bcec:
    if (ctx->pc == 0x28BCECu) {
        ctx->pc = 0x28BCECu;
            // 0x28bcec: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x28BCF0u;
        goto label_28bcf0;
    }
    ctx->pc = 0x28BCE8u;
    SET_GPR_U32(ctx, 31, 0x28BCF0u);
    ctx->pc = 0x28BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCE8u;
            // 0x28bcec: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BCF0u; }
        if (ctx->pc != 0x28BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BCF0u; }
        if (ctx->pc != 0x28BCF0u) { return; }
    }
    ctx->pc = 0x28BCF0u;
label_28bcf0:
    // 0x28bcf0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x28bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_28bcf4:
    // 0x28bcf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28bcf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28bcf8:
    // 0x28bcf8: 0x0  nop
    ctx->pc = 0x28bcf8u;
    // NOP
label_28bcfc:
    // 0x28bcfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28bcfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bd00:
    // 0x28bd00: 0x0  nop
    ctx->pc = 0x28bd00u;
    // NOP
label_28bd04:
    // 0x28bd04: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_28bd08:
    if (ctx->pc == 0x28BD08u) {
        ctx->pc = 0x28BD08u;
            // 0x28bd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28BD0Cu;
        goto label_28bd0c;
    }
    ctx->pc = 0x28BD04u;
    {
        const bool branch_taken_0x28bd04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD04u;
            // 0x28bd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd04) {
            ctx->pc = 0x28BD10u;
            goto label_28bd10;
        }
    }
    ctx->pc = 0x28BD0Cu;
label_28bd0c:
    // 0x28bd0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28bd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bd10:
    // 0x28bd10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28bd14:
    // 0x28bd14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28bd18:
    // 0x28bd18: 0x3e00008  jr          $ra
label_28bd1c:
    if (ctx->pc == 0x28BD1Cu) {
        ctx->pc = 0x28BD1Cu;
            // 0x28bd1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28BD20u;
        goto label_fallthrough_0x28bd18;
    }
    ctx->pc = 0x28BD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD18u;
            // 0x28bd1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28bd18:
    ctx->pc = 0x28BD20u;
}
