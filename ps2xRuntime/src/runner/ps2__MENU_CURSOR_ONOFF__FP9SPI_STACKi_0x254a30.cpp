#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_CURSOR_ONOFF__FP9SPI_STACKi
// Address: 0x254a30 - 0x254a7c
void ps2__MENU_CURSOR_ONOFF__FP9SPI_STACKi_0x254a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_CURSOR_ONOFF__FP9SPI_STACKi_0x254a30");
#endif

    switch (ctx->pc) {
        case 0x254a54u: goto label_254a54;
        default: break;
    }

    ctx->pc = 0x254a30u;

    // 0x254a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254a38: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254a38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254a3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254A3Cu;
    {
        const bool branch_taken_0x254a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254A3Cu;
            // 0x254a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a3c) {
            ctx->pc = 0x254A4Cu;
            goto label_254a4c;
        }
    }
    ctx->pc = 0x254A44u;
    // 0x254a44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x254A44u;
    {
        const bool branch_taken_0x254a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254A44u;
            // 0x254a48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a44) {
            ctx->pc = 0x254A74u;
            goto label_254a74;
        }
    }
    ctx->pc = 0x254A4Cu;
label_254a4c:
    // 0x254a4c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254A4Cu;
    SET_GPR_U32(ctx, 31, 0x254A54u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254A54u; }
        if (ctx->pc != 0x254A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254A54u; }
        if (ctx->pc != 0x254A54u) { return; }
    }
    ctx->pc = 0x254A54u;
label_254a54:
    // 0x254a54: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x254a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x254a58: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x254a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x254a5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254A5Cu;
    {
        const bool branch_taken_0x254a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x254a5c) {
            ctx->pc = 0x254A6Cu;
            goto label_254a6c;
        }
    }
    ctx->pc = 0x254A64u;
    // 0x254a64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x254a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254a68: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x254a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_254a6c:
    // 0x254a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254a74:
    // 0x254a74: 0x3e00008  jr          $ra
    ctx->pc = 0x254A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254A74u;
            // 0x254a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254A7Cu;
}
