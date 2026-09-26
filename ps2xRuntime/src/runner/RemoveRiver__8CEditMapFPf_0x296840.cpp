#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemoveRiver__8CEditMapFPf
// Address: 0x296840 - 0x2968d0
void RemoveRiver__8CEditMapFPf_0x296840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemoveRiver__8CEditMapFPf_0x296840");
#endif

    switch (ctx->pc) {
        case 0x29686cu: goto label_29686c;
        case 0x296884u: goto label_296884;
        default: break;
    }

    ctx->pc = 0x296840u;

    // 0x296840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x296844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x296844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x296848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x296848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29684c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x296850: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x296850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296858: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x296858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29685c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296860: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x296860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296864: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x296864u;
    {
        const bool branch_taken_0x296864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296864u;
            // 0x296868: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296864) {
            ctx->pc = 0x29689Cu;
            goto label_29689c;
        }
    }
    ctx->pc = 0x29686Cu;
label_29686c:
    // 0x29686c: 0x8c440f54  lw          $a0, 0xF54($v0)
    ctx->pc = 0x29686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x296870: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x296870u;
    {
        const bool branch_taken_0x296870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296870) {
            ctx->pc = 0x296894u;
            goto label_296894;
        }
    }
    ctx->pc = 0x296878u;
    // 0x296878: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x296878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29687c: 0xc0a5eb8  jal         func_297AE0
    ctx->pc = 0x29687Cu;
    SET_GPR_U32(ctx, 31, 0x296884u);
    ctx->pc = 0x296880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29687Cu;
            // 0x296880: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x297AE0u;
    if (runtime->hasFunction(0x297AE0u)) {
        auto targetFn = runtime->lookupFunction(0x297AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296884u; }
        if (ctx->pc != 0x296884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetRiver__9CEditGridFff_0x297ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296884u; }
        if (ctx->pc != 0x296884u) { return; }
    }
    ctx->pc = 0x296884u;
label_296884:
    // 0x296884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296884u;
    {
        const bool branch_taken_0x296884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296884u;
            // 0x296888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296884) {
            ctx->pc = 0x296894u;
            goto label_296894;
        }
    }
    ctx->pc = 0x29688Cu;
    // 0x29688c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29688Cu;
    {
        const bool branch_taken_0x29688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29688Cu;
            // 0x296890: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29688c) {
            ctx->pc = 0x2968B8u;
            goto label_2968b8;
        }
    }
    ctx->pc = 0x296894u;
label_296894:
    // 0x296894: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x296894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x296898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29689c:
    // 0x29689c: 0x0  nop
    ctx->pc = 0x29689cu;
    // NOP
    // 0x2968a0: 0x8e620f50  lw          $v0, 0xF50($s3)
    ctx->pc = 0x2968a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3920)));
    // 0x2968a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2968a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2968a8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2968A8u;
    {
        const bool branch_taken_0x2968a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2968ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2968A8u;
            // 0x2968ac: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968a8) {
            ctx->pc = 0x29686Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29686c;
        }
    }
    ctx->pc = 0x2968B0u;
    // 0x2968b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2968b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2968b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2968b8:
    // 0x2968b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2968b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2968bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2968bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2968c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2968c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2968c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2968c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2968c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2968C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2968CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2968C8u;
            // 0x2968cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2968D0u;
}
