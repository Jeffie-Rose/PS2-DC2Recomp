#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_DRAWFLAG__FP9SPI_STACKi
// Address: 0x253f10 - 0x253fcc
void ps2__MENU_EXE_FORM_DRAWFLAG__FP9SPI_STACKi_0x253f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_DRAWFLAG__FP9SPI_STACKi_0x253f10");
#endif

    switch (ctx->pc) {
        case 0x253f48u: goto label_253f48;
        case 0x253f60u: goto label_253f60;
        case 0x253f68u: goto label_253f68;
        case 0x253f78u: goto label_253f78;
        case 0x253f98u: goto label_253f98;
        default: break;
    }

    ctx->pc = 0x253f10u;

    // 0x253f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x253f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x253f14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x253f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x253f18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x253f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x253f1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x253f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x253f20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x253f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253f2c: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x253f2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x253f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253F30u;
    {
        const bool branch_taken_0x253f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F30u;
            // 0x253f34: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f30) {
            ctx->pc = 0x253F40u;
            goto label_253f40;
        }
    }
    ctx->pc = 0x253F38u;
    // 0x253f38: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x253F38u;
    {
        const bool branch_taken_0x253f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F38u;
            // 0x253f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f38) {
            ctx->pc = 0x253FACu;
            goto label_253fac;
        }
    }
    ctx->pc = 0x253F40u;
label_253f40:
    // 0x253f40: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253F40u;
    SET_GPR_U32(ctx, 31, 0x253F48u);
    ctx->pc = 0x253F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253F40u;
            // 0x253f44: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F48u; }
        if (ctx->pc != 0x253F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F48u; }
        if (ctx->pc != 0x253F48u) { return; }
    }
    ctx->pc = 0x253F48u;
label_253f48:
    // 0x253f48: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x253f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x253f4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x253f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f50: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x253f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x253f54: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x253F54u;
    {
        const bool branch_taken_0x253f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F54u;
            // 0x253f58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f54) {
            ctx->pc = 0x253FA8u;
            goto label_253fa8;
        }
    }
    ctx->pc = 0x253F5Cu;
    // 0x253f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253f60:
    // 0x253f60: 0xc05191c  jal         func_146470
    ctx->pc = 0x253F60u;
    SET_GPR_U32(ctx, 31, 0x253F68u);
    ctx->pc = 0x253F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253F60u;
            // 0x253f64: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F68u; }
        if (ctx->pc != 0x253F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F68u; }
        if (ctx->pc != 0x253F68u) { return; }
    }
    ctx->pc = 0x253F68u;
label_253f68:
    // 0x253f68: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x253f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x253f6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x253f6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f70: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x253F70u;
    SET_GPR_U32(ctx, 31, 0x253F78u);
    ctx->pc = 0x253F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253F70u;
            // 0x253f74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F78u; }
        if (ctx->pc != 0x253F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F78u; }
        if (ctx->pc != 0x253F78u) { return; }
    }
    ctx->pc = 0x253F78u;
label_253f78:
    // 0x253f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253F78u;
    {
        const bool branch_taken_0x253f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F78u;
            // 0x253f7c: 0x11182b  sltu        $v1, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f78) {
            ctx->pc = 0x253F88u;
            goto label_253f88;
        }
    }
    ctx->pc = 0x253F80u;
    // 0x253f80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x253F80u;
    {
        const bool branch_taken_0x253f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F80u;
            // 0x253f84: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f80) {
            ctx->pc = 0x253F98u;
            goto label_253f98;
        }
    }
    ctx->pc = 0x253F88u;
label_253f88:
    // 0x253f88: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x253f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x253f8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x253f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f90: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x253F90u;
    SET_GPR_U32(ctx, 31, 0x253F98u);
    ctx->pc = 0x253F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253F90u;
            // 0x253f94: 0x2484c128  addiu       $a0, $a0, -0x3ED8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F98u; }
        if (ctx->pc != 0x253F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253F98u; }
        if (ctx->pc != 0x253F98u) { return; }
    }
    ctx->pc = 0x253F98u;
label_253f98:
    // 0x253f98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x253f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x253f9c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x253f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x253fa0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x253FA0u;
    {
        const bool branch_taken_0x253fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253FA0u;
            // 0x253fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fa0) {
            ctx->pc = 0x253F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253f60;
        }
    }
    ctx->pc = 0x253FA8u;
label_253fa8:
    // 0x253fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253fac:
    // 0x253fac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x253facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253fb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x253fb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253fb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x253fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253fb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x253fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x253FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253FC4u;
            // 0x253fc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253FCCu;
}
