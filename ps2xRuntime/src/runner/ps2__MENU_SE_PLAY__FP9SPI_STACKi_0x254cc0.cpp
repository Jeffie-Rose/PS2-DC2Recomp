#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_SE_PLAY__FP9SPI_STACKi
// Address: 0x254cc0 - 0x254d0c
void ps2__MENU_SE_PLAY__FP9SPI_STACKi_0x254cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_SE_PLAY__FP9SPI_STACKi_0x254cc0");
#endif

    switch (ctx->pc) {
        case 0x254ce4u: goto label_254ce4;
        case 0x254cf4u: goto label_254cf4;
        case 0x254cfcu: goto label_254cfc;
        default: break;
    }

    ctx->pc = 0x254cc0u;

    // 0x254cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254cc8: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254cc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254ccc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254CCCu;
    {
        const bool branch_taken_0x254ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254CCCu;
            // 0x254cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ccc) {
            ctx->pc = 0x254CDCu;
            goto label_254cdc;
        }
    }
    ctx->pc = 0x254CD4u;
    // 0x254cd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x254CD4u;
    {
        const bool branch_taken_0x254cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254CD4u;
            // 0x254cd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cd4) {
            ctx->pc = 0x254D04u;
            goto label_254d04;
        }
    }
    ctx->pc = 0x254CDCu;
label_254cdc:
    // 0x254cdc: 0xc05191c  jal         func_146470
    ctx->pc = 0x254CDCu;
    SET_GPR_U32(ctx, 31, 0x254CE4u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254CE4u; }
        if (ctx->pc != 0x254CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254CE4u; }
        if (ctx->pc != 0x254CE4u) { return; }
    }
    ctx->pc = 0x254CE4u;
label_254ce4:
    // 0x254ce4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x254ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x254ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cec: 0xc0948d4  jal         func_252350
    ctx->pc = 0x254CECu;
    SET_GPR_U32(ctx, 31, 0x254CF4u);
    ctx->pc = 0x254CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254CECu;
            // 0x254cf0: 0x24841940  addiu       $a0, $a0, 0x1940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254CF4u; }
        if (ctx->pc != 0x254CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254CF4u; }
        if (ctx->pc != 0x254CF4u) { return; }
    }
    ctx->pc = 0x254CF4u;
label_254cf4:
    // 0x254cf4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x254CF4u;
    SET_GPR_U32(ctx, 31, 0x254CFCu);
    ctx->pc = 0x254CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254CF4u;
            // 0x254cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254CFCu; }
        if (ctx->pc != 0x254CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254CFCu; }
        if (ctx->pc != 0x254CFCu) { return; }
    }
    ctx->pc = 0x254CFCu;
label_254cfc:
    // 0x254cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254d04:
    // 0x254d04: 0x3e00008  jr          $ra
    ctx->pc = 0x254D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254D04u;
            // 0x254d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254D0Cu;
}
