#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSpectolNo__13CGameDataUsedFv
// Address: 0x197250 - 0x197270
void GetSpectolNo__13CGameDataUsedFv_0x197250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSpectolNo__13CGameDataUsedFv_0x197250");
#endif

    ctx->pc = 0x197250u;

    // 0x197250: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x197254: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x197254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x197258: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197258u;
    {
        const bool branch_taken_0x197258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197258u;
            // 0x19725c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197258) {
            ctx->pc = 0x197268u;
            goto label_197268;
        }
    }
    ctx->pc = 0x197260u;
    // 0x197260: 0x84820026  lh          $v0, 0x26($a0)
    ctx->pc = 0x197260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x197264: 0x0  nop
    ctx->pc = 0x197264u;
    // NOP
label_197268:
    // 0x197268: 0x3e00008  jr          $ra
    ctx->pc = 0x197268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197270u;
}
