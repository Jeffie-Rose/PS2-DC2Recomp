#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEquipFishRod__FP13CGameDataUsed
// Address: 0x238fa0 - 0x23900c
void CheckEquipFishRod__FP13CGameDataUsed_0x238fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEquipFishRod__FP13CGameDataUsed_0x238fa0");
#endif

    switch (ctx->pc) {
        case 0x238fbcu: goto label_238fbc;
        case 0x238fd0u: goto label_238fd0;
        case 0x238fe0u: goto label_238fe0;
        case 0x238ff0u: goto label_238ff0;
        default: break;
    }

    ctx->pc = 0x238fa0u;

    // 0x238fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238fa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x238fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238fb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fb4: 0xc065b9c  jal         func_196E70
    ctx->pc = 0x238FB4u;
    SET_GPR_U32(ctx, 31, 0x238FBCu);
    ctx->pc = 0x238FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238FB4u;
            // 0x238fb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E70u;
    if (runtime->hasFunction(0x196E70u)) {
        auto targetFn = runtime->lookupFunction(0x196E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FBCu; }
        if (ctx->pc != 0x238FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishingWeapon__FP13CGameDataUsed_0x196e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FBCu; }
        if (ctx->pc != 0x238FBCu) { return; }
    }
    ctx->pc = 0x238FBCu;
label_238fbc:
    // 0x238fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238fc0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x238FC0u;
    {
        const bool branch_taken_0x238fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x238FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238FC0u;
            // 0x238fc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238fc0) {
            ctx->pc = 0x238FF8u;
            goto label_238ff8;
        }
    }
    ctx->pc = 0x238FC8u;
    // 0x238fc8: 0xc08e2f0  jal         func_238BC0
    ctx->pc = 0x238FC8u;
    SET_GPR_U32(ctx, 31, 0x238FD0u);
    ctx->pc = 0x238FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238FC8u;
            // 0x238fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238BC0u;
    if (runtime->hasFunction(0x238BC0u)) {
        auto targetFn = runtime->lookupFunction(0x238BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FD0u; }
        if (ctx->pc != 0x238FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushWeapon__FP13CGameDataUsed_0x238bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FD0u; }
        if (ctx->pc != 0x238FD0u) { return; }
    }
    ctx->pc = 0x238FD0u;
label_238fd0:
    // 0x238fd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238FD0u;
    {
        const bool branch_taken_0x238fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238FD0u;
            // 0x238fd4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238fd0) {
            ctx->pc = 0x238FE8u;
            goto label_238fe8;
        }
    }
    ctx->pc = 0x238FD8u;
    // 0x238fd8: 0xc065b84  jal         func_196E10
    ctx->pc = 0x238FD8u;
    SET_GPR_U32(ctx, 31, 0x238FE0u);
    ctx->pc = 0x238FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238FD8u;
            // 0x238fdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E10u;
    if (runtime->hasFunction(0x196E10u)) {
        auto targetFn = runtime->lookupFunction(0x196E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FE0u; }
        if (ctx->pc != 0x238FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FE0u; }
        if (ctx->pc != 0x238FE0u) { return; }
    }
    ctx->pc = 0x238FE0u;
label_238fe0:
    // 0x238fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238FE0u;
    {
        const bool branch_taken_0x238fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238FE0u;
            // 0x238fe4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238fe0) {
            ctx->pc = 0x238FF4u;
            goto label_238ff4;
        }
    }
    ctx->pc = 0x238FE8u;
label_238fe8:
    // 0x238fe8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x238FE8u;
    SET_GPR_U32(ctx, 31, 0x238FF0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FF0u; }
        if (ctx->pc != 0x238FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238FF0u; }
        if (ctx->pc != 0x238FF0u) { return; }
    }
    ctx->pc = 0x238FF0u;
label_238ff0:
    // 0x238ff0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238ff4:
    // 0x238ff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238ff8:
    // 0x238ff8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x238ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239004: 0x3e00008  jr          $ra
    ctx->pc = 0x239004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239004u;
            // 0x239008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23900Cu;
}
