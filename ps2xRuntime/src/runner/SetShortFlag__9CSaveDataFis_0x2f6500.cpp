#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetShortFlag__9CSaveDataFis
// Address: 0x2f6500 - 0x2f6534
void SetShortFlag__9CSaveDataFis_0x2f6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetShortFlag__9CSaveDataFis_0x2f6500");
#endif

    ctx->pc = 0x2f6500u;

    // 0x2f6500: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6500u;
    {
        const bool branch_taken_0x2f6500 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F6504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6500u;
            // 0x2f6504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6500) {
            ctx->pc = 0x2F6518u;
            goto label_2f6518;
        }
    }
    ctx->pc = 0x2F6508u;
    // 0x2f6508: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x2f6508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f650c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F650Cu;
    {
        const bool branch_taken_0x2f650c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F650Cu;
            // 0x2f6510: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f650c) {
            ctx->pc = 0x2F6520u;
            goto label_2f6520;
        }
    }
    ctx->pc = 0x2F6514u;
    // 0x2f6514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6518:
    // 0x2f6518: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6518u;
    {
        const bool branch_taken_0x2f6518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6518) {
            ctx->pc = 0x2F652Cu;
            goto label_2f652c;
        }
    }
    ctx->pc = 0x2F6520u;
label_2f6520:
    // 0x2f6520: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2f6520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f6524: 0x84620100  lh          $v0, 0x100($v1)
    ctx->pc = 0x2f6524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f6528: 0xa4660100  sh          $a2, 0x100($v1)
    ctx->pc = 0x2f6528u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 6));
label_2f652c:
    // 0x2f652c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F652Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6534u;
}
