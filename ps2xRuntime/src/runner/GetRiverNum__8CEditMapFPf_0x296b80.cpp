#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRiverNum__8CEditMapFPf
// Address: 0x296b80 - 0x296cd8
void GetRiverNum__8CEditMapFPf_0x296b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRiverNum__8CEditMapFPf_0x296b80");
#endif

    switch (ctx->pc) {
        case 0x296bc0u: goto label_296bc0;
        case 0x296bd4u: goto label_296bd4;
        case 0x296be0u: goto label_296be0;
        case 0x296bf0u: goto label_296bf0;
        case 0x296c08u: goto label_296c08;
        case 0x296c2cu: goto label_296c2c;
        default: break;
    }

    ctx->pc = 0x296b80u;

    // 0x296b80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x296b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x296b84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x296b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x296b88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x296b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x296b8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x296b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x296b90: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x296b90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x296b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x296b98: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x296b98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x296b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x296ba0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x296ba0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ba4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x296ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x296ba8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x296ba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296bac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x296bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x296bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296bb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296bb8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x296BB8u;
    {
        const bool branch_taken_0x296bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296BB8u;
            // 0x296bbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bb8) {
            ctx->pc = 0x296C98u;
            goto label_296c98;
        }
    }
    ctx->pc = 0x296BC0u;
label_296bc0:
    // 0x296bc0: 0x8c510f54  lw          $s1, 0xF54($v0)
    ctx->pc = 0x296bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x296bc4: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x296BC4u;
    {
        const bool branch_taken_0x296bc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296BC4u;
            // 0x296bc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bc4) {
            ctx->pc = 0x296C90u;
            goto label_296c90;
        }
    }
    ctx->pc = 0x296BCCu;
    // 0x296bcc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x296BCCu;
    {
        const bool branch_taken_0x296bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296bcc) {
            ctx->pc = 0x296C7Cu;
            goto label_296c7c;
        }
    }
    ctx->pc = 0x296BD4u;
label_296bd4:
    // 0x296bd4: 0x0  nop
    ctx->pc = 0x296bd4u;
    // NOP
    // 0x296bd8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x296BD8u;
    {
        const bool branch_taken_0x296bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296BD8u;
            // 0x296bdc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bd8) {
            ctx->pc = 0x296C64u;
            goto label_296c64;
        }
    }
    ctx->pc = 0x296BE0u;
label_296be0:
    // 0x296be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296be4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296be8: 0xc0a6010  jal         func_298040
    ctx->pc = 0x296BE8u;
    SET_GPR_U32(ctx, 31, 0x296BF0u);
    ctx->pc = 0x296BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296BE8u;
            // 0x296bec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296BF0u; }
        if (ctx->pc != 0x296BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296BF0u; }
        if (ctx->pc != 0x296BF0u) { return; }
    }
    ctx->pc = 0x296BF0u;
label_296bf0:
    // 0x296bf0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x296BF0u;
    {
        const bool branch_taken_0x296bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296BF0u;
            // 0x296bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bf0) {
            ctx->pc = 0x296C5Cu;
            goto label_296c5c;
        }
    }
    ctx->pc = 0x296BF8u;
    // 0x296bf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296bfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x296bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c00: 0xc0a605c  jal         func_298170
    ctx->pc = 0x296C00u;
    SET_GPR_U32(ctx, 31, 0x296C08u);
    ctx->pc = 0x296C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296C00u;
            // 0x296c04: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298170u;
    if (runtime->hasFunction(0x298170u)) {
        auto targetFn = runtime->lookupFunction(0x298170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C08u; }
        if (ctx->pc != 0x296C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverPos__9CEditGridFiiPf_0x298170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C08u; }
        if (ctx->pc != 0x296C08u) { return; }
    }
    ctx->pc = 0x296C08u;
label_296c08:
    // 0x296c08: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x296c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x296c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296c10: 0x0  nop
    ctx->pc = 0x296c10u;
    // NOP
    // 0x296c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x296c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296c18: 0x0  nop
    ctx->pc = 0x296c18u;
    // NOP
    // 0x296c1c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x296C1Cu;
    {
        const bool branch_taken_0x296c1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x296C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296C1Cu;
            // 0x296c20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c1c) {
            ctx->pc = 0x296C58u;
            goto label_296c58;
        }
    }
    ctx->pc = 0x296C24u;
    // 0x296c24: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x296C24u;
    SET_GPR_U32(ctx, 31, 0x296C2Cu);
    ctx->pc = 0x296C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296C24u;
            // 0x296c28: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C2Cu; }
        if (ctx->pc != 0x296C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296C2Cu; }
        if (ctx->pc != 0x296C2Cu) { return; }
    }
    ctx->pc = 0x296C2Cu;
label_296c2c:
    // 0x296c2c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x296c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296c30: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x296c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
    // 0x296c34: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x296c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x296c38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x296c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x296c3c: 0xc6a3000c  lwc1        $f3, 0xC($s5)
    ctx->pc = 0x296c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x296c40: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x296c40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x296c44: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x296c44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x296c48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x296c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296c4c: 0x0  nop
    ctx->pc = 0x296c4cu;
    // NOP
    // 0x296c50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x296C50u;
    {
        const bool branch_taken_0x296c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x296c50) {
            ctx->pc = 0x296C5Cu;
            goto label_296c5c;
        }
    }
    ctx->pc = 0x296C58u;
label_296c58:
    // 0x296c58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296c5c:
    // 0x296c5c: 0x0  nop
    ctx->pc = 0x296c5cu;
    // NOP
    // 0x296c60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x296c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_296c64:
    // 0x296c64: 0x0  nop
    ctx->pc = 0x296c64u;
    // NOP
    // 0x296c68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x296c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x296c6c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x296c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x296c70: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x296C70u;
    {
        const bool branch_taken_0x296c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c70) {
            ctx->pc = 0x296BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296be0;
        }
    }
    ctx->pc = 0x296C78u;
    // 0x296c78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x296c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_296c7c:
    // 0x296c7c: 0x0  nop
    ctx->pc = 0x296c7cu;
    // NOP
    // 0x296c80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x296c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296c84: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x296c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x296c88: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x296C88u;
    {
        const bool branch_taken_0x296c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c88) {
            ctx->pc = 0x296BD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296bd4;
        }
    }
    ctx->pc = 0x296C90u;
label_296c90:
    // 0x296c90: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x296c90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x296c94: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x296c94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_296c98:
    // 0x296c98: 0x8ee20f50  lw          $v0, 0xF50($s7)
    ctx->pc = 0x296c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 3920)));
    // 0x296c9c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x296c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x296ca0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x296CA0u;
    {
        const bool branch_taken_0x296ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296CA0u;
            // 0x296ca4: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ca0) {
            ctx->pc = 0x296BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296bc0;
        }
    }
    ctx->pc = 0x296CA8u;
    // 0x296ca8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x296ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x296cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296cb0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x296cb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296cb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x296cb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296cb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x296cb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296cbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x296cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296cc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296cc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296cc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x296CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296CD0u;
            // 0x296cd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296CD8u;
}
