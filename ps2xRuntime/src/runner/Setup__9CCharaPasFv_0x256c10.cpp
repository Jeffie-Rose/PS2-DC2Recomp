#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Setup__9CCharaPasFv
// Address: 0x256c10 - 0x256d80
void Setup__9CCharaPasFv_0x256c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Setup__9CCharaPasFv_0x256c10");
#endif

    switch (ctx->pc) {
        case 0x256c54u: goto label_256c54;
        case 0x256c64u: goto label_256c64;
        case 0x256ca0u: goto label_256ca0;
        case 0x256cf0u: goto label_256cf0;
        case 0x256cf4u: goto label_256cf4;
        case 0x256d00u: goto label_256d00;
        case 0x256d08u: goto label_256d08;
        case 0x256d18u: goto label_256d18;
        case 0x256d24u: goto label_256d24;
        case 0x256d5cu: goto label_256d5c;
        default: break;
    }

    ctx->pc = 0x256c10u;

    // 0x256c10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x256c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x256c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x256c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x256c18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x256c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x256c1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x256c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x256c20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x256c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x256c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x256c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x256c28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x256c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x256c2c: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x256c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x256c30: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256C30u;
    {
        const bool branch_taken_0x256c30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x256C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C30u;
            // 0x256c34: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c30) {
            ctx->pc = 0x256C40u;
            goto label_256c40;
        }
    }
    ctx->pc = 0x256C38u;
    // 0x256c38: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x256C38u;
    {
        const bool branch_taken_0x256c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C38u;
            // 0x256c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c38) {
            ctx->pc = 0x256D60u;
            goto label_256d60;
        }
    }
    ctx->pc = 0x256C40u;
label_256c40:
    // 0x256c40: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x256c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x256c44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x256c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x256c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x256C4Cu;
    {
        const bool branch_taken_0x256c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C4Cu;
            // 0x256c50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c4c) {
            ctx->pc = 0x256C80u;
            goto label_256c80;
        }
    }
    ctx->pc = 0x256C54u;
label_256c54:
    // 0x256c54: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x256c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x256c58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256c5c: 0xc04c018  jal         func_130060
    ctx->pc = 0x256C5Cu;
    SET_GPR_U32(ctx, 31, 0x256C64u);
    ctx->pc = 0x256C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256C5Cu;
            // 0x256c60: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256C64u; }
        if (ctx->pc != 0x256C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256C64u; }
        if (ctx->pc != 0x256C64u) { return; }
    }
    ctx->pc = 0x256C64u;
label_256c64:
    // 0x256c64: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x256c64u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x256c68: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x256c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x256c6c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x256c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x256c70: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x256c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x256c74: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x256c78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x256c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x256c7c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x256c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_256c80:
    // 0x256c80: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x256c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x256c84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256c88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x256c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256c8c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x256C8Cu;
    {
        const bool branch_taken_0x256c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C8Cu;
            // 0x256c90: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c8c) {
            ctx->pc = 0x256C54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256c54;
        }
    }
    ctx->pc = 0x256C94u;
    // 0x256c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x256C98u;
    {
        const bool branch_taken_0x256c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C98u;
            // 0x256c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c98) {
            ctx->pc = 0x256CC4u;
            goto label_256cc4;
        }
    }
    ctx->pc = 0x256CA0u;
label_256ca0:
    // 0x256ca0: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x256ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x256ca4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x256CA4u;
    {
        const bool branch_taken_0x256ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256CA4u;
            // 0x256ca8: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ca4) {
            ctx->pc = 0x256CB0u;
            goto label_256cb0;
        }
    }
    ctx->pc = 0x256CACu;
    // 0x256cac: 0x1cd  break       0, 7
    ctx->pc = 0x256cacu;
    runtime->handleBreak(rdram, ctx);
label_256cb0:
    // 0x256cb0: 0x1812  mflo        $v1
    ctx->pc = 0x256cb0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x256cb4: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x256cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x256cb8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x256cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x256cbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x256cc0: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x256cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_256cc4:
    // 0x256cc4: 0x0  nop
    ctx->pc = 0x256cc4u;
    // NOP
    // 0x256cc8: 0x8e670104  lw          $a3, 0x104($s3)
    ctx->pc = 0x256cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x256ccc: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x256cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x256cd0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x256cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x256cd4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x256CD4u;
    {
        const bool branch_taken_0x256cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256cd4) {
            ctx->pc = 0x256CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256ca0;
        }
    }
    ctx->pc = 0x256CDCu;
    // 0x256cdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x256cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256ce0: 0x26640108  addiu       $a0, $s3, 0x108
    ctx->pc = 0x256ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
    // 0x256ce4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x256ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ce8: 0xc095710  jal         func_255C40
    ctx->pc = 0x256CE8u;
    SET_GPR_U32(ctx, 31, 0x256CF0u);
    ctx->pc = 0x256CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256CE8u;
            // 0x256cec: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255C40u;
    if (runtime->hasFunction(0x255C40u)) {
        auto targetFn = runtime->lookupFunction(0x255C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CF0u; }
        if (ctx->pc != 0x256CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUpSpline__9C3DSplineFPA4_fPiif_0x255c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256CF0u; }
        if (ctx->pc != 0x256CF0u) { return; }
    }
    ctx->pc = 0x256CF0u;
label_256cf0:
    // 0x256cf0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x256cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_256cf4:
    // 0x256cf4: 0x26640108  addiu       $a0, $s3, 0x108
    ctx->pc = 0x256cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
    // 0x256cf8: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256CF8u;
    SET_GPR_U32(ctx, 31, 0x256D00u);
    ctx->pc = 0x256CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256CF8u;
            // 0x256cfc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D00u; }
        if (ctx->pc != 0x256D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D00u; }
        if (ctx->pc != 0x256D00u) { return; }
    }
    ctx->pc = 0x256D00u;
label_256d00:
    // 0x256d00: 0xc095860  jal         func_256180
    ctx->pc = 0x256D00u;
    SET_GPR_U32(ctx, 31, 0x256D08u);
    ctx->pc = 0x256D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256D00u;
            // 0x256d04: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256180u;
    if (runtime->hasFunction(0x256180u)) {
        auto targetFn = runtime->lookupFunction(0x256180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D08u; }
        if (ctx->pc != 0x256D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9C3DSplineFv_0x256180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D08u; }
        if (ctx->pc != 0x256D08u) { return; }
    }
    ctx->pc = 0x256D08u;
label_256d08:
    // 0x256d08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256D08u;
    {
        const bool branch_taken_0x256d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256D08u;
            // 0x256d0c: 0x26640108  addiu       $a0, $s3, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d08) {
            ctx->pc = 0x256D2Cu;
            goto label_256d2c;
        }
    }
    ctx->pc = 0x256D10u;
    // 0x256d10: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256D10u;
    SET_GPR_U32(ctx, 31, 0x256D18u);
    ctx->pc = 0x256D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256D10u;
            // 0x256d14: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D18u; }
        if (ctx->pc != 0x256D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D18u; }
        if (ctx->pc != 0x256D18u) { return; }
    }
    ctx->pc = 0x256D18u;
label_256d18:
    // 0x256d18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x256d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x256d1c: 0xc04c018  jal         func_130060
    ctx->pc = 0x256D1Cu;
    SET_GPR_U32(ctx, 31, 0x256D24u);
    ctx->pc = 0x256D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256D1Cu;
            // 0x256d20: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D24u; }
        if (ctx->pc != 0x256D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D24u; }
        if (ctx->pc != 0x256D24u) { return; }
    }
    ctx->pc = 0x256D24u;
label_256d24:
    // 0x256d24: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x256D24u;
    {
        const bool branch_taken_0x256d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256D24u;
            // 0x256d28: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d24) {
            ctx->pc = 0x256CF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256cf4;
        }
    }
    ctx->pc = 0x256D2Cu;
label_256d2c:
    // 0x256d2c: 0x0  nop
    ctx->pc = 0x256d2cu;
    // NOP
    // 0x256d30: 0x8e670104  lw          $a3, 0x104($s3)
    ctx->pc = 0x256d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x256d34: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x256d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256d38: 0x26640108  addiu       $a0, $s3, 0x108
    ctx->pc = 0x256d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
    // 0x256d3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x256d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d40: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x256d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x256d44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x256d44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x256d48: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x256d48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x256d4c: 0x0  nop
    ctx->pc = 0x256d4cu;
    // NOP
    // 0x256d50: 0x0  nop
    ctx->pc = 0x256d50u;
    // NOP
    // 0x256d54: 0xc095710  jal         func_255C40
    ctx->pc = 0x256D54u;
    SET_GPR_U32(ctx, 31, 0x256D5Cu);
    ctx->pc = 0x255C40u;
    if (runtime->hasFunction(0x255C40u)) {
        auto targetFn = runtime->lookupFunction(0x255C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D5Cu; }
        if (ctx->pc != 0x256D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUpSpline__9C3DSplineFPA4_fPiif_0x255c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256D5Cu; }
        if (ctx->pc != 0x256D5Cu) { return; }
    }
    ctx->pc = 0x256D5Cu;
label_256d5c:
    // 0x256d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256d60:
    // 0x256d60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x256d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256d64: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x256d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x256d68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x256d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256d6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x256d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256d70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x256d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256d74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x256d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256d78: 0x3e00008  jr          $ra
    ctx->pc = 0x256D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256D78u;
            // 0x256d7c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256D80u;
}
