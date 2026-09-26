#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreLoadVillager__6CSceneFiP1
// Address: 0x2c9590 - 0x2c9624
void PreLoadVillager__6CSceneFiP1_0x2c9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreLoadVillager__6CSceneFiP1_0x2c9590");
#endif

    switch (ctx->pc) {
        case 0x2c95b4u: goto label_2c95b4;
        case 0x2c95c4u: goto label_2c95c4;
        case 0x2c95d4u: goto label_2c95d4;
        case 0x2c95e4u: goto label_2c95e4;
        case 0x2c95f4u: goto label_2c95f4;
        default: break;
    }

    ctx->pc = 0x2c9590u;

    // 0x2c9590: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x2c9590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x2c9594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c9598: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2c9598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c959c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c95a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c95a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c95a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c95a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c95a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c95ac: 0xc0b2620  jal         func_2C9880
    ctx->pc = 0x2C95ACu;
    SET_GPR_U32(ctx, 31, 0x2C95B4u);
    ctx->pc = 0x2C95B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95ACu;
            // 0x2c95b0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9880u;
    if (runtime->hasFunction(0x2C9880u)) {
        auto targetFn = runtime->lookupFunction(0x2C9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95B4u; }
        if (ctx->pc != 0x2C95B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadVillagerList__6CSceneFiPiPP18CVillagerPlaceInfo_0x2c9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95B4u; }
        if (ctx->pc != 0x2C95B4u) { return; }
    }
    ctx->pc = 0x2C95B4u;
label_2c95b4:
    // 0x2c95b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c95b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c95b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95bc: 0xc05262c  jal         func_1498B0
    ctx->pc = 0x2C95BCu;
    SET_GPR_U32(ctx, 31, 0x2C95C4u);
    ctx->pc = 0x2C95C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95BCu;
            // 0x2c95c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1498B0u;
    if (runtime->hasFunction(0x1498B0u)) {
        auto targetFn = runtime->lookupFunction(0x1498B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95C4u; }
        if (ctx->pc != 0x2C95C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFileCache__FP1i_0x1498b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95C4u; }
        if (ctx->pc != 0x2C95C4u) { return; }
    }
    ctx->pc = 0x2C95C4u;
label_2c95c4:
    // 0x2c95c4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2c95c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c95c8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2C95C8u;
    {
        const bool branch_taken_0x2c95c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95C8u;
            // 0x2c95cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95c8) {
            ctx->pc = 0x2C9608u;
            goto label_2c9608;
        }
    }
    ctx->pc = 0x2C95D0u;
    // 0x2c95d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c95d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c95d4:
    // 0x2c95d4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2c95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2c95d8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2c95d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c95dc: 0xc0c65f4  jal         func_3197D0
    ctx->pc = 0x2C95DCu;
    SET_GPR_U32(ctx, 31, 0x2C95E4u);
    ctx->pc = 0x2C95E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95DCu;
            // 0x2c95e0: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3197D0u;
    if (runtime->hasFunction(0x3197D0u)) {
        auto targetFn = runtime->lookupFunction(0x3197D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95E4u; }
        if (ctx->pc != 0x2C95E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerModelName__FiPc_0x3197d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95E4u; }
        if (ctx->pc != 0x2C95E4u) { return; }
    }
    ctx->pc = 0x2C95E4u;
label_2c95e4:
    // 0x2c95e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C95E4u;
    {
        const bool branch_taken_0x2c95e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95E4u;
            // 0x2c95e8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95e4) {
            ctx->pc = 0x2C95F4u;
            goto label_2c95f4;
        }
    }
    ctx->pc = 0x2C95ECu;
    // 0x2c95ec: 0xc052670  jal         func_1499C0
    ctx->pc = 0x2C95ECu;
    SET_GPR_U32(ctx, 31, 0x2C95F4u);
    ctx->pc = 0x1499C0u;
    if (runtime->hasFunction(0x1499C0u)) {
        auto targetFn = runtime->lookupFunction(0x1499C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95F4u; }
        if (ctx->pc != 0x2C95F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileCacheBG__FPc_0x1499c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95F4u; }
        if (ctx->pc != 0x2C95F4u) { return; }
    }
    ctx->pc = 0x2C95F4u;
label_2c95f4:
    // 0x2c95f4: 0x0  nop
    ctx->pc = 0x2c95f4u;
    // NOP
    // 0x2c95f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c95f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c95fc: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2c95fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c9600: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C9600u;
    {
        const bool branch_taken_0x2c9600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9600u;
            // 0x2c9604: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9600) {
            ctx->pc = 0x2C95D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c95d4;
        }
    }
    ctx->pc = 0x2C9608u;
label_2c9608:
    // 0x2c9608: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c960c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c960cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c961c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C961Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C961Cu;
            // 0x2c9620: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9624u;
}
