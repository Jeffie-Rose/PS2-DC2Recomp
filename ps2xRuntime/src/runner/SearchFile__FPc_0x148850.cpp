#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchFile__FPc
// Address: 0x148850 - 0x1488c8
void SearchFile__FPc_0x148850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFile__FPc_0x148850");
#endif

    switch (ctx->pc) {
        case 0x148878u: goto label_148878;
        case 0x148884u: goto label_148884;
        default: break;
    }

    ctx->pc = 0x148850u;

    // 0x148850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x148850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x148854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x148854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x148858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14885c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148860: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x148860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148868: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14886c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x14886cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x148870: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x148870u;
    {
        const bool branch_taken_0x148870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148870u;
            // 0x148874: 0x26102680  addiu       $s0, $s0, 0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148870) {
            ctx->pc = 0x14889Cu;
            goto label_14889c;
        }
    }
    ctx->pc = 0x148878u;
label_148878:
    // 0x148878: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x148878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14887c: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x14887Cu;
    SET_GPR_U32(ctx, 31, 0x148884u);
    ctx->pc = 0x148880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14887Cu;
            // 0x148880: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148884u; }
        if (ctx->pc != 0x148884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148884u; }
        if (ctx->pc != 0x148884u) { return; }
    }
    ctx->pc = 0x148884u;
label_148884:
    // 0x148884: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148884u;
    {
        const bool branch_taken_0x148884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148884u;
            // 0x148888: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148884) {
            ctx->pc = 0x148894u;
            goto label_148894;
        }
    }
    ctx->pc = 0x14888Cu;
    // 0x14888c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14888Cu;
    {
        const bool branch_taken_0x14888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14888Cu;
            // 0x148890: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14888c) {
            ctx->pc = 0x1488B4u;
            goto label_1488b4;
        }
    }
    ctx->pc = 0x148894u;
label_148894:
    // 0x148894: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x148894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x148898: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x148898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_14889c:
    // 0x14889c: 0x0  nop
    ctx->pc = 0x14889cu;
    // NOP
    // 0x1488a0: 0x8f82889c  lw          $v0, -0x7764($gp)
    ctx->pc = 0x1488a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936732)));
    // 0x1488a4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1488a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1488a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1488A8u;
    {
        const bool branch_taken_0x1488a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1488ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1488A8u;
            // 0x1488ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488a8) {
            ctx->pc = 0x148878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148878;
        }
    }
    ctx->pc = 0x1488B0u;
    // 0x1488b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1488b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1488b4:
    // 0x1488b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1488b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1488b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1488b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1488bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1488bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1488c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1488C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1488C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1488C0u;
            // 0x1488c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1488C8u;
}
