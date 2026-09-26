#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeBattle__6CSceneFiP1
// Address: 0x2a7170 - 0x2a71fc
void LoadSeBattle__6CSceneFiP1_0x2a7170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeBattle__6CSceneFiP1_0x2a7170");
#endif

    switch (ctx->pc) {
        case 0x2a7194u: goto label_2a7194;
        case 0x2a71b0u: goto label_2a71b0;
        case 0x2a71c4u: goto label_2a71c4;
        case 0x2a71dcu: goto label_2a71dc;
        default: break;
    }

    ctx->pc = 0x2a7170u;

    // 0x2a7170: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a7170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a7174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a717c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a7180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7188: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a7188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a718c: 0xc0a9af4  jal         func_2A6BD0
    ctx->pc = 0x2A718Cu;
    SET_GPR_U32(ctx, 31, 0x2A7194u);
    ctx->pc = 0x2A7190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A718Cu;
            // 0x2a7190: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6BD0u;
    if (runtime->hasFunction(0x2A6BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7194u; }
        if (ctx->pc != 0x2A7194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeBattle__6CSceneFi_0x2a6bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7194u; }
        if (ctx->pc != 0x2A7194u) { return; }
    }
    ctx->pc = 0x2A7194u;
label_2a7194:
    // 0x2a7194: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7194u;
    {
        const bool branch_taken_0x2a7194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7194u;
            // 0x2a7198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7194) {
            ctx->pc = 0x2A71A4u;
            goto label_2a71a4;
        }
    }
    ctx->pc = 0x2A719Cu;
    // 0x2a719c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A719Cu;
    {
        const bool branch_taken_0x2a719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A71A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A719Cu;
            // 0x2a71a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a719c) {
            ctx->pc = 0x2A71E4u;
            goto label_2a71e4;
        }
    }
    ctx->pc = 0x2A71A4u;
label_2a71a4:
    // 0x2a71a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a71a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a71a8: 0xc0a9ab4  jal         func_2A6AD0
    ctx->pc = 0x2A71A8u;
    SET_GPR_U32(ctx, 31, 0x2A71B0u);
    ctx->pc = 0x2A71ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A71A8u;
            // 0x2a71ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6AD0u;
    if (runtime->hasFunction(0x2A6AD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71B0u; }
        if (ctx->pc != 0x2A71B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeBattleFile__6CSceneFPci_0x2a6ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71B0u; }
        if (ctx->pc != 0x2A71B0u) { return; }
    }
    ctx->pc = 0x2A71B0u;
label_2a71b0:
    // 0x2a71b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a71b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a71b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a71b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a71b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71bc: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A71BCu;
    SET_GPR_U32(ctx, 31, 0x2A71C4u);
    ctx->pc = 0x2A71C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A71BCu;
            // 0x2a71c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71C4u; }
        if (ctx->pc != 0x2A71C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71C4u; }
        if (ctx->pc != 0x2A71C4u) { return; }
    }
    ctx->pc = 0x2A71C4u;
label_2a71c4:
    // 0x2a71c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A71C4u;
    {
        const bool branch_taken_0x2a71c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A71C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A71C4u;
            // 0x2a71c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a71c4) {
            ctx->pc = 0x2A71E4u;
            goto label_2a71e4;
        }
    }
    ctx->pc = 0x2A71CCu;
    // 0x2a71cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a71ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a71d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71d4: 0xc0a9d30  jal         func_2A74C0
    ctx->pc = 0x2A71D4u;
    SET_GPR_U32(ctx, 31, 0x2A71DCu);
    ctx->pc = 0x2A71D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A71D4u;
            // 0x2a71d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A74C0u;
    if (runtime->hasFunction(0x2A74C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A74C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71DCu; }
        if (ctx->pc != 0x2A71DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeBattlePack__6CSceneFiPUi_0x2a74c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A71DCu; }
        if (ctx->pc != 0x2A71DCu) { return; }
    }
    ctx->pc = 0x2A71DCu;
label_2a71dc:
    // 0x2a71dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2A71DCu;
    {
        const bool branch_taken_0x2a71dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a71dc) {
            ctx->pc = 0x2A71E4u;
            goto label_2a71e4;
        }
    }
    ctx->pc = 0x2A71E4u;
label_2a71e4:
    // 0x2a71e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a71e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a71e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a71e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a71ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a71ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a71f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a71f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a71f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A71F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A71F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A71F4u;
            // 0x2a71f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A71FCu;
}
