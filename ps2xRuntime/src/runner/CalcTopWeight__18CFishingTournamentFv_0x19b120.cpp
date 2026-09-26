#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTopWeight__18CFishingTournamentFv
// Address: 0x19b120 - 0x19b158
void CalcTopWeight__18CFishingTournamentFv_0x19b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTopWeight__18CFishingTournamentFv_0x19b120");
#endif

    switch (ctx->pc) {
        case 0x19b134u: goto label_19b134;
        default: break;
    }

    ctx->pc = 0x19b120u;

    // 0x19b120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b12c: 0xc066c10  jal         func_19B040
    ctx->pc = 0x19B12Cu;
    SET_GPR_U32(ctx, 31, 0x19B134u);
    ctx->pc = 0x19B130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B12Cu;
            // 0x19b130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B040u;
    if (runtime->hasFunction(0x19B040u)) {
        auto targetFn = runtime->lookupFunction(0x19B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B134u; }
        if (ctx->pc != 0x19B134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SortRecord__18CFishingTournamentFv_0x19b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B134u; }
        if (ctx->pc != 0x19B134u) { return; }
    }
    ctx->pc = 0x19B134u;
label_19b134:
    // 0x19b134: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b138: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x19b13c: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x19b13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19b140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b144: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b14c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b150: 0x3e00008  jr          $ra
    ctx->pc = 0x19B150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B150u;
            // 0x19b154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B158u;
}
