#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertParts__8CEditMapFP10CEditParts
// Address: 0x1b13c0 - 0x1b13f0
void ConvertParts__8CEditMapFP10CEditParts_0x1b13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertParts__8CEditMapFP10CEditParts_0x1b13c0");
#endif

    ctx->pc = 0x1b13c0u;

    // 0x1b13c0: 0x8c830d44  lw          $v1, 0xD44($a0)
    ctx->pc = 0x1b13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
    // 0x1b13c4: 0x3c02a0a0  lui         $v0, 0xA0A0
    ctx->pc = 0x1b13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41120 << 16));
    // 0x1b13c8: 0x3442a0a1  ori         $v0, $v0, 0xA0A1
    ctx->pc = 0x1b13c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41121);
    // 0x1b13cc: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x1b13ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b13d0: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1b13d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b13d4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1b13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1b13d8: 0x0  nop
    ctx->pc = 0x1b13d8u;
    // NOP
    // 0x1b13dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b13dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b13e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b13e4: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x1b13e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x1b13e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B13E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B13ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13E8u;
            // 0x1b13ec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B13F0u;
}
