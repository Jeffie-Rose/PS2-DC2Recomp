#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sysbitPtr
// Address: 0x10d210 - 0x10d23c
void _sysbitPtr_0x10d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitPtr_0x10d210");
#endif

    ctx->pc = 0x10d210u;

    // 0x10d210: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10d210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10d214: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x10d214u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x10d218: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x10d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10d21c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10d220: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x10d220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d224: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D224u;
    {
        const bool branch_taken_0x10d224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d224) {
            ctx->pc = 0x10D234u;
            goto label_10d234;
        }
    }
    ctx->pc = 0x10D22Cu;
    // 0x10d22c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x10d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x10d230: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10d230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10d234:
    // 0x10d234: 0x3e00008  jr          $ra
    ctx->pc = 0x10D234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D234u;
            // 0x10d238: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D23Cu;
}
