#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: editLoadSound__Fi
// Address: 0x1af3a0 - 0x1af4c0
void editLoadSound__Fi_0x1af3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("editLoadSound__Fi_0x1af3a0");
#endif

    switch (ctx->pc) {
        case 0x1af3b0u: goto label_1af3b0;
        case 0x1af3c4u: goto label_1af3c4;
        case 0x1af3e4u: goto label_1af3e4;
        case 0x1af400u: goto label_1af400;
        case 0x1af40cu: goto label_1af40c;
        case 0x1af434u: goto label_1af434;
        case 0x1af448u: goto label_1af448;
        case 0x1af458u: goto label_1af458;
        case 0x1af478u: goto label_1af478;
        case 0x1af48cu: goto label_1af48c;
        case 0x1af494u: goto label_1af494;
        case 0x1af4a4u: goto label_1af4a4;
        default: break;
    }

    ctx->pc = 0x1af3a0u;

    // 0x1af3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af3a8: 0xc0b49dc  jal         func_2D2770
    ctx->pc = 0x1AF3A8u;
    SET_GPR_U32(ctx, 31, 0x1AF3B0u);
    ctx->pc = 0x1AF3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3A8u;
            // 0x1af3ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2770u;
    if (runtime->hasFunction(0x2D2770u)) {
        auto targetFn = runtime->lookupFunction(0x2D2770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3B0u; }
        if (ctx->pc != 0x1AF3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapSndDataID__Fi_0x2d2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3B0u; }
        if (ctx->pc != 0x1AF3B0u) { return; }
    }
    ctx->pc = 0x1AF3B0u;
label_1af3b0:
    // 0x1af3b0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af3b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3b8: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1af3bc: 0xc0a9b5c  jal         func_2A6D70
    ctx->pc = 0x1AF3BCu;
    SET_GPR_U32(ctx, 31, 0x1AF3C4u);
    ctx->pc = 0x1AF3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3BCu;
            // 0x1af3c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D70u;
    if (runtime->hasFunction(0x2A6D70u)) {
        auto targetFn = runtime->lookupFunction(0x2A6D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3C4u; }
        if (ctx->pc != 0x1AF3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSound__6CSceneFiP1_0x2a6d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3C4u; }
        if (ctx->pc != 0x1AF3C4u) { return; }
    }
    ctx->pc = 0x1AF3C4u;
label_1af3c4:
    // 0x1af3c4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af3c8: 0x3401906c  ori         $at, $zero, 0x906C
    ctx->pc = 0x1af3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36972);
    // 0x1af3cc: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1af3d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1af3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1af3d4: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1AF3D4u;
    {
        const bool branch_taken_0x1af3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af3d4) {
            ctx->pc = 0x1AF4ACu;
            goto label_1af4ac;
        }
    }
    ctx->pc = 0x1AF3DCu;
    // 0x1af3dc: 0xc0a9b30  jal         func_2A6CC0
    ctx->pc = 0x1AF3DCu;
    SET_GPR_U32(ctx, 31, 0x1AF3E4u);
    ctx->pc = 0x1AF3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3DCu;
            // 0x1af3e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CC0u;
    if (runtime->hasFunction(0x2A6CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3E4u; }
        if (ctx->pc != 0x1AF3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefBgmNo__6CSceneFi_0x2a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3E4u; }
        if (ctx->pc != 0x1AF3E4u) { return; }
    }
    ctx->pc = 0x1AF3E4u;
label_1af3e4:
    // 0x1af3e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af3ec: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF3ECu;
    {
        const bool branch_taken_0x1af3ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af3ec) {
            ctx->pc = 0x1AF400u;
            goto label_1af400;
        }
    }
    ctx->pc = 0x1AF3F4u;
    // 0x1af3f4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af3f8: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x1AF3F8u;
    SET_GPR_U32(ctx, 31, 0x1AF400u);
    ctx->pc = 0x1AF3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3F8u;
            // 0x1af3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF400u; }
        if (ctx->pc != 0x1AF400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF400u; }
        if (ctx->pc != 0x1AF400u) { return; }
    }
    ctx->pc = 0x1AF400u;
label_1af400:
    // 0x1af400: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af404: 0xc0a9ac4  jal         func_2A6B10
    ctx->pc = 0x1AF404u;
    SET_GPR_U32(ctx, 31, 0x1AF40Cu);
    ctx->pc = 0x1AF408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF404u;
            // 0x1af408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (runtime->hasFunction(0x2A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF40Cu; }
        if (ctx->pc != 0x1AF40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGM__6CSceneFi_0x2a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF40Cu; }
        if (ctx->pc != 0x1AF40Cu) { return; }
    }
    ctx->pc = 0x1AF40Cu;
label_1af40c:
    // 0x1af40c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF40Cu;
    {
        const bool branch_taken_0x1af40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF40Cu;
            // 0x1af410: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af40c) {
            ctx->pc = 0x1AF41Cu;
            goto label_1af41c;
        }
    }
    ctx->pc = 0x1AF414u;
    // 0x1af414: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF414u;
    {
        const bool branch_taken_0x1af414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af414) {
            ctx->pc = 0x1AF43Cu;
            goto label_1af43c;
        }
    }
    ctx->pc = 0x1AF41Cu;
label_1af41c:
    // 0x1af41c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af420: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1af420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1af424: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1af424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af42c: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x1AF42Cu;
    SET_GPR_U32(ctx, 31, 0x1AF434u);
    ctx->pc = 0x1AF430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF42Cu;
            // 0x1af430: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF434u; }
        if (ctx->pc != 0x1AF434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF434u; }
        if (ctx->pc != 0x1AF434u) { return; }
    }
    ctx->pc = 0x1AF434u;
label_1af434:
    // 0x1af434: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1AF434u;
    {
        const bool branch_taken_0x1af434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF434u;
            // 0x1af438: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af434) {
            ctx->pc = 0x1AF4B4u;
            goto label_1af4b4;
        }
    }
    ctx->pc = 0x1AF43Cu;
label_1af43c:
    // 0x1af43c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af440: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x1AF440u;
    SET_GPR_U32(ctx, 31, 0x1AF448u);
    ctx->pc = 0x1AF444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF440u;
            // 0x1af444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF448u; }
        if (ctx->pc != 0x1AF448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF448u; }
        if (ctx->pc != 0x1AF448u) { return; }
    }
    ctx->pc = 0x1AF448u;
label_1af448:
    // 0x1af448: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af44c: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x1af44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x1af450: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x1AF450u;
    SET_GPR_U32(ctx, 31, 0x1AF458u);
    ctx->pc = 0x1AF454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF450u;
            // 0x1af454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF458u; }
        if (ctx->pc != 0x1AF458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF458u; }
        if (ctx->pc != 0x1AF458u) { return; }
    }
    ctx->pc = 0x1AF458u;
label_1af458:
    // 0x1af458: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AF458u;
    {
        const bool branch_taken_0x1af458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af458) {
            ctx->pc = 0x1AF4B0u;
            goto label_1af4b0;
        }
    }
    ctx->pc = 0x1AF460u;
    // 0x1af460: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af464: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1af464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1af468: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1af468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af46c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af470: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x1AF470u;
    SET_GPR_U32(ctx, 31, 0x1AF478u);
    ctx->pc = 0x1AF474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF470u;
            // 0x1af474: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF478u; }
        if (ctx->pc != 0x1AF478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF478u; }
        if (ctx->pc != 0x1AF478u) { return; }
    }
    ctx->pc = 0x1AF478u;
label_1af478:
    // 0x1af478: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AF478u;
    {
        const bool branch_taken_0x1af478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af478) {
            ctx->pc = 0x1AF4B0u;
            goto label_1af4b0;
        }
    }
    ctx->pc = 0x1AF480u;
    // 0x1af480: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af484: 0xc0a9938  jal         func_2A64E0
    ctx->pc = 0x1AF484u;
    SET_GPR_U32(ctx, 31, 0x1AF48Cu);
    ctx->pc = 0x1AF488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF484u;
            // 0x1af488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A64E0u;
    if (runtime->hasFunction(0x2A64E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A64E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF48Cu; }
        if (ctx->pc != 0x1AF48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoChangeBGMVol__6CSceneFi_0x2a64e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF48Cu; }
        if (ctx->pc != 0x1AF48Cu) { return; }
    }
    ctx->pc = 0x1AF48Cu;
label_1af48c:
    // 0x1af48c: 0xc0a9e50  jal         func_2A7940
    ctx->pc = 0x1AF48Cu;
    SET_GPR_U32(ctx, 31, 0x1AF494u);
    ctx->pc = 0x1AF490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF48Cu;
            // 0x1af490: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    if (runtime->hasFunction(0x2A7940u)) {
        auto targetFn = runtime->lookupFunction(0x2A7940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF494u; }
        if (ctx->pc != 0x1AF494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepSnd__6CSceneFv_0x2a7940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF494u; }
        if (ctx->pc != 0x1AF494u) { return; }
    }
    ctx->pc = 0x1AF494u;
label_1af494:
    // 0x1af494: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1af494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1af498: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1af498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af49c: 0xc063594  jal         func_18D650
    ctx->pc = 0x1AF49Cu;
    SET_GPR_U32(ctx, 31, 0x1AF4A4u);
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4A4u; }
        if (ctx->pc != 0x1AF4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4A4u; }
        if (ctx->pc != 0x1AF4A4u) { return; }
    }
    ctx->pc = 0x1AF4A4u;
label_1af4a4:
    // 0x1af4a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF4A4u;
    {
        const bool branch_taken_0x1af4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af4a4) {
            ctx->pc = 0x1AF4B0u;
            goto label_1af4b0;
        }
    }
    ctx->pc = 0x1AF4ACu;
label_1af4ac:
    // 0x1af4ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1af4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1af4b0:
    // 0x1af4b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af4b4:
    // 0x1af4b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4B8u;
            // 0x1af4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF4C0u;
}
