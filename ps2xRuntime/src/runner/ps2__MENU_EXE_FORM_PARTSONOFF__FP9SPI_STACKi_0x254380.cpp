#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_PARTSONOFF__FP9SPI_STACKi
// Address: 0x254380 - 0x25441c
void ps2__MENU_EXE_FORM_PARTSONOFF__FP9SPI_STACKi_0x254380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_PARTSONOFF__FP9SPI_STACKi_0x254380");
#endif

    switch (ctx->pc) {
        case 0x2543acu: goto label_2543ac;
        case 0x2543b8u: goto label_2543b8;
        case 0x2543d4u: goto label_2543d4;
        case 0x2543e0u: goto label_2543e0;
        case 0x2543fcu: goto label_2543fc;
        default: break;
    }

    ctx->pc = 0x254380u;

    // 0x254380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25438c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254390: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254394: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254394u;
    {
        const bool branch_taken_0x254394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254394u;
            // 0x254398: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254394) {
            ctx->pc = 0x2543A4u;
            goto label_2543a4;
        }
    }
    ctx->pc = 0x25439Cu;
    // 0x25439c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25439Cu;
    {
        const bool branch_taken_0x25439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25439Cu;
            // 0x2543a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25439c) {
            ctx->pc = 0x254408u;
            goto label_254408;
        }
    }
    ctx->pc = 0x2543A4u;
label_2543a4:
    // 0x2543a4: 0xc05191c  jal         func_146470
    ctx->pc = 0x2543A4u;
    SET_GPR_U32(ctx, 31, 0x2543ACu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543ACu; }
        if (ctx->pc != 0x2543ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543ACu; }
        if (ctx->pc != 0x2543ACu) { return; }
    }
    ctx->pc = 0x2543ACu;
label_2543ac:
    // 0x2543ac: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2543acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2543b0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2543B0u;
    SET_GPR_U32(ctx, 31, 0x2543B8u);
    ctx->pc = 0x2543B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2543B0u;
            // 0x2543b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543B8u; }
        if (ctx->pc != 0x2543B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543B8u; }
        if (ctx->pc != 0x2543B8u) { return; }
    }
    ctx->pc = 0x2543B8u;
label_2543b8:
    // 0x2543b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2543b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2543BCu;
    {
        const bool branch_taken_0x2543bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2543C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2543BCu;
            // 0x2543c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543bc) {
            ctx->pc = 0x2543CCu;
            goto label_2543cc;
        }
    }
    ctx->pc = 0x2543C4u;
    // 0x2543c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2543C4u;
    {
        const bool branch_taken_0x2543c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2543C4u;
            // 0x2543c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543c4) {
            ctx->pc = 0x254408u;
            goto label_254408;
        }
    }
    ctx->pc = 0x2543CCu;
label_2543cc:
    // 0x2543cc: 0xc05191c  jal         func_146470
    ctx->pc = 0x2543CCu;
    SET_GPR_U32(ctx, 31, 0x2543D4u);
    ctx->pc = 0x2543D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2543CCu;
            // 0x2543d0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543D4u; }
        if (ctx->pc != 0x2543D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543D4u; }
        if (ctx->pc != 0x2543D4u) { return; }
    }
    ctx->pc = 0x2543D4u;
label_2543d4:
    // 0x2543d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2543d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543d8: 0xc089664  jal         func_225990
    ctx->pc = 0x2543D8u;
    SET_GPR_U32(ctx, 31, 0x2543E0u);
    ctx->pc = 0x2543DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2543D8u;
            // 0x2543dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543E0u; }
        if (ctx->pc != 0x2543E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543E0u; }
        if (ctx->pc != 0x2543E0u) { return; }
    }
    ctx->pc = 0x2543E0u;
label_2543e0:
    // 0x2543e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2543e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543e4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2543E4u;
    {
        const bool branch_taken_0x2543e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2543E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2543E4u;
            // 0x2543e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543e4) {
            ctx->pc = 0x2543F4u;
            goto label_2543f4;
        }
    }
    ctx->pc = 0x2543ECu;
    // 0x2543ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2543ECu;
    {
        const bool branch_taken_0x2543ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2543ECu;
            // 0x2543f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543ec) {
            ctx->pc = 0x254408u;
            goto label_254408;
        }
    }
    ctx->pc = 0x2543F4u;
label_2543f4:
    // 0x2543f4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2543F4u;
    SET_GPR_U32(ctx, 31, 0x2543FCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543FCu; }
        if (ctx->pc != 0x2543FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2543FCu; }
        if (ctx->pc != 0x2543FCu) { return; }
    }
    ctx->pc = 0x2543FCu;
label_2543fc:
    // 0x2543fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2543fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254400: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x254400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x254404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254408:
    // 0x254408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x254408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25440c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25440cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254414: 0x3e00008  jr          $ra
    ctx->pc = 0x254414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254414u;
            // 0x254418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25441Cu;
}
