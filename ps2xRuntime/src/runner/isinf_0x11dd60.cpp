#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: isinf
// Address: 0x11dd60 - 0x11dda8
void isinf_0x11dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isinf_0x11dd60");
#endif

    ctx->pc = 0x11dd60u;

    // 0x11dd60: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x11dd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11dd64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11dd64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11dd68: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11dd68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11dd6c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11dd70: 0x22823  negu        $a1, $v0
    ctx->pc = 0x11dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11dd74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11dd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11dd78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11dd7c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x11dd7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11dd80: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x11dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11dd84: 0x3c057ff0  lui         $a1, 0x7FF0
    ctx->pc = 0x11dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32752 << 16));
    // 0x11dd88: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x11dd88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x11dd8c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x11dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11dd90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dd94: 0x41823  negu        $v1, $a0
    ctx->pc = 0x11dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x11dd98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x11dd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x11dd9c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x11dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x11dda0: 0x3e00008  jr          $ra
    ctx->pc = 0x11DDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDA0u;
            // 0x11dda4: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DDA8u;
}
