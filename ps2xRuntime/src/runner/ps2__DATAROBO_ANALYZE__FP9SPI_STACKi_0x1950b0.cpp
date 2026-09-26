#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAROBO_ANALYZE__FP9SPI_STACKi
// Address: 0x1950b0 - 0x19525c
void ps2__DATAROBO_ANALYZE__FP9SPI_STACKi_0x1950b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAROBO_ANALYZE__FP9SPI_STACKi_0x1950b0");
#endif

    switch (ctx->pc) {
        case 0x1950ccu: goto label_1950cc;
        case 0x1950dcu: goto label_1950dc;
        case 0x1950fcu: goto label_1950fc;
        case 0x19510cu: goto label_19510c;
        case 0x195120u: goto label_195120;
        case 0x195138u: goto label_195138;
        case 0x195148u: goto label_195148;
        case 0x195168u: goto label_195168;
        case 0x19517cu: goto label_19517c;
        case 0x195190u: goto label_195190;
        case 0x1951a0u: goto label_1951a0;
        case 0x1951acu: goto label_1951ac;
        case 0x1951d4u: goto label_1951d4;
        case 0x1951e4u: goto label_1951e4;
        case 0x195200u: goto label_195200;
        case 0x195210u: goto label_195210;
        case 0x19522cu: goto label_19522c;
        default: break;
    }

    ctx->pc = 0x1950b0u;

    // 0x1950b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1950b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1950b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1950b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1950b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1950b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1950bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1950bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1950c0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x1950c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1950c4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1950C4u;
    SET_GPR_U32(ctx, 31, 0x1950CCu);
    ctx->pc = 0x1950C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1950C4u;
            // 0x1950c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950CCu; }
        if (ctx->pc != 0x1950CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950CCu; }
        if (ctx->pc != 0x1950CCu) { return; }
    }
    ctx->pc = 0x1950CCu;
label_1950cc:
    // 0x1950cc: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x1950ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x1950d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1950d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950d4: 0xc06567c  jal         func_1959F0
    ctx->pc = 0x1950D4u;
    SET_GPR_U32(ctx, 31, 0x1950DCu);
    ctx->pc = 0x1950D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1950D4u;
            // 0x1950d8: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959F0u;
    if (runtime->hasFunction(0x1959F0u)) {
        auto targetFn = runtime->lookupFunction(0x1959F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950DCu; }
        if (ctx->pc != 0x1950DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboData__9CGameDataFi_0x1959f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950DCu; }
        if (ctx->pc != 0x1950DCu) { return; }
    }
    ctx->pc = 0x1950DCu;
label_1950dc:
    // 0x1950dc: 0xaf828b70  sw          $v0, -0x7490($gp)
    ctx->pc = 0x1950dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U32(ctx, 2));
    // 0x1950e0: 0x8f828b70  lw          $v0, -0x7490($gp)
    ctx->pc = 0x1950e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x1950e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1950E4u;
    {
        const bool branch_taken_0x1950e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1950E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1950E4u;
            // 0x1950e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950e4) {
            ctx->pc = 0x1950F4u;
            goto label_1950f4;
        }
    }
    ctx->pc = 0x1950ECu;
    // 0x1950ec: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1950ECu;
    {
        const bool branch_taken_0x1950ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1950ECu;
            // 0x1950f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950ec) {
            ctx->pc = 0x195244u;
            goto label_195244;
        }
    }
    ctx->pc = 0x1950F4u;
label_1950f4:
    // 0x1950f4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1950F4u;
    SET_GPR_U32(ctx, 31, 0x1950FCu);
    ctx->pc = 0x1950F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1950F4u;
            // 0x1950f8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950FCu; }
        if (ctx->pc != 0x1950FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950FCu; }
        if (ctx->pc != 0x1950FCu) { return; }
    }
    ctx->pc = 0x1950FCu;
label_1950fc:
    // 0x1950fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1950fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195104: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195104u;
    SET_GPR_U32(ctx, 31, 0x19510Cu);
    ctx->pc = 0x195108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195104u;
            // 0x195108: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19510Cu; }
        if (ctx->pc != 0x19510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19510Cu; }
        if (ctx->pc != 0x19510Cu) { return; }
    }
    ctx->pc = 0x19510Cu;
label_19510c:
    // 0x19510c: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x19510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x195110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195114: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x195114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195118: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195118u;
    SET_GPR_U32(ctx, 31, 0x195120u);
    ctx->pc = 0x19511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195118u;
            // 0x19511c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195120u; }
        if (ctx->pc != 0x195120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195120u; }
        if (ctx->pc != 0x195120u) { return; }
    }
    ctx->pc = 0x195120u;
label_195120:
    // 0x195120: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x195120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x195124: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x195124u;
    {
        const bool branch_taken_0x195124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x195128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195124u;
            // 0x195128: 0xa0620022  sb          $v0, 0x22($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195124) {
            ctx->pc = 0x195150u;
            goto label_195150;
        }
    }
    ctx->pc = 0x19512Cu;
    // 0x19512c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195130: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195130u;
    SET_GPR_U32(ctx, 31, 0x195138u);
    ctx->pc = 0x195134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195130u;
            // 0x195134: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195138u; }
        if (ctx->pc != 0x195138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195138u; }
        if (ctx->pc != 0x195138u) { return; }
    }
    ctx->pc = 0x195138u;
label_195138:
    // 0x195138: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x195138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x19513c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195140: 0xc05191c  jal         func_146470
    ctx->pc = 0x195140u;
    SET_GPR_U32(ctx, 31, 0x195148u);
    ctx->pc = 0x195144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195140u;
            // 0x195144: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195148u; }
        if (ctx->pc != 0x195148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195148u; }
        if (ctx->pc != 0x195148u) { return; }
    }
    ctx->pc = 0x195148u;
label_195148:
    // 0x195148: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x195148u;
    {
        const bool branch_taken_0x195148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19514Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195148u;
            // 0x19514c: 0x8f838b70  lw          $v1, -0x7490($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195148) {
            ctx->pc = 0x195238u;
            goto label_195238;
        }
    }
    ctx->pc = 0x195150u;
label_195150:
    // 0x195150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195154: 0x16020025  bne         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x195154u;
    {
        const bool branch_taken_0x195154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x195158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195154u;
            // 0x195158: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195154) {
            ctx->pc = 0x1951ECu;
            goto label_1951ec;
        }
    }
    ctx->pc = 0x19515Cu;
    // 0x19515c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19515cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195160: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195160u;
    SET_GPR_U32(ctx, 31, 0x195168u);
    ctx->pc = 0x195164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195160u;
            // 0x195164: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195168u; }
        if (ctx->pc != 0x195168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195168u; }
        if (ctx->pc != 0x195168u) { return; }
    }
    ctx->pc = 0x195168u;
label_195168:
    // 0x195168: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x195168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x19516c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195170: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x195170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195174: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195174u;
    SET_GPR_U32(ctx, 31, 0x19517Cu);
    ctx->pc = 0x195178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195174u;
            // 0x195178: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19517Cu; }
        if (ctx->pc != 0x19517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19517Cu; }
        if (ctx->pc != 0x19517Cu) { return; }
    }
    ctx->pc = 0x19517Cu;
label_19517c:
    // 0x19517c: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x19517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x195180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195184: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x195184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195188: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195188u;
    SET_GPR_U32(ctx, 31, 0x195190u);
    ctx->pc = 0x19518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195188u;
            // 0x19518c: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195190u; }
        if (ctx->pc != 0x195190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195190u; }
        if (ctx->pc != 0x195190u) { return; }
    }
    ctx->pc = 0x195190u;
label_195190:
    // 0x195190: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x195190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x195194: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x195194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195198: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19519c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x19519cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_1951a0:
    // 0x1951a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1951a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951a4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1951A4u;
    SET_GPR_U32(ctx, 31, 0x1951ACu);
    ctx->pc = 0x1951A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951A4u;
            // 0x1951a8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951ACu; }
        if (ctx->pc != 0x1951ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951ACu; }
        if (ctx->pc != 0x1951ACu) { return; }
    }
    ctx->pc = 0x1951ACu;
label_1951ac:
    // 0x1951ac: 0x8f848b70  lw          $a0, -0x7490($gp)
    ctx->pc = 0x1951acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x1951b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1951b4: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x1951b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1951b8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1951b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1951bc: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x1951bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1951c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1951C0u;
    {
        const bool branch_taken_0x1951c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1951C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1951C0u;
            // 0x1951c4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951c0) {
            ctx->pc = 0x1951A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1951a0;
        }
    }
    ctx->pc = 0x1951C8u;
    // 0x1951c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1951c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951cc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1951CCu;
    SET_GPR_U32(ctx, 31, 0x1951D4u);
    ctx->pc = 0x1951D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951CCu;
            // 0x1951d0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951D4u; }
        if (ctx->pc != 0x1951D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951D4u; }
        if (ctx->pc != 0x1951D4u) { return; }
    }
    ctx->pc = 0x1951D4u;
label_1951d4:
    // 0x1951d4: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x1951d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x1951d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1951d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951dc: 0xc05191c  jal         func_146470
    ctx->pc = 0x1951DCu;
    SET_GPR_U32(ctx, 31, 0x1951E4u);
    ctx->pc = 0x1951E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951DCu;
            // 0x1951e0: 0xa462001e  sh          $v0, 0x1E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951E4u; }
        if (ctx->pc != 0x1951E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951E4u; }
        if (ctx->pc != 0x1951E4u) { return; }
    }
    ctx->pc = 0x1951E4u;
label_1951e4:
    // 0x1951e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1951E4u;
    {
        const bool branch_taken_0x1951e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1951e4) {
            ctx->pc = 0x195234u;
            goto label_195234;
        }
    }
    ctx->pc = 0x1951ECu;
label_1951ec:
    // 0x1951ec: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1951ECu;
    {
        const bool branch_taken_0x1951ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1951F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1951ECu;
            // 0x1951f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951ec) {
            ctx->pc = 0x19521Cu;
            goto label_19521c;
        }
    }
    ctx->pc = 0x1951F4u;
    // 0x1951f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1951f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951f8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1951F8u;
    SET_GPR_U32(ctx, 31, 0x195200u);
    ctx->pc = 0x1951FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951F8u;
            // 0x1951fc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195200u; }
        if (ctx->pc != 0x195200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195200u; }
        if (ctx->pc != 0x195200u) { return; }
    }
    ctx->pc = 0x195200u;
label_195200:
    // 0x195200: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x195200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x195204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195208: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195208u;
    SET_GPR_U32(ctx, 31, 0x195210u);
    ctx->pc = 0x19520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195208u;
            // 0x19520c: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195210u; }
        if (ctx->pc != 0x195210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195210u; }
        if (ctx->pc != 0x195210u) { return; }
    }
    ctx->pc = 0x195210u;
label_195210:
    // 0x195210: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x195210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x195214: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195214u;
    {
        const bool branch_taken_0x195214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195214u;
            // 0x195218: 0xa4620020  sh          $v0, 0x20($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195214) {
            ctx->pc = 0x195234u;
            goto label_195234;
        }
    }
    ctx->pc = 0x19521Cu;
label_19521c:
    // 0x19521c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19521Cu;
    {
        const bool branch_taken_0x19521c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x195220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19521Cu;
            // 0x195220: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19521c) {
            ctx->pc = 0x195234u;
            goto label_195234;
        }
    }
    ctx->pc = 0x195224u;
    // 0x195224: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195224u;
    SET_GPR_U32(ctx, 31, 0x19522Cu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19522Cu; }
        if (ctx->pc != 0x19522Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19522Cu; }
        if (ctx->pc != 0x19522Cu) { return; }
    }
    ctx->pc = 0x19522Cu;
label_19522c:
    // 0x19522c: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x19522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x195230: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x195230u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_195234:
    // 0x195234: 0x8f838b70  lw          $v1, -0x7490($gp)
    ctx->pc = 0x195234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
label_195238:
    // 0x195238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19523c: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x19523cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x195240: 0xaf838b70  sw          $v1, -0x7490($gp)
    ctx->pc = 0x195240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U32(ctx, 3));
label_195244:
    // 0x195244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x195244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19524c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19524cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195254: 0x3e00008  jr          $ra
    ctx->pc = 0x195254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195254u;
            // 0x195258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19525Cu;
}
