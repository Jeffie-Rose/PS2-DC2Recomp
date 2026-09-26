#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_RESET_TEXINFO__FP9SPI_STACKi
// Address: 0x254d50 - 0x254d84
void ps2__MENU_EXE_RESET_TEXINFO__FP9SPI_STACKi_0x254d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_RESET_TEXINFO__FP9SPI_STACKi_0x254d50");
#endif

    switch (ctx->pc) {
        case 0x254d74u: goto label_254d74;
        default: break;
    }

    ctx->pc = 0x254d50u;

    // 0x254d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254d58: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254d5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254D5Cu;
    {
        const bool branch_taken_0x254d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254D5Cu;
            // 0x254d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d5c) {
            ctx->pc = 0x254D6Cu;
            goto label_254d6c;
        }
    }
    ctx->pc = 0x254D64u;
    // 0x254d64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x254D64u;
    {
        const bool branch_taken_0x254d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254D64u;
            // 0x254d68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d64) {
            ctx->pc = 0x254D7Cu;
            goto label_254d7c;
        }
    }
    ctx->pc = 0x254D6Cu;
label_254d6c:
    // 0x254d6c: 0xc08aa80  jal         func_22AA00
    ctx->pc = 0x254D6Cu;
    SET_GPR_U32(ctx, 31, 0x254D74u);
    ctx->pc = 0x254D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254D6Cu;
            // 0x254d70: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AA00u;
    if (runtime->hasFunction(0x22AA00u)) {
        auto targetFn = runtime->lookupFunction(0x22AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254D74u; }
        if (ctx->pc != 0x254D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254D74u; }
        if (ctx->pc != 0x254D74u) { return; }
    }
    ctx->pc = 0x254D74u;
label_254d74:
    // 0x254d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254d7c:
    // 0x254d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x254D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254D7Cu;
            // 0x254d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254D84u;
}
