#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MinimapAllVisible__11CAutoMapGenFv
// Address: 0x1d9670 - 0x1d96b8
void MinimapAllVisible__11CAutoMapGenFv_0x1d9670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MinimapAllVisible__11CAutoMapGenFv_0x1d9670");
#endif

    switch (ctx->pc) {
        case 0x1d9680u: goto label_1d9680;
        default: break;
    }

    ctx->pc = 0x1d9670u;

    // 0x1d9670: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9678u;
    {
        const bool branch_taken_0x1d9678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9678u;
            // 0x1d967c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9678) {
            ctx->pc = 0x1D9694u;
            goto label_1d9694;
        }
    }
    ctx->pc = 0x1D9680u;
label_1d9680:
    // 0x1d9680: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x1d9680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d9684: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d9684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d9688: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1d9688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d968c: 0xa466000c  sh          $a2, 0xC($v1)
    ctx->pc = 0x1d968cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d9690: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x1d9690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_1d9694:
    // 0x1d9694: 0x0  nop
    ctx->pc = 0x1d9694u;
    // NOP
    // 0x1d9698: 0x848501b8  lh          $a1, 0x1B8($a0)
    ctx->pc = 0x1d9698u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d969c: 0x848301ba  lh          $v1, 0x1BA($a0)
    ctx->pc = 0x1d969cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 442)));
    // 0x1d96a0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d96a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d96a4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1d96a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d96a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D96A8u;
    {
        const bool branch_taken_0x1d96a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d96a8) {
            ctx->pc = 0x1D9680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9680;
        }
    }
    ctx->pc = 0x1D96B0u;
    // 0x1d96b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D96B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D96B8u;
}
