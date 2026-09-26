#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterID__16CBattleCharaInfoFv
// Address: 0x19f210 - 0x19f244
void GetMonsterID__16CBattleCharaInfoFv_0x19f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterID__16CBattleCharaInfoFv_0x19f210");
#endif

    switch (ctx->pc) {
        case 0x19f220u: goto label_19f220;
        default: break;
    }

    ctx->pc = 0x19f210u;

    // 0x19f210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f218: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19F218u;
    SET_GPR_U32(ctx, 31, 0x19F220u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F220u; }
        if (ctx->pc != 0x19F220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F220u; }
        if (ctx->pc != 0x19F220u) { return; }
    }
    ctx->pc = 0x19F220u;
label_19f220:
    // 0x19f220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F220u;
    {
        const bool branch_taken_0x19f220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F220u;
            // 0x19f224: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f220) {
            ctx->pc = 0x19F234u;
            goto label_19f234;
        }
    }
    ctx->pc = 0x19F228u;
    // 0x19f228: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x19f228u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x19f22c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F22Cu;
    {
        const bool branch_taken_0x19f22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F22Cu;
            // 0x19f230: 0x84224d98  lh          $v0, 0x4D98($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f22c) {
            ctx->pc = 0x19F238u;
            goto label_19f238;
        }
    }
    ctx->pc = 0x19F234u;
label_19f234:
    // 0x19f234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f238:
    // 0x19f238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f23c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F23Cu;
            // 0x19f240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F244u;
}
