#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_MSGSETFUCHI__FP9SPI_STACKi
// Address: 0x254840 - 0x2548b0
void ps2__MENU_EXE_MSGSETFUCHI__FP9SPI_STACKi_0x254840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_MSGSETFUCHI__FP9SPI_STACKi_0x254840");
#endif

    switch (ctx->pc) {
        case 0x254868u: goto label_254868;
        case 0x254874u: goto label_254874;
        case 0x254884u: goto label_254884;
        default: break;
    }

    ctx->pc = 0x254840u;

    // 0x254840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25484c: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x25484cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254850u;
    {
        const bool branch_taken_0x254850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254850u;
            // 0x254854: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254850) {
            ctx->pc = 0x254860u;
            goto label_254860;
        }
    }
    ctx->pc = 0x254858u;
    // 0x254858: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x254858u;
    {
        const bool branch_taken_0x254858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254858u;
            // 0x25485c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254858) {
            ctx->pc = 0x2548A0u;
            goto label_2548a0;
        }
    }
    ctx->pc = 0x254860u;
label_254860:
    // 0x254860: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254860u;
    SET_GPR_U32(ctx, 31, 0x254868u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254868u; }
        if (ctx->pc != 0x254868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254868u; }
        if (ctx->pc != 0x254868u) { return; }
    }
    ctx->pc = 0x254868u;
label_254868:
    // 0x254868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25486c: 0xc05191c  jal         func_146470
    ctx->pc = 0x25486Cu;
    SET_GPR_U32(ctx, 31, 0x254874u);
    ctx->pc = 0x254870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25486Cu;
            // 0x254870: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254874u; }
        if (ctx->pc != 0x254874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254874u; }
        if (ctx->pc != 0x254874u) { return; }
    }
    ctx->pc = 0x254874u;
label_254874:
    // 0x254874: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x254874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x254878: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25487c: 0xc0948d4  jal         func_252350
    ctx->pc = 0x25487Cu;
    SET_GPR_U32(ctx, 31, 0x254884u);
    ctx->pc = 0x254880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25487Cu;
            // 0x254880: 0x24841920  addiu       $a0, $a0, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254884u; }
        if (ctx->pc != 0x254884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254884u; }
        if (ctx->pc != 0x254884u) { return; }
    }
    ctx->pc = 0x254884u;
label_254884:
    // 0x254884: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x254884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x254888: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x254888u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25488c: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x25488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
    // 0x254890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254894: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x254894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254898: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x254898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x25489c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2548a0:
    // 0x2548a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2548a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2548a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2548a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2548a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2548A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2548ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2548A8u;
            // 0x2548ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2548B0u;
}
