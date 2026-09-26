#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemTable__FiPi
// Address: 0x200500 - 0x2005d0
void CheckItemTable__FiPi_0x200500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemTable__FiPi_0x200500");
#endif

    switch (ctx->pc) {
        case 0x200534u: goto label_200534;
        case 0x200550u: goto label_200550;
        case 0x20056cu: goto label_20056c;
        case 0x20057cu: goto label_20057c;
        case 0x200588u: goto label_200588;
        default: break;
    }

    ctx->pc = 0x200500u;

    // 0x200500: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x200504: 0x342147b0  ori         $at, $at, 0x47B0
    ctx->pc = 0x200504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18352);
    // 0x200508: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x200508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x20050c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x200510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200518: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20051c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200524: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x200524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x200528: 0xa7a00040  sh          $zero, 0x40($sp)
    ctx->pc = 0x200528u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x20052c: 0xc094430  jal         func_2510C0
    ctx->pc = 0x20052Cu;
    SET_GPR_U32(ctx, 31, 0x200534u);
    ctx->pc = 0x200530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20052Cu;
            // 0x200530: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200534u; }
        if (ctx->pc != 0x200534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200534u; }
        if (ctx->pc != 0x200534u) { return; }
    }
    ctx->pc = 0x200534u;
label_200534:
    // 0x200534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200538: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x20053c: 0x24849088  addiu       $a0, $a0, -0x6F78
    ctx->pc = 0x20053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938760));
    // 0x200540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200544: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x200544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x200548: 0xc0524dc  jal         func_149370
    ctx->pc = 0x200548u;
    SET_GPR_U32(ctx, 31, 0x200550u);
    ctx->pc = 0x20054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200548u;
            // 0x20054c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200550u; }
        if (ctx->pc != 0x200550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200550u; }
        if (ctx->pc != 0x200550u) { return; }
    }
    ctx->pc = 0x200550u;
label_200550:
    // 0x200550: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x200550u;
    {
        const bool branch_taken_0x200550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200550u;
            // 0x200554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200550) {
            ctx->pc = 0x2005B4u;
            goto label_2005b4;
        }
    }
    ctx->pc = 0x200558u;
    // 0x200558: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x200558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x20055c: 0x27a57850  addiu       $a1, $sp, 0x7850
    ctx->pc = 0x20055cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 30800));
    // 0x200560: 0x2484b7a0  addiu       $a0, $a0, -0x4860
    ctx->pc = 0x200560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
    // 0x200564: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x200564u;
    SET_GPR_U32(ctx, 31, 0x20056Cu);
    ctx->pc = 0x200568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200564u;
            // 0x200568: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20056Cu; }
        if (ctx->pc != 0x20056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20056Cu; }
        if (ctx->pc != 0x20056Cu) { return; }
    }
    ctx->pc = 0x20056Cu;
label_20056c:
    // 0x20056c: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x20056cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x200570: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200574: 0xc0800b4  jal         func_2002D0
    ctx->pc = 0x200574u;
    SET_GPR_U32(ctx, 31, 0x20057Cu);
    ctx->pc = 0x200578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200574u;
            // 0x200578: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2002D0u;
    if (runtime->hasFunction(0x2002D0u)) {
        auto targetFn = runtime->lookupFunction(0x2002D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20057Cu; }
        if (ctx->pc != 0x20057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadAnalyzeInventFile__17CInventDataManageFPci_0x2002d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20057Cu; }
        if (ctx->pc != 0x20057Cu) { return; }
    }
    ctx->pc = 0x20057Cu;
label_20057c:
    // 0x20057c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200580: 0xc07fef0  jal         func_1FFBC0
    ctx->pc = 0x200580u;
    SET_GPR_U32(ctx, 31, 0x200588u);
    ctx->pc = 0x200584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200580u;
            // 0x200584: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBC0u;
    if (runtime->hasFunction(0x1FFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200588u; }
        if (ctx->pc != 0x200588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200588u; }
        if (ctx->pc != 0x200588u) { return; }
    }
    ctx->pc = 0x200588u;
label_200588:
    // 0x200588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200588u;
    {
        const bool branch_taken_0x200588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200588) {
            ctx->pc = 0x200598u;
            goto label_200598;
        }
    }
    ctx->pc = 0x200590u;
    // 0x200590: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200590u;
    {
        const bool branch_taken_0x200590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200590u;
            // 0x200594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200590) {
            ctx->pc = 0x2005B4u;
            goto label_2005b4;
        }
    }
    ctx->pc = 0x200598u;
label_200598:
    // 0x200598: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x20059c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20059cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2005a0: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2005a4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2005a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2005a8: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x2005a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2005ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2005acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2005b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2005b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2005b4:
    // 0x2005b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2005b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2005b8: 0x3401b850  ori         $at, $zero, 0xB850
    ctx->pc = 0x2005b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47184);
    // 0x2005bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2005bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2005c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2005c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2005c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2005c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2005c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2005C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2005CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2005C8u;
            // 0x2005cc: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2005D0u;
}
