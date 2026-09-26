#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_SET__FP9SPI_STACKi
// Address: 0x252150 - 0x252234
void ps2__MENU_FORM_SET__FP9SPI_STACKi_0x252150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_SET__FP9SPI_STACKi_0x252150");
#endif

    switch (ctx->pc) {
        case 0x252174u: goto label_252174;
        case 0x252194u: goto label_252194;
        case 0x2521acu: goto label_2521ac;
        case 0x2521c8u: goto label_2521c8;
        case 0x2521e0u: goto label_2521e0;
        case 0x2521ecu: goto label_2521ec;
        default: break;
    }

    ctx->pc = 0x252150u;

    // 0x252150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x252154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x252158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25215c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x252160: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x252160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x252164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252168: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x252168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25216c: 0xc05191c  jal         func_146470
    ctx->pc = 0x25216Cu;
    SET_GPR_U32(ctx, 31, 0x252174u);
    ctx->pc = 0x252170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25216Cu;
            // 0x252170: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252174u; }
        if (ctx->pc != 0x252174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252174u; }
        if (ctx->pc != 0x252174u) { return; }
    }
    ctx->pc = 0x252174u;
label_252174:
    // 0x252174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252178: 0x878397c8  lh          $v1, -0x6838($gp)
    ctx->pc = 0x252178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x25217c: 0x878297cc  lh          $v0, -0x6834($gp)
    ctx->pc = 0x25217cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940620)));
    // 0x252180: 0x2a410003  slti        $at, $s2, 0x3
    ctx->pc = 0x252180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x252184: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x252184u;
    {
        const bool branch_taken_0x252184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x252188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252184u;
            // 0x252188: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252184) {
            ctx->pc = 0x25219Cu;
            goto label_25219c;
        }
    }
    ctx->pc = 0x25218Cu;
    // 0x25218c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25218Cu;
    SET_GPR_U32(ctx, 31, 0x252194u);
    ctx->pc = 0x252190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25218Cu;
            // 0x252190: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252194u; }
        if (ctx->pc != 0x252194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252194u; }
        if (ctx->pc != 0x252194u) { return; }
    }
    ctx->pc = 0x252194u;
label_252194:
    // 0x252194: 0x878397c8  lh          $v1, -0x6838($gp)
    ctx->pc = 0x252194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x252198: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x252198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25219c:
    // 0x25219c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x25219cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2521a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2521a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2521a4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2521A4u;
    SET_GPR_U32(ctx, 31, 0x2521ACu);
    ctx->pc = 0x2521A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2521A4u;
            // 0x2521a8: 0xaf8097bc  sw          $zero, -0x6844($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2521ACu; }
        if (ctx->pc != 0x2521ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2521ACu; }
        if (ctx->pc != 0x2521ACu) { return; }
    }
    ctx->pc = 0x2521ACu;
label_2521ac:
    // 0x2521ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2521ACu;
    {
        const bool branch_taken_0x2521ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2521B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2521ACu;
            // 0x2521b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521ac) {
            ctx->pc = 0x2521BCu;
            goto label_2521bc;
        }
    }
    ctx->pc = 0x2521B4u;
    // 0x2521b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2521B4u;
    {
        const bool branch_taken_0x2521b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2521B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2521B4u;
            // 0x2521b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521b4) {
            ctx->pc = 0x25221Cu;
            goto label_25221c;
        }
    }
    ctx->pc = 0x2521BCu;
label_2521bc:
    // 0x2521bc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2521bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2521c0: 0xc08abbc  jal         func_22AEF0
    ctx->pc = 0x2521C0u;
    SET_GPR_U32(ctx, 31, 0x2521C8u);
    ctx->pc = 0x2521C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2521C0u;
            // 0x2521c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AEF0u;
    if (runtime->hasFunction(0x22AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x22AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2521C8u; }
        if (ctx->pc != 0x2521C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFi_0x22aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2521C8u; }
        if (ctx->pc != 0x2521C8u) { return; }
    }
    ctx->pc = 0x2521C8u;
label_2521c8:
    // 0x2521c8: 0xaf8297bc  sw          $v0, -0x6844($gp)
    ctx->pc = 0x2521c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940604), GPR_U32(ctx, 2));
    // 0x2521cc: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x2521ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2521d0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2521D0u;
    {
        const bool branch_taken_0x2521d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2521d0) {
            ctx->pc = 0x2521F4u;
            goto label_2521f4;
        }
    }
    ctx->pc = 0x2521D8u;
    // 0x2521d8: 0xc089630  jal         func_2258C0
    ctx->pc = 0x2521D8u;
    SET_GPR_U32(ctx, 31, 0x2521E0u);
    ctx->pc = 0x2258C0u;
    if (runtime->hasFunction(0x2258C0u)) {
        auto targetFn = runtime->lookupFunction(0x2258C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2521E0u; }
        if (ctx->pc != 0x2521E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CMenuPosDataFormFv_0x2258c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2521E0u; }
        if (ctx->pc != 0x2521E0u) { return; }
    }
    ctx->pc = 0x2521E0u;
label_2521e0:
    // 0x2521e0: 0x8f8597b0  lw          $a1, -0x6850($gp)
    ctx->pc = 0x2521e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
    // 0x2521e4: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2521E4u;
    SET_GPR_U32(ctx, 31, 0x2521ECu);
    ctx->pc = 0x2521E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2521E4u;
            // 0x2521e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2521ECu; }
        if (ctx->pc != 0x2521ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2521ECu; }
        if (ctx->pc != 0x2521ECu) { return; }
    }
    ctx->pc = 0x2521ECu;
label_2521ec:
    // 0x2521ec: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x2521ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2521f0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2521f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2521f4:
    // 0x2521f4: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x2521f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2521f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2521f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2521fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2521fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x252200: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252204: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x252204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x252208: 0x878397cc  lh          $v1, -0x6834($gp)
    ctx->pc = 0x252208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940620)));
    // 0x25220c: 0xaf8097d0  sw          $zero, -0x6830($gp)
    ctx->pc = 0x25220cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940624), GPR_U32(ctx, 0));
    // 0x252210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x252210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252214: 0xa78397cc  sh          $v1, -0x6834($gp)
    ctx->pc = 0x252214u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940620), (uint16_t)GPR_U32(ctx, 3));
    // 0x252218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x252218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25221c:
    // 0x25221c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25221cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x252220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25222c: 0x3e00008  jr          $ra
    ctx->pc = 0x25222Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25222Cu;
            // 0x252230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252234u;
}
