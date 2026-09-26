#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_FADE__FP9SPI_STACKi
// Address: 0x2541b0 - 0x254260
void ps2__MENU_EXE_FORM_FADE__FP9SPI_STACKi_0x2541b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_FADE__FP9SPI_STACKi_0x2541b0");
#endif

    switch (ctx->pc) {
        case 0x2541e0u: goto label_2541e0;
        case 0x2541ecu: goto label_2541ec;
        case 0x254208u: goto label_254208;
        case 0x254214u: goto label_254214;
        case 0x25422cu: goto label_25422c;
        case 0x254244u: goto label_254244;
        default: break;
    }

    ctx->pc = 0x2541b0u;

    // 0x2541b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2541b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2541b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2541b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2541b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2541b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2541bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2541bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2541c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2541c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2541c4: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x2541c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x2541c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2541C8u;
    {
        const bool branch_taken_0x2541c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2541CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2541C8u;
            // 0x2541cc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541c8) {
            ctx->pc = 0x2541D8u;
            goto label_2541d8;
        }
    }
    ctx->pc = 0x2541D0u;
    // 0x2541d0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2541D0u;
    {
        const bool branch_taken_0x2541d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2541D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2541D0u;
            // 0x2541d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541d0) {
            ctx->pc = 0x254248u;
            goto label_254248;
        }
    }
    ctx->pc = 0x2541D8u;
label_2541d8:
    // 0x2541d8: 0xc05191c  jal         func_146470
    ctx->pc = 0x2541D8u;
    SET_GPR_U32(ctx, 31, 0x2541E0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2541E0u; }
        if (ctx->pc != 0x2541E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2541E0u; }
        if (ctx->pc != 0x2541E0u) { return; }
    }
    ctx->pc = 0x2541E0u;
label_2541e0:
    // 0x2541e0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2541e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2541e4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2541E4u;
    SET_GPR_U32(ctx, 31, 0x2541ECu);
    ctx->pc = 0x2541E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2541E4u;
            // 0x2541e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2541ECu; }
        if (ctx->pc != 0x2541ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2541ECu; }
        if (ctx->pc != 0x2541ECu) { return; }
    }
    ctx->pc = 0x2541ECu;
label_2541ec:
    // 0x2541ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2541ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2541F0u;
    {
        const bool branch_taken_0x2541f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2541F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2541F0u;
            // 0x2541f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541f0) {
            ctx->pc = 0x254200u;
            goto label_254200;
        }
    }
    ctx->pc = 0x2541F8u;
    // 0x2541f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2541F8u;
    {
        const bool branch_taken_0x2541f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2541FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2541F8u;
            // 0x2541fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541f8) {
            ctx->pc = 0x254248u;
            goto label_254248;
        }
    }
    ctx->pc = 0x254200u;
label_254200:
    // 0x254200: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254200u;
    SET_GPR_U32(ctx, 31, 0x254208u);
    ctx->pc = 0x254204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254200u;
            // 0x254204: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254208u; }
        if (ctx->pc != 0x254208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254208u; }
        if (ctx->pc != 0x254208u) { return; }
    }
    ctx->pc = 0x254208u;
label_254208:
    // 0x254208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25420c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25420Cu;
    SET_GPR_U32(ctx, 31, 0x254214u);
    ctx->pc = 0x254210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25420Cu;
            // 0x254210: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254214u; }
        if (ctx->pc != 0x254214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254214u; }
        if (ctx->pc != 0x254214u) { return; }
    }
    ctx->pc = 0x254214u;
label_254214:
    // 0x254214: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254214u;
    {
        const bool branch_taken_0x254214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x254218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254214u;
            // 0x254218: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254214) {
            ctx->pc = 0x25422Cu;
            goto label_25422c;
        }
    }
    ctx->pc = 0x25421Cu;
    // 0x25421c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254220: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x254220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254224: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x254224u;
    SET_GPR_U32(ctx, 31, 0x25422Cu);
    ctx->pc = 0x254228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254224u;
            // 0x254228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25422Cu; }
        if (ctx->pc != 0x25422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25422Cu; }
        if (ctx->pc != 0x25422Cu) { return; }
    }
    ctx->pc = 0x25422Cu;
label_25422c:
    // 0x25422c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25422cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254230: 0x16260005  bne         $s1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x254230u;
    {
        const bool branch_taken_0x254230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x254234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254230u;
            // 0x254234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254230) {
            ctx->pc = 0x254248u;
            goto label_254248;
        }
    }
    ctx->pc = 0x254238u;
    // 0x254238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25423c: 0xc089700  jal         func_225C00
    ctx->pc = 0x25423Cu;
    SET_GPR_U32(ctx, 31, 0x254244u);
    ctx->pc = 0x254240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25423Cu;
            // 0x254240: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (runtime->hasFunction(0x225C00u)) {
        auto targetFn = runtime->lookupFunction(0x225C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254244u; }
        if (ctx->pc != 0x254244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeOut__16CMenuPosDataFormFii_0x225c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254244u; }
        if (ctx->pc != 0x254244u) { return; }
    }
    ctx->pc = 0x254244u;
label_254244:
    // 0x254244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254248:
    // 0x254248: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x254248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25424c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25424cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254258: 0x3e00008  jr          $ra
    ctx->pc = 0x254258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254258u;
            // 0x25425c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254260u;
}
