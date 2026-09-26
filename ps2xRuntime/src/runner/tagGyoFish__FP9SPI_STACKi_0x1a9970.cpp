#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: tagGyoFish__FP9SPI_STACKi
// Address: 0x1a9970 - 0x1a9a84
void tagGyoFish__FP9SPI_STACKi_0x1a9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tagGyoFish__FP9SPI_STACKi_0x1a9970");
#endif

    switch (ctx->pc) {
        case 0x1a9990u: goto label_1a9990;
        case 0x1a99b0u: goto label_1a99b0;
        case 0x1a99c4u: goto label_1a99c4;
        case 0x1a99d0u: goto label_1a99d0;
        case 0x1a99e0u: goto label_1a99e0;
        case 0x1a99f0u: goto label_1a99f0;
        case 0x1a9a00u: goto label_1a9a00;
        case 0x1a9a10u: goto label_1a9a10;
        case 0x1a9a20u: goto label_1a9a20;
        case 0x1a9a30u: goto label_1a9a30;
        case 0x1a9a40u: goto label_1a9a40;
        case 0x1a9a4cu: goto label_1a9a4c;
        case 0x1a9a5cu: goto label_1a9a5c;
        default: break;
    }

    ctx->pc = 0x1a9970u;

    // 0x1a9970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a9978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a9978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a997c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9980: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a9984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9988: 0xc0868f8  jal         func_21A3E0
    ctx->pc = 0x1A9988u;
    SET_GPR_U32(ctx, 31, 0x1A9990u);
    ctx->pc = 0x1A998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9988u;
            // 0x1a998c: 0x8f848c44  lw          $a0, -0x73BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937668)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A3E0u;
    if (runtime->hasFunction(0x21A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x21A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9990u; }
        if (ctx->pc != 0x1A9990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOmakeGyoracer2__Fi_0x21a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9990u; }
        if (ctx->pc != 0x1A9990u) { return; }
    }
    ctx->pc = 0x1A9990u;
label_1a9990:
    // 0x1a9990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9994: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9994u;
    {
        const bool branch_taken_0x1a9994 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9994u;
            // 0x1a9998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9994) {
            ctx->pc = 0x1A99A4u;
            goto label_1a99a4;
        }
    }
    ctx->pc = 0x1A999Cu;
    // 0x1a999c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1A999Cu;
    {
        const bool branch_taken_0x1a999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A99A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A999Cu;
            // 0x1a99a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a999c) {
            ctx->pc = 0x1A9A6Cu;
            goto label_1a9a6c;
        }
    }
    ctx->pc = 0x1A99A4u;
label_1a99a4:
    // 0x1a99a4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1a99a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a99a8: 0xc05191c  jal         func_146470
    ctx->pc = 0x1A99A8u;
    SET_GPR_U32(ctx, 31, 0x1A99B0u);
    ctx->pc = 0x1A99ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99A8u;
            // 0x1a99ac: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99B0u; }
        if (ctx->pc != 0x1A99B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99B0u; }
        if (ctx->pc != 0x1A99B0u) { return; }
    }
    ctx->pc = 0x1A99B0u;
label_1a99b0:
    // 0x1a99b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A99B0u;
    {
        const bool branch_taken_0x1a99b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A99B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99B0u;
            // 0x1a99b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99b0) {
            ctx->pc = 0x1A99C8u;
            goto label_1a99c8;
        }
    }
    ctx->pc = 0x1A99B8u;
    // 0x1a99b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a99b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99bc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1A99BCu;
    SET_GPR_U32(ctx, 31, 0x1A99C4u);
    ctx->pc = 0x1A99C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99BCu;
            // 0x1a99c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99C4u; }
        if (ctx->pc != 0x1A99C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99C4u; }
        if (ctx->pc != 0x1A99C4u) { return; }
    }
    ctx->pc = 0x1A99C4u;
label_1a99c4:
    // 0x1a99c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a99c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a99c8:
    // 0x1a99c8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A99C8u;
    SET_GPR_U32(ctx, 31, 0x1A99D0u);
    ctx->pc = 0x1A99CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99C8u;
            // 0x1a99cc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99D0u; }
        if (ctx->pc != 0x1A99D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99D0u; }
        if (ctx->pc != 0x1A99D0u) { return; }
    }
    ctx->pc = 0x1A99D0u;
label_1a99d0:
    // 0x1a99d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a99d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99d4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a99d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a99d8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A99D8u;
    SET_GPR_U32(ctx, 31, 0x1A99E0u);
    ctx->pc = 0x1A99DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99D8u;
            // 0x1a99dc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99E0u; }
        if (ctx->pc != 0x1A99E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99E0u; }
        if (ctx->pc != 0x1A99E0u) { return; }
    }
    ctx->pc = 0x1A99E0u;
label_1a99e0:
    // 0x1a99e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a99e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99e4: 0xa222003a  sb          $v0, 0x3A($s1)
    ctx->pc = 0x1a99e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a99e8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A99E8u;
    SET_GPR_U32(ctx, 31, 0x1A99F0u);
    ctx->pc = 0x1A99ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99E8u;
            // 0x1a99ec: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99F0u; }
        if (ctx->pc != 0x1A99F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A99F0u; }
        if (ctx->pc != 0x1A99F0u) { return; }
    }
    ctx->pc = 0x1A99F0u;
label_1a99f0:
    // 0x1a99f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a99f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99f4: 0xa2220016  sb          $v0, 0x16($s1)
    ctx->pc = 0x1a99f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a99f8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A99F8u;
    SET_GPR_U32(ctx, 31, 0x1A9A00u);
    ctx->pc = 0x1A99FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99F8u;
            // 0x1a99fc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A00u; }
        if (ctx->pc != 0x1A9A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A00u; }
        if (ctx->pc != 0x1A9A00u) { return; }
    }
    ctx->pc = 0x1A9A00u;
label_1a9a00:
    // 0x1a9a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a08: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A9A08u;
    SET_GPR_U32(ctx, 31, 0x1A9A10u);
    ctx->pc = 0x1A9A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A08u;
            // 0x1a9a0c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A10u; }
        if (ctx->pc != 0x1A9A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A10u; }
        if (ctx->pc != 0x1A9A10u) { return; }
    }
    ctx->pc = 0x1A9A10u;
label_1a9a10:
    // 0x1a9a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a14: 0xa622002e  sh          $v0, 0x2E($s1)
    ctx->pc = 0x1a9a14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a9a18: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A9A18u;
    SET_GPR_U32(ctx, 31, 0x1A9A20u);
    ctx->pc = 0x1A9A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A18u;
            // 0x1a9a1c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A20u; }
        if (ctx->pc != 0x1A9A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A20u; }
        if (ctx->pc != 0x1A9A20u) { return; }
    }
    ctx->pc = 0x1A9A20u;
label_1a9a20:
    // 0x1a9a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a24: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x1a9a24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a9a28: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A9A28u;
    SET_GPR_U32(ctx, 31, 0x1A9A30u);
    ctx->pc = 0x1A9A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A28u;
            // 0x1a9a2c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A30u; }
        if (ctx->pc != 0x1A9A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A30u; }
        if (ctx->pc != 0x1A9A30u) { return; }
    }
    ctx->pc = 0x1A9A30u;
label_1a9a30:
    // 0x1a9a30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a34: 0xa6220026  sh          $v0, 0x26($s1)
    ctx->pc = 0x1a9a34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a9a38: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A9A38u;
    SET_GPR_U32(ctx, 31, 0x1A9A40u);
    ctx->pc = 0x1A9A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A38u;
            // 0x1a9a3c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A40u; }
        if (ctx->pc != 0x1A9A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A40u; }
        if (ctx->pc != 0x1A9A40u) { return; }
    }
    ctx->pc = 0x1A9A40u;
label_1a9a40:
    // 0x1a9a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a44: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1A9A44u;
    SET_GPR_U32(ctx, 31, 0x1A9A4Cu);
    ctx->pc = 0x1A9A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A44u;
            // 0x1a9a48: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A4Cu; }
        if (ctx->pc != 0x1A9A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A4Cu; }
        if (ctx->pc != 0x1A9A4Cu) { return; }
    }
    ctx->pc = 0x1A9A4Cu;
label_1a9a4c:
    // 0x1a9a4c: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x1a9a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a9a50: 0x8f848c44  lw          $a0, -0x73BC($gp)
    ctx->pc = 0x1a9a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937668)));
    // 0x1a9a54: 0xc086924  jal         func_21A490
    ctx->pc = 0x1A9A54u;
    SET_GPR_U32(ctx, 31, 0x1A9A5Cu);
    ctx->pc = 0x1A9A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A54u;
            // 0x1a9a58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A490u;
    if (runtime->hasFunction(0x21A490u)) {
        auto targetFn = runtime->lookupFunction(0x21A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A5Cu; }
        if (ctx->pc != 0x1A9A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOmakeGyoracerTactics__Fii_0x21a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A5Cu; }
        if (ctx->pc != 0x1A9A5Cu) { return; }
    }
    ctx->pc = 0x1A9A5Cu;
label_1a9a5c:
    // 0x1a9a5c: 0x8f838c44  lw          $v1, -0x73BC($gp)
    ctx->pc = 0x1a9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937668)));
    // 0x1a9a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9a64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a9a68: 0xaf838c44  sw          $v1, -0x73BC($gp)
    ctx->pc = 0x1a9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937668), GPR_U32(ctx, 3));
label_1a9a6c:
    // 0x1a9a6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a9a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a9a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A7Cu;
            // 0x1a9a80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9A84u;
}
