#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_DEBUG_PRINTF__FP9SPI_STACKi
// Address: 0x254d90 - 0x254dd8
void ps2__MENU_DEBUG_PRINTF__FP9SPI_STACKi_0x254d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_DEBUG_PRINTF__FP9SPI_STACKi_0x254d90");
#endif

    switch (ctx->pc) {
        case 0x254db4u: goto label_254db4;
        case 0x254dbcu: goto label_254dbc;
        case 0x254dc8u: goto label_254dc8;
        default: break;
    }

    ctx->pc = 0x254d90u;

    // 0x254d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254d98: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254d98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254d9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254D9Cu;
    {
        const bool branch_taken_0x254d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254D9Cu;
            // 0x254da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d9c) {
            ctx->pc = 0x254DACu;
            goto label_254dac;
        }
    }
    ctx->pc = 0x254DA4u;
    // 0x254da4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x254DA4u;
    {
        const bool branch_taken_0x254da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254DA4u;
            // 0x254da8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254da4) {
            ctx->pc = 0x254DD0u;
            goto label_254dd0;
        }
    }
    ctx->pc = 0x254DACu;
label_254dac:
    // 0x254dac: 0xc05191c  jal         func_146470
    ctx->pc = 0x254DACu;
    SET_GPR_U32(ctx, 31, 0x254DB4u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254DB4u; }
        if (ctx->pc != 0x254DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254DB4u; }
        if (ctx->pc != 0x254DB4u) { return; }
    }
    ctx->pc = 0x254DB4u;
label_254db4:
    // 0x254db4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x254DB4u;
    SET_GPR_U32(ctx, 31, 0x254DBCu);
    ctx->pc = 0x254DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254DB4u;
            // 0x254db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254DBCu; }
        if (ctx->pc != 0x254DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254DBCu; }
        if (ctx->pc != 0x254DBCu) { return; }
    }
    ctx->pc = 0x254DBCu;
label_254dbc:
    // 0x254dbc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x254dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x254dc0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x254DC0u;
    SET_GPR_U32(ctx, 31, 0x254DC8u);
    ctx->pc = 0x254DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254DC0u;
            // 0x254dc4: 0x2484c228  addiu       $a0, $a0, -0x3DD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254DC8u; }
        if (ctx->pc != 0x254DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254DC8u; }
        if (ctx->pc != 0x254DC8u) { return; }
    }
    ctx->pc = 0x254DC8u;
label_254dc8:
    // 0x254dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254dd0:
    // 0x254dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x254DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254DD0u;
            // 0x254dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254DD8u;
}
