#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_INDEXOBJ_SIZE__FP12RS_STACKDATAi
// Address: 0x1e7720 - 0x1e7788
void ps2__SET_INDEXOBJ_SIZE__FP12RS_STACKDATAi_0x1e7720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_INDEXOBJ_SIZE__FP12RS_STACKDATAi_0x1e7720");
#endif

    switch (ctx->pc) {
        case 0x1e7744u: goto label_1e7744;
        case 0x1e7750u: goto label_1e7750;
        default: break;
    }

    ctx->pc = 0x1e7720u;

    // 0x1e7720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e772c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E772Cu;
    {
        const bool branch_taken_0x1e772c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E772Cu;
            // 0x1e7730: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e772c) {
            ctx->pc = 0x1E773Cu;
            goto label_1e773c;
        }
    }
    ctx->pc = 0x1E7734u;
    // 0x1e7734: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E7734u;
    {
        const bool branch_taken_0x1e7734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7734u;
            // 0x1e7738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7734) {
            ctx->pc = 0x1E7778u;
            goto label_1e7778;
        }
    }
    ctx->pc = 0x1E773Cu;
label_1e773c:
    // 0x1e773c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E773Cu;
    SET_GPR_U32(ctx, 31, 0x1E7744u);
    ctx->pc = 0x1E7740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E773Cu;
            // 0x1e7740: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7744u; }
        if (ctx->pc != 0x1E7744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7744u; }
        if (ctx->pc != 0x1E7744u) { return; }
    }
    ctx->pc = 0x1E7744u;
label_1e7744:
    // 0x1e7744: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e7744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7748: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E7748u;
    SET_GPR_U32(ctx, 31, 0x1E7750u);
    ctx->pc = 0x1E774Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7748u;
            // 0x1e774c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7750u; }
        if (ctx->pc != 0x1E7750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7750u; }
        if (ctx->pc != 0x1E7750u) { return; }
    }
    ctx->pc = 0x1E7750u;
label_1e7750:
    // 0x1e7750: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e7750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7754: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7754u;
    {
        const bool branch_taken_0x1e7754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7754) {
            ctx->pc = 0x1E7760u;
            goto label_1e7760;
        }
    }
    ctx->pc = 0x1E775Cu;
    // 0x1e775c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e775cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7760:
    // 0x1e7760: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e7760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e7764: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e776c: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x1e7770: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e7770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7774: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1e7774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1e7778:
    // 0x1e7778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e777c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e777cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7780: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7780u;
            // 0x1e7784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7788u;
}
