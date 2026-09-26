#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_DTYPE__FP9SPI_STACKi
// Address: 0x252540 - 0x2525b8
void ps2__MENU_FORM_DTYPE__FP9SPI_STACKi_0x252540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_DTYPE__FP9SPI_STACKi_0x252540");
#endif

    switch (ctx->pc) {
        case 0x25256cu: goto label_25256c;
        case 0x252588u: goto label_252588;
        case 0x2525a0u: goto label_2525a0;
        default: break;
    }

    ctx->pc = 0x252540u;

    // 0x252540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25254c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252550: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252554u;
    {
        const bool branch_taken_0x252554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252554u;
            // 0x252558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252554) {
            ctx->pc = 0x252564u;
            goto label_252564;
        }
    }
    ctx->pc = 0x25255Cu;
    // 0x25255c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25255Cu;
    {
        const bool branch_taken_0x25255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25255Cu;
            // 0x252560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25255c) {
            ctx->pc = 0x2525A4u;
            goto label_2525a4;
        }
    }
    ctx->pc = 0x252564u;
label_252564:
    // 0x252564: 0xc05191c  jal         func_146470
    ctx->pc = 0x252564u;
    SET_GPR_U32(ctx, 31, 0x25256Cu);
    ctx->pc = 0x252568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252564u;
            // 0x252568: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25256Cu; }
        if (ctx->pc != 0x25256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25256Cu; }
        if (ctx->pc != 0x25256Cu) { return; }
    }
    ctx->pc = 0x25256Cu;
label_25256c:
    // 0x25256c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25256Cu;
    {
        const bool branch_taken_0x25256c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25256Cu;
            // 0x252570: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25256c) {
            ctx->pc = 0x25257Cu;
            goto label_25257c;
        }
    }
    ctx->pc = 0x252574u;
    // 0x252574: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x252574u;
    {
        const bool branch_taken_0x252574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252574u;
            // 0x252578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252574) {
            ctx->pc = 0x2525A4u;
            goto label_2525a4;
        }
    }
    ctx->pc = 0x25257Cu;
label_25257c:
    // 0x25257c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25257cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252580: 0xc0948d4  jal         func_252350
    ctx->pc = 0x252580u;
    SET_GPR_U32(ctx, 31, 0x252588u);
    ctx->pc = 0x252584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252580u;
            // 0x252584: 0x248414c0  addiu       $a0, $a0, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252588u; }
        if (ctx->pc != 0x252588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252588u; }
        if (ctx->pc != 0x252588u) { return; }
    }
    ctx->pc = 0x252588u;
label_252588:
    // 0x252588: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25258c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25258cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252590: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x252590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x252594: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x252594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252598: 0xc0948f4  jal         func_2523D0
    ctx->pc = 0x252598u;
    SET_GPR_U32(ctx, 31, 0x2525A0u);
    ctx->pc = 0x25259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252598u;
            // 0x25259c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2523D0u;
    if (runtime->hasFunction(0x2523D0u)) {
        auto targetFn = runtime->lookupFunction(0x2523D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2525A0u; }
        if (ctx->pc != 0x2525A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_dtype_init__FP16CMenuPosDataFormP9SPI_STACKi_0x2523d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2525A0u; }
        if (ctx->pc != 0x2525A0u) { return; }
    }
    ctx->pc = 0x2525A0u;
label_2525a0:
    // 0x2525a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2525a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2525a4:
    // 0x2525a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2525a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2525a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2525a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2525ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2525acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2525b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2525B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2525B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2525B0u;
            // 0x2525b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2525B8u;
}
