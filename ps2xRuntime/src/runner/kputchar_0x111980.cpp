#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kputchar
// Address: 0x111980 - 0x1119b8
void kputchar_0x111980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputchar_0x111980");
#endif

    switch (ctx->pc) {
        case 0x111988u: goto label_111988;
        default: break;
    }

    ctx->pc = 0x111980u;

    // 0x111980: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x111980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x111984: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x111984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_111988:
    // 0x111988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x111988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11198c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x11198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x111990: 0x0  nop
    ctx->pc = 0x111990u;
    // NOP
    // 0x111994: 0x0  nop
    ctx->pc = 0x111994u;
    // NOP
    // 0x111998: 0x0  nop
    ctx->pc = 0x111998u;
    // NOP
    // 0x11199c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11199Cu;
    {
        const bool branch_taken_0x11199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11199c) {
            ctx->pc = 0x111988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111988;
        }
    }
    ctx->pc = 0x1119A4u;
    // 0x1119a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1119a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1119a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1119a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119ac: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x1119acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x1119b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1119B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1119B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1119B0u;
            // 0x1119b4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1119B8u;
}
