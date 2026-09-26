#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcMAP_NO__FP9SPI_STACKi
// Address: 0x193870 - 0x1938bc
void gcMAP_NO__FP9SPI_STACKi_0x193870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcMAP_NO__FP9SPI_STACKi_0x193870");
#endif

    switch (ctx->pc) {
        case 0x19388cu: goto label_19388c;
        case 0x193894u: goto label_193894;
        case 0x1938a4u: goto label_1938a4;
        default: break;
    }

    ctx->pc = 0x193870u;

    // 0x193870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193878: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x193878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19387c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19387Cu;
    {
        const bool branch_taken_0x19387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19387c) {
            ctx->pc = 0x19389Cu;
            goto label_19389c;
        }
    }
    ctx->pc = 0x193884u;
    // 0x193884: 0xc05191c  jal         func_146470
    ctx->pc = 0x193884u;
    SET_GPR_U32(ctx, 31, 0x19388Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19388Cu; }
        if (ctx->pc != 0x19388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19388Cu; }
        if (ctx->pc != 0x19388Cu) { return; }
    }
    ctx->pc = 0x19388Cu;
label_19388c:
    // 0x19388c: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x19388Cu;
    SET_GPR_U32(ctx, 31, 0x193894u);
    ctx->pc = 0x193890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19388Cu;
            // 0x193890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193894u; }
        if (ctx->pc != 0x193894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193894u; }
        if (ctx->pc != 0x193894u) { return; }
    }
    ctx->pc = 0x193894u;
label_193894:
    // 0x193894: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x193894u;
    {
        const bool branch_taken_0x193894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193894) {
            ctx->pc = 0x1938A4u;
            goto label_1938a4;
        }
    }
    ctx->pc = 0x19389Cu;
label_19389c:
    // 0x19389c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19389Cu;
    SET_GPR_U32(ctx, 31, 0x1938A4u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938A4u; }
        if (ctx->pc != 0x1938A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938A4u; }
        if (ctx->pc != 0x1938A4u) { return; }
    }
    ctx->pc = 0x1938A4u;
label_1938a4:
    // 0x1938a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1938a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1938a8: 0xac225434  sw          $v0, 0x5434($at)
    ctx->pc = 0x1938a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21556), GPR_U32(ctx, 2));
    // 0x1938ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1938acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1938b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1938b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1938b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1938B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1938B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1938B4u;
            // 0x1938b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1938BCu;
}
