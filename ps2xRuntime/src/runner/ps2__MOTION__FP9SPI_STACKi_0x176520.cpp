#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MOTION__FP9SPI_STACKi
// Address: 0x176520 - 0x17670c
void ps2__MOTION__FP9SPI_STACKi_0x176520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MOTION__FP9SPI_STACKi_0x176520");
#endif

    switch (ctx->pc) {
        case 0x176568u: goto label_176568;
        case 0x1765b8u: goto label_1765b8;
        case 0x1765c4u: goto label_1765c4;
        case 0x1765d4u: goto label_1765d4;
        case 0x1765e0u: goto label_1765e0;
        case 0x17661cu: goto label_17661c;
        case 0x176634u: goto label_176634;
        case 0x17668cu: goto label_17668c;
        case 0x17669cu: goto label_17669c;
        default: break;
    }

    ctx->pc = 0x176520u;

    // 0x176520: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x176520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x176524: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x176524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x176528: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x176528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17652c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x176530: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x176534: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x176538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17653c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176548: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x176548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x17654c: 0x8c520070  lw          $s2, 0x70($v0)
    ctx->pc = 0x17654cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x176550: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x176550u;
    {
        const bool branch_taken_0x176550 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x176554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176550u;
            // 0x176554: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176550) {
            ctx->pc = 0x176560u;
            goto label_176560;
        }
    }
    ctx->pc = 0x176558u;
    // 0x176558: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x176558u;
    {
        const bool branch_taken_0x176558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176558u;
            // 0x17655c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176558) {
            ctx->pc = 0x1766E0u;
            goto label_1766e0;
        }
    }
    ctx->pc = 0x176560u;
label_176560:
    // 0x176560: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x176560u;
    SET_GPR_U32(ctx, 31, 0x176568u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176568u; }
        if (ctx->pc != 0x176568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176568u; }
        if (ctx->pc != 0x176568u) { return; }
    }
    ctx->pc = 0x176568u;
label_176568:
    // 0x176568: 0xaf8289b4  sw          $v0, -0x764C($gp)
    ctx->pc = 0x176568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 2));
    // 0x17656c: 0x8f8489b4  lw          $a0, -0x764C($gp)
    ctx->pc = 0x17656cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x176570: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176570u;
    {
        const bool branch_taken_0x176570 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x176574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176570u;
            // 0x176574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176570) {
            ctx->pc = 0x176588u;
            goto label_176588;
        }
    }
    ctx->pc = 0x176578u;
    // 0x176578: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x176578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17657c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17657Cu;
    {
        const bool branch_taken_0x17657c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17657c) {
            ctx->pc = 0x176590u;
            goto label_176590;
        }
    }
    ctx->pc = 0x176584u;
    // 0x176584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176588:
    // 0x176588: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x176588u;
    {
        const bool branch_taken_0x176588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17658Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176588u;
            // 0x17658c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176588) {
            ctx->pc = 0x1766E4u;
            goto label_1766e4;
        }
    }
    ctx->pc = 0x176590u;
label_176590:
    // 0x176590: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x176590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176594: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x176594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x176598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17659c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17659cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1765a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1765a4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1765a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1765a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1765a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1765ac: 0x245003c0  addiu       $s0, $v0, 0x3C0
    ctx->pc = 0x1765acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x1765b0: 0xc049c86  jal         func_127218
    ctx->pc = 0x1765B0u;
    SET_GPR_U32(ctx, 31, 0x1765B8u);
    ctx->pc = 0x1765B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765B0u;
            // 0x1765b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765B8u; }
        if (ctx->pc != 0x1765B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765B8u; }
        if (ctx->pc != 0x1765B8u) { return; }
    }
    ctx->pc = 0x1765B8u;
label_1765b8:
    // 0x1765b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1765b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765bc: 0xc05191c  jal         func_146470
    ctx->pc = 0x1765BCu;
    SET_GPR_U32(ctx, 31, 0x1765C4u);
    ctx->pc = 0x1765C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765BCu;
            // 0x1765c0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765C4u; }
        if (ctx->pc != 0x1765C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765C4u; }
        if (ctx->pc != 0x1765C4u) { return; }
    }
    ctx->pc = 0x1765C4u;
label_1765c4:
    // 0x1765c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1765c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1765c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765cc: 0xc05191c  jal         func_146470
    ctx->pc = 0x1765CCu;
    SET_GPR_U32(ctx, 31, 0x1765D4u);
    ctx->pc = 0x1765D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765CCu;
            // 0x1765d0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765D4u; }
        if (ctx->pc != 0x1765D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765D4u; }
        if (ctx->pc != 0x1765D4u) { return; }
    }
    ctx->pc = 0x1765D4u;
label_1765d4:
    // 0x1765d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1765d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765d8: 0xc05191c  jal         func_146470
    ctx->pc = 0x1765D8u;
    SET_GPR_U32(ctx, 31, 0x1765E0u);
    ctx->pc = 0x1765DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765D8u;
            // 0x1765dc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765E0u; }
        if (ctx->pc != 0x1765E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765E0u; }
        if (ctx->pc != 0x1765E0u) { return; }
    }
    ctx->pc = 0x1765E0u;
label_1765e0:
    // 0x1765e0: 0x27b7009c  addiu       $s7, $sp, 0x9C
    ctx->pc = 0x1765e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1765e4: 0x27b30098  addiu       $s3, $sp, 0x98
    ctx->pc = 0x1765e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1765e8: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x1765e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
    // 0x1765ec: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x1765ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1765f0: 0xafb40090  sw          $s4, 0x90($sp)
    ctx->pc = 0x1765f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 20));
    // 0x1765f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1765f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765f8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1765f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1765fc: 0x27b400a4  addiu       $s4, $sp, 0xA4
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x176600: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x176600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x176604: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x176604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x176608: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x176608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x17660c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x17660cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x176610: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x176610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x176614: 0xc052734  jal         func_149CD0
    ctx->pc = 0x176614u;
    SET_GPR_U32(ctx, 31, 0x17661Cu);
    ctx->pc = 0x176618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176614u;
            // 0x176618: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17661Cu; }
        if (ctx->pc != 0x17661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17661Cu; }
        if (ctx->pc != 0x17661Cu) { return; }
    }
    ctx->pc = 0x17661Cu;
label_17661c:
    // 0x17661c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17661cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176620: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x176624: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x176624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x176628: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x176628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x17662c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x17662Cu;
    SET_GPR_U32(ctx, 31, 0x176634u);
    ctx->pc = 0x176630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17662Cu;
            // 0x176630: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176634u; }
        if (ctx->pc != 0x176634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176634u; }
        if (ctx->pc != 0x176634u) { return; }
    }
    ctx->pc = 0x176634u;
label_176634:
    // 0x176634: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x176634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x176638: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x176638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x17663c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x176640: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x176640u;
    {
        const bool branch_taken_0x176640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176640) {
            ctx->pc = 0x17664Cu;
            goto label_17664c;
        }
    }
    ctx->pc = 0x176648u;
    // 0x176648: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x176648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_17664c:
    // 0x17664c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x17664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x176650: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x176650u;
    {
        const bool branch_taken_0x176650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176650) {
            ctx->pc = 0x17665Cu;
            goto label_17665c;
        }
    }
    ctx->pc = 0x176658u;
    // 0x176658: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x176658u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_17665c:
    // 0x17665c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x17665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x176660: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x176660u;
    {
        const bool branch_taken_0x176660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176660) {
            ctx->pc = 0x17666Cu;
            goto label_17666c;
        }
    }
    ctx->pc = 0x176668u;
    // 0x176668: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x176668u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_17666c:
    // 0x17666c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x17666cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176670: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x176670u;
    {
        const bool branch_taken_0x176670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x176670) {
            ctx->pc = 0x17668Cu;
            goto label_17668c;
        }
    }
    ctx->pc = 0x176678u;
    // 0x176678: 0x8e44006c  lw          $a0, 0x6C($s2)
    ctx->pc = 0x176678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x17667c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17667Cu;
    {
        const bool branch_taken_0x17667c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x176680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17667Cu;
            // 0x176680: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17667c) {
            ctx->pc = 0x17668Cu;
            goto label_17668c;
        }
    }
    ctx->pc = 0x176684u;
    // 0x176684: 0xc049c18  jal         func_127060
    ctx->pc = 0x176684u;
    SET_GPR_U32(ctx, 31, 0x17668Cu);
    ctx->pc = 0x176688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176684u;
            // 0x176688: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17668Cu; }
        if (ctx->pc != 0x17668Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17668Cu; }
        if (ctx->pc != 0x17668Cu) { return; }
    }
    ctx->pc = 0x17668Cu;
label_17668c:
    // 0x17668c: 0x8f8589e0  lw          $a1, -0x7620($gp)
    ctx->pc = 0x17668cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x176690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176694: 0xc053614  jal         func_14D850
    ctx->pc = 0x176694u;
    SET_GPR_U32(ctx, 31, 0x17669Cu);
    ctx->pc = 0x176698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176694u;
            // 0x176698: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D850u;
    if (runtime->hasFunction(0x14D850u)) {
        auto targetFn = runtime->lookupFunction(0x14D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17669Cu; }
        if (ctx->pc != 0x17669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateAnimeDataEX__FP14tagMOTION_TYPEP9mgCMemoryP16MOTION_FILE_INFO_0x14d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17669Cu; }
        if (ctx->pc != 0x17669Cu) { return; }
    }
    ctx->pc = 0x17669Cu;
label_17669c:
    // 0x17669c: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x17669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x1766a0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1766A0u;
    {
        const bool branch_taken_0x1766a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1766A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1766A0u;
            // 0x1766a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766a0) {
            ctx->pc = 0x1766E0u;
            goto label_1766e0;
        }
    }
    ctx->pc = 0x1766A8u;
    // 0x1766a8: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1766ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1766acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1766b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1766b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1766b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1766b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1766b8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1766b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1766bc: 0x8c820460  lw          $v0, 0x460($a0)
    ctx->pc = 0x1766bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x1766c0: 0xac620460  sw          $v0, 0x460($v1)
    ctx->pc = 0x1766c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    // 0x1766c4: 0x8c820464  lw          $v0, 0x464($a0)
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1124)));
    // 0x1766c8: 0xac620464  sw          $v0, 0x464($v1)
    ctx->pc = 0x1766c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1124), GPR_U32(ctx, 2));
    // 0x1766cc: 0x8c820468  lw          $v0, 0x468($a0)
    ctx->pc = 0x1766ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1128)));
    // 0x1766d0: 0xac620468  sw          $v0, 0x468($v1)
    ctx->pc = 0x1766d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1128), GPR_U32(ctx, 2));
    // 0x1766d4: 0x8c82046c  lw          $v0, 0x46C($a0)
    ctx->pc = 0x1766d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x1766d8: 0xac62046c  sw          $v0, 0x46C($v1)
    ctx->pc = 0x1766d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1132), GPR_U32(ctx, 2));
    // 0x1766dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1766e0:
    // 0x1766e0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1766e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1766e4:
    // 0x1766e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1766e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1766e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1766e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1766ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1766ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1766f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1766f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1766f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1766f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1766f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1766f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1766fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1766fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176704: 0x3e00008  jr          $ra
    ctx->pc = 0x176704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176704u;
            // 0x176708: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17670Cu;
}
