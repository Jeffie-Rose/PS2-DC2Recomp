#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemUseVariable__FP13CGameDataUsedP14CItemUseTarget
// Address: 0x22b870 - 0x22b8d4
void CheckItemUseVariable__FP13CGameDataUsedP14CItemUseTarget_0x22b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemUseVariable__FP13CGameDataUsedP14CItemUseTarget_0x22b870");
#endif

    switch (ctx->pc) {
        case 0x22b89cu: goto label_22b89c;
        case 0x22b8b4u: goto label_22b8b4;
        default: break;
    }

    ctx->pc = 0x22b870u;

    // 0x22b870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b87c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B87Cu;
    {
        const bool branch_taken_0x22b87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B87Cu;
            // 0x22b880: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b87c) {
            ctx->pc = 0x22B88Cu;
            goto label_22b88c;
        }
    }
    ctx->pc = 0x22B884u;
    // 0x22b884: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B884u;
    {
        const bool branch_taken_0x22b884 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b884) {
            ctx->pc = 0x22B894u;
            goto label_22b894;
        }
    }
    ctx->pc = 0x22B88Cu;
label_22b88c:
    // 0x22b88c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22B88Cu;
    {
        const bool branch_taken_0x22b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B88Cu;
            // 0x22b890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b88c) {
            ctx->pc = 0x22B8C4u;
            goto label_22b8c4;
        }
    }
    ctx->pc = 0x22B894u;
label_22b894:
    // 0x22b894: 0xc087d64  jal         func_21F590
    ctx->pc = 0x22B894u;
    SET_GPR_U32(ctx, 31, 0x22B89Cu);
    ctx->pc = 0x21F590u;
    if (runtime->hasFunction(0x21F590u)) {
        auto targetFn = runtime->lookupFunction(0x21F590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B89Cu; }
        if (ctx->pc != 0x22B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowStateUseThisItem__FP13CGameDataUsedP14CItemUseTarget_0x21f590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B89Cu; }
        if (ctx->pc != 0x22B89Cu) { return; }
    }
    ctx->pc = 0x22B89Cu;
label_22b89c:
    // 0x22b89c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x22b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22b8a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22b8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b8a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22b8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b8ac: 0xc092afc  jal         func_24ABF0
    ctx->pc = 0x22B8ACu;
    SET_GPR_U32(ctx, 31, 0x22B8B4u);
    ctx->pc = 0x22B8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8ACu;
            // 0x22b8b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24ABF0u;
    if (runtime->hasFunction(0x24ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x24ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8B4u; }
        if (ctx->pc != 0x22B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBuildUp__FP13CGameDataUsedPiPiPi_0x24abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B8B4u; }
        if (ctx->pc != 0x22B8B4u) { return; }
    }
    ctx->pc = 0x22B8B4u;
label_22b8b4:
    // 0x22b8b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B8B4u;
    {
        const bool branch_taken_0x22b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8B4u;
            // 0x22b8b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b8b4) {
            ctx->pc = 0x22B8C4u;
            goto label_22b8c4;
        }
    }
    ctx->pc = 0x22B8BCu;
    // 0x22b8bc: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x22b8bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x22b8c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22b8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b8c4:
    // 0x22b8c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b8c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b8c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x22B8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B8CCu;
            // 0x22b8d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B8D4u;
}
