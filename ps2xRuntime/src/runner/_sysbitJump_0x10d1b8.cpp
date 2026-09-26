#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sysbitJump
// Address: 0x10d1b8 - 0x10d20c
void _sysbitJump_0x10d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitJump_0x10d1b8");
#endif

    ctx->pc = 0x10d1b8u;

    // 0x10d1b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10d1b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1bc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x10d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10d1c0: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x10d1c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x10d1c4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x10d1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10d1c8: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x10d1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x10d1cc: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x10d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x10d1d0: 0x22778  dsll        $a0, $v0, 29
    ctx->pc = 0x10d1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 29);
    // 0x10d1d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x10d1d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x10d1d8: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x10d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x10d1dc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x10d1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x10d1e0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x10d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x10d1e4: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x10d1e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10d1e8: 0xfce20018  sd          $v0, 0x18($a3)
    ctx->pc = 0x10d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x10d1ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D1ECu;
    {
        const bool branch_taken_0x10d1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D1ECu;
            // 0x10d1f0: 0xace6000c  sw          $a2, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1ec) {
            ctx->pc = 0x10D200u;
            goto label_10d200;
        }
    }
    ctx->pc = 0x10D1F4u;
    // 0x10d1f4: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x10d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x10d1f8: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x10d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10d1fc: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x10d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_10d200:
    // 0x10d200: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x10d200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d204: 0x8043422  j           func_10D088
    ctx->pc = 0x10D204u;
    ctx->pc = 0x10D208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D204u;
            // 0x10d208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D088u;
    if (runtime->hasFunction(0x10D088u)) {
        auto targetFn = runtime->lookupFunction(0x10D088u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sysbitFlush_0x10d088(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10D20Cu;
}
