#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowHp_i__16CBattleCharaInfoFv
// Address: 0x1a03e0 - 0x1a0414
void GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0");
#endif

    switch (ctx->pc) {
        case 0x1a03fcu: goto label_1a03fc;
        default: break;
    }

    ctx->pc = 0x1a03e0u;

    // 0x1a03e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a03e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a03e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a03e8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1a03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a03ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A03ECu;
    {
        const bool branch_taken_0x1a03ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a03ec) {
            ctx->pc = 0x1A0404u;
            goto label_1a0404;
        }
    }
    ctx->pc = 0x1A03F4u;
    // 0x1a03f4: 0xc0945c8  jal         func_251720
    ctx->pc = 0x1A03F4u;
    SET_GPR_U32(ctx, 31, 0x1A03FCu);
    ctx->pc = 0x1A03F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03F4u;
            // 0x1a03f8: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03FCu; }
        if (ctx->pc != 0x1A03FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03FCu; }
        if (ctx->pc != 0x1A03FCu) { return; }
    }
    ctx->pc = 0x1A03FCu;
label_1a03fc:
    // 0x1a03fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A03FCu;
    {
        const bool branch_taken_0x1a03fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03FCu;
            // 0x1a0400: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03fc) {
            ctx->pc = 0x1A040Cu;
            goto label_1a040c;
        }
    }
    ctx->pc = 0x1A0404u;
label_1a0404:
    // 0x1a0404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a040c:
    // 0x1a040c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A040Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A040Cu;
            // 0x1a0410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0414u;
}
