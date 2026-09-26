#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeBattlePack__6CSceneFiPUi
// Address: 0x2a74c0 - 0x2a755c
void LoadSeBattlePack__6CSceneFiPUi_0x2a74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeBattlePack__6CSceneFiPUi_0x2a74c0");
#endif

    switch (ctx->pc) {
        case 0x2a74e4u: goto label_2a74e4;
        case 0x2a74fcu: goto label_2a74fc;
        case 0x2a7510u: goto label_2a7510;
        default: break;
    }

    ctx->pc = 0x2a74c0u;

    // 0x2a74c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a74c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a74c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a74c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a74c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a74cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a74ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a74d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a74d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a74d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a74d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a74d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74dc: 0xc0a9af4  jal         func_2A6BD0
    ctx->pc = 0x2A74DCu;
    SET_GPR_U32(ctx, 31, 0x2A74E4u);
    ctx->pc = 0x2A74E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A74DCu;
            // 0x2a74e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6BD0u;
    if (runtime->hasFunction(0x2A6BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74E4u; }
        if (ctx->pc != 0x2A74E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeBattle__6CSceneFi_0x2a6bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74E4u; }
        if (ctx->pc != 0x2A74E4u) { return; }
    }
    ctx->pc = 0x2A74E4u;
label_2a74e4:
    // 0x2a74e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A74E4u;
    {
        const bool branch_taken_0x2a74e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A74E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A74E4u;
            // 0x2a74e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74e4) {
            ctx->pc = 0x2A74F4u;
            goto label_2a74f4;
        }
    }
    ctx->pc = 0x2A74ECu;
    // 0x2a74ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A74ECu;
    {
        const bool branch_taken_0x2a74ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A74F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A74ECu;
            // 0x2a74f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74ec) {
            ctx->pc = 0x2A7544u;
            goto label_2a7544;
        }
    }
    ctx->pc = 0x2A74F4u;
label_2a74f4:
    // 0x2a74f4: 0xc0a97b8  jal         func_2A5EE0
    ctx->pc = 0x2A74F4u;
    SET_GPR_U32(ctx, 31, 0x2A74FCu);
    ctx->pc = 0x2A5EE0u;
    if (runtime->hasFunction(0x2A5EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74FCu; }
        if (ctx->pc != 0x2A74FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeBattle__6CSceneFv_0x2a5ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A74FCu; }
        if (ctx->pc != 0x2A74FCu) { return; }
    }
    ctx->pc = 0x2A74FCu;
label_2a74fc:
    // 0x2a74fc: 0x3401e4e0  ori         $at, $zero, 0xE4E0
    ctx->pc = 0x2a74fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58592);
    // 0x2a7500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a7500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7504: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2a7504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a7508: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x2A7508u;
    SET_GPR_U32(ctx, 31, 0x2A7510u);
    ctx->pc = 0x2A750Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7508u;
            // 0x2a750c: 0x2413021  addu        $a2, $s2, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7510u; }
        if (ctx->pc != 0x2A7510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7510u; }
        if (ctx->pc != 0x2A7510u) { return; }
    }
    ctx->pc = 0x2A7510u;
label_2a7510:
    // 0x2a7510: 0x3403c4d0  ori         $v1, $zero, 0xC4D0
    ctx->pc = 0x2a7510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50384);
    // 0x2a7514: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7518: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2a7518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a751c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a751cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a7520: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a7520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a7524: 0x8c22c4d0  lw          $v0, -0x3B30($at)
    ctx->pc = 0x2a7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x2a7528: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7528u;
    {
        const bool branch_taken_0x2a7528 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7528u;
            // 0x2a752c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7528) {
            ctx->pc = 0x2A7538u;
            goto label_2a7538;
        }
    }
    ctx->pc = 0x2A7530u;
    // 0x2a7530: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7530u;
    {
        const bool branch_taken_0x2a7530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7530u;
            // 0x2a7534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7530) {
            ctx->pc = 0x2A7544u;
            goto label_2a7544;
        }
    }
    ctx->pc = 0x2A7538u;
label_2a7538:
    // 0x2a7538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a753c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a753cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a7540: 0xac31c4d4  sw          $s1, -0x3B2C($at)
    ctx->pc = 0x2a7540u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952148), GPR_U32(ctx, 17));
label_2a7544:
    // 0x2a7544: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a7544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a7548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a754c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a754cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7554: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7554u;
            // 0x2a7558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A755Cu;
}
