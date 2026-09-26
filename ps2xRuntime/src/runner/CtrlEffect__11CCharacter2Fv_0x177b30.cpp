#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CtrlEffect__11CCharacter2Fv
// Address: 0x177b30 - 0x177bf4
void CtrlEffect__11CCharacter2Fv_0x177b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CtrlEffect__11CCharacter2Fv_0x177b30");
#endif

    switch (ctx->pc) {
        case 0x177b54u: goto label_177b54;
        case 0x177bbcu: goto label_177bbc;
        default: break;
    }

    ctx->pc = 0x177b30u;

    // 0x177b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x177b34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x177b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x177b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x177b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177b40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x177b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177b4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177b54:
    // 0x177b54: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x177b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x177b58: 0x8c8305f0  lw          $v1, 0x5F0($a0)
    ctx->pc = 0x177b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1520)));
    // 0x177b5c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x177B5Cu;
    {
        const bool branch_taken_0x177b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177b5c) {
            ctx->pc = 0x177BC4u;
            goto label_177bc4;
        }
    }
    ctx->pc = 0x177B64u;
    // 0x177b64: 0x8c8305f4  lw          $v1, 0x5F4($a0)
    ctx->pc = 0x177b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1524)));
    // 0x177b68: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x177B68u;
    {
        const bool branch_taken_0x177b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B68u;
            // 0x177b6c: 0x249205f4  addiu       $s2, $a0, 0x5F4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b68) {
            ctx->pc = 0x177BC4u;
            goto label_177bc4;
        }
    }
    ctx->pc = 0x177B70u;
    // 0x177b70: 0x8e630374  lw          $v1, 0x374($s3)
    ctx->pc = 0x177b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 884)));
    // 0x177b74: 0xc6640388  lwc1        $f4, 0x388($s3)
    ctx->pc = 0x177b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x177b78: 0x8c8405ec  lw          $a0, 0x5EC($a0)
    ctx->pc = 0x177b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1516)));
    // 0x177b7c: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x177b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x177b80: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x177b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177b84: 0xc48001dc  lwc1        $f0, 0x1DC($a0)
    ctx->pc = 0x177b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177b88: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x177b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x177b8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x177b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x177b90: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x177b90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x177b94: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x177b94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x177b98: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x177b98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x177b9c: 0x0  nop
    ctx->pc = 0x177b9cu;
    // NOP
    // 0x177ba0: 0x0  nop
    ctx->pc = 0x177ba0u;
    // NOP
    // 0x177ba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x177ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177ba8: 0x0  nop
    ctx->pc = 0x177ba8u;
    // NOP
    // 0x177bac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x177BACu;
    {
        const bool branch_taken_0x177bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x177bac) {
            ctx->pc = 0x177BC4u;
            goto label_177bc4;
        }
    }
    ctx->pc = 0x177BB4u;
    // 0x177bb4: 0xc060b8c  jal         func_182E30
    ctx->pc = 0x177BB4u;
    SET_GPR_U32(ctx, 31, 0x177BBCu);
    ctx->pc = 0x182E30u;
    if (runtime->hasFunction(0x182E30u)) {
        auto targetFn = runtime->lookupFunction(0x182E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BBCu; }
        if (ctx->pc != 0x177BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__14CEffectManagerFv_0x182e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BBCu; }
        if (ctx->pc != 0x177BBCu) { return; }
    }
    ctx->pc = 0x177BBCu;
label_177bbc:
    // 0x177bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177bc0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x177bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_177bc4:
    // 0x177bc4: 0x0  nop
    ctx->pc = 0x177bc4u;
    // NOP
    // 0x177bc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177bcc: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x177bccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x177bd0: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x177BD0u;
    {
        const bool branch_taken_0x177bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177BD0u;
            // 0x177bd4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bd0) {
            ctx->pc = 0x177B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177b54;
        }
    }
    ctx->pc = 0x177BD8u;
    // 0x177bd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177bdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177bec: 0x3e00008  jr          $ra
    ctx->pc = 0x177BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177BECu;
            // 0x177bf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177BF4u;
}
