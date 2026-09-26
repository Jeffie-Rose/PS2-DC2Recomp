#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_SE_STATUS__FP12RS_STACKDATAi
// Address: 0x273f90 - 0x273ff8
void ps2__GET_SE_STATUS__FP12RS_STACKDATAi_0x273f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_SE_STATUS__FP12RS_STACKDATAi_0x273f90");
#endif

    switch (ctx->pc) {
        case 0x273fb8u: goto label_273fb8;
        case 0x273fc8u: goto label_273fc8;
        case 0x273fd4u: goto label_273fd4;
        case 0x273fe0u: goto label_273fe0;
        default: break;
    }

    ctx->pc = 0x273f90u;

    // 0x273f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x273f94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x273f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x273f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x273f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273fa0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273FA0u;
    {
        const bool branch_taken_0x273fa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x273FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273FA0u;
            // 0x273fa4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fa0) {
            ctx->pc = 0x273FB0u;
            goto label_273fb0;
        }
    }
    ctx->pc = 0x273FA8u;
    // 0x273fa8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x273FA8u;
    {
        const bool branch_taken_0x273fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273FA8u;
            // 0x273fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fa8) {
            ctx->pc = 0x273FE4u;
            goto label_273fe4;
        }
    }
    ctx->pc = 0x273FB0u;
label_273fb0:
    // 0x273fb0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273FB0u;
    SET_GPR_U32(ctx, 31, 0x273FB8u);
    ctx->pc = 0x273FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273FB0u;
            // 0x273fb4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FB8u; }
        if (ctx->pc != 0x273FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FB8u; }
        if (ctx->pc != 0x273FB8u) { return; }
    }
    ctx->pc = 0x273FB8u;
label_273fb8:
    // 0x273fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fc0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273FC0u;
    SET_GPR_U32(ctx, 31, 0x273FC8u);
    ctx->pc = 0x273FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273FC0u;
            // 0x273fc4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FC8u; }
        if (ctx->pc != 0x273FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FC8u; }
        if (ctx->pc != 0x273FC8u) { return; }
    }
    ctx->pc = 0x273FC8u;
label_273fc8:
    // 0x273fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fcc: 0xc0638c4  jal         func_18E310
    ctx->pc = 0x273FCCu;
    SET_GPR_U32(ctx, 31, 0x273FD4u);
    ctx->pc = 0x273FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273FCCu;
            // 0x273fd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E310u;
    if (runtime->hasFunction(0x18E310u)) {
        auto targetFn = runtime->lookupFunction(0x18E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FD4u; }
        if (ctx->pc != 0x273FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeStatus__FUii_0x18e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FD4u; }
        if (ctx->pc != 0x273FD4u) { return; }
    }
    ctx->pc = 0x273FD4u;
label_273fd4:
    // 0x273fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fd8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x273FD8u;
    SET_GPR_U32(ctx, 31, 0x273FE0u);
    ctx->pc = 0x273FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273FD8u;
            // 0x273fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FE0u; }
        if (ctx->pc != 0x273FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273FE0u; }
        if (ctx->pc != 0x273FE0u) { return; }
    }
    ctx->pc = 0x273FE0u;
label_273fe0:
    // 0x273fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273fe4:
    // 0x273fe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x273fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x273FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273FF0u;
            // 0x273ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273FF8u;
}
