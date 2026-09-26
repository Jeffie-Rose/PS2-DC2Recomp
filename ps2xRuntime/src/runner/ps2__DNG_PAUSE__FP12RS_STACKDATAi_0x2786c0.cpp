#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_PAUSE__FP12RS_STACKDATAi
// Address: 0x2786c0 - 0x278734
void ps2__DNG_PAUSE__FP12RS_STACKDATAi_0x2786c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_PAUSE__FP12RS_STACKDATAi_0x2786c0");
#endif

    switch (ctx->pc) {
        case 0x2786d4u: goto label_2786d4;
        case 0x2786e0u: goto label_2786e0;
        default: break;
    }

    ctx->pc = 0x2786c0u;

    // 0x2786c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2786c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2786c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2786c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2786c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2786c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2786cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2786CCu;
    SET_GPR_U32(ctx, 31, 0x2786D4u);
    ctx->pc = 0x2786D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2786CCu;
            // 0x2786d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786D4u; }
        if (ctx->pc != 0x2786D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786D4u; }
        if (ctx->pc != 0x2786D4u) { return; }
    }
    ctx->pc = 0x2786D4u;
label_2786d4:
    // 0x2786d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2786d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786d8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2786D8u;
    SET_GPR_U32(ctx, 31, 0x2786E0u);
    ctx->pc = 0x2786DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2786D8u;
            // 0x2786dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786E0u; }
        if (ctx->pc != 0x2786E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2786E0u; }
        if (ctx->pc != 0x2786E0u) { return; }
    }
    ctx->pc = 0x2786E0u;
label_2786e0:
    // 0x2786e0: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x2786e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2786e4: 0x24642f90  addiu       $a0, $v1, 0x2F90
    ctx->pc = 0x2786e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
    // 0x2786e8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2786E8u;
    {
        const bool branch_taken_0x2786e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2786e8) {
            ctx->pc = 0x2786F8u;
            goto label_2786f8;
        }
    }
    ctx->pc = 0x2786F0u;
    // 0x2786f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2786F0u;
    {
        const bool branch_taken_0x2786f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2786F0u;
            // 0x2786f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786f0) {
            ctx->pc = 0x278724u;
            goto label_278724;
        }
    }
    ctx->pc = 0x2786F8u;
label_2786f8:
    // 0x2786f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2786F8u;
    {
        const bool branch_taken_0x2786f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2786f8) {
            ctx->pc = 0x278710u;
            goto label_278710;
        }
    }
    ctx->pc = 0x278700u;
    // 0x278700: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x278700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x278704: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x278704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x278708: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278708u;
    {
        const bool branch_taken_0x278708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27870Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278708u;
            // 0x27870c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278708) {
            ctx->pc = 0x278720u;
            goto label_278720;
        }
    }
    ctx->pc = 0x278710u;
label_278710:
    // 0x278710: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x278710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x278714: 0x2001827  not         $v1, $s0
    ctx->pc = 0x278714u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x278718: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x278718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27871c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x27871cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_278720:
    // 0x278720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278724:
    // 0x278724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27872c: 0x3e00008  jr          $ra
    ctx->pc = 0x27872Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27872Cu;
            // 0x278730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278734u;
}
