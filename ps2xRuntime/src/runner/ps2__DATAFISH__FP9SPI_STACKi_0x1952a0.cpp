#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAFISH__FP9SPI_STACKi
// Address: 0x1952a0 - 0x1953a0
void ps2__DATAFISH__FP9SPI_STACKi_0x1952a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAFISH__FP9SPI_STACKi_0x1952a0");
#endif

    switch (ctx->pc) {
        case 0x1952bcu: goto label_1952bc;
        case 0x1952ccu: goto label_1952cc;
        case 0x1952e8u: goto label_1952e8;
        case 0x1952fcu: goto label_1952fc;
        case 0x195310u: goto label_195310;
        case 0x195324u: goto label_195324;
        case 0x195338u: goto label_195338;
        case 0x19534cu: goto label_19534c;
        case 0x195360u: goto label_195360;
        case 0x195380u: goto label_195380;
        default: break;
    }

    ctx->pc = 0x1952a0u;

    // 0x1952a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1952a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1952a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1952a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1952a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1952a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1952ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1952acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1952b0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1952b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1952b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1952B4u;
    SET_GPR_U32(ctx, 31, 0x1952BCu);
    ctx->pc = 0x1952B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1952B4u;
            // 0x1952b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952BCu; }
        if (ctx->pc != 0x1952BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952BCu; }
        if (ctx->pc != 0x1952BCu) { return; }
    }
    ctx->pc = 0x1952BCu;
label_1952bc:
    // 0x1952bc: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x1952c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1952c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952c4: 0xc065698  jal         func_195A60
    ctx->pc = 0x1952C4u;
    SET_GPR_U32(ctx, 31, 0x1952CCu);
    ctx->pc = 0x1952C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1952C4u;
            // 0x1952c8: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195A60u;
    if (runtime->hasFunction(0x195A60u)) {
        auto targetFn = runtime->lookupFunction(0x195A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952CCu; }
        if (ctx->pc != 0x1952CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishData__9CGameDataFi_0x195a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952CCu; }
        if (ctx->pc != 0x1952CCu) { return; }
    }
    ctx->pc = 0x1952CCu;
label_1952cc:
    // 0x1952cc: 0xaf828b74  sw          $v0, -0x748C($gp)
    ctx->pc = 0x1952ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937460), GPR_U32(ctx, 2));
    // 0x1952d0: 0x8f828b74  lw          $v0, -0x748C($gp)
    ctx->pc = 0x1952d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x1952d4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1952D4u;
    {
        const bool branch_taken_0x1952d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952D4u;
            // 0x1952d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952d4) {
            ctx->pc = 0x19538Cu;
            goto label_19538c;
        }
    }
    ctx->pc = 0x1952DCu;
    // 0x1952dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1952dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952e0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1952E0u;
    SET_GPR_U32(ctx, 31, 0x1952E8u);
    ctx->pc = 0x1952E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1952E0u;
            // 0x1952e4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952E8u; }
        if (ctx->pc != 0x1952E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952E8u; }
        if (ctx->pc != 0x1952E8u) { return; }
    }
    ctx->pc = 0x1952E8u;
label_1952e8:
    // 0x1952e8: 0x8f828b74  lw          $v0, -0x748C($gp)
    ctx->pc = 0x1952e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x1952ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1952ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952f0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1952f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1952f4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1952F4u;
    SET_GPR_U32(ctx, 31, 0x1952FCu);
    ctx->pc = 0x1952F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1952F4u;
            // 0x1952f8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952FCu; }
        if (ctx->pc != 0x1952FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1952FCu; }
        if (ctx->pc != 0x1952FCu) { return; }
    }
    ctx->pc = 0x1952FCu;
label_1952fc:
    // 0x1952fc: 0x8f838b74  lw          $v1, -0x748C($gp)
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x195300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195304: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x195304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195308: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195308u;
    SET_GPR_U32(ctx, 31, 0x195310u);
    ctx->pc = 0x19530Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195308u;
            // 0x19530c: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195310u; }
        if (ctx->pc != 0x195310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195310u; }
        if (ctx->pc != 0x195310u) { return; }
    }
    ctx->pc = 0x195310u;
label_195310:
    // 0x195310: 0x8f838b74  lw          $v1, -0x748C($gp)
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x195314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195318: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x195318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19531c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19531Cu;
    SET_GPR_U32(ctx, 31, 0x195324u);
    ctx->pc = 0x195320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19531Cu;
            // 0x195320: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195324u; }
        if (ctx->pc != 0x195324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195324u; }
        if (ctx->pc != 0x195324u) { return; }
    }
    ctx->pc = 0x195324u;
label_195324:
    // 0x195324: 0x8f838b74  lw          $v1, -0x748C($gp)
    ctx->pc = 0x195324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x195328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19532c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x19532cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195330: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195330u;
    SET_GPR_U32(ctx, 31, 0x195338u);
    ctx->pc = 0x195334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195330u;
            // 0x195334: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195338u; }
        if (ctx->pc != 0x195338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195338u; }
        if (ctx->pc != 0x195338u) { return; }
    }
    ctx->pc = 0x195338u;
label_195338:
    // 0x195338: 0x8f838b74  lw          $v1, -0x748C($gp)
    ctx->pc = 0x195338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x19533c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195340: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x195340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195344: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195344u;
    SET_GPR_U32(ctx, 31, 0x19534Cu);
    ctx->pc = 0x195348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195344u;
            // 0x195348: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19534Cu; }
        if (ctx->pc != 0x19534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19534Cu; }
        if (ctx->pc != 0x19534Cu) { return; }
    }
    ctx->pc = 0x19534Cu;
label_19534c:
    // 0x19534c: 0x8f838b74  lw          $v1, -0x748C($gp)
    ctx->pc = 0x19534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x195350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195354: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x195354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195358: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195358u;
    SET_GPR_U32(ctx, 31, 0x195360u);
    ctx->pc = 0x19535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195358u;
            // 0x19535c: 0xa462000e  sh          $v0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195360u; }
        if (ctx->pc != 0x195360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195360u; }
        if (ctx->pc != 0x195360u) { return; }
    }
    ctx->pc = 0x195360u;
label_195360:
    // 0x195360: 0x8f838b74  lw          $v1, -0x748C($gp)
    ctx->pc = 0x195360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x195364: 0x2a010008  slti        $at, $s0, 0x8
    ctx->pc = 0x195364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x195368: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195368u;
    {
        const bool branch_taken_0x195368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19536Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195368u;
            // 0x19536c: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195368) {
            ctx->pc = 0x195378u;
            goto label_195378;
        }
    }
    ctx->pc = 0x195370u;
    // 0x195370: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x195370u;
    {
        const bool branch_taken_0x195370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195370u;
            // 0x195374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195370) {
            ctx->pc = 0x19538Cu;
            goto label_19538c;
        }
    }
    ctx->pc = 0x195378u;
label_195378:
    // 0x195378: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195378u;
    SET_GPR_U32(ctx, 31, 0x195380u);
    ctx->pc = 0x19537Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195378u;
            // 0x19537c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195380u; }
        if (ctx->pc != 0x195380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195380u; }
        if (ctx->pc != 0x195380u) { return; }
    }
    ctx->pc = 0x195380u;
label_195380:
    // 0x195380: 0x8f838b74  lw          $v1, -0x748C($gp)
    ctx->pc = 0x195380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x195384: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x195384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x195388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19538c:
    // 0x19538c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195398: 0x3e00008  jr          $ra
    ctx->pc = 0x195398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195398u;
            // 0x19539c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1953A0u;
}
