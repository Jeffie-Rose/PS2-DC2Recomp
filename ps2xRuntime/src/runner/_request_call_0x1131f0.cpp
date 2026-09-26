#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _request_call
// Address: 0x1131f0 - 0x11327c
void _request_call_0x1131f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_call_0x1131f0");
#endif

    ctx->pc = 0x1131f0u;

    // 0x1131f0: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1131f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1131f4: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1131f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1131f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1131f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1131fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1131FCu;
    {
        const bool branch_taken_0x1131fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1131fc) {
            ctx->pc = 0x113200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1131FCu;
            // 0x113200: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11320Cu;
            goto label_11320c;
        }
    }
    ctx->pc = 0x113204u;
    // 0x113204: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113204u;
    {
        const bool branch_taken_0x113204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113204u;
            // 0x113208: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113204) {
            ctx->pc = 0x113210u;
            goto label_113210;
        }
    }
    ctx->pc = 0x11320Cu;
label_11320c:
    // 0x11320c: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x11320cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_113210:
    // 0x113210: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x113210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x113214: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x113214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x113218: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x113218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11321c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x11321cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x113220: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x113220u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x113224: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x113224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x113228: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x113228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x11322c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x11322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x113230: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x113230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x113234: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x113234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x113238: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x113238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x11323c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x11323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x113240: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x113240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x113244: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x113244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x113248: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x113248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x11324c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x113250: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x113250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x113254: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x113254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x113258: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x113258u;
    {
        const bool branch_taken_0x113258 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x113258) {
            ctx->pc = 0x113274u;
            goto label_113274;
        }
    }
    ctx->pc = 0x113260u;
    // 0x113260: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x113260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x113264: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113264u;
    {
        const bool branch_taken_0x113264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113264) {
            ctx->pc = 0x113274u;
            goto label_113274;
        }
    }
    ctx->pc = 0x11326Cu;
    // 0x11326c: 0x8044434  j           func_1110D0
    ctx->pc = 0x11326Cu;
    ctx->pc = 0x1110D0u;
    if (runtime->hasFunction(0x1110D0u)) {
        auto targetFn = runtime->lookupFunction(0x1110D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        iWakeupThread_0x1110d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x113274u;
label_113274:
    // 0x113274: 0x3e00008  jr          $ra
    ctx->pc = 0x113274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11327Cu;
}
