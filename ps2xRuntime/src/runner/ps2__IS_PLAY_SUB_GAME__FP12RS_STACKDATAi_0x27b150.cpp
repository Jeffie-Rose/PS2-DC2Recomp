#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IS_PLAY_SUB_GAME__FP12RS_STACKDATAi
// Address: 0x27b150 - 0x27b1b0
void ps2__IS_PLAY_SUB_GAME__FP12RS_STACKDATAi_0x27b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IS_PLAY_SUB_GAME__FP12RS_STACKDATAi_0x27b150");
#endif

    switch (ctx->pc) {
        case 0x27b190u: goto label_27b190;
        case 0x27b19cu: goto label_27b19c;
        default: break;
    }

    ctx->pc = 0x27b150u;

    // 0x27b150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b15c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27b160: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x27b160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27b164: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B164u;
    {
        const bool branch_taken_0x27b164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B164u;
            // 0x27b168: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b164) {
            ctx->pc = 0x27B174u;
            goto label_27b174;
        }
    }
    ctx->pc = 0x27B16Cu;
    // 0x27b16c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27B16Cu;
    {
        const bool branch_taken_0x27b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B16Cu;
            // 0x27b170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b16c) {
            ctx->pc = 0x27B1A0u;
            goto label_27b1a0;
        }
    }
    ctx->pc = 0x27B174u;
label_27b174:
    // 0x27b174: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x27b174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x27b178: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B178u;
    {
        const bool branch_taken_0x27b178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B178u;
            // 0x27b17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b178) {
            ctx->pc = 0x27B188u;
            goto label_27b188;
        }
    }
    ctx->pc = 0x27B180u;
    // 0x27b180: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27B180u;
    {
        const bool branch_taken_0x27b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B180u;
            // 0x27b184: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b180) {
            ctx->pc = 0x27B1A4u;
            goto label_27b1a4;
        }
    }
    ctx->pc = 0x27B188u;
label_27b188:
    // 0x27b188: 0xc0be5f8  jal         func_2F97E0
    ctx->pc = 0x27B188u;
    SET_GPR_U32(ctx, 31, 0x27B190u);
    ctx->pc = 0x2F97E0u;
    if (runtime->hasFunction(0x2F97E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F97E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B190u; }
        if (ctx->pc != 0x27B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPlaySubGame__16CDngFloorManagerFv_0x2f97e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B190u; }
        if (ctx->pc != 0x27B190u) { return; }
    }
    ctx->pc = 0x27B190u;
label_27b190:
    // 0x27b190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b194: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27B194u;
    SET_GPR_U32(ctx, 31, 0x27B19Cu);
    ctx->pc = 0x27B198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B194u;
            // 0x27b198: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B19Cu; }
        if (ctx->pc != 0x27B19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B19Cu; }
        if (ctx->pc != 0x27B19Cu) { return; }
    }
    ctx->pc = 0x27B19Cu;
label_27b19c:
    // 0x27b19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b1a0:
    // 0x27b1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27b1a4:
    // 0x27b1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B1A8u;
            // 0x27b1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B1B0u;
}
