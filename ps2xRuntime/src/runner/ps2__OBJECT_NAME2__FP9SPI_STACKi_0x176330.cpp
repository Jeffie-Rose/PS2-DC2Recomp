#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJECT_NAME2__FP9SPI_STACKi
// Address: 0x176330 - 0x17651c
void ps2__OBJECT_NAME2__FP9SPI_STACKi_0x176330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJECT_NAME2__FP9SPI_STACKi_0x176330");
#endif

    switch (ctx->pc) {
        case 0x176378u: goto label_176378;
        case 0x1763bcu: goto label_1763bc;
        case 0x17640cu: goto label_17640c;
        case 0x176424u: goto label_176424;
        case 0x176430u: goto label_176430;
        case 0x17643cu: goto label_17643c;
        case 0x176458u: goto label_176458;
        case 0x176474u: goto label_176474;
        default: break;
    }

    ctx->pc = 0x176330u;

    // 0x176330: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x176330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x176334: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x176334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x176338: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x176338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17633c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17633cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x176340: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x176340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x176344: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x176348: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x176348u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17634c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x176350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176354: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x176358: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x176358u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17635c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17636c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x17636cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176370: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x176370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176374: 0x0  nop
    ctx->pc = 0x176374u;
    // NOP
label_176378:
    // 0x176378: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x176378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17637c: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x17637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x176380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176380u;
    {
        const bool branch_taken_0x176380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176380) {
            ctx->pc = 0x176390u;
            goto label_176390;
        }
    }
    ctx->pc = 0x176388u;
    // 0x176388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x176388u;
    {
        const bool branch_taken_0x176388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176388u;
            // 0x17638c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176388) {
            ctx->pc = 0x1763A0u;
            goto label_1763a0;
        }
    }
    ctx->pc = 0x176390u;
label_176390:
    // 0x176390: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x176390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x176394: 0x28820018  slti        $v0, $a0, 0x18
    ctx->pc = 0x176394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x176398: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x176398u;
    {
        const bool branch_taken_0x176398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176398u;
            // 0x17639c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176398) {
            ctx->pc = 0x176378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176378;
        }
    }
    ctx->pc = 0x1763A0u;
label_1763a0:
    // 0x1763a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1763a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1763a4: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1763A4u;
    {
        const bool branch_taken_0x1763a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1763A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763A4u;
            // 0x1763a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763a4) {
            ctx->pc = 0x1763B4u;
            goto label_1763b4;
        }
    }
    ctx->pc = 0x1763ACu;
    // 0x1763ac: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1763ACu;
    {
        const bool branch_taken_0x1763ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763ACu;
            // 0x1763b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763ac) {
            ctx->pc = 0x1764ECu;
            goto label_1764ec;
        }
    }
    ctx->pc = 0x1763B4u;
label_1763b4:
    // 0x1763b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1763B4u;
    SET_GPR_U32(ctx, 31, 0x1763BCu);
    ctx->pc = 0x1763B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1763B4u;
            // 0x1763b8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1763BCu; }
        if (ctx->pc != 0x1763BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1763BCu; }
        if (ctx->pc != 0x1763BCu) { return; }
    }
    ctx->pc = 0x1763BCu;
label_1763bc:
    // 0x1763bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1763bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763c0: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1763c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1763c4: 0x8c5e0070  lw          $fp, 0x70($v0)
    ctx->pc = 0x1763c4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1763c8: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1763C8u;
    {
        const bool branch_taken_0x1763c8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1763CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763C8u;
            // 0x1763cc: 0x26c2ffff  addiu       $v0, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763c8) {
            ctx->pc = 0x1763D8u;
            goto label_1763d8;
        }
    }
    ctx->pc = 0x1763D0u;
    // 0x1763d0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1763D0u;
    {
        const bool branch_taken_0x1763d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763D0u;
            // 0x1763d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763d0) {
            ctx->pc = 0x1764ECu;
            goto label_1764ec;
        }
    }
    ctx->pc = 0x1763D8u;
label_1763d8:
    // 0x1763d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1763D8u;
    {
        const bool branch_taken_0x1763d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1763DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763D8u;
            // 0x1763dc: 0x2b843  sra         $s7, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763d8) {
            ctx->pc = 0x1763E8u;
            goto label_1763e8;
        }
    }
    ctx->pc = 0x1763E0u;
    // 0x1763e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1763e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1763e4: 0x2b843  sra         $s7, $v0, 1
    ctx->pc = 0x1763e4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 1));
label_1763e8:
    // 0x1763e8: 0x2ac10003  slti        $at, $s6, 0x3
    ctx->pc = 0x1763e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1763ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1763ECu;
    {
        const bool branch_taken_0x1763ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763ECu;
            // 0x1763f0: 0x17082a  slt         $at, $zero, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763ec) {
            ctx->pc = 0x1763FCu;
            goto label_1763fc;
        }
    }
    ctx->pc = 0x1763F4u;
    // 0x1763f4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1763f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1763f8: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1763f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1763fc:
    // 0x1763fc: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1763FCu;
    {
        const bool branch_taken_0x1763fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x176400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763FCu;
            // 0x176400: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763fc) {
            ctx->pc = 0x1764E8u;
            goto label_1764e8;
        }
    }
    ctx->pc = 0x176404u;
    // 0x176404: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x176404u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x176408: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x176408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_17640c:
    // 0x17640c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17640Cu;
    {
        const bool branch_taken_0x17640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17640Cu;
            // 0x176410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17640c) {
            ctx->pc = 0x17641Cu;
            goto label_17641c;
        }
    }
    ctx->pc = 0x176414u;
    // 0x176414: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x176414u;
    {
        const bool branch_taken_0x176414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176414u;
            // 0x176418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176414) {
            ctx->pc = 0x1764ECu;
            goto label_1764ec;
        }
    }
    ctx->pc = 0x17641Cu;
label_17641c:
    // 0x17641c: 0xc05191c  jal         func_146470
    ctx->pc = 0x17641Cu;
    SET_GPR_U32(ctx, 31, 0x176424u);
    ctx->pc = 0x176420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17641Cu;
            // 0x176420: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176424u; }
        if (ctx->pc != 0x176424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176424u; }
        if (ctx->pc != 0x176424u) { return; }
    }
    ctx->pc = 0x176424u;
label_176424:
    // 0x176424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176428: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x176428u;
    SET_GPR_U32(ctx, 31, 0x176430u);
    ctx->pc = 0x17642Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176428u;
            // 0x17642c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176430u; }
        if (ctx->pc != 0x176430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176430u; }
        if (ctx->pc != 0x176430u) { return; }
    }
    ctx->pc = 0x176430u;
label_176430:
    // 0x176430: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x176430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176434: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x176434u;
    SET_GPR_U32(ctx, 31, 0x17643Cu);
    ctx->pc = 0x176438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176434u;
            // 0x176438: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17643Cu; }
        if (ctx->pc != 0x17643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17643Cu; }
        if (ctx->pc != 0x17643Cu) { return; }
    }
    ctx->pc = 0x17643Cu;
label_17643c:
    // 0x17643c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17643cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176440: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x176440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x176444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176448: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176448u;
    {
        const bool branch_taken_0x176448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176448u;
            // 0x17644c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176448) {
            ctx->pc = 0x176460u;
            goto label_176460;
        }
    }
    ctx->pc = 0x176450u;
    // 0x176450: 0xc05190c  jal         func_146430
    ctx->pc = 0x176450u;
    SET_GPR_U32(ctx, 31, 0x176458u);
    ctx->pc = 0x176454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176450u;
            // 0x176454: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176458u; }
        if (ctx->pc != 0x176458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176458u; }
        if (ctx->pc != 0x176458u) { return; }
    }
    ctx->pc = 0x176458u;
label_176458:
    // 0x176458: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x176458u;
    {
        const bool branch_taken_0x176458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176458) {
            ctx->pc = 0x176474u;
            goto label_176474;
        }
    }
    ctx->pc = 0x176460u;
label_176460:
    // 0x176460: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x176460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x176464: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176464u;
    {
        const bool branch_taken_0x176464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176464u;
            // 0x176468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176464) {
            ctx->pc = 0x176474u;
            goto label_176474;
        }
    }
    ctx->pc = 0x17646Cu;
    // 0x17646c: 0xc05190c  jal         func_146430
    ctx->pc = 0x17646Cu;
    SET_GPR_U32(ctx, 31, 0x176474u);
    ctx->pc = 0x176470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17646Cu;
            // 0x176470: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176474u; }
        if (ctx->pc != 0x176474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176474u; }
        if (ctx->pc != 0x176474u) { return; }
    }
    ctx->pc = 0x176474u;
label_176474:
    // 0x176474: 0x0  nop
    ctx->pc = 0x176474u;
    // NOP
    // 0x176478: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x176478u;
    {
        const bool branch_taken_0x176478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17647Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176478u;
            // 0x17647c: 0x2a210002  slti        $at, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176478) {
            ctx->pc = 0x1764D4u;
            goto label_1764d4;
        }
    }
    ctx->pc = 0x176480u;
    // 0x176480: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x176480u;
    {
        const bool branch_taken_0x176480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x176480) {
            ctx->pc = 0x176498u;
            goto label_176498;
        }
    }
    ctx->pc = 0x176488u;
    // 0x176488: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x176488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x17648c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17648cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x176490: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x176490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176494: 0xac520138  sw          $s2, 0x138($v0)
    ctx->pc = 0x176494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 18));
label_176498:
    // 0x176498: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x176498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x17649c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1764a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1764a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1764a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1764a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1764a8: 0xac520140  sw          $s2, 0x140($v0)
    ctx->pc = 0x1764a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 18));
    // 0x1764ac: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1764b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1764b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1764b4: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1764b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1764b8: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1764b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1764bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1764bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1764c0: 0xac510148  sw          $s1, 0x148($v0)
    ctx->pc = 0x1764c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 17));
    // 0x1764c4: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1764c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1764c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1764c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1764cc: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x1764ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x1764d0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1764d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1764d4:
    // 0x1764d4: 0x0  nop
    ctx->pc = 0x1764d4u;
    // NOP
    // 0x1764d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1764d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1764dc: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x1764dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1764e0: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1764E0u;
    {
        const bool branch_taken_0x1764e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1764E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1764E0u;
            // 0x1764e4: 0x2a020018  slti        $v0, $s0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764e0) {
            ctx->pc = 0x17640Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17640c;
        }
    }
    ctx->pc = 0x1764E8u;
label_1764e8:
    // 0x1764e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1764e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1764ec:
    // 0x1764ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1764ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1764f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1764f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1764f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1764f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1764f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1764f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1764fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1764fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176500: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x176500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17650c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17650cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176514: 0x3e00008  jr          $ra
    ctx->pc = 0x176514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176514u;
            // 0x176518: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17651Cu;
}
