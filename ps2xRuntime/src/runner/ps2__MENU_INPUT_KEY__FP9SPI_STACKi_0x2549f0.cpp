#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_INPUT_KEY__FP9SPI_STACKi
// Address: 0x2549f0 - 0x254a2c
void ps2__MENU_INPUT_KEY__FP9SPI_STACKi_0x2549f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_INPUT_KEY__FP9SPI_STACKi_0x2549f0");
#endif

    switch (ctx->pc) {
        case 0x254a14u: goto label_254a14;
        default: break;
    }

    ctx->pc = 0x2549f0u;

    // 0x2549f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2549f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2549f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2549f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2549f8: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x2549f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x2549fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2549FCu;
    {
        const bool branch_taken_0x2549fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2549FCu;
            // 0x254a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549fc) {
            ctx->pc = 0x254A0Cu;
            goto label_254a0c;
        }
    }
    ctx->pc = 0x254A04u;
    // 0x254a04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x254A04u;
    {
        const bool branch_taken_0x254a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254A04u;
            // 0x254a08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a04) {
            ctx->pc = 0x254A24u;
            goto label_254a24;
        }
    }
    ctx->pc = 0x254A0Cu;
label_254a0c:
    // 0x254a0c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254A0Cu;
    SET_GPR_U32(ctx, 31, 0x254A14u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254A14u; }
        if (ctx->pc != 0x254A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254A14u; }
        if (ctx->pc != 0x254A14u) { return; }
    }
    ctx->pc = 0x254A14u;
label_254a14:
    // 0x254a14: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x254a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x254a18: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x254a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x254a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254a24:
    // 0x254a24: 0x3e00008  jr          $ra
    ctx->pc = 0x254A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254A24u;
            // 0x254a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254A2Cu;
}
