#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevFontSetColor
// Address: 0x104e20 - 0x104e58
void sceDevFontSetColor_0x104e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontSetColor_0x104e20");
#endif

    ctx->pc = 0x104e20u;

    // 0x104e20: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x104e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x104e24: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x104e24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x104e28: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x104e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x104e2c: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x104e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x104e30: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x104e30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x104e34: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x104e34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x104e38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x104e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x104e3c: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x104e3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x104e40: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x104e40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x104e44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x104e44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x104e48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x104e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x104e4c: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x104e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x104e50: 0x3e00008  jr          $ra
    ctx->pc = 0x104E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104E50u;
            // 0x104e54: 0xac880020  sw          $t0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104E58u;
}
