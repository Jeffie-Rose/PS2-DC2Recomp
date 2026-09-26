#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCN_GET_CHR_FRM_POS__FP12RS_STACKDATAi
// Address: 0x2e73f0 - 0x2e74bc
void ps2__SCN_GET_CHR_FRM_POS__FP12RS_STACKDATAi_0x2e73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCN_GET_CHR_FRM_POS__FP12RS_STACKDATAi_0x2e73f0");
#endif

    switch (ctx->pc) {
        case 0x2e7418u: goto label_2e7418;
        case 0x2e7428u: goto label_2e7428;
        case 0x2e7434u: goto label_2e7434;
        case 0x2e7460u: goto label_2e7460;
        case 0x2e7478u: goto label_2e7478;
        case 0x2e7488u: goto label_2e7488;
        case 0x2e7498u: goto label_2e7498;
        case 0x2e74a4u: goto label_2e74a4;
        default: break;
    }

    ctx->pc = 0x2e73f0u;

    // 0x2e73f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e73f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e73f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e73f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e73fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e73fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7400: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7400u;
    {
        const bool branch_taken_0x2e7400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7400u;
            // 0x2e7404: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7400) {
            ctx->pc = 0x2E7410u;
            goto label_2e7410;
        }
    }
    ctx->pc = 0x2E7408u;
    // 0x2e7408: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E7408u;
    {
        const bool branch_taken_0x2e7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7408u;
            // 0x2e740c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7408) {
            ctx->pc = 0x2E74A8u;
            goto label_2e74a8;
        }
    }
    ctx->pc = 0x2E7410u;
label_2e7410:
    // 0x2e7410: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7410u;
    SET_GPR_U32(ctx, 31, 0x2E7418u);
    ctx->pc = 0x2E7414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7410u;
            // 0x2e7414: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7418u; }
        if (ctx->pc != 0x2E7418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7418u; }
        if (ctx->pc != 0x2E7418u) { return; }
    }
    ctx->pc = 0x2E7418u;
label_2e7418:
    // 0x2e7418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e741c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e741cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7420: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E7420u;
    SET_GPR_U32(ctx, 31, 0x2E7428u);
    ctx->pc = 0x2E7424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7420u;
            // 0x2e7424: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7428u; }
        if (ctx->pc != 0x2E7428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7428u; }
        if (ctx->pc != 0x2E7428u) { return; }
    }
    ctx->pc = 0x2E7428u;
label_2e7428:
    // 0x2e7428: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e7428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e742c: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E742Cu;
    SET_GPR_U32(ctx, 31, 0x2E7434u);
    ctx->pc = 0x2E7430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E742Cu;
            // 0x2e7430: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7434u; }
        if (ctx->pc != 0x2E7434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7434u; }
        if (ctx->pc != 0x2E7434u) { return; }
    }
    ctx->pc = 0x2E7434u;
label_2e7434:
    // 0x2e7434: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7434u;
    {
        const bool branch_taken_0x2e7434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7434) {
            ctx->pc = 0x2E7444u;
            goto label_2e7444;
        }
    }
    ctx->pc = 0x2E743Cu;
    // 0x2e743c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E743Cu;
    {
        const bool branch_taken_0x2e743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E743Cu;
            // 0x2e7440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e743c) {
            ctx->pc = 0x2E74A8u;
            goto label_2e74a8;
        }
    }
    ctx->pc = 0x2E7444u;
label_2e7444:
    // 0x2e7444: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2e7444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2e7448: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7448u;
    {
        const bool branch_taken_0x2e7448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7448u;
            // 0x2e744c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7448) {
            ctx->pc = 0x2E7458u;
            goto label_2e7458;
        }
    }
    ctx->pc = 0x2E7450u;
    // 0x2e7450: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E7450u;
    {
        const bool branch_taken_0x2e7450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7450u;
            // 0x2e7454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7450) {
            ctx->pc = 0x2E74A8u;
            goto label_2e74a8;
        }
    }
    ctx->pc = 0x2E7458u;
label_2e7458:
    // 0x2e7458: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2E7458u;
    SET_GPR_U32(ctx, 31, 0x2E7460u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7460u; }
        if (ctx->pc != 0x2E7460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7460u; }
        if (ctx->pc != 0x2E7460u) { return; }
    }
    ctx->pc = 0x2E7460u;
label_2e7460:
    // 0x2e7460: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7460u;
    {
        const bool branch_taken_0x2e7460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7460u;
            // 0x2e7464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7460) {
            ctx->pc = 0x2E7470u;
            goto label_2e7470;
        }
    }
    ctx->pc = 0x2E7468u;
    // 0x2e7468: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E7468u;
    {
        const bool branch_taken_0x2e7468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7468u;
            // 0x2e746c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7468) {
            ctx->pc = 0x2E74A8u;
            goto label_2e74a8;
        }
    }
    ctx->pc = 0x2E7470u;
label_2e7470:
    // 0x2e7470: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2E7470u;
    SET_GPR_U32(ctx, 31, 0x2E7478u);
    ctx->pc = 0x2E7474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7470u;
            // 0x2e7474: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7478u; }
        if (ctx->pc != 0x2E7478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7478u; }
        if (ctx->pc != 0x2E7478u) { return; }
    }
    ctx->pc = 0x2E7478u;
label_2e7478:
    // 0x2e7478: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2e7478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e747c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7480: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7480u;
    SET_GPR_U32(ctx, 31, 0x2E7488u);
    ctx->pc = 0x2E7484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7480u;
            // 0x2e7484: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7488u; }
        if (ctx->pc != 0x2E7488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7488u; }
        if (ctx->pc != 0x2E7488u) { return; }
    }
    ctx->pc = 0x2E7488u;
label_2e7488:
    // 0x2e7488: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x2e7488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e748c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7490: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7490u;
    SET_GPR_U32(ctx, 31, 0x2E7498u);
    ctx->pc = 0x2E7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7490u;
            // 0x2e7494: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7498u; }
        if (ctx->pc != 0x2E7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7498u; }
        if (ctx->pc != 0x2E7498u) { return; }
    }
    ctx->pc = 0x2E7498u;
label_2e7498:
    // 0x2e7498: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x2e7498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e749c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E749Cu;
    SET_GPR_U32(ctx, 31, 0x2E74A4u);
    ctx->pc = 0x2E74A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E749Cu;
            // 0x2e74a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E74A4u; }
        if (ctx->pc != 0x2E74A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E74A4u; }
        if (ctx->pc != 0x2E74A4u) { return; }
    }
    ctx->pc = 0x2E74A4u;
label_2e74a4:
    // 0x2e74a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e74a8:
    // 0x2e74a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e74a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e74ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e74acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e74b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e74b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e74b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E74B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E74B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E74B4u;
            // 0x2e74b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E74BCu;
}
