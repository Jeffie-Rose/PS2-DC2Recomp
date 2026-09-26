#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DIST_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e3730 - 0x2e3788
void ps2__DIST_VECTOR__FP12RS_STACKDATAi_0x2e3730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DIST_VECTOR__FP12RS_STACKDATAi_0x2e3730");
#endif

    switch (ctx->pc) {
        case 0x2e375cu: goto label_2e375c;
        case 0x2e3768u: goto label_2e3768;
        case 0x2e3774u: goto label_2e3774;
        default: break;
    }

    ctx->pc = 0x2e3730u;

    // 0x2e3730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3734: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e373c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3740: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3740u;
    {
        const bool branch_taken_0x2e3740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3740u;
            // 0x2e3744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3740) {
            ctx->pc = 0x2E3750u;
            goto label_2e3750;
        }
    }
    ctx->pc = 0x2E3748u;
    // 0x2e3748: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E3748u;
    {
        const bool branch_taken_0x2e3748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3748u;
            // 0x2e374c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3748) {
            ctx->pc = 0x2E3778u;
            goto label_2e3778;
        }
    }
    ctx->pc = 0x2E3750u;
label_2e3750:
    // 0x2e3750: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e3750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3754: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E3754u;
    SET_GPR_U32(ctx, 31, 0x2E375Cu);
    ctx->pc = 0x2E3758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3754u;
            // 0x2e3758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E375Cu; }
        if (ctx->pc != 0x2E375Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E375Cu; }
        if (ctx->pc != 0x2E375Cu) { return; }
    }
    ctx->pc = 0x2E375Cu;
label_2e375c:
    // 0x2e375c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e375cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e3760: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2E3760u;
    SET_GPR_U32(ctx, 31, 0x2E3768u);
    ctx->pc = 0x2E3764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3760u;
            // 0x2e3764: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3768u; }
        if (ctx->pc != 0x2E3768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3768u; }
        if (ctx->pc != 0x2E3768u) { return; }
    }
    ctx->pc = 0x2E3768u;
label_2e3768:
    // 0x2e3768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e376c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E376Cu;
    SET_GPR_U32(ctx, 31, 0x2E3774u);
    ctx->pc = 0x2E3770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E376Cu;
            // 0x2e3770: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3774u; }
        if (ctx->pc != 0x2E3774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3774u; }
        if (ctx->pc != 0x2E3774u) { return; }
    }
    ctx->pc = 0x2E3774u;
label_2e3774:
    // 0x2e3774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3778:
    // 0x2e3778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e3778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e377c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e377cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3780: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3780u;
            // 0x2e3784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3788u;
}
