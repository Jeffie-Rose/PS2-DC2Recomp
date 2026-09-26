#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_MATERIAL__FP9SPI_STACKi
// Address: 0x1627a0 - 0x1628e4
void mapPIECE_MATERIAL__FP9SPI_STACKi_0x1627a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_MATERIAL__FP9SPI_STACKi_0x1627a0");
#endif

    switch (ctx->pc) {
        case 0x1627d4u: goto label_1627d4;
        case 0x1627fcu: goto label_1627fc;
        case 0x162818u: goto label_162818;
        case 0x162828u: goto label_162828;
        case 0x162848u: goto label_162848;
        case 0x162868u: goto label_162868;
        case 0x162878u: goto label_162878;
        case 0x162888u: goto label_162888;
        case 0x162898u: goto label_162898;
        case 0x1628a8u: goto label_1628a8;
        case 0x1628b8u: goto label_1628b8;
        case 0x1628c4u: goto label_1628c4;
        default: break;
    }

    ctx->pc = 0x1627a0u;

    // 0x1627a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1627a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1627a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1627a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1627a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1627a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1627ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1627acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1627b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1627b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1627b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1627b8: 0x8f84891c  lw          $a0, -0x76E4($gp)
    ctx->pc = 0x1627b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
    // 0x1627bc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1627BCu;
    {
        const bool branch_taken_0x1627bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1627C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627BCu;
            // 0x1627c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627bc) {
            ctx->pc = 0x1627CCu;
            goto label_1627cc;
        }
    }
    ctx->pc = 0x1627C4u;
    // 0x1627c4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1627C4u;
    {
        const bool branch_taken_0x1627c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627C4u;
            // 0x1627c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627c4) {
            ctx->pc = 0x1628D0u;
            goto label_1628d0;
        }
    }
    ctx->pc = 0x1627CCu;
label_1627cc:
    // 0x1627cc: 0xc0588d8  jal         func_162360
    ctx->pc = 0x1627CCu;
    SET_GPR_U32(ctx, 31, 0x1627D4u);
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627D4u; }
        if (ctx->pc != 0x1627D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627D4u; }
        if (ctx->pc != 0x1627D4u) { return; }
    }
    ctx->pc = 0x1627D4u;
label_1627d4:
    // 0x1627d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1627d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627d8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1627D8u;
    {
        const bool branch_taken_0x1627d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1627DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1627D8u;
            // 0x1627dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627d8) {
            ctx->pc = 0x1627E8u;
            goto label_1627e8;
        }
    }
    ctx->pc = 0x1627E0u;
    // 0x1627e0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1627E0u;
    {
        const bool branch_taken_0x1627e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627e0) {
            ctx->pc = 0x1628CCu;
            goto label_1628cc;
        }
    }
    ctx->pc = 0x1627E8u;
label_1627e8:
    // 0x1627e8: 0x8f858944  lw          $a1, -0x76BC($gp)
    ctx->pc = 0x1627e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936900)));
    // 0x1627ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1627ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627f0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1627f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1627f4: 0xc05a18c  jal         func_168630
    ctx->pc = 0x1627F4u;
    SET_GPR_U32(ctx, 31, 0x1627FCu);
    ctx->pc = 0x1627F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1627F4u;
            // 0x1627f8: 0xaf828944  sw          $v0, -0x76BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168630u;
    if (runtime->hasFunction(0x168630u)) {
        auto targetFn = runtime->lookupFunction(0x168630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627FCu; }
        if (ctx->pc != 0x1627FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__9CMapPieceFi_0x168630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627FCu; }
        if (ctx->pc != 0x1627FCu) { return; }
    }
    ctx->pc = 0x1627FCu;
label_1627fc:
    // 0x1627fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1627fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162800: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162800u;
    {
        const bool branch_taken_0x162800 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x162804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162800u;
            // 0x162804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162800) {
            ctx->pc = 0x162810u;
            goto label_162810;
        }
    }
    ctx->pc = 0x162808u;
    // 0x162808: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x162808u;
    {
        const bool branch_taken_0x162808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16280Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162808u;
            // 0x16280c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162808) {
            ctx->pc = 0x1628CCu;
            goto label_1628cc;
        }
    }
    ctx->pc = 0x162810u;
label_162810:
    // 0x162810: 0xc058a48  jal         func_162920
    ctx->pc = 0x162810u;
    SET_GPR_U32(ctx, 31, 0x162818u);
    ctx->pc = 0x162920u;
    if (runtime->hasFunction(0x162920u)) {
        auto targetFn = runtime->lookupFunction(0x162920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162818u; }
        if (ctx->pc != 0x162818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__12CObjectFrameFv_0x162920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162818u; }
        if (ctx->pc != 0x162818u) { return; }
    }
    ctx->pc = 0x162818u;
label_162818:
    // 0x162818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16281c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16281cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162820: 0xc05191c  jal         func_146470
    ctx->pc = 0x162820u;
    SET_GPR_U32(ctx, 31, 0x162828u);
    ctx->pc = 0x162824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162820u;
            // 0x162824: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162828u; }
        if (ctx->pc != 0x162828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162828u; }
        if (ctx->pc != 0x162828u) { return; }
    }
    ctx->pc = 0x162828u;
label_162828:
    // 0x162828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162828u;
    {
        const bool branch_taken_0x162828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162828) {
            ctx->pc = 0x162838u;
            goto label_162838;
        }
    }
    ctx->pc = 0x162830u;
    // 0x162830: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162830u;
    {
        const bool branch_taken_0x162830 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x162834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162830u;
            // 0x162834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162830) {
            ctx->pc = 0x162840u;
            goto label_162840;
        }
    }
    ctx->pc = 0x162838u;
label_162838:
    // 0x162838: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x162838u;
    {
        const bool branch_taken_0x162838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162838u;
            // 0x16283c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162838) {
            ctx->pc = 0x1628CCu;
            goto label_1628cc;
        }
    }
    ctx->pc = 0x162840u;
label_162840:
    // 0x162840: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x162840u;
    SET_GPR_U32(ctx, 31, 0x162848u);
    ctx->pc = 0x162844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162840u;
            // 0x162844: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162848u; }
        if (ctx->pc != 0x162848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162848u; }
        if (ctx->pc != 0x162848u) { return; }
    }
    ctx->pc = 0x162848u;
label_162848:
    // 0x162848: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x162848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16284c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162850u;
    {
        const bool branch_taken_0x162850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162850u;
            // 0x162854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162850) {
            ctx->pc = 0x162860u;
            goto label_162860;
        }
    }
    ctx->pc = 0x162858u;
    // 0x162858: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x162858u;
    {
        const bool branch_taken_0x162858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162858u;
            // 0x16285c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162858) {
            ctx->pc = 0x1628CCu;
            goto label_1628cc;
        }
    }
    ctx->pc = 0x162860u;
label_162860:
    // 0x162860: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x162860u;
    SET_GPR_U32(ctx, 31, 0x162868u);
    ctx->pc = 0x162864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162860u;
            // 0x162864: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162868u; }
        if (ctx->pc != 0x162868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162868u; }
        if (ctx->pc != 0x162868u) { return; }
    }
    ctx->pc = 0x162868u;
label_162868:
    // 0x162868: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x162868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16286c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x16286cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162870: 0xc058a3c  jal         func_1628F0
    ctx->pc = 0x162870u;
    SET_GPR_U32(ctx, 31, 0x162878u);
    ctx->pc = 0x162874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162870u;
            // 0x162874: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1628F0u;
    if (runtime->hasFunction(0x1628F0u)) {
        auto targetFn = runtime->lookupFunction(0x1628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162878u; }
        if (ctx->pc != 0x162878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__8mgCFrameFi_0x1628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162878u; }
        if (ctx->pc != 0x162878u) { return; }
    }
    ctx->pc = 0x162878u;
label_162878:
    // 0x162878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16287c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x16287cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x162880: 0xc05190c  jal         func_146430
    ctx->pc = 0x162880u;
    SET_GPR_U32(ctx, 31, 0x162888u);
    ctx->pc = 0x162884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162880u;
            // 0x162884: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162888u; }
        if (ctx->pc != 0x162888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162888u; }
        if (ctx->pc != 0x162888u) { return; }
    }
    ctx->pc = 0x162888u;
label_162888:
    // 0x162888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16288c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x16288cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x162890: 0xc05190c  jal         func_146430
    ctx->pc = 0x162890u;
    SET_GPR_U32(ctx, 31, 0x162898u);
    ctx->pc = 0x162894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162890u;
            // 0x162894: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162898u; }
        if (ctx->pc != 0x162898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162898u; }
        if (ctx->pc != 0x162898u) { return; }
    }
    ctx->pc = 0x162898u;
label_162898:
    // 0x162898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16289c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x16289cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1628a0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1628A0u;
    SET_GPR_U32(ctx, 31, 0x1628A8u);
    ctx->pc = 0x1628A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1628A0u;
            // 0x1628a4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628A8u; }
        if (ctx->pc != 0x1628A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628A8u; }
        if (ctx->pc != 0x1628A8u) { return; }
    }
    ctx->pc = 0x1628A8u;
label_1628a8:
    // 0x1628a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1628a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628ac: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1628acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1628b0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1628B0u;
    SET_GPR_U32(ctx, 31, 0x1628B8u);
    ctx->pc = 0x1628B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1628B0u;
            // 0x1628b4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628B8u; }
        if (ctx->pc != 0x1628B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628B8u; }
        if (ctx->pc != 0x1628B8u) { return; }
    }
    ctx->pc = 0x1628B8u;
label_1628b8:
    // 0x1628b8: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1628b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1628bc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1628BCu;
    SET_GPR_U32(ctx, 31, 0x1628C4u);
    ctx->pc = 0x1628C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1628BCu;
            // 0x1628c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628C4u; }
        if (ctx->pc != 0x1628C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628C4u; }
        if (ctx->pc != 0x1628C4u) { return; }
    }
    ctx->pc = 0x1628C4u;
label_1628c4:
    // 0x1628c4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1628c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1628c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1628c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1628cc:
    // 0x1628cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1628ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1628d0:
    // 0x1628d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1628d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1628d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1628d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1628d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1628d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1628dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1628DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1628E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1628DCu;
            // 0x1628e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1628E4u;
}
