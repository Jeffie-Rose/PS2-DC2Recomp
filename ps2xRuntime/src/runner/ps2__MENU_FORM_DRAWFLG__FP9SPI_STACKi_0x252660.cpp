#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_DRAWFLG__FP9SPI_STACKi
// Address: 0x252660 - 0x252700
void ps2__MENU_FORM_DRAWFLG__FP9SPI_STACKi_0x252660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_DRAWFLG__FP9SPI_STACKi_0x252660");
#endif

    switch (ctx->pc) {
        case 0x25269cu: goto label_25269c;
        case 0x2526c0u: goto label_2526c0;
        case 0x2526ccu: goto label_2526cc;
        case 0x2526d8u: goto label_2526d8;
        default: break;
    }

    ctx->pc = 0x252660u;

    // 0x252660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25266c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252674: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252678u;
    {
        const bool branch_taken_0x252678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252678u;
            // 0x25267c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252678) {
            ctx->pc = 0x252688u;
            goto label_252688;
        }
    }
    ctx->pc = 0x252680u;
    // 0x252680: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x252680u;
    {
        const bool branch_taken_0x252680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252680u;
            // 0x252684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252680) {
            ctx->pc = 0x2526ECu;
            goto label_2526ec;
        }
    }
    ctx->pc = 0x252688u;
label_252688:
    // 0x252688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25268c: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25268Cu;
    {
        const bool branch_taken_0x25268c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x252690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25268Cu;
            // 0x252690: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25268c) {
            ctx->pc = 0x2526ACu;
            goto label_2526ac;
        }
    }
    ctx->pc = 0x252694u;
    // 0x252694: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252694u;
    SET_GPR_U32(ctx, 31, 0x25269Cu);
    ctx->pc = 0x252698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252694u;
            // 0x252698: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25269Cu; }
        if (ctx->pc != 0x25269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25269Cu; }
        if (ctx->pc != 0x25269Cu) { return; }
    }
    ctx->pc = 0x25269Cu;
label_25269c:
    // 0x25269c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x25269cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2526a0: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x2526a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2526a4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2526a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2526a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2526a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2526ac:
    // 0x2526ac: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2526ACu;
    {
        const bool branch_taken_0x2526ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2526B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2526ACu;
            // 0x2526b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526ac) {
            ctx->pc = 0x2526ECu;
            goto label_2526ec;
        }
    }
    ctx->pc = 0x2526B4u;
    // 0x2526b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2526b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526b8: 0xc05191c  jal         func_146470
    ctx->pc = 0x2526B8u;
    SET_GPR_U32(ctx, 31, 0x2526C0u);
    ctx->pc = 0x2526BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2526B8u;
            // 0x2526bc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2526C0u; }
        if (ctx->pc != 0x2526C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2526C0u; }
        if (ctx->pc != 0x2526C0u) { return; }
    }
    ctx->pc = 0x2526C0u;
label_2526c0:
    // 0x2526c0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2526c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2526c4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2526C4u;
    SET_GPR_U32(ctx, 31, 0x2526CCu);
    ctx->pc = 0x2526C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2526C4u;
            // 0x2526c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2526CCu; }
        if (ctx->pc != 0x2526CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2526CCu; }
        if (ctx->pc != 0x2526CCu) { return; }
    }
    ctx->pc = 0x2526CCu;
label_2526cc:
    // 0x2526cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2526ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526d0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2526D0u;
    SET_GPR_U32(ctx, 31, 0x2526D8u);
    ctx->pc = 0x2526D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2526D0u;
            // 0x2526d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2526D8u; }
        if (ctx->pc != 0x2526D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2526D8u; }
        if (ctx->pc != 0x2526D8u) { return; }
    }
    ctx->pc = 0x2526D8u;
label_2526d8:
    // 0x2526d8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2526D8u;
    {
        const bool branch_taken_0x2526d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2526d8) {
            ctx->pc = 0x2526E8u;
            goto label_2526e8;
        }
    }
    ctx->pc = 0x2526E0u;
    // 0x2526e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2526e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2526e4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2526e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_2526e8:
    // 0x2526e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2526e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2526ec:
    // 0x2526ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2526ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2526f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2526f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2526f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2526f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2526f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2526F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2526FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2526F8u;
            // 0x2526fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252700u;
}
