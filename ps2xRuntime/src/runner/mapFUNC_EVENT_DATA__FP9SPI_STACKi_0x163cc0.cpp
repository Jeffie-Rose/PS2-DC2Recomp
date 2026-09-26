#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_EVENT_DATA__FP9SPI_STACKi
// Address: 0x163cc0 - 0x163f48
void mapFUNC_EVENT_DATA__FP9SPI_STACKi_0x163cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_EVENT_DATA__FP9SPI_STACKi_0x163cc0");
#endif

    switch (ctx->pc) {
        case 0x163cf8u: goto label_163cf8;
        case 0x163d14u: goto label_163d14;
        case 0x163d24u: goto label_163d24;
        case 0x163d34u: goto label_163d34;
        case 0x163d44u: goto label_163d44;
        case 0x163d54u: goto label_163d54;
        case 0x163d6cu: goto label_163d6c;
        case 0x163d88u: goto label_163d88;
        case 0x163da4u: goto label_163da4;
        case 0x163dc8u: goto label_163dc8;
        case 0x163decu: goto label_163dec;
        case 0x163e08u: goto label_163e08;
        case 0x163e2cu: goto label_163e2c;
        case 0x163e50u: goto label_163e50;
        case 0x163e64u: goto label_163e64;
        case 0x163e80u: goto label_163e80;
        case 0x163e90u: goto label_163e90;
        case 0x163ea8u: goto label_163ea8;
        case 0x163ed4u: goto label_163ed4;
        case 0x163efcu: goto label_163efc;
        default: break;
    }

    ctx->pc = 0x163cc0u;

    // 0x163cc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x163cc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x163cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x163cc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x163cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x163ccc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x163cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x163cd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x163cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163cdc: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163ce0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163CE0u;
    {
        const bool branch_taken_0x163ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CE0u;
            // 0x163ce4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ce0) {
            ctx->pc = 0x163CF0u;
            goto label_163cf0;
        }
    }
    ctx->pc = 0x163CE8u;
    // 0x163ce8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x163CE8u;
    {
        const bool branch_taken_0x163ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CE8u;
            // 0x163cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ce8) {
            ctx->pc = 0x163F28u;
            goto label_163f28;
        }
    }
    ctx->pc = 0x163CF0u;
label_163cf0:
    // 0x163cf0: 0xc05191c  jal         func_146470
    ctx->pc = 0x163CF0u;
    SET_GPR_U32(ctx, 31, 0x163CF8u);
    ctx->pc = 0x163CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163CF0u;
            // 0x163cf4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CF8u; }
        if (ctx->pc != 0x163CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CF8u; }
        if (ctx->pc != 0x163CF8u) { return; }
    }
    ctx->pc = 0x163CF8u;
label_163cf8:
    // 0x163cf8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x163cf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d00: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163d04: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x163d08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x163d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d0c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163D0Cu;
    SET_GPR_U32(ctx, 31, 0x163D14u);
    ctx->pc = 0x163D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D0Cu;
            // 0x163d10: 0x24510020  addiu       $s1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D14u; }
        if (ctx->pc != 0x163D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D14u; }
        if (ctx->pc != 0x163D14u) { return; }
    }
    ctx->pc = 0x163D14u;
label_163d14:
    // 0x163d14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d18: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x163d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x163d1c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163D1Cu;
    SET_GPR_U32(ctx, 31, 0x163D24u);
    ctx->pc = 0x163D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D1Cu;
            // 0x163d20: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D24u; }
        if (ctx->pc != 0x163D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D24u; }
        if (ctx->pc != 0x163D24u) { return; }
    }
    ctx->pc = 0x163D24u;
label_163d24:
    // 0x163d24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d28: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x163d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x163d2c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163D2Cu;
    SET_GPR_U32(ctx, 31, 0x163D34u);
    ctx->pc = 0x163D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D2Cu;
            // 0x163d30: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D34u; }
        if (ctx->pc != 0x163D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D34u; }
        if (ctx->pc != 0x163D34u) { return; }
    }
    ctx->pc = 0x163D34u;
label_163d34:
    // 0x163d34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d38: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x163d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x163d3c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163D3Cu;
    SET_GPR_U32(ctx, 31, 0x163D44u);
    ctx->pc = 0x163D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D3Cu;
            // 0x163d40: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D44u; }
        if (ctx->pc != 0x163D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D44u; }
        if (ctx->pc != 0x163D44u) { return; }
    }
    ctx->pc = 0x163D44u;
label_163d44:
    // 0x163d44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d48: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x163d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x163d4c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163D4Cu;
    SET_GPR_U32(ctx, 31, 0x163D54u);
    ctx->pc = 0x163D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D4Cu;
            // 0x163d50: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D54u; }
        if (ctx->pc != 0x163D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D54u; }
        if (ctx->pc != 0x163D54u) { return; }
    }
    ctx->pc = 0x163D54u;
label_163d54:
    // 0x163d54: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x163D54u;
    {
        const bool branch_taken_0x163d54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D54u;
            // 0x163d58: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d54) {
            ctx->pc = 0x163E38u;
            goto label_163e38;
        }
    }
    ctx->pc = 0x163D5Cu;
    // 0x163d5c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x163d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x163d60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d64: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163D64u;
    SET_GPR_U32(ctx, 31, 0x163D6Cu);
    ctx->pc = 0x163D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D64u;
            // 0x163d68: 0x24a53100  addiu       $a1, $a1, 0x3100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D6Cu; }
        if (ctx->pc != 0x163D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D6Cu; }
        if (ctx->pc != 0x163D6Cu) { return; }
    }
    ctx->pc = 0x163D6Cu;
label_163d6c:
    // 0x163d6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163D6Cu;
    {
        const bool branch_taken_0x163d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D6Cu;
            // 0x163d70: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d6c) {
            ctx->pc = 0x163D7Cu;
            goto label_163d7c;
        }
    }
    ctx->pc = 0x163D74u;
    // 0x163d74: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x163D74u;
    {
        const bool branch_taken_0x163d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D74u;
            // 0x163d78: 0x2410010a  addiu       $s0, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d74) {
            ctx->pc = 0x163E38u;
            goto label_163e38;
        }
    }
    ctx->pc = 0x163D7Cu;
label_163d7c:
    // 0x163d7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d80: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163D80u;
    SET_GPR_U32(ctx, 31, 0x163D88u);
    ctx->pc = 0x163D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D80u;
            // 0x163d84: 0x24a53108  addiu       $a1, $a1, 0x3108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D88u; }
        if (ctx->pc != 0x163D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D88u; }
        if (ctx->pc != 0x163D88u) { return; }
    }
    ctx->pc = 0x163D88u;
label_163d88:
    // 0x163d88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163D88u;
    {
        const bool branch_taken_0x163d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D88u;
            // 0x163d8c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d88) {
            ctx->pc = 0x163D98u;
            goto label_163d98;
        }
    }
    ctx->pc = 0x163D90u;
    // 0x163d90: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x163D90u;
    {
        const bool branch_taken_0x163d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D90u;
            // 0x163d94: 0x2410011a  addiu       $s0, $zero, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d90) {
            ctx->pc = 0x163E38u;
            goto label_163e38;
        }
    }
    ctx->pc = 0x163D98u;
label_163d98:
    // 0x163d98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d9c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163D9Cu;
    SET_GPR_U32(ctx, 31, 0x163DA4u);
    ctx->pc = 0x163DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D9Cu;
            // 0x163da0: 0x24a53110  addiu       $a1, $a1, 0x3110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DA4u; }
        if (ctx->pc != 0x163DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DA4u; }
        if (ctx->pc != 0x163DA4u) { return; }
    }
    ctx->pc = 0x163DA4u;
label_163da4:
    // 0x163da4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163DA4u;
    {
        const bool branch_taken_0x163da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DA4u;
            // 0x163da8: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163da4) {
            ctx->pc = 0x163DBCu;
            goto label_163dbc;
        }
    }
    ctx->pc = 0x163DACu;
    // 0x163dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163db0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x163db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x163db4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x163DB4u;
    {
        const bool branch_taken_0x163db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DB4u;
            // 0x163db8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163db4) {
            ctx->pc = 0x163E38u;
            goto label_163e38;
        }
    }
    ctx->pc = 0x163DBCu;
label_163dbc:
    // 0x163dbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163dc0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163DC0u;
    SET_GPR_U32(ctx, 31, 0x163DC8u);
    ctx->pc = 0x163DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163DC0u;
            // 0x163dc4: 0x24a53118  addiu       $a1, $a1, 0x3118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DC8u; }
        if (ctx->pc != 0x163DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DC8u; }
        if (ctx->pc != 0x163DC8u) { return; }
    }
    ctx->pc = 0x163DC8u;
label_163dc8:
    // 0x163dc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163DC8u;
    {
        const bool branch_taken_0x163dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DC8u;
            // 0x163dcc: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dc8) {
            ctx->pc = 0x163DE0u;
            goto label_163de0;
        }
    }
    ctx->pc = 0x163DD0u;
    // 0x163dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163dd4: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x163dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x163dd8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x163DD8u;
    {
        const bool branch_taken_0x163dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DD8u;
            // 0x163ddc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dd8) {
            ctx->pc = 0x163E38u;
            goto label_163e38;
        }
    }
    ctx->pc = 0x163DE0u;
label_163de0:
    // 0x163de0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163de4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163DE4u;
    SET_GPR_U32(ctx, 31, 0x163DECu);
    ctx->pc = 0x163DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163DE4u;
            // 0x163de8: 0x24a53120  addiu       $a1, $a1, 0x3120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DECu; }
        if (ctx->pc != 0x163DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DECu; }
        if (ctx->pc != 0x163DECu) { return; }
    }
    ctx->pc = 0x163DECu;
label_163dec:
    // 0x163dec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163DECu;
    {
        const bool branch_taken_0x163dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DECu;
            // 0x163df0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dec) {
            ctx->pc = 0x163DFCu;
            goto label_163dfc;
        }
    }
    ctx->pc = 0x163DF4u;
    // 0x163df4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x163DF4u;
    {
        const bool branch_taken_0x163df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163DF4u;
            // 0x163df8: 0x2410008a  addiu       $s0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163df4) {
            ctx->pc = 0x163E38u;
            goto label_163e38;
        }
    }
    ctx->pc = 0x163DFCu;
label_163dfc:
    // 0x163dfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e00: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163E00u;
    SET_GPR_U32(ctx, 31, 0x163E08u);
    ctx->pc = 0x163E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163E00u;
            // 0x163e04: 0x24a53130  addiu       $a1, $a1, 0x3130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E08u; }
        if (ctx->pc != 0x163E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E08u; }
        if (ctx->pc != 0x163E08u) { return; }
    }
    ctx->pc = 0x163E08u;
label_163e08:
    // 0x163e08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163E08u;
    {
        const bool branch_taken_0x163e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E08u;
            // 0x163e0c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e08) {
            ctx->pc = 0x163E20u;
            goto label_163e20;
        }
    }
    ctx->pc = 0x163E10u;
    // 0x163e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163e14: 0x24100202  addiu       $s0, $zero, 0x202
    ctx->pc = 0x163e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x163e18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163E18u;
    {
        const bool branch_taken_0x163e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E18u;
            // 0x163e1c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e18) {
            ctx->pc = 0x163E38u;
            goto label_163e38;
        }
    }
    ctx->pc = 0x163E20u;
label_163e20:
    // 0x163e20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e24: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163E24u;
    SET_GPR_U32(ctx, 31, 0x163E2Cu);
    ctx->pc = 0x163E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163E24u;
            // 0x163e28: 0x24a53138  addiu       $a1, $a1, 0x3138 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E2Cu; }
        if (ctx->pc != 0x163E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E2Cu; }
        if (ctx->pc != 0x163E2Cu) { return; }
    }
    ctx->pc = 0x163E2Cu;
label_163e2c:
    // 0x163e2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163E2Cu;
    {
        const bool branch_taken_0x163e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E2Cu;
            // 0x163e30: 0x2a420007  slti        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e2c) {
            ctx->pc = 0x163E3Cu;
            goto label_163e3c;
        }
    }
    ctx->pc = 0x163E34u;
    // 0x163e34: 0x24100402  addiu       $s0, $zero, 0x402
    ctx->pc = 0x163e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
label_163e38:
    // 0x163e38: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x163e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
label_163e3c:
    // 0x163e3c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x163E3Cu;
    {
        const bool branch_taken_0x163e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E3Cu;
            // 0x163e40: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e3c) {
            ctx->pc = 0x163E90u;
            goto label_163e90;
        }
    }
    ctx->pc = 0x163E44u;
    // 0x163e44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e48: 0xc05191c  jal         func_146470
    ctx->pc = 0x163E48u;
    SET_GPR_U32(ctx, 31, 0x163E50u);
    ctx->pc = 0x163E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163E48u;
            // 0x163e4c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E50u; }
        if (ctx->pc != 0x163E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E50u; }
        if (ctx->pc != 0x163E50u) { return; }
    }
    ctx->pc = 0x163E50u;
label_163e50:
    // 0x163e50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e54: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x163E54u;
    {
        const bool branch_taken_0x163e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E54u;
            // 0x163e58: 0x2a420008  slti        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e54) {
            ctx->pc = 0x163E94u;
            goto label_163e94;
        }
    }
    ctx->pc = 0x163E5Cu;
    // 0x163e5c: 0xc04a422  jal         func_129088
    ctx->pc = 0x163E5Cu;
    SET_GPR_U32(ctx, 31, 0x163E64u);
    ctx->pc = 0x163E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163E5Cu;
            // 0x163e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E64u; }
        if (ctx->pc != 0x163E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E64u; }
        if (ctx->pc != 0x163E64u) { return; }
    }
    ctx->pc = 0x163E64u;
label_163e64:
    // 0x163e64: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x163e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x163e68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163E68u;
    {
        const bool branch_taken_0x163e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E68u;
            // 0x163e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e68) {
            ctx->pc = 0x163E88u;
            goto label_163e88;
        }
    }
    ctx->pc = 0x163E70u;
    // 0x163e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e74: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x163e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x163e78: 0xc04a54a  jal         func_129528
    ctx->pc = 0x163E78u;
    SET_GPR_U32(ctx, 31, 0x163E80u);
    ctx->pc = 0x163E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163E78u;
            // 0x163e7c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129528u;
    if (runtime->hasFunction(0x129528u)) {
        auto targetFn = runtime->lookupFunction(0x129528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E80u; }
        if (ctx->pc != 0x163E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x129528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E80u; }
        if (ctx->pc != 0x163E80u) { return; }
    }
    ctx->pc = 0x163E80u;
label_163e80:
    // 0x163e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163E80u;
    {
        const bool branch_taken_0x163e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E80u;
            // 0x163e84: 0xa2200027  sb          $zero, 0x27($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e80) {
            ctx->pc = 0x163E90u;
            goto label_163e90;
        }
    }
    ctx->pc = 0x163E88u;
label_163e88:
    // 0x163e88: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x163E88u;
    SET_GPR_U32(ctx, 31, 0x163E90u);
    ctx->pc = 0x163E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163E88u;
            // 0x163e8c: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E90u; }
        if (ctx->pc != 0x163E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E90u; }
        if (ctx->pc != 0x163E90u) { return; }
    }
    ctx->pc = 0x163E90u;
label_163e90:
    // 0x163e90: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x163e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_163e94:
    // 0x163e94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x163E94u;
    {
        const bool branch_taken_0x163e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E94u;
            // 0x163e98: 0x2a420009  slti        $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e94) {
            ctx->pc = 0x163EC0u;
            goto label_163ec0;
        }
    }
    ctx->pc = 0x163E9Cu;
    // 0x163e9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ea0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163EA0u;
    SET_GPR_U32(ctx, 31, 0x163EA8u);
    ctx->pc = 0x163EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163EA0u;
            // 0x163ea4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EA8u; }
        if (ctx->pc != 0x163EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EA8u; }
        if (ctx->pc != 0x163EA8u) { return; }
    }
    ctx->pc = 0x163EA8u;
label_163ea8:
    // 0x163ea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163EA8u;
    {
        const bool branch_taken_0x163ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ea8) {
            ctx->pc = 0x163EBCu;
            goto label_163ebc;
        }
    }
    ctx->pc = 0x163EB0u;
    // 0x163eb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x163eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163eb4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x163eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x163eb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x163eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_163ebc:
    // 0x163ebc: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x163ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_163ec0:
    // 0x163ec0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x163EC0u;
    {
        const bool branch_taken_0x163ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163EC0u;
            // 0x163ec4: 0x2a42000a  slti        $v0, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ec0) {
            ctx->pc = 0x163EECu;
            goto label_163eec;
        }
    }
    ctx->pc = 0x163EC8u;
    // 0x163ec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ecc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163ECCu;
    SET_GPR_U32(ctx, 31, 0x163ED4u);
    ctx->pc = 0x163ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163ECCu;
            // 0x163ed0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163ED4u; }
        if (ctx->pc != 0x163ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163ED4u; }
        if (ctx->pc != 0x163ED4u) { return; }
    }
    ctx->pc = 0x163ED4u;
label_163ed4:
    // 0x163ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163ED4u;
    {
        const bool branch_taken_0x163ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ed4) {
            ctx->pc = 0x163EE8u;
            goto label_163ee8;
        }
    }
    ctx->pc = 0x163EDCu;
    // 0x163edc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x163edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163ee0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x163ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x163ee4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x163ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_163ee8:
    // 0x163ee8: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x163ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_163eec:
    // 0x163eec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x163EECu;
    {
        const bool branch_taken_0x163eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163EECu;
            // 0x163ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163eec) {
            ctx->pc = 0x163F28u;
            goto label_163f28;
        }
    }
    ctx->pc = 0x163EF4u;
    // 0x163ef4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163EF4u;
    SET_GPR_U32(ctx, 31, 0x163EFCu);
    ctx->pc = 0x163EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163EF4u;
            // 0x163ef8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EFCu; }
        if (ctx->pc != 0x163EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EFCu; }
        if (ctx->pc != 0x163EFCu) { return; }
    }
    ctx->pc = 0x163EFCu;
label_163efc:
    // 0x163efc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163EFCu;
    {
        const bool branch_taken_0x163efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163efc) {
            ctx->pc = 0x163F14u;
            goto label_163f14;
        }
    }
    ctx->pc = 0x163F04u;
    // 0x163f04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x163f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163f08: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x163f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x163f0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163F0Cu;
    {
        const bool branch_taken_0x163f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F0Cu;
            // 0x163f10: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f0c) {
            ctx->pc = 0x163F24u;
            goto label_163f24;
        }
    }
    ctx->pc = 0x163F14u;
label_163f14:
    // 0x163f14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163f18: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x163f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x163f1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x163f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x163f20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x163f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_163f24:
    // 0x163f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163f28:
    // 0x163f28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x163f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x163f2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x163f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163f30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163f34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163f40: 0x3e00008  jr          $ra
    ctx->pc = 0x163F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F40u;
            // 0x163f44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163F48u;
}
