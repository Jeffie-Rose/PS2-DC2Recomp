#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ipuSetMPEG1
// Address: 0x109958 - 0x109980
void _ipuSetMPEG1_0x109958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ipuSetMPEG1_0x109958");
#endif

    ctx->pc = 0x109958u;

    // 0x109958: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x109958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10995c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x10995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x109960: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x109960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x109964: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x109964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x109968: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x109968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10996c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x10996cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x109970: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x109970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x109974: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x109974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x109978: 0x3e00008  jr          $ra
    ctx->pc = 0x109978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109978u;
            // 0x10997c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109980u;
}
