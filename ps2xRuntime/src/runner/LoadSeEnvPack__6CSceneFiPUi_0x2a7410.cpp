#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeEnvPack__6CSceneFiPUi
// Address: 0x2a7410 - 0x2a74c0
void LoadSeEnvPack__6CSceneFiPUi_0x2a7410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeEnvPack__6CSceneFiPUi_0x2a7410");
#endif

    switch (ctx->pc) {
        case 0x2a7434u: goto label_2a7434;
        case 0x2a7460u: goto label_2a7460;
        case 0x2a7474u: goto label_2a7474;
        default: break;
    }

    ctx->pc = 0x2a7410u;

    // 0x2a7410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7418: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a741c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7420: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a7420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7428: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a7428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a742c: 0xc0a9ae8  jal         func_2A6BA0
    ctx->pc = 0x2A742Cu;
    SET_GPR_U32(ctx, 31, 0x2A7434u);
    ctx->pc = 0x2A7430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A742Cu;
            // 0x2a7430: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6BA0u;
    if (runtime->hasFunction(0x2A6BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7434u; }
        if (ctx->pc != 0x2A7434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeEnv__6CSceneFi_0x2a6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7434u; }
        if (ctx->pc != 0x2A7434u) { return; }
    }
    ctx->pc = 0x2A7434u;
label_2a7434:
    // 0x2a7434: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7434u;
    {
        const bool branch_taken_0x2a7434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7434u;
            // 0x2a7438: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7434) {
            ctx->pc = 0x2A7444u;
            goto label_2a7444;
        }
    }
    ctx->pc = 0x2A743Cu;
    // 0x2a743c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A743Cu;
    {
        const bool branch_taken_0x2a743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A743Cu;
            // 0x2a7440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a743c) {
            ctx->pc = 0x2A74A8u;
            goto label_2a74a8;
        }
    }
    ctx->pc = 0x2A7444u;
label_2a7444:
    // 0x2a7444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7448: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a7448u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a744c: 0xac20a474  sw          $zero, -0x5B8C($at)
    ctx->pc = 0x2a744cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943860), GPR_U32(ctx, 0));
    // 0x2a7450: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7454: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a7454u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a7458: 0xc0a9784  jal         func_2A5E10
    ctx->pc = 0x2A7458u;
    SET_GPR_U32(ctx, 31, 0x2A7460u);
    ctx->pc = 0x2A745Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7458u;
            // 0x2a745c: 0xac20a46c  sw          $zero, -0x5B94($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5E10u;
    if (runtime->hasFunction(0x2A5E10u)) {
        auto targetFn = runtime->lookupFunction(0x2A5E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7460u; }
        if (ctx->pc != 0x2A7460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeEnv__6CSceneFv_0x2a5e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7460u; }
        if (ctx->pc != 0x2A7460u) { return; }
    }
    ctx->pc = 0x2A7460u;
label_2a7460:
    // 0x2a7460: 0x3401a450  ori         $at, $zero, 0xA450
    ctx->pc = 0x2a7460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42064);
    // 0x2a7464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a7464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7468: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a7468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a746c: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x2A746Cu;
    SET_GPR_U32(ctx, 31, 0x2A7474u);
    ctx->pc = 0x2A7470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A746Cu;
            // 0x2a7470: 0x2413021  addu        $a2, $s2, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7474u; }
        if (ctx->pc != 0x2A7474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7474u; }
        if (ctx->pc != 0x2A7474u) { return; }
    }
    ctx->pc = 0x2A7474u;
label_2a7474:
    // 0x2a7474: 0x3403a040  ori         $v1, $zero, 0xA040
    ctx->pc = 0x2a7474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41024);
    // 0x2a7478: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a747c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2a747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a7480: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a7480u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a7484: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a7484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a7488: 0x8c22a040  lw          $v0, -0x5FC0($at)
    ctx->pc = 0x2a7488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942784)));
    // 0x2a748c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A748Cu;
    {
        const bool branch_taken_0x2a748c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A7490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A748Cu;
            // 0x2a7490: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a748c) {
            ctx->pc = 0x2A749Cu;
            goto label_2a749c;
        }
    }
    ctx->pc = 0x2A7494u;
    // 0x2a7494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7494u;
    {
        const bool branch_taken_0x2a7494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7494u;
            // 0x2a7498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7494) {
            ctx->pc = 0x2A74A8u;
            goto label_2a74a8;
        }
    }
    ctx->pc = 0x2A749Cu;
label_2a749c:
    // 0x2a749c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a74a0: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2a74a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x2a74a4: 0xac31a044  sw          $s1, -0x5FBC($at)
    ctx->pc = 0x2a74a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942788), GPR_U32(ctx, 17));
label_2a74a8:
    // 0x2a74a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a74a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a74ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a74acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a74b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a74b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a74b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a74b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a74b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A74B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A74BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A74B8u;
            // 0x2a74bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A74C0u;
}
