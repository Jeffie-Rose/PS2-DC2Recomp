#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitTLBFunctions
// Address: 0x118498 - 0x11854c
void InitTLBFunctions_0x118498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTLBFunctions_0x118498");
#endif

    switch (ctx->pc) {
        case 0x1184c8u: goto label_1184c8;
        case 0x1184e0u: goto label_1184e0;
        case 0x1184e8u: goto label_1184e8;
        case 0x1184f0u: goto label_1184f0;
        case 0x1184fcu: goto label_1184fc;
        case 0x118508u: goto label_118508;
        case 0x118510u: goto label_118510;
        case 0x118518u: goto label_118518;
        case 0x118528u: goto label_118528;
        default: break;
    }

    ctx->pc = 0x118498u;

    // 0x118498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11849c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1184a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1184a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1184a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1184a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1184a8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1184a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1184ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1184acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1184b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1184b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1184b4: 0x245012b8  addiu       $s0, $v0, 0x12B8
    ctx->pc = 0x1184b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4792));
    // 0x1184b8: 0x8c4412b8  lw          $a0, 0x12B8($v0)
    ctx->pc = 0x1184b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4792)));
    // 0x1184bc: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x1184bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1184c0: 0xc046122  jal         func_118488
    ctx->pc = 0x1184C0u;
    SET_GPR_U32(ctx, 31, 0x1184C8u);
    ctx->pc = 0x1184C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184C0u;
            // 0x1184c4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118488u;
    if (runtime->hasFunction(0x118488u)) {
        auto targetFn = runtime->lookupFunction(0x118488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184C8u; }
        if (ctx->pc != 0x1184C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x118488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184C8u; }
        if (ctx->pc != 0x1184C8u) { return; }
    }
    ctx->pc = 0x1184C8u;
label_1184c8:
    // 0x1184c8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1184c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1184cc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1184ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1184d0: 0x24060328  addiu       $a2, $zero, 0x328
    ctx->pc = 0x1184d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 808));
    // 0x1184d4: 0x24a50f48  addiu       $a1, $a1, 0xF48
    ctx->pc = 0x1184d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3912));
    // 0x1184d8: 0xc04610c  jal         func_118430
    ctx->pc = 0x1184D8u;
    SET_GPR_U32(ctx, 31, 0x1184E0u);
    ctx->pc = 0x1184DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184D8u;
            // 0x1184dc: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
        ctx->in_delay_slot = false;
    ctx->pc = 0x118430u;
    if (runtime->hasFunction(0x118430u)) {
        auto targetFn = runtime->lookupFunction(0x118430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184E0u; }
        if (ctx->pc != 0x1184E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x118430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184E0u; }
        if (ctx->pc != 0x1184E0u) { return; }
    }
    ctx->pc = 0x1184E0u;
label_1184e0:
    // 0x1184e0: 0xc0440d8  jal         func_110360
    ctx->pc = 0x1184E0u;
    SET_GPR_U32(ctx, 31, 0x1184E8u);
    ctx->pc = 0x1184E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184E0u;
            // 0x1184e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184E8u; }
        if (ctx->pc != 0x1184E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184E8u; }
        if (ctx->pc != 0x1184E8u) { return; }
    }
    ctx->pc = 0x1184E8u;
label_1184e8:
    // 0x1184e8: 0xc0440d8  jal         func_110360
    ctx->pc = 0x1184E8u;
    SET_GPR_U32(ctx, 31, 0x1184F0u);
    ctx->pc = 0x1184ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184E8u;
            // 0x1184ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184F0u; }
        if (ctx->pc != 0x1184F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184F0u; }
        if (ctx->pc != 0x1184F0u) { return; }
    }
    ctx->pc = 0x1184F0u;
label_1184f0:
    // 0x1184f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1184f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1184f4: 0xc046122  jal         func_118488
    ctx->pc = 0x1184F4u;
    SET_GPR_U32(ctx, 31, 0x1184FCu);
    ctx->pc = 0x1184F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184F4u;
            // 0x1184f8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118488u;
    if (runtime->hasFunction(0x118488u)) {
        auto targetFn = runtime->lookupFunction(0x118488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184FCu; }
        if (ctx->pc != 0x1184FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x118488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184FCu; }
        if (ctx->pc != 0x1184FCu) { return; }
    }
    ctx->pc = 0x1184FCu;
label_1184fc:
    // 0x1184fc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1184fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x118500: 0xc046122  jal         func_118488
    ctx->pc = 0x118500u;
    SET_GPR_U32(ctx, 31, 0x118508u);
    ctx->pc = 0x118504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118500u;
            // 0x118504: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118488u;
    if (runtime->hasFunction(0x118488u)) {
        auto targetFn = runtime->lookupFunction(0x118488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118508u; }
        if (ctx->pc != 0x118508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x118488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118508u; }
        if (ctx->pc != 0x118508u) { return; }
    }
    ctx->pc = 0x118508u;
label_118508:
    // 0x118508: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x118508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11850c: 0x0  nop
    ctx->pc = 0x11850cu;
    // NOP
label_118510:
    // 0x118510: 0xc04611e  jal         func_118478
    ctx->pc = 0x118510u;
    SET_GPR_U32(ctx, 31, 0x118518u);
    ctx->pc = 0x118514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118510u;
            // 0x118514: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (runtime->hasFunction(0x118478u)) {
        auto targetFn = runtime->lookupFunction(0x118478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118518u; }
        if (ctx->pc != 0x118518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryAddress_0x118478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118518u; }
        if (ctx->pc != 0x118518u) { return; }
    }
    ctx->pc = 0x118518u;
label_118518:
    // 0x118518: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x118518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11851c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11851cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118520: 0xc046122  jal         func_118488
    ctx->pc = 0x118520u;
    SET_GPR_U32(ctx, 31, 0x118528u);
    ctx->pc = 0x118524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118520u;
            // 0x118524: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118488u;
    if (runtime->hasFunction(0x118488u)) {
        auto targetFn = runtime->lookupFunction(0x118488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118528u; }
        if (ctx->pc != 0x118528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x118488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118528u; }
        if (ctx->pc != 0x118528u) { return; }
    }
    ctx->pc = 0x118528u;
label_118528:
    // 0x118528: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x118528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11852c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11852Cu;
    {
        const bool branch_taken_0x11852c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11852c) {
            ctx->pc = 0x118530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11852Cu;
            // 0x118530: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118510;
        }
    }
    ctx->pc = 0x118534u;
    // 0x118534: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118538: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11853c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11853cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118544: 0x3e00008  jr          $ra
    ctx->pc = 0x118544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118544u;
            // 0x118548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11854Cu;
}
