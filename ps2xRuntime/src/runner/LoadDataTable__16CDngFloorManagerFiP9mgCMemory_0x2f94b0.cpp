#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadDataTable__16CDngFloorManagerFiP9mgCMemory
// Address: 0x2f94b0 - 0x2f960c
void LoadDataTable__16CDngFloorManagerFiP9mgCMemory_0x2f94b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadDataTable__16CDngFloorManagerFiP9mgCMemory_0x2f94b0");
#endif

    switch (ctx->pc) {
        case 0x2f9500u: goto label_2f9500;
        case 0x2f9518u: goto label_2f9518;
        case 0x2f9520u: goto label_2f9520;
        case 0x2f9538u: goto label_2f9538;
        case 0x2f9554u: goto label_2f9554;
        case 0x2f9568u: goto label_2f9568;
        case 0x2f9570u: goto label_2f9570;
        case 0x2f9588u: goto label_2f9588;
        case 0x2f95a4u: goto label_2f95a4;
        case 0x2f95bcu: goto label_2f95bc;
        case 0x2f95d0u: goto label_2f95d0;
        case 0x2f95ecu: goto label_2f95ec;
        default: break;
    }

    ctx->pc = 0x2f94b0u;

    // 0x2f94b0: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x2f94b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x2f94b4: 0x34215f00  ori         $at, $at, 0x5F00
    ctx->pc = 0x2f94b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24320);
    // 0x2f94b8: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2f94b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2f94bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f94bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f94c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f94c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f94c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f94c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f94c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f94c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f94d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f94d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f94d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94d8: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F94D8u;
    {
        const bool branch_taken_0x2f94d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F94DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94D8u;
            // 0x2f94dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94d8) {
            ctx->pc = 0x2F95ECu;
            goto label_2f95ec;
        }
    }
    ctx->pc = 0x2F94E0u;
    // 0x2f94e0: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F94E0u;
    {
        const bool branch_taken_0x2f94e0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2F94E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94E0u;
            // 0x2f94e4: 0x2a420007  slti        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94e0) {
            ctx->pc = 0x2F94F0u;
            goto label_2f94f0;
        }
    }
    ctx->pc = 0x2F94E8u;
    // 0x2f94e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F94E8u;
    {
        const bool branch_taken_0x2f94e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F94ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94E8u;
            // 0x2f94ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94e8) {
            ctx->pc = 0x2F94F8u;
            goto label_2f94f8;
        }
    }
    ctx->pc = 0x2F94F0u;
label_2f94f0:
    // 0x2f94f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f94f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f94f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f94f8:
    // 0x2f94f8: 0xc0be330  jal         func_2F8CC0
    ctx->pc = 0x2F94F8u;
    SET_GPR_U32(ctx, 31, 0x2F9500u);
    ctx->pc = 0x2F8CC0u;
    if (runtime->hasFunction(0x2F8CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F8CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9500u; }
        if (ctx->pc != 0x2F9500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CDngFloorManagerFv_0x2f8cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9500u; }
        if (ctx->pc != 0x2F9500u) { return; }
    }
    ctx->pc = 0x2F9500u;
label_2f9500:
    // 0x2f9500: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f9500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f9504: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f9504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f9508: 0x24a51b70  addiu       $a1, $a1, 0x1B70
    ctx->pc = 0x2f9508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
    // 0x2f950c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f950cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9510: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F9510u;
    SET_GPR_U32(ctx, 31, 0x2F9518u);
    ctx->pc = 0x2F9514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9510u;
            // 0x2f9514: 0xa2720000  sb          $s2, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9518u; }
        if (ctx->pc != 0x2F9518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9518u; }
        if (ctx->pc != 0x2F9518u) { return; }
    }
    ctx->pc = 0x2F9518u;
label_2f9518:
    // 0x2f9518: 0xc094430  jal         func_2510C0
    ctx->pc = 0x2F9518u;
    SET_GPR_U32(ctx, 31, 0x2F9520u);
    ctx->pc = 0x2F951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9518u;
            // 0x2f951c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9520u; }
        if (ctx->pc != 0x2F9520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9520u; }
        if (ctx->pc != 0x2F9520u) { return; }
    }
    ctx->pc = 0x2F9520u;
label_2f9520:
    // 0x2f9520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f9520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9524: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f9524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f9528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f9528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f952c: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2f952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2f9530: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2F9530u;
    SET_GPR_U32(ctx, 31, 0x2F9538u);
    ctx->pc = 0x2F9534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9530u;
            // 0x2f9534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9538u; }
        if (ctx->pc != 0x2F9538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9538u; }
        if (ctx->pc != 0x2F9538u) { return; }
    }
    ctx->pc = 0x2F9538u;
label_2f9538:
    // 0x2f9538: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2f9538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2f953c: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F953Cu;
    {
        const bool branch_taken_0x2f953c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2f953c) {
            ctx->pc = 0x2F9554u;
            goto label_2f9554;
        }
    }
    ctx->pc = 0x2F9544u;
    // 0x2f9544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f9544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9548: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f9548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f954c: 0xc0be508  jal         func_2F9420
    ctx->pc = 0x2F954Cu;
    SET_GPR_U32(ctx, 31, 0x2F9554u);
    ctx->pc = 0x2F9550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F954Cu;
            // 0x2f9550: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9420u;
    if (runtime->hasFunction(0x2F9420u)) {
        auto targetFn = runtime->lookupFunction(0x2F9420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9554u; }
        if (ctx->pc != 0x2F9554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeFile__16CDngFloorManagerFPciP9mgCMemory_0x2f9420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9554u; }
        if (ctx->pc != 0x2F9554u) { return; }
    }
    ctx->pc = 0x2F9554u;
label_2f9554:
    // 0x2f9554: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f9554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f9558: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f9558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f955c: 0x24a51b90  addiu       $a1, $a1, 0x1B90
    ctx->pc = 0x2f955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7056));
    // 0x2f9560: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F9560u;
    SET_GPR_U32(ctx, 31, 0x2F9568u);
    ctx->pc = 0x2F9564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9560u;
            // 0x2f9564: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9568u; }
        if (ctx->pc != 0x2F9568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9568u; }
        if (ctx->pc != 0x2F9568u) { return; }
    }
    ctx->pc = 0x2F9568u;
label_2f9568:
    // 0x2f9568: 0xc094430  jal         func_2510C0
    ctx->pc = 0x2F9568u;
    SET_GPR_U32(ctx, 31, 0x2F9570u);
    ctx->pc = 0x2F956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9568u;
            // 0x2f956c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9570u; }
        if (ctx->pc != 0x2F9570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9570u; }
        if (ctx->pc != 0x2F9570u) { return; }
    }
    ctx->pc = 0x2F9570u;
label_2f9570:
    // 0x2f9570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f9570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9574: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f9574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f9578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f9578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f957c: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2f957cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2f9580: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2F9580u;
    SET_GPR_U32(ctx, 31, 0x2F9588u);
    ctx->pc = 0x2F9584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9580u;
            // 0x2f9584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9588u; }
        if (ctx->pc != 0x2F9588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9588u; }
        if (ctx->pc != 0x2F9588u) { return; }
    }
    ctx->pc = 0x2F9588u;
label_2f9588:
    // 0x2f9588: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2f9588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2f958c: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F958Cu;
    {
        const bool branch_taken_0x2f958c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F9590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F958Cu;
            // 0x2f9590: 0x3401a0c0  ori         $at, $zero, 0xA0C0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41152);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f958c) {
            ctx->pc = 0x2F95A8u;
            goto label_2f95a8;
        }
    }
    ctx->pc = 0x2F9594u;
    // 0x2f9594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f9594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f9598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f959c: 0xc0be508  jal         func_2F9420
    ctx->pc = 0x2F959Cu;
    SET_GPR_U32(ctx, 31, 0x2F95A4u);
    ctx->pc = 0x2F95A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F959Cu;
            // 0x2f95a0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9420u;
    if (runtime->hasFunction(0x2F9420u)) {
        auto targetFn = runtime->lookupFunction(0x2F9420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95A4u; }
        if (ctx->pc != 0x2F95A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeFile__16CDngFloorManagerFPciP9mgCMemory_0x2f9420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95A4u; }
        if (ctx->pc != 0x2F95A4u) { return; }
    }
    ctx->pc = 0x2F95A4u;
label_2f95a4:
    // 0x2f95a4: 0x3401a0c0  ori         $at, $zero, 0xA0C0
    ctx->pc = 0x2f95a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41152);
label_2f95a8:
    // 0x2f95a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f95a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f95ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f95acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f95b0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2f95b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2f95b4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F95B4u;
    SET_GPR_U32(ctx, 31, 0x2F95BCu);
    ctx->pc = 0x2F95B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F95B4u;
            // 0x2f95b8: 0x24a51ba8  addiu       $a1, $a1, 0x1BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95BCu; }
        if (ctx->pc != 0x2F95BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95BCu; }
        if (ctx->pc != 0x2F95BCu) { return; }
    }
    ctx->pc = 0x2F95BCu;
label_2f95bc:
    // 0x2f95bc: 0x3401a0c0  ori         $at, $zero, 0xA0C0
    ctx->pc = 0x2f95bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41152);
    // 0x2f95c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f95c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f95c4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x2f95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2f95c8: 0xc094440  jal         func_251100
    ctx->pc = 0x2F95C8u;
    SET_GPR_U32(ctx, 31, 0x2F95D0u);
    ctx->pc = 0x2F95CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F95C8u;
            // 0x2f95cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95D0u; }
        if (ctx->pc != 0x2F95D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95D0u; }
        if (ctx->pc != 0x2F95D0u) { return; }
    }
    ctx->pc = 0x2F95D0u;
label_2f95d0:
    // 0x2f95d0: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2f95d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2f95d4: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2f95d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2f95d8: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F95D8u;
    {
        const bool branch_taken_0x2f95d8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2F95DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F95D8u;
            // 0x2f95dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95d8) {
            ctx->pc = 0x2F95ECu;
            goto label_2f95ec;
        }
    }
    ctx->pc = 0x2F95E0u;
    // 0x2f95e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f95e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f95e4: 0xc0be508  jal         func_2F9420
    ctx->pc = 0x2F95E4u;
    SET_GPR_U32(ctx, 31, 0x2F95ECu);
    ctx->pc = 0x2F95E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F95E4u;
            // 0x2f95e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9420u;
    if (runtime->hasFunction(0x2F9420u)) {
        auto targetFn = runtime->lookupFunction(0x2F9420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95ECu; }
        if (ctx->pc != 0x2F95ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeFile__16CDngFloorManagerFPciP9mgCMemory_0x2f9420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95ECu; }
        if (ctx->pc != 0x2F95ECu) { return; }
    }
    ctx->pc = 0x2F95ECu;
label_2f95ec:
    // 0x2f95ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f95ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f95f0: 0x3401a100  ori         $at, $zero, 0xA100
    ctx->pc = 0x2f95f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41216);
    // 0x2f95f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f95f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f95f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f95f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f95fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f95fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9604: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9604u;
            // 0x2f9608: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F960Cu;
}
