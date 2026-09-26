#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FishIntoAquarium__13CFishAquariumFiiP13CGameDataUsed
// Address: 0x19a2d0 - 0x19a40c
void FishIntoAquarium__13CFishAquariumFiiP13CGameDataUsed_0x19a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FishIntoAquarium__13CFishAquariumFiiP13CGameDataUsed_0x19a2d0");
#endif

    switch (ctx->pc) {
        case 0x19a3d0u: goto label_19a3d0;
        case 0x19a3e4u: goto label_19a3e4;
        case 0x19a3f0u: goto label_19a3f0;
        default: break;
    }

    ctx->pc = 0x19a2d0u;

    // 0x19a2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a2d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a2d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a2e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19a2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2e4: 0x6000044  bltz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x19A2E4u;
    {
        const bool branch_taken_0x19a2e4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x19a2e4) {
            ctx->pc = 0x19A3F8u;
            goto label_19a3f8;
        }
    }
    ctx->pc = 0x19A2ECu;
    // 0x19a2ec: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x19a2ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19a2f0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A2F0u;
    {
        const bool branch_taken_0x19a2f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2F0u;
            // 0x19a2f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2f0) {
            ctx->pc = 0x19A304u;
            goto label_19a304;
        }
    }
    ctx->pc = 0x19A2F8u;
    // 0x19a2f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x19A2F8u;
    {
        const bool branch_taken_0x19a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2F8u;
            // 0x19a2fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2f8) {
            ctx->pc = 0x19A3FCu;
            goto label_19a3fc;
        }
    }
    ctx->pc = 0x19A300u;
    // 0x19a300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a304:
    // 0x19a304: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x19A304u;
    {
        const bool branch_taken_0x19a304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A304u;
            // 0x19a308: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a304) {
            ctx->pc = 0x19A344u;
            goto label_19a344;
        }
    }
    ctx->pc = 0x19A30Cu;
    // 0x19a30c: 0x4c0002b  bltz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x19A30Cu;
    {
        const bool branch_taken_0x19a30c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x19a30c) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A314u;
    // 0x19a314: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x19a314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19a318: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x19A318u;
    {
        const bool branch_taken_0x19a318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a318) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A320u;
    // 0x19a320: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x19a320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19a324: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x19a324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19a328: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19a328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19a32c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19a330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a334: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19a338: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19A338u;
    {
        const bool branch_taken_0x19a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A338u;
            // 0x19a33c: 0x24710004  addiu       $s1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a338) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A340u;
    // 0x19a340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a344:
    // 0x19a344: 0x1603000f  bne         $s0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19A344u;
    {
        const bool branch_taken_0x19a344 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A344u;
            // 0x19a348: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a344) {
            ctx->pc = 0x19A384u;
            goto label_19a384;
        }
    }
    ctx->pc = 0x19A34Cu;
    // 0x19a34c: 0x4c0001b  bltz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x19A34Cu;
    {
        const bool branch_taken_0x19a34c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x19a34c) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A354u;
    // 0x19a354: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x19a354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19a358: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x19A358u;
    {
        const bool branch_taken_0x19a358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a358) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A360u;
    // 0x19a360: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x19a360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19a364: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x19a364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19a368: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19a368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19a36c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19a370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a374: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19a378: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19A378u;
    {
        const bool branch_taken_0x19a378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A378u;
            // 0x19a37c: 0x2471028c  addiu       $s1, $v1, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a378) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A380u;
    // 0x19a380: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a384:
    // 0x19a384: 0x1603000d  bne         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19A384u;
    {
        const bool branch_taken_0x19a384 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a384) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A38Cu;
    // 0x19a38c: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x19A38Cu;
    {
        const bool branch_taken_0x19a38c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x19a38c) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A394u;
    // 0x19a394: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x19a394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a398: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A398u;
    {
        const bool branch_taken_0x19a398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a398) {
            ctx->pc = 0x19A3BCu;
            goto label_19a3bc;
        }
    }
    ctx->pc = 0x19A3A0u;
    // 0x19a3a0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x19a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19a3a4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x19a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19a3a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19a3ac: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19a3b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a3b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19a3b8: 0x2471043c  addiu       $s1, $v1, 0x43C
    ctx->pc = 0x19a3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1084));
label_19a3bc:
    // 0x19a3bc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x19A3BCu;
    {
        const bool branch_taken_0x19a3bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a3bc) {
            ctx->pc = 0x19A3F8u;
            goto label_19a3f8;
        }
    }
    ctx->pc = 0x19A3C4u;
    // 0x19a3c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c8: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x19A3C8u;
    SET_GPR_U32(ctx, 31, 0x19A3D0u);
    ctx->pc = 0x19A3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3C8u;
            // 0x19a3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3D0u; }
        if (ctx->pc != 0x19A3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3D0u; }
        if (ctx->pc != 0x19A3D0u) { return; }
    }
    ctx->pc = 0x19A3D0u;
label_19a3d0:
    // 0x19a3d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a3d4: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A3D4u;
    {
        const bool branch_taken_0x19a3d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a3d4) {
            ctx->pc = 0x19A3F8u;
            goto label_19a3f8;
        }
    }
    ctx->pc = 0x19A3DCu;
    // 0x19a3dc: 0xc06421c  jal         func_190870
    ctx->pc = 0x19A3DCu;
    SET_GPR_U32(ctx, 31, 0x19A3E4u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3E4u; }
        if (ctx->pc != 0x19A3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3E4u; }
        if (ctx->pc != 0x19A3E4u) { return; }
    }
    ctx->pc = 0x19A3E4u;
label_19a3e4:
    // 0x19a3e4: 0x8c422f68  lw          $v0, 0x2F68($v0)
    ctx->pc = 0x19a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12136)));
    // 0x19a3e8: 0xc06421c  jal         func_190870
    ctx->pc = 0x19A3E8u;
    SET_GPR_U32(ctx, 31, 0x19A3F0u);
    ctx->pc = 0x19A3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A3E8u;
            // 0x19a3ec: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3F0u; }
        if (ctx->pc != 0x19A3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A3F0u; }
        if (ctx->pc != 0x19A3F0u) { return; }
    }
    ctx->pc = 0x19A3F0u;
label_19a3f0:
    // 0x19a3f0: 0xc4402f6c  lwc1        $f0, 0x2F6C($v0)
    ctx->pc = 0x19a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a3f4: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x19a3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_19a3f8:
    // 0x19a3f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a3fc:
    // 0x19a3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a404: 0x3e00008  jr          $ra
    ctx->pc = 0x19A404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A404u;
            // 0x19a408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A40Cu;
}
