#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_OBJ_POS__FP12RS_STACKDATAi
// Address: 0x1e3480 - 0x1e3570
void ps2__GET_OBJ_POS__FP12RS_STACKDATAi_0x1e3480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_OBJ_POS__FP12RS_STACKDATAi_0x1e3480");
#endif

    switch (ctx->pc) {
        case 0x1e34b8u: goto label_1e34b8;
        case 0x1e34d0u: goto label_1e34d0;
        case 0x1e34e8u: goto label_1e34e8;
        case 0x1e34f8u: goto label_1e34f8;
        case 0x1e350cu: goto label_1e350c;
        case 0x1e3528u: goto label_1e3528;
        case 0x1e3538u: goto label_1e3538;
        case 0x1e3548u: goto label_1e3548;
        case 0x1e3554u: goto label_1e3554;
        default: break;
    }

    ctx->pc = 0x1e3480u;

    // 0x1e3480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e3484: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1e3484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e3488: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e3488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e348c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e3490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3494: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3494u;
    {
        const bool branch_taken_0x1e3494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3494u;
            // 0x1e3498: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3494) {
            ctx->pc = 0x1E34A8u;
            goto label_1e34a8;
        }
    }
    ctx->pc = 0x1E349Cu;
    // 0x1e349c: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x1e349cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e34a0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E34A0u;
    {
        const bool branch_taken_0x1e34a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E34A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34A0u;
            // 0x1e34a4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34a0) {
            ctx->pc = 0x1E34B0u;
            goto label_1e34b0;
        }
    }
    ctx->pc = 0x1E34A8u;
label_1e34a8:
    // 0x1e34a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E34A8u;
    {
        const bool branch_taken_0x1e34a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34A8u;
            // 0x1e34ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34a8) {
            ctx->pc = 0x1E3558u;
            goto label_1e3558;
        }
    }
    ctx->pc = 0x1E34B0u;
label_1e34b0:
    // 0x1e34b0: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E34B0u;
    SET_GPR_U32(ctx, 31, 0x1E34B8u);
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34B8u; }
        if (ctx->pc != 0x1E34B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34B8u; }
        if (ctx->pc != 0x1E34B8u) { return; }
    }
    ctx->pc = 0x1E34B8u;
label_1e34b8:
    // 0x1e34b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e34b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e34c0: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E34C0u;
    {
        const bool branch_taken_0x1e34c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E34C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34C0u;
            // 0x1e34c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34c0) {
            ctx->pc = 0x1E34D0u;
            goto label_1e34d0;
        }
    }
    ctx->pc = 0x1E34C8u;
    // 0x1e34c8: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E34C8u;
    SET_GPR_U32(ctx, 31, 0x1E34D0u);
    ctx->pc = 0x1E34CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34C8u;
            // 0x1e34cc: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34D0u; }
        if (ctx->pc != 0x1E34D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34D0u; }
        if (ctx->pc != 0x1E34D0u) { return; }
    }
    ctx->pc = 0x1E34D0u;
label_1e34d0:
    // 0x1e34d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e34d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e34d4: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E34D4u;
    {
        const bool branch_taken_0x1e34d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e34d4) {
            ctx->pc = 0x1E3500u;
            goto label_1e3500;
        }
    }
    ctx->pc = 0x1E34DCu;
    // 0x1e34dc: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e34dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e34e0: 0xc05af24  jal         func_16BC90
    ctx->pc = 0x1E34E0u;
    SET_GPR_U32(ctx, 31, 0x1E34E8u);
    ctx->pc = 0x1E34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34E0u;
            // 0x1e34e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34E8u; }
        if (ctx->pc != 0x1E34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34E8u; }
        if (ctx->pc != 0x1E34E8u) { return; }
    }
    ctx->pc = 0x1E34E8u;
label_1e34e8:
    // 0x1e34e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E34E8u;
    {
        const bool branch_taken_0x1e34e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34E8u;
            // 0x1e34ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34e8) {
            ctx->pc = 0x1E3510u;
            goto label_1e3510;
        }
    }
    ctx->pc = 0x1E34F0u;
    // 0x1e34f0: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x1E34F0u;
    SET_GPR_U32(ctx, 31, 0x1E34F8u);
    ctx->pc = 0x1E34F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34F0u;
            // 0x1e34f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34F8u; }
        if (ctx->pc != 0x1E34F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34F8u; }
        if (ctx->pc != 0x1E34F8u) { return; }
    }
    ctx->pc = 0x1E34F8u;
label_1e34f8:
    // 0x1e34f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E34F8u;
    {
        const bool branch_taken_0x1e34f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34F8u;
            // 0x1e34fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34f8) {
            ctx->pc = 0x1E3510u;
            goto label_1e3510;
        }
    }
    ctx->pc = 0x1E3500u;
label_1e3500:
    // 0x1e3500: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e3500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3504: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x1E3504u;
    SET_GPR_U32(ctx, 31, 0x1E350Cu);
    ctx->pc = 0x1E3508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3504u;
            // 0x1e3508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E350Cu; }
        if (ctx->pc != 0x1E350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E350Cu; }
        if (ctx->pc != 0x1E350Cu) { return; }
    }
    ctx->pc = 0x1E350Cu;
label_1e350c:
    // 0x1e350c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e350cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3510:
    // 0x1e3510: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3510u;
    {
        const bool branch_taken_0x1e3510 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3510u;
            // 0x1e3514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3510) {
            ctx->pc = 0x1E3520u;
            goto label_1e3520;
        }
    }
    ctx->pc = 0x1E3518u;
    // 0x1e3518: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E3518u;
    {
        const bool branch_taken_0x1e3518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3518u;
            // 0x1e351c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3518) {
            ctx->pc = 0x1E3558u;
            goto label_1e3558;
        }
    }
    ctx->pc = 0x1E3520u;
label_1e3520:
    // 0x1e3520: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1E3520u;
    SET_GPR_U32(ctx, 31, 0x1E3528u);
    ctx->pc = 0x1E3524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3520u;
            // 0x1e3524: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3528u; }
        if (ctx->pc != 0x1E3528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3528u; }
        if (ctx->pc != 0x1E3528u) { return; }
    }
    ctx->pc = 0x1E3528u;
label_1e3528:
    // 0x1e3528: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1e3528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e352c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3530: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E3530u;
    SET_GPR_U32(ctx, 31, 0x1E3538u);
    ctx->pc = 0x1E3534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3530u;
            // 0x1e3534: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3538u; }
        if (ctx->pc != 0x1E3538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3538u; }
        if (ctx->pc != 0x1E3538u) { return; }
    }
    ctx->pc = 0x1E3538u;
label_1e3538:
    // 0x1e3538: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1e3538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e353c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3540: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E3540u;
    SET_GPR_U32(ctx, 31, 0x1E3548u);
    ctx->pc = 0x1E3544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3540u;
            // 0x1e3544: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3548u; }
        if (ctx->pc != 0x1E3548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3548u; }
        if (ctx->pc != 0x1E3548u) { return; }
    }
    ctx->pc = 0x1E3548u;
label_1e3548:
    // 0x1e3548: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x1e3548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e354c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E354Cu;
    SET_GPR_U32(ctx, 31, 0x1E3554u);
    ctx->pc = 0x1E3550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E354Cu;
            // 0x1e3550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3554u; }
        if (ctx->pc != 0x1E3554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3554u; }
        if (ctx->pc != 0x1E3554u) { return; }
    }
    ctx->pc = 0x1E3554u;
label_1e3554:
    // 0x1e3554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3558:
    // 0x1e3558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e3558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e355c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e355cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3568: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3568u;
            // 0x1e356c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3570u;
}
