#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckArea__13CRandomCircleFPff
// Address: 0x28bef0 - 0x28bf94
void CheckArea__13CRandomCircleFPff_0x28bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckArea__13CRandomCircleFPff_0x28bef0");
#endif

    switch (ctx->pc) {
        case 0x28bf28u: goto label_28bf28;
        case 0x28bf40u: goto label_28bf40;
        default: break;
    }

    ctx->pc = 0x28bef0u;

    // 0x28bef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28bef4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28bef8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x28befc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28befcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x28bf00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28bf00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28bf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28bf08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28bf08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28bf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28bf10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28bf10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28bf18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28bf18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28bf1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28bf20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28bf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf24: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x28bf24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_28bf28:
    // 0x28bf28: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x28bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x28bf2c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x28bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x28bf30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28BF30u;
    {
        const bool branch_taken_0x28bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF30u;
            // 0x28bf34: 0x2922021  addu        $a0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf30) {
            ctx->pc = 0x28BF58u;
            goto label_28bf58;
        }
    }
    ctx->pc = 0x28BF38u;
    // 0x28bf38: 0xc04c018  jal         func_130060
    ctx->pc = 0x28BF38u;
    SET_GPR_U32(ctx, 31, 0x28BF40u);
    ctx->pc = 0x28BF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF38u;
            // 0x28bf3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BF40u; }
        if (ctx->pc != 0x28BF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BF40u; }
        if (ctx->pc != 0x28BF40u) { return; }
    }
    ctx->pc = 0x28BF40u;
label_28bf40:
    // 0x28bf40: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28bf40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bf44: 0x0  nop
    ctx->pc = 0x28bf44u;
    // NOP
    // 0x28bf48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28BF48u;
    {
        const bool branch_taken_0x28bf48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF48u;
            // 0x28bf4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf48) {
            ctx->pc = 0x28BF58u;
            goto label_28bf58;
        }
    }
    ctx->pc = 0x28BF50u;
    // 0x28bf50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28BF50u;
    {
        const bool branch_taken_0x28bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF50u;
            // 0x28bf54: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf50) {
            ctx->pc = 0x28BF74u;
            goto label_28bf74;
        }
    }
    ctx->pc = 0x28BF58u;
label_28bf58:
    // 0x28bf58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28bf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28bf5c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28bf5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x28bf60: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x28bf60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28bf64: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28BF64u;
    {
        const bool branch_taken_0x28bf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF64u;
            // 0x28bf68: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf64) {
            ctx->pc = 0x28BF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28bf28;
        }
    }
    ctx->pc = 0x28BF6Cu;
    // 0x28bf6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bf70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28bf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28bf74:
    // 0x28bf74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28bf78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28bf78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28bf7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28bf7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28bf80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28bf80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bf84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28bf84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bf88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28bf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF8Cu;
            // 0x28bf90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BF94u;
}
