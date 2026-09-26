#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_SETACTION__FP9SPI_STACKi
// Address: 0x254300 - 0x254378
void ps2__MENU_EXE_FORM_SETACTION__FP9SPI_STACKi_0x254300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_SETACTION__FP9SPI_STACKi_0x254300");
#endif

    switch (ctx->pc) {
        case 0x25432cu: goto label_25432c;
        case 0x254338u: goto label_254338;
        case 0x254354u: goto label_254354;
        case 0x254360u: goto label_254360;
        default: break;
    }

    ctx->pc = 0x254300u;

    // 0x254300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25430c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254310: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254314u;
    {
        const bool branch_taken_0x254314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254314u;
            // 0x254318: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254314) {
            ctx->pc = 0x254324u;
            goto label_254324;
        }
    }
    ctx->pc = 0x25431Cu;
    // 0x25431c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25431Cu;
    {
        const bool branch_taken_0x25431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25431Cu;
            // 0x254320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25431c) {
            ctx->pc = 0x254364u;
            goto label_254364;
        }
    }
    ctx->pc = 0x254324u;
label_254324:
    // 0x254324: 0xc05191c  jal         func_146470
    ctx->pc = 0x254324u;
    SET_GPR_U32(ctx, 31, 0x25432Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25432Cu; }
        if (ctx->pc != 0x25432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25432Cu; }
        if (ctx->pc != 0x25432Cu) { return; }
    }
    ctx->pc = 0x25432Cu;
label_25432c:
    // 0x25432c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x25432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x254330: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x254330u;
    SET_GPR_U32(ctx, 31, 0x254338u);
    ctx->pc = 0x254334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254330u;
            // 0x254334: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254338u; }
        if (ctx->pc != 0x254338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254338u; }
        if (ctx->pc != 0x254338u) { return; }
    }
    ctx->pc = 0x254338u;
label_254338:
    // 0x254338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25433c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25433Cu;
    {
        const bool branch_taken_0x25433c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x254340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25433Cu;
            // 0x254340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25433c) {
            ctx->pc = 0x25434Cu;
            goto label_25434c;
        }
    }
    ctx->pc = 0x254344u;
    // 0x254344: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x254344u;
    {
        const bool branch_taken_0x254344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254344u;
            // 0x254348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254344) {
            ctx->pc = 0x254364u;
            goto label_254364;
        }
    }
    ctx->pc = 0x25434Cu;
label_25434c:
    // 0x25434c: 0xc05191c  jal         func_146470
    ctx->pc = 0x25434Cu;
    SET_GPR_U32(ctx, 31, 0x254354u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254354u; }
        if (ctx->pc != 0x254354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254354u; }
        if (ctx->pc != 0x254354u) { return; }
    }
    ctx->pc = 0x254354u;
label_254354:
    // 0x254354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254358: 0xc08a240  jal         func_228900
    ctx->pc = 0x254358u;
    SET_GPR_U32(ctx, 31, 0x254360u);
    ctx->pc = 0x25435Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254358u;
            // 0x25435c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254360u; }
        if (ctx->pc != 0x254360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254360u; }
        if (ctx->pc != 0x254360u) { return; }
    }
    ctx->pc = 0x254360u;
label_254360:
    // 0x254360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254364:
    // 0x254364: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x254364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25436c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25436cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254370: 0x3e00008  jr          $ra
    ctx->pc = 0x254370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254370u;
            // 0x254374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254378u;
}
