#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMovePosCenteringGyou__7CDC2MesFiii
// Address: 0x21db60 - 0x21dba4
void SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60");
#endif

    ctx->pc = 0x21db60u;

    // 0x21db60: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x21db60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21db64: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x21db64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21db68: 0x8d031e14  lw          $v1, 0x1E14($t0)
    ctx->pc = 0x21db68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7700)));
    // 0x21db6c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21db6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x21db70: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x21DB70u;
    {
        const bool branch_taken_0x21db70 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x21DB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB70u;
            // 0x21db74: 0xc33023  subu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db70) {
            ctx->pc = 0x21DB9Cu;
            goto label_21db9c;
        }
    }
    ctx->pc = 0x21DB78u;
    // 0x21db78: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x21db78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21db7c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DB7Cu;
    {
        const bool branch_taken_0x21db7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21db7c) {
            ctx->pc = 0x21DB9Cu;
            goto label_21db9c;
        }
    }
    ctx->pc = 0x21DB84u;
    // 0x21db84: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x21db84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21db88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21db8c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x21db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21db90: 0xac861b94  sw          $a2, 0x1B94($a0)
    ctx->pc = 0x21db90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7060), GPR_U32(ctx, 6));
    // 0x21db94: 0xac871b98  sw          $a3, 0x1B98($a0)
    ctx->pc = 0x21db94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7064), GPR_U32(ctx, 7));
    // 0x21db98: 0xad031c34  sw          $v1, 0x1C34($t0)
    ctx->pc = 0x21db98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7220), GPR_U32(ctx, 3));
label_21db9c:
    // 0x21db9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21DB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DBA4u;
}
