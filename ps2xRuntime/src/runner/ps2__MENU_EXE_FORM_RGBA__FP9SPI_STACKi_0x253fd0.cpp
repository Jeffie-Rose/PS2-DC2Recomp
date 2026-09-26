#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_RGBA__FP9SPI_STACKi
// Address: 0x253fd0 - 0x254100
void ps2__MENU_EXE_FORM_RGBA__FP9SPI_STACKi_0x253fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_RGBA__FP9SPI_STACKi_0x253fd0");
#endif

    switch (ctx->pc) {
        case 0x254004u: goto label_254004;
        case 0x254010u: goto label_254010;
        case 0x254048u: goto label_254048;
        case 0x254058u: goto label_254058;
        case 0x254078u: goto label_254078;
        case 0x254088u: goto label_254088;
        case 0x254098u: goto label_254098;
        case 0x2540a4u: goto label_2540a4;
        case 0x2540bcu: goto label_2540bc;
        case 0x2540ccu: goto label_2540cc;
        default: break;
    }

    ctx->pc = 0x253fd0u;

    // 0x253fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x253fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x253fd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x253fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x253fd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x253fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x253fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x253fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253fe8: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x253fe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x253fec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253FECu;
    {
        const bool branch_taken_0x253fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253FECu;
            // 0x253ff0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fec) {
            ctx->pc = 0x253FFCu;
            goto label_253ffc;
        }
    }
    ctx->pc = 0x253FF4u;
    // 0x253ff4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x253FF4u;
    {
        const bool branch_taken_0x253ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253FF4u;
            // 0x253ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ff4) {
            ctx->pc = 0x2540E4u;
            goto label_2540e4;
        }
    }
    ctx->pc = 0x253FFCu;
label_253ffc:
    // 0x253ffc: 0xc05191c  jal         func_146470
    ctx->pc = 0x253FFCu;
    SET_GPR_U32(ctx, 31, 0x254004u);
    ctx->pc = 0x254000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253FFCu;
            // 0x254000: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254004u; }
        if (ctx->pc != 0x254004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254004u; }
        if (ctx->pc != 0x254004u) { return; }
    }
    ctx->pc = 0x254004u;
label_254004:
    // 0x254004: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x254004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x254008: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x254008u;
    SET_GPR_U32(ctx, 31, 0x254010u);
    ctx->pc = 0x25400Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254008u;
            // 0x25400c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254010u; }
        if (ctx->pc != 0x254010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254010u; }
        if (ctx->pc != 0x254010u) { return; }
    }
    ctx->pc = 0x254010u;
label_254010:
    // 0x254010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254014: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254014u;
    {
        const bool branch_taken_0x254014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x254018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254014u;
            // 0x254018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254014) {
            ctx->pc = 0x254024u;
            goto label_254024;
        }
    }
    ctx->pc = 0x25401Cu;
    // 0x25401c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x25401Cu;
    {
        const bool branch_taken_0x25401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25401Cu;
            // 0x254020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25401c) {
            ctx->pc = 0x2540E4u;
            goto label_2540e4;
        }
    }
    ctx->pc = 0x254024u;
label_254024:
    // 0x254024: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x254024u;
    {
        const bool branch_taken_0x254024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x254028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254024u;
            // 0x254028: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254024) {
            ctx->pc = 0x254070u;
            goto label_254070;
        }
    }
    ctx->pc = 0x25402Cu;
    // 0x25402c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x254030: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x254030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254034: 0xa2020055  sb          $v0, 0x55($s0)
    ctx->pc = 0x254034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x254038: 0xa2020056  sb          $v0, 0x56($s0)
    ctx->pc = 0x254038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x25403c: 0xa2020057  sb          $v0, 0x57($s0)
    ctx->pc = 0x25403cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x254040: 0xa2020058  sb          $v0, 0x58($s0)
    ctx->pc = 0x254040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x254044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254048:
    // 0x254048: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25404c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25404cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254050: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x254050u;
    SET_GPR_U32(ctx, 31, 0x254058u);
    ctx->pc = 0x254054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254050u;
            // 0x254054: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254058u; }
        if (ctx->pc != 0x254058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254058u; }
        if (ctx->pc != 0x254058u) { return; }
    }
    ctx->pc = 0x254058u;
label_254058:
    // 0x254058: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x254058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25405c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x25405cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x254060: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x254060u;
    {
        const bool branch_taken_0x254060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254060u;
            // 0x254064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254060) {
            ctx->pc = 0x254048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254048;
        }
    }
    ctx->pc = 0x254068u;
    // 0x254068: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x254068u;
    {
        const bool branch_taken_0x254068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254068) {
            ctx->pc = 0x2540DCu;
            goto label_2540dc;
        }
    }
    ctx->pc = 0x254070u;
label_254070:
    // 0x254070: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254070u;
    SET_GPR_U32(ctx, 31, 0x254078u);
    ctx->pc = 0x254074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254070u;
            // 0x254074: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254078u; }
        if (ctx->pc != 0x254078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254078u; }
        if (ctx->pc != 0x254078u) { return; }
    }
    ctx->pc = 0x254078u;
label_254078:
    // 0x254078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x254078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25407c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25407cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254080: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254080u;
    SET_GPR_U32(ctx, 31, 0x254088u);
    ctx->pc = 0x254084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254080u;
            // 0x254084: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254088u; }
        if (ctx->pc != 0x254088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254088u; }
        if (ctx->pc != 0x254088u) { return; }
    }
    ctx->pc = 0x254088u;
label_254088:
    // 0x254088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x254088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25408c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25408cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254090: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254090u;
    SET_GPR_U32(ctx, 31, 0x254098u);
    ctx->pc = 0x254094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254090u;
            // 0x254094: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254098u; }
        if (ctx->pc != 0x254098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254098u; }
        if (ctx->pc != 0x254098u) { return; }
    }
    ctx->pc = 0x254098u;
label_254098:
    // 0x254098: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x254098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25409c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25409Cu;
    SET_GPR_U32(ctx, 31, 0x2540A4u);
    ctx->pc = 0x2540A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25409Cu;
            // 0x2540a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2540A4u; }
        if (ctx->pc != 0x2540A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2540A4u; }
        if (ctx->pc != 0x2540A4u) { return; }
    }
    ctx->pc = 0x2540A4u;
label_2540a4:
    // 0x2540a4: 0xa2110055  sb          $s1, 0x55($s0)
    ctx->pc = 0x2540a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 17));
    // 0x2540a8: 0xa2120056  sb          $s2, 0x56($s0)
    ctx->pc = 0x2540a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 18));
    // 0x2540ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2540acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540b0: 0xa2130057  sb          $s3, 0x57($s0)
    ctx->pc = 0x2540b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2540b4: 0xa2020058  sb          $v0, 0x58($s0)
    ctx->pc = 0x2540b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x2540b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2540b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2540bc:
    // 0x2540bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2540bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2540c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540c4: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x2540C4u;
    SET_GPR_U32(ctx, 31, 0x2540CCu);
    ctx->pc = 0x2540C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2540C4u;
            // 0x2540c8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2540CCu; }
        if (ctx->pc != 0x2540CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2540CCu; }
        if (ctx->pc != 0x2540CCu) { return; }
    }
    ctx->pc = 0x2540CCu;
label_2540cc:
    // 0x2540cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2540ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2540d0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2540d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2540d4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2540D4u;
    {
        const bool branch_taken_0x2540d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2540D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2540D4u;
            // 0x2540d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540d4) {
            ctx->pc = 0x2540BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2540bc;
        }
    }
    ctx->pc = 0x2540DCu;
label_2540dc:
    // 0x2540dc: 0x0  nop
    ctx->pc = 0x2540dcu;
    // NOP
    // 0x2540e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2540e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2540e4:
    // 0x2540e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2540e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2540e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2540e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2540ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2540ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2540f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2540f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2540f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2540f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2540f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2540F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2540FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2540F8u;
            // 0x2540fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254100u;
}
