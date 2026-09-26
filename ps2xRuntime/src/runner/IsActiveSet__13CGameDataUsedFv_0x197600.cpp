#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsActiveSet__13CGameDataUsedFv
// Address: 0x197600 - 0x197630
void IsActiveSet__13CGameDataUsedFv_0x197600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsActiveSet__13CGameDataUsedFv_0x197600");
#endif

    switch (ctx->pc) {
        case 0x197610u: goto label_197610;
        default: break;
    }

    ctx->pc = 0x197600u;

    // 0x197600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197608: 0xc065708  jal         func_195C20
    ctx->pc = 0x197608u;
    SET_GPR_U32(ctx, 31, 0x197610u);
    ctx->pc = 0x19760Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197608u;
            // 0x19760c: 0x84840002  lh          $a0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197610u; }
        if (ctx->pc != 0x197610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197610u; }
        if (ctx->pc != 0x197610u) { return; }
    }
    ctx->pc = 0x197610u;
label_197610:
    // 0x197610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197610u;
    {
        const bool branch_taken_0x197610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197610) {
            ctx->pc = 0x197620u;
            goto label_197620;
        }
    }
    ctx->pc = 0x197618u;
    // 0x197618: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197618u;
    {
        const bool branch_taken_0x197618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197618u;
            // 0x19761c: 0x9042001c  lbu         $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197618) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x197620u;
label_197620:
    // 0x197620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197624:
    // 0x197624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197628: 0x3e00008  jr          $ra
    ctx->pc = 0x197628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19762Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197628u;
            // 0x19762c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197630u;
}
