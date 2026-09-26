#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_PART_DTYPE__FP9SPI_STACKi
// Address: 0x252f70 - 0x2530c8
void ps2__MENU_PART_DTYPE__FP9SPI_STACKi_0x252f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_PART_DTYPE__FP9SPI_STACKi_0x252f70");
#endif

    switch (ctx->pc) {
        case 0x252facu: goto label_252fac;
        case 0x252fc0u: goto label_252fc0;
        case 0x252fd0u: goto label_252fd0;
        case 0x252fe4u: goto label_252fe4;
        case 0x253008u: goto label_253008;
        case 0x253014u: goto label_253014;
        case 0x253048u: goto label_253048;
        case 0x253060u: goto label_253060;
        case 0x253078u: goto label_253078;
        case 0x25308cu: goto label_25308c;
        default: break;
    }

    ctx->pc = 0x252f70u;

    // 0x252f70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x252f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x252f74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x252f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x252f78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x252f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x252f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x252f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x252f80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x252f80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x252f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x252f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252f90: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x252f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252f94: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252F94u;
    {
        const bool branch_taken_0x252f94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252F94u;
            // 0x252f98: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f94) {
            ctx->pc = 0x252FA4u;
            goto label_252fa4;
        }
    }
    ctx->pc = 0x252F9Cu;
    // 0x252f9c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x252F9Cu;
    {
        const bool branch_taken_0x252f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252F9Cu;
            // 0x252fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f9c) {
            ctx->pc = 0x2530A8u;
            goto label_2530a8;
        }
    }
    ctx->pc = 0x252FA4u;
label_252fa4:
    // 0x252fa4: 0xc089828  jal         func_2260A0
    ctx->pc = 0x252FA4u;
    SET_GPR_U32(ctx, 31, 0x252FACu);
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FACu; }
        if (ctx->pc != 0x252FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FACu; }
        if (ctx->pc != 0x252FACu) { return; }
    }
    ctx->pc = 0x252FACu;
label_252fac:
    // 0x252fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x252facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fb4: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x252fb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x252fb8: 0xc05191c  jal         func_146470
    ctx->pc = 0x252FB8u;
    SET_GPR_U32(ctx, 31, 0x252FC0u);
    ctx->pc = 0x252FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252FB8u;
            // 0x252fbc: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FC0u; }
        if (ctx->pc != 0x252FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FC0u; }
        if (ctx->pc != 0x252FC0u) { return; }
    }
    ctx->pc = 0x252FC0u;
label_252fc0:
    // 0x252fc0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x252fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x252fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x252fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fc8: 0xc0948d4  jal         func_252350
    ctx->pc = 0x252FC8u;
    SET_GPR_U32(ctx, 31, 0x252FD0u);
    ctx->pc = 0x252FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252FC8u;
            // 0x252fcc: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FD0u; }
        if (ctx->pc != 0x252FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FD0u; }
        if (ctx->pc != 0x252FD0u) { return; }
    }
    ctx->pc = 0x252FD0u;
label_252fd0:
    // 0x252fd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x252fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fd4: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x252fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x252fd8: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x252fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x252fdc: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x252FDCu;
    SET_GPR_U32(ctx, 31, 0x252FE4u);
    ctx->pc = 0x252FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252FDCu;
            // 0x252fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FE4u; }
        if (ctx->pc != 0x252FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FE4u; }
        if (ctx->pc != 0x252FE4u) { return; }
    }
    ctx->pc = 0x252FE4u;
label_252fe4:
    // 0x252fe4: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x252fe4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x252fe8: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x252fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x252fec: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x252FECu;
    {
        const bool branch_taken_0x252fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x252FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FECu;
            // 0x252ff0: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fec) {
            ctx->pc = 0x253038u;
            goto label_253038;
        }
    }
    ctx->pc = 0x252FF4u;
    // 0x252ff4: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x252ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x252ff8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x252ff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x252ffc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x252FFCu;
    {
        const bool branch_taken_0x252ffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FFCu;
            // 0x253000: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ffc) {
            ctx->pc = 0x25309Cu;
            goto label_25309c;
        }
    }
    ctx->pc = 0x253004u;
    // 0x253004: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x253004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253008:
    // 0x253008: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x253008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25300c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25300Cu;
    SET_GPR_U32(ctx, 31, 0x253014u);
    ctx->pc = 0x253010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25300Cu;
            // 0x253010: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253014u; }
        if (ctx->pc != 0x253014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253014u; }
        if (ctx->pc != 0x253014u) { return; }
    }
    ctx->pc = 0x253014u;
label_253014:
    // 0x253014: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x253014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x253018: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x253018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25301c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x25301cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x253020: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x253020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x253024: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x253024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253028: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x253028u;
    {
        const bool branch_taken_0x253028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253028u;
            // 0x25302c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253028) {
            ctx->pc = 0x253008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253008;
        }
    }
    ctx->pc = 0x253030u;
    // 0x253030: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x253030u;
    {
        const bool branch_taken_0x253030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253030u;
            // 0x253034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253030) {
            ctx->pc = 0x2530A0u;
            goto label_2530a0;
        }
    }
    ctx->pc = 0x253038u;
label_253038:
    // 0x253038: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x253038u;
    {
        const bool branch_taken_0x253038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253038u;
            // 0x25303c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253038) {
            ctx->pc = 0x25309Cu;
            goto label_25309c;
        }
    }
    ctx->pc = 0x253040u;
    // 0x253040: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253040u;
    SET_GPR_U32(ctx, 31, 0x253048u);
    ctx->pc = 0x253044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253040u;
            // 0x253044: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253048u; }
        if (ctx->pc != 0x253048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253048u; }
        if (ctx->pc != 0x253048u) { return; }
    }
    ctx->pc = 0x253048u;
label_253048:
    // 0x253048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25304c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25304cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253050: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x253050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253058: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253058u;
    SET_GPR_U32(ctx, 31, 0x253060u);
    ctx->pc = 0x25305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253058u;
            // 0x25305c: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253060u; }
        if (ctx->pc != 0x253060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253060u; }
        if (ctx->pc != 0x253060u) { return; }
    }
    ctx->pc = 0x253060u;
label_253060:
    // 0x253060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253064: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x253064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253068: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x253068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25306c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25306cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253070: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253070u;
    SET_GPR_U32(ctx, 31, 0x253078u);
    ctx->pc = 0x253074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253070u;
            // 0x253074: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253078u; }
        if (ctx->pc != 0x253078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253078u; }
        if (ctx->pc != 0x253078u) { return; }
    }
    ctx->pc = 0x253078u;
label_253078:
    // 0x253078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25307c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253084: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253084u;
    SET_GPR_U32(ctx, 31, 0x25308Cu);
    ctx->pc = 0x253088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253084u;
            // 0x253088: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25308Cu; }
        if (ctx->pc != 0x25308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25308Cu; }
        if (ctx->pc != 0x25308Cu) { return; }
    }
    ctx->pc = 0x25308Cu;
label_25308c:
    // 0x25308c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25308cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253090: 0x0  nop
    ctx->pc = 0x253090u;
    // NOP
    // 0x253094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253098: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x253098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_25309c:
    // 0x25309c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2530a0:
    // 0x2530a0: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x2530a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2530a4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2530a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_2530a8:
    // 0x2530a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2530a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2530ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2530acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2530b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2530b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2530b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2530b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2530b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2530b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2530bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2530bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2530c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2530C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2530C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530C0u;
            // 0x2530c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2530C8u;
}
