#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDisPosToRect__FP4RECTii
// Address: 0x151140 - 0x1511c4
void GetDisPosToRect__FP4RECTii_0x151140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDisPosToRect__FP4RECTii_0x151140");
#endif

    switch (ctx->pc) {
        case 0x1511a8u: goto label_1511a8;
        case 0x1511b0u: goto label_1511b0;
        case 0x1511b8u: goto label_1511b8;
        default: break;
    }

    ctx->pc = 0x151140u;

    // 0x151140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151148: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x151148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15114c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15114Cu;
    {
        const bool branch_taken_0x15114c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x151150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15114Cu;
            // 0x151150: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15114c) {
            ctx->pc = 0x15115Cu;
            goto label_15115c;
        }
    }
    ctx->pc = 0x151154u;
    // 0x151154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151158: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x151158u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_15115c:
    // 0x15115c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151160: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x151164: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x151168: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15116c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15116cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151170: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x151174: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151174u;
    {
        const bool branch_taken_0x151174 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x151178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151174u;
            // 0x151178: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151174) {
            ctx->pc = 0x151184u;
            goto label_151184;
        }
    }
    ctx->pc = 0x15117Cu;
    // 0x15117c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151180: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x151180u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_151184:
    // 0x151184: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x151184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151188: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x151188u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x15118c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151190: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x151190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x151194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151198: 0x0  nop
    ctx->pc = 0x151198u;
    // NOP
    // 0x15119c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15119cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1511a0: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1511A0u;
    SET_GPR_U32(ctx, 31, 0x1511A8u);
    ctx->pc = 0x1511A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1511A0u;
            // 0x1511a4: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511A8u; }
        if (ctx->pc != 0x1511A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511A8u; }
        if (ctx->pc != 0x1511A8u) { return; }
    }
    ctx->pc = 0x1511A8u;
label_1511a8:
    // 0x1511a8: 0xc047bf2  jal         func_11EFC8
    ctx->pc = 0x1511A8u;
    SET_GPR_U32(ctx, 31, 0x1511B0u);
    ctx->pc = 0x1511ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1511A8u;
            // 0x1511ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511B0u; }
        if (ctx->pc != 0x1511B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511B0u; }
        if (ctx->pc != 0x1511B0u) { return; }
    }
    ctx->pc = 0x1511B0u;
label_1511b0:
    // 0x1511b0: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1511B0u;
    SET_GPR_U32(ctx, 31, 0x1511B8u);
    ctx->pc = 0x1511B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1511B0u;
            // 0x1511b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511B8u; }
        if (ctx->pc != 0x1511B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511B8u; }
        if (ctx->pc != 0x1511B8u) { return; }
    }
    ctx->pc = 0x1511B8u;
label_1511b8:
    // 0x1511b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1511b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1511bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1511BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1511C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511BCu;
            // 0x1511c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1511C4u;
}
