#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaxHp_i__16CBattleCharaInfoFv
// Address: 0x1a03a0 - 0x1a03d4
void GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0");
#endif

    switch (ctx->pc) {
        case 0x1a03bcu: goto label_1a03bc;
        default: break;
    }

    ctx->pc = 0x1a03a0u;

    // 0x1a03a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a03a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a03a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a03a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a03a8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a03ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A03ACu;
    {
        const bool branch_taken_0x1a03ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a03ac) {
            ctx->pc = 0x1A03C4u;
            goto label_1a03c4;
        }
    }
    ctx->pc = 0x1A03B4u;
    // 0x1a03b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A03B4u;
    SET_GPR_U32(ctx, 31, 0x1A03BCu);
    ctx->pc = 0x1A03B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03B4u;
            // 0x1a03b8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03BCu; }
        if (ctx->pc != 0x1A03BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03BCu; }
        if (ctx->pc != 0x1A03BCu) { return; }
    }
    ctx->pc = 0x1A03BCu;
label_1a03bc:
    // 0x1a03bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A03BCu;
    {
        const bool branch_taken_0x1a03bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A03C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03BCu;
            // 0x1a03c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03bc) {
            ctx->pc = 0x1A03CCu;
            goto label_1a03cc;
        }
    }
    ctx->pc = 0x1A03C4u;
label_1a03c4:
    // 0x1a03c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a03c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a03c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a03cc:
    // 0x1a03cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A03CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A03D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03CCu;
            // 0x1a03d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A03D4u;
}
