#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapLIGHT__FP9SPI_STACKi
// Address: 0x1654d0 - 0x1655c4
void mapLIGHT__FP9SPI_STACKi_0x1654d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapLIGHT__FP9SPI_STACKi_0x1654d0");
#endif

    switch (ctx->pc) {
        case 0x165500u: goto label_165500;
        case 0x165538u: goto label_165538;
        case 0x165544u: goto label_165544;
        case 0x16558cu: goto label_16558c;
        case 0x1655a8u: goto label_1655a8;
        default: break;
    }

    ctx->pc = 0x1654d0u;

    // 0x1654d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1654d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1654d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1654d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1654d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1654d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1654dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1654dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1654e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1654e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1654e4: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1654e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1654e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1654E8u;
    {
        const bool branch_taken_0x1654e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1654ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1654E8u;
            // 0x1654ec: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654e8) {
            ctx->pc = 0x1654F8u;
            goto label_1654f8;
        }
    }
    ctx->pc = 0x1654F0u;
    // 0x1654f0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1654F0u;
    {
        const bool branch_taken_0x1654f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1654F0u;
            // 0x1654f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654f0) {
            ctx->pc = 0x1655ACu;
            goto label_1655ac;
        }
    }
    ctx->pc = 0x1654F8u;
label_1654f8:
    // 0x1654f8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1654F8u;
    SET_GPR_U32(ctx, 31, 0x165500u);
    ctx->pc = 0x1654FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1654F8u;
            // 0x1654fc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165500u; }
        if (ctx->pc != 0x165500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165500u; }
        if (ctx->pc != 0x165500u) { return; }
    }
    ctx->pc = 0x165500u;
label_165500:
    // 0x165500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165504: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165504u;
    {
        const bool branch_taken_0x165504 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x165508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165504u;
            // 0x165508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165504) {
            ctx->pc = 0x165518u;
            goto label_165518;
        }
    }
    ctx->pc = 0x16550Cu;
    // 0x16550c: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x16550cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x165510: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x165510u;
    {
        const bool branch_taken_0x165510 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x165514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165510u;
            // 0x165514: 0x2a410004  slti        $at, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165510) {
            ctx->pc = 0x165520u;
            goto label_165520;
        }
    }
    ctx->pc = 0x165518u;
label_165518:
    // 0x165518: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x165518u;
    {
        const bool branch_taken_0x165518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16551Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165518u;
            // 0x16551c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165518) {
            ctx->pc = 0x1655B0u;
            goto label_1655b0;
        }
    }
    ctx->pc = 0x165520u;
label_165520:
    // 0x165520: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x165520u;
    {
        const bool branch_taken_0x165520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165520u;
            // 0x165524: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165520) {
            ctx->pc = 0x165530u;
            goto label_165530;
        }
    }
    ctx->pc = 0x165528u;
    // 0x165528: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x165528u;
    {
        const bool branch_taken_0x165528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165528u;
            // 0x16552c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165528) {
            ctx->pc = 0x1655ACu;
            goto label_1655ac;
        }
    }
    ctx->pc = 0x165530u;
label_165530:
    // 0x165530: 0xc051928  jal         func_1464A0
    ctx->pc = 0x165530u;
    SET_GPR_U32(ctx, 31, 0x165538u);
    ctx->pc = 0x165534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165530u;
            // 0x165534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165538u; }
        if (ctx->pc != 0x165538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165538u; }
        if (ctx->pc != 0x165538u) { return; }
    }
    ctx->pc = 0x165538u;
label_165538:
    // 0x165538: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x165538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16553c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x16553Cu;
    SET_GPR_U32(ctx, 31, 0x165544u);
    ctx->pc = 0x165540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16553Cu;
            // 0x165540: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165544u; }
        if (ctx->pc != 0x165544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165544u; }
        if (ctx->pc != 0x165544u) { return; }
    }
    ctx->pc = 0x165544u;
label_165544:
    // 0x165544: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x165544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165548: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x165548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16554c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x16554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165550: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x165550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x165554: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x165554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x165558: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x165558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x16555c: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x16555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165560: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x165560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165564: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x165564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x165568: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x165568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x16556c: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165570: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x165570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165574: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x165574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x165578: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165578u;
    {
        const bool branch_taken_0x165578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165578u;
            // 0x16557c: 0xe4600050  swc1        $f0, 0x50($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x165578) {
            ctx->pc = 0x1655A8u;
            goto label_1655a8;
        }
    }
    ctx->pc = 0x165580u;
    // 0x165580: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x165584: 0xc051928  jal         func_1464A0
    ctx->pc = 0x165584u;
    SET_GPR_U32(ctx, 31, 0x16558Cu);
    ctx->pc = 0x165588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165584u;
            // 0x165588: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16558Cu; }
        if (ctx->pc != 0x16558Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16558Cu; }
        if (ctx->pc != 0x16558Cu) { return; }
    }
    ctx->pc = 0x16558Cu;
label_16558c:
    // 0x16558c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x16558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165590: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x165590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x165594: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x165594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x165598: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x165598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x16559c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1655a0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1655A0u;
    SET_GPR_U32(ctx, 31, 0x1655A8u);
    ctx->pc = 0x1655A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1655A0u;
            // 0x1655a4: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655A8u; }
        if (ctx->pc != 0x1655A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655A8u; }
        if (ctx->pc != 0x1655A8u) { return; }
    }
    ctx->pc = 0x1655A8u;
label_1655a8:
    // 0x1655a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1655a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1655ac:
    // 0x1655ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1655acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1655b0:
    // 0x1655b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1655b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1655b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1655b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1655b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1655b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1655bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1655BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1655C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1655BCu;
            // 0x1655c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1655C4u;
}
